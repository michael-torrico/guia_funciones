#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main(){
    char a[50];
    int i;
    strcpy(a,"*");
for (i=0;i<5;i++){
    printf("%s\n",a);
    strcat(a,"*");
}
}