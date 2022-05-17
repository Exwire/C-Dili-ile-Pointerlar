#include <stdio.h> 

int main(){

	char dizi[11]={"diziDeneme"};
	char *a = dizi;
	char yedek;
	int i=0,n;
	while(a[i] != '\0')
	{
		i++;
	}
	
	for(n=0;n<i/2;n++)
	{
		yedek = *(dizi+n);
		a[n] =  *(dizi+i-n-1);
		a[i-n] = yedek;
	}
	
	puts("\n--------------------------------");
	
	i = 0;
	while(a[i] != '\0')
	{
		printf("%c", *(dizi+i));
		i++;
	}
	
	return 0;
}
