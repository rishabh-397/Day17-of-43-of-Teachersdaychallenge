#include <iostream>
#include <vector>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    vector<int> cards(n);
    for (int i = 0; i < n; ++i) {
        cin >> cards[i];
    }
 
    int sereja = 0, dima = 0;
    int left = 0, right = n - 1;
    bool serejaTurn = true;
 
    while (left <= right) {
        int chosen;
        if (cards[left] > cards[right]) {
            chosen = cards[left];
            left++;
        } else {
            chosen = cards[right];
            right--;
        }
 
        if (serejaTurn) {
            sereja += chosen;
        } else {
            dima += chosen;
        }
        serejaTurn = !serejaTurn;
    }
 
    cout << sereja << " " << dima << endl;
    return 0;
}
