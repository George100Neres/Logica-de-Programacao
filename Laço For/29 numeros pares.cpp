/*Porograma que apresente os numeros pares ate o 60*/

#include<stdio.h>
#include<stdlib.h>

main()
{
 int i;
 

 
  for(i=1 ; i<=100 ; i=i+1)
     if (i==60)
       break;
       else
       if (i%2==1)  /* se 1 for impar*/
       continue;
       else
       printf("%2d\n",i);
	   printf("Fim Do La�o\n");  
}
