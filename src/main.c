#include <stdio.h>
#include "sort.h"
int main() { 

    int arr[10] = {8, 6, 7, 5, 4, 1, 3, 2}; 
    bubble_sort(arr, 8); 
    int i; 

    for (i = 0; i < 8 ; i++) { 
        printf("%d\n", arr[i]); 
    } 
    return 0; 
} 
