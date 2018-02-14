#include <stdio.h>
#include <stdlib.h>



int main(int argc, char *argv[]) {
		int a,d[8];
		int i=1,j,temp;
		int choice;
		printf("This program purpose is the convertion of a decimal number to Binary octa or hexa\n\n");
		printf("Please give me Decimal to Convert To Binary,Octa or Hexa\n");
		scanf("%d",&a);
			printf("Please give me the choice of convertion of your liking\n\nThe choices are 1: Binary\n 2: Octa\n 3: Hexa\n 4: exit\n\n");
			scanf("%d",&choice);			
			temp=a;
			printf("the number that you wish to convert is %d \n",a);
			system("PAUSE");
			if(choice==1){
			
			while(temp!=0){
				d[i++]=temp % 2;
				temp=temp/2;
			}
			}
			if(choice==2)
			{
				while(temp!=0){
				d[i++]=temp % 8;
				temp=temp/8;
		
				}
			}
			if(choice==3){
				if(a>15){
				
				while(temp!=0){
				d[i++]=temp %16;
				temp=temp/16;
			}
				
				}
				
				if(temp<15){
				}
				if(temp==10){
				printf("%c",'A');
					}
						if(temp==11){
				printf("%c",'B');
				return 0;
					}
						if(temp==12){
				printf("%c",'C');
				return 0;
					}	
						if(temp==13){
				printf("%c",'D');
				return 0;
					}		if(temp==14){
				printf("%c",'E');
				return 0;
					}		if(temp==15){
				printf("%c",'F');
				return 0;
					}			
				
				}
			
			if(temp<10){
					printf("%d",temp);
					return 0;
					
					}
			if(choice==4)
			return 0;
			
		for(j=i -1;j>0;j--)
		printf("%d",d[j]);
	return 0;
}
