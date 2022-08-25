#include <stdio.h>

int main(){
	int count;
	long sum = 0;
	scanf("%d", &count);
	while( count >= 0){
		sum = sum + count;
		count = count - 1;
	}
	printf("%d", sum);
	return 0 ;
}
