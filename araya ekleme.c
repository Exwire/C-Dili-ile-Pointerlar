#include<stdio.h>

int main(){
	
	int dizi[7]={1,5,4,9,3,2,7};
	int i,n=7,j,temp;
	
	
	for(i=1;i<n;i++)
	{
		temp = dizi[i];
		
		for(j = i-1;j >= 0 && temp <= dizi[j]; j--)
		{
			dizi[j+1] = dizi[j];
			dizi[j] = temp;
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d ,",dizi[i]);
	}
	
	return 0;
}
