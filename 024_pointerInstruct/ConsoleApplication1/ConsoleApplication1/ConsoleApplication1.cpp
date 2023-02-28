#include <iostream>

typedef struct {

    char* name;
    int   unique_views;
}video_st;

typedef struct {

    char*   username;
    video_st* watched_videos;
    int     watched_videos_size;
}viewver_st;


video_st videos[] = {

    { .name = "soccer"   , .unique_views = 100 } ,
    { .name = "baseball" , .unique_views = 200 }
};

viewver_st viewver = {
    .username = "Atakan" , .watched_videos = videos , .watched_videos_size = 2
};

viewver_st* viewers[] = { &viewver };


int main()
{
    std::cout << "Hello World!\n";
}

