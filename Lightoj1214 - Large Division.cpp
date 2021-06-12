#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,caseno=1;
    cin>>t;
    while(t--)
    {
        string s;
        int b;
        cin>>s>>b;
        b=abs(b);
        int ans=0,mul=1;
        for(int i= s.length()-1;i>=0;i--){

          if(s[i] == '-') break;
            int num = s[i] - '0';
            ans = (ans + 1LL*num*mul)%b;
            mul = 10LL*mul%b;}
    cout<<"case"<<caseno++<<":";
    if(ans==0) cout<<"divisible\n";
        else cout<<"not divisible\n";




    }return 0;

}
