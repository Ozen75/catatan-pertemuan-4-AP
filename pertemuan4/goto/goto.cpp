#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // contoh 1
    // goto a;

    // b :
    // cout<<"Ilmu ";
    // goto c;

    // a :
    // cout<<"Laboratorium ";
    // goto b;

    // c :
    // cout<<"Komputer ";

    // contoh 2
    int a{1};

    lagi : 
    cout<< a << endl;
    a++;
    if (a <= 10)
    {
        goto lagi;
    }

    return 0;
}
