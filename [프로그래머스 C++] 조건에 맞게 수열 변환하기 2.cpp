◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/181881

◈ 작성 코드

#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) 
{
    int answer = 0;
    vector<int> arr1;
    vector<int> arr2 = arr;
    while(arr1 != arr2)
    {
        arr2 = arr;
        for(int i = 0; i < arr.size(); i++)
        {
            if(arr[i] >= 50 && arr[i] % 2 == 0)
            {
                arr[i] /= 2;
            }
            else if(arr[i] < 50 && arr[i] % 2 != 0)
            {
                arr[i] = (2 * arr[i]) + 1;
            }
        }
        arr1 = arr;
        answer++;
    }
    answer -= 1;
    return answer;
}
