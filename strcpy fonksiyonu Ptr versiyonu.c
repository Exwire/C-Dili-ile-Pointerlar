#include<stdio.h>

int strcpyPtr(char *,char *);
int main(){
	
	char *p1="Merhaba" , dizi1[1000], *p2 = dizi1;
	strcpyPtr(p1,p2);
	puts(dizi1);
	
	return 0;	
}

int strcpyPtr(char *a1,char *a2){
	
	int i = 0;
	
	while(a1[i]!='\0')
	{
		a2[i] = a1[i];
	}
	return 0;
}
