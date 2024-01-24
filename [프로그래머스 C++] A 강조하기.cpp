◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181874

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string myString) 
{
    string answer = "";
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'a' || myString[i] == 'A')
        {
            answer += "A";
        }
        else
        {
            answer += tolower(myString[i]);
        }
    }
    return answer;
}


