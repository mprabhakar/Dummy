#include<iostream>
using namespace std;
class sample
{
private:
	int i;
public:
	sample(int ii)
	{
		i=ii;
		cout<<endl<<"Constructed"<<i;
	}
};

sample s1(1);
sample s2(2);

void main()
{
sample s3(3);
sample s4(4);
}