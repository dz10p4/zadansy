Program IleCukierkow;
Var
        K:Longint;
Begin
        ReadLn(K);
        If (K mod 2) = 0 Then WriteLn('PARZYSTA')
        Else WriteLn('NIEPARZYSTA');
        WriteLn((K div 2):6)
End.

