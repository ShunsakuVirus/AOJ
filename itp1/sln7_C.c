#include <stdio.h>

int main()
{
	int r,c;
	scanf("%d%d",&r,&c);

	int i,j;
	int storage[r][c];
	for(i=0;i<r;i++) {
		for(j=0;j<c;j++) {
			scanf("%d",&storage[i][j]);
		}
	}
	for(i=0;i<r;i++) {
		for(j=0;j<c;j++) {
			printf("%d",storage[i][j]);
		}
	}
	return 0;
}
