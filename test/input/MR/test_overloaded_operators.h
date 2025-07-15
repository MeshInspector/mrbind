#pragma once

namespace MR::OverloadedOps
{
    // Member functions.
    struct A
    {
        // The list of operators is from: https://en.cppreference.com/w/cpp/language/operators.html#Syntax

        // Unary plus.
        int operator+();
        // Binary plus.
        int operator+(A);
        // Unary minus.
        int operator-();
        // Binary minus.
        int operator-(A);
        // Dereference (unary star).
        int operator*();
        // Multiply (binary star).
        int operator*(A);
        // Divide.
        int operator/(A);
        // Modulo.
        int operator%(A);
        // Bit xor.
        int operator^(A);
        // Bit and.
        int operator&(A);
        // Bit or.
        int operator|(A);
        // Bit negate.
        int operator~();
        // Boolean negate.
        int operator!();
        // Assign.
        int operator=(A);
        // Less.
        int operator<(A);
        // Greater.
        int operator>(A);
        // Plus assign.
        int operator+=(A);
        // Minus assign.
        int operator-=(A);
        // Multiply assign.
        int operator*=(A);
        // Divide assign.
        int operator/=(A);
        // Modulo assign.
        int operator%=(A);
        // Bit xor assign.
        int operator^=(A);
        // Bit and assign.
        int operator&=(A);
        // Bit or assign.
        int operator|=(A);
        // Left shift.
        int operator<<(A);
        // Right shift.
        int operator>>(A);
        // Left shift assign.
        int operator<<=(A);
        // Right shift assign.
        int operator>>=(A);
        // Equal.
        int operator==(A);
        // Not equal.
        int operator!=(A);
        // Less equal.
        int operator<=(A);
        // Greater equal.
        int operator>=(A);
        // Compare three way.
        int operator<=>(A);
        // And.
        int operator&&(A);
        // Or.
        int operator||(A);
        // Pre-increment.
        int operator++();
        // Post-increment.
        int operator++(int);
        // Pre-decrement.
        int operator--();
        // Post-decrement.
        int operator--(int);
        // Comma.
        int operator,(A);
        // Arrow star.
        int operator->*(A);
        // Arrow.
        int operator->();
        // Function call.
        int operator()(A);
        // Indexing.
        int operator[](A);


        // Since we have a custom assignment, we also need a custom copy ctor to avoid the deprecation warning.
        A(const A &) = default;
    };

    // Free functions.
    struct B
    {
        // The list of operators is from: https://en.cppreference.com/w/cpp/language/operators.html#Syntax

        // Unary plus.
        friend int operator+(B);
        // Binary plus.
        friend int operator+(B, B);
        // Unary minus.
        friend int operator-(B);
        // Binary minus.
        friend int operator-(B, B);
        // Dereference (unary star).
        friend int operator*(B);
        // Multiply (binary star).
        friend int operator*(B, B);
        // Divide.
        friend int operator/(B, B);
        // Modulo.
        friend int operator%(B, B);
        // Bit xor.
        friend int operator^(B, B);
        // Bit and.
        friend int operator&(B, B);
        // Bit or.
        friend int operator|(B, B);
        // Bit negate.
        friend int operator~(B);
        // Boolean negate.
        friend int operator!(B);
        // Assign.
        // friend int operator=(B, B); // Can't be a free function.
        // Less.
        friend int operator<(B, B);
        // Greater.
        friend int operator>(B, B);
        // Plus assign.
        friend int operator+=(B, B);
        // Minus assign.
        friend int operator-=(B, B);
        // Multiply assign.
        friend int operator*=(B, B);
        // Divide assign.
        friend int operator/=(B, B);
        // Modulo assign.
        friend int operator%=(B, B);
        // Bit xor assign.
        friend int operator^=(B, B);
        // Bit and assign.
        friend int operator&=(B, B);
        // Bit or assign.
        friend int operator|=(B, B);
        // Left shift.
        friend int operator<<(B, B);
        // Right shift.
        friend int operator>>(B, B);
        // Left shift assign.
        friend int operator<<=(B, B);
        // Right shift assign.
        friend int operator>>=(B, B);
        // Equal.
        friend int operator==(B, B);
        // Not equal.
        friend int operator!=(B, B);
        // Less equal.
        friend int operator<=(B, B);
        // Greater equal.
        friend int operator>=(B, B);
        // Compare three way.
        friend int operator<=>(B, B);
        // And.
        friend int operator&&(B, B);
        // Or.
        friend int operator||(B, B);
        // Pre-increment.
        friend int operator++(B);
        // Post-increment.
        friend int operator++(B, int);
        // Pre-decrement.
        friend int operator--(B);
        // Post-decrement.
        friend int operator--(B, int);
        // Comma.
        friend int operator,(B, B);
        // Arrow star.
        friend int operator->*(B, B);
        // Arrow.
        // friend int operator->(B); // Can't be a free function.
        // Function call.
        // friend int operator()(B, B); // Can't be a free function.
        // Indexing.
        // friend int operator[](B, B); // Can't be a free function.
    };

    // Test how the names are generated.
    struct C
    {
        // If rhs type is same as the lhs one (ignoring cvref), it's not emitted.
        friend void operator+(const C &, C);
        // But different types are printed.
        friend void operator+(const C &, const B &);
    };

    struct D
    {
        // Disambiguating the names.
        int operator*();
        int operator*() const;

        friend int operator+(D &);
        friend int operator+(const D &);
    };
}
