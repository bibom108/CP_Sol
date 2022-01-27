/*
    Question: Given a ll, return start node of the loop in it (if any).
    Input: 
    Output: 
    More:
*/

// White board part
/*
Sol1: 
+ Ap dụng bài toán tortoise and hare để check xem có loop bên trong hay không.
-> Thu được vị trí giao nhau của fast and slow pointer.
+ Ta nhận thấy từ giao điểm, nếu ta chạy lại khoảng cách ban đầu sẽ tới được đúng giao điểm đó lại.
Gọi D là khoảng cách từ điểm đầu đến start node, K là khoảng cách từ start node đến giao điểm.
c/m: D + K = N
    D + K + Ci = 2N
    -> D + K + Ci = 2D + 2K
    -> D + K = Ci
    -> Tức là cứ đi (D + K) thì ta hoàn thành 1 vòng.
+ Chọn 1 pointer xuất phát từ head, 1 pointer xuất phát từ giao điểm, nếu đi D+K thì gặp lại giao điểm,
nếu đi D thì gặp điểm bắt đầu (bớt đi 1 khoảng K). Do đó ta chỉ cần cho cả 2 cùng tăng đến khi gặp nhau tại
giao điểm đầu tiên -> Start Node.
Space: 0(1)
Time: 0(n)

*/
// Testing part
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *p1 = head;
        ListNode *p2 = head;
        while (p2 != NULL && p2->next != NULL){
            p1 = p1->next;
            p2 = p2->next->next;
            if (p1 == p2){
                break;
            }
        }
        
        if (p1 != p2 || p2 == NULL || p2->next == NULL){
            return NULL;
        }
        p1 = head;
        while (p1 != p2){
            p1 = p1->next;
            p2 = p2->next;
        }
        return p1;
    }
};

int main(){
    
}