◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181862

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(string myStr) 
{
    vector<string> answer;
    string ace = "";
    for(int i = 0; i < myStr.size(); i++)
    {
        if(myStr[i] != 'a' && myStr[i] != 'b' && myStr[i] != 'c')
        {
            ace.push_back(myStr[i]);
        }
        else
        {
            if(ace != "")
            {
                answer.push_back(ace);
                ace = "";
            }
        }
    }
    if(ace != "")
    {
        answer.push_back(ace);
    }
    if(ace == "")
    {
        answer.push_back("EMPTY");
    }
    return answer;
}
