#include<iostream>
using namespace std;
int main()
{
	int i, a={21,32,21,1,3,2,5,432,5,43,2,9}, j;
	cout<<"Unsorted array">>;
	for(i=0; i<(sizeof(a)/sizeof(*a)); i++)
	{
		cout<<a[i]>>;
	}
	for(i=0; i<(sizeof(a)/sizeof(*a)); i++)
	{
		for(j=0; j<(sizeof(a)/sizeof(*a))-i; j++)
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
	for(i=0; i<(sizeof(a)/sizeof(*a)); i++)
	{
		cout<<a[i]>>;
	}
	return 0;
}
