#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dizi[10],i,n;
	for(i=0; i<10; i++)
	{
		printf("dizi[%d]=",i);
		scanf("%d",&dizi[i]);
	}
	printf("Verilen dizinin tersten hali: \n");
	printf("{");
	for(i=9; i>=0; i--)
	{
		if(i==0)
		printf("%d}",dizi[i]);
		else 
		printf("%d,",dizi[i]);
	
	}
	return 0;
}
