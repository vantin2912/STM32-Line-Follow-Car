# STM32 Line Following

## Pin Wiring
	I2C:
		B6: SDA
		B7: SCL

	L5696N:
		B15: Output M1
		A8: PWM M1
		A9: Output M2
		A10: PWM M2

	Sensor:
		A0->A7: 
		
	Servo:
		A11: 


## PCB Note
	Res 150 Ohm: 0805 SMD
	Res 1k Ohm: 0603 SMD
	Led Blue: 0805 SMD
	Led: Led siêu sáng
	Cap 0.1 uF: 0805 SMD
## Task ToDo
- Làm mạch đặt mạch (Done)
- Làm khung xe (Đức Working)
- ADC Read (Done)
- PWM (Done)
- Encoder Read (Tin Working)
- LCD I2C (Cần thiết)
- Button Process
- UART (optional)
- Điều khiển động cơ
- Điều khiển Servo


## Code Note
### Quy tắt đặt tên hàm:
	{Người viết hàm USR(1-3)}_{Đối tượng tác động}_{Hành động}();
	VD: USR1_Motor1_SetPWM()
		USR1: Tín
		USR2: Đức
		USR3: Dũng
	Mọi người có đề xuất hay ý kiến gì có thể thêm vào;
### ADC Note:
	Giá trị ADC đọc được lưu trong mảng ADC_Value[8];
### PWM Note
	Tần số 10kHZ
	Giá trị tham số truyền vào 0-6399