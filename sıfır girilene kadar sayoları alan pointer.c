#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int i,k;
	int *a1;
	
	a1 = (int *) malloc(sizeof(int));
	
	while(*(a1+i-1)!=0)
	{
		printf("Bir sayi giriniz.(0 girince uygulama kapanýr.)\n");
		scanf("%d",a1+i);
		i++;
		a1 = (int *) realloc(a1,sizeof(int)*(i+1));
	}
	
	for(k=0;k<i;k++)
	{
		printf("%d\n",*(a1+k));
	}
	
	return 0;
}
