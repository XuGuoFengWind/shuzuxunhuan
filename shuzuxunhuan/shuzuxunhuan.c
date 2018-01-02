#include <stdio.h>
#include <stdlib.h>
#define K 100
int main()
{
    int a[K]={0},i,m,n,h;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    if(m<n && n!=1)
    {
	    for(i=m;i<n;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    for(i=0;i<m-1;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    printf("%d",a[m-1]);
	}
	else if(m>n && (m%n)!=0 && n!=1)
	{
		h=m%n;
		for(i=h;i<n;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    for(i=0;i<h-1;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    printf("%d",a[h-1]);	
	}
	else if(m%n==0 && n!=1)
	{
		for(i=0;i<n-1;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    printf("%d",a[n-1]);
	}
	else if(n==1)
	{
		printf("%d",a[n-1]);
	}
    return 0;
}
