#include <bits/stdc++.h>
using namespace std;

int add(int x,int y){
    return x + y;
}

int subtract(int x, int y){
    return x-y;
}

int main(){
    int x,y;
    cin >> x >> y;
    cout << add(x,y) << " " << subtract(x,y) << endl;
    return 0;
}