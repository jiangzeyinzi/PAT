#include <cstdio>
int binarySearch(int A[], int left, int right, int x)
{
	int mid;
	while(left<=right)
	{
		mid = (left+right)/2;
		if(A[mid]==x)
			return mid;
		else if(A[mid]>x)
			right = mid-1;
		else
			left = mid+1;
	}
	return -1;
}
int main()
{
	const int n = 10;
	int A[n] = {1,4,5,6,7,9,12,14,18,19};
	printf("%d %d",binarySearch(A,0,n-1,5),binarySearch(A,0,n-1,10));
	return 0;
}
