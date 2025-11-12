/* This file should not be editted. This file will not be submitted.
*/

#include <stdio.h>

#define STRING1 "Build space"
#define STRING2 "Open space"
#define STRING3 "High Ceiling"
#define STRING4 "Rooms"
#define STRING5 "Size"

float getBuildSize(float fPropArea, int nBuildPercent);
int computeRoomsPerFloor(int nMinSqM, float fBSize);
void extractReqt(int nReq, int * pHighCeil,
                 int * pRooms, int * pMinSqM);
void printSummary(float fBuildSize, float fOpen, 
          int nHighCeil, int nRooms, int nSize);
int okToBuy(float fBuildSize, float fOpenSpace, int nMaxFloors, 
        int nReq);