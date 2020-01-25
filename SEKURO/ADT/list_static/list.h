#ifndef _LIST_H_
#define _LIST_H_

#include <stdio.h>
#define MAX 20
#define IdxMin 1

typedef struct
{
    int El[MAX+1];
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