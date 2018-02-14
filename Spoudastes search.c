#include <stdio.h>
#include <stdlib.h>

struct student {
char epitheto[20];
int examino;
float v1,v2; };

void func_dose(struct student *pin,int *sp){
	int i;
	for(i=0;i<*sp;i++){
	printf("Dwse mou to onoma tou spoudasti:%d\n ",i+1);
	fflush(stdin);
	scanf("%s",pin[i].epitheto);
		do{
			printf(" Dwse mou examino:1-7\n");
			scanf("%d",&pin[i].examino);
		
			printf("  To examino einai %d  an exeis kanei LATHOS\nprepei na mou dwseis apo: 1 ews 7\n\n",pin[i].examino);
		}while(pin[i].examino<1 || pin[i].examino>7 );
		do{
			printf(" Dwse mou vathmo:1 kai vathmo:2 apo 1-10\n\n");	
			scanf("%f %f",&pin[i].v1,&pin[i].v2);
			
			
	}while(pin[i].v1<1 || pin[i].v1>10 || pin[i].v2<1 || pin[i].v2>10);
		
		
	}
		
		
	}


void func_search(struct student *pin,int *sp)
{
	int i;
	int j=0;
	char c;
	
	scanf("%c",&c);
	for(i=0;i<*sp;i++){
	
	if(c==pin[i].epitheto[0]){
	
	printf("O foititis me auta ta stoixeia einai o %s me v1:%f kai v2:%f\nkai vrisketai sto examino %d\n",pin[i].epitheto,pin[i].v1,pin[i].v2,pin[i].examino);
	break ;
}
	
	j=j+1;
	if(c!=pin[i].epitheto[0] && j==*sp)
	printf("Dn vre9ike spoudastis me auto to arxiko gramma!!");
	
	
}
	
}

int main(void) {
	int i,spoud;
	int sele;
	
	printf("Me auto to programma mporoume na dwsoume gia osous spoudastes 9eloume\nstoixeia kai sto telos na psa3oume gia enan sigkekrimeno me\nto proto gramma tou epithetou tou kai na mas vgalei ta stoixeia\n!!!Ka9ws emfanizei pioi perasan kai oxi !!!\n\n\n");	
	printf("Dwse mou posoi spoudastes einai\n");
	scanf("%d",&spoud);
	struct student *pin=(struct student*)malloc(spoud*sizeof(struct student));

	printf("Dwse mou ta stoixeia twn spoudastwn\n\n");
	func_dose(pin,&spoud);
	printf("      Dwse mou gramma spoudasti pou 9es na psa3eis\n\n");
	fflush(stdin);
	func_search(pin,&spoud);
	printf("\n\n9elete na sinexisete na deite pioi perasan kai pioi oxi?\nAn nai patiste 1 allios oti nane\n\n");
	scanf("%d",&sele);
	if(sele==1){
	for(i=0;i<spoud;i++)
	{
		if(pin[i].v1>=5)
		printf("tin proti askisi tin perasan oi %s\n\n",pin[i].epitheto);
	

		if(pin[i].v2>=5)
		printf("tin deuteri askisi tin perasan oi %s\n\n",pin[i].epitheto);
	
	
		if(pin[i].v1<5)
		printf("tin proti askisi tin apetixan oi %s\n\n",pin[i].epitheto);

	
		if(pin[i].v2<5)
		printf("tin deuteri askisi tin apetixan oi %s\n\n",pin[i].epitheto);
	}
		

	
}
	
	
	
	return 0;
}
