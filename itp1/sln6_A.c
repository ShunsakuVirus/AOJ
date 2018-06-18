#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, *p;
	scanf("%d",&n);
	if(n<=0) return 0;
	p = (int *)calloc(n,sizeof(int));
	if(p == NULL) return EXIT_FAILURE;

	int i;
	for(i=0;i<n;i++) {
		scanf("%d",&p[i]);
	}
	
	int c = n/2;
	int b = 0, e = n-1;
	for(i=0;i<c;i++) {
		int buff = p[b];
		p[b] = p[e];
		p[e] = buff;
		++b;
		--e;
	}
	
	for(i=0;i<n;i++) {
		printf("%d",p[i]);
		if(i+1!=n) putchar(' ');
	}
	putchar('\n');
	free(p);
	return 0;
}
