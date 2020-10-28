#include <iostream>
using namespace std;
int main()
{   int fibolimit,result;
    float No1,No2;
    char Operator;
    string mode;
    system("cls");
    cout<<"Enter Normal for basic operations, Advance for advance operations\n";
    cin>>mode;
    cout<<endl<<endl;

    if(mode=="Normal"){
        
    cout<<"Addition: + , Substraction: -"<<endl;
    cout<<"Enter No 1"<<endl;
    cin>>No1;
    cout<<"Enter No 2"<<endl;
    cin>>No2;
    cout<<"Enter Operator"<<endl;
    cin>>Operator;
    //Adding functionality
    switch(Operator)
    {
        case '+':
        cout<<No1+No2<<endl;
        break;
        case '-':
        cout<<No1-No2<<endl;
        break;
        default:
        cout<<"Wrong Operator or No";
        break;
    }
   
    }else if(mode=="Advance")
    {
        //cout<<"Under development";
        cout<<"Factorial(F) and Fibonacci series(S)\n";
        cin>>Operator;
        if(Operator == 'F'){
            No2 = 1;
            cout<<"Enter no to find factorial\n";
            cin>>No1;
            for(int i=1;i<=No1;i++){
                No2 *= i;
                
            }
            cout<<"Factorial: ";
                cout<<No2;
        }else if(Operator=='S'){
            cout<<"Enter the size of series\n";
            cin>>fibolimit;
            No1 = 0;
            No2 = 1;
            cout<<"Fibonacci series: ";
            for(int i = 0; i<fibolimit;i++)
            {   
                result = No1 + No2;
                No1 = No2;
                No2 = result;
                
                cout<<result;
            }
        }
    }else{
        cout<<"Invalid mode please restart programm with valid mode";
    }
    return 0;
}