#include "std_lib_facilities.h"

void print_array10(ostream& os, int* a) {
    for (int i = 0; i<10; ++i)
        os << a[i] << endl;
}

void print_array(ostream& os, int* a, int n) {
    for (int i = 0; i<n; ++i)
        os << a[i] << endl;
}

// 10
void print_vector(ostream& os, vector<int> v) {
    for (int i = 0; i<v.size(); ++i)
        os << v[i] << endl;
}

int main()
try {
    int* fp1 = new int[10];
    
    for (int i = 0; i<10; ++i)
        cout << fp1[i] << endl;
        
    delete[] fp1;
    cout << "\n";
    int* fp2 = new int[10];
    for (int i = 0; i<10; ++i)
        fp2[i] = 100 + i;
    print_array10(cout,fp2);
    delete[] fp2;
    cout << "\n";
    int* fp3 = new int[11];
    for (int i = 0; i<11; ++i)
        fp3[i] = 100 + i;
    print_array10(cout,fp3);
    cout << fp3[10] << endl;
    delete[] fp3;
    cout << "\n";
    int* fp4 = new int[20];
    for (int i = 0; i<20; ++i)
        fp4[i] = 100 + i;
    print_array(cout,fp4,20);
    delete[] fp4;
    cout << "\n";
    vector<int> v;
    for (int i = 0; i<10; ++i)
        v.push_back(100+i);
    print_vector(cout,v);

    cout << "\n" ;
    vector<int> v2;
    for (int i = 0; i<11; ++i)
        v2.push_back(100+i);
    print_vector(cout,v2);

    cout << "\n";
    vector<int> v3;
    for (int i = 0; i<20; ++i)
        v3.push_back(100+i);
    print_vector(cout,v3);

//Second part
    int i1 = 7;
    int* p1 = &i1;
    cout << "\n";
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";

    int* p2 = new int[7];
    for (int i = 0; i<7; ++i)
        p2[i] = pow(2,i);

    cout << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "print_array(cout,p2,7): ";
    print_array(cout,p2,7);

    int* p3 = p2;
    p2 = p1;
    p2 = p3;

    cout <<"\n";
    cout << "p1: " << p1 << "\n";
    cout << "*p1: " << *p1 << "\n";
    cout << "p2: " << p2 << "\n";
    cout << "*p2: " << *p2 << "\n";
    delete[] p2;
    p3 = 0;
    
    p1 = new int[10];
    for (int i = 0; i<10; ++i)
        p1[i] = pow(2,i);
        
    p2 = new int[10];
    cout << "\n";
    for (int i = 0; i<10; ++i)
        p2[i] = p1[i];
    print_array(cout,p2,10);

    cout << "\n";
    vector<int> vec1;
    for (int i = 0; i<10; ++i)
        vec1.push_back(pow(2,i));
    vector<int> vec2;
    for (int i = 0; i<vec1.size(); ++i)
        vec2.push_back(vec1[i]);
    print_vector(cout,vec2);
}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
}
catch (...) {
    cerr << "exception\n";
}
