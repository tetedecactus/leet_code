#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool validMountainArray(int* arr, int arrSize) {
    int count = 0;
    for (int i = 0; i < arrSize; i++) {
        if (arr[i + 1] == arr[i])
            return (false);
        else if (arr[i + 1] < arr[i])
            count++;
        else if (arr[i + 1] > arr[i] && count)
            return false;
    }
    return (true);
}

int main()
{
    int arr[6] = {1,2,3,4,2,1}; // true
    int arr1[6] = {1,2,3,3,2,1}; // false
    int arr2[6] = {1,2,3,4,2,3}; // false --
    int arr3[6] = {0,0,3,4,2,3}; //false
    int arr4[6] = {0,3,2,1}; //true

    printf("value = %d\n", validMountainArray(arr, 6));
    printf("value = %d\n", validMountainArray(arr1, 6));
    printf("value = %d\n", validMountainArray(arr2, 6));
    printf("value = %d\n", validMountainArray(arr3, 6));
    printf("value = %d\n", validMountainArray(arr4, 4));
}