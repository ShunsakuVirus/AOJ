#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, *p;
	scanf("%d",&n);
	p = (int *)calloc(n,sizeof(int));
	if(p == NULL) return EXIT_FAILURE;

	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&p[i]);
	}
	int j, min = p[0], max = p[0], add = 0;
	for(i=0;i<n;i++) {
		add += p[i];
		for(j=0;j<n;j++) {
			if(i!=j) {
				if(min > p[j]) {
					min = p[j];
				}
				if(max < p[j]) {
					max = p[j];
				}
			}
		}
	}
	printf("%d %d %d\n",min,max,add);
	free(p);
	return 0;
}
