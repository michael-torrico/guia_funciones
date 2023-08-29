#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int suma(int a, int b){
	return a+b;
}
void resta(int a, int b){
	int re=a-b;
    printf("el resultado es: %d\n",re);
	}
float divi(int a, int b){
	float n1=a,n2=b;
	return  n1/n2; 
}
int main(){
	char ope[50];
	int num1,num2,result,n=0;
	float resultado;
	printf("ingrese un numero: ");
	scanf("%d",&num1);
	printf("ingrese un numero: ");
	scanf("%d",&num2);
	do{
	printf("sumar, restar, multiplicar, dividir)");
	scanf("%s",&ope);
	if (strcmp(ope,"sumar")==0){printf("el resultado es: %d\n",result=suma(num1,num2));}
	if (strcmp(ope,"restar")==0){resta(num1,num2);}
	if (strcmp(ope,"dividir")==0){printf("el resultado es: %.2f\n",resultado=divi(num1,num2));}
	if (strcmp(ope,"multiplicar")==0){printf("el resultado es: %d\n",result=num1*num2);}
	printf("1 para hacer mas operaciones con los mismos numeros 0 para finalizar \n");
	scanf("%d",&n);
	}while(n!=0);
system("pause");
return 0;
}
				
				
