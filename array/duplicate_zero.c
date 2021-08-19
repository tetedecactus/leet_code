#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[10] = {0};
    int i;
    int x;
    int position;
    int length;

    i = 0;
    length = 10;
    while (i < length)
    {
        array[i] = i + 1;
        printf("%d,", array[i]);
        i++;
    }
    printf("\n");
    x = 50;
    position = 5;
    //length++; si on veux ajouter un element , mais pas si on veux shift
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
    while (i < length)
    {
        printf("%d,", array[i]);
        i++;
    }
    printf("\n");
    return (0);
}