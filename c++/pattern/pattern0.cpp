#include <iostream>
using namespace std;
int main()
{
    // Variable declaration
    int rows;
    int columns;
    // Variable intialization
    rows = 5;
    columns = 4;
    for(int i = 1;i<=rows;++i)
    {
        for(int j = 1;j<=columns; ++j)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}