#include "sort.h"
void bubble_sort(int *array, int n) {
    
    int i, tp;
    int fl = 1;

    while (fl) {
        fl = 0;
        for (i = 1; i < n; i++) {
            if (array[i] < array[i - 1]) {
                tp = array[i];
                array[i] = array[i - 1];
                array[i - 1] = tp;
                fl = 1;
            }
        }
    }
}
