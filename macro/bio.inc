macro putch [char, video_page, counter] {
mov bh, [video_page]
mov al, [char]
mov ah, 0Ah
movzx cx, [counter]
int 10h
}
