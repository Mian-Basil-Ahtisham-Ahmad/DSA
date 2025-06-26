#include<iostream>
using namespace std; 
bool checkEligibility(int age,int limit){
if(age>=limit){
    return true;
}
else{
    return false;
}
}

int main(){
    bool checkEligible;
    int voting_limit=18;
    int is_eligible_for_voting = checkEligibility(21,voting_limit);
    if(is_eligible_for_voting){
        cout<<"yes the current person is eligibile to vote";
    }
    else{
        cout<<"No the current person is eligibile to vote";
    }
return 0;
}