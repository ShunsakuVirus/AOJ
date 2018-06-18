#include <stdio.h>

int main()
{
	int h,w;
	while(1) {
		scanf("%d%d",&h,&w);
		if(h==0&&w==0) return 0;
		int i,j;
		for(i=0;i<h;i++) {
			for(j=0;j<w;j++) {
				printf("#");
			}
			putchar('\n');
		}
		putchar('\n');
	}
	return 0;
}
