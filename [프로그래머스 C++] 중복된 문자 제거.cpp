◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120888

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
        bool isC = false;
        
        for(int j = 0; j < answer.size(); j++)
        {
            if(my_string[i] == answer[j])
            {
                isC = true;
            }
        }
        
        if(!isC)
        {
            answer.push_back(my_string[i]);
        }
    }
    return answer;
}

