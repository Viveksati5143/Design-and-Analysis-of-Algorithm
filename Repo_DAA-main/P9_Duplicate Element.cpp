#include<iostream>
using namespace std;

int main()
{
	cout<<"Question 9"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n,counter=0;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Duplicate Elements are: ";
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
			cout<<arr[j]<<" ";
		}
	}
	
}
