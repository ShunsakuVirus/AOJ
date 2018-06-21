#include <stdio.h>

int main()
{
	int in;
	scanf("%d",&in);
	
	int b, f, r, v;
	int tenant[4][3][10];
	int i,j;

	for(i=0;i<12;i++) {
		for(j=0;j<10;j++) {
			tenant[i/3][i%3][j] = 0;
		}
	}

	for(i=0;i<in;i++) {
		scanf("%d%d%d%d", &b, &f, &r, &v);
		tenant[b-1][f-1][r-1] = v;
	}

	for(i=0;i<12;i++) {
		for(j=0;j<10;j++) {
			printf(" %d",tenant[i/3][i%3][j]);
		}
		putchar('\n');
		if(i>0&&i<10&&(i+1)%3==0)printf("####################\n");
	}
	
	return 0;
}
