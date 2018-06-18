#include <stdio.h>

int main()
{
	int i;
	int x;
	for(i=1;;i++){
		scanf("%d",&x);
		if(x==0) return 0;
		printf("Case %d: %d\n",i,x);
	}
}
