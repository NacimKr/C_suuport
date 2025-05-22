#include <stdio.h>

// premier parametre int argc (nombre d'argument)
// deuxieme parametre char *argv[] (tableau d'argument)
//Les deux paramtre fonctionne ensemble si on eneleve un l'autre marchera pas

//facultatif char *env[] pour les variables environnement
int main(int argc, char *argv[], char *env[]){
  (void)argc;
  puts(argv[0]);
  if(argv[1]){
    puts(argv[1]);
  }

  //variable environnment en parametre facultatif
  puts(env[0]);

  // short num_short = 42;
  // printf("num = %d", num_short);
  return 0;
}  