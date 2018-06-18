#include <stdio.h>

int main ()
{
	int a,b,c,n=0;
	scanf("%d%d%d",&a,&b,&c);
	while(a<=b) {
		if(c%a++==0) {
			n++;
		}
	}
	printf("%d\n",n);
	return 0;
}
