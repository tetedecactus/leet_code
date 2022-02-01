#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// fonction fait sdur leetcode.com, en gros elle check si il ya  un double d'un element dans un array de int
// ex :[10, 7,5,11] true car 5 * 2 = 10 
bool checkIfExist(int* arr, int arrSize){
    int i = 0;
    int j = 0;
    int d = 0;;
    
    while (i < arrSize) {
        d = arr[i] * 2;
        j = 0;
        while (j < arrSize) {
            if (d == arr[j])
                return true;
            j++;
        }
        d = 0;
        i++;
    }
    return false;
}
