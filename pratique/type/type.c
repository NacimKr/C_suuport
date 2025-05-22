#include <stdio.h>

int main(int argc, char *argv[]){
  puts(argv[0]);

  // puts(argvalue[1]);
  //(void) argvalue;
  //puts(argc); //ATTENTION puts attend une chaine de caractere est pas un entier on utilisera printf

  // int age = 42; // 4octets
  // char initial = 'a'; // 1 octet seulement une lettre 8 bits
  // float pi1 = 556.2; // 4 octet maximum 7 chiffres après la virgule
  // double pi2 = 556.2; // 8 octets maximum 15 chiffres après la virgule

  // printf("age %d\n", age); // %d pour affichier un int
  // printf("initial %c\n", initial); // %c pour afficher un char
  // printf("pi1 %.8f\n",pi1); // %f pour affichier un float
  // printf("pi2 %.15f\n",pi2); // %f pour afficher un float

  return 0;
}