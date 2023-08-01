#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[])
{
	printf("Los numeros pares del 2 al 22222222 son: \n");
	int i;
	float a;
	
for(i=2;i<=22222222;i++)

{
	a=i%2;
	if(a==0)
	printf("%d\n",i);
	
}
	
	
	system ("PAUSE");
	return 0;
}

