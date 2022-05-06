# Database
## SQL Query
1. Join
- Left join: SELECT ... FROM table1 LEFT JOIN table2 ON table1.ID = table2.ID  
-> Lấy toàn bộ trong table 1 và hiển thị thêm thông tin với những row có thêm thông tin trong table 2 hoặc NULL nếu không khớp.
- Right join: SELECT ... FROM table1 RIGHT JOIN table2 ON table1.ID = table2.ID  
-> Lấy toàn bộ trong table 2 và hiển thị thêm thông tin với những row có thêm thông tin trong table 1 hoặc NULL nếu không khớp.

![](https://www.dofactory.com/img/sql/sql-joins.png)
## Store password in database
1. Password + random salt + Hash function -> Store this
## Why need server between client and database
- Bảo mật hơn, chỉ cung cấp access cho từng loại client cụ thể tùy trường hợp.
- Có thể xử lý query từ client, giúp giảm tải cho database.
- Đồng bộ việc sử dụng tài nguyên khi có nhiều request song song.
## Khái niệm chung 
1. SQL là ngôn ngữ (command language) dùng để tương tác với db.
1. Db là một dạng cấu trúc của dữ liệu cho phép thao tác qua máy tính bằng DB management system.
1. DDL: Data definition language, CREATE, ALTER, DROP, and RENAME.
1. DML: data manipulation language, ELECT, INSERT, and UPDATE.
1. DCL: data control language, Grant và REVOKE.
## Các loại key
1. **Super key:** gồm tập attribute sao cho có thể xác định được các attribute khác, có thể có thừa.
1. **Candidate key:** là super key nhưng không thể tối giản hơn được nữa.
1. **Primary key:** là candidate key được sử dụng để hiện thực db.
1. **Foreign key:** là col trong bảng này (con) có thể xác định được một primary key trong bảng khác (cha). Col trong bảng con được gọi là foreign key.
## Normalization
- Normalization là quá trình giảm sự dư thừa và phụ thuộc bằng cách sắp xếp lại các field và bảng của db, mục tiêu chính là thêm, sửa xóa field có thể tạo thành 1 bảng.
- Denormalization là kỹ thuật sử dụng để truy cập data từ normal form cao hơn xuống thấp hơn, tối ưu read time.
1. First normal form (1NF): unique name cho từng cột, mỗi giá trị phải là single valued attribute.
2. Second normal form (2NF): 
2. Third normal form (3NF): 
2. Fourth normal form (4NF): 

## Index
- Index đóng vai trò cho phép tăng hiệu suất của việc đọc record từ table.
1. Unique index: không cho phép duplicate.
2. Clustered index: mỗi table chỉ có thể có 1 clustered index, reorder physical order của bảng để truy vấn nhanh hơn.
3. NonClustered index: có thể có 999, duy trì logical order của data bằng cách tạo ra object khác trong bảng.
- **Drawback of index**: overhead lúc query, tốn bộ nhớ để lưu các index.
- **Importance of ordering index col**: bởi vì khi query, có thể chúng ta query vào những column phía sau, nên index bị bỏ qua không được sử dụng.
## Relationship
- Được định nghĩa là mối quan hệ giữa các bảng trong database.
1. One to one: id của 1 khách hàng ứng với 1 khách hàng.
2. one to many: 1 thành phố có nhiều zip code.
3. many to one: các thành viên trong gia đình có thể sở hữu nhiều con vật.
4. self- ref: liên quan tới 1 row trong cùng 1 table. Bộ phận của 1 sản phẩm link tới sản phẩm đó trong bảng.
