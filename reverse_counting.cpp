#include<bits/stdc++.h>
using namespace std;

int print_reverse_counting(int num) {
    cout<<num<<endl;
    // num--;
    if(num==0){
        return 0;
    }
    else{
        print_reverse_counting(num-1);
    }
}

int main() {
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    cout<<"Reverse counting is:"<<endl;
    print_reverse_counting(num);
}