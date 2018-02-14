#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main(int argc, char *argv[]) {
		int *ptr1,*ptr2,i=0;
		int ripsis;

		int ath1=0;
		int ath2=0;
		
		srand(time(NULL));
		printf("dwste mou arithmo ripsewn\n");
		scanf("%d",&ripsis);
		
		
				ptr1=(int*)malloc(ripsis*sizeof(int));
				ptr2=(int*)malloc(ripsis*sizeof(int));
				for(i=0;i<ripsis;i++){
					printf("Patiste gia na pai3ete\n");
					system("PAUSE");
					ptr1[i]=rand()%6+1;
					printf("oi zaries sas einai :%d\t",ptr1[i]);
					ptr2[i]=rand()%6+1;
					printf("oi zaries tou cpu einai: %d\n",ptr2[i]);
					if(ptr1[i]>ptr2[i])
					ath1=ath1+1;
					if(ptr2[i]>ptr1[i])
					ath2=ath2+1;
				}
			
	
		
				
			
				
	
		
		if(ath1>ath2)
		printf("nikisate\n");
		if(ath2>ath1)
		printf("nikise to cpu\n");
		if(ath2==ath1)
		printf("exoume isopalia\n");	
		
		
	
	
	
	return 0;
}
