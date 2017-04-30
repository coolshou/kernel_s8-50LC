# Lenovo S8-50LC kernel
Lenovo S8-50LC kernel for Android 5.0, Lollipop 

# device
	intel baytrail Atom Z3745 1.33 GHz
	4G FDD LTE 	900(B8), 1800(B3)
	3G頻率 	WCDMA, HSDPA, HSUPA
	2G頻率 	GSM 850, GSM 1800, GSM 900, GSM 1900
	電池容量 	4290 mAh
	RAM記憶體 	2 GB
	ROM儲存空間 	16 GB
	主螢幕尺寸 	8 inch
	主螢幕解析度 	1920x1200 pixels
	主螢幕材質 	IPS
	主相機畫素 	800 萬畫素
	主相機感光元件 	CMOS
	主相機光圈F 	2.2
	主相機LED補光燈 	Yes
	主相機自動對焦 	Yes
	前相機畫素 	160 萬畫素
# build
	git clone https://github.com/coolshou/kernel_s8-50LC.git
	cd kernel_s8-50LC
	cd linux
	ln -s ../prebuilts .
	ln -s ../build_kernel.sh .
	./build_kernel.sh
it will put the compiled kernel in folder /out/target/product
and compiled module files in folder /out/target/product/root/lib/modules
