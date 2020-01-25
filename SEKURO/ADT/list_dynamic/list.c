#include "list.h"

void MakeList(List* L, int N)
/* Membuat list dengan N buah data */
{
    L->El = (int*)malloc(sizeof(int)*(N+1));
    Neff(*L) = N;
}

void ReadList(List* L)
/* Membaca nilai setiap elemen pada list L */
{
    int i;
    for (i = IdxMin; i < Neff(*L); ++i)
    {
        scanf("%d", &El(*L, i));
    }
}

void SetEl(List* L, int i, int val)
/* Mengubah data pada index ke-'i' dengan nilai 'val' pada list M */
{
    El(*L, i) = val;
}