#include <cstdio>
#include <algorithm>
using namespace std;

void selectSort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		int k=i;
		for(int j=i; j<n; j++)
		{
			if(arr[k]>arr[j])
				k = j;
		}
		int tmp = arr[i];
		arr[i] = arr[k];
		arr[k] = tmp;
	}
}

void bubbleSort(int arr[], int n)
{
	for(int i=0; i<n-1; i++)
	{
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
}

void insertSort(int arr[], int n)
{
	for(int i=1; i<n; i++)
	{
		int j = i;
		while(arr[j]<arr[j-1] && j>0)
		{
			int tmp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = tmp;
			j--;
		}
	}
}

const int maxn = 100;
void merge(int A[], int L1, int R1, int L2, int R2)
{
	int i=L1, j=L2;   //two pointers
	int tmp[maxn], index = 0;
	while(i<=R1 && j<=R2)
	{
		if(A[i]<=A[j])
			tmp[index++] = A[i++];
		else
			tmp[index++] = A[j++];
	}
	while(i<=R1)
		tmp[index++] = A[i++];
	while(j<=R2)
		tmp[index++] = A[j++];
	for(int i=0; i<index; i++)
	{
		A[L1+i] = tmp[i];
	}
}
void mergeSort(int A[], int left, int right)
{
	if(left<right)
	{
		int mid = (left+right)/2;
		mergeSort(A, left, mid);
		mergeSort(A, mid+1, right);
		merge(A, left, mid, mid+1, right);
	}
}
void mergeSort2(int A[])
{
	for(int step=2; step/2<=n; step *=2)
	{
		for(int i=0; i<n; i+=step)
		{
			int mid = i+step/2-1;
			if(mid+1<=n)
				merge(A,i,mid,mid+1,min(i+step-1,n)); 
		}
	}
}

int main()
{
	int arr1[]={4,4,7,2,1,9,6,12,32,0,3,4,9,18};
	int arr2[]={4,4,7,2,1,9,6,12,32,0,3,4,9,18};
	int arr3[]={4,4,7,2,1,9,6,12,32,0,3,4,9,18};
	int arr4[]={4,4,7,2,1,9,6,12,32,0,3,4,9,18};
	int arr5[]={4,4,7,2,1,9,6,12,32,0,3,4,9,18};
	int len = sizeof(arr1)/sizeof(arr1[0]);
	//Algorithm Sort
	sort(arr1, arr1+len);
	for(int i=0; i<len; i++)
	{
		if(i==0)
			printf("Algorithm Sort: ");
		printf("%d ",arr1[i]);
	}	
	printf("\n");
	//Select Sort
	selectSort(arr2, len);
	for(int i=0; i<len; i++)
	{
		if(i==0)
			printf("Select Sort: ");
		printf("%d ",arr2[i]);
	}
	printf("\n");
	//Bubble Sort
	bubbleSort(arr3, len);
	for(int i=0; i<len; i++)
	{
		if(i==0)
			printf("Bubble Sort: ");
		printf("%d ",arr3[i]);
	}
	printf("\n");
	//Insert Sort
	insertSort(arr4, len);
	for(int i=0; i<len; i++)
	{
		if(i==0)
			printf("Insert Sort: ");
		printf("%d ",arr4[i]);
	}
	printf("\n");
	//Merge Sort
	mergeSort(arr5, 0, len-1);
	for(int i=0; i<len; i++)
	{
		if(i==0)
			printf("Merge Sort: ");
		printf("%d ",arr5[i]);
	}			
}
