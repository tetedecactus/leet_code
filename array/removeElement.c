/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   removeElement.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 09:31:42 by olabrecq          #+#    #+#             */
/*   Updated: 2021/12/04 19:51:15 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
The relative order of the elements may be changed.

Since it is impossible to change the length of the array in some languages, you must instead 
have the result be placed in the first part of the array nums. More formally, if there are k 
elements after removing the duplicates, then the first k elements of nums should hold the final result. 
It does not matter what you leave beyond the first k elements.

Return k after placing the final result in the first k slots of nums.

Do not allocate extra space for another array. You must do this by 
modifying the input array in-place with O(1) extra memory.
*/
//----------->EXAMPLE<------------
/*
Input: nums = [0,1,2,2,3,0,4,2], val = 2
Output: 5, nums = [0,1,4,0,3,_,_,_]
Explanation: Your function should return k = 5, with the first five elements of nums containing 0, 0, 1, 3, and 4.
Note that the five elements can be returned in any order.
It does not matter what you leave beyond the returned k (hence they are underscores).
*/

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int removeElement(int* nums, int numsSize, int val)
{
    int count = 0;
    
    for (int i = 0 ; i < numsSize; i++)
    {
        if (nums[i] != val)
        {
            nums[count] = nums[i];
            count++;
        }
    }
    for (int i = 0 ; i < numsSize; i++)
        printf("%d", nums[i]);
    printf("\n");
    return (count);
    
}

int main()
{
    // int nums[8] = {0,1,2,2,3,0,4,2};
    // int val = 2;
    // int numsSize = 8;
    int nums[4] = {3,2,2,3};
    int val = 3;
    int numsSize = 4;
    
    printf("output = %d\n", removeElement(nums, numsSize, val));
    
    for (int i = 0; i < numsSize; i++)
        printf("%d", nums[i]);
    printf("\n");
       
    return 0;
}