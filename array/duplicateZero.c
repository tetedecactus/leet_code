/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   duplicateZero.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:37:18 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/19 13:22:07 by olabrecq         ###   ########.fr       */
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

void duplicateZeros(int *arr, int arrSize)
{
    int i;
    int position;
    int nb_zero;

    i = 0;
    while (i < arrSize)
    {
        
    }
} 

int main()
{
    int array[100] = {0};
    int i;
    int x;
    int position;
    int length;
    int nb_pos;

    i = 0;
    length = 10;
    while (i < length)
    {
        array[i] = i + 1;
        printf("%d,", array[i]);
        i++;
    }
    nb_pos = 0;
    printf("\n");
    x = 50;
    position = 5;
    nb_pos++;
    length++; /* si on veux ajouter un element , mais pas si on veux shift */
    //shift
    i = length;
    while (i >= position)
     {
        array[i] = array[i - 1];
        i--; 
    }
    array[position - 1] = x;
    //print array 
    i = 0;
    while (i < length - nb_pos)
    {
        printf("%d,", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}