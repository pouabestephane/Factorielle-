#include <stdio.h>
#include <stdlib.h>

long factorielle(int n)
{
    int i;
    long fact=1;

    for(i=1;i<=n;i++)
        fact=fact*i;
    return fact;
}

   int main()
{
  int nombre;
    printf("Entrez un nombre pour calculer la factorielle : ");
    scanf("%d",&nombre);
  if(nombre<0)
    printf("le factorielle d'un nombre negatif n'existe pas\n");
  else
    printf("%d!=%ld", nombre, factorielle(nombre));



        return 0;
}
