#include <stdio.h>

void initArray(char s[], int length) {
    int i;
    for(i=0;i<length;i++) {
        s[i] = '\0';
    }
}

int findWord(char s[], char w[], int wordCnt, int fwordCnt) {
    int i,j,diff=0,matchCnt=0;
    for(i=diff;i<wordCnt;i++) {
        if(s[i] == '\0') break;
        if(s[i] == w[0]) {
            for(j=1;j<fwordCnt;j++) {
                if(w[j]=='\0') break;
                if(i+j==wordCnt) break;
                if(s[i+j]!=w[j]) break;
            }
            if(j==fwordCnt) {
                matchCnt ++;
                diff+=fwordCnt-1;
                printf("%d\n",diff);
            }
        }
    }
    return matchCnt;
}

int main()
{
    char w[11];
    initArray(w,11);
    fgets(w,10,stdin);

    int matchCnt = 0;
    while(1) {
        char t[1001];
        initArray(t,1001);
        fgets(t,1000,stdin);
        char endWord[12] = "END_OF_TEXT";
        if(findWord(t,endWord,1000,11)) break;
        matchCnt = findWord(t,w,1000,10);
    }
    printf("%d\n",matchCnt);
    return 0;
}
