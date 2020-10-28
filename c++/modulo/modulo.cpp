#include <iostream>
using namespace std;
int main()
{
    int a,b;
    do{
        
        cin>>a;
        int lastdigit = a%10;
        cout<<lastdigit;
        int tempno = a - lastdigit;
        cout<<"tempno: "<<tempno;


    }while(true);
    return 0;
}