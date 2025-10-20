# 生成三幅图
# RGB 从（0, 0, 0）到（0, 0, 255）
# RGB 从（0, 0, 0）到（0, 255, 0）
# RGB 从（0, 0, 0）到（255, 0, 0）

import matplotlib.pyplot as plt
import numpy as np
import os

def make_gradient_image(target_channel, width=512, height=80):
    """
    target_channel: 0=R,1=G,2=B
    返回 uint8 RGB 图像，左侧黑->右侧颜色渐变
    """
    grad = np.linspace(0, 255, width, dtype=np.uint8)
    img = np.zeros((height, width, 3), dtype=np.uint8)
    img[:, :, target_channel] = np.tile(grad, (height, 1))
    return img

def save_gradient(img, outpath):
    plt.figure(figsize=(8, 1.5), dpi=100)
    plt.imshow(img)
    plt.axis('off')
    plt.subplots_adjust(left=0, right=1, top=1, bottom=0)
    plt.savefig(outpath, bbox_inches='tight', pad_inches=0)
    plt.close()

def main():
    outdir = os.path.join(os.path.dirname(__file__), "output")
    os.makedirs(outdir, exist_ok=True)

    imgs = [
        (make_gradient_image(2), "gradient_blue.png"),   # B
        (make_gradient_image(1), "gradient_green.png"),  # G
        (make_gradient_image(0), "gradient_red.png"),    # R
    ]

    for img, name in imgs:
        path = os.path.join(outdir, name)
        save_gradient(img, path)
        print("Saved:", path)

if __name__ == "__main__":
    main()