Program NajleszyCzas;
Var
        A,B,C:Real;
Begin
        ReadLn(A,B,C);
        If (A<=B) and (A<=C) Then WriteLn(A:0:3)
        Else If B<=C Then WriteLn(B:0:3)
        Else WriteLn(C:0:3)
End.

