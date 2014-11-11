#include<stdio.h>
int main() {
	int i, j, n, f, a, b, c, product;
	scanf("%d", &n);
	for(i = 0; i < n; i++) {
		scanf("%d", &f);
		product = 0;
		for(j = 0; j < f; j++) {
			scanf("%d%d%d", &a, &b, &c);
			product += a*c;
		}
		printf("%d\n", product);
	}
	return 0;
}
