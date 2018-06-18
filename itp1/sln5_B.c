#include <stdio.h>

int main ()
{
	int h,w;
	while(1) {
		scanf("%d%d",&h,&w);
		if(h==0&&w==0) return 0;
		int i,j;
		for(i=0;i<h;i++) {
			putchar('#');
			for(j=2;j<w;j++) {
				if(i==0||(i+1)==h) putchar('#');
				else putchar('.'); 
			}
			printf("#\n");
		}
		putchar('\n');
	}
	return 0;
}
