◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181903

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(int q, int r, string code) 
{
    string answer = "";
    int s = 0;
    for(int i = 0; i < code.size(); i++)
    {
        s = i % q;
        if(s == r)
        {
            answer += code[i];
        }
    }
    return answer;
}
