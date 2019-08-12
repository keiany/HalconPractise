//Halcon��
#include "HalconCpp.h"
using namespace HalconCpp;

//������
using namespace std;
#include <string>
#include <iostream>
#include <stdlib.h>
//��д����ͷ
#include "Hal.h"

int main()
{
	////Initlize
	string InstrumentPath = "D:/Ceshi/";
	//string InstrumentPath = "C:/Users/iwake/OneDrive - wake/Desktop/InspectionVehicle/InstrumentRecognition/";//�豸ʶ���ͼĿ¼,halcon����ģ��(/analog_0075.shm)Ŀ¼;ע��"/"��β!!!


	string ImageAnalogPath;//Analogͼ���ļ�·��
	double ResultAnalog;

	string ImageLedPath;//Ledͼ���ļ�·��
	string ResultLed;

	////Analog
	std::cout << "Analog:\n";

	ImageAnalogPath = InstrumentPath + "analog_0040.bmp";
	//OK
	/*ResultAnalog = Analog(InstrumentPath, ImageAnalogPath);
	std::cout << ResultAnalog << "\n";*/
	//Try
	HTuple hv_Exception;
	HTuple hv_ErrorCode;
	try
	{
		ResultAnalog = Analog(InstrumentPath, ImageAnalogPath);
		std::cout << ResultAnalog << "\n";
	}
	catch (HException &except) {
		std::cout << string(except.ErrorMessage()) << "\n";
	}

	////Led

	std::cout << "OCR:\n";

	ImageLedPath = InstrumentPath + "led_840.jpg";
	ResultLed = Led(ImageLedPath);
	std::cout << ResultLed << "\n";

	system("PAUSE ");
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
