◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120848

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 1;
    int t = 1;
    while(t <= n)
    {
        answer++;
        t *= answer;
    }
    answer--;
    return answer;
}
