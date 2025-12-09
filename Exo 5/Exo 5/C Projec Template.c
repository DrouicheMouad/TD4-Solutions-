#include <stdio.h>
float RecursivePow(float Number, int power) {
	if (power == 0)
		return 1;
	else
		return Number * RecursivePow(Number, power - 1);
}
float IterativePow(float Number, int power) {
	float Result = 1;
	for (int i = 1; i <= power; i++) {
		Result *= Number;
	}
	return Result;
}
int main() {
	printf("%f", RecursivePow(2, 3));
	printf("%f", RecursivePow(2, 3));

	return 0;
}