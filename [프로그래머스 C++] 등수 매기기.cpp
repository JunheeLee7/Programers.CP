◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120882

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<vector<int>> score) 
{
    vector<int> answer;
    vector<double> ace;
    vector<double> beta;
    for(int i = 0; i < score.size(); i++)
    {
        double t = (score[i][0] + score[i][1]) / 2.0;
        ace.push_back(t);       // 내림차순 정렬
        beta.push_back(t);      // 일반 위치
    }
    
    sort(ace.begin(), ace.end(),greater<>());
    
    bool isB = false;
    for(int i = 0; i < ace.size(); i++)
    {
        for(int j = 0; j < beta.size(); j++)
        {
            if(beta[i] == ace[j] && !isB)
            {
                answer.push_back(j + 1);
                isB = true;
            }
        }
        isB = false;
    }
    return answer;
}

