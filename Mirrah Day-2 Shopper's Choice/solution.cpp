
#include<sstream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    vector<int>prod_id,solution;
    string input;
    int n;
    getline(cin,input);
    istringstream iss(input);
    while(iss>>n)
    prod_id.push_back(n);
    vector<bool> visited(prod_id.size(),false);
    for(int i=0;i<prod_id.size();i++)
    {
        if (visited[i]==true) continue;
        int count=1;
        for(int j=i+1;j<prod_id.size();j++){
            if(prod_id[i]==prod_id[j]) 
            {
                count++;
                visited[j]=true;

            }
        }
        solution.push_back(count);
    }
    for(int i=0;i<solution.size();i++)cout<<solution[i]<<' ';
}








/*
#include<sstream>
#include<bits/stdc++.h>
#include<vector>
#include <unordered_set>
using namespace std;

int main(){
    vector<int> prod_id,solution;
    map<int,int> visit;
    int n,count=1;
    string input;
    getline(cin,input);
    istringstream iss(input);
    while (iss>>n){
        prod_id.push_back(n);
    }
    for(int i=0; prod_id[i]; i++){
        if(visit.find(prod_id[i])==visit.end()) visit[prod_id[i]]=1;
        else visit[prod_id[i]]++;
    }
    for(auto& value: visit) cout<<value.first<<value.second<<' ';
}





















#include<sstream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> prod_id,solution;
    int n,i=0,count=1;
    string input;
    getline(cin,input);
    istringstream iss(input);
    while (iss>>n){
        prod_id.push_back(n);
    }
    int no=sizeof(prod_id)/sizeof(prod_id[0]);
    sort(prod_id.begin(), prod_id.end()); // for decreasing order:  sort(prod_id.begin(), prod_id.end(), greater<int>());
    for(int i=0; i< 10;i++){
        if(prod_id[i]==prod_id[i+1]) count++;
        else{
            solution.push_back(count);
            count=1;
        }
    }
    for(auto i=solution.begin();i<solution.end();i++ )
    cout<<*i<<" ";
    return 0;
}
*/