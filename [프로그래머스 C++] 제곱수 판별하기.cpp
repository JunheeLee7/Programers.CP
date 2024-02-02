◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120909

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int n) 
{
    int answer = 0;
    int a = 0;
    int b = 0;
    while(a < n)
    {
        a = b * b;
        b++;
    }
    
    if(a == n)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

