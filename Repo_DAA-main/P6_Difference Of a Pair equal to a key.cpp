#include<iostream>
using namespace std;

int main()
{
	cout<<"Question 6"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n=0,key,counter=0;
	int i=0;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key:";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
				if(arr[j]-arr[i]==key)
				{
					cout<<"First Element:"<<arr[j]<<" Second Element"<<arr[i]<<endl;
				}	
		}
		
	}
}
