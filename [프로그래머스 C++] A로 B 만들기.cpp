◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120886

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string before, string after) 
{
    int answer = 0;
    sort(before.begin(), before.end());
    sort(after.begin(), after.end());
    
    if(before == after)
    {
        answer = 1;
    }
    return answer;
}

