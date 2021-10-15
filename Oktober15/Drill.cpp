#include "std_lib_facilities.h" 
int main() 
try { 
//cout <<"1. ";	cout << "Success!\n";							//Cout << "Success!\n";
//cout <<"2. ";	cout << "Success!\n";							//cout << "Success!\n;
//cout <<"3. ";	cout << "Success" << "!\n";						//cout << "Success" <<!\n"
//cout <<"4. ";	cout << "Success!\n";							//cout << success << endl;
//cout <<"5. ";	int res=7; vector<int>v(10); v[5]=res; cout << "Success!\n";		//string res=7; vector<int>v(10); v[5]=res; cout << "Success!\n";
//cout <<"6. ";	vector<int>v(10); v[5]=7; if(v[5]==7) cout << "Success!\n";		//vector<int>v(10); v(5)=7; if(v(5)!=7) cout << "Success!\n";
//cout <<"7. ";	bool cond=true; if (cond)cout <<"Success!\n";else cout << "Fail!\n";	//if (cond) cout <<"Success!\n"; else cout << "Fail!\n";
//cout <<"8. ";	bool c =true; if (c) cout << "Success!\n"; else cout << "Fail!\n";	//bool c =false; if (c) cout << "Success!\n"; else cout << "Fail!\n";
//cout <<"9. ";	string s ="ape"; bool c=true; if(c) cout << "Success!\n";		//string s ="ape"; boo c="fool"<s; if(c) cout << "Success!\n;
//cout <<"10. ";	string s ="ape"; if(s=="ape")cout <<"Success!\n";			//string s ="ape" ;if(s=="fool")cout <<"Success!\n";
//cout <<"11. ";	string s ="fool"; if(s=="fool")cout <<"Success!\n";			//string s ="ape"; if(s=="fool")cout <"Success!\n";
//cout <<"12. ";	string s ="ape"; if(s+"fool"=="apefool")cout <<"Success!\n";		//string s ="ape"; if(s+"fool")cout <"Success!\n";
//cout <<"13. ";	vector<char>v(5); for(int i=0;i<v.size();++i);cout <<"Success!\n";	//vector<char>v(5); for(int i=0;0<v.size();++i);cout <<"Success!\n";
//cout <<"14. ";	vector<char>v(5); for(int i=0;i<=v.size();++i);cout <<"Success!\n";	//vector<char>v(5); for(int i=O;i<=v.size();++i);cout <<"Success!\n";
//cout <<"15. ";	string s="Success!\n"; for(int i=0;i<10;++i) cout << s[i];		//string s="Success!\n"; for(int i=0;i<6;++ií) cout << s[i];
//cout <<"16. ";	if (true) cout <<"Success!\n"; else cout <<"Fail!\n";		//if (true) then cout <<"Success!\n"; else cout <<"Fail!\n";
//cout <<"17. ";	int x=2000; int c=x;if (c==2000) cout << "Success!\n";		//int x=2000; char c=x;if (c==2000) cout << "Success!\n";
//cout <<"18. ";	string s= "Success!\n"; for (int i=0;i<10;++i) cout<<s[i];		//string s= "Success!\n"; for (int i=0;i<10;++i) cout<<s[i];
//cout <<"19. ";	vector<int> v(5); for (int i=0;i<=v.size();++i); cout << "Success!\n";//vector v(5); for (int i=0;i<=v.size();++i); cout << "Success!\n";
//cout <<"20. ";	int i=0; int j=9; while(i<10)++i; if(j<i) cout << "Success!\n";	//int i=0; int j=9; while(i<10)++j; if(j<i) cout << "Success!\n";
//cout <<"21. ";	double x=4; double d=5/(x-2); if(d==2+0.5) cout << "Success!\n";//int x=2; double d=5/(x-2); if(d==2*x+0.5) cout << "Success!\n";
//cout <<"22. ";	string s="Success!\n"; for(int i=0;i<=9;++i)cout << s[i];		//string<char>s="Success!\n"; for(int i=0;i<=10;++i) cout << "Success!\n";
//cout <<"23. ";	int i=0, j=6; while(i<10) ++i; if (j<i) cout << "Success!\n";	//int i=0; while(i<10) ++j; if (j<i) cout << "Success!\n";
//cout <<"24. ";	double x=4; double d=5/(x-2); if(d==2+0.5) cout <<"Success!\n";	//int x=4; double d=5/(x-2)>; if(d=2*x+0.5) cout <<"Success!\n";
//cout <<"25. ";	cout<<"Success!\n";							//cin<<"Success!\n";
keep_window_open(); 
return 0;
} 
catch(exception& e) 
{ 
cerr << "error:  " << e.what() << '\n'; 
keep_window_open(); 
return 1 ;   
} 
catch ( ... ) { 
cerr <<  "Oops:  unknown exception !\n"; 
keep_window_open(); 
return 2;
}
