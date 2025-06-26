#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool checkPrefixSuffixSum(vector<int> &v) {
int total_sum=0;
for(int i=0;i<v.size();i++){
total_sum+=v[i];
}

int prefix_sum=0;
for(int i=0;i<v.size();i++){
total_sum+=v[i];
int suffix_sum=total_sum-prefix_sum;
if(suffix_sum==prefix_sum){
    return true;
}

}


return false;

    }

int main(){
    int n;
    cin>>n;
    vector<int> v(n+1,0);
    for(int i=0;i<n;i++){
        cin>>v[i];
     
         }

    for(int i=0;i<n;i++){
        v[i]+=v[i-1];
      
    }
int q;
cin>>q;
while(q--){
    int l,r;
    cin>>l>>r;
    int ans=0;
ans=v[r]-v[l-1];
cout<<ans;

}



return 0;
}