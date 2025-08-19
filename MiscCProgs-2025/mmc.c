#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

int main() {
    int matA[SIZE][SIZE], matB[SIZE][SIZE], matC[SIZE][SIZE];
    int i, j, k;
    clock_t start, end;
    double cpu_time_used;

    // Seed the random number generator
    srand(time(NULL));

    // Initialize matrices with random values
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matA[i][j] = (rand() % 100) + 1;
            matB[i][j] = (rand() % 100) + 1;
        }
    }

    // Time the matrix multiplication
    start = clock();
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            matC[i][j] = 0;
            for (k = 0; k < SIZE; k++) {
                matC[i][j] += matA[i][k] * matB[k][j];
            }
        }
    }
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;

    printf("Matrix multiplication completed in %f seconds\n", cpu_time_used);

    return 0;
}
