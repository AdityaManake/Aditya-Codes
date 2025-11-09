from scipy.stats import norm
dnorm=norm.pdf(x=3,loc=5,scale=2.58)
print(f"Dnorm:{dnorm:.4f}")
pnorm=norm.cdf(x=3,loc=5,scale=2.58)
print(f"Pnorm:{pnorm:.4f}")
