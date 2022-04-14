#include<iostream>
#include<iostream>
using namespace std;
int main()
{
	int n,swap=0,comp=0;
	cout<<"Question 8"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	cout<<"Enter the size of array:"<<"\n";
	cin>>n;
	
	int arr[n];
	cout<<"Enter the element of array"<<endl;
	for(int i=0; i<n; i++)
	cin>>arr[i];
	int min,temp;
	for(int i=00; i<n-1; i++)
	{
		min=i;
		for(int j=i+1; j<n; j++)
		{
			comp++;
			if(arr[j]<arr[min])
			{
				min=j;
			}
		}
		temp=arr[i];
		arr[i]=arr[min];
		arr[min]=temp;
		swap++;
	}
	for(int i=0; i<n; i++)
	cout<<arr[i]<<" ";
	cout<<"comparisions ="<<comp<<"\n";
	cout<<"Swaps ="<<swap<<"\n";
}
