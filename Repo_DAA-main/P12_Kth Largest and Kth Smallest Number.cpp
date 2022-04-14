#include<iostream>
using namespace std;
void find(int arr[],int n,int k,int ch)
{   int i,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	    if(ch==1)
	    {   
	       for(i=0;i<k;i++);
	       	 cout<<k<<"th smallest element is :"<<arr[i-1];
		}
		else
		   for(i=n-1;i>=n-k;i--){
		   
		   cout<<k<<"th Largest element is :"<<arr[i+1];
}
}
int main()
{
	int n,ch,k;
	cout<<"Question 12"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	cout<<"Enter the no. of terms:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"Menu\n";
	cout<<"1. For Kth Smallest"<<endl;
	cout<<"2. For Kth largest"<<endl;
	cin>>ch;
	cout<<"Enter the value of k:";
	cin>>k;
	find(arr,n,k,ch);
	return 0;
}
