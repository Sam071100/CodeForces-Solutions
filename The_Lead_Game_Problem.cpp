#include <iostream>
using namespace std;

int main() {

    int n, i;
    cin>>n;

    int p1[n], p2[n], lead[n], winner[n];

    for(i=0;i<n;i++){
        cin>>p1[i]>>p2[i];
    }

    int sum1=0, sum2=0;

    for(i=0;i<n;i++){
        sum1+=p1[i];
        sum2+=p2[i];

        if(sum1>sum2){
            lead[i]=sum1-sum2;
            winner[i]=1;
        }
        else{
            lead[i]=sum2-sum1;
            winner[i]=2;
        }
    }

    int maxLead=0, winnerPlayer=0;

    for(i=0;i<n;i++){

        if(lead[i]>=maxLead){
            maxLead = lead[i];
            winnerPlayer = winner[i];
        }
    }

    cout<<winnerPlayer<<" "<<maxLead<<endl;

    return 0;
}
