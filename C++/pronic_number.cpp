//Pronic number is a number which is the product of two consecutive integers, that is, a number n is a product of x and (x+1)
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k=sqrt(n);
    if(k*(k+1)==n)
     cout<<"Pronic Number"<<endl;
    else
      cout<<"Not a Pronic Number"<<endl;
    return 0;
}
