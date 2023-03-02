#include<stdio.h>

int main() {
    int t, b, c, d, e, g;
    scanf("%d", &t);
    for(g=0; g < t; g++) {
        scanf("%d", &b);
        if(b > 0) {
            int f[100]; 
            for(c = 0; c < b; c++)
                scanf("%d", &f[c]);
            for(c = 0; c < b - 1; c++)
                for(d = c + 1; d < b; d++)
                    if(f[d] > f[c]) {
                        e = f[c]; f[c] = f[d]; f[d] = e;
                    }
            printf("%d\n", (f[0] - f[b - 1]) * 2);
        } else if(b == 0) {
            printf("0\n");
        }
    }
    return 0;
}

