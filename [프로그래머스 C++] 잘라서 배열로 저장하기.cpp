◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120913

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) 
{
    vector<string> answer;
    string a;
    for(int i = 0; i < my_str.size(); i++)
    {
        a += my_str[i];
        if(a.size() >= n)
        {
            answer.push_back(a);
            a = "";
        }
    }
    if(a.size() != n && a != "")
    {
        answer.push_back(a);
    }
    return answer;
}

