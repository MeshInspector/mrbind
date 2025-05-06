namespace MR
{
    struct A
    {

    };

    struct B
    {
        operator A() {return {};}
    };
}
