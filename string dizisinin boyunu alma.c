#include <stdio.h> 

int main(){
	
	char dizi[6]={"array"}, *a = dizi;
	int i=0;
	while(a[i] != '\0')
	{
		i++;
	}
	
	printf("Dizinin uzunlugu %d dir.",i+1);
	return 0;
}
