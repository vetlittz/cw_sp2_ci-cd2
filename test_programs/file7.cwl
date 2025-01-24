Program pROG ; 
Start Var Int_4 aAAA, bBBB ;
  Scan ( aAAA )
  Scan ( bBBB )
  While  aAAA Ge 1 
    aAAA <- aAAA -- 1
	If (aAAA Le bBBB) Exit While;
    Print ( aAAA )
  End While
Finish
