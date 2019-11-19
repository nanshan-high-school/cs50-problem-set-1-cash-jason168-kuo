#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int money;//輸入金額
    int count=0; //硬幣or紙鈔個數
     cout << "請輸入金額:";
    cin >> money;
    
    for ( int i = 3; i>=0 ; i--) {
        int po = pow(10,i) ;
        int num = money / po  ;
        money = money - (po * num) ;
        count += num;
        cout << "po:" << po << " ,num:" << num << " ,money:" << money<< " ,count:" << count << endl;
    }
    cout << count;

}
