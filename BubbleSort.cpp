#include<iostream>
using namespace std;
int main()
{
	int i, a=[12], j;
	a = {1,2,32,2,12,23,234,321,121,21,3,4};
	cout<<"Unsorted array";
	for(i=0; i<12; i++)
	{
		cout<<a[i];
	}
	for(i=0; i<12; i++)
	{
		for(j=0; j<12-i; j++)
		{
			if(a[j]>a[j+1])
			{
				int temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			}
			else
			{
				continue;
			}
		}
	}
	for(i=0; i<12; i++)
	{
		cout<<a[i];
	}
	return 0;
}
