# Memory
1. **Stack** là một vùng nhớ của máy tính được tổ chức theo phương thức LIFO. 
Stack là vùng nhớ tạm thời, sau khi hoàn tất công việc, vùng nhớ liên quan sẽ bị xóa.
Stack chỉ lưu các biến local. Stack được quản lí bởi pointer.  
**(+) :** Stack tự động xóa biến tự động sau khi đã sử dụng sau. Stack tự động
dọn dẹp các object.  
**(-) :** Stack có kích thước nhỏ hơn, bị giới hạn. Không thể random access.

2. **Heap** là vùng nhớ được sử dụng để lưu biến global. Cho phép khai báo động.
Heap không tự động quản lý bộ nhớ.  
**(+) :** Trong heap có Garbage collection để giải phóng vùng nhớ đã sử dụng của object. 
Heap không giới hạn kích thước. Object có thể thay đổi kích thước.  
**(-) :** Tốn thời gian hơn để xử lý. Quản lý bộ nhớ phức tạp.

3. **Virtual Memory** là kỹ thuật sử dụng secondary memory như là một phần của main memory. 
Mỗi process sử dụng địa chỉ ảo, lúc chạy sẽ được dịch sang địa chỉ thật. Mỗi phần đó không bắt buộc
phải liên tiếp trong địa chỉ thật, mà được xem xét thông qua page hoặc segment table. Đối với page 
và segment table, không bắt buộc phải load toàn bộ, mà chỉ load khi cần bằng một số kỹ thuật thay trang.

4. **Thrashing** là hiện tượng process bị thay trang liên tục khi có quá nhiều process hoặc quá ít frame.

# Mutex, Semaphore
1. **Cơ chế của việc xử lý tranh chấp :**  
- **Mutual Exclusion :** Nếu 1 process đang ở trong vùng CS, thì không cho phép bất cứ process nào truy 
cập vào.
- **Progress :** Nếu vùng CS đang trống, process khác đang đợi ở ngoài, thì phải cho phép truy cập CS, 
không trì hoãn vô hạn.
- **Bounded waiting :** giới hạn số lần truy cập của process sau khi một process truy cập CS và trước khi 
yêu cầu được chấp thuận.
2. **Mutex :** là cơ chế khóa sử dụng cho việc đồng bộ truy cập vùng tranh chấp, cross process lock.
3. **Semaphore :** là cơ chế tín hiệu cho việc đồng bộ, một lock có thể cho phép nhiều hơn 1 thread truy
cập vào object.

# Inter Process Communication (IPC)
- IPC chia sẻ data giữa các process.

# Thread
- Thread là luồng thực thi trong một process. Một process có thể có nhiều thread.
- Sự khác nhau giữa thread với process là thread trong process chia sẻ bộ nhớ dùng chung, trong khi 
các process sử dụng các bộ nhớ tách biệt.
- Một số phần được chia sẻ như là code section, data section, OS resource. Một số phần riêng như là 
counter, register set, stack space.
- Lợi ích của thread so với process: Tính đáp ứng nhanh hơn, thời gian context switch, resource sharing, communication giữa các thread dễ dàng hơn.

# Context Switch
- Là hiện tượng chuyển đổi giữa một process đang chạy với một process khác.
- Trạng thái của process đang chạy sẽ được lưu lại trong PCB, sau đó sẽ tiếp tục từ trạng thái này.

# Deadlock, starvation, race condition
- **Deadlock :** là hiện tượng 2 hoặc nhiều thread block lẫn nhau vô hạn. Fix bằng cách thay đổi lại thứ tự
của các thread.
- **Starvation :** khi các process có mức độ ưu tiên cao hơn liên tục được thực thi, làm cho process hiện 
tại bị trì hoãn vô hạn. Fix bằng kỹ thuật Aging.
- **Race condition :** xảy ra khi nhiều thread read và write trên cùng một object. Fix bằng cách xử dụng lock đồng bộ.

# Socket
- Socket là 1 điểm của đường kết nối 2 chiều của 2 chương trình qua network, thuộc tầng vận chuyển.
- Socket cụ thể protocol, port trong header của packet.
- Có 3 loại socket: **Datagram** sử dụng giao thức UDP, không đảm bảo. **Stream** sử dụng TCP, giao nhận đảm bảo. **Raw** không cụ thể protocol trên tầng vận chuyển.

# Thread and Process
1. Process: là chương trình đang nằm trong CPU để thực thi, process có thể tạo process con. Các trạng thái của process bao gồm: new, ready, running, waiting, terminated, suspended. Tốn nhiều thời gian để terminated.   
-> Mỗi process tách biệt, không chia sẻ bộ nhớ với những process khác.
2. Thread: là segment của process nghĩa là process có thể có nhiều thread. Thread có 3 trạng thái: running, ready, blocked. Tốn ít time để terminated và không tách biệt như process.

| Process | Thread |
| ----------- | ----------- |
| Nghĩa là mọi chương trình đang thực thi | Nghĩa là segment của process |
| Tốn nhiều time để tạo | Tốn ít time để tạo |
3. Multithreading
- Cho phép 2 hay nhiều phần của chương trình chạy cùng lúc để tối ưu CPU, mỗi phần chạy như vậy là 1 thread.


