//konversi jam menit detik ke total detik
//konversi total detik ke jam menit dan detik
//mencari perbedaan dari 2 buah jam (program billing telepon / warnet)
//deklarasi:
Bilangan Bulat j1,m1,d1,td1,j2,m2,d2,td2,j3,m3,d3,td3
deskripsi program:
	
//masukan waktu awal ex	9:25:30
input(j1)
input(m1)
input(d1)

//masukan waktu akhir ex 10:25:30
input(j2)
input(m2)
input(d2)

///proses konversi waktu ke td
td1=konversi(j1,m1,d1)
td2=konversi(j2,m2,d2)

//operasi pengurangan
td3=td2-td1

//konversi td ke j3, m3, d3
j3,m3,d3 => (td3)

//tampilan layar ex 1:0:0
output(j3,m3,d3)
