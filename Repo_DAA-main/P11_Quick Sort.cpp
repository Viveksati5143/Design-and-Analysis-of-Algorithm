#include<iostream>
using namespace std;
int count=0;
int partition(int arr[],int low,int high)
{
	int i=low,j=high+1;
	int pivot=arr[low];
	while(i<j)
	{
		do{
			i++;
			count++;
		}while(arr[i]<=pivot && i<=high);
		do{
			j--;
			count++;
		}while(arr[j]>pivot);
		
		if(i<j)
		{
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
		}
	}
	 arr[low]=arr[j];
	 arr[j]=pivot; 
	return j;
}
void quicksort(int arr[],int low,int high)
 {  
    if(low<high)
    {
	 int mid=(low+high)/2;
	 int j=partition(arr,low,high);
	 quicksort(arr,low,j-1);
	 quicksort(arr,j+1,high);
    }
}
int main()
{
	int n;
	cout<<"Question 11"<<endl;
	cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	cout<<"Enter the no. of terms:";
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	quicksort(arr,0,n-1);
	cout<<"Number of comparisons:"<<count-2<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	return 0;
}
