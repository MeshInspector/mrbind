#include "multiplex_data.h"

#include "meta.h"
#include "parsed_data.h"

namespace mrbind
{
    std::vector<ParsedFile> MultiplexData(ParsedFile input, std::size_t n)
    {
        std::vector<ParsedFile> ret;
        if (n <= 1)
        {
            ret.push_back(std::move(input));
            return ret;
        }

        { // Copy everything other than the contents.
            auto entities_backup = std::move(input.entities);

            ret.reserve(n);
            for (std::size_t i = 0; i < n; i++)
            {
                ParsedFile &fragment = ret.emplace_back(input);
                fragment.fragment_index = int(i);
                fragment.num_fragments = int(n);
            }

            input.entities = std::move(entities_backup);
        }

        std::vector<std::vector<EntityContainer *>> namespace_stacks(n);
        for (std::size_t i = 0; i < n; i++)
            namespace_stacks[i].push_back(&ret[i].entities);

        std::size_t target_index = 0;

        auto lambda = [&](auto &lambda, Entity &e) -> void
        {
            std::visit(Overload{
                [&](auto &e) // Anything other than a namespace.
                {
                    namespace_stacks[target_index].back()->nested.emplace_back().variant = std::move(e);
                    ++target_index %= n;
                },
                [&](NamespaceEntity &ns)
                {
                    auto nested = std::move(ns.nested);

                    for (std::size_t i = 0; i < n; i++)
                        namespace_stacks[i].push_back(&namespace_stacks[i].back()->nested.emplace_back().variant.emplace<NamespaceEntity>(ns));

                    for (Entity &elem : nested)
                        lambda(lambda, elem);

                    for (std::size_t i = 0; i < n; i++)
                    {
                        bool empty = namespace_stacks[i].back()->nested.empty();
                        namespace_stacks[i].pop_back();
                        if (empty)
                            namespace_stacks[i].back()->nested.pop_back();
                    }
                },
            }, e.variant);
        };

        for (Entity &e : input.entities.nested)
        {
            lambda(lambda, e);
        }

        return ret;
    }
}
