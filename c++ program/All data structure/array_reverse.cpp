# include<bits/stdc++.h>
  using namespace std ;
 int main(){
int arr[5]={1,2,3,4,5};
for(int i=0;i<5/2;i++){
    swap(arr[5-i-1],arr[i]);
}
for(int i=0;i<5;i++){
  cout<<arr[i]<<" ";
}

return 0;
}