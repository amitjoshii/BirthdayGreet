#include<iostream>
using namespace std;
int main()
{
	int arr[10],n,i,sum=0;
	cout<<"enter number of element";
	cin>>n;
	for(i=0;i<n;i++)
	{
		
		cout<<"enter element"<<i++<<":";
	    cin>>arr[i];
		sum=sum+arr[i];
	
	}
//	for(i=0;i<n;i++)
	cout<<"\n The sum of array is :"<<sum;
	return 0;

}
