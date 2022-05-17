#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int *p;
	int sayi,i=0,temp,k;
	p = (int *) malloc(sizeof(int));
	
	printf("Ogrenci numarinizi giriniz.\n");
	scanf("%d",&sayi);
	
	while(sayi != 0 || sayi != 1)
	{
		*(p+i) = sayi%2;
		sayi = sayi / 2;
		i++;
		p = (int *) realloc(p,sizeof(int)*(i+1));
	}
	
	*(p+i) = sayi;
	i++;
	//reverse
	for(k=0;k<i;k++)
	{
		temp = *(p+k);
		*(p+k) = *(p+i-k-1);
		*(p+i-k-1) = temp;
	}
	
	for(k=0;k<i;k++)
	{
		printf("%d",*(p+k));
	}
	
	return 0;
}
