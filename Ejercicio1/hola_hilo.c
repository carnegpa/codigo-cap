#include<omp.h>
#include<stdio.h>

int main(/*int*argc,char*argv[]*/)
{
  //specify the block to be executed in parallel
  int nthreads;
  #pragma omp parallel
  {
    int id = omp_get_thread_num();
    nthreads = omp_get_num_threads();
    printf("Hola desde el hilo %d, de %d\n", id , nthreads); 
    //Todos los hilos se unen al thread maestro y finalizan
  }
 return 0;
}
	
