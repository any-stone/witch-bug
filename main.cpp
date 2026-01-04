// Based on examples from "C++20 for Lazy Programmers"
// Modified by Annie to fix Apple Silicon graphics issues
// January 4, 2026

#include "SSDL.h"

int main (int argc, char** argv)
{
    //Modification to get rid of graphic issues
    // 1. Take black paint
    SSDL_SetRenderDrawColor (BLACK); 
    
    // 2. Fill the screen with black paint
    SSDL_RenderClear (); 

    // 3. Take white paint to draw lines below
    SSDL_SetRenderDrawColor (WHITE);

    //4. Start drawing//
    // Head (whole round head first)
    SSDL_SetRenderDrawColor (WHITE);
    SSDL_RenderDrawCircle (430, 250, 200);


    // Erasing the forehead (to "hide" it under the hat)
    SSDL_SetRenderDrawColor (BLACK);
    
    // Cycle says: "Draw black lines from y=50 till y=160"
    // It creates black rectangle above bug's forehead
    for (int y = 40; y <= 160; y++) 
    {
        SSDL_RenderDrawLine(200, y, 660, y); 
    }


    // Draw the rest of the picture
    SSDL_SetRenderDrawColor (WHITE);

    // Face
    SSDL_RenderDrawCircle (320, 250,  45);     // Left eye
    SSDL_RenderDrawCircle (320, 250,  10);     // Left Pupil
    SSDL_RenderDrawCircle (470, 270,  45);     // Right eye
    SSDL_RenderDrawCircle (470, 270,  10);     // Right Pupil
    SSDL_RenderDrawCircle (380, 320, 5);       // Nose
    SSDL_RenderDrawLine   (290, 350, 372, 410);// Smile
    SSDL_RenderDrawLine   (372, 410, 490, 400);

    // Hat
    SSDL_RenderDrawLine (230, 160, 630, 160);  // Hat brims
    SSDL_RenderDrawLine (300, 160, 430,  10);  // Left side
    SSDL_RenderDrawLine (560, 160, 430,  10);  // Right side

    // Antennas
    SSDL_RenderDrawLine   (360, 140, 280,  40);
    SSDL_RenderDrawLine   (280,  40, 210,  90);
    SSDL_RenderDrawLine   (520, 140, 560,  40);
    SSDL_RenderDrawLine   (560,  40, 620,  80);

    SSDL_WaitKey ();                           // Wait for user to hit a key

    return 0;
}
