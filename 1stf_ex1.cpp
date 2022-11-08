#include<iostream>
/*using namespace std;
float add(int x,int y)
{
	int z=x+y;
	return z;
	
}
int max(int p,int q,int r)
{
	if(p>q&&p>r)
	{
		return p;
	}
	else if(q>p&&q>r)
	{
		return q;
	}
	else if(r>p&&r>q)
	{
		return r;
	}else
	{
		cout<<"wrong input";
	}

}
int main()
{
	int a=10 ,b=15,x=20,y=12,z=36;
	int c=add(a,b);
	int p=max(x,y,z);
	cout<<" addition of the numbers is : "<<c<<endl;
cout<<p;
}*/
/*#include<iostream>

using namespace std;
template <class T>                                                                                                                                          >

 T max(T x,T y)
{
	if(x>y)
	{
		return x;
	}else
	{
		return y;
	}
}
int main()
{
	int c=max(10,5);
	float f=max(10.5f,100.5f);
	cout<<f<<endl<<c<<endl;
}*/
#include<iostream>
using namespace std;
template<class T>
T maxim(T a, T b)
{
	return a>b?a:b;
}
int main()
{
	cout<<maxim(12,14)<<endl;
	cout<<maxim(2.3,1.4)<<endl;
	cout<<maxim(2.3f,1.4f)<<endl;
	return 0;
}
