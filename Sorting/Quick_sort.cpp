#include<iostream>
int g;

int printing(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
   printf("%d ",arr[i]);
  }
  printf("\n");
  return 1;
}

int partition(int arr[],int lb,int up)
{
 int l,r,k;
 k=up;
 int pivot=arr[lb];
  l=lb;
  r=up;
  while(l<r)
  {
    while(arr[l]<pivot || arr[l]==pivot)
    {
      l++;
    }
    while(arr[r]>pivot)
    {
      r--;
    }    
    if(l<r)
    {
      int temp=0;
      temp=arr[l];
      arr[l]=arr[r];
      arr[r]=temp;

    }
  }
  int tempo=0;
  tempo=arr[lb];
  arr[lb]=arr[r];
  arr[r]=tempo;

  return r;
}


int quick_sort(int arr[],int lp,int up)
{ 
 if(lp<up)
 {
 int pos=partition(arr,lp,up);
 quick_sort(arr,lp,pos-1);
 quick_sort(arr,pos+1,up);
 }
 return 1;
}



int main()
{
  int i,n;
  scanf("%d",&n);
  int arr[n];
  g=n;
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr[i]);
  }  
      printf("quick Sort: ");
      quick_sort(arr,0,n-1);
      printing(arr,n);
  }
