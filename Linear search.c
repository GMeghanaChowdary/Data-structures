#include <stdio.h>
void main()
{  
    int n, i,  key, flag = 0,arr[100];
    printf("Enter number of elements you would like to take as input: ");
    scanf("%d", &n);
    printf("\nEnter all the elements of your choice:");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nEnter the key element that you would like to be searched: ");
    scanf("%d", &key);
    /*  Linear search starts */
    for (i = 0; i < n; i++)
    {
        if (key == arr[i] )
        {
            flag= 1;
            break;
        }
    }
    if (flag == 1)
        printf("we got the element at index %d",i+1);
    else
        printf("we haven’t got element at any index in the array\n");
getch();
}
