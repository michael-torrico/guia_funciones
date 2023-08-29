#include <stdlib.h>
#include <stdio.h>
int funcion(int a){

if(a==2){ return 28;} 
if((a==1)||(a==3)||(a==5)||(a==7)||(a==8)||(a==10)||(1==12)) {return 31;}
if((a==4)||(a==6)||(a==9)||(a==11)){return 30;} 
}
int main(){
    int num,dias;
    printf("ingrese un numero del 1 al 12: ");
    scanf("%d",&num);
    printf("la cantidad de dias es: %d",dias=funcion(num));
}