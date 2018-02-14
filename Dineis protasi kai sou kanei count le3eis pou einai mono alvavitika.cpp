#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>




void goku(int *b,char *pinakas)
{

		int i;
		*b=0;
		int k = 0;

	     for(i=0; i<100; i++)
		{	
			if( pinakas[i] == '\0')
			{	if(isalpha(pinakas[i-1]) )
				{
					*b = *b+1;
				}
				break;
			}
		
			if (isalpha(pinakas[i]))
			{
				k = k +1;
				continue;
			}
			else
			{
		
				if(pinakas[i] != ' ')
				{
					if(pinakas[i]!='\0')
					while(pinakas[i] != ' ')
					{
						i = i+1;
					}
					k = 0;
				}
			  
			}
				if(k != 0)
				{
					*b = *b +1;
					k = 0;
				}

		}
		
		printf("o metritis exei metrisi %d",*b);
}

int main() {
	

	char pinakas[100];
	int m=0;

	printf("dwse mou mia protiasi\n");
	
	fflush(stdin);


	gets(pinakas);

	goku(&m,pinakas);

	return 0;
}
