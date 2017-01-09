from PIL import Image, ImageDraw
import math

image = Image.open("//home/user/PycharmProjects/Image(Blur)/Lena.jpg")
tool = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixel = image.load()
s = []
rad = int(input("Введите значение: "))
i = rad + 1

while i < width - (rad + 1):
    i += 1
    j = rad + 1
    while j < height - (rad + 1):
        R = float((pixel[i - rad, j - rad][0] * 0.5 + pixel[i - rad, j][0] * 0.75 + pixel[i - rad, j + rad][0] * 0.5
                    + pixel[i, j - rad][0] * 0.75 + pixel[i, j][0] * 1 + pixel[i, j + rad][0] * 0.75
                    + pixel[i + rad, j - rad][0] * 0.5 + pixel[i + rad, j][0] * 0.75 + pixel[i + rad, j + rad][
                        0]) * 0.5) // 3.3
        G = float((pixel[i - rad, j - rad][0] * 0.5 + pixel[i - rad, j][0] * 0.75 + pixel[i - rad, j + rad][0] * 0.5
                    + pixel[i, j - rad][0] * 0.75 + pixel[i, j][0] * 1 + pixel[i, j + rad][0] * 0.75
                    + pixel[i + rad, j - rad][0] * 0.5 + pixel[i + rad, j][0] * 0.75 + pixel[i + rad, j + rad][
                        0]) * 0.5) // 3.3
        B = float((pixel[i - rad, j - rad][0] * 0.5 + pixel[i - rad, j][0] * 0.75 + pixel[i - rad, j + rad][0] * 0.5
                    + pixel[i, j - rad][0] * 0.75 + pixel[i, j][0] * 1 + pixel[i, j + rad][0] * 0.75
                    + pixel[i + rad, j - rad][0] * 0.5 + pixel[i + rad, j][0] * 0.75 + pixel[i + rad, j + rad][
                        0]) * 0.5) // 3.3
        tool.point((i, j), (int(R), int(G), int(B)))
        j += 1
image.save("//home/user/PycharmProjects/Image(Blur)/Lena_mod.jpg", "JPEG")
del tool
