◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120887

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int i, int j, int k) 
{
    int answer = 0;
    for(int a = i; a < j + 1; a++)
    {
        for(int b = a; b > 0; b /= 10)
        {
            if(b % 10 == k)
            {
                answer ++;
            }
        }
    }
    return answer;
}
