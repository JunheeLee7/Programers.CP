◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120876

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> lines) 
{
    int answer = 0;
    int arr[200] = {0, };
    
    for(int i = 0; i < lines.size(); i++)
    {
        int a = lines[i][0];
        int b = lines[i][1];
        
        for(int j = a; j < b; j++)
        {
            arr[j+100]++;
        }
    }
    
    for(int i = 0; i < 200; i++)
    {
        if(arr[i] >= 2)
        {
            answer++;
        }
    }
    
    return answer;
}
