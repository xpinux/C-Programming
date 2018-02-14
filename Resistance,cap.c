#include <stdio.h>
#include <stdlib.h>



int main(void){

	printf("This programm will help you determine the Number of all resistance\nand it will calculate the parrarel ,serial and the\ncomplex resistance and frequency of capacitors by selection.\n\n");
	printf("Please give me the Number of option you want to\n");
	int sele,ps,v1;
	int k=0,g=0;
	float r1,r2,rol,volt,amp,c,rc;
	printf("1 is for resistance\n2 is for capacitors\n3 or anything EXIT\n\n");	
		do{
			if(k==0)
			scanf("%d",&sele);
			if(sele==1){
				
					printf("please give me the number of 2 resistors\n");
					scanf("%f %f",&r1,&r2);
						do{
							printf("please give me if its serial 1 OR parrerel 2\n");
							scanf("%d",&ps);
					}while(ps!=1 && ps!=2);
				if(ps==1){
					rol=r1+r2;
					printf("the resistance is %fohm",rol);
				}
				else if(ps==2){
					rol=r1*r2/(r1+r2);
					printf("the resistance is   %fohm",rol);
				}
				printf("\nDo you wish to give me some input voltage\nto calculate Amp or not? 1 is yes 0 is no \n");
				scanf("%d",&v1);
				if(v1==1){
					printf("Please give me input voltage\n");
					scanf("%f",&volt);
					amp=volt/rol;
					printf("The amperage is %fA\n",amp);
				}	
				
				g=1;
				if(g==1);
				printf("do you wish to continue to go to the selection?\n1 for resistance 2 for cap 3 or anything for EXIT\n");
				
					
					
				}
			
			if(sele==2)
				{
				
					printf("Please give me the capacity(c) of the capacitor\n");
					scanf("%f",&c);
					rc=1/(2*3.14*c);
				printf("now it will calculate the complex resistance of cap and it is %fohm\n\n",rc);
				g=2;
	
				}
					if(g==2)
					printf("do you wish to continue to go to the selection?\n1 for resistance 2 for cap 3 or anything for EXIT\n\n");
					if(sele==1 || sele==2){
				
				scanf("%d",&sele);
				g=0;
				k=k+1;
			}
			if(sele!=1 && sele !=2)
			g=0;	
			
			}while(sele==1 || sele ==2);
			
			printf("EXITING");
		return 0;	
			
		}
	
	
	




