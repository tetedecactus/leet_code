/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicateZero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:37:18 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/22 11:42:44 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Given a fixed-length integer array arr, duplicate each occurrence of zero, shifting the remaining elements to the right.

/* 
Input: arr = [1,0,2,3,0,4,5,0]
Output: [1,0,0,2,3,0,0,4]
Explanation: After calling your function, the input array is modified to: [1,0,0,2,3,0,0,4] 
*/

#include <stdio.h>
#include <stdlib.h>

void ft_shift(int *arr, int position, int arrSize)
{
    int i;
    
    i = 0;
    while (arrSize --> position)
    {
        arr[arrSize] = arr[arrSize - 1];       
    }
}

void duplicateZeros(int* arr, int arrSize)
{
    int i;
    
    i = 0;
    while (i < arrSize)
    {
        i += (arr[i]) ? 1 : (ft_shift(arr, i + 1, arrSize), 2);
    }
}