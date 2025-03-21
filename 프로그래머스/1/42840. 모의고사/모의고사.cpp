#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int> s1 = {1, 2, 3, 4, 5};
    vector<int> s2 = {2, 1, 2, 3, 2, 4, 2, 5};
    vector<int> s3 = {3, 3, 1, 1, 2, 2, 4, 4, 5, 5};
    
    int a1 =0, a2 =0, a3 =0;
    
    for (int i = 0; i < answers.size(); i++)
    {
        int l = i % s1.size();
        if (answers[i] == s1[l])
        {
            a1++;
        }
    }
    
    for (int i = 0; i < answers.size(); i++)
    {
        int l = i % s2.size();
        if (answers[i] == s2[l])
        {
            a2++;
        }
    }
    
    for (int i = 0; i < answers.size(); i++)
    {
        int l = i % s3.size();
        if (answers[i] == s3[l])
        {
            a3++;
        }
    }
    
    vector<int> Maxsort;
    Maxsort.push_back(a1);
    Maxsort.push_back(a2);
    Maxsort.push_back(a3);
    
    int max = *max_element(Maxsort.begin(), Maxsort.end());
    for (int i = 0; i < 3; i++)
    {
        if (max == Maxsort[i])
        {
            answer.push_back(i + 1);
        }
    }
    
    return answer;
}