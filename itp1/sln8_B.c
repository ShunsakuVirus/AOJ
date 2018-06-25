#include <stdio.h>

#define MAXDIGITS 1000

int main()
{
    char x[MAXDIGITS+1];
    int i;
    for(i=0;i<MAXDIGITS+1;i++) {
        x[i] = '\0';
    }
    while(1) {
        fgets(x,MAXDIGITS,stdin);
        if(x[0] == '0') return 0;
        int buff = 0;
        for(i=0;i<MAXDIGITS;i++) {
            if(x[i] == '\n') break;
            buff += ((int)x[i])-48;
        }
        printf("%d\n",buff);
    }
    return 0;
}
