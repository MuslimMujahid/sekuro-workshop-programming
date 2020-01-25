#ifndef _POINT_H_
#define _POINT_H_

#include <stdio.h>
#include <math.h>

typedef struct
{
    int x, y;
} Point;

/* SELEKTOR */
#define X(a) (a).x
#define Y(a) (a).y

/* KONSTRUKTOR */
void MakePoint(Point *P, int x, int y);

/* FUNGSI LAINNYA */
double dist_2_point(Point P1, Point P2);

#endif