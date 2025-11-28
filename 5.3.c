#include <stdio.h>
int main()
{
    int n,i,num,freq = 0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the elements to find the frequency: \n");
    scanf("%d",&num);
    for(i=0;i<n;i++)
    {
        if(arr[i]==num)
        {
            freq++;
        }
    }
    printf("Frequency of %d is: %d\n",num,freq);
    return 0;

}