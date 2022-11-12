

#include <stdio.h>
void arrayrev(int arr[])
{
    printf("reverse is");
    for (int i = 5; i >= 0; i--)
    {
        printf(" %d", arr[i]);
    }
}

int main()
{
    int array[6] = {5, 4, 3, 2, 1};
    arrayrev(array);

    return 0;
}