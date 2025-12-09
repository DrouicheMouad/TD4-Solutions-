#include <stdio.h>
int Fact(int N) {
	if (N == 0)
		return 1;
	else
		return N * Fact(N - 1);
}
int NChooseK(int N, int K) {
	if (K > N)
		return 0;
	else
		return Fact(N) / (Fact(K) * Fact(N - K));
}

int main() {
	int Lines, Columns;
	printf("Enter the number of lines you want "); scanf("%d", &Lines);
	printf("Enter the number of columns you want "); scanf("%d", &Columns);
	for (int i = 0; i <= Lines; i++) {
		for (int j = 0; j <= i; j++) {
			printf("%5d", NChooseK(i, j));
		}
		printf("\n");
	}
	return 0;
}