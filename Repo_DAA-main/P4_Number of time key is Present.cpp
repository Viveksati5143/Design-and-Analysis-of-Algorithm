#include<iostream>
using namespace std;

int main()
{
	cout<<"Question 4"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n=0,key,counter=0;
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Enter the key element to be searched:";
	cin>>key;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==key)
		{
			cout<<"Element found at position "<<i+1<<endl;
			counter++;
		}
	}
	if(counter==0)
	{
		cout<<"Element not found";
	}
	else
	{
	    cout<<"Number of repeatation is "<<counter;	
	}
}
