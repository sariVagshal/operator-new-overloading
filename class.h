#include <iostream>
#include <stdlib.h>
using std::cout;
using std::endl;

class ClassExample
{
public:
	ClassExample();
	~ClassExample();

	void foo();

	void* operator new(size_t);
	void* operator new[](size_t);
	void operator delete(void *);

private:
	int a;
};

//========implements for functions of ClassExample:========


ClassExample::ClassExample()
{
	cout<<"CTOR ClassExample"<<endl;
}

ClassExample::~ClassExample()
{
	cout<<"DTOR ClassExample"<<endl;
}

void ClassExample::foo()
{
	cout<<"f()"<<endl;
}

void* ClassExample::operator new(size_t t)
{
	cout<<"operator new, "<<t<<" Bytes"<<endl;
	void * m = malloc(t);
	if(m == NULL)
		throw std::bad_alloc();
	return m;
	
}

void* ClassExample::operator new[](size_t t)
{
	cout<<"operator new, "<<t<<" Bytes"<<endl;
	void * m = malloc(t);
	if(m == NULL)
		throw std::bad_alloc();
	return m;
	
}

void ClassExample::operator delete(void * v)
{
	cout<<"operator delete"<<endl;
	free(v);
}