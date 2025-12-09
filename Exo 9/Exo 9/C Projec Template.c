#include <stdio.h>
int RecursivePGCD(int a, int b) {
	if (b == 0 || a==b)
		return a;
	else
		return RecursivePGCD(b, a % b);
}
int IterativePGCD(int a, int b) {
	if (a == b || b==0)
		return a;
	else {
		int r=44;
		while (r > 0) {
			r = a % b;
			a = b;
			b = r;
		} 
		return a;
	}
}

int main() {
	int a, b;
	printf("Enter the first number "); scanf("%d", &a);
	printf("Enter the second number "); scanf("%d", &b);
	printf("PGCD(%d, %d) = %d ", a, b, RecursivePGCD(a, b));
	printf("\nPGCD(%d, %d) = %d ", a, b, IterativePGCD(a, b));


	return 0;
}