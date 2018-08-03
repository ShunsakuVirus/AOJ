#include <stdio.h>

#define MAXCHARS 10 

void shuffle(char s[MAXCHARS], int n) {
    char buff[n+1];
    int i;
    for(i=0;i<n;i++) {
        buff[i] = s[i];
    }
    buff[n] = 0;
    for(i=0;i<MAXCHARS;i++) {
        int flag = s[i+n]==0|s[i+n]==10|(i+n)>=MAXCHARS;
        if(flag) {
            puts("Out of range.");
            s[i+n] = 0;
            break;
        }
        s[i] = s[i+n];
        s[i+n] = 0;
    }
    int end = 0;
    while(s[end] != 0) {
        end++;
    }
    for(i=0;i<n;i++) {
        s[end+i] = buff[i];
    }
    printf("buff = %s\n",buff);
    for(i=0;i<n;i++) {
        printf("[%d] \n",buff[i]);
    }
    printf("s = %s\n",s);
    for(i=0;i<MAXCHARS;i++){
        printf("s[%d] = %d\n",i,s[i]);
    }
}

int main()
{
    char s[MAXCHARS+1];
    int i;
    for(i=0;i<8;i++) {
        s[i] = 97+i;
    }
    s[8] = 0;
    s[MAXCHARS] = 0;
    shuffle(s,2);
    return 0;
}
