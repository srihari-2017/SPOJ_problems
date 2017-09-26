// Problem : WILLITST - Will it ever stop
// author : srihari vasupalli
// college : JNTU KAKINADA
// language : C++

#include<iostream>
using namespace std;

int main()
{
    long long n;
    cin>>n;  //In first line one number n<=10^14.
    int flag = 0;
    
    //checking whether the given number can be expressed in powers of 2
    while(n > 0)
    {
        if(n%2 == 0)
            n = n/2;
        else if(n == 1){
            flag = 0;
            break;
        }
        else{
            flag = 1;
            break;
        }
    }
    
    if(flag == 0)  // if condition becomes true when the give number is in the powers of 2
        cout<<"TAK";
    else
        cout<<"NIE";
    cout<<endl;
    return 0;
}
//thank you
