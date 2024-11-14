#include <stdio.h>

int main() {
    int scores[3][2][2] = {
        {{33, 52}, {10, 12}},
        {{45, 98}, {35, 60}},
        {{84, 76}, {80, 42}}
    };

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                printf("%d ", scores[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
