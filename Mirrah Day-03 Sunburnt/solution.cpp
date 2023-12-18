#include<iostream>
#include<vector>
#include<sstream>
using namespace std;

int main(){
    int N,n,count,maximum;
    cin>>N;
    cin.ignore();
    vector<int> H;
    string input;
    getline(cin,input);
    istringstream iss(input);
    while (iss>>n){
        H.push_back(n);
    }
    if (H.empty()) count=0;

    else{
        count=1;
        maximum=H[0];
        for (int i=1;i<H.size();i++){
            if (H[i]>=maximum){
                maximum=H[i];
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}