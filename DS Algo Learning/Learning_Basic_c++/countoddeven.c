#include<stdio.h>
#include<conio.h>
int main()
{
    int arr[5], i, odd = 0, even = 0;
    for(i=0; i<5; i++)
    {
        printf("Enter the value of arr[%d]: ", i);
        scanf("%d", &arr[i]);
    } 
    for (i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nNumber of even numbers: %d", even);
    printf("\nNumber of odd numbers: %d", odd);
       
    return 0;
}