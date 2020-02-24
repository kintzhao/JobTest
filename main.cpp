#include <iostream>

class Test
{
public:
	Test():a(0), b(0), c(0){}
	int one()
	{
 
	 auto f= [=](){ a+=100; b+=20; return a;};
	 return f();
	}

int a;
int b;
int c;
};

int main()
{

 Test t;
 auto one = t.one();
 auto two = t.one();
 std::cout<<"test:"<<one<<" two:"<<two<<" a:"<<t.a<<" b:"<<t.b<<std::endl;
 return 1;
}
