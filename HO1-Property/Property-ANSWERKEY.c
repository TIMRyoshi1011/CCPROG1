/* Problem : Property

   Name: 
   Section:
*/

/* To Do: READ and FOLLOW these
   Requirements and Restrictions:
   1. You are not allowed to add or remove #include
      statements.
   2. You are not allowed to change the function 
      header (parameter list and return type).
   3. You are only allowed to use statements taught
      in class. Use of exit(), goto(), calling of main()
	  will result to a 0 for this problem. 
   4. You are NOT allowed to have any scanf() statements
      in the final copy of this file. Only printSummary()
	  can have the completed printf() statements. That is,
	  you may have them while you are testing/debugging
	  your code, but these should not be in the final 
	  uploaded answer.
*/

#include "property.h"

/* To Do: Implement the function based on the 
          following specs. [10pts]
   
   This function computes for the total area
   that can be built on, given the restriction
   of the village.
   
   Pre-condition: fPropArea is non-negative
   
   @param fPropArea - the property area being sold,
                      unit is in square meters
   @param nBuildPercent - the percentage allowed to 
                        be built on.  						
   @return the size of the property that can be 
           built on, unit is in square meters.  

   Example:  if fPropArea is 315.75 square meters,
                nBuildPercent is 75, then only 
				75% of 315.75 can be built on, so
				the function should return 236.8125

		   
*/
float
getBuildSize(float fPropArea, int nBuildPercent)
{
   return fPropArea * (nBuildPercent / 100.0);
}

/* To Do: Implement the function based on the 
          following specs. [5pts]
   
   This function computes for the number of rooms
   that can fit in the build size.
   
   Pre-condition: all parameters are positive values
   
   @param nMinSqM - minimum size of each room required by 
                    buyer
   @param fBSize - area that can be built on,
                      unit is in square meters
   @return the number of rooms each of nMinSqM size that can fit in fBSize.  

   Example:  if nMinSqM is 20 square meters and fBSize is 236.81 square meters, then the function
				should return 11
*/
int
computeRoomsPerFloor(int nMinSqM, float fBuildSize)
{
   int rooms = fBuildSize / nMinSqM;
   return rooms;
}


/* To Do: Implement the function based on the 
          following specs.[10pts]
   
   This function extracts the information given 
   into the parts.   
   
   @param nReq - all requirements of the buyer
                 represented as a 5-digit integer.
				 Use the following as reference for the
				 format of the given integer: RCSSS
				   R - total rooms, assume to
				       be from 1 to 9 only
				   C - 1 for high ceiling, 
				       0 for regular ceiling
				   SSS - the rightmost 3 digits refer to
                  		 the minimum size of each room, 
						 in square meters

   @param pHighCeil - address where the requirement 
                      (or non-requirement) will be stored
   @param pRooms - address where the number of rooms 
                   will be stored
   @param pMinSqM - address where the minimum size of 
                    each room will be stored  

   Examples: 
   (1) if nReq = 31020, this means the value for high
             ceiling is 1, the number of rooms is 3, and
             each room should be at least 20 square meters.
   (2) if nReq = 50120, this means the value for high
             ceiling is 0, the number of rooms is 5, and
             each room should be at least 120 square meters.

*/   
void
extractReqt(int nReq, int * pHighCeil,
            int * pRooms, int * pMinSqM)
{
	*pRooms = nReq / 10000;
	*pHighCeil= nReq / 1000 % 10;
	*pMinSqM = nReq % 1000;
}

/* To Do: Complete the function based on the 
          following specs. [10pts]
   
   This function displays the Summary of results.
   Note that all strings occupy 18 spaces, all 
   integers occupy 5 spaces, and all floats occupy
   8 spaces including the decimal point and 2 
   decimal places.
   
   @param fBuildSize - area that can be built on,
                      unit is in square meters
   @param fOpen - area that cannot be built on, 
					  unit is in square meters
   @param nHighCeil - 1 if buyer wants high ceiling and
                      contains 0 if not needed
   @param nRooms - number of rooms needed by buyer, this
                   count already includes living room,
				   kitchen, etc., but excludes space
				   needed for high ceiling, if appropriate
   @param nSize - minimum size of each room required by 
                    buyer   

   Additional requirements: 
     1. Solution should use the defined constants provided and 
	    solution should employ use of formatting for the alignment 
		(not spaces or tab), i.e. no space or tab allowed in 
		the format string requirement.
	 2. No conditional statements or ternary operator allowed in 
	    this solution.
	 3. Violation of any or all of the requirements will invalidate
        any scores or solution in this function.	 
                . 
*/
void
printSummary(float fBuildSize, float fOpen, 
          int nHighCeil, int nRooms, int nSize)
{  
   printf("\nSummary:\n"); 		  
   printf("%-18s%8.2f\n", STRING1, fBuildSize); 
   printf("%-18s%8.2f\n", STRING2, fOpen); 
   printf("\nBuyer Needs:\n" );
   printf("%18s%5d\n", STRING3, nHighCeil); 
   printf("%18s%5d\n", STRING4, nRooms); 
   printf("%18s%5d\n", STRING5, nSize);    
} 

/* To Do: Implement the function based on the 
          following specs. [15pts]
   
   This function determines if the requirements of the
   buyer can be met by the restrictions of the village.
   
   @param fBuildSize - area that can be built on,
                      unit is in square meters
   @param fOpenSpace - area that cannot be built on,
				      unit is in square meters
   @param nMaxFloors - maximum number of floors that
                       can be built on the land   
   @param nReq - all requirements of the buyer
                 represented as a 5-digit integer  
   @return 1 if the requirements of the buyer can be 
             met, and returns 0 otherwise

   Additional requirement: 
       1. Follow the flowchart in the pdf file.
	   2. Solution should NOT have the ternary operator or 
	         any conditional statements.  Violation of this 
             requirement will result to deductions.

   Hint: relational and/or logical expression in return statement 
*/
int
okToBuy(float fBuildSize, float fOpenSpace, int nMaxFloors, 
        int nReq)
{   
    int nRoomsPerFloor;
	int nHigh, //1 if buyer wants high ceiling and
                   //	contains 0 if not needed
	    nRooms,  //number of rooms needed by buyer
		nMinSqM; // minimum size of each room required by buyer

    //call function extractReqt() */
	extractReqt(nReq, &nHigh, &nRooms, &nMinSqM);
	
    //call function computeRoomsPerFloor() 
    nRoomsPerFloor = computeRoomsPerFloor(nMinSqM,fBuildSize);
	
	//call printSummary()
	printSummary(fBuildSize, fOpenSpace, nHigh, nRooms, nMinSqM);
	
	return (nRoomsPerFloor >= 1 && 
	        nMaxFloors * nRoomsPerFloor >= nRooms);
}