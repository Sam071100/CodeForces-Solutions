#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    int q;
    cin>>q;
    stack<pair<int,string> > bookInfo;
    stack<int> minStack;
    while(q--){
        int n;
        cin>>n;
        if(n != -1) {
            string bookName;
            cin>>bookName;
            if(n == 0) {
                continue;
            }
            bookInfo.push({n,bookName});
            if(minStack.empty() or n<=minStack.top()){
                minStack.push(n);
            }
        } else{
            int minBookRemoval = 0;
            int minValue = minStack.top();
            while(bookInfo.top().first != minValue){
                minBookRemoval++;
                bookInfo.pop();
            }
            cout<<minBookRemoval<<" "<<bookInfo.top().second<<endl;
            bookInfo.pop();
            minStack.pop();
        }
    }

	
	return 0;
}
