#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#include <stdlib.h>
#define IdxMin 1

typedef struct
{
    int *El;
    int Neff;
} List;
/* ADT List menyimpan data bertipe integer */

/* SELEKTOR */
#define El(M, i) (M).El[(i)] 
#define Neff(M) (M).Neff

/*  KOSNTRUKTOR */
void MakeList(List* M, int N);

/* FUNGSI LAINNYA */
void ReadList();
void SetEl(List* M, int i, int val);

#endif