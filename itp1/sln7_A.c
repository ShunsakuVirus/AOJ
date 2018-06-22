#include <stdio.h>

int main()
{
	int i,m,f,r;
	for(i=0;i<50;i++) {
		scanf("%d%d%d",&m,&f,&r);
		int add = m+f;
		if(add==-2&&r==-1) return 0;

		if(m==-1||f==-1||add<30) {
			printf("F\n");
			continue;
		}
		if(add>=80) {
			printf("A\n");
		}
		else if(add>=65) {
			printf("B\n");
		}
		else if(add>=50) {
			printf("C\n");
		}
		else if(add>=30) {
			if(r>=50) {
				printf("C\n");
			}
			else {
				printf("D\n");
			}
		}
		
	}
	return 0;
}
