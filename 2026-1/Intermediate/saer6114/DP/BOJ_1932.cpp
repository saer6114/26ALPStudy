#include <iostream>
#include <algorithm>
using namespace std;
 
int main(){
    int n;
    cin >> n;
 
    int input[502][502] = {}; // 정수 삼각형 선언 및 입력받기
    for(int i = 1; i < n+1; i++){ // line: 1부터 시작
        for(int j = 1; j < i+1; j++){ // index: 1부터 시작
            cin >> input[i][j];
        }
    }
 
    int D[502][502] = {}; // DP 테이블 생성 및 초기값 할당
    D[1][1] = input[1][1]; // 가장 꼭대기 값
 
    for(int i = 2; i < n+1; i++){
        for(int j = 1; j < i+1; j++){
            D[i][j] = max(D[i-1][j-1], D[i-1][j]) + input[i][j];
        }
    }
 
    int res = D[n][1]; // 마지막 줄에서 가장 큰 값을 찾아 출력하기
    for(int i = 2; i < n+1; i++){
        res = max(res, D[n][i]);
    }
    cout << res;
 
    return 0;
}