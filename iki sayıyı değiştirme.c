#include <stdio.h> 

int main(){
	
	int a=5,b=10,*i=&a,*j=&b,c;
	
	c=a;
	*i = b;
	*j = c;
	
	printf("a = %d\nb = %d",a,b);
	
	return 0;
	
}
