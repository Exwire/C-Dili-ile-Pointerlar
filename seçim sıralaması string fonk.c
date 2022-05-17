#include<stdio.h>

int main(){
	
	int dizi[7]={1,5,4,9,3,2,7};
	int i,min,n=7,j,aa;
	
	for(i=0;i<n;i++)
	{
		min = dizi[6];
		aa = n - 1;
		
		for(j=i;j<n-1;j++)
		{
			if(dizi[j]<min)
			{
				min = dizi[j];
				aa = j;
			}
		}
		
		dizi[aa] = dizi[i];
		dizi[i] = min;

	}
	
	for(i=0;i<n;i++)
	{
		printf(" %d ,",dizi[i]);
	}
	
	return 0;
}
