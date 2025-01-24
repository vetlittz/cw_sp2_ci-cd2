Program pROG ;
Start Var Int_4 aAAA , bBBB , cCCC;
  Scan (aAAA)
  Scan (bBBB)
   Scan (cCCC)
    If ( aAAA Eg bBBB ) ; Else Goto cALU ;
      Goto bALU
 cALU :
  Print ( 0 )
  Goto eNAS
   bALU :
     If( aAAA Eg cCCC) ; Else Goto cALU ;
      Print ( 1 )
eNAS:
  Scan (aAAA)
Finish
 
