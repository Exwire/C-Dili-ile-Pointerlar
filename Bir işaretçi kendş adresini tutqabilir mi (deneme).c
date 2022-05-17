#include <stdio.h>
#include <stdlib.h>

int main(){
	
	
	int *ptr;
	int sayi = 15;
	ptr = &sayi;
	ptr = &ptr;
	
	printf("Isaretci = %p\n",ptr);
	printf("Degeri = %p",*ptr);
	
	return 0;
}
