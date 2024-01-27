◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181864

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) 
{
    int answer = 0;
    string ace = "";
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] == 'A')
        {
            ace.push_back('B');
        }
        else if(myString[i] == 'B')
        {
            ace.push_back('A');
        }
    }
    if(ace.find(pat) != string::npos)
    {
        answer = 1;
    }
    return answer;
}


