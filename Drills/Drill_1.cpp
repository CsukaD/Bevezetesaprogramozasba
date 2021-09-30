#include "std_lib_facilities.h"
int main()
{
//cout << "Please enter your first name: " << endl;
cout << "Enter the name of the person you want to write to" << endl;
string first_name;
// cout << "Hello, " << first_name << endl;
cin >> first_name;
cout 	<< 	"\nDear " 		<< first_name <<",\n\n"<< endl ;
cout	<< 		"Thank you very much for your letter. It was lovely to hear from you. How are you?"	<< endl
<< 		"I am fine. We all missing you here. Tom and Susan had a party"<< endl 
<<		"last week and everyone was asking me how you were.It was a good party."<<endl 
<<		"I miss you."<<endl 	
<<		"Enter the name of the person you are looking for."<<endl;
string friend_name;
cin >> friend_name;
cout 	<< "Have you seen " 			<< 	friend_name 	<< " lately?" 	<< endl;
char friend_sex=0;
cout << "Is he/she a male or a female?(m/f)" 	<< endl;
cin >> friend_sex;
if (friend_sex == 'm')
{
cout << "If you see "	<< 	friend_name 	<< " please ask  him to call me."	<< endl;
}
else
{
if (friend_sex == 'f')
{
cout <<"If you  see "	<<	friend_name	<<  " please  ask  her  to call me."	<< endl;
} 
}
cout <<"How old is " << first_name << "?" << endl;
int age=0;
cin >> age;
if (0 < age && 110 > age)
{
cout <<"I hear you just had a birthday and you are "<< age << " age years old." << endl;
}
else
{
error("you're kidding!");
}
if ( 12 > age )
{
cout << "Next year you will be "<< age + 1 <<"."<< endl;
}
if ( 17 == age )
{
cout << "Next year you will be able to vote." << endl;
}
if ( 70 < age )
{
cout << "I hope you are enjoying retirement." << endl;
}
cout << "Yours sincerely,\n\n" << first_name << endl;   
return 0;
}
