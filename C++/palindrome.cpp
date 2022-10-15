//The program checks whether the given number is palindrome or not.
#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string k=s;
    reverse(k.begin(),k.end());
    //Checking Whether the reverse and the original number are same or not.
    if(s==k)
     cout<<"Palindrome string"<<endl;
    else
      cout<<"Not a Palindrome string"<<endl;
    return 0;
}
