#include<stdio.h>
#include<stdlib.h>

int main(){
	
	char *p;
	int sayi = 2010213002,sum=0,i,k,j;
	
	p = (char *) malloc(sizeof(char)*7);
	p = "Berkay";
	
	while(sayi != 0)
	{
		sum += sayi % 10;
		sayi /= 10;
	}
	
	p = (char *) realloc(p,sizeof(char)*sum);
	i = (sum-1)/6;
	
	j=0;
	for(k=0;k<i;k++)
	{
		*p[j]='B';
		*p[j+1]='e';
		*p[j+2]='r';
		*p[j+3]='k';
		*p[j+4]='a';
		*p[j+5]='y';
		j += 6;
	}
	
	puts(p);
	
	return 0;
}
