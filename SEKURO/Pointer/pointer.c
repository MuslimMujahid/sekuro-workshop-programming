#include <stdio.h>
#include <stdlib.h>

void pass_by_value(int a)
{
    a = 2;
}

void pass_by_pointer(int* a)
{
    *a = 2;
}

int main()
{
    int a = 1;
    printf("Nilai awal : %d\n", a);

    pass_by_value(a);
    printf("Setelah pass by value : %d\n", a);

    pass_by_pointer(&a);
    printf("Setelah pass by pointer : %d\n", a);

    return 0;
}