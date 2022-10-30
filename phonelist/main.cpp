#include <stdio.h>
#include <unordered_set>
#include <string>
#include <iostream>


int check_set(int n, std::string m, std::string sub_m){
    std::unordered_set<std::string> set;
    char tmp[10];

    while (n-- > 0)
    {
        scanf("%s", tmp);
        m = tmp;
        //printf("%s\n", m.c_str());
        set.insert(m);
    }
    
    std::unordered_set<std::string> :: iterator itr;
    for (itr = set.begin(); itr != set.end(); itr++){
        m = *itr; 
        for (int i = 0; i < (m.length()); i++)
        {
            sub_m = m.substr(0, i);
            //printf("%s\n", sub_m.c_str());
            if (set.find(sub_m) != set.end()) {
                printf("NO\n");
                return 0;
            }
            
        }
    }
    
    printf("YES\n");
    return 0;
    
}

int main()
{
    while (1)
    {
        int n, t;
        //char m[10];
        std::string m(100, ' '), sub_m;
        scanf("%d", &t);

        while(t-- > 0){
            scanf("%d", &n);
            check_set(n, m, sub_m);
        }
        return 0;
    }
    return 0;
}