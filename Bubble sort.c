#include <stdio.h>
Void main ()
{
    int a[50], n, i, j, temp;    
    printf("Please Enter the  number of Elements you want in the array: ");
    scanf("%d", &n);    
    printf("Please Enter the Value of Elements: ");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);
    for(i = 0; i < n - 1; i++)
{       
        for(j = 0; j < n - i - 1; j++)
{          
            if(a[j] > a[j + 1])
{               
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    printf("After  implementing bubble sort: ");
    for(i = 0; i < n; i++)
{
        printf("%d\t  ", a[i]);
    }
    return 0;
}
