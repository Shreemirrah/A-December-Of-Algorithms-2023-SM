#include<iostream>
#include <vector>
#include<sstream>
using namespace std;
int main()
{
    vector<int> runs;
    string input;
    int n,num,sum=0,max=0;
    cin>>num;
    cin.ignore();
    getline(cin,input);
    istringstream iss(input);
    while (iss>>n){
        runs.push_back(n);
    }

    for (int i=0; i<runs.size(); i++){
        sum+=runs[i];
        if (runs[max]<runs[i]) max = i;
    }
    cout<<sum<<endl<<max;
    return 0;
}
