#include <stdio.h>

void call(int n)
{
	int i = 1;
	while(i++ < n) {
		int x = i;
		if(x%3 == 0) {
			printf(" %d",i);
		}
		else {
			while(x) {
				if(x%10 == 3) {
					printf(" %d",i);
					break;
				}
				else {
					x /= 10;
				}
			}
		}
	}
	putchar('\n');
}

int main()
{
	int n;
	scanf("%d",&n);
	call(n);
	return 0;
}
