#include <stdio.h>
int Signe(int N) {
	if (N > 0)
		return 1;
	else if (N < 0)
		return -1;
	else 
	   return 0;
}
int MemeSigne(int a, int b) {
	return (Signe(a) == Signe(b));
	
}
int main() {
	int x, y;
	printf("Enter x "); scanf("%d", &x);
	printf("Enter y "); scanf("%d", &y);

	if (MemeSigne(x, y))
		printf("Same signs\n");
	else 
		printf("Different signs\n");

	return 0;
}