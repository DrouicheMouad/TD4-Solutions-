#include <stdio.h>
#include <math.h>
#include <stdbool.h>
int main() {
	int DecimalValue = 0;
	printf("Enter an unsigned decimal number "); scanf("%d", &DecimalValue);
	if (DecimalValue == 0) {
		printf("The binary value is 0\n");
	}
	else {
		int NumberOfBits = ceil(log(DecimalValue + 1) / log(2));
		printf("we need at least %d bits to represent this value", NumberOfBits);
		bool BinaryValue[NumberOfBits];
		int i = 0;
		while (DecimalValue > 0) {
			BinaryValue[i] = DecimalValue % 2;
			DecimalValue = (DecimalValue - BinaryValue[i]) / 2;
			i++;
		}
		printf("\nThe binary value is ");
		for (int j = NumberOfBits - 1; j >= 0; j--)
			printf("%d", BinaryValue[j]);
	}
	return 0;
}