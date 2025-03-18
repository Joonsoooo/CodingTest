#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sizes_rows는 2차원 배열 sizes의 행 길이, sizes_cols는 2차원 배열 sizes의 열 길이입니다.
int solution(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int answer = 0;
    
    answer = sizes[0][0] * sizes[0][1];
    
    for (int i = 0; i < sizes_rows; i++)
    {
        if (sizes[i][0] < sizes[i][1])
        {
            int temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
    }
    
    for (int i = 0; i < sizes_rows; i++)
    {
        for (int l = 0; l < sizes_rows; l++)
        {
            if (answer < sizes[i][0] * sizes[l][1])
            {
                answer = sizes[i][0] * sizes[l][1];
            }
        }
    }
    
    return answer;
}