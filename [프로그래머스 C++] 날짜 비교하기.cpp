◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181838

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> date1, vector<int> date2) 
{
    int answer = 0;
    for(int i = 0; i < date1.size(); i++)
    {
        int d1i = date1[i];
        int d2i = date2[i];
        if(d1i < d2i)
        {
            answer = 1;
            break;
        }
        else if(d1i > d2i)
        {
            break;
        }
    }
    return answer;
}

