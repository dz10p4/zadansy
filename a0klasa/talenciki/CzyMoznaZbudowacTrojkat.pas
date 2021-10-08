Program CzyMoznaZbudowacTrojkat;
Var
        A,B,C:Real;
Begin
        ReadLn(A,B,C);
        If (A+B>C) and (A+C>B) and (B+C>A) Then WriteLn('TAK')
        Else WriteLn('NIE')
End.

