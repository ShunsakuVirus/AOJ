#include <stdio.h>
#include <stdlib.h>

#define MAXCHARS 100

int findWord(char s[],char w[],int wordCnt,int fwordCnt) {
    int i,j;
    for(i=0;i<wordCnt;i++) {
        if(s[i] == w[0]) {
            for(j=1;j<fwordCnt;j++) {
                if(i+j >= wordCnt) break;
                if(s[i+j] != w[j]) break;
            }
            if(j==fwordCnt) {
                return 1;
            }
            else {
                return 0;
            }
        }
    }
    return -1;
}

int main()
{
    char *s = (char *)calloc(MAXCHARS+1,sizeof(char));
    if(s==NULL) return -1;
    fgets(s,MAXCHARS,stdin);

    int i,wordCnt = 0;
    for(i=0;i<MAXCHARS;i++) {
        if(s[i] == '\n') break;
        wordCnt++;
    }
    char *p = (char *)calloc(wordCnt+1,sizeof(char));
    if(p==NULL) return -1;
    fgets(p,wordCnt,stdin);
    int fwordCnt = 0;
    for(i=0;i<wordCnt;i++) {
        if(p[i] == '\n') break;
        fwordCnt++;
    }

    int j;
    char *buff = (char*)calloc(wordCnt,sizeof(char));
    if(buff==NULL) return -1;

    for(i=0;i<wordCnt;i++) {
        if(findWord(s,p,wordCnt,fwordCnt)) {
            printf("Yes\n");
            return 0;
        }
        for(j=0;j<wordCnt;j++) {
            buff[j] = s[(j+1)%wordCnt];
        }
        for(j=0;j<wordCnt;j++) {
            s[j] = buff[j];
        }
    }
    printf("No\n");
    return 0;
}
