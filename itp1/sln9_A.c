#include <stdio.h>

#define W_MAXCHARS 10
#define T_MAXCHARS 1000

void initStr(char s[], int length) {
    int i;
    for(i=0;i<length;i++) {
        s[i] = '\0';
    }
}

int wordCnt(char s[], int max) {
    int i;
    for(i=0;i<max;i++) {
        if(s[i] == '\n') break;
    }
    return i;
}

int find(char T[], char W[], int tlen, int wlen) {
    int i,j,matchCnt=0;
    for(i=0;i<tlen;i++) {
        if(65 <= T[i] && T[i] <= 90) {
            int offset = 'a' - 'A';
            T[i] += offset;
        }
    }

    for(i=0;i<tlen;i++) {
        if(T[i] == W[0]) {
            for(j=1;j<wlen;j++) {
                if(i+j == tlen) {
                    break;
                }
                if(T[i+j] != W[j]) {
                    break;
                }
            }
            if(j==wlen) {
                matchCnt++;
            }
        }
    }
    return matchCnt;
}

int main()
{
    int matchCnt = 0;
    int wlen = 0, tlen = 0, elen = 11;
    char E[11] = "end_of_text";
    char W[W_MAXCHARS+1];
    initStr(W,W_MAXCHARS+1);
    fgets(W,W_MAXCHARS,stdin);
    wlen = wordCnt(W,W_MAXCHARS);

    char T[T_MAXCHARS+1];

    while(1) {
        initStr(T,T_MAXCHARS+1);
        fgets(T,T_MAXCHARS,stdin);
        tlen = wordCnt(T,T_MAXCHARS);
        if(find(T,E,tlen,elen)) break;
        matchCnt += find(T,W,tlen,wlen);
    }

    printf("%d\n",matchCnt);
    return 0;
}
