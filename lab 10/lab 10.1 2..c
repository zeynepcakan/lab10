#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i,dizi[8];
	float avg;
	int sum=0;
	printf("enter 8 numbers: \n");
	for( i=0; i<8; i++)
	{
		printf("%d. number: ",i+1); scanf("%d",&dizi[i]);
		
	}
	for(i=0; i<8; i++)
	{
		printf("%d\n",dizi[i]);
		sum=sum+dizi[i];
	}
	avg=(float)sum/8;
	printf("Average=%f",avg);

	return 0;
}
