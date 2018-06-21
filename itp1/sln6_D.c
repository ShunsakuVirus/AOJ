#include <stdio.h>

int main()
{
	int n,m;
	scanf("%d%d", &n, &m);

	int A[n][m], b[m];
	int i;
	for(i=0;i<n*m;i++) {
		A[i/m][i%m] = 0;
		scanf("%d",&A[i/m][i%m]);
	}
	for(i=0;i<m;i++) {
		scanf("%d",&b[i]);
	}

	int ans[n];
	int j;
	for(i=0;i<n;i++) {
		ans[i] = 0;
		for(j=0;j<m;j++) {
			ans[i] += A[i][j]*b[j];
		}
		printf("%d\n",ans[i]);
	}
	return 0;
}
