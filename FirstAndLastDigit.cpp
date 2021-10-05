#include <bits/stdc++.h>
using namespace std;


int main() {

  

    int total ;
    cin >> total;
    while(total--){
    int number,length=0;
    cin >> number;
    int flag=number;
    while(flag/=10){
          length++;
    }
    int last = number%10;
    int first = number/pow(10,length);
    cout << last+first <<'\n';
    }

    }