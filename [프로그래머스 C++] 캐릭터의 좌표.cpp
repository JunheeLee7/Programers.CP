◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120861

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) 
{
    vector<int> answer;
    int a = 0;
    int b = 0;
    int mX = abs((board[0] - 1) / 2);
    int mY = abs((board[1] - 1) / 2);
    
    for(int i = 0; i < keyinput.size(); i++)
    {
        if(keyinput[i] == "left")
        {
            a -= 1;
        }
        else if(keyinput[i] == "right")
        {
            a += 1;
        }
        else if(keyinput[i] == "up")
        {
            b += 1;
        }
        else if(keyinput[i] == "down")
        {
            b -= 1;
        }
        
        if(a > mX)
        {
            a = mX;
        }
        else if(a < -mX)
        {
            a = -mX;
        }
        
        if(b > mY)
        {
            b = mY;
        }
        else if(b < -mY)
        {
            b = -mY;
        }
    }
    answer.push_back(a);
    answer.push_back(b);
    return answer;
}

