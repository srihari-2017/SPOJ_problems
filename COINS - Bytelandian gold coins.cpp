// Problem : COINS - Bytelandian gold coins
// author : srihari vasupalli
// college : JNTU KAKINADA
// language : C++

#include<iostream>
#include<cstdio>
#include<map>
using namespace std;

typedef long long ll;
map<int,ll> lookup;

ll byg(ll n)
{
    //checking whether it is already calculated or not
	
    if(n != 0 && lookup[n] == 0)          //if not calculated enters the block   
    {                                     
        ll x = byg(n/2)+byg(n/3)+byg(n/4);
        if(n > x)
            lookup[n] = n;
        else
            lookup[n] = x;
    }
    return lookup[n];              
}

int main()
{
    lookup[0] = 0;   //inserting n = 0 and its answer
    int t = 10;  // max 10 test cases
    while(t--)
    {
        ll n;
        scanf("%lld",&n);   //first line of test case n
        cout<<byg(n)<<endl; // printing the answer
    }
    return 0;
}

//thank you
