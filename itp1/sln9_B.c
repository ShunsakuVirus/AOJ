#include <stdio.h>

#define MAXCHARS 200

void shuffle(char s[MAXCHARS+1], int n) {
    char buff[n+1];
    int i;
    for(i=0;i<n;i++) {
        buff[i] = s[i];
    }
    buff[n] = 0;
    int len=0;
    while(s[len] != 0) {
        if(s[len] == 10) {
            s[len] = 0;
            break;
        }
        len++;
    }
    int end = len - n;
    for(i=0;i<end;i++) {
        s[i] = s[i+n];
    }
    for(i=0;i<n;i++) {
        s[end+i] = buff[i];
    }
}

void init(char s[MAXCHARS+1]) {
    int i;
    for(i=0;i<MAXCHARS+1;i++) {
        s[i] = 0;
    }
}

int main()
{
    char deck[MAXCHARS+1];
    init(deck);

    while(1) {
        fgets(deck,MAXCHARS,stdin);
        int i;
        for(i=0;i<MAXCHARS+1;i++) {
            printf("deck[%d] = %d\n",i,deck[i]);
        }
        if(deck[0] == '-' && (deck[1] == '\n' || deck[1] == '\0')) break;
        int m;
        scanf("%d",&m);
    
        int h;//i, h;
        for(i=0;i<m;i++) {
            scanf("%d",&h);
            shuffle(deck,h);
        }
        //printf("%s\n",deck);
        //init(deck);
    }
    return 0;
}
