◈ 문제 설명
두 정수 a, b가 주어질 때 다음과 같은 형태의 계산식을 출력하는 코드를 작성해 보세요.

a + b = c
  
◈ 제한 사항
1 ≤ a, b ≤ 100
  
◈ 입출력 예
입력 #1	4 5
출력 #1	4 + 5 = 9
  
◈ 작성 코드
  
#include <iostream>

using namespace std;

int main(void) {
    int a;
    int b;
    cin >> a >> b;
    cout << a << " + " << b << " = " << a+b << endl;
    return 0;
}


