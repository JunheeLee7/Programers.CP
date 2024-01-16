◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181908

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_suffix) 
{
    int answer = 1;
    string a = "";
    for(int i = 0; i < is_suffix.size(); i++)
    {
        if(my_string[my_string.size() - 1 - i] != is_suffix[is_suffix.size() - 1 - i])
        {
            answer = 0;
        }
    }
    return answer;
}
