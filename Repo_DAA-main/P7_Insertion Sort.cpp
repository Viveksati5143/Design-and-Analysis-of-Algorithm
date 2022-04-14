#include<iostream>
using namespace std;

int main()
{
	int n,shift,comp;
	    cout<<"Question 7"<<endl;
	    cout<<"Avnendra Singh Chauhan_F_200211224"<<endl;
	    cout<<"Enter the size of array :";
		cin>>n;
		cout<<"Enter the elements of array:"<<endl;
		int arr[n];
		for(int i=0; i<n; i++)
		cin>>arr[i];
		int v,j;
		for(int i=1; i<n; i++)
		{
			v=arr[i];
			j=i;
			while(arr[j-1]>v && j>=1)
			{
				shift++;
				comp++;
				arr[j]=arr[j-1];
				j--;
			}
			shift++;
			arr[j]=v;
		}
		for(int i=0; i<n; i++)
		cout<<arr[i]<<"   ";
		cout<<"\n";
		cout<<"comparisions ="<<comp<<endl;
		cout<<"shifts ="<<shift<<endl;
	return 0;
}
