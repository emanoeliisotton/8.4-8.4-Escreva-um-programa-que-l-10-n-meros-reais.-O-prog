#include <stdio.h>
int main(void) {
  int mat[10];
  for(int i=0;i<10;i++){
    printf("Numero %i: ", i+1);
    scanf("%i", &mat[i]);
  }
  //PROCESSAMENTO
  int menor, maior, soma=0, media;
  for(int i=0;i<10;i++){// faz a soma
    soma=soma+mat[i];
  }
  //achando o menor
  menor=mat[0];//atribui o primeiro numero p/ menor
  for(int i=1;i<10;i++){//roda do segundo em diante (i=1)
    if(mat[i]<menor)  
      menor=mat[i];
  }
  //achando o maior
  maior=mat[0];//atribui o primeiro numero p/ maior
  for(int i=1;i<10;i++){//roda do segundo em diante (i=1)
    if(mat[i]>maior)  
      maior=mat[i];
  } 
  printf("\nMedia: %.2f", soma/10.0);
  printf("\nMenor: %i", menor);
  printf("\nMaior: %i", maior);
  return 0;
}