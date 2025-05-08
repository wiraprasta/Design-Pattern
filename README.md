Pertanyaan Refleksi
1. Apa perbedaan struktur antara Observer dan Mediator di kasus ini?
- Perbedaan struktur antara observer pattern dan mediator pattern terletak pada cara
objek saling berinteraksi. Observer pattern memungkinkan objek (observer) untuk
berlangganan perubahan pada objek lain (subjek), sedangkan mediator pattern
memusatkan interaksi antar objek melalui satu objek.
2. Dalam skala game kecil, mana yang lebih praktis? Kenapa?
- Antara observer pattern dan mediator pattern, lebih praktis observer pattern
ketimbang mediator pattern dari segi sakala game kecil. Karena implementasi
observer pattern lebih cepat dan tidak perlu menggunakan kelas tambahan
sehingga bisa digunakan untuk event system yang sederhana. seperti contoh pada
game flappy bird, dalam game tersebut ketika kita melakukan interaksi tap, akan
menyalakan sfx suara loncatan yang merupakan event system sederhana.
3. Dalam skala game besar (dengan banyak event), mana yang lebih scalable? Kenapa?
- Antara observer pattern dan mediator pattern, lebih scalable mediator pattern
ketimbang observer pattern dari segi skala game besar. Karena mediator pattern
dapat menyederhanakan komunikasi yang banyak. Misalnya mediator bertindak
sebagai central hub (Semua objek tidak saling berbicara langsung, tapi lewat satu
“perantara” yaitu Mediator) untuk semua komunikasi dan memudahkan uji coba
dan pemeliharaan. Seperti contoh pada perubahan logika interaksi hanya terjadi
pada mediator nya saja dan tidak termasuk pada objek yang terlibat. Selain itu
mediator juga cocok untuk sistem modular kompleks seperti AI yang saling
berkoordinasi.

4. Sebutkan satu risiko yang harus diwaspadai saat memakai masing-masing pattern!
- Resiko mediator pattern : Mediator pattern bisa menjadi bottleneck jika tidak
dirancang dengan baik. Jika mediator tidak bisa menangani permintaan dengan
cepat, maka kolaborator juga akan tertunda.
- Resiko observer pattern : Observer pattern bisa menyebabkan performa aplikasi
menurun, terutama jika ada banyak observer dan setiap pemberitahuan
membutuhkan proses yang berat.
