◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120846

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int t = 4;
    
    if(n >= t)
    {
        for(int i = t; i <= n; i++)
        {
            if(i % 2 == 0 && i / 2 > 1)
            {
                answer++;
            }
            else if(i % 3 == 0 && i / 3 > 1)
            {
                answer++;
            }
            else if(i % 5 == 0 && i / 5 > 1)
            {
                answer++;
            }
            else if(i % 7 == 0 && i / 7 > 1)
            {
                answer++;
            }
        }
    }
    return answer;
}
