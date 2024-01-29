◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181836

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> picture, int k) 
{
    vector<string> answer;
    string ace;
    for(int i = 0; i < picture.size(); i++)
    {
        ace = "";
        for(int j = 0; j < picture[i].size(); j++)
        {
            for(int l = 0; l < k; l++)
            {
                ace += picture[i][j];
            }
        }
        
        for(int e = 0; e < k; e++)
        {
            answer.push_back(ace);
        }
    }
    
    return answer;
}

