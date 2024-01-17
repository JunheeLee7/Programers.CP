◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181898

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr, int idx) 
{
    int answer = 0;
    int z = 0;
    bool isCheck = false;
    for(int i = idx; i < arr.size(); i++)
    {
        if(arr[i] == 1 && !isCheck)
        {
            z = i;
            isCheck = true;
        }
        
    }
    if(isCheck == false)
    {
        answer = -1;
    }
    else
    {
        answer = z;
    }
    return answer;
}


