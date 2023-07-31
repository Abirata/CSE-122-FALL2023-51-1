#include <stdio.h>

int main() {
    int n, k, advancing = 0;
    int scores[50];

    scanf("%d %d", &n, &k);

    for(int i = 0; i < n; i++) {
        scanf("%d", &scores[i]);
    }

    int kthScore = scores[k-1];

    for(int i = 0; i < n; i++) {
        if(scores[i] >= kthScore && scores[i] > 0) {
            advancing++;
        }
    }

    printf("%d\n", advancing);

    return 0;
}
