#include <stdio.h>
#include <unordered_set>


int main()
{
    while (1)
    {
        std::unordered_set<int> s;
        int counter = 0, n, k, next;
        scanf("%d %d", &n, &k);
        if (!n && !k) break;
        while (n-- > 0)
        {
            scanf("%d", &next);
            s.insert(next);
        }
        while (k-- > 0)
        {
            scanf("%d", &next);
            if (s.find(next) != s.end()) counter++;
        }
        printf("%d\n", counter);
    }
    return 0;
}