#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n, k, s, y, x=0;
    cin>>n>>k;
    vector<int> v;
    for (int i=0; i<n; i=i++)
    {
          cin>>s;
          v.push_back(s);
    }
    y=v[k-1];
    for (int i=0; i<n; i=i++)
    {
          if(v[i]>=y && v[i]!=0)
          x++;
          else 
          break;
    }
    cout<<x<<endl;
    return 0;
}
