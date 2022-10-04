#include <stdio.h>

void swap_pointer(int** arr_A, int** arr_B) {
    int* tmp_arr;

    tmp_arr = *(arr_A);
    *(arr_A) = *(arr_B);
    *(arr_B) = tmp_arr;

    return;
}

void print_array(int* arr, int len) {
    int i;
    printf("|");

    for (i = 0;i < len;i++) {
        printf("%2d|", *(arr + i));
    }
    printf("\n");

}

int main(void) {
    int i;

    int array_a[5] = { 1,2,3,4,5 };
    int array_b[6] = { 10,20,30,40,50,60 };

    int* arr1 = array_a; int* arr2 = array_b;

    printf("before)\n");
    printf("arr1:"); print_array(arr1, 5);
    printf("arr2:"); print_array(arr2, 6);

    swap_pointer(&arr1, &arr2);

    printf("\nafter)\n");
    printf("arr1:"); print_array(arr1, 6);
    printf("arr2:"); print_array(arr2, 5);

    return 0;
}