Program Grzyby;
Var
        A,B,C:Integer;
Begin
        ReadLn(A,B,C);
        If (A>B) and (A>C) Then WriteLn('Muchomor')
        Else If (B>C) Then WriteLn('Borowik')
        Else WriteLn('Gaska')
End.