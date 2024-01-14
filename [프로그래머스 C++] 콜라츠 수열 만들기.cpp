◈ 문제 설명 링크

코딩테스트 연습 - 콜라츠 수열 만들기 | 프로그래머스 스쿨 (programmers.co.kr)

◈ 작성 코드
  
#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    answer.push_back(n);
    while(n != 1)
    {
        if(n % 2 == 0)
        {
            n = n / 2;
        }
        else if(n % 2 != 0)
        {
            n = (3 * n) + 1;
        }
        answer.push_back(n);
    }
    return answer;
}
