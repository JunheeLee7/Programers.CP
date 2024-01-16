◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181905

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int s, int e) 
{
    string answer = "";
    string down = "";
    int a = 0;
    for(int i = 0; i < my_string.size(); i++)
    {
        if(i >= s && i <= e)
        {
            answer.push_back(my_string[e - a]);
            a++;
        }
        else
        {
            answer += my_string[i];
        }
    }
    return answer;
}


