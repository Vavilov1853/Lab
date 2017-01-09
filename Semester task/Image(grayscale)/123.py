from PIL import Image, ImageDraw

image = Image.open("//home/user/PycharmProjects/untitled/Lena.jpg")
tool = ImageDraw.Draw(image)
width = image.size[0]
height = image.size[1]
pixel = image.load()

for i in range(width):
    for j in range(height):
        a = pixel[i, j][0]
        b = pixel[i, j][1]
        c = pixel[i, j][2]
        grayscale = (a + b + c) // 3
        tool.point((i, j), (grayscale, grayscale, grayscale))
image.save("//home/user/PycharmProjects/untitled/Lena_mod.jpg", "JPEG")
del tool