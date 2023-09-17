#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* kangaroo(int x1, int v1, int x2, int v2);

void main()
{
    char* result;
    result = kangaroo(21, 6, 47, 3);
    printf("Parameters:\n");
    printf("===============\n");
    printf("x1=%d,v1=%d\nx2=%d,v2=%d\nThe answer is %s\n", 21, 6, 47, 3,result);
    result = kangaroo(0, 3, 4, 2);
    printf("===============\n");
    printf("x1=%d,v1=%d\nx2=%d,v2=%d\nThe answer is %s\n", 0, 3, 4, 2, result);
}
char* kangaroo(int x1, int v1, int x2, int v2) {

    int num = x2 - x1;
    int den = v1 - v2;
    float ratio;
    ratio = (float)num / den;
    char* ans;

    if (((ratio >= 0) &&
        (ceil(ratio) == floor(ratio))) &&
        (((x2 > x1) && (v1 > v2)) || ((x1 > x2) && (v2 > v1)))
        )
    {
        ans = (char*)malloc(4 * sizeof(char));
        ans[0] = 'Y';
        ans[1] = 'E';
        ans[2] = 'S';
        ans[3] = '\0';
    }
    else
    {
        ans = (char*)malloc(3 * sizeof(char));
        ans[0] = 'N';
        ans[1] = 'O';
        ans[2] = '\0';
    }
    return ans;
}