#include "bibliotheque.h"

   

int main( void ) {
    int continuer = 1;
    do{ 
        printf("Bienvenue dans mon travail personnel de l'etudiant \n");
     
        printf("\n--------------- Menu ---------------\n");
        printf("1. Resoudre une equation du second degre\n");
        printf("2. Calculer la puissance d'un nombre\n");
        printf("3. Calculer la factorielle d'un nombre\n");
        printf("4. Permuter deux nombres\n");
        printf("5.determiner si un nombre est premier\n");
        printf("6.determiner la distance entre deux points\n");
        printf("0. Quitter\n");
        
        int choice;
        printf("entrer l'operation que vous souhaitez effectuer:");
        scanf("%d", &choice);   
        
        switch (choice)
       {
       case 1:{
         double a, b, c;
            printf("Entrez les coefficients a, b et c de l'equation du second degre (ax^2 + bx + c = 0):\n");
            printf("a: ");
            scanf("%lf", &a);
            printf("b: ");
            scanf("%lf", &b);
            printf("c: ");
            scanf("%lf", &c);
            resoudreEquation(a, b, c);
            
            break;}
       
       case 2:{
        
            int base, exponent;
            printf("Entrez la base : ");
            scanf("%d", &base);
            printf("Entrez l'exposant : ");
            scanf("%u", &exponent);
            int result = power(base, exponent);
            printf("%d^%u = %d\n", base, exponent, result);
        
            break;}
        case 3:{
           
            int integer;
            printf("entrer l'entier dont on veut calculer le factoriel:");
            scanf("%d",&integer);
            int resultat=fact(integer);
            printf("le factoriel de %d est %d ",integer,resultat);
           
            break;}

        case 4:{
            int first,second;
            printf("entrer les elements que vous souhaitez permuter");
            scanf("%d %d",&first,&second);
            permutation(&first,&second);
            printf("apres permutation:first =%d et second =%d\n",first, second);
            break;}
        case 5:{
            int num;
            printf("entrez un nombre pour tester s'il est premier:");
            scanf("%d",&num);
            if(estPremier(num)){
                printf("%d est un nombre premier\n",num);
            }else{
                printf("%d n'est pas un nombre premier\n",num);
            }
            break;}
        case 6: {
            Point p1, p2;
            printf("Entrez les coordonnees du premier point (x1 y1): ");
            scanf("%lf %lf", &p1.x, &p1.y);
            printf("Entrez les coordonnees du deuxieme point (x2 y2): ");
            scanf("%lf %lf", &p2.x, &p2.y);
            double dist = distance(p1, p2);
            printf("La distance entre les deux points est: %.2f\n", dist);
            break;}
         case 0:

            printf("Au revoir et merci d'avoir utilise mon programme!\n");
            continuer = 0;     
            break;
         default:
            printf("Choix invalide. Veuillez reessayer.\n");
            break;      
            
        }
    } while( continuer == 1);
    return EXIT_SUCCESS;
}
