#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	string s,t;
	cin>>s;
	cin>>t;
	try{
		if(s.size()==0||s.length()>100||t.size()==0||t.length()>100)
			throw s.size();
	}
	catch(int e)
	{
		cout<<"Error ocurred : Invalid string length"<<endl;
	}
	reverse(t.begin(),t.end());
	if(t==s)
	{
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
