◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120830

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n, int k) 
{
    int answer = 0;
    int el = 0;
    answer += (n * 12000) + (k * 2000);
    if(n > 9)
    {
        el = n / 10;
    }
    
    return answer -= (el * 2000);
}
