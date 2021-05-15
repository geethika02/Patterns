#include <iostream>
using namespace std;
int main() {
	int n,i,j;
	cin >> n;
	for(i=1;i<2*n;i++)
	cout<<"*";

	cout<<endl;		
	for(i=1;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(j=i;j<n-1;j++)
		{
			cout<<" ";
		}
		for(j=i;j<n-2;j++)
		{
			cout<<" ";
		}
		if(i!=n-1)
		cout<<"*";

		cout<<endl;
	}
}
