/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findMaxConsecutiveOne.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:36:32 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/11 10:38:04 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Given a binary array nums, return the maximum number of consecutive 1's in the array.

/* 
Input: nums = [1,1,0,1,1,1]
Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s. The maximum number of consecutive 1s is 3. 
*/

#include <math.h>

int findMaxConsecutiveOnes(int* nums, int numsSize)
{
    int i = 0;
    int max = 0, count = 0, temp;
    
    while (i< numsSize)
    {
        if (nums[i] == 1)
            count++;
        else
        {
            temp = count;
            max = fmax(max, temp);
            count = 0;
        }
        i++;
    }
    return fmax(count, max);
}