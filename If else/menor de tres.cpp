/* Fazer um programa que leia tr�s n�meros inteiros. Em seguida,mostrar qual o menor dentre os tr�s n�meros lidos.
Em caso de empate,mostrar apenas uma vez.*/

#include<stdio.h>

 main() {
 	
 	int a,b,c,menor;
 	
 	printf("Primeiro valor:");
 	scanf("%d",&a);
 	
 	printf("Segundo valor;");
 	scanf("%d",&b);
 	
 	printf("Terceiro valor:");
 	scanf("%d",&c);
 	
 	if (a < b) && (a < c) {
 		menor = a;
	 }
	 else if (b < c) {
	 
	 menor = b;
     }
	 else if
	 menor = c;
	 
	 printf("MENOR = %d",menor);
 }
