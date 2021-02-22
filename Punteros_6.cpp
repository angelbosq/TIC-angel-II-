#include<stdio.h>
#include<stdlib.h>
//memory alocation
int main(){
	char *pletra;
	int longitud;
	printf("\ncuantas letras: ");
	scanf("%d",&longitud);
	pletra=(char*)malloc(longitud);
	printf("\nescribe una palabra de menos de %d letras",longitud);
	scanf("%s",pletra);
	printf("\nacabas de escribir la palabra %s",pletra);
	
}
