# DSA
## Sorting
1. Selection sort: chạy i lần lượt từ đầu đến cuối, chọn ra ptu nhỏ nhất từ i -> n rồi swap vào vị trí i.
2. Bubble sort: đi từ n, nếu bé hơn vị trí i thì swap, ngược lại đem i đi tiếp. 0(n^2), 0(n) khi array đã được sorted.
3. Insertion sort: chạy i từ đầu đến n, tại mỗi i, chèn i vào phần bên trái sao cho hợp lí.
4. Merge sort: chia đôi, sort, rồi ghép lại.
5. Quick sort: chia đôi, chọn 1 pivot, chia sao cho bên trái pivot là bé hơn, bên phải là lớn hơn. Nếu pick pivot là số lớn nhất hoặc bé nhất thì 0(n^2).

**Stable sort:** buble sort, insertion sort, merge sort.
## Tree
1. Preorder + Inorder -> Tree:
- Đi từ trái sang phải của preorder để tìm ptu đầu tiên preorder[i].
- Ứng với mỗi ptu đó, tìm nó trong inorder, lúc này ptu được tìm thấy sẽ chia inorder ra làm 2 phần left và right.
- Đi tiếp với phần tử i+1 thì đó là root của cây con bên trái (nếu có).
- Recursion tương tự với phần còn lại.
2. Inorder + Postorder -> Tree:
- Đi từ phải sang trái của postorder để tìm ptu đầu tiên postorder[i].
- Tìm nó trong inorder, chia làm left và right.
- Đi tiếp sang ptu i-1 là root của cây con bên phải (nếu có).
- Recursion tương tự với các node còn lại.
