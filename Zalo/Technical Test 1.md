## Software Development Models
1. **Waterfall model:** 
- Một giai đoạn phải được hoàn tất trước khi chuyển sang giai đoạn khác.
- Khó đáp ứng với nhiều thay đổi.
- Simple small or mid-sized projects with clearly defined and unchanging requirements.
- Projects with the need for stricter control, predictable budget and timelines.
- Projects that must adhere to multiple rules and regulations.
- Projects where a well-known technology stack and tools are used.
2. **Incremental model:**
- Split into several iterations. New software modules are added in each iteration with no or little change in earlier added modules. 
- Có thể tuần tự hoặc song song, song song có thể tăng tốc độ hoàn thành.
3. **Iterative model**
- Software changes on each iteration, evolves and grows. As each iteration builds on the previous one, software design remains consistent.
3. **Agile model:**
- Iterative development, frequent releases, intensive communication, and early customer feedback.
- Làm việc với team và cả khách hàng, cuối mỗi lần lặp, review lại progress và task. 
- Scrum: là agile model phổ biến nhất. Mỗi iterations khoảng 2-4 tuần, không được thay đổi khi các iteration đã được xác định.
## Testing
1. Verification: đảm bảo phần mềm hiện thực đúng các chức năng cụ thể. **(build the product right)**
2. Validation: đảm bảo sản phẩm đúng với yêu cầu của khách hàng. **(build the right product)**
3. Software inspection: static verification, check code + doc để tìm lỗi.
4. Software testing: dynamic verification, chạy test data để kiểm tra hành vi của sản phẩm.
5. Stage of testing: 
- Development testing: test trong quá trình code.
- Release testing: team test test sản phẩm hoàn thiện trước khi đưa cho khách hàng.
- User testing: user test trên thiết bị của họ.
5. **Test types:**
- Manual testing: test bằng cơm mà không có tool tự động hoặc code để test. Tester lúc này sẽ đóng vai là người dùng cuối và test sản phẩm + hành vi. Sử dụng test plan và kịch bản test để cover đầy đủ.
- Automation testing: viết code và sử dụng phần mềm khác để test sản phẩm. Dùng để chạy những kịch bản test lặp lại, load, performance, tăng độ cover, chính xác và tiết kiệm time.
6. **Level of testing:**
- Unit testing: test trên bộ phận của sản phẩm để validate chức năng từng bộ phận.
- Intergration testing: test các bộ phận được gộp lại để kiểm tra sự tương tác giữa các bộ phận.
- System testing: test trên sản phẩm hoàn thiện để xem đúng với yêu cầu hay chưa.
- Acceptance testing: test xem hệ thống đã được chấp nhận để đưa tới khách hàng hay chưa.
7. **Kỹ thuật testing:**
- Black box: Ko access được source code và chỉ được tiến hành trên interface của phần mềm và không cần quan tâm đến logic bên trong, chỉ care input và output.
- White box: Test và biết được cách hoạt động bên trong, truy cập được code, đảm bảo tất cả hoạt động đúng với đặc tả.