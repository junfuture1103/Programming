#include <stdio.h>
int input_N(void) {
    int tmp_N;
    scanf("%d", &tmp_N);
    return tmp_N;
}

void sum_to_array(int* arr, int N) {
    int i;
    for (i = 0; i < 5; i++) {
        *(arr + i) += N;
    }
    return;
}
void print_array(int* arr) {
    int i;
    for (i = 0; i < 5; i++)
        printf("[%d]:%d\n", i, *(arr + i));
}

int main(void) {
    int array[5] = { 1, 10, 15, 20, 100 };
    int N;

    N = input_N();

    sum_to_array(array, N);
    print_array(array);
    return 0;
}