#include<stdio.h>
#include<stdlib.h>

int fonk(int *,int *,int *,int ,int);
int main(){
	
	int sayia1=6,sayia2=5,sayiA,i;
	int * a1[6] ={1,3,4,6,8,9};
	int * a2[5] ={0,2,5,7,10};
	int * A;
	
	sayiA = fonk(a1,a2,A,sayia1,sayia2);
	
	for(i=0;i<=sayiA;i++)
	{
		printf("%d\n",*(A+i));
	}
	
	return 0;
}

int fonk(int *a1,int *a2, int *A,int sayia1, int sayia2){
	
	int i=0,k=0,j=0;
	
	A = (int*) malloc(sizeof(int));
	
	if(*(a1+j)>*(a2+k)&& j<sayia1)
	{
		*(A+i) = *(a1+j);
		i++;
		j++;
		A = (int *) realloc(A,sizeof(int)*(i+1));
	}
	else if(*(a1+j)<*(a2+k)&& k<sayia2)
	{
		*(A+i) = *(a2+k);
		i++;
		k++;
		A = (int *) realloc(A,sizeof(int)*(i+1));
	}
	return i;
}
