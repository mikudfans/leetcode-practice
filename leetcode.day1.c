int Single_Number(int*arr,int se)   //Single Number
{
  int n=arr[0];
  for(int i=1;i<se;i++)
  {
    n^=arr[i];
  }
return n;
}
#include<stdio.h>
int main()
{
  int arr[]={4,3,3,2,1,1,4};
  int se=sizeof(arr)/sizeof(arr[0]);
  
  printf("%d",Single_Number(&arr,se));


    return 0;
}