#include <iostream>
using namespace std;
int main()

{int n,o;
	
	cout<<"Enter the size of rows: ";
	cin>>n;
	cout<<"Enter the size of columns: ";
	cin>>o;
	int a1[n][o];
	
	
for(int i=0; i<n; i++)
{	
	for(int j=0; j<o; j++)
	{
		cin>>a1[i][j];
	}
}
cout<<endl;
cout<<"Matrix"<<endl;
for(int i=0; i<n; i++)

{for(int j=0; j<o; j++)
	{
		cout<<a1[i][j]<<",	";
	}
		cout<<endl;
}
cout<<endl;
cout<<"Transposed Matrix"<<endl;
for(int i=0; i<o; i++)

{for(int j=0; j<n; j++)
	{
		cout<<a1[j][i]<<",	";
	}
		cout<<endl;
}
return 0;
}
