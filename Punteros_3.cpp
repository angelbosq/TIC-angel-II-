//punteros 3
#include<stdio.h>
int main(){
	char letra_1;
	char letra_2;
	char letra_3;
	char *pletra_2;
	char *pletra_3;
	char *pletra_1;
	letra_1='y';
	letra_2='x';
	letra_3='z';
	pletra_1=&letra_1;
	pletra_2=&letra_2;
	pletra_3=&letra_3;
	printf("la variable letra 1 = %c  ",letra_1);
	printf("la variable letra 2 = %c  ",letra_2);
	printf("la variable letra 3 = %c  ",letra_3);
	printf("\nla posicion de memoria de letra 1 = %X",&letra_1);
	printf("\n pletra 1 = %X",pletra_1);
	printf("\nla posicion de memoria de letra 2 = %X",&letra_2);
	printf("\n pletra 2 = %X",pletra_2);
	printf("\nla posicion de memoria de letra 3 = %X",&letra_3);
	printf("\n pletra 3 = %X",pletra_3);
	printf("el contenido de letra desde su puntero = %c",*pletra_3);
	
	return 0;
	
	
}
