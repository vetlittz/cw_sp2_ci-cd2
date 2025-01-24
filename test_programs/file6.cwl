Program pROG ; 
Start Var Int_4 aAAA ;
  Scan ( aAAA )
  While  aAAA Ge 1 
    aAAA <- aAAA -- 1
	If ( aAAA Mod 2) Continue While;
    Print ( aAAA )
  End While
Finish
