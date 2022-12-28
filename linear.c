#include<stdio.h>
int main()
{
	int a[100],key,i,n;
	printf("Enter size of an array");
	scanf("%d", &n);
	printf("enter elements:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter element to search");
	scanf("%d", &key);
	for(i=0; i<n; i++)
		if(a[i]==key)
		{
			printf("ELement found at position %d", i+1);
		}
		else
		{
			printf("Element not found");
		}
}

