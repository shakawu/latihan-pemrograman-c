#include <stdio.h>
#include <stdbool.h>

void cekSaldo(float saldo);
float melakukanDeposito();
float tarikSaldo(float saldo);

int main()
{
    int userInput = 0;
    float saldoPengguna = 0.0f;
    bool programBerjalan = true;

    while (programBerjalan)
    {
        printf("Silahkan Pilih Sebuah Opsi:\n\n");
        printf("1. Cek Saldo Rekening\n");
        printf("2. Melakukan Deposito\n");
        printf("3. Tarik Saldo\n");
        printf("4. Keluar\n");
        printf("Ketikkan Pilihanmu: ");
        scanf("%d", &userInput);

        switch (userInput)
        {
        case 1:
            cekSaldo(saldoPengguna);
            break;
        case 2:
            saldoPengguna += melakukanDeposito();
            break;
        case 3:
            saldoPengguna -= tarikSaldo(saldoPengguna);
            break;
        case 4:
            programBerjalan = false;
            printf("Terima Kasih Telah Menggunakan Layanan Kami.");
            break;
        default:
            printf("Mohon Maaf Input Yang Anda Ketik Tidak Valid.\nSilahkan Coba Lagi.");
            break;
        }
    }

    return 0;
}

void cekSaldo(float saldo)
{
    printf("Saldo Yang Anda Miliki Saat Ini\nBerjumlah: Rp.%.3f\n", saldo);
}

float melakukanDeposito()
{
    float saldoDeposit = 0.0f;
    bool berjalan = true;

    while (berjalan)
    {
        printf("Ketikkan Jumlah Uang Deposito: Rp.");
        scanf("%f", &saldoDeposit);

        if (saldoDeposit < 0)
        {
            printf("Saldo Yang Di Deposito Tidak Dapat Kurang Dari 0!\n");
        }
        {
            berjalan = false;
        }
    }

    return saldoDeposit;
}

float tarikSaldo(float saldo)
{
    float saldoPengguna = saldo;
    float jumlahSaldoYangDitarik = 0.0f;
    bool berjalan = true;

    while (berjalan)
    {
        printf("Saldo Kamu Saat Ini: %.3f\n", saldoPengguna);
        printf("Ketikkan Jumlah Saldo Yang Ingin Kamu Tarik: Rp.");
        scanf("%f", &jumlahSaldoYangDitarik);

        if (jumlahSaldoYangDitarik > saldoPengguna)
        {
            printf("Jumlah Saldo Anda Tidak Cukup!\n");
        }
        else if (jumlahSaldoYangDitarik < 0)
        {
            printf("Saldo Yang Ditarik Tidak Dapat Kurang Dari 0!\n");
        }
        else
        {
            berjalan = false;
        }
    }

    return jumlahSaldoYangDitarik;
}