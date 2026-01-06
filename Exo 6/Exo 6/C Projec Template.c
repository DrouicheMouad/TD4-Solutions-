#include <stdio.h>
void Bin(int n) {
	if (n == 0) {
		return;
	}
	Bin(n / 2);
	printf("%d", n % 2);
}


int main() {
	Bin(21);
	return 0;
}
