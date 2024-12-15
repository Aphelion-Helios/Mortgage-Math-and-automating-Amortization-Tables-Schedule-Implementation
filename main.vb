Function MortPayment(Principal, T, m, r)



SQRB = (1 - (1 + r / m) ^ (-T * m)) / (r / m)

MortPayment = Principal / SQRB



End Function