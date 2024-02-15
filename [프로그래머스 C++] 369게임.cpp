◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120891

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(int order) 
{
    int answer = 0;
    string ord = to_string(order);
    for(int i = 0; i < ord.size(); i++)
    {
        if(ord[i] == '3' || ord[i] == '6' || ord[i] == '9')
        {
            answer += 1;
        }
    }
    return answer;
}
