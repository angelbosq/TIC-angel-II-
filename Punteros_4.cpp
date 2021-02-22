//punteros 4
#include<stdio.h>
int main(){
	int *px;
	int *py;
	int *pz;
	int x=2;
	int y=3;
	int z=5;
	px=&x;
	py=&y;
	pz=&z;
	printf("\nx= %d direccion %X",x,&x);
	printf("\ny= %d direccion %X",y,&y);
	printf("\nz= %d direccion %X",z,&z);
	printf("\nx+y+z=%d",*px+*py+*pz);
	
	
	return 0;
	
	
}
