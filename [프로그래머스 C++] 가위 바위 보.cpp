◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120839

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string rsp) 
{
    string answer = "";
    for(int i = 0; i < rsp.size(); i++)
    {
        if(rsp[i] - '0' == 2)
        {
            answer += "0";
        }
        else if(rsp[i] - '0' == 0)
        {
            answer += "5";
        }
        else
        {
            answer += "2";
        }
    }
    return answer;
}

