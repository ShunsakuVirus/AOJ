#include <stdio.h>
#include <stdlib.h>

int main()
{
	int in;
	scanf("%d",&in);
	if(in<=0) return 0;

	char suit[2];
	int *S, *H, *C, *D;
	S = (int *)calloc(13,sizeof(int));
	H = (int *)calloc(13,sizeof(int));
	C = (int *)calloc(13,sizeof(int));
	D = (int *)calloc(13,sizeof(int));
	if(S==NULL || H==NULL || C==NULL || D==NULL) return -1;

	int i, rank;
	for(i=0;i<in;i++) {
		scanf("%2s %d",suit,&rank);
		switch(suit[0]) {
			case 'S':
				S[rank-1] = 1;
				break;
			case 'H':
				H[rank-1] = 1;
				break;
			case 'C':
				C[rank-1] = 1;
				break;
			case 'D':
				D[rank-1] = 1;
				break;
		}
	}

	int state = 0;
	while(state!=4) {
		for(i=0;i<13;i++) {
			if(!S[i] && !state) {
				printf("S %d\n",i+1);
				S[i] = 1;
			}
			if(!H[i] && state==1) {
				printf("H %d\n",i+1);
				H[i] = 1;
			}
			if(!C[i] && state==2) {
				printf("C %d\n",i+1);
				C[i] = 1;
			}
			if(!D[i] && state==3) {
				printf("D %d\n",i+1);
				D[i] = 1;
			}
			if(i==12) {
				if(S[i] && !state) {
					state=1;
					break;
				}
				if(H[i] && state==1) {
					state=2;
					break;
				}
				if(C[i] && state==2) {
					state=3;
					break;
				}
				if(D[i] && state==3) {
					state=4;
				}
			}
		}
	}

	return 0;
}
