#include<iostream>
#include<vector>
using namespace std; 
int peakInMountainArray(vector<int> &input){
 int lo=1, hi=input.size()-1;  
 int ans=-1;
 while(lo<=hi){
    int mid=lo+(hi-lo)/2;
if(input[mid]>input[mid-1]){
    ans=mid;
    lo=mid+1;
} else{
    hi=mid-1;
}

 }
 return ans;

}
int main(){
    vector<int> input={0,4,1,0};
    cout<<peakInMountainArray(input)<<endl;
return 0;
}