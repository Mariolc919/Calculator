#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>


void pantalla();
void calculadora();
void suma(int num);
void resta(int num);
void multiplicacion(int num);
void division(int Num);

int main(){ 
    int Num=0;
    char opc;
    for(;;){
        
        system("clear");
        pantalla();
        calculadora();//Escaneo la operacion que desea ejecutar
    
        scanf("%d ",&Num);//Primer numero que se ingresa va a ir a la pantalla
        system("clear");
        printf("-----------------\n");
        printf("| %d             |\n",Num);
        calculadora();
        scanf("%c",&opc);
    
        switch(opc){
         case '+': suma(Num);break;
         case '-': resta(Num);break;
         case 'x':multiplicacion(Num);break;
         case '/':division(Num);break;
         default:;
         }

    }
    
    return 0;
}       


void pantalla(){
    printf("---------------------\n");
    printf("|                   |\n");

}

void calculadora(){
    printf("---------------------\n");
    printf("| + | - | x | / | = |\n");
    printf("---------------------\n");
    printf(" |  1  |  2  |  3  |\n");
    printf(" -------------------\n");
    printf(" |  4  |  5  |  6  |\n");
    printf(" -------------------\n");
    printf(" |  7  |  8  |  9  |\n");
    printf(" -------------------\n");
    printf(" |  0  |\n");
    printf(" ------\n");
}

void suma(int num){

  int num2 = 0;
  int suma;
  char igual;
  
  system("clear");
  printf("---------------------\n");
  printf("| %d +               |\n",num);
  calculadora();
  scanf("%d",&num2);

  suma = num + num2;

  system("clear");
  printf("---------------------\n");
  printf("| %d + %d = %d       |\n",num,num2,suma);
  calculadora();    
  system("read -n1 -p '' key");
  
}


void resta(int num){
 int num2 = 0;
  int resta;
  char igual;
  
  system("clear");
  printf("---------------------\n");
  printf("| %d -               |\n",num);
  calculadora();
  scanf("%d",&num2);

  resta = num - num2;

  system("clear");
  printf("---------------------\n");
  printf("| %d - %d = %d     |\n",num,num2,resta);
  calculadora();    
  system("read -n1 -p '' key");


}

void multiplicacion(int num){
  int num2 = 0;
  int mult;
  char igual;
  
  system("clear");
  printf("---------------------\n");
  printf("| %d x             |\n",num);
  calculadora();
  scanf("%d",&num2);

  mult = num * num2;

  system("clear");
  printf("---------------------\n");
  printf("| %d x %d = %d     |\n",num,num2,mult);
  calculadora();    
  system("read -n1 -p '' key");


}
void division(int num){
  int num2 = 0;
  int divi;
  char igual;
  
  system("clear");
  printf("---------------------\n");
  printf("| %d /             |\n",num);
  calculadora();
  scanf("%d",&num2);

  divi = num / num2;

  system("clear");
  printf("---------------------\n");
  printf("| %d / %d = %d       |\n",num,num2,divi);
  calculadora();    
  system("read -n1 -p '' key");


}
