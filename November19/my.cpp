#include "my.h"
#include "std_lib_facilities.h"
void print_foo()
{
cout << foo << endl;
}
void print(int i)
{
cout << i << endl;
}
void swap_v(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void swap_r(double& a,double& b)
{
int temp;
temp=a;
a=b;
b=temp;
}
void swap_cr(int a,int b)
{
int temp;
temp=a;
a=b;
b=temp;
}
