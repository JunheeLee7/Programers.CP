◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120835

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> emergency) 
{
    vector<int> answer;
    vector<int> ace = emergency;
    sort(ace.rbegin(), ace.rend());
    
    for(int i = 0; i < ace.size(); i++)
    {
        for(int j = 0; j < emergency.size(); j++)
        {
            if(ace[j] == emergency[i])
            {
                answer.push_back(j + 1);
            }
        }
    }
    
    return answer;
}

