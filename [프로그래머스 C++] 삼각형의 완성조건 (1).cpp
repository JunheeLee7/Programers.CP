◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120889

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) 
{
    int answer = 0;
    int ace = sides[0];
    int k = 0;
    int s;
    for(int i = 1; i < sides.size(); i++)
    {
        if(ace < sides[i])
        {
            ace = sides[i];
            k = i;
        }
    }
    if(k == 0)
    {
        s = sides[1] + sides[2];
    }
    else if(k == 1)
    {
        s = sides[0] + sides[2];
    }
    else if(k == 2)
    {
        s = sides[1] + sides[0];
    }
    
    if(s > sides[k])
    {
        answer = 1;
    }
    else
    {
        answer = 2;
    }
    
    return answer;
}
