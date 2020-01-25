#include "point.h"

void MakePoint(Point *P, int x, int y)
/* Membuat point dengan nilai x dan y */
{
    X(*P) = x;
    Y(*P) = y;
}

double dist_2_point(Point P1, Point P2)
/* Mengembalikan nilai jarak 2 point */
{
    return sqrt(pow(X(P1)-X(P2), 2)+pow(Y(P1)-Y(P2),2));
}