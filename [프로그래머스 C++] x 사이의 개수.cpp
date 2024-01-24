◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181867

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(string myString) 
{
    vector<int> answer;
    int a = 0;
    for(int i = 0; i < myString.size(); i++)
    {
        if(myString[i] != 'x')
        {
            a++;
        }
        else if(myString[i] == 'x')
        {
            answer.push_back(a);
            a = 0;
        }
    }
    answer.push_back(a);
    return answer;
}


