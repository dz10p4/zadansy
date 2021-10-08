Program Mediana;
Var
        A,B,C:Longint;
Begin
        ReadLn(A,B,C);
        If ((A<=B) and (A>=C)) or ((A>=B) and (A<=C)) Then WriteLn(A:6)
        Else If ((B<=A) and (B>=C)) or ((B>=A) and (B<=C)) Then WriteLn(B:6)
        Else WriteLn(C:6)
End.