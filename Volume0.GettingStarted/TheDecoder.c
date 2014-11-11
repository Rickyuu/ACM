#define LOCAL
#include<stdio.h>
#include<string.h>
#define MAXN 1000
char buf[MAXN];
int main() {
	int i;
	#ifdef LOCAL
	freopen("data.in", "r", stdin);
	freopen("data.out", "w", stdout);
	#endif
	while(fgets(buf, sizeof(buf), stdin)) {
		for(i = 0; i < strlen(buf); i++) {
			if(buf[i] != '\n')
				buf[i] -= 7;
			else 
				break;
		}
		printf("%s", buf);
	}
	return 0;
}
