# Networking and Web Security
![](https://www.dcs.bbk.ac.uk/~ptw/teaching/IWT/transport-layer/internet-protocols.png)
## IP, TCP, UDP
1. Tầng mạng: cung cấp kết nối giữa các host (end system).
2. Tầng vận chuyển: cung cấp kết nối giữa các process chạy trong các host.
1. Internet Protocol (IP): là giao thức thuộc tầng mạng, cung cấp việc truyền gói tin giữa các ứng dụng, hỗ trợ cả TCP và UDP
2. Transmission Control Protocol (TCP): là giao thức của tầng vận chuyển, cung cấp kết nối đáng tin cậy, nghĩa là kết nối được tạo ra trước khi truyền dữ liệu, data truyền đi ko bị lỗi và lặp và giữ đúng thứ tự, TCP xem data là chuỗi bytes.
3. User Datagram Protocol (UDP): là giao thức tầng vận chuyển thay thế cho UDP, kết nối ko đáng tin cậy, data truyền từ link tới link, ko có kết nối end to end. Không đảm bảo truyền nhận.

| Basic | TCP      | UDP |
| ----------- | ----------- | ----------- |
| Error checking |   Flow control và ACK    | Chỉ có checksum |
| Acknowledgment |  Có  |   Không      |
| Speed | Chậm | Nhanh, đơn giản và hiệu quả hơn |
| Weight | Heavy | Light |
| Broadcasting | Không | Có |
## TCP 3-way handshake
1. Client gửi đi tín hiệu SYN tới server yêu cầu mở connection.
2. Khi connection đã đc mở, server gửi lại 2 tín hiệu là SYN và ACK để thông báo cổng đã mở, nếu không chấp nhận connection, thay vào đó sẽ gửi RST/ACK.
3. Khi client nhận được SYN/ACK, thì sẽ trả lời lại bằng ACK báo cho server biết client đã nhận được và lúc này dữ liệu sẽ lưu thông tự do.
## HTTP, HTTPS
-> Cả 2 đều là giao thức của tầng ứng dụng
1. HTTP: không giữ lại trạng thái trước đó (stateless), chú trọng vào việc hiển thị thông tin, không quan tâm đến cách thông tin được truyền nên ít bảo mật cho thông tin và user.
2. HTTPS: bảo mật hơn, nếu không có https, data sẽ được truyền dạng text, có HTTPS sẽ được mã hóa thông tin trước nhờ có TLS.
## DNS và Enter URL
1. DNS Dịch domain name của website sang địa chỉ IP.
2. Step after enter URL:
- Browser check cache for DNS để dịch sang địa chỉ IP. Tìm trong các loại cache.
- Nếu ko thấy trong cache, ISP's DNS server tạo query để tìm địa chỉ IP cho URL.
- Khởi tạo kết nối TCP với server sử dụng SYN và ACK.
- Browser gửi HTTP request, get hoặc post tới server.
- Server trả về phản hồi, cùng với trạng thái phản hồi.
- Browser hiển thị HTML content.
## IPv4 vs IPv6
- IPv4 sử dụng 32 bit địa chỉ trong khi IPv4 sử dụng 128 bit địa chỉ.
- IPv4 chỉ sử dụng số trong khi IPv6 sử dụng cả chữ lẫn số.
- IPv4 có 12 header field trong khi IPv6 có 8 head field.
- IPv4 có checksum trong khi IPv6 thì không.
- IPv4 hỗ trợ VLSM, broadcast và sử dụng ARP cho MAC address trong khi IPv6 không hỗ trợ VLSM, không hỗ trợ broadcast và sử dụng NDP cho MAC address.
