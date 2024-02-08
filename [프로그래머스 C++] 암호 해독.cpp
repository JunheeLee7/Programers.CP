◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120892

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

string solution(string cipher, int code) 
{
    string answer = "";
    for(int i = 0; i < cipher.size(); i++)
    {
        if((i + 1) % code == 0)
        {
            answer.push_back(cipher[i]);
        }
    }
    return answer;
}

