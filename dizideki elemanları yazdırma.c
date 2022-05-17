#include <stdio.h> 

int main(){
	
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	int i,*a = dizi;
	
	for(i=0;i<10;i++)
	{
		printf("%d  ",a[i]);
	}
	
	puts("\n");
	puts("----------------------------------------------");
	
	for(i=0;i<10;i++)
	{
		printf("%d  ",*(dizi+i));
	}
	getchar();
	return 0;
}
