// Day : 97 WAP to demonstrate the use of inline function?

#include<iostream>

inline int cube(int num)
{
	return num*num*num;
}

inline int add(int x, int y)
{
	return (x+y);
}

inline float div(float i, float j)
{
	return(i/j);
}

int main()
{
	int number;
	int a=5, b=3;

	cout<<"Enter a number:"<<endl;
	cin>>number;

	cout<<"Cube of "<<number<<" is:"<<cube(number)<<endl;

	cout<<add(a,b)<<endl;
	cout<<div(a,b)<<endl;

	return 0;
}
