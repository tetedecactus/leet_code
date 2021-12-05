/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MergeSortedArray.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 12:13:03 by olabrecq          #+#    #+#             */
/*   Updated: 2021/12/04 09:32:31 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, 
representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1.
To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, 
and the last n elements are set to 0 and should be ignored. nums2 has a length of n. 
*/

// Example 
/* 
Input: nums1 = [1,2,3,0,0,0], m = 3, nums2 = [2,5,6], n = 3
Output: [1,2,2,3,5,6]
Explanation: The arrays we are merging are [1,2,3] and [2,5,6].
The result of the merge is [1,2,2,3,5,6] with the underlined elements coming from nums1. 
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n)
{
   /* n1 will track nums1 index, n2 will track nums2 index */
    int n1 = m - 1, n2 = n - 1;
    /* i will track nums1 index from backward */
    int i = nums1Size - 1;
   
    if(m == 0 && n == 0) 
        return;
  
    /* Merge is done backwards to make it inplace */
    for(i = nums1Size - 1; i >= 0 && n1 >= 0 && n2 >=0 ; i--) 
    {
        if(nums1[n1] >= nums2[n2]) 
        {
            nums1[i] = nums1[n1];
            n1--;
        }
        else 
        {
            nums1[i] = nums2[n2];
            n2--;
        }
    }
    while(n1 >= 0)
    {
        nums1[i] = nums1[n1];
        n1--;
        i--; 
    }
    while(n2 >= 0)
    {
        nums1[i] = nums2[n2];
        n2--;
        i--; 
    }
    return;
}
