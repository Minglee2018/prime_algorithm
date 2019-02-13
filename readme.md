Thuật toán sàng nguyên tố Eratosthenes
Tạo mảng đánh dấu cho tất cả các phần tử từ 2 đến N và mặc định tất cả đều là số nguyên tố
Xét số đầu tiên tìm được là số nguyên tố – giả sử x, đánh dấu tất cả các ước của x: 2x, 3x, 4x,… trong đoạn [x, N] không phải số nguyên tố.
Tìm số tiếp theo được đánh dấu là số nguyên tố trong [x, N]. Nếu không còn số nào, thoát chương trình. Nếu còn, gán nó bằng x và lặp lại bước 2.
Khi kết thúc giải thuật, các số không bị đánh dấu là các số nguyên tố
