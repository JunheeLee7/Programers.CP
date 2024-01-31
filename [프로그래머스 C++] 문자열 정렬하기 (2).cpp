◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120911

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string) 
{
    string answer = "";
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] >= 'a')
        {
            answer += my_string[i];
        }
        else
        {
            answer += my_string[i] + 32;
        }
    }
    sort(answer.begin(), answer.end());
    return answer;
}
