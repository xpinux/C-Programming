#include <stdio.h>
#include <stdlib.h>

int Fibonnaci(int a){
	if(a<2)
	return a;
	else
	return (Fibonnaci(a-2)+Fibonnaci(a-1));
	
}

int main(int argc, char *argv[]) {
	printf("This program will give us the Fibonnaci Theorim about how rabits keep reproducing");
	int z,n;
	n=atoi(argv[1]);
	z=Fibonnaci(n);
	printf("f(%d)=%d\n",n,z);
	return 0;
}
