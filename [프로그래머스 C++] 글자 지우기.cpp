◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181900

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string my_string, vector<int> indices) 
{
    string answer = "";
    vector<bool> gazer(my_string.size(), false);
    for(int i : indices)
    {
        gazer[i] = true;
    }
    
    for(int i = 0; i < my_string.size(); ++i)
    {
        if(!gazer[i])
        {
            answer += my_string[i];
        }
    }
    return answer;
}

 


