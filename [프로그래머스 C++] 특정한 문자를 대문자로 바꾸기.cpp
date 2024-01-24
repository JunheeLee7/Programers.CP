◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181873

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string alp) 
{
    string answer = my_string;
    for(int i = 0; i < answer.size(); i++)
    {
        for(int j = 0; j < alp.size(); j++)
        {
            if(answer[i] == alp[j])
            {
                answer[i] = toupper(alp[j]);
            }
        }
    }
    return answer;
}


