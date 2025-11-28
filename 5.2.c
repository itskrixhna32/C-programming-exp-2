#include <stdio.h>
int main()
{
    int arr[6];
    printf("enter the elements you want to enter: \n");
    for(int i=0;i<6;i++)
    {
        scanf("%d",&arr[i]);
    }
    int count_positive = 0;
    int count_negative = 0;
    int count_even = 0;
    int count_odd = 0;
    for(int i=0;i<6;i++)
    {
        if(arr[i]>0)
        {
            count_positive++;
        }
        else if(arr[i]<0)
        {
            count_negative++;
        }
        if(arr[i]%2==0)
        {
            count_even++;
        }
        else
        {
            count_odd++;
        }
    }
    printf("Positive numbers: %d\n",count_positive);
    printf("Negative numbers: %d\n",count_negative);
    printf("Even numbers: %d\n",count_even);
    printf("Odd numbers: %d\n",count_odd);

    return 0;

} 