Program DU;
Var
        A:Real;
Begin
        ReadLn(A);
        If A<0 Then WriteLn('UJEMNA')
        Else WriteLn('DODATNIA');
        WriteLn(Abs(A):0:3)
End.