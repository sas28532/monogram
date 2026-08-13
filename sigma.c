#include <stdio.h>
#include <unistd.h>
#include "sense.h"

#define WHITE 0xFFFF
#define GREEN 0x07EA 
#define BLACK 0x0000
int main(void) {

    pi_framebuffer_t *fb = getFrameBuffer();
    sense_fb_bitmap_t *bm = fb->bitmap;
    clearFrameBuffer(fb, BLACK);

    //letter S
    bm->pixel[7][0] = WHITE;
    bm->pixel[6][0] = WHITE;
    bm->pixel[5][0] = WHITE;
    bm->pixel[4][0] = WHITE;
    bm->pixel[3][0] = WHITE;
    bm->pixel[2][0] = WHITE;
    bm->pixel[1][0] = WHITE;

    bm->pixel[7][1] = WHITE;
    bm->pixel[7][2] = WHITE;
    bm->pixel[7][3] = WHITE;

    bm->pixel[6][3] = WHITE;
    bm->pixel[5][3] = WHITE;
    bm->pixel[4][3] = WHITE;
    bm->pixel[3][3] = WHITE;
    bm->pixel[2][3] = WHITE;
    bm->pixel[1][3] = WHITE;
    
    bm->pixel[1][4] = WHITE;
    bm->pixel[1][5] = WHITE;
    bm->pixel[1][6] = WHITE;

    bm->pixel[2][6] = WHITE;
    bm->pixel[3][6] = WHITE;
    bm->pixel[4][6] = WHITE;
    bm->pixel[5][6] = WHITE;
    bm->pixel[6][6] = WHITE;
    bm->pixel[7][6] = WHITE;

    sleep(1);
    clearFrameBuffer(fb, BLACK);

    //plus sign
    bm->pixel[7][3]=WHITE;
    bm->pixel[6][3]=WHITE;
    bm->pixel[5][3]=WHITE;
    bm->pixel[4][3]=WHITE;
    bm->pixel[3][3]=WHITE;
    bm->pixel[2][3]=WHITE;
    bm->pixel[1][3]=WHITE;

    bm->pixel[4][0]=WHITE;
    bm->pixel[4][1]=WHITE;
    bm->pixel[4][2]=WHITE;
    bm->pixel[4][4]=WHITE;
    bm->pixel[4][5]=WHITE;
    bm->pixel[4][6]=WHITE;

    sleep(1);
    clearFrameBuffer(fb, BLACK);

    //clover
    bm->pixel[7][4]=GREEN;
    bm->pixel[6][4]=GREEN;
    bm->pixel[5][4]=GREEN;
    bm->pixel[4][4]=GREEN;
    bm->pixel[4][5]=GREEN;
    bm->pixel[4][6]=GREEN;
    bm->pixel[5][6]=GREEN;
    bm->pixel[5][5]=GREEN;
    bm->pixel[4][3]=GREEN;
    bm->pixel[4][2]=GREEN;
    bm->pixel[4][1]=GREEN;
    bm->pixel[3][1]=GREEN;
    bm->pixel[3][2]=GREEN;
    bm->pixel[3][4]=GREEN;
    bm->pixel[2][4]=GREEN;
    bm->pixel[1][4]=GREEN;
    bm->pixel[1][5]=GREEN;
    bm->pixel[2][5]=GREEN;

    sleep(1);
    clearFrameBuffer(fb, BLACK);
    freeFrameBuffer(fb);
}
