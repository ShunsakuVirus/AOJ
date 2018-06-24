#include <stdio.h>

int main()
{
    int n,m,l;
    scanf("%d%d%d",&n,&m,&l);
    
    int A[n][m],B[m][l];
    int i,j;
    for(i=0;i<n;i++) {
        for(j=0;j<m;j++) {
            A[i][j] = 0;
            scanf("%d",&A[i][j]);
        }
    }
    for(i=0;i<m;i++) {
        for(j=0;j<l;j++) {
            B[i][j] = 0;
            scanf("%d",&B[i][j]);
        }
    }
    
    int C=0,k=0,h=0,v=0;
    for(i=0;i<n;i++) {
        for(j=0;j<l;j++) {
            C = 0;
            for(k=0;k<m;k++) {
                C += A[v%n][k] * B[k][h%l];
            }
            h++;
            if(j+1==l)printf("%d",C);
            else printf("%d ",C);
        }
        v++;
        putchar('\n');
    }
    return 0;
}
