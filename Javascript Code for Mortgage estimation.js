function MortgagePay(PR, r, n,m) {

var SQR = (1 - Math.pow(1 + r/m, (-n*m)))/(r/m);

var PAY = PR/SQR;

  

return PAY;

}