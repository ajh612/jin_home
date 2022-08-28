#include <stdio.h>

int main(){
	int x;
	int *xp;
	
	x= 7;
	xp = &x;
	
	printf("address of x : %p\n", &x);
	printf("value of x : %d\n", x);
	printf("address of xp : %p\n", &xp);
	printf("value of xp : %p\n", xp);
	printf("value of *xp : %d\n", *xp);
} 
