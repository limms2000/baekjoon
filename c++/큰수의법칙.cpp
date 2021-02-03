#include <iostream>
#include <string>
#include <stack>
using namespace std;
bool desc(int a, int b){
    return a > b; 
}

int main() {
    int N,M,K,sum=0,count=0;
    cin>>N;
    cin>>M;
    cin>>K;
    int *num = new int[N];

    for(int i=0;i<N;i++)
    {
        cin>>num[i];
    }
    
    sort(num,num+N,desc);
    
    for(int i=0;i<M;i++){
        if(count==K-1){
            sum+=num[1];
            count=0;
        }else{
            sum+=num[0];
            count+=1;
        }
    }

    cout<<sum;
    return 0;
}