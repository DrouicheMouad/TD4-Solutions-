#include <stdio.h>
#include <stdbool.h>

bool EstPremier (int N) {
	if (N < 2)
		return 0;
	else {
		for (int i = 2; i <= N / 2; i++) {
			if (N % i == 0)
				return 0;
		}
		return 1;
	}
		
}
void AfficherPremiers(int start, int end) {
	for (int i = start; i <= end; i++) {
		if (EstPremier(i))
			printf("%d is prime\n", i);
	}
}
int main() {
	int x,y;
	printf("Enter a start point "); scanf("%d", &x);
	printf("Enter an end point "); scanf("%d", &y);
	AfficherPremiers(x, y);
	

	return 0;
}