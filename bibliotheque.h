#ifndef __MY_MATH_LIB_H
#define __MY_MATH_LIB_H
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
typedef struct {
    double x;
    double y;
} Point;
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value );
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow );
//definition de la fonction permutation tableau
void permutation(int *a,int *b);
//resolution de l'equation du segond degre
void resoudreEquation(double a, double b, double c);
bool estPremier(int n);
double distance(Point p1, Point p2);

#endif