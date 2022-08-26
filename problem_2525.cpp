#include <stdio.h>

int main() {
	int hour, min, a;
	scanf("%d %d", &hour, &min);
	scanf("%d", &a);
	
	min = min + a;
	if (min > 60) {
		min = min - 60;
		hour = hour + 1;
		if (hour > 24) hour = 0;
	else if(min == 60) {
		min = 0;
		hour = hour + 1;
			}
	else if(hour == 24) {
		hour = 0;
	}
	}
	printf("%d %d", hour, min);
	return 0;
}
