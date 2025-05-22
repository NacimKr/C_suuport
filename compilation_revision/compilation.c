#include <stdio.h>

// parametre 
// 1 nombre d'argument 
// 2 les valeur passé sous forme de tableau
// 3 variables d'environnement
int main(int argc, char *argv[], char *env[]){
  (void) argc; 
  if(argv[1] != NULL){
    printf("Valeur qui est %s\n", argv[1]);
    puts(env[1]);
    return 0;
  }
  return 1;
}



