// #include<iostream>
// using namespace std; 

// int main(){
//     int apples=5;
//     cout<<apples<<endl;
//     cout<<"size of apples is "<<sizeof(apples)<<endl;
//     char sign='&';
//     cout<<sign<<endl;
//         cout<<"size of sign is "<<sizeof(sign)<<endl;

// bool flag=true;
// cout<<flag<<endl;
//     cout<<"size of bool is "<<sizeof(flag)<<endl;

// float score=3.14f;
// cout<<score<<endl;
//     cout<<"size of float is "<<sizeof(score)<<endl;

// int num1,num2;
// cout<<"Enter the first num;"<<endl;
// cin>>num1;
// cout<<"Enter the second num;"<<endl;
// cin>>num2;
// int sum;
// sum=num1+num2;
// cout<<"The sum is "<<sum<<endl;


// int temp;
// temp=num1;
// num1=num2;
// num2=temp;
// cout<<"The values after swapping is "<<endl;
// cout<<"the value of first number is "<<num1<<endl;
// cout<<"the value of second number is "<<num2<<endl;

// int score;
// cout<<"Enter your score";
// cin>>score;
// if(score>80){
//     cout<<"Well done"<<endl;
// }
// else if(score>50 &&score<80){
//     cout<<"Can improve"<<endl;
// }
// else {
//     cout<<"poor performance"<<endl;
// }


// return 0;
// }

#include<iostream>
using namespace std; 

int main(){
    int sp,cp;
    cout<<"Enter the selling price"<<endl;
    cin>>sp;
    cout<<"Enter the cost price"<<endl;
    cin>>cp;
    if(sp>cp){
int profit =sp-cp;
        cout<<"your profit is "<<profit<<endl;
    }
    else if(cp>sp){
int loss =cp-sp;
        cout<<"your loss is "<<loss<<endl;
    }

    else{
        cout<<"No profit or loss "<<endl;
    }
   
    
return 0;
}