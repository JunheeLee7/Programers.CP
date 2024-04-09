◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120818

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int price) 
{
    int answer = price;
    if(price >= 500000)
    {
        answer -= price * 0.2f;
    }
    else if(price >= 300000)
    {
        answer -= price * 0.1f;
    }
    else if(price >= 100000)
    {
        answer -= price * 0.05f;
    }
    
    return answer;
}

