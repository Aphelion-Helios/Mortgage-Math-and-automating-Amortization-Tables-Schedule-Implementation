# Simple Python Estimation for Monthly Mortgage Payment

m = 12

T = 30

r = 0.05

Mortgage_Amount = 120000



sqr_brackets = (1-(1+r/m)**(-m*T))/(r/m)

monthly_payment = Mortgage_Amount/sqr_brackets

    

print(monthly_payment)