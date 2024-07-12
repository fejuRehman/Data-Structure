#include<bits/stdc++.h>
using namespace std ;
 int joint_sticks(vector<int>& stones, int k,int ans,int sum){
      priority_queue<int,vector<int>,greater<int>>pq;
    for(auto i:stones) pq.push(i);
    while(pq.size()>1){
    for(int i=0;i<k;i++){
        if(pq.size()!=0){
        sum+=pq.top();
        pq.pop();}
    }
    pq.push(sum);
    ans+=sum;
    sum=0;
    }
    return ans;
 }
int main(){
vector<int>stones;
stones.push_back(9);
stones.push_back(2);
stones.push_back(4);
stones.push_back(5);
stones.push_back(8);
stones.push_back(3);
cout<<joint_sticks(stones,2,0,0);
return 0;
}