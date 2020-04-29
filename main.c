/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int puissance(int n, int p)
{
    int i, resultat = 1;
    for(i=0; i<p; i++)
    {
        resultat *= n;
    }
    return resultat; 
}
int main()
{
   int nbr, puiss;
   printf("Tapez votre nombre entier :\n");
   scanf("%d", &nbr);
   printf("Tapez la puissance :\n");
   scanf("%d", &puiss);
   printf("La valeur de %d puissance %d = %d",nbr,puiss,puissance(nbr,puiss));
    return 0;
}
