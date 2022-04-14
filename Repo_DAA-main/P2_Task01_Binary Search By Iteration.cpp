#include<iostream>
using namespace std;

int main()
{
	cout<<"Binary Search By Iterative"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n,key,count=0;
	cout<<"Enter the number of element of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key element to be search:";
	cin>>key;
	int mid,low=0,high=n;
	while(low<high)
	{
		mid=(low+high)/2;
		if(arr[mid]==key)
		{
			cout<<"Number is found"<<endl;
			count++;
			break;
		}
		else if(arr[mid]>key)
		{
			high=mid-1;
		}
		else if(arr[mid]<key)
		{
			low=mid+1;
		}
	}
	if(count==0)
	{
		cout<<"Not found"<<endl;
	}
	return 0;
}
