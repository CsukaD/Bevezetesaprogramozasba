#include "std_lib_facilities.h"
void year()
{
int birth_year;
birth_year=2001;
cout <<"Decimal: " << dec << birth_year << "\t";
cout <<"Hexadecimal: "<< hex << birth_year << "\t";
cout <<"Octal: "<< oct << birth_year << "\t" << endl;
}
void age()
{
int age;
age=21;
cout <<"Decimal: " << dec << age << "\t";
cout <<"Hexadecimal: "<< hex << age << "\t""\t";
cout <<"Octal: "<< oct << age << "\t" << endl;
}
void input()
{
int a,b,c,d;
cin >> a >> oct >>  b >>  hex >>  c >>  d; 
cout << a << '\t'<< b <<  '\t' << c <<  '\t' << d <<  '\n' ; 
}
void output()
{
cout << 1234567.89 << '\t' << fixed << 1234567.89 << "\t\t" <<scientific << 1234567.89 << endl;
} 
void friends()
{
cout	<< setw(10) << "David" << " - " << setw(8) <<"Csuka" << " - " << setw(16) << "+3630 476 6827" << " - " << setw(29) << "csukadavid8@gmail.com" << endl
        << setw(10) << "Brenda" << " - " << setw(8) << "Pataly" << " - " << setw(16) << "+3630 349 6854" << " - " << setw(29) << "patalykrisztina@gmail.com" << endl
        << setw(11) << "Balázs" << " - " << setw(9) << "Lőrincz" << " - " << setw(16)  << "+3466 696 5563" << " - " << setw(29) << "balaczlorincz@gmail.com" << endl
        << setw(11) << "Gábor" << " - " << setw(9) << "Maródi" << " - " << setw(16)  << "+4120 374 4462" << " - " << setw(29) << "gabormarodi@gmail.com" << endl
        << setw(10) << "Attila" << " - " << setw(8) << "Szabad" << " - " << setw(16) << "+4170 293 2248" << " - " << setw(29) << "attilaszabad@gmail.com" << endl
        << setw(10) << "Andrew" << " - " << "Garfield" << " - " << setw(16)  << "+3630 324 6128" << " - " << setw(29) << "andrewgarfield@gmail.com" << endl;
}
int main()
{
year();
age();
input();
output();
friends();
return 0;
}
