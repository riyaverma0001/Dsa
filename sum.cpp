// #include<bits/stdc++.h>
// using namespace std;

// int print_sum(int num, int sum, int a) {
//     sum=sum+a;
//     a++;
//     if(a>num) {
//         cout<<"Sum is:"<<endl;
//         cout<<sum;
//         return 0;
//     }
//     else{
//         print_sum(num, sum, a);
//     }
// }
// int main() {
//     int num;
//     cout<<"Enter number:"<<endl;
//     cin>>num;
//     int sum=0;
//     int a=1;
//     print_sum(num, sum, a);
// }


#include<bits\stdc++.h>
using namespace std;
int temp = 0;
int print(){
    if(temp==21) return 0;
    cout<<temp<<endl;
    temp++;
    print();
}

int main(){
    int n;
    // int temp=0;
    cout<<" Enter N ";
    cin>>n;

print();

}