#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "interfaces/sorting.h"

void fill_values(int n, int *v) {
    for (int i = 0; i < n; i++) {
        v[i] = rand() % n;
    }
}

// int main(void) {
//     for (int i = 2; i < 10; i++) {
//         int n = (int) pow(10, i);
//         int *v = malloc(n * sizeof(int));
//
//         fill_values(n, v);
//
//         struct timespec start, end;
//         clock_gettime(CLOCK_MONOTONIC, &start);
//
//         quick_sort(n, v);
//
//         clock_gettime(CLOCK_MONOTONIC, &end);
//
//         long nanoseconds = end.tv_nsec - start.tv_nsec;
//         long seconds = end.tv_sec - start.tv_sec;
//
//         if (nanoseconds < 0) {
//             nanoseconds += 1e9;
//             seconds--;
//         }
//
//         double elapsed = seconds * 1e3 + nanoseconds / 1e6;
//
//         printf("Tempo de execucao do algoritmo: %f milissegundos\n", elapsed);
//         printf("O vetor tem %d elementos.\n", n);
//         printf("\n");
//     }
//
//     return 0;
// }
