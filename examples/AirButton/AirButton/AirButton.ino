#include <Airhmi.h>

AirButton b0 = AirButton("EButton1");
AirLabel t0 = AirLabel("t0");
AirGauge g0 = AirGauge( "Gauage1");

char buffer[100] = {0};

void b0PopCallback(void *ptr)
{
  // Butona basıldığında yapılacak işlemler
  t0.setText("Hello, AirHMI!"); // Ekran üzerindeki metin nesnesini güncelle
  
}

AirTouch *air_listen_list[] = {
  &b0,
  NULL
};

void setup()
{
  Serial.begin(115200);
  airInit();

  // Butonun pop olayına dinleyici ekleyin
  b0.attachPop(b0PopCallback, &b0);
}

void loop()
{
 
  airLoop(air_listen_list);
  
  //b0.setText("xxxxas");
  //b0.Set_background_color(123123123);
  //b0.Set_background_colorTo(1234);
  //b0.Set_press_background_color(345);
  //b0.Set_press_background_colorTo(3452);
  //b0.Set_pen_width(5);
  //b0.Set_pen_color(234234);
  //b0.Set_pen_colorRGB("#123123");
  //b0.Set_font_size(12);
  //b0.setFont("Arial");
  
  //b0.Set_font_color(2342);
  //delay(1000);
  //b0.Set_font_colorRGB("#2342442");
  //b0.Set_visible(1);
  //delay(1000);
  //b0.Set_visible(0);
  //b0.Set_active(0);
  //b0.Set_left(100);
  //b0.Set_top(100);
  //b0.Set_width(500);
  //b0.Set_height(100);

  //char data[20];
  //memset(data, 0, sizeof(data));
  //b0.getText(data, 20);
  //Serial.println("Reciived data:");
  //Serial.println(data);
  
  //uint32_t number = 0;
  //b0.Get_background_color(&number);
  //Serial.print("Result:");
  //Serial.println(number);
  
  g0.Set_visible(1);

  delay(1000);

  // İhtiyaca göre diğer işlemleri gerçekleştir
}
  