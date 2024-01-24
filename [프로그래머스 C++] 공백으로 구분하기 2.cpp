◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181868

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_string) 
{
    vector<string> answer;
    string ans = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != ' ')
        {
            ans +=my_string[i];
        }
        else if(ans != "")
        {
            answer.push_back(ans);
            ans = "";
        }
    }
    if(ans != "")
    {
        answer.push_back(ans);
    }
    return answer;
}


