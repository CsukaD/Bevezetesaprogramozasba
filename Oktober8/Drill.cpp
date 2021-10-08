#include "std_lib_facilities.h"
int main()
{
const int m_to_cm =100;
const double in_to_cm=2.54;
const int ft_to_in=12;
double number=0;
string unit ="";
double smallest;
double largest;
int counter=0;
vector<double>Final;
double sum=0;
int i=0;
while(cin >> number >> unit)
{
if (unit =="cm" || unit =="m" || unit =="in" || unit =="ft")
{
if (i == 0)
{
smallest=number;
largest=number;
i++;
}
if (unit =="m")
{
Final.push_back(number);
}
if (unit =="cm")
{
number=number/m_to_cm;
Final.push_back(number);
}
if (unit =="in")
{
number=number*in_to_cm/m_to_cm;
Final.push_back(number);
}
if (unit =="ft")
{
number=number*ft_to_in*in_to_cm/m_to_cm;
Final.push_back(number);
}
if (number < smallest)
{
cout << "smallest so far" << endl;
smallest=number;
}
else
{
if (number > largest)
{
cout << "largest so far" << endl;
largest=number;
}
}
}
else
{
error("Incorrect unit");
}
counter++;
sum+=number;
}
sort(Final);
keep_window_open("|");
cout << "The smallest value: " << smallest <<" m" << endl;
cout << "The largest value: " << largest <<" m"<< endl;
cout << "Number of values: " << counter << endl;
cout << "Sum of values: " << sum << " m" << endl;
for (i=0;i<Final.size();++i)
{
cout << "Vector["<< i+1 <<"]" <<" = " << Final[i] << " m" <<endl;
}
return 0;
}
