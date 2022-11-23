unsigned char set_vga_cell(char background, char text)
{
    return (background << 4) | text;
}

