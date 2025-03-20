import os

path = os.path.join(
    os.path.expanduser("~"),
    "3GP6-bot",
    "color.txt",
)

with open(path, "r") as file:
    content = file.read()
print(content)
