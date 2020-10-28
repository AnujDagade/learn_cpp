#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result = n  % 10;
    cout<<result;
    n = n - result;
    cout<<n<<endl;
    n = n/10;
    cout<<n;
    return 0;
}