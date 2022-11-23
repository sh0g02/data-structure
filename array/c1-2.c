//
// Created by tksk on 2022/11/23.
//
#include <stdio.h>

int main() {
    int i, j;
    int a[3][4] = {
            {100, 200, 300, 400},
            {500, 600, 700, 800},
            {900, 1000, 1100, 1200},
    };

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 4; j++) {
            printf("array[%d][%d]=%4d\n", i, j, a[i][j]);
        }
    }
}
