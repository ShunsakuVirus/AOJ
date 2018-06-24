#include <stdio.h>

int main()
{
	int n,x;
	while(1) {
		scanf("%d%d", &n,&x);
		if(n==0&&x==0) return 0;
		
		int i,j,k,c;
		for(i=1;i<=n;i++) {
			for(j=1;j<=n;j++) {
				for(k=1;k<=n;k++) {
					if(i!=j&&j!=k&&i!=k&&i+j+k == x) {
						printf("%d %d %d\n",i,j,k);
						//c++;
					}
				}
			}
		}
		printf("%d\n",c);
	}
	return 0;
}
