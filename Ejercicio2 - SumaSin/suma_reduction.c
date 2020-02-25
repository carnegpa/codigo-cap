#include<stdio.h>
#include<omp.h>

int main()
{
	int suma, i = 0;
	#pragma omp parallel for reduction(+:suma)
	for (i=0; i<50; i++) 
	{	
		printf("%d\n", suma );	
		suma++;
	}
	printf("sum: %d \n", suma);
 return suma;
}
	
