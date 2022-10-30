#include <stdio.h>
#include <unordered_set>

int main()
{
    while (1)
    {
        int counter = 0, n, s, m;
        std::unordered_set<int> set;
        scanf("%d %d %d", &n, &s, &m);

        //printf("%d %d %d\n", n, s, m);

        int board [n];
        int i = 0;
        //Load
        int N = n;
        while (N-- > 0){
            scanf("%d ", &board[i]);
            i++;
        }
        s--;
        //Until convergence
        int idx = s;
        while(1){
            //printf("%d, %d\n", idx, board[idx]);
            set.insert(idx);
            if (board[idx] == m)
            {
                printf("magic\n");
                printf("%d", counter);
                return 0;
            }
            if (idx < 0) {
                printf("left\n");
                printf("%d", counter);
                return 0;
            }
            if (idx >= n) {
                printf("right\n");
                printf("%d", counter);
                return 0;
            }
            
            idx = idx + board[idx];
            counter++;

            if (set.find(idx) != set.end()){
                printf("cycle\n");
                printf("%d", counter);
                return 0;
            }
        }

        
        return 0;
    }
    return 0;
}