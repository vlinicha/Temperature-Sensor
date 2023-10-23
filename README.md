# Temperature-Sensor
# Nama : Alvlinicha Nadya Anindita

# ALAT DAN BAHAN :
1.	Komputer
2.	Arduino 
3.	Sensor suhu DS18B20
4.	Adapter DS18B20
5.	Kabel USB 2.0 Type A Male to Male 
6.	Kabel Jumper Male to Female


# LANGKAH KERJA :
1. Langkah pertama anda harus menginstal software Arduino IDE pada komputer anda. 
2. Setelah menginstal software Arduino IDE dibutuhkan juga library sensor suhu DS18B20 terlebih dahulu,berikut linknya  (https://github.com/matmunk/DS18B20).
3. Lalu untuk menginstal library sensor suhu DS18B20, maka masukkan link library pada menu preference pada  Arduino IDE (cara penginstalan library dan penambahan board ada pada file di atas) lalu tekan tombol "OK".
4. Jika librarynya sudah terinstal dan ditambahkan, maka anda bisa mulai memasukkan programnya (contoh program ada pada file "sensor_kelembapan" diatas). 
5. Setelah library ditambahkan maka program dapat dimasukkan dan jangan lupa di upload ke Arduino, kemudian buka serial monitor untuk mengetahui apakah program dapat berjalan dengan benar. 
6. Lalu siapkan beberapa jenis benda seperti (air dan tanah panas) yang ingin diketahui nilai suhu nya.
7. Masukkan alat sensor suhu DS18B20 ke dalam beberapa jenis benda tersebut, diamkan beberapa saat hingga nilai suhu yang muncul di serial monitor stabil.


# WIRING/PENGKABELAN :
1. Hubungkan kabel sensor suhu DS18B20 dengan adapter DS18B20
- hubungkan kabel kuning pada sensor suhu DS18B20 dengan pin out D0 adapter DS18B20
- hubungkan kabel hitam pada sensor suhu DS18B20 dengan pin out GND adapter DS18B20
- hubungkan kabel merah pada sensor suhu DS18B20 dengan pin out VCC adapter DS18B20
2. Setelah terhubung , pasang kabel jumper wires male to female untuk menghubungkan adapter DS18B20 dengan pin - pin di Arduino.
- sambungkan pin VCC Arduino dengan VCC adapter DS18B20
- sambungkan pin GND Arduino dengan GND adapter DS18B20
- sambungkan pin 4 (pin digital) Arduino dengan SIG adapter DS18B20
3. Jika sudah, hubungkan arduino dengan computer menggunakan kabel USB 2.0 type A.

  LAKUKAN SESUAI INTRUKSI DI ATAS, SEMOGA BERHASIL 😉😉
