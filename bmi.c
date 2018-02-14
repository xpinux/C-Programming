#include <stdio.h>
#include <stdlib.h>




int main() {
		printf("This programm is made for monitoring your health.\nWith this programm you can calculate easy and fast your Body Mass Index\nand check if you are in the acceptable limits.\n\n");
		float kg,m,bmi;
		printf("Please give me first weight in kg and then Height in m\n");
		printf("NOTE IF YOU GIVE FIRST HEIGHT AND THEN KG IT WILL BE WRONG\n");
	
			do{
					
					LOL:scanf("%f",&kg);
					if(kg<=25 || kg >=200){
					
					printf("Give me again kg\n");
					goto LOL;
				}
				  		LOL2:scanf("%f",&m);
				 	if(m<=0.30 || m>=2.20)
					{
					
					printf("Give me again m\n");
					goto LOL2;
				}
			}while(kg>=200 && m>2.20 || kg<=200 && m>2.20 );
	
		bmi=kg/(m*m);
		if(bmi<=18.5)
		printf("You are underweight START EATING %f",bmi);
		else if(bmi>18.5 && bmi<=24.999)
		printf("You are regular %f",bmi);
		else if(bmi>25 && bmi<=29.9)
		printf("You are Overweight %f",bmi);
		else
		printf("You have obsesity GO TO A DOCTOR %f",bmi);			
	
	printf("\n\n");
system("PAUSE");
	return 0;
}
