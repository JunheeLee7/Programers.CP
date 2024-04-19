◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/86491

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) 
{
    int answer = 0;
    int a = 0;
    int b = 0;
    for(int i = 0; i < sizes.size(); i++)
    {
        if(sizes[i][0] >= sizes[i][1])
        {
            if(a == 0)
            {
                a = sizes[i][0];
            }
            else
            {
                if(sizes[i][0] >= a)
                {
                    a = sizes[i][0];
                }
            }
            
            if(b == 0)
            {
                b = sizes[i][1];
            }
            else
            {
                if(sizes[i][1] >= b)
                {
                    b = sizes[i][1];
                }
            }
        }
        else
        {
            if(a == 0)
            {
                a = sizes[i][1];
            }
            else
            {
                if(sizes[i][1] >= a)
                {
                    a = sizes[i][1];
                }
            }
            
            if(b == 0)
            {
                b = sizes[i][0];
            }
            else
            {
                if(sizes[i][0] >= b)
                {
                    b = sizes[i][0];
                }
            }
        }
    }
    
    return answer = a * b;
}

