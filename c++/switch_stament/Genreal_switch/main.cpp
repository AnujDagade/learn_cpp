#include <iostream>
using namespace std;
int main()
{
    char option;
   
    cin>>option;
    
    switch(option)
    {
        case 'A':
        cout<<"print working";
        break;
        case 'B':
        cout<<"working perfectly";
        break;
        default:
        cout<<"wrong option";
        break;
    }
 return 0;
}