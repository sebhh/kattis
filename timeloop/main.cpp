#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <iomanip>
#include <map>
#include <ctype.h>
#include <unordered_set>
using namespace std;

int main(){
	long long N, M;
    int a, sum;
    std::map<int, int> m;
	while (cin >> N >> M){
        for (int i = 0; i < N; i++)
        {
            cin >> a;
            m[a] = 1;
        }

        for (int i = 0; i < M; i++)
        {
            cin >> a;
            if (m.find(a) != m.end()){
                sum++;
            }
        }
        
	}
	return 0;
}