
 #include<stdio.h>
 #include<stdlib.h>
//memory alocation
int devuelve_longitud(char *pletra){
	int cont=0;
	int longitud=0;
	cont=0;
	while(*(pletra+cont)!='\0'){
		cont++;
	}
	longitud=cont;
	return(longitud);
}
int main(){
	char *lista[3];
	int cont;
	char aux[20];
	for(cont=0;cont<3;cont++){
		printf("\npalabra %d: ",cont);
		scanf("%s",aux);
		printf("\nlongitud= %d",devuelve_longitud(aux));
		//lista[cont]=(char *) malloc(devuelve_longitud(lista+cont));
		//strcpy(lista[cont],aux);//destino,origen
		
	}	
	//mostrar lista
	printf("\n****************************************");
	printf("\n*      fabulosa lista de palabras      *");
	printf("\n****************************************");
	for(cont=0;cont<3;cont++){
		printf("\n %d .- %s",cont,*(lista+cont));
	}
	
	return 0;
}
