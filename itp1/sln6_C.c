#include <stdio.h>

int main()
{
	int in;
	scanf("%d",&in);
	
	int b[in], f[in], r[in], v[in];
	int i;
	for(i=0;i<in;i++) {
		scanf("%d%d%d%d", &b[i], &f[i], &r[i], &v[i]);
	}

	for(i=0;i<in;i++) {
		printf("%d, %d, %d, %d\n", b[i], f[i], r[i], v[i]);
	}
	return 0;
}
