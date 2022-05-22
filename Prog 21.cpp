/* Autor: Xavier Romero Hernández, Realizado: 24/02/2022 
	Programa que pida 20 numeros y calcule su suma
	*/
	
#include <stdio.h>

int main(){
	float numero, suma;
	int i=0;
	while(i<=20){
		printf("Introduce un numero: ");
		scanf("%f",&numero);
		suma=suma+numero;
		i++;
	}
	printf("\nla suma total es de %.2f", suma);
	
	return 0;
}
