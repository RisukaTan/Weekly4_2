#include<stdio.h>//65010536
int main() {
	int n, x, y;
	scanf_s("%d", &n);
	for (x = 1; x <= n; x++) {
		for (y = 1; y <= n; y++) {
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}