//Bibliothèque pour faire de l'input output sur le terminal et afficher 
#include <stdio.h>

//la fonction main est le point d'entrée de tous les programmes
//écrit en C

//On peux passer des parametre a l'éxécution de notre programme
// premier c'est le nombre de parametre qu'on a passer on l'appelle argc par défaut (compteur d'argument)
// deuxieme c'est les valeur de nos parametres on l'appelle char *argv[] (valeur de nos aguments sous forme de tableau)
// troisieme c'est les variable d'environnement (information système) on peux y accèder dans notre programme
// EXEMPLE main.exe param1 param2 param3

//prermier parametre DOIT ETRE UN NOMBRE EN CAS INVERSE Y'A UNE ERREUR
//Soit il prend 0 ou 2 arguement 
int main(int argc, char *argv[], char *argenv[]){
  int a = 9;
  int *pa = &a;

  //si on veux cacher les erreurs quand une variable est pas utiliser
  (void) argc;

  printf("Ma variable a est situe au %p\n", &pa);
  printf("La valeur de la variable a est %d\n", *pa);

  puts(argv[1]);
  puts(argenv[0]);

  return 0;
}