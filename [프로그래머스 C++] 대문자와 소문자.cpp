◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120893

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] < 'a')
        {
            answer.push_back(tolower(my_string[i]));
        }
        else
        {
            answer.push_back(toupper(my_string[i]));
        }
    }
    return answer;
}

