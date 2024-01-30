◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181832

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(int n) 
{
    vector<vector<int>> answer(n, vector<int>(n,0));
    int num = 1;
    int sX = 0;
    int eX = n - 1;
    int sY = 0;
    int eY = n - 1;
    while (num <= n * n) 
    {
        for(int i = sY; i <= eY; i++)
        {
            answer[sX][i] = num++;
        }
        sX++;
        for(int j = sX; j <= eX; j++)
        {
            answer[j][eY] = num++;
        }
        eY--;
        for(int k = eY; k >= sY; k--)
        {
            answer[eX][k] = num++;
        }
        eX--;
        for(int l = eX; l >= sX; l--)
        {
            answer[l][sY] = num++;
        }
        sY++;
    }
    
    return answer;
}

