#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int dizi[10],n,i;
	//kullanýcý -1 girince program duruyor;
	for(i=0; i<10; i++)
	{
		printf("enter a number:"); 
		scanf("%d",&dizi[i]);
		if(dizi[i]==-1)
			break;	
			
	}
	for(i=0; i<10; i++)
	{
		if(dizi[i]==-1)
		break;
		int result=dizi[i]*dizi[i];
		printf("%d\n",result); 
	}
	return 0;
}
