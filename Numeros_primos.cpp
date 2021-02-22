//funcion que recibe un numero y lo descompone en factores primos
#include<stdio.h>
int esDivisor(int num,int divisor){
	int respuesta=0;
	if(num%divisor==0)  respuesta==1;
	return(respuesta);
}
int esPrimo(int num){
	int respuesta=1;
	int cont;
	for(cont=num-1;cont>1;cont--){
		if(num%cont==0) repsuesta=0;
	}
	return(respuesta);
}
	

}
int main(){
	int num;
	printf("introduce el numero: ");
	scanf("%d",&num);
	
}
