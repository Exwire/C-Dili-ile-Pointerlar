#include<stdio.h>
#include<string.h>

int main(){
	
	char dizi1[100],dizi2[100];
	int a;
	
	printf("Dizi1 char dizisi için bir kelime giriniz.\n");
	gets(dizi1);
	printf("Dizi2 char dizisi için bir kelime giriniz.\n");
	gets(dizi2);
	
	
	printf("Dizi1 in uzunlugu = ");
	a = strlen(dizi1);
	printf("%d \n",a);
	
	printf("Dizi2 in uzunlugu = ");
	a = strlen(dizi2);
	printf("%d \n",a);
	
	
	printf("Ýki dizinin karsilastirilmasi = ");
	a = strcmp(dizi1,dizi2);
	a = a<=0 ? -1 * a : a;
	printf("%d \n",a);
	
	printf("Ýki dizinin birleþimi = ");
	puts(strcat(dizi1,dizi2));
	
	
	return 0;
}
