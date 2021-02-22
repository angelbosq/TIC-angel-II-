//Funcion que reciba un numero y devuelva si es divisible para
//2, 3, 5 y 7
#include<stdio.h>
int esPolidivisible(int num){
	int cont=0;
	int respuesta;
	if (num%2==0) cont++;
	if (num%3==0) cont++;
	if (num%5==0) cont++;
	if (num%7==0) cont++;
	if (cont==4) respuesta=1;
	return(respuesta);
}
int main(){
	int num;
	printf("Introduce un numero: ");
	scanf("%d",&num);
	if(esPolidivisible(num)==1){
		printf("%d es divisible entre 2,3,5 y 7",num);
	}else{
		printf("%d no es divisible entre 2,3,5 y 7",num);
	}
	
	return 0;
}
