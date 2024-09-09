#include <iostream>
#include <string>
 
using namespace std;
 
int main(){
    int n,i,j,check;
    string a,b,c;
    cin>>n;
    for(i=0;i<n;i++)
        {
            check=1;
            cin>>a>>b>>c;
            for(j=0;j<a.length();j++)
                {
                  if(a[j]!=c[j] && b[j]!=c[j])
                      {
                          check=0;
                          break;
                      }             
                }
            if(check==1)
                cout<<"YES"<<endl;
            if(check==0)
                cout<<"NO"<<endl;
        }
    return 0;
}