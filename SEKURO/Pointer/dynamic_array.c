#include <stdio.h>
#include <stdlib.h>

void ReadArray(int *array, int N)
/* Membaca nilai array indeks ke-0 sd N-1 */
{
    printf("Membaca nilai array\n");
    int i;
    for (i = 0; i < N; ++i)
    {
        scanf("%d", &array[i]);
    }
}

void PrintArray(int *array, int N)
/* Menampilkan nilai array indeks ke-0 sd N-1 */
{
    printf("Menampilkan nilai array\n");
    int i;
    for (i = 0; i < N; ++i)
    {
        printf("%d ", array[i]);
    }
}

int main()
{
    int *array;
    int N = 3;

    /* Membuat array of integer dengan ukuran 10 */
    array = (int*)malloc(sizeof(int)*10);

    /* Membaca nilai array */
    ReadArray(array, N);

    /* Meanpilkan nilai array */
    PrintArray(array, N);
}