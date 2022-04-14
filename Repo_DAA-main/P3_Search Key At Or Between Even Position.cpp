#include<iostream>
#include<cmath>
using namespace std;

void search(int arr[],int n, int key);

int main()
{
	cout<<"Question 3"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n=0,key;
	cout<<"Enter the number of element:";
	cin>>n;
	int arr[n];
	cout<<"Enter the element of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	
	cout<<"Enter the key to be search:";
	cin>>key;
	
	search(arr,n,key);
	
	return 0;
}
void search(int arr[],int n,int key)
{
	static int x=0;
	for(int i=0,j=0;i<n;j++,i=(pow(2,j)))
	{
		if(arr[i]==key)
		{
			cout<<"Element is Found"<<endl;
			return;
		}
		else if(arr[i]<key)
		{
			x=i;
			cout<<x;
		}
		else if(arr[i]>key)
		{
			for(x;x<arr[i];x++)
			{ 
				if(arr[x]==key)
				{
					cout<<"Element found";
					return ;
				}
			}
		}
	}
}
