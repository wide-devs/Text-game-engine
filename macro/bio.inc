macro putch [char, video_page, counter] {
  mov bh, [video_page]
  mov al, [char]
  mov ah, 0Ah
  movzx cx, [counter]
  int 10h
}

macro cursor [row, column] {
  mov ax, 0200h
  mov dh, row
  mov dl, column
  int 10h
}

macro puts [string, len] {
  mov bp, string
  mov cx, len
  mov ax, 1301h
  int 10h
}
