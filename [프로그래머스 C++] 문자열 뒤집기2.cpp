◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120822

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for(int i = my_string.size() - 1; i >= 0; i--)
    {
        answer.push_back(my_string[i]);
    }
    return answer;
}

