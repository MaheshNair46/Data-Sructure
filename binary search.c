//aim: To develop a program to implement the binary search 
#include<stdio.h>
int main()
{
    int i, low, high, mid, n, key, array[100];
    printf("Enter the Array elements : ");
    scanf("%d",&n);
    printf("\nEnter the element in array: ");
    for(i=0;i<n;i++)
    scanf("%d",&array[i]);
printf("\nEnter the  element to be searched : ");
scanf("%d",&key);
low =0;
high = n-1;
mid=(low+high)/2;
while(low<=high)
{
    if(array[mid]<key)
    low=mid+1;
else if(array[mid]==key)
{
    printf("\n%d found at position %d",key,mid);
    break;
}
else 
high =mid-1;
mid=(low +high)/2;
}
if(low>high)
printf("\n%d not found in the array ",key);
return 0;
}