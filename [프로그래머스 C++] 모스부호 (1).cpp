◈ 문제 설명 링크

https://school.programmers.co.kr/learn/courses/30/lessons/120838

◈ 작성 코드

#include <string>
#include <vector>
#include <map>

using namespace std;

string solution(string letter) 
{
    string answer = "";
    string ace = "";
    vector<vector<string>> morse = {{".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},{".","e"},{"..-.","f"},
{"--.","g"},{"....","h"},{"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
{"--","m"},{"-.","n"},{"---","o"},{".--.","p"},{"--.-","q"},{".-.","r"},
{"...","s"},{"-","t"},{"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
{"-.--","y"},{"--..","z"}};
    
    for(int i = 0; i < letter.size(); i++)
    {
        if(letter[i] == ' ')
        {
            for(int j = 0; j < morse.size(); j++)
            {
                if(ace == morse[j][0])
                {
                    answer += morse[j][1];
                    ace = "";
                }
            }
        }
        else
        {
            ace += letter[i];
        }
    }
    
    for(int i = 0; i < morse.size(); i++)
    {
        if(ace == morse[i][0])
        {
            answer += morse[i][1];
        }
    }

    return answer;
}
