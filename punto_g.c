#include <stdio.h>
#include <stdlib.h>
float funcion (int a, float b){
	if(a>12){return b-b*10/100;} else{
		if (a>6){return b-(b*4/100);} else{
			if (a<6){return b;}
		}
	}
}
	
int main(){
int uni;
float precio,preciof;
printf("ingrese la cantidad de unidades: ");
scanf("%d",&uni);
printf("ingrese el precio: ");
scanf("%f",&precio);
printf("precio final: %.2f\n",preciof=funcion(uni,precio));
system("pause");
    return 0;
}
