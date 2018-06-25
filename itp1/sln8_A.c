#include <stdio.h>
#define MAXCHARS 1200

int main()
{
    char s[MAXCHARS+1];
    fgets(s, MAXCHARS, stdin);
    
    int i;
    int offset = 'a'-'A';
    for(i=0;i<MAXCHARS;i++) {
        if(s[i] >= 65 && s[i] <= 90) {
            s[i] += offset;
        }
        else if(s[i] >= 97 && s[i] <= 122) {
            s[i] -= offset;
        }
    }
    printf("%s",s);
    return 0;
}
