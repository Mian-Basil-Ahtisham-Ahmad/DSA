// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter the value of n: ";
//     cin >> n;
//     int sum = 0;
//     int i = 1; // Moved inside the while loop
//     while (i <= n) {
//         sum += i;
//         i++;
//     }
//     cout << "Sum of first " << n << " natural numbers: " << sum << endl;
//     return 0;
// }




 #include<iostream>
         using namespace std; 

         int main(){
             int n;
             cout<<"Enter any number any n";
             cin>>n;
             int sum=0;
             int i=1;
             while(i<=n){
                 sum=sum+i;
             i++;
             }
             cout<<sum<<endl;
         return 0;
         }

         #include<iostream>
         using namespace std; 

         int main(){
             int n;
             cout<<"Enter any number any n";
             cin>>n;
             int sum=0;
             int i=1;
             do{
                 sum=sum+i;
             i++;
             }
             while(i<=n);
             cout<<sum<<endl;
         return 0;
         }

        







        // #include<iostream>
        // using namespace std; 
        
        // int main(){
        //     int n;
        //     cout<<"Enter any number n ";
        //     cin>>n;
        //     int sum=0;
        //     for(int i=1; i<=n;i++){
        //     sum=sum+i;
           
        // }
        // cout<<"The sum of "<<n<<" number is "<<sum<<endl;
        // return 0;
        // }