//
// Created by Administrator on 2021/8/23.
//

#include "stdlib.h"
#include "math.h"


int getMaximumGenerated(int n) {
    if (n == 0)return 0;
    if (n == 1)return 1;

    int *num = (int *) malloc((n + 1) * sizeof(int));
    num[0] = 0;
    num[1] = 1;
    int max = 1;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 == 0) {
            num[i] = num[i / 2];
        } else {
            num[i] = num[i / 2] + num[i / 2 + 1];
        }
        max = fmax(max, num[i]);
    }
    return max;
}