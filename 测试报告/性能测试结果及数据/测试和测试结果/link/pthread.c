# include <stdio.h>

# include <stdlib.h>
# include <pthread.h>



# define NUM_THREADS 10



void *print(void *threadid);


void main()
{
	
	pthread_t tid[NUM_THREADS];
	
	int i,rc;
	
	
	for(i=0;i<NUM_THREADS;i++)
{
		
			
		printf("IN main:creating thread %d\n",i);

		
		rc=pthread_create(&tid[i],NULL,print,(void *)i);
			
		
		if(rc){
			
			printf("ERROR:return code from Pthread_create() is %d\n",rc);
		
			exit(-1);			
		
		}	
	
	}
	
	pthread_exit(NULL);

}



void *print(void *threadid)
{
	

	int tid=(int)threadid;
	
	
	printf("hello i am thread id=%d\n",tid);


	pthread_exit(NULL);


}

