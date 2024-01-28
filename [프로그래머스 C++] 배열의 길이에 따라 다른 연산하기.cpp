◈ 문제 설명 링크



◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, int n) 
{
    vector<int> answer;
    if(arr.size() % 2 == 0)
    {
        for(int i = 0; i < arr.size(); i++)
        {
            if(i % 2 == 0)
            {
                answer.push_back(arr[i]);
            }
            else
            {
                answer.push_back(arr[i] + n);
            }
        }
    }
    else
    {
        for(int j = 0; j < arr.size(); j++)
        {
            if(j % 2 == 0)
            {
                answer.push_back(arr[j] + n);
            }
            else
            {
                answer.push_back(arr[j]);
            }
        }
    }
    return answer;
}


