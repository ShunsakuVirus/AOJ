#include <stdio.h>

#define MAXCHARS 200

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
}

int main()
{
    char deck[MAXCHARS+1];
    int m;

    fgets(deck,MAXCHARS,stdin);
    scanf("%d",&m);
    
    int i,h;
    for(i=0;i<m;i++) {
        scanf("%d",&h);
        shuffle(deck,h);
    }
    printf("%s\n",deck);
    return 0;
}
