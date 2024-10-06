//aim: to develop a program that can implement the linear search 
#include<stdio.h>
int main()
{
    int n,s,i,flag=0;
    printf("enter array limit : ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the array Elements :");
    for( i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("\n Array elements are :");
     for(i=0;i<n;i++)
    printf("%d",a[i]);
    printf("\n enter the  elements to be found : ");
      scanf("%d",&s);
      for(i=0;i<n;i++)
      {
      if(s==a[i])
      {
        printf("\n the array element: %d is found in position: %d",s,i);
        break;
      }    
      } 
      if (s==!a[i])
      printf("\n the element not found: ",s);
    return 0;
    }