#define LOCAL
#include<stdio.h>
#include<ctype.h>
int main() {
	#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
	#endif
	int pre = 0, count = 0;
	char c;
	while((c = getchar()) != EOF) {
		if(c == '\n') {
			printf("%d\n", count);
			pre = 0;
			count = 0;
			continue;
		}
		if(!pre && isalpha(c)) {
			pre = 1;
			count ++;
		} else if(pre && !isalpha(c)) {
			pre = 0;
		}
	}
	return 0;
}
