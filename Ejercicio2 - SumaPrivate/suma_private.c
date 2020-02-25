#include<stdio.h>
#include<omp.h>


int main(/*int*argc,char*argv[]*/)
{
	int suma, i = 0;
	#pragma omp parallel for private(suma)
	for (i=0; i<50; i++) 
	{
	  suma++;
	}
printf("Suma: %d\n", suma );
 return suma;
}
	
