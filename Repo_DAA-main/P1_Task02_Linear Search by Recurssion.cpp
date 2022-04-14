#include<iostream>
using namespace std;

void search(int arr[],int n,int k)
{
	static int i=0,count=0;
	if(arr[i]==k)
	{
		cout<<"Element found"<<endl;
		cout<<"Position is:"<<(i+1)<<endl;
		count++;
	}
	else if(i==n)
	{
		cout<<"Element not found"<<endl;
		count++;
	}
	else if(count!=0)
	{
		return ;
	}
	else
	{
		i++;
		search(arr,n,k);
	}
}
int main()
{
	cout<<"Linear Search By Recurssion"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n,key;
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
	search(arr,n,key);
	
	return 0;
}
