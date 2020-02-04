#include "math.h"

int ajouteDeux(int nombreRecu)
{
    int valeur(nombreRecu + 2);

    return valeur;
}


double moyenne(double tableau[], int tailleTableau)
{
   double moyenne(0);
   for(int i(0); i<tailleTableau; ++i)
   {
      moyenne += tableau[i];   //On additionne toutes les valeurs
   }
   moyenne /= tailleTableau;

   return moyenne;
}
