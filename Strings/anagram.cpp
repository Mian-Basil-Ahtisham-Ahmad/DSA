#include<iostream>
#include<vector>
#include<cstring>
using namespace std; 
bool isAnagram(string s1, string s2){
     vector<int> freq(26,0);
     for(int i=0;i<s1.length();i++){
          return false;
     }
}


int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(isAnagram(s1,s2)){
        cout<<"Strings are anagrams"<<endl;
    }else{
                cout<<"Strings are not anagrams"<<endl;
    }
return 0;
} 
