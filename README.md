# 项目简介
在TP79上测试STM32的hal库+UCOSII+emWin

## 硬件平台
芯片：STM32F103VE
通信模块：移远EC20
显示屏尺寸：160*128

## 使用工具
STM32cubeMX：ST公司官方工具，以图形化界面配置STM32的驱动
MDK 5：编译&下载
## 注意事项
* 显示的图片是用Img2Lcd生成的数组，Img2Lcd工具参数配置见下图：
![Img2Lcd工具参数截图](https://raw.githubusercontent.com/gaozichen2012/TP79-hal-ucosii-emwin/master/Image2Lcd%E8%BD%AF%E4%BB%B6%E6%88%AA%E5%9B%BE.png)
## 项目记录
### 2019.10.16
新建项目，使用STM32cubeMX一键配置，测试LED闪烁正常

### 2019.10.17
新加显示屏驱动，显示图片正常

