/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   findNumbers.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 10:33:49 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/11 11:30:55 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Given an array nums of integers, return how many of them contain an even number of digits. 

/* 
Input: nums = [12,345,2,6,7896]
Output: 2
Explanation: 
12 contains 2 digits (even number of digits). 
345 contains 3 digits (odd number of digits). 
2 contains 1 digit (odd number of digits). 
6 contains 1 digit (odd number of digits). 
7896 contains 4 digits (even number of digits). 
Therefore only 12 and 7896 contain an even number of digits. 
*/

#include <stdio.h>

int count_digit(int digit)
{
    int count = 0;
    
    while (digit != 0)
    {
        count++;
        digit /= 10;
    }
    return (count);
}

int findNumbers(int* nums, int numsSize)
{
    int i = 0;
    int even = 0, temp;
    
    while (i < numsSize)
    {
        temp = count_digit(nums[i]);
        if (temp % 2 == 0)
            even++;
        temp = 0;
        i++;
    }
    return (even);
}