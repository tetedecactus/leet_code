/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortedSquares.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 11:23:48 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/18 14:54:57 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Squares of a Sorted Array
//Given an integer array nums sorted in non-decreasing order, return an array of the squares of each number sorted in non-decreasing order.

/* 
Input: nums = [-4,-1,0,3,10]
Output: [0,1,9,16,100]
Explanation: After squaring, the array becomes [16,1,0,9,100].
After sorting, it becomes [0,1,9,16,100]. 
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void ft_swap(int *x, int *y)
{
    int temp;
    
    temp = *x;
    *x = *y;
    *y = temp;
}

int *selection_sort(int arr[], int size)
{
    int i;
    int j;
    int min_idx;
    
    i = 0;
    while (i < size - 1)
    {
        min_idx = i;
        j = i + 1;
        while (j < size)
        {
            if(arr[j] < arr[min_idx])
                min_idx = j;
            j++;
        }
        ft_swap(&arr[min_idx], &arr[i]);
        i++;
    }
    return (arr);
}
/**
 * Note: The retrned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize)
{
    int i = 0;
    int *arr;
    
    arr = malloc(sizeof(int) * (numsSize));
    while (i < numsSize)
    {
        nums[i] *= nums[i];
        i++;
    }
    arr = selection_sort(nums, numsSize);
    *returnSize = numsSize;
    return (arr);
    
}

int main()
{
    int i = 0;
    int arr[] = {-4,10,3,-1,0};
    int len = 5;
    int *ret;

    sortedSquares(arr, len , ret);
    while (i < len)
    {
        printf("%d,", arr[i]);
        i++;
    }
    printf("\n");
}