Program pROG ;
Start Var Int_4 aAAA, bBBB, xXXX, iIII, jJJJ ;
Scan ( aAAA ) 
Scan ( bBBB )
For xXXX <- aAAA To bBBB Do
  Print ( xXXX ) ;
xXXX <- 0 ;
For iIII <- 1 To aAAA Do
    For jJJJ <- 1 To bBBB Do 
        xXXX <- xXXX ++ 1
Print (xXXX)
Finish
