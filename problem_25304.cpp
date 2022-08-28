#include <stdio.h>

int main(){
//	freopen("input.txt", "r", stdin);  
//	freopen("output.txt","w", stdout);
	int x, n, a, b, sum=0;
	scanf("%d", &x);
	scanf("%d", &n);
	
	while ( n > 0){
		
		scanf("%d %d\n", &a, &b);
		sum = sum + (a * b);
		n = n - 1;		
	}
	if ( x == sum){
		printf("Yes");
	}
	else printf("No");
	return 0;
}
