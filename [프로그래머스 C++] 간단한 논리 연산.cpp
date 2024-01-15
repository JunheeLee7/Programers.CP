◈ 문제 설명 링크

코딩테스트 연습 - 간단한 논리 연산 | 프로그래머스 스쿨 (programmers.co.kr)

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

bool solution(bool x1, bool x2, bool x3, bool x4) 
{
    bool answer = true;
    bool x5 = false;
    bool x6 = false;
    
    if((x1 && x2) || x1 || x2)
    {
        x5 = true;
    }
    else if(!x1 && !x2)
    {
        x5 = false;
    }
    
    if((x3 && x4) || x3 || x4)
    {
        x6 = true;
    }
    else if(!x3 && !x4)
    {
        x6 == false;
    }
    
    if(x5 && x6)
    {
        answer = true;
    }
    else if((x5 != x6) || (!x5 && !x6))
    {
        answer = false;
    }
    return answer;
}


