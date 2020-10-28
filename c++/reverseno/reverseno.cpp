#include <iostream>
using namespace std;
int main()
{
    int n,lastdigit;
    cin>>n;
    int i = 0;
    while(true)
    {
        lastdigit = n % 10;
        cout<<lastdigit;
        n  = n - lastdigit;
        n = n / 10;
        //cout<<n;

        if(n == 0){
            break;
        }      
    }
    cout<<"\nWe have succesfully reversed the number";
    return 0;
}