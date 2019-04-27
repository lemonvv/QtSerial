#### 说明
	Windows QT5.11环境，使用Qt Creator创建的QT串口上位机，MinGw。
	刚接触QT，不是很熟悉，所以将就看着
	同时也是为了方便自己配置从机设备而写的上位机，自定义协议，下位机是基于stm32编写的。
	
####程序打包
	复制Release中的exe文件，放到新建目录
	然后，使用qt自带工具"Qt 5.11.0 for Desktop (MinGW 5.3.0 32 bit)" 切换到新建目录，使用"windeployqt"链接库
	最后使用Enigma Virtual Box打包
	
####版本
	V0.1