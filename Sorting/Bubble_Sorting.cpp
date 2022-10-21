#include<iostream>
using namespace std;

int printing(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
   printf("%d ",arr[i]);
  }
  printf("\n");
  return 1;
}



int bubble_sort(int arr[],int n)
{
  int i,j,zo;
  for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
      if(arr[i]>arr[j])
      {
        zo=arr[i];
        arr[i]=arr[j];
        arr[j]=zo;
      }
    }
  }
  printing(arr,n);
  return 1;
}
int main()
{
  int i,n;
 cout<<"Enter the size of the array : ";
  scanf("%d",&n);
  cout<<"Enter the numbers : ";
  int arr[n];
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }  
      printf("Bubble Sort: ");
      bubble_sort(arr,n);
  }
