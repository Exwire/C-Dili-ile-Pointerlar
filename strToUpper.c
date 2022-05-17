#include<stdio.h>

int strtoUpper(char *a);
int main(){
	
	char *p,karakterdizisi[8] = "merHABA";
	p = karakterdizisi;
	strtoUpper(p);
	puts(karakterdizisi);
}
int strtoUpper(char *p){
	
	int i=0;
	while (p[i]!='\0')
	{
		if(p[i]<123 && p[i]>96)
		{	
				p[i] -= 32;
				i++;
		}
		else
			i++;	
	}
	return 0;
}
