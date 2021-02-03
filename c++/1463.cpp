#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
 
class makeOne{
private:
    int n;  //n
    int arr[1000001];   //array
public:
    void setNum(){
        cin >> n;
        memset(arr, 0, sizeof(int) * (n+1));    //1부터 n까지 이므로 n+1.
    }
    
    //bottom up
    //1을 뺴는 계산부터 시작해서 작은 계산을 통해 미리 arr[i]에 (최대)값을 메모이제이션을 합니다.
    //2로 나누어 떨어지는지 3으로 나누어 떨어지는 경우에 앞에 계산한 arr[i/2]와 arr[i/3]과  현재의 arr[i]와 비교를 하여
    //그 중 최소 값을 arr[i]에 다시 저장(메모이제이션)합니다.
    
    void solution(){
        arr[1] = 0; //1일때는 횟수 0
        
        for(int i=2; i<=n; i++){
            arr[i] = arr[i-1] + 1;  //규칙 3번 : 1을 뺀다
            if(i%2 == 0){
                arr[i] = min(arr[i], arr[i/2]+1);   //규칙 2번 : 2로 떨어지는 경우
            }
            if(i%3 == 0){
                arr[i] = min(arr[i], arr[i/3]+1);   //규칙 1번 : 3로 떨어지는 경우
            }
        }
    }
    
    void printMin(){
        cout << arr[n];
    }
};
 
int main(void){
    makeOne one;
    one.setNum();
    one.solution();
    one.printMin();
    return 0;
}