// Problem : CANDY3 - Candy III
// author : srihari vasupalli
// college : JNTU KAKINADA
// language : C++

#include<iostream>
#include<stdio.h>
using namespace std;

typedef long long ll;

int main()
{
    int t;
    scanf("%d",&t);  //The first line of the input file contains an integer T specifying the number of test cases. 
    while(t--)
    {
        ll n;
        scanf("%lld",&n); // The first line contains N : the number of children
        ll sum = 0,temp;
        for(int i=0;i<n;i++)  //Each of the next N lines contains the number of candies one child brought.
        {
            scanf("%lld",&temp);
            sum = (sum+temp)%n;
        }
        if(sum%n == 0)     //"YES" if the candies can be distributed equally, or "NO" otherwise.
            printf("YES");
        else
            printf("NO");
        printf("\n");
    }
    return 0;
}
//thank you
