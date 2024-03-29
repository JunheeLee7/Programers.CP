◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181829

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board, int k) 
{
    int answer = 0;
    for(int i = 0; i < board.size(); i++)
    {
        for(int j = 0; j < board[i].size(); j++)
        {
            if(i + j <= k)
            {
                answer += board[i][j];
            }
        }
    }
    return answer;
}

