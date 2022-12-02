// add new element in array and remove last element.
#include<stdio.h>
int main()
{
	int arr[50],i,n,pos,num;
	printf("Enter a no. of elements in array : ");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	printf("Your array is \n");

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\nEnter a position : ");
	scanf("%d",&pos);

	printf("Enter a num : ");
	scanf("%d",&num);

	for(i=n-1;i>=pos;i--)
	{
		arr[i+1]=arr[i];

	}
	arr[pos]=num;

	for(i=0;i<n;i++)
	{
		printf("%d\t",arr[i]);
	}
}
