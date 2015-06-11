/*
    Solution for ACODE problem.
    http://www.spoj.com/problems/FCTRL/
    
*/

#include <iostream>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        
        int N, ftcrl = 0;
        cin>>N;
        while(N>0){
            N = N/5;
            ftcrl = ftcrl + N;
        }        
        cout<< ftcrl <<"\n";
    }
    return 0;
}
