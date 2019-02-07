
#include<stdlib.h>
#include<stdio.h>
#define COLUMNAS 10
#define FILAS 10

void permutar(int matriz [FILAS][COLUMNAS] );

int main(){
  int matriz[FILAS][COLUMNAS];
  int i,j;
  int cont = 0;

  for(i=0;i<10;i++){
    for(j=0;j<10;j++){

      matriz[i][j] = cont;
      cont ++;

    }
  }

  printf("Matriz\n");

  for(i=0;i<10;i++){
    for(j=0;j<10;j++){

      printf("[%d][%d] = %d\n",i,j,matriz[i][j]);

    }
  }

  permutar(matriz);

  return 0;
}

void permutar(int matriz [FILAS][COLUMNAS]){
  int aux=0;
  int i,j;

  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      aux = matriz[i][j];
      matriz[i][j] = matriz[j][i];
      matriz[j][i] = aux;
    }
  }

  printf("\n\nPermutacion\n\n");

  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      printf("[%d][%d] = %d\n",i,j,matriz[i][j]);
    }
  }

}
