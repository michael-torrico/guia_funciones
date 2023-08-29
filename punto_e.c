#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
char a[100];
int num,i;
strcpy(a,"*");
printf("ingrese la cantidad de filas \n",num);
scanf("%d",&num);
for(i=0;i<num;i++){
	printf("%s\n",a);
	strcat(a,"*");
			
    }
}
