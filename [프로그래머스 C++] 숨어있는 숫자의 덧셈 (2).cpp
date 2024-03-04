◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120864

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(string my_string) 
{
    int answer = 0;
    string ace;
    
    for(int i = 0; i < my_string.size(); i++)
    {
        if(my_string[i] - '0' <= 9)
        {
            ace += my_string[i];
        }
        else
        {
            if(ace != "")
            {
                int t = stoi(ace);
                answer += t;
                ace = "";
            }
        }
    }
    
    if(ace != "")
    {
        int t = stoi(ace);
        answer += t;
        ace = "";
    }
    return answer;
}
