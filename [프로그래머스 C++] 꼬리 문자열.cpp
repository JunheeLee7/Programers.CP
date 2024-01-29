◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181841

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(vector<string> str_list, string ex) 
{
    string answer = "";
    for(int i = 0; i < str_list.size(); i++)
    {
        string check = str_list[i];
        if(check.find(ex) == string::npos)
        {
            answer += check;
        }
    }
    return answer;
}

