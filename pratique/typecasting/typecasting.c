#include <stdio.h>

/**
 * TYPECASTING (conversion de type) UTILE POUR :
 * Transformer une donnée pour faire des calculs spécifiques.
 * Utiliser un type différent pour correspondre à une fonction ou un contexte.
 */

int main(){
  int a = 42;
  float b = 65.15 / a;
  
  printf("==> %.2f", b); 
  // 1.00 conversion du float vers le int car a est un int il faut que ce soit un float pour avoir les virgule après


  // printf("--> %c\n", b);
  // printf("--> %d octets\n", sizeof(b));
  // printf("--> %d\n", a);
  // printf("--> %d octets\n", sizeof(a));
  // printf("--> %d octets\n", sizeof(a_prime));

  return 0;
}