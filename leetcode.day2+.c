#include<stdio.h>
int next_n(int n)
{
    int sum=0;
while(n!=0){    
 int d=n%10;
 n/=10;
 sum+=d*d;
} 
return sum;
}

int main()
{
 int n;
 scanf("%d",&n);
 int fast=n;
 int slow=n;
 do{
  fast=next_n(next_n(fast));
  slow=next_n(slow);  
} while(fast!=slow);

printf("%d\n",fast);
printf("%d\n",slow);
    return 0;
}