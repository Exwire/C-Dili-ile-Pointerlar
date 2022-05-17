#include<stdio.h>

int strcmp(char *,char *);
int main(){
	
	char dogruCevap[7] = "Ankara";
	char * dogru = dogruCevap,*cet;
	char cevap[1000];
	
	puts("Turkiyenin baskenti neresidir?");
	gets(cevap);
	cet = cevap;
	
	if(strcmp(dogru,cet)==1)
	{
		puts("Tebrikler cevabiniz dogru.");
	}
	else if(strcmp(dogru,cet)==0)
	{
		puts("Cevabiniz dogru degil.");
	}
	
	return 0;
}
int strcmp(char *ptr,char *cet){
	
	int i = 0;
	while(*(ptr+i)!='\0')
	{
		int i = 0;
		if(*(ptr+i) == *(cet+i))
		{
			i++;
		}
		else
		{
			return 0;
		}
	}
	return 1;
}
