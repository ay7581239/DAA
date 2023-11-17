#include<stdio.h>
void counts(int a[],int n,int k)
{
	int b[n];
	int count[k+1],pre[k+1];
	for(int i=0;i<=k;i++)
	{
		count[i]=0;
	}
	for(int i=0;i<n;i++)
	{
		count[a[i]]=count[a[i]]+1;
	}pre[0]=count[0];
	for(int i=1;i<=k;i++)
	{
		pre[i]=pre[i-1]+count[i];
	}
	for(int i=n-1;i>=0;i--)
	{
		b[pre[a[i]]-1]=a[i];
		pre[a[i]]-=1;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",b[i]);
	}
}
void main(){
	int i,n,k=0;
	printf("enter the size of array : ");
	scanf("%d",&n);
	int a[n];
	printf("enter the element in array : ");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>k)
		k=a[i];	
	}
	counts(a,n,k);
}
