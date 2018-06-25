#include <stdio.h>

#define MAXCHARS 1200

int main()
{
    char s[MAXCHARS+1];
    int capital = (int)'A';
    int small = (int)'a';
    int i;
    for(i=0;i<MAXCHARS+1;i++) {
        s[i] = '\0';
    }
    fgets(s,MAXCHARS,stdin);

    int cnt[26];
    for(i=0;i<26;i++) {
        cnt[i] = 0;
    }
    for(i=0;i<MAXCHARS;i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            cnt[(int)s[i]-capital]++;
        }
        else if(s[i] >= 97 && s[i] <= 122) {
            cnt[(int)s[i]-small]++;
        }
    }
    
    char a = 'a';
    for(i=0;i<26;i++) {
        printf("%c : %d\n",a++,cnt[i]);
    }
    return 0;
}
