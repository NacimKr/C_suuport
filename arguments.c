#include <stdio.h>

int printf_string(int value){
  return value;
}

void typecasting_value(  
  short num_short,
  int num_int,
  long long num_long
){
  printf("short : %hd\n", sizeof(num_short));
  printf("int : %d\n", sizeof(num_int));
  printf("long : %lld\n", sizeof(num_long));
}

int main(int nbArg, char *valArg[], char *env[]){
  (void)env;
  char variable = 'n';

  short num_short = 10;
  int num_int = 459872655;
  long num_long = 54203648;
  float num_float = 42;

  if(variable != 'b'){
    if(valArg[0]){
      puts(valArg[0]);
    }

    for(short i=0; i<10; i++){
      printf("--> %d\n", i);
    }

    short my_bool = 12;
    while(my_bool > 0){
      printf("in while %d\n", my_bool);
      my_bool++;

      if(my_bool == 300){
        break;
      }
    }

    printf("NOMBRE ARGUMENT VIA FUNCTION : %d", printf_string(nbArg));
    typecasting_value(num_short, num_int, num_long);
  }else{
    puts(env[0]);
  }
  return 0;
}