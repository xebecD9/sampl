#include "bibliotheque.h"
#include <stdbool.h>

//definition de la fonction resolution de l'equation du segond degre
void resoudreEquation(double a, double b, double c) {
    // Vérification si c'est bien une équation du second degré
    if (a == 0) {
        if (b != 0) {
            printf("C'est une equation du premier degre. Solution : x = %.2f\n", -c / b);
        } else {
            printf("L'equation n'a pas de solution ou est une identite.\n");
        }
        return;
    }

    // Calcul du discriminant
    double delta = b * b - 4 * a * c;

    printf("Equation : %.2fx^2 + %.2fx + %.2f = 0\n", a, b, c);
    printf("Delta = %.2f\n", delta);

    if (delta > 0) {
        // Deux solutions réelles distinctes
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);
        printf("Le discriminant est positif : deux solutions reelles.\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f\n", x2);
    } 
    else if (delta == 0) {
        // Une solution réelle unique (racine double)
        double x0 = -b / (2 * a);
        printf("Le discriminant est nul : une solution unique.\n");
        printf("x0 = %.2f\n", x0);
    } 
    else {
        // Pas de solution réelle (solutions complexes)
        printf("Le discriminant est negatif : aucune solution reelle.\n");
        // Optionnel : on pourrait calculer les racines complexes ici
    }
}
// Définition d'une fonction de calcul de factorielle.
unsigned int fact( unsigned int value ) {
 unsigned int result = 1;
 while ( value > 1 ) {
 result *= value;
 value --;
 }
 return result;
}
// Définition d'une fonction d'élévation à une puissance données.
int power( int value, unsigned int pow ) {
 if ( pow == 0 ) return 1;
 if ( pow == 1 ) return value;
 int accumulator = 1;
 while( pow > 0 ) {
 accumulator *= value;
 pow--;
 }
 return accumulator;
}
//definition de la fonction permutation tableau
void permutation(int *a,int *b){
    int c=0;
    c = *a;
    *a = *b;
    *b = c;
}
//fonction qui determine si un nombre est premier
bool estPremier(int n) {
    // 1. Cas de base
    if (n <= 1) return false;
    if (n <= 3) return true;

    // 2. Élimine les multiples de 2 et 3
    if (n % 2 == 0 || n % 3 == 0) return false;

    // 3. Boucle optimisée jusqu'à racine de n
    // On teste i (6k-1) et i+2 (6k+1)
    for (int i = 5; i * i <= n; i = i + 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }

    return true;
}
//fonction qui calcule la distance entre deux points du plan
double distance(Point p1,Point p2){
    double dx=p2.x-p1.x;
    double dy=p2.x-p1.x;
    double result=sqrt(power(dx,2)+power(dy,2));
    return result;

}