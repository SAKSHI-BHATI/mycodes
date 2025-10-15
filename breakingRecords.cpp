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

using namespace std;

int* breakingRecords(int scores_count, int* scores, int* result_count) {
    // Allocate memory for result array: [max_breaks, min_breaks]
    int *result = new int[2];

    *result_count = 2;

    int max_score = scores[0];
    int min_score = scores[0];
    int max_breaks = 0;
    int min_breaks = 0;

    for (int i = 1; i < scores_count; i++) {
        if (scores[i] > max_score) {
            max_score = scores[i];
            max_breaks++;
        }
        else if (scores[i] < min_score) {
            min_score = scores[i];
            min_breaks++;
        }
    }

    result[0] = max_breaks;
    result[1] = min_breaks;

    return result;
}
