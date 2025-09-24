import matplotlib.pyplot as plt
import numpy as np

# 函数 f(r)= q/2*(wd)/(r^2+d^2)

def f(r, q=1.0, wd=1.0, d=1.0):
    return q / 2 * (wd) / (r**2 + d**2)

r = np.linspace(-5, 5, 400)
y = f(r, q=1.0, wd=1.0, d=1.0)

plt.plot(r, y)
plt.xlabel('r')
plt.ylabel('f(r)')
plt.title('Plot of f(r)')
plt.grid()
plt.show()