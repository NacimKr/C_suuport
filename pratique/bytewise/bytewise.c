#include <stdio.h>

//Le BITEWISE c'est si le nombre a un signe ou pas
//C'est utile pour manipuler les valeurs au niveau des bits

int main(){
  // int = signed int donc valeur positif ou negatif
  int res = 9; //4 octets soit 32 bits
  
  //STEP 1
  //A SAVOIR
  //soit 00000000000000000000000000000001000 (32fois 0 et 1)
  //le premier 0 c'est le byte de signe
  //si le signe c'est 0 c'est positif
  //si c'est 1 c'est négatif => 100000000000000000000000010
  //printf("res : %d\n", res);

  //EXEMPLE
  // int num = 8; //0000000000000000000000000000001000
  // int num = 8; //0000000000000000000000000000100000

  // num = num << 2 // MULTIPLICATION PAR PUISSANCE DE 2 SOIT 4


  //STEP 2
  //Le << c'est multiple par 2 puissannce n et n est égal à 2
  // << C'est le nombre de fois on on fait le decalage à gauche
  //00000000000000000000000000000001000 (vaut 8)
  //devient avec res << 2 (on multiplie par par la puissance de deux donc 4)
  //00000000000000000000000000000100000 (vaut 16)
  
  //res = res >> n;
  //ou 
  //res >>= 1;
  
  // le 1 c'est le nombre de fois qu'on fait le decalage sur le nombre de bit
  //0000000000000000000000000000010000
  //Exemple res = res << 4 (on multiple par 4)
  //000000000000000000000000010000000 on a decaler de 4 cran

  //<< n => on multiplie par n ATTENTION => ce qu'on envoi sera supprimé de la mémoire donc si y'a des 1 il seront des 0
  //>> n => on divise par n ATTENTION => ce qu'on envoi sera supprimé de la mémoire donc si y'a des 1 il seront des 0
  //soit 00000000000000000000000000000001000
  //soit 00000000000000000000000000000000100


  //printf("res : %d\n", res);
  //00000000000000000000000000000100100

  //IMPORTANT TOUT CE QUI SE TROUVE A L'EXTREMITE VA ETRE SUPPRIMER DE LA MEMOIRE
  //00000000000000000000000000000000101
  //DEVIENT
  //00000000000000000000000000000000100
  //OU
  //00000000000000000000000000000000101
  //10101000000000000000000000000000000 
  //On peut passer d'un positif à un negatif  
  //ou d'un grand nombre à un petit nombre
  //quand on fait des opérations bitewise

  //STEP 3 PORTES LOGIQUES OPERATIONS DES BITWISE
  //On PEUT UTILISER LES PORTES LOGIQUES QUAND ON FAIT DES OPERATIONS BITEWISE
  //OR => |
  //AND => &
  //XOR => ^ (circonflexe)
  //NOT ~

  int a = 8;     //00001000 => 8
  int b = 1;     //00000001 => 1
  int c = a | b; //00001001 => 9

  //int res = a | b;
  //En détails (ci-dessous) pour le OR
  //00000100
  //OR
  //00000001
  //00000101 => 9 

  //int res = a & b; 
  //En details pour le AND
  //9 =>   00000101
  //1 =>   00000001
  //res => 00000001
  //On compare les deux nombres en base 2 et si les deux sont à 1 alors c'est 1 sinon c'est 0
  //UTILISE pour verifier si dans un entier naturel fait partie des nombre qui composer en puissance de 2
  // Exemple 128 fait il partie d'une puissance de 2 oui c'est 7

  a ^= b; //00000101 => 00000001 = 00000100 soit 4
  b ^= a; //00000001 => 00000101 = 00000100 soit 4
  a ^= b; //00000101 => 00000001 = 00000100 

  printf("--> %d || %d\n", a, b); // => --> 9

  return 0;
}