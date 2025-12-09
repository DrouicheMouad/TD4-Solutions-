#include <stdio.h>
#include <stdbool.h>
void Un_Salut() {
	printf("Hello world\n");
}
void Plusieurs_Salut(int N) {
	for (int i = 0; i < N; i++)
		Un_Salut();
}
bool Trop_de_Salut(int N) {
	Plusieurs_Salut(N);
	if (N >= 10)
		return true;
	else
		return false;
}

int main() {
	int N;
	printf("Enter a number "); 
	scanf("%d", &N);

	if (Trop_de_Salut(N)) {
		printf("C'est trop !!!\n");
	}

	return 0;
}