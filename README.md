# MysticArtsLauncher

Mystic Arts （圣女之条件 / 神秘精灵） 修正补丁

主页与更新：https://github.com/SnDream/MysticArtsLauncher

# 修订内容

1. 使用dxwrapper的配置来规避大量图形的错误。
2. 使用dxwrapper修补游戏，延长过关结算帧的数量。这样就不会出现进入下一关死机的情况。
3. 使用自己编写的程序作为前端，让游戏认为自己处于调试中。并且在发现异常时直接忽略处理。不管怎么样，总之这样在通关时不会死机。
4. 选择合适的游戏素材，通关画面的STAFF图像不会花屏。

# 使用说明

运行 `Launcher.exe` 开始游戏。请不要使用原始的 `Mystic.exe` 程序运行，会导致游戏死机。

在 `dxwrapper.ini` 中可以进行一些配置，如窗口化运行、设置输出分辨率等，可以尝试自行修改配置以获得更好体验，但是请不要修改 `WriteMemory` 字段。

