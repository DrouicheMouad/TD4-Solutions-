#include <stdio.h>
void Bin(int n) {
	if (n == 0) {
		return;
	}
	printf("%d", n % 2);
	return Bin(n / 2);
}

int main() {
	Bin(7);
	return 0;
}
