#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cout << "Enter initial geese count : " ;
    cin >> t;
    vector<int> a;
    int num=t;
    for(int i=0;i<3;i++){
        int egg=num*13;
        if(egg%2==0){
            egg=egg/2;
        }
        else{
            egg=((egg)/2)+1;
        }
        num=num+egg;
        a.push_back(num);
    }
    for(int i=0;i<3;i++){
        cout << "Geese count after year" << i+1 << ": " << a[i] << endl;
    }
  return 0;
}
