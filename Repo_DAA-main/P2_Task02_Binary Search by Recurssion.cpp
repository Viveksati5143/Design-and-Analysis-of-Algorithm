#include<iostream>
using namespace std;

void search(int arr[],int low,int mid,int high,int key)
{
	static int counter=0;
	if(low>high)
	{
		cout<<"Not Found"<<endl;
		counter++;
		//return 0;
	}
    else if(arr[mid]==key)
	{
		cout<<"Element found"<<endl;
		return ;
	}
	else if(arr[mid]>key)
	{
	    high=mid-1;
	}
	else if(arr[mid]<key)
	{
		low=mid+1;
	}
	mid=(low+high)/2;
	search(arr,low,mid,high,key);
}
int main()
{
	cout<<"Binary Search by Recurssion"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n,key,counter=0;
	cout<<"Enter the number of element:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key element to be search:";
	cin>>key;
	int low=0,high=n;
	int mid=(low+high)/2;
	search(arr,low,mid,high,key);
	
	return 0;
}
