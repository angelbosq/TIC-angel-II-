/*

Haz un juego en el que compites con el ordenador. Reglas:
1. Se tira el dado(n aleatorio) 3 veces de forma consecutiva
> TURNO 1. ORDENADOR (presiona cualquier tecla para tirar el dado)
> 4
> TURNO 1. PLAYER H (presiona cualquier tecla para tirar el dado)
> 3
> Gana el ordenador ;)
> TURNO 2.
Al final se dan todos los resultados parciales, la suma de los puntos
y se proclama el ganador.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int tirada(){
	int puntuacion;
	srand(time(0));
	puntuacion=rand()%6+1;
	return(puntuacion);
}

int main(){
	int cont;
	int marcador1[3];
	int marcador2[3];
	char tecla;
	for(cont=1;cont<3;cont++){
		printf("\nTURNO 1. ORDENADOR. Presiona cualquier tecla: ");
		scanf("%c",&tecla);
		marcador1[cont]=tirada();
		printf("%d",marcador1[cont]);
		//TURNO JUGADOR
		printf("\nTURNO %d. JUGADOR. Presiona cualquier tecla: ");
		scanf("%c",&tecla);
		marcador2[cont]=tirada();
		printf("%d",marcador2[cont]);
		
	}
	return 0;
}
