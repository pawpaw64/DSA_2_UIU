#include<bits/stdc++.h>
using namespace std;
// normal sort using Std sort
int main() {
    vector<int> v{39,48,10,45,29,11,34};
    sort(v.begin(),v.end());
    for(auto x:v){
      cout << x << endl;
      
    }
    //sorting in ascending order

    //if want to sort in descending order 

    sort(v.begin(),v.end(),greater<int>());
    cout << "descending order" << endl;
    
    for(auto x:v){
      cout << x << endl;
      
    }
    return 0;
}