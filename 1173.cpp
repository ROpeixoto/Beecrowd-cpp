#include <stdio.h>

int main(){
	
	int a[10];
	
	scanf("%d", &a[0]);
	
	
	printf("N[0] = %d\n", a[0]);
	
	
	for(int i=1; i<10;i++){
	
	a[i] = a[i-1] *2 ;
	printf("N[%d] = %d\n", i , a[i]);
	}
	return 0;
}
