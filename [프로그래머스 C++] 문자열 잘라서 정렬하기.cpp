◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181866

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string myString) 
{
    vector<string> answer;
    string ac = "";
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] != 'x')
        {
            ac += myString[i];
        }
        else if(myString[i] == 'x')
        {
            if(ac != "")
            {
                answer.push_back(ac);
                ac = "";
            }
        }
    }
    if(ac != "")
    {
        answer.push_back(ac);
    }
    sort(answer.begin(), answer.end());
    return answer;
}


