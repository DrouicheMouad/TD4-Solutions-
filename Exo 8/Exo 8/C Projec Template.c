#include <stdio.h>
int RecursiveFibonacci(int N) {
	if (N == 0)
		return 0;
	else if (N == 1)
		return 1;
	else
		return RecursiveFibonacci(N - 1) + RecursiveFibonacci(N - 2);
}
int IterativeFibonacci1(int N) {
	int Terms[N+1] ;
	Terms[0] = 0;
	Terms[1] = 1;
	for (int i = 2; i <= N; i++) {
		Terms[i] = Terms[i - 1] + Terms[i - 2];
	}
	return Terms[N];
}

int IterativeFibonacci2(int N) {
	if (N <= 1)
		return N;
	else {
		int A = 0, B = 1, C;
		for (int i = 2; i <= N; i++) {
			C = A + B;
			A = B;
			B = C;
		}
		return C;
	}
}
int main() {
	printf("F(10) = %d", RecursiveFibonacci(10));
	printf("\nF(10) = %d", IterativeFibonacci1(10));
	printf("\nF(10) = %d", IterativeFibonacci2(10));
	return 0;
}