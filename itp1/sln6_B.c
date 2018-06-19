#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n = 0, *p;
	char *c;
	scanf("%d",&n);
	if(n<=0) return 0;
	p = (int *)calloc(n,sizeof(int));
	c = (char *)calloc(n,sizeof(char));
	if(p == NULL || c == NULL) return EXIT_FAILURE;

	int i;
	int sp[13],he[13],cl[13],di[13];
	for(i=0;i<13;i++) {
		sp[i] = 0;
		he[i] = 0;
		cl[i] = 0;
		di[i] = 0;
	}

	for(i=0;i<n;i++) {
		scanf("%c %d",&c[i],&p[i]);
	}

	for(i=0;i<n;i++) {
		printf("%c %d",c[i],p[i]);
	}

	/*int sp[13],he[13],cl[13],di[13];
	for(i=0;i<13;i++) {
		sp[i] = 0;
		he[i] = 0;
		cl[i] = 0;
		di[i] = 0;
	}*/

	for(i=0;i<n;i++) {
		switch(c[i]) {
			case 'S': {
				sp[p[i]-1]=1;
				break;
			}
			case 'H': {
				he[p[i]-1]=1;
				break;
			}
			case 'C': {
				cl[p[i]-1]=1;
				break;
			}
			case 'D': {
				di[p[i]-1]=1;
				break;
			}
		}
	}

	for(i=0;i<13;i++) {
		if(!sp[i]) printf("S %d\n",i);
		if(!he[i]) printf("H %d\n",i);
		if(!cl[i]) printf("C %d\n",i);
		if(!di[i]) printf("D %d\n",i);
	}

	free(p);
	free(c);

	return 0;
}
