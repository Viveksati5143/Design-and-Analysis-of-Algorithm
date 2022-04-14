#include<iostream>
using namespace std;

int main()
{
	cout<<"Linear Search By Iterative"<<endl;
	int n,key,count;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	cout<<"Enter the number of element of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of the array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key element to be searched:";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		count++;
	}
	if(count==0)
	cout<<"Element not found";
	else
	cout<<"Element found";
	
	return 0;
}
