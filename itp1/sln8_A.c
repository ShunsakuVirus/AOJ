#include <stdio.h>
#define MAXCHARS 1200

int main()
{
    char s[MAXCHARS+1];
    fgets(s, MAXCHARS, stdin);
    
    int i;
    int offset = 'a'-'A';
    for(i=0;i<MAXCHARS;i++) {
        //char buff = '\0';
        if(s[i] >= 65 && s[i] <= 90) {
            //buff = s[i] + offset;
            s[i] += offset;
            //printf("%c",buff);
        }
        else if(s[i] >= 97 && s[i] <= 122) {
            //buff = s[i] - offset;
            s[i] -= offset;
            //printf("%c",buff);
        }
        else{
            //printf("%c",s[i]);
        }
    }
    printf("%s",s);
    return 0;
}
