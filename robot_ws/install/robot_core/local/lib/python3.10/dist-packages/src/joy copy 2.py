import matplotlib.pyplot as plt
import numpy as np
from math import pi


def dh_transform(alpha, a, d, theta):
    return np.array(
        [
            [np.cos(theta), -np.sin(theta), 0, a],
            [
                np.sin(theta) * np.cos(alpha),
                np.cos(theta) * np.cos(alpha),
                -np.sin(alpha),
                -d * np.sin(alpha),
            ],
            [
                np.sin(theta) * np.sin(alpha),
                np.cos(theta) * np.sin(alpha),
                np.cos(alpha),
                d * np.cos(alpha),
            ],
            [0, 0, 0, 1],
        ]
    )


def forward_kinematics(l1, th1, d1, d2):
    return np.array([d2 * np.sin(th1), d2 * np.cos(th1), d1 + l1])


l3 = -0.1

th1 = 0
d1 = 0.3
d2 = 0.3

# alpha, a, d, theta
dh_table = [(0, 0, 0, th1), (0, 0, d1 + l3, 0), (-pi / 2, 0, d2, 0)]
point = [0, 0, 0, 1]
transform_matrix = np.eye(4)

x = []
y = []
z = []

fig = plt.figure()
ax = fig.add_subplot(111, projection="3d")

for index, item in enumerate(dh_table):
    alpha, a, d, theta = item
    transform_matrix @= dh_transform(alpha, a, d, theta)
    vector_point = transform_matrix @ point
    x.append(vector_point[0])
    y.append(vector_point[1])
    z.append(vector_point[2])
    ax.text(
        x[index],
        y[index],
        z[index],
        f"joint{index}",
        color="black",
        fontsize=12,
        ha="right",
    )

print(forward_kinematics(l3, th1, d1, d2))
print(x[-1], y[-1], z[-1])

ax.scatter(x, y, z, color="r", s=100, label="Points")
ax.plot(x, y, z, color="b", linestyle="-", linewidth=2, label="Line")
ax.set_xlabel("X axis")
ax.set_ylabel("Y axis")
ax.set_zlabel("Z axis")
ax.set_title("3D Plot with Two Points and Line")
ax.legend()
plt.show()
