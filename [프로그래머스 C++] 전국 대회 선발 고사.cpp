◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181851

◈ 작성 코드

#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> rank, vector<bool> attendance) 
{
    int answer = 0;
    vector<int> ace;
    for(int i = 0; i < rank.size(); i++)
    {
        if(attendance[i] == true)
        {
            ace.push_back(rank[i]);
        }
    }
    sort(ace.begin(), ace.end());
    
    int r1 = find(rank.begin(), rank.end(), ace[0]) - rank.begin();
    int r2 = find(rank.begin(), rank.end(), ace[1]) - rank.begin();
    int r3 = find(rank.begin(), rank.end(), ace[2]) - rank.begin();
    
    answer = 10000 * r1 + 100 * r2 + r3;
    
    return answer;
}
