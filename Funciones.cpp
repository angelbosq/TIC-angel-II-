//Funciones
#include<stdio.h>
int devuelveSuma(int num1,int num2){
	if (num1>num2){
		mayor=num1
	}else{
		mayor=num2
	}
	return(num1+num2);
}

int main(){
	int num1;
	int num2;
	int suma;
	printf("Numero 1= ");
	scanf("%d",&num1);
	printf("Numero 2= ");
	scanf("%d",&num2);
	suma=devuelveSuma(num1,num2);
	printf("El mayor de %d y %d es %d",num1,num2,suma);
	return 0;
	
}
