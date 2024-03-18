◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120826

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, string letter) 
{
    string answer = "";
    char se = letter[0];
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] != se)
        {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}

