#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main(int argc, char *argv[]) {
	
	float dizi[8];
	float n,sum=0,avg;
	int i;
	
	for(i=0;i<8;i++)
	{
		printf("enter a number:  ");
		scanf("%f",&n);
		dizi[i]=n;
		sum=sum+n;
	}
	avg=sum/8;
	printf("average= %f",avg);
	return 0;
}

