◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181847

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string n_str) 
{
    string answer = "";
    bool isB = false;
    for(int i = 0; i < n_str.size(); i++)
    {
        if(!isB && n_str[i] == '0')
        {
            
        }
        else
        {
            isB = true;
            answer.push_back(n_str[i]);
        }
    }
    return answer;
}

