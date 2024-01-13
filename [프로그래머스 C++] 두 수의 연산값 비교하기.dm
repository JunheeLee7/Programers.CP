◈ 문제 설명
연산 ⊕는 두 정수에 대한 연산으로 두 정수를 붙여서 쓴 값을 반환합니다. 예를 들면 다음과 같습니다.

12 ⊕ 3 = 123
3 ⊕ 12 = 312
양의 정수 a와 b가 주어졌을 때, a ⊕ b와 2 * a * b 중 더 큰 값을 return하는 solution 함수를 완성해 주세요.

단, a ⊕ b와 2 * a * b가 같으면 a ⊕ b를 return 합니다.

◈ 제한 사항
1 ≤ a, b < 10,000
  
◈ 입출력 예
a	b	result
2	91	364
91	2	912
  
◈ 입출력 예 설명
입출력 예 #1

a ⊕ b = 291 이고, 2 * a * b = 364 입니다. 둘 중 더 큰 값은 364 이므로 364를 return 합니다.
입출력 예 #2

a ⊕ b = 912 이고, 2 * a * b = 364 입니다. 둘 중 더 큰 값은 912 이므로 912를 return 합니다.
  
◈ 작성 코드
  
#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) 
{
    int answer = 0;
    string ab = to_string(a) + to_string(b);
    int ans1 = stoi(ab);
    int ans2 = 2 * a * b;
    if(ans1 >= ans2)
    {
        answer = ans1;
    }
    else
    {
        answer = ans2;
    }
    return answer;
}


