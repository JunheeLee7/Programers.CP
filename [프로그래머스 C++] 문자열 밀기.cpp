◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120921

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string A, string B) 
{
    int answer = 0;
    if(A == B)
    {
        return 0;
    }
    for(int i = 1; i < A.size(); i++)
    {
        char f = A[A.size() - 1];
        A = A.substr(0,A.size() - 1);
        A = f + A;
        
        if(A == B)
        {
            return i;
        }
    }
    return -1;
}
