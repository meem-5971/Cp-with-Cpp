#include<bits/stdc++.h>
#define ll long long
using namespace std;
  
void solve(){
        
}
  
int main(){
 ios_base::sync_with_stdio(false);
 cin.tie(nullptr);
   int n,i,j,k;
   cin>>n;
   for(i=0;i<=n;i++)
        {
            for(j=i;j<n;j++)
                cout<<"  ";
            for(k=0;k<=i;k++){
                    cout << k;
                    if(i!=0)
                        cout << " ";
                 }
             for(k=i-1;k>=0;k--){
                cout<<k;
                 if(k>0)
                    cout<<" ";
            }
            cout<<"\n";
         }
      for(i=n-1;i>=0;i--)
      {
        for(j=n-1;j>=i;j--)
          cout<<"  ";
        for(k=0;k<=i;k++){
                cout << k;
                if(i!=0)
                    cout << " ";
             }
         for(k=i-1;k>=0;k--){
            cout<<k;
             if(k>0)
                cout<<" ";
        }
        cout<<"\n";
      }
    return 0;
}