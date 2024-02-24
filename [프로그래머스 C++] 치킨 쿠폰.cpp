◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120884

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int chicken) 
{
    int answer = 0;
    int c = 0;
    while(chicken > 9)
    {
        
        c = chicken % 10;   // 1, 8
        chicken /= 10;
        answer += chicken;
        chicken += c;
    }
    
    
    return answer;
}
