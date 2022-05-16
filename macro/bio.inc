macro putch [char, video_page, counter] {
mov bh, [video_page]
mov al, [char]
mov ah, 0Ah
movzx cx, [counter]
int 10h
}

macro cursor [row, column] {
  mov dh, row
  mov dl, column
  int 10h
}
