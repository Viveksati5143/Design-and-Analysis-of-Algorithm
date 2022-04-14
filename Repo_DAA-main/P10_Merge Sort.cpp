#include<iostream>
using namespace std;
int count=0;
void merge(int arr[],int low,int mid,int high)
{
	int i,j,k;
	int n1=mid-low+1;
	int n2=high-mid;
	int left[n1],right[n2];
	
	for(i=0;i<n1;i++)
	{
		left[i]=arr[low+i];
	}
	
	for(j=0;j<n2;j++)
	{
		right[j]=arr[mid+1+j];
	}
	i=0;
	j=0;
	k=low;
	while(i<n1 && j<n2)
	{
		if(left[i]<=right[j])
		{
			arr[k]=left[i];
			i++;
		}
		else
		{
		   arr[k]=right[j];
		   j++;
	    }
	  k++;
	  count++;
	}
	while(i<n1)
	{
		arr[k]=left[i];
		i++;
		k++;
	}
	while(j<n2)
	{
		arr[k]=right[j];
		j++;
		k++;
	}
}
void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}
int main()
{
	cout<<"Question 10"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	 int n;
	 cout<<"Enter the no. of terms:";
	 cin>>n;
	 int arr[n];
	 for(int i=0;i<n;i++)
	 {
	 	cin>>arr[i];
	 }
	 mergesort(arr,0,n-1);
	 cout<<"No. of comparisons:"<<count<<endl;
	 for(int i=0;i<n;i++)
	 {
	 	cout<<arr[i]<<" ";
	 }
	 return 0;
}
