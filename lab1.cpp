#include<iostream>
using namespace std;

int main()
{
	int i;
	cin>>i;
	while(i!=1)
	{
		cout<<i<<" ";
		if(i%2)
			i=i*3+1;
		else
			i/=2;
	}
	cout<<"1"<<endl;
	return 0;
}
