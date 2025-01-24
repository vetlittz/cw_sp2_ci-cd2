Program pROG ; 
Start Var Int_4 vALU , dEVI , rEMI , cYCA , cYCB , cYCC ;
  Scan ( vALU )
  vALU <- vALU ++ 1
  For  cYCA <- 0 To 32767 Do
    dEVI <- vALU -- 1
    For  cYCB <- 0 To 32767 Do 
      If ( dEVI Ge 2 ) ; Else Goto eNDB ;
      rEMI <- vALU
      For  cYCC <- 0 To 32767 Do
        If ( rEMI Ge dEVI ) ; Else Goto eNDC ;
        rEMI <- rEMI -- dEVI
      ;
      eNDC :
      If ( rEMI Eg 0 ) Goto eNDB ;
      dEVI <- dEVI -- 1
    ;
    eNDB :
    If ( dEVI Eg 1 ) Goto eNDA ;
    vALU <- vALU ++ 1
  ;
  eNDA :
  Print ( vALU )
Finish

