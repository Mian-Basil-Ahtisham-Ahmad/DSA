#include<iostream>
#include<iostream>
using namespace std; 
int sqrt(int x){
    int lo=1;
    int hi=x;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(mid*mid<=x){
            ans=mid;
            lo=mid+1;
        }else{
          hi=mid-1;  
        }
    }
    return ans;
}
int main(){
    cout<<sqrt(100);
return 0;
}