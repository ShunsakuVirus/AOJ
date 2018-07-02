#include <stdio.h>

#define MAXCHARS 200

int main()
{
    char deck[MAXCHARS+1];
    int m;

    fgets(deck,MAXCHARS,stdin);
    scanf("%d",&m);
    
    int h[m];
    int i;
    for(i=0;i<m;i++) {
        scanf("%d",&h[i]);
    }
    return 0;
}
