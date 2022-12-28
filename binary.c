#include<stdio.h>
int main()
{
	int a[n], low, high, mid, n, key;
	printf("Enter number of elements:");
	scanf("%d", &n);
	printf("Enter elements in sorted order:");
	for(i=0; i<n; i++)
	{
		scanf("%d", &a[i]);
	}
	printf("Enter key to search:");
	scanf("%d", &key);
	low=0;
	high=n-1;
	mid=low+high/2;
	while(low<=high)
	{
		if(a[mid]==key)
			printf("element found at position %d", mid+1);
		break;
		elseif(a[mid]<key)
			low=mid+1;
	}
	else
		high=mid-1;
			mid=low+high/2;
}
if(low>high)
	printf("Not found! %d is not present in list", key);
	return 0;
}



