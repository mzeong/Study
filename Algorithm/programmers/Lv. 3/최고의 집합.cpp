#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n, int s) {
    vector<int> answer;
    int q = s / n;
    int r = s % n;
    if (q > 0) {
        for (int i = 0; i < n - r; i++) {
            answer.push_back(q);
        }
        for (int i = 0; i < r; i++) {
            answer.push_back(q + 1);
        }
    } else answer.push_back(-1);
    return answer;
}
