#include <stdio.h> 

int main(){
	
	int dizi[10]={1,2,3,4,5,6,7,8,9,10};
	int i,*a = dizi, sum=0;
	
	for(i=0;i<10;i++)
	{
		sum += a[i];
	}
	
	printf("Dizinin elemanlar toplamý = %d",sum);
	return 0;
}
