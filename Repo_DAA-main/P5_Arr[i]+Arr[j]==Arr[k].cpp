#include<iostream>
using namespace std;

int main()
{
	cout<<"Question 5"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	int n=0;
	int i=0,j=0,k=0;
	
	cout<<"Enter the size of array:";
	cin>>n;
	int arr[n];
	cout<<"Enter element of the array"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{	
		   for(int k=j+1;k<n;k++)
		   {
			if(arr[j]+arr[i]==arr[k])
			{
				cout<<"First Element:"<<arr[i]<<" Second Element:"<<arr[j]<<" Third Element:"<<arr[k]<<endl;
			}
		}
	}
}
}
