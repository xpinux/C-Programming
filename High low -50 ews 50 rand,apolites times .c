#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void goku(int *,int *,int *,int *);

int main(int argc, char *argv[]) {
	int k[50];
	int h[50];
	int i;
	printf("O skopos autou tou programatos einai na dimiourgithoun 2 pinakes\n stous opoious o protos 9a gemizei me rand apo -50 ews 50\n na vriskei to high and low tou kai na dinei tis apolites times se enan allon pinaka\n");
	srand(time(NULL));
	for(i=0;i<50;i++){
	
	
	
	k[i]=rand()%101-50;
}

int g,l;
goku(&g,&l,k,h);
	
	printf("high %d low %d\n\n",g,l);
	for(i=0;i<50;i++)
	printf("%d\n",h[i]);
	return 0;
}

void goku(int *g, int *a,int *b,int *h)
{
	*g=100;
	*a=-100;
	int i=0;
	for(i=0;i<50;i++)
	{
		if(b[i]<0)
		h[i]=-b[i];
		if(b[i]>0)
		h[i]=b[i];
		if(g>b[i])
		*g=b[i];
		if(a<b[i])
		*a=b[i];
		
	}


}
