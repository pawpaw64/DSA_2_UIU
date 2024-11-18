#include<bits/stdc++.h>
using namespace std;
struct Test{
    int a;
    int b;
};
bool compare(Test t1, Test t2){
    return t1.a<t2.a;
}
int main() {
    vector<Test> v={{2,6},{32,0},{12,10},{4,8},{88,29}};
    sort(v.begin(),v.end(),compare);
    for(auto x:v){
      cout << x.a<< endl;
      
    }

    //ascending order based on 'a'
    return 0;
}