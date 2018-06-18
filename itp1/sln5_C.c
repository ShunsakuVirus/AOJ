#include <stdio.h>

int main()
{
	int h,w;
	while(1) {
		scanf("%d%d",&h,&w);
		if(h==0&&w==0) return 0;
		int i,j;
		int b = 0;
		for(i=0;i<h;i++) {
			for(j=(++b)%2;j<w+b%2;j++) {
				j%2?putchar('#'):putchar('.');
			}
			putchar('\n');
		}
		putchar('\n');
	}
	return 0;
}
