#include <stdio.h>

int main()
{
	int r,c;
	scanf("%d%d",&r,&c);

	int i,j,add;
	int storage[r][c];
	int vertical[c];

	for(i=0;i<r;i++) {
		for(j=0;j<c;j++) {
			if(i==0)vertical[j] = 0;
			scanf("%d",&storage[i][j]);
			vertical[j]+=storage[i][j];
		}
	}
	for(i=0;i<r;i++) {
		add = 0;
		for(j=0;j<c;j++) {
			printf("%d ",storage[i][j]);
			add += storage[i][j];
		}
		printf("%d\n",add);
	}
	add=0;
	for(i=0;i<c;i++) {
		printf("%d ",vertical[i]);
		add+=vertical[i];
	}
	printf("%d\n",add);
	return 0;
}
