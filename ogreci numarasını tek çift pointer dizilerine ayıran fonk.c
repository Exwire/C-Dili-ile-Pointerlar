#include<stdio.h>
#include<stdlib.h>

int fonk(int *,char *,int);
int main(){
	
	int sayi,k,i;
	int *tek;
	char *cift;
	
	tek = (int *) malloc(sizeof(int)*1);
	cift = (char *) malloc(sizeof(char)*1);
	
	puts("Ogrenci numaranizi giriniz.");
	scanf("%d",&sayi);
	
	k=fonk(tek,cift,sayi);
	
	printf("Ogrenci numaranizdaki tek sayilar =");
	for(i=0;i<=k-1;i++)
	{
		printf("%d\n",*(tek+i));
	}
	printf("Ogrenci numaranizdaki cift sayilar =");
	for(i=0;i<=k;i++)
	{
		printf("%d\n",*(cift+i));
	}
	return 0;
}

int fonk(int *tek,char *cift,int sayi){
	
	int k=0,b=0;
	
	while(sayi != 0)
	{
		if(sayi%2==1)
		{
			*(tek+k) = sayi%10;
			tek = (int *) realloc(tek,sizeof(int)*(k+1));
			k++;
		}
		else
		{
			*(cift+b)=sayi%10;
			b++;
			cift = (char *) realloc(cift,sizeof(char)*(b+1));
		}
		sayi = sayi/10;
	}
	
	return k;
}
