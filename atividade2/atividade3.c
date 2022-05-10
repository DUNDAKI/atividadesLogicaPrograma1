#include <stdio.h>

int main(void) {

  int numero;
  const x = 1;
  int cont =0;
  //teste github

  
  printf("Escreva um numeo: \n");
  scanf("%d", &numero);
  while(x  <= numero){
    cont++;
    
    if(numero & 2  == 0){
      printf("O número é par %d");
      
    }else{
       printf("O número é impar %d");
    }
  }
  
  return 0;
}