#include <stdio.h>

int main(){

  //On créer une constance (variable ne pouvant plus être changé)
  const int age = 42;
  printf("ma constante est %d\n", age);

  //---------Taille des variables------------
  //Réduire la taille des nombres
  short int num = 25; // 2octets soit 16 bits (le int est facultatif)
  //OU
  //short num = 25;

  //short int max = 321885485588; // il reparre a la taille minimum

  //Aigmenter la taille des nombre
  long long_num = 1456789; // 4 octets
  long long long_long_num = 456789123; // 8 octets

  printf("short - %hd\n", sizeof(num)); //%hd pour afficher un short int (2octets)
  printf("long - %ld\n", long_num); //%ld pour affichier un long int (4octets)
  printf("long long - %lld\n\n", long_long_num); //%lld pour afficher un long long int (8octets)

  unsigned int unsigned_int = 456;  //On enleve tous les signes avant le nombre (nombre positifs) 
  printf("unsigned - %i\n", unsigned_int); //%i pour afficher un unsigned int
  
  // Unsigned on peut le melanger avec les autres types 
  // EXEMPLE : 
  // unsigned long long int (affichage %llu)
  // unsigned short (affichage %llhd)

  printf("------------------------------------------\n");
  //ON AFFICHE LES TAILLES DE VARIABLE
  int size_long_num = sizeof (long_num); //sizeof donne la taille en octet
  printf("Size of VAIRABLE long_num %d octets\n", size_long_num);
  
  return 0;
}