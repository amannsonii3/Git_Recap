#include <bits/stdc++.h>
using namespace std;

class Calculator{
    public:
    static int add(int x,int y){
        return x + y;
    }
    
    static int subtract(int x, int y){
        return x-y;
    }
};

int main(){
    int x,y;
    cin >> x >> y;
    cout << Calculator::add(x,y) << " " << Calculator::subtract(x,y) << endl;
    return 0;
}