#include<stdio.h>
#include<math.h>

int main()
{
int i,j,n,a[13][13],start,end,max;
printf("Enter the limit\n");
scanf("%d",&n);
max=2*(n-1);
start=0;
end=(2*n-1)-1;

while(n != 0)
{
for(i=start;i<=end;i++)
{
 for(j=start;j<=end;j++)
  {
  if(i==start || j==start || i==end || j==end)
    a[i][j]=n;
   }
}
start++;
end--;
n--;
}

for(i=0;i<=max;i++)
{
 for(j=0;j<=max;j++)
   {
   printf("%d",a[i][j]);
   }
 printf("\n");
}

    return 0;
}
