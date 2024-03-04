◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120852

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(int n) 
{
    vector<int> answer;
    bool isC = false;
    int t = 2;
    
    while(n > 1)
    {
        if(n % t == 0)
        {
            n /= t;
            if(!isC)
            {
                answer.push_back(t);
                isC = true;
            }
        }
        else
        {
            t++;
            isC = false;
        }
    }
    
    return answer;
}

