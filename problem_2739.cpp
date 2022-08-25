#include <stdio.h>

int main(){
	int n, a;
	a = 0;
	scanf("%d", &n);
	while (a < 9){
		a = a + 1;
	printf("%d * %d = %d\n", n, a, n*a );	
	}
	return 0 ;
}
