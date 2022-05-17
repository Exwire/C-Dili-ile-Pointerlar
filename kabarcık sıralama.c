#include<stdio.h>

int main(){
	
	int dizi[7]={1,5,4,9,3,2,7};
	int i,n=7,j,temp;
	
	
	for(i = 0; i<n ; i++)
	{
		for(j = 0; j<n-1; j++)
		{
			if(dizi[j]>dizi[j+1])
			{
				temp = dizi[j];
				dizi[j] = dizi[j+1];
				dizi[j+1] = temp;
				
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d ,",dizi[i]);
	}
	
	return 0;
}
