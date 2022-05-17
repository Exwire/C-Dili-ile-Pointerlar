#include <stdio.h> 

int main(){
	
	int a=5,b=10,*i=&a,*j=&b;
	
	printf("%d",*i+*j);
	
	return 0;
}
