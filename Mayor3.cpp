/*funcion mayor
1. Nombre
2. Qu� recibe
3. Qu� devuelve
4. Como lo hace



*/
#include<stdio.h>
int devuelve_mayor(int num1,int num2,int num3){
	int mayor;
	if(num1>num2 && num1>num3) mayor=num1;
	if(num2>num1 && num2>num3) mayor=num2;
	if(num3>num1 && num3>num2) mayor=num3;
	return mayor;
}
int main(){
	int num1,num2,num3;
	printf("introduce 3 numeros enteros:\n");
	printf("numero 1: ");
	scanf("%d",&num1);
	printf("numero 2: ");
	scanf("%d",&num2);
	printf("numero 3: ");
	scanf("%d",&num3);
	printf("El mayor de %d, %d y %d es %d",num1,num2,num3);
	printf("%d",devuelve_mayor(num1,num2,num3));
	return 0;
}

