#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout<<"Enter String : ";
    cin>> s; 

    // pre compute
    int hash[256]={0};
     for(int i=0; i<s.size(); i++) {
        hash[s[i]]++;
     }
    
    int q;
    cout<<"Enter Queery Size : ";
    cin>>q;
    while(q--) {
        char c;
        cout<<"Enter Character : ";
        cin>> c;
        // fetch
        cout<<"Character Repeated : "<< hash[c] << " times."<< endl;
    }
    return 0;
}