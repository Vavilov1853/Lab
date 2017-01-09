from PIL import Image, ImageDraw
import math

image = Image.open("//home/user/PycharmProjects/Image(Sobel)/Lena.jpg")
tool = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixel = image.load()

i = 2
for i in range(height - 1):
    j = 1
    for j in range(width - 1):
        X = ((1 * pixel[i + 1, j + 1][0] + pixel[i + 1, j][0] + pixel[i + 1, j + 1][0]) -
              (1 * pixel[i, j + 1][0] + pixel[i, j][0] + pixel[i, j + 1][0]))
        Y = ((1 * pixel[i + 1, j + 1][0] + pixel[i, j + 1][0] + pixel[i + 1, j + 1][0]) -
              (1 * pixel[i + 1, j][0] + pixel[i, j][0] + pixel[i + 1, j][0]))
        Sobel = int(math.sqrt(X * X + Y * Y))
        tool.point((i, j), (Sobel, Sobel, Sobel))
image.save("////home/user/PycharmProjects/Image(Sobel)/Lena_mod.jpg", "JPEG")
del tool