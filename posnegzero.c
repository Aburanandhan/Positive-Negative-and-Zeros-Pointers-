#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int *p=arr;
    int *q=arr+n-1;
    int po=0,ne=0,ze=0;
    while(p<arr+n)
    {
        if(*p>0)
        {
            po++;
        }
        else if(*p<0)
        {
            ne++;
        }
        else
        {
            ze++;
        }
        p++;
        }
    printf("Number of positive numbers: %d \n", po);
    printf("Number of negative numbers: %d \n", ne);
    printf("Number of zeros: %d \n", ze);
    return 0;
}