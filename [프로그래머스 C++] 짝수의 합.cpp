◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120831

◈ 작성 코드


#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    for(int i = 1; i <=n; i++)
    {
        if(i % 2 == 0)
        {
            answer += i;
        }
    }
    return answer;
}

