#include <stdio.h>

int main(){
  int a = 5;

  printf("Le resultat de l'addition vaut %d\n",a + 2);
  printf("Le resultat de la multiplication vaut %d\n",a * 2);
  printf("Le resultat de la soustraction vaut %d\n",a - 2);

  // float result = a + 10;
  // printf("Le resultat de l'addition flottante vaut %.2f\n",result);

  int my_bytwise = 1;

  // my_bytwise += 5;
  printf("Le bytewise c'est %d\n", my_bytwise = 7);
  printf("On incrémente\n");
  my_bytwise ++;
  printf("Le bytewise c'est maintenant %d\n", my_bytwise);

  // printf("Le bytewise++ c'est %d\n", my_bytwise++);
  // printf("Le bytewise++ c'est %d\n", my_bytwise++);
  // printf("Le bytewise++ c'est %d\n", my_bytwise++);

  return 0;
}