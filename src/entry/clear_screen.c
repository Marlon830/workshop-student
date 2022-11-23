void clear_screen(unsigned char color)
{
    char *video_memory = (char*) 0xb8000;
    for (int i = 0; i < 2000; i++){
        *video_memory = ' ';
        video_memory++;
        *video_memory = color; 
        video_memory++;       
    }
}