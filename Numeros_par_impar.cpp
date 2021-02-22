/*escribe una funcion que dependiendo de el numero
que le des te devuelva un 0 en el caso de que sea par
o un 1 si es impar*/
#include<stdio.h>
int esPar(int num){
	int respuesta;
	if(num%2==0)
		respuesta=1;
	else
		respuesta=0;
	
	return(respuesta);
}
int main(){
	int num;
	printf("escribe un numero ");
	scanf("%d",&num);
	if(esPar(num)==1)
		printf("%d es par", num);
	else
		printf("%d es impar", num);
	}
	return 0;
}
