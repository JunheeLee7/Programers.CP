◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120871

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 1;
    
    for(int i = 1; i < n+1; i++)
    {
        while(answer % 3 == 0 || answer % 10 == 3 || (answer / 10) % 10 == 3)
        {
            answer++;
        }
        answer++;
    }
    answer--;
    return answer;
}

