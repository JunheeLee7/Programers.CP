◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120860

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> dots) 
{
    int answer = 0;
    int x = 0;
    int y = 0;
    
    for(int i = 0; i < dots.size() - 1; i++)
    {
        for(int j = i + 1; j < dots.size(); j++)
        {
            if(dots[i][0] != dots[j][0])
            {
                if(dots[i][1] == dots[j][1])
                {
                    x = abs(dots[j][0] - dots[i][0]);
                }
            }
            else
            {
                if(dots[i][1] != dots[j][1])
                {
                    y = abs(dots[j][1] - dots[i][1]);
                }
            }
        }
    }
    
    return answer = x * y;
}

