#include<bits/stdc++.h>
using namespace std;

int print_counting(int num,int a) {
    cout<<a<<endl;
    a++;
    if(a>num){
        return 0;
    }
    else{
        print_counting(num,a);
    }

}

int main() {
    int num;
    int a=1;
    cout<<"Enter number"<<endl;
    cin>>num;
    cout<<"Counting is:"<<endl;
    print_counting(num,a);
}