#include <stdio.h>
int main() {
int k, i, j;
scanf("%d", &k);
int seq[k], diffs[k - 1];
for (i = 0; i < k; i++) {
    scanf("%d", &seq[i]);
}
for (i = 0; i < k - 1; i++) {
    diffs[i] = abs(seq[i] - seq[i + 1]);
}
int present[k - 1];
for (i = 0; i < k - 1; i++) {
    present[i] = 0;
}
int jolly = 1;
for (i = 0; i < k - 1 && jolly; i++) {
    int diff = diffs[i];
    if (diff >= 1 && diff <= k - 1) {
        present[diff - 1] = 1;
    } else {
        jolly = 0;
    }
}
for (i = 0; i < k - 1 && jolly; i++) {
    if (present[i] == 0) {
        jolly = 0;
    }
}
if (jolly) {
    printf("Jolly\n");
} else {
    printf("Not jolly\n");
}
return 0;
}
