// Problem Code: HS08TEST

// Sample Test Case

// Input:
// 30 120.00
// Output:
// 89.50

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    
    unsigned int withdraw;
    double balance;
    cin>>withdraw>>balance;
    
    cout << fixed << showpoint;
    cout << setprecision(2);
    
    if(withdraw>balance){
        cout<<balance;
    }
    
    if(withdraw<balance){
        
        if((withdraw%5==0)&&(withdraw+0.5<=balance)){
            balance = balance - withdraw - 0.50;
            cout<<balance;
        }else{
            cout<<balance;
        }
        
        
    }
	
	return 0;
}
