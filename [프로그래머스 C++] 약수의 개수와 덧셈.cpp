#include <string>
#include <vector>

using namespace std;

int solution(int left, int right) 
{
    int answer = 0;
    int t = 0;
    for(int i = left; i <= right; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            if(i % j == 0)
            {
                t ++;
            }
        }
        
        if(t % 2 == 0)
        {
            answer += i;
        }
        else if(t % 2 != 0)
        {
            answer -= i;
        }
        t = 0;
    }
    return answer;
}

