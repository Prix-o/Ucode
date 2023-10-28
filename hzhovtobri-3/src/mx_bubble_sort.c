#include "../inc/libmx.h"

int mx_bubble_sort(char**arr, int size) {

    int count = 0;
    char* tmp;

    for(int i = 0; i < size - 1; i++) {
        for(int j = 0; j < size - i - 1; j++) {
            if(mx_strcmp(arr[j], arr[j+1]) > 0) {

                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;

                count++;

            }
        }
    }

    return count;
}

