# Computer Architecture
1. Kiến trúc máy tính là gì ?
Là đặc tả chi tiết về cách phần cứng và phần mềm tương tác với nhau trong máy tính.
1. Các loại interrupt trong microprocessor system
- External interrupt: interrupt từ input/ output từ bên ngoài.
- Internal interrupt: gây ra bởi exception của program (ví dụ như chia cho 0).
- Software interrupt: chỉ xảy ra trong quá trình chạy instruction, mục đích để chuyển là user mode sang supervisor mode.
3. Các thành phần chính của microprocessor là?
- IO unit
- Control unit
- Register
- Cache
- ALU
4. Bộ nhớ ảo trong máy tính là gì?
Khi RAM ko đủ cho hệ thống thì máy tính sẽ dùng bộ nhớ từ đĩa cứng, phần bộ nhớ này được gọi là bộ nhớ ảo.
5. Kể tên các loại hazard và cách phòng tránh?  
-> Hazard ngăn cho câu lệnh tiếp theo được thực thi, giảm hiệu suất của máy tính.
- Structural hazard: khi phần cứng không thể hỗ trợ cho toàn bộ tổ hợp các lệnh đồng thời được.
- Data hazard: câu lệnh trước truy cập vùng nhớ chưa được giải phóng trong pipeline (read after write).
- Control hazard: xảy ra trong pipeline của nhành và những câu lệnh thay đổi PC.
6. Cache là gì?  
Là một phần nhỏ của SRAM, được thêm vào giữa bộ nhớ chính và CPU để tăng tốc quá trình thực thi.   
Có 3 cách của cache mapping:
- Direct mapping: mỗi block từ bộ nhớ chính có 1 nhất 1 place để lưu trong cache.
- Associative mapping: sử dụng word và tag để map từ bộ nhớ chính đến cache. **Được xem là cách nhanh nhất và linh hoạt nhất**.
- Set - associative mapping: kết hợp của cả 2 cách trên