#include <stdlib.h>
#include <stdio.h>
int funcion(int a){
    return (a*a)-2*a;
}
int main(){
    int num,result;
    printf("ingrese un numero: ");
    scanf("%d",&num);
    printf("el resultado es: %d",result=funcion(num));
}