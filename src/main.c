#include <stdio.h>

int main(void) {

  int n; /* variable destinee a contenir les nombres fournis par l'utilisateur */
  int cptr; /* compteur des entiers pairs */

  /* Initialiser un compteur a 0*/
  cptr = 0;

  /* lecture de la sequence et comptage des entiers pairs */
  for (cptr = 0, printf("Introduire un entier: "), scanf("%d", &n);
       n != 0;
      printf("Introduire un entier: "), scanf("%d", &n))
  
  /* Solution 1 : Vérifier si les nombres sont des multiples de 2 */
  if (!(n % 2)) cptr;   
  
  /* Solution 2: Vérifier si le bits de droite des nombres vaut 0 */
  if (!(n & 1)) cptr++;

  /* affichage du nombre d'entiers pairs */
  printf("Nombre d'entiers pairs: %d\n", cptr);

  return 0;
}