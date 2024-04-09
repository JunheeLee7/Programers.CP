◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120816

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int slice, int n) 
{
    int answer = 0;
    int k = slice;
    int t = 1;
    while(k < n)
    {
        k += slice;
        t++;
    }
    return answer = t;
}

