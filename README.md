# 项目简介
在TP79上测试STM32的hal库+UCOSII+emWin

## 硬件平台
* 芯片：STM32F103VE
* 通信模块：移远EC20
* 显示屏尺寸：160*128
* 显示屏驱动IC：ST7735
* 字库IC：高通GT21L16S2Y

## 使用工具
* STM32cubeMX：ST公司官方工具，以图形化界面配置STM32的驱动
* MDK 5：编译&下载
## 注意事项
* 测试bootloader时出现死机的现象，排查后发现HAL_delay函数异常，死在SysTick_Handler中断，原因是在bootloader中关闭了总中断，需要在app中打开总中断
* 添加bootloader的app程序工程配置如下图，起始地址为0x8004000：
![app起始地址MDK工程配置](https://github.com/gaozichen2012/TP79-hal-ucosii-emwin/blob/master/app%E8%B5%B7%E5%A7%8B%E5%9C%B0%E5%9D%80MDK%E5%B7%A5%E7%A8%8B%E9%85%8D%E7%BD%AE.png)
* 显示的图片是用Img2Lcd生成的数组，Img2Lcd工具参数配置见下图：
![Img2Lcd工具参数截图](https://raw.githubusercontent.com/gaozichen2012/TP79-hal-ucosii-emwin/master/Image2Lcd%E8%BD%AF%E4%BB%B6%E6%88%AA%E5%9B%BE.png)
## 项目记录
### 2019.10.23
新加STemWin测试正常，
### 2019.10.21
新加bootloader驱动，测试正常可以正常跳转
### 2019.10.20
新加字库驱动，显示中英文正常，显示混合中英文正常
### 2019.10.17
新加显示屏驱动，显示图片正常
### 2019.10.16
新建项目，使用STM32cubeMX一键配置，测试LED闪烁正常

## 技术点整理
### bootloader
bootloader的目的是为了在正式产品中实现串口升级或者远程升级，如果产品出现重大bug需要修复，客户可以直接操作升级，而不需要返厂；
单片机的bootloader第一步是要实现从bootloader到app的成功跳转，在本bootloader中运行完boot跳转到app的起始地址0x8004000

### STemWin移植
大多数使用STemWin的显示屏都是FSMC接口的，一些小屏则使用SPI接口，本项目采用的屏就是ST7735驱动SPI串口屏

