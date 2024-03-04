◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120866

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> board) 
{
    int answer = 0;
    int a = board.size();
    int dx[8]={1, 1, 1, 0, 0, -1, -1, -1};
    int dy[8]={1, 0, -1, 1, -1, 1, 0, -1};
    
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(board[i][j] == 1)
            {
                for(int k = 0; k < 8; k++)
                {
                    int b = i + dx[k];
                    int c = j + dy[k];
                    if((b >= 0 && b < a) && (c >= 0 && c < a))
                    {
                        if(board[b][c] != 1)
                        {
                            board[b][c] = 2;
                        }
                    }
                }
            }
        }
    }
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j < a; j++)
        {
            if(board[i][j] == 0)
            {
                answer++;
            }
        }
    }
    
    return answer;
}

