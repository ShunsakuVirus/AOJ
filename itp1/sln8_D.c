#include <stdio.h>
#include <stdlib.h>

#define MAXCHARS 100

int main()
{
    char *s = (char *)calloc(MAXCHARS+1,sizeof(char));
    if(s==NULL) return -1;
    fgets(s,MAXCHARS,stdin);
    printf("%s",s);

    int wc = 0;
    for(i=0;i<MAXCHARS;i++) {
        if(s[i] == '\n') break;
        wc++;
    }
    char *p = (char *)calloc(wc+1,sizeof(char));
    if(p==NULL) return -1;
    fgets(p,wc,stdin);
    int i,j,match=0;
    for(i=0;i<MAXCHARS;i++) {
        if(s[i] == p[0]) {
            for(j=0;j<wc;j++) {
                if(i+j >= MAXCHARS) break;
                if(s[i+j] == p[j]) {
                    match++;
                    if(j==0&&i+j == MAXCHARS-1) {
                        match = -1;
                    }
                }
                else break;
            }
            if(match == -1) {
                int k=0;
                for(j=1;j<wc;j++) {
                    if(s[k] == p[
                    k++;
                }
            }
        }
        for(j=0;j<wc;j++) {
            
        }
    }
    return 0;
}
