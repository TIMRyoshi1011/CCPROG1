/* This file should not be editted, except for line 11 to indicate
   the filename with your surname, eg. Property-Santos.c.

   This file will not be submitted.
 
   You can choose to comment out some of the statements if you are
   testing specific items.  For example, comment out codes starting
   from line 30 if you are testing getBuildSize() only.
*/

#include  "Property-<Lastname>.c" // replace filename

int 
main()
{
    float fSizeForSale;
	int   nPercent, nMaxFloors;
	float fBuildSize;
	int   nReq, 
		  nRooms;     //number of rooms buyer requirement

	/* Testing getBuildSize() */
	printf("\nTesting getBuildSize() = %.2f\n", 
	       getBuildSize(5678.92, 82));
	
	/* Testing computeRoomsPerFloor() */
	nRooms = computeRoomsPerFloor(41, 2143.59);
	printf("Testing computeRoomsPerFloor() = %d\n", nRooms);
    nRooms = -888;
	
	/* Testing extractReqt(), note that random variables are
       used here. */
	extractReqt(90801, &nPercent, &nMaxFloors, &nReq);
	printf("Testing extractReqt():\nR = %d; C = %d; SSS = %d\n", 
	       nMaxFloors, nPercent, nReq);
	nPercent = nReq = nMaxFloors = -888;

    /* Testing printSummary(), using random values just to 
       check spacing and formatting */
	printf("Testing printSummary():");
	printSummary(20638.9, 111.22, 1, 3, 45); 
	
	/* Overall program testing, including okToBuy() */
	
	printf("Enter property size for sale: ");
	scanf("%f", &fSizeForSale);
	printf("Enter percentage of property that can be built on: ");
	scanf("%d", &nPercent);
	printf("Enter maximum floors for this property: ");
	scanf("%d", &nMaxFloors);
	printf("Enter requirement of buyer: ");
	scanf("%d", &nReq);
	
	fBuildSize = getBuildSize(fSizeForSale, nPercent);

    if (okToBuy(fBuildSize, fSizeForSale - fBuildSize,
            	nMaxFloors, nReq) == 0)
	     printf("\nBuyer requirement is NOT ");
    else printf("\nBuyer requirement is ");
    printf("met by this property.\n\n");	   
	
    return 0;
}