# Operating Systems
## Thread and Process
1. Process: là chương trình đang nằm trong CPU để thực thi, process có thể tạo process con. Các trạng thái của process bao gồm: new, ready, running, waiting, terminated, suspended. Tốn nhiều thời gian để terminated.   
-> Mỗi process tách biệt, không chia sẻ bộ nhớ với những process khác.
2. Thread: là segment của process nghĩa là process có thể có nhiều thread. Thread có 3 trạng thái: running, ready, blocked. Tốn ít time để terminated và không tách biệt như process.

| Process | Thread |
| ----------- | ----------- |
| Nghĩa là mọi chương trình đang thực thi | Nghĩa là segment của process |
| Tốn nhiều time để tạo | Tốn ít time để tạo |


