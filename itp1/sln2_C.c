#include <stdio.h>

void Sort(int index[]) {
    int i;
    while(!(index[0]<=index[1]&&index[1]<=index[2])) {
        int i;
        for(i = 0;i<3;i++) {
            int next;
            next = i+1;
            if(next > 2) {
                next = 2;
            }
            if(index[i] > index[next]) {
                int buffer = index[i];
                index[i] = index[next];
                index[next] = buffer;
            }
        }
    }
}
int main() {
    int index[3];
    scanf("%d%d%d",&index[0],&index[1],&index[2]);
    Sort(index);
    printf("%d %d %d\n",index[0],index[1],index[2]);
    return 0;
}
