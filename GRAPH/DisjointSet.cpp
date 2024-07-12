#include <bits/stdc++.h>
using namespace std;

class DisjointSet{

	vector<int>parent,rank;

public:
	DisjointSet(int n){
		parent.resize(n+1);
		rank.resize(n+1,0);

		for(int i=0;i<=n;i++){
			parent[i]=i;
		}
	}

	int fintUltParent(int node){

		if(node==parent[node]){
			return node;
		}
        
        return parent[node]=fintUltParent(parent[node]);

	}

	void unionByrRank(int u,int v){

		int ulp_u=fintUltParent(u);
		int ulp_v=fintUltParent(v);

		if(rank[ulp_u]<rank[ulp_v]){
			parent[ulp_u]=ulp_v;
		}

		else if(rank[ulp_v]<rank[ulp_u]){
			parent[ulp_v]=ulp_u;
		}

		else{
			parent[ulp_v]=ulp_u;

			rank[ulp_u]++;
		}
	}
};

int main(){
  

  DisjointSet ds(7);

  ds.unionByrRank(1,2);
  ds.unionByrRank(2,3);
  ds.unionByrRank(4,5);
  ds.unionByrRank(6,7);
  ds.unionByrRank(5,6);
  
  if(ds.fintUltParent(3)==ds.fintUltParent(7)){
  	cout<<"Same";
  }

  else cout<<"Not same";

  
  ds.unionByrRank(3,7);

  cout<<endl;
  if(ds.fintUltParent(3)==ds.fintUltParent(7)){
  	cout<<"Same";
  }

  else cout<<"Not same";

	return 0;
}