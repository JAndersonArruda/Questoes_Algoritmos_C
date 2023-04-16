/*44. Escreva um programa que leia individualmente os valores dos quatro dígitos de um
valor em binário e calcule o seu valor correspondente em decimal.*/

#include <stdio.h>
const int Identificador1 = 10000000;
const int Identificador2 = 1000000;
const int Identificador3 = 100000;
const int Identificador4 = 10000;
const int Identificador5 = 1000;
const int Identificador6 = 100;
const int Identificador7 = 10;

int modificacaoHexadecimal(int valor1){
    int algarismo1 = valor1 / Identificador1;
    int resto = valor1 % Identificador1;
    int algarismo2 = resto / Identificador2;
    resto = resto % Identificador2;
    int algarismo3 = resto / Identificador3;
    resto = resto % Identificador3;
    int algarismo4 = resto / Identificador4;
    resto = resto % Identificador4;

    int algarismo5 = resto / Identificador5;
    resto = resto % Identificador5;
    int algarismo6 = resto / Identificador6;
    resto = resto % Identificador6;
    int algarismo7 = resto / Identificador7;
    int algarismo8 = resto % Identificador7;

    int fragmento1 = (algarismo5*Identificador5) + (algarismo6*Identificador6) + (algarismo7*Identificador7) + algarismo8;
    int fragmento2 = (algarismo1*Identificador5) + (algarismo2*Identificador6) + (algarismo3*Identificador7) + algarismo4;

    char numHexa[4];
    if(fragmento1 == 0000){
        if(fragmento2 == 0000){
            numHexa = "00";
        }else if(fragmento2 == 0001){
            numHexa = "10";
        }else if(fragmento2 == 0010){
            numHexa = "20";
        }else if(fragmento2 == 0011){
            numHexa = "30";
        }else if(fragmento2 == 0100){
            numHexa = "40";
        }else if(fragmento2 == 0101){
            numHexa = "50";
        }else if(fragmento2 == 0110){
            numHexa = "60";
        }else if(fragmento2 == 0111){
            numHexa = "70";
        }else if(fragmento2 == 1000){
            numHexa = "80";
        }else if(fragmento2 == 1001){
            numHexa = "90";
        }else if(fragmento2 == 1010){
            numHexa = "A0";
        }else if(fragmento2 == 1011){
            numHexa = "B0";
        }else if(fragmento2 == 1100){
            numHexa = "C0";
        }else if(fragmento2 == 1101){
            numHexa = "D0";
        }else if(fragmento2 == 1110){
            numHexa = "E0";
        }else if(fragmento2 == 1111){
            numHexa = "F0";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0001){
        if(fragmento2 == 0000){
            numHexa = "01";
        }else if(fragmento2 == 0001){
            numHexa = "11";
        }else if(fragmento2 == 0010){
            numHexa = "21";
        }else if(fragmento2 == 0011){
            numHexa = "31";
        }else if(fragmento2 == 0100){
            numHexa = "41";
        }else if(fragmento2 == 0101){
            numHexa = "51";
        }else if(fragmento2 == 0110){
            numHexa = "61";
        }else if(fragmento2 == 0111){
            numHexa = "71";
        }else if(fragmento2 == 1000){
            numHexa = "81";
        }else if(fragmento2 == 1001){
            numHexa = "91";
        }else if(fragmento2 == 1010){
            numHexa = "A1";
        }else if(fragmento2 == 1011){
            numHexa = "B1";
        }else if(fragmento2 == 1100){
            numHexa = "C1";
        }else if(fragmento2 == 1101){
            numHexa = "D1";
        }else if(fragmento2 == 1110){
            numHexa = "E1";
        }else if(fragmento2 == 1111){
            numHexa = "F1";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0010){
        if(fragmento2 == 0000){
            numHexa = "02";
        }else if(fragmento2 == 0001){
            numHexa = "12";
        }else if(fragmento2 == 0010){
            numHexa = "22";
        }else if(fragmento2 == 0011){
            numHexa = "32";
        }else if(fragmento2 == 0100){
            numHexa = "42";
        }else if(fragmento2 == 0101){
            numHexa = "52";
        }else if(fragmento2 == 0110){
            numHexa = "62";
        }else if(fragmento2 == 0111){
            numHexa = "72";
        }else if(fragmento2 == 1000){
            numHexa = "82";
        }else if(fragmento2 == 1001){
            numHexa = "92";
        }else if(fragmento2 == 1010){
            numHexa = "A2";
        }else if(fragmento2 == 1011){
            numHexa = "B2";
        }else if(fragmento2 == 1100){
            numHexa = "C2";
        }else if(fragmento2 == 1101){
            numHexa = "D2";
        }else if(fragmento2 == 1110){
            numHexa = "E2";
        }else if(fragmento2 == 1111){
            numHexa = "F2";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0011){
        if(fragmento2 == 0000){
            numHexa = "03";
        }else if(fragmento2 == 0001){
            numHexa = "13";
        }else if(fragmento2 == 0010){
            numHexa = "23";
        }else if(fragmento2 == 0011){
            numHexa = "33";
        }else if(fragmento2 == 0100){
            numHexa = "43";
        }else if(fragmento2 == 0101){
            numHexa = "53";
        }else if(fragmento2 == 0110){
            numHexa = "63";
        }else if(fragmento2 == 0111){
            numHexa = "73";
        }else if(fragmento2 == 1000){
            numHexa = "83";
        }else if(fragmento2 == 1001){
            numHexa = "93";
        }else if(fragmento2 == 1010){
            numHexa = "A3";
        }else if(fragmento2 == 1011){
            numHexa = "B3";
        }else if(fragmento2 == 1100){
            numHexa = "C3";
        }else if(fragmento2 == 1101){
            numHexa = "D3";
        }else if(fragmento2 == 1110){
            numHexa = "E3";
        }else if(fragmento2 == 1111){
            numHexa = "F3";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0100){
        if(fragmento2 == 0000){
            numHexa = "04";
        }else if(fragmento2 == 0001){
            numHexa = "14";
        }else if(fragmento2 == 0010){
            numHexa = "24";
        }else if(fragmento2 == 0011){
            numHexa = "34";
        }else if(fragmento2 == 0100){
            numHexa = "44";
        }else if(fragmento2 == 0101){
            numHexa = "54";
        }else if(fragmento2 == 0110){
            numHexa = "64";
        }else if(fragmento2 == 0111){
            numHexa = "74";
        }else if(fragmento2 == 1000){
            numHexa = "84";
        }else if(fragmento2 == 1001){
            numHexa = "94";
        }else if(fragmento2 == 1010){
            numHexa = "A4";
        }else if(fragmento2 == 1011){
            numHexa = "B4";
        }else if(fragmento2 == 1100){
            numHexa = "C4";
        }else if(fragmento2 == 1101){
            numHexa = "D4";
        }else if(fragmento2 == 1110){
            numHexa = "E4";
        }else if(fragmento2 == 1111){
            numHexa = "F4";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0101){
        if(fragmento2 == 0000){
            numHexa = "05";
        }else if(fragmento2 == 0001){
            numHexa = "15";
        }else if(fragmento2 == 0010){
            numHexa = "25";
        }else if(fragmento2 == 0011){
            numHexa = "35";
        }else if(fragmento2 == 0100){
            numHexa = "45";
        }else if(fragmento2 == 0101){
            numHexa = "55";
        }else if(fragmento2 == 0110){
            numHexa = "65";
        }else if(fragmento2 == 0111){
            numHexa = "75";
        }else if(fragmento2 == 1000){
            numHexa = "85";
        }else if(fragmento2 == 1001){
            numHexa = "95";
        }else if(fragmento2 == 1010){
            numHexa = "A5";
        }else if(fragmento2 == 1011){
            numHexa = "B5";
        }else if(fragmento2 == 1100){
            numHexa = "C5";
        }else if(fragmento2 == 1101){
            numHexa = "D5";
        }else if(fragmento2 == 1110){
            numHexa = "E5";
        }else if(fragmento2 == 1111){
            numHexa = "F5";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0110){
        if(fragmento2 == 0000){
            numHexa = "06";
        }else if(fragmento2 == 0001){
            numHexa = "16";
        }else if(fragmento2 == 0010){
            numHexa = "26";
        }else if(fragmento2 == 0011){
            numHexa = "36";
        }else if(fragmento2 == 0100){
            numHexa = "46";
        }else if(fragmento2 == 0101){
            numHexa = "56";
        }else if(fragmento2 == 0110){
            numHexa = "66";
        }else if(fragmento2 == 0111){
            numHexa = "76";
        }else if(fragmento2 == 1000){
            numHexa = "86";
        }else if(fragmento2 == 1001){
            numHexa = "96";
        }else if(fragmento2 == 1010){
            numHexa = "A6";
        }else if(fragmento2 == 1011){
            numHexa = "B6";
        }else if(fragmento2 == 1100){
            numHexa = "C6";
        }else if(fragmento2 == 1101){
            numHexa = "D6";
        }else if(fragmento2 == 1110){
            numHexa = "E6";
        }else if(fragmento2 == 1111){
            numHexa = "F6";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 0111){
        if(fragmento2 == 0000){
            numHexa = "07";
        }else if(fragmento2 == 0001){
            numHexa = "17";
        }else if(fragmento2 == 0010){
            numHexa = "27";
        }else if(fragmento2 == 0011){
            numHexa = "37";
        }else if(fragmento2 == 0100){
            numHexa = "47";
        }else if(fragmento2 == 0101){
            numHexa = "57";
        }else if(fragmento2 == 0110){
            numHexa = "67";
        }else if(fragmento2 == 0111){
            numHexa = "77";
        }else if(fragmento2 == 1000){
            numHexa = "87";
        }else if(fragmento2 == 1001){
            numHexa = "97";
        }else if(fragmento2 == 1010){
            numHexa = "A7";
        }else if(fragmento2 == 1011){
            numHexa = "B7";
        }else if(fragmento2 == 1100){
            numHexa = "C7";
        }else if(fragmento2 == 1101){
            numHexa = "D7";
        }else if(fragmento2 == 1110){
            numHexa = "E7";
        }else if(fragmento2 == 1111){
            numHexa = "F7";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1000){
        if(fragmento2 == 0000){
            numHexa = "08";
        }else if(fragmento2 == 0001){
            numHexa = "18";
        }else if(fragmento2 == 0010){
            numHexa = "28";
        }else if(fragmento2 == 0011){
            numHexa = "38";
        }else if(fragmento2 == 0100){
            numHexa = "48";
        }else if(fragmento2 == 0101){
            numHexa = "58";
        }else if(fragmento2 == 0110){
            numHexa = "68";
        }else if(fragmento2 == 0111){
            numHexa = "78";
        }else if(fragmento2 == 1000){
            numHexa = "88";
        }else if(fragmento2 == 1001){
            numHexa = "98";
        }else if(fragmento2 == 1010){
            numHexa = "A8";
        }else if(fragmento2 == 1011){
            numHexa = "B8";
        }else if(fragmento2 == 1100){
            numHexa = "C8";
        }else if(fragmento2 == 1101){
            numHexa = "D8";
        }else if(fragmento2 == 1110){
            numHexa = "E8";
        }else if(fragmento2 == 1111){
            numHexa = "F8";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1001){
        if(fragmento2 == 0000){
            numHexa = "09";
        }else if(fragmento2 == 0001){
            numHexa = "19";
        }else if(fragmento2 == 0010){
            numHexa = "29";
        }else if(fragmento2 == 0011){
            numHexa = "39";
        }else if(fragmento2 == 0100){
            numHexa = "49";
        }else if(fragmento2 == 0101){
            numHexa = "59";
        }else if(fragmento2 == 0110){
            numHexa = "69";
        }else if(fragmento2 == 0111){
            numHexa = "79";
        }else if(fragmento2 == 1000){
            numHexa = "89";
        }else if(fragmento2 == 1001){
            numHexa = "99";
        }else if(fragmento2 == 1010){
            numHexa = "A9";
        }else if(fragmento2 == 1011){
            numHexa = "B9";
        }else if(fragmento2 == 1100){
            numHexa = "C9";
        }else if(fragmento2 == 1101){
            numHexa = "D9";
        }else if(fragmento2 == 1110){
            numHexa = "E9";
        }else if(fragmento2 == 1111){
            numHexa = "F9";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1010){
        if(fragmento2 == 0000){
            numHexa = "0A";
        }else if(fragmento2 == 0001){
            numHexa = "1A";
        }else if(fragmento2 == 0010){
            numHexa = "2A";
        }else if(fragmento2 == 0011){
            numHexa = "3A";
        }else if(fragmento2 == 0100){
            numHexa = "4A";
        }else if(fragmento2 == 0101){
            numHexa = "5A";
        }else if(fragmento2 == 0110){
            numHexa = "6A";
        }else if(fragmento2 == 0111){
            numHexa = "7A";
        }else if(fragmento2 == 1000){
            numHexa = "8A";
        }else if(fragmento2 == 1001){
            numHexa = "9A";
        }else if(fragmento2 == 1010){
            numHexa = "AA";
        }else if(fragmento2 == 1011){
            numHexa = "BA";
        }else if(fragmento2 == 1100){
            numHexa = "CA";
        }else if(fragmento2 == 1101){
            numHexa = "DA";
        }else if(fragmento2 == 1110){
            numHexa = "EA";
        }else if(fragmento2 == 1111){
            numHexa = "FA";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1011){
        if(fragmento2 == 0000){
            numHexa = "0B";
        }else if(fragmento2 == 0001){
            numHexa = "1B";
        }else if(fragmento2 == 0010){
            numHexa = "2B";
        }else if(fragmento2 == 0011){
            numHexa = "3B";
        }else if(fragmento2 == 0100){
            numHexa = "4B";
        }else if(fragmento2 == 0101){
            numHexa = "5B";
        }else if(fragmento2 == 0110){
            numHexa = "6B";
        }else if(fragmento2 == 0111){
            numHexa = "7B";
        }else if(fragmento2 == 1000){
            numHexa = "8B";
        }else if(fragmento2 == 1001){
            numHexa = "9B";
        }else if(fragmento2 == 1010){
            numHexa = "AB";
        }else if(fragmento2 == 1011){
            numHexa = "BB";
        }else if(fragmento2 == 1100){
            numHexa = "CB";
        }else if(fragmento2 == 1101){
            numHexa = "DB";
        }else if(fragmento2 == 1110){
            numHexa = "EB";
        }else if(fragmento2 == 1111){
            numHexa = "FB";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1100){
        if(fragmento2 == 0000){
            numHexa = "0C";
        }else if(fragmento2 == 0001){
            numHexa = "1C";
        }else if(fragmento2 == 0010){
            numHexa = "2C";
        }else if(fragmento2 == 0011){
            numHexa = "3C";
        }else if(fragmento2 == 0100){
            numHexa = "4C";
        }else if(fragmento2 == 0101){
            numHexa = "5C";
        }else if(fragmento2 == 0110){
            numHexa = "6C";
        }else if(fragmento2 == 0111){
            numHexa = "7C";
        }else if(fragmento2 == 1000){
            numHexa = "8C";
        }else if(fragmento2 == 1001){
            numHexa = "9C";
        }else if(fragmento2 == 1010){
            numHexa = "AC";
        }else if(fragmento2 == 1011){
            numHexa = "BC";
        }else if(fragmento2 == 1100){
            numHexa = "CC";
        }else if(fragmento2 == 1101){
            numHexa = "DC";
        }else if(fragmento2 == 1110){
            numHexa = "EC";
        }else if(fragmento2 == 1111){
            numHexa = "FC";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1101){
        if(fragmento2 == 0000){
            numHexa = "0D";
        }else if(fragmento2 == 0001){
            numHexa = "1D";
        }else if(fragmento2 == 0010){
            numHexa = "2D";
        }else if(fragmento2 == 0011){
            numHexa = "3D";
        }else if(fragmento2 == 0100){
            numHexa = "4D";
        }else if(fragmento2 == 0101){
            numHexa = "5D";
        }else if(fragmento2 == 0110){
            numHexa = "6D";
        }else if(fragmento2 == 0111){
            numHexa = "7D";
        }else if(fragmento2 == 1000){
            numHexa = "8D";
        }else if(fragmento2 == 1001){
            numHexa = "9D";
        }else if(fragmento2 == 1010){
            numHexa = "AD";
        }else if(fragmento2 == 1011){
            numHexa = "BD";
        }else if(fragmento2 == 1100){
            numHexa = "CD";
        }else if(fragmento2 == 1101){
            numHexa = "DD";
        }else if(fragmento2 == 1110){
            numHexa = "ED";
        }else if(fragmento2 == 1111){
            numHexa = "FD";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1110){
        if(fragmento2 == 0000){
            numHexa = "0E";
        }else if(fragmento2 == 0001){
            numHexa = "1E";
        }else if(fragmento2 == 0010){
            numHexa = "2E";
        }else if(fragmento2 == 0011){
            numHexa = "3E";
        }else if(fragmento2 == 0100){
            numHexa = "4E";
        }else if(fragmento2 == 0101){
            numHexa = "5E";
        }else if(fragmento2 == 0110){
            numHexa = "6E";
        }else if(fragmento2 == 0111){
            numHexa = "7E";
        }else if(fragmento2 == 1000){
            numHexa = "8E";
        }else if(fragmento2 == 1001){
            numHexa = "9E";
        }else if(fragmento2 == 1010){
            numHexa = "AE";
        }else if(fragmento2 == 1011){
            numHexa = "BE";
        }else if(fragmento2 == 1100){
            numHexa = "CE";
        }else if(fragmento2 == 1101){
            numHexa = "DE";
        }else if(fragmento2 == 1110){
            numHexa = "EE";
        }else if(fragmento2 == 1111){
            numHexa = "FE";
        }else{
            printf("Ha algo errado!");
        }
    }else if(fragmento1 == 1111){
        if(fragmento2 == 0000){
            numHexa = "0F";
        }else if(fragmento2 == 0001){
            numHexa = "1F";
        }else if(fragmento2 == 0010){
            numHexa = "2F";
        }else if(fragmento2 == 0011){
            numHexa = "3F";
        }else if(fragmento2 == 0100){
            numHexa = "4F";
        }else if(fragmento2 == 0101){
            numHexa = "5F";
        }else if(fragmento2 == 0110){
            numHexa = "6F";
        }else if(fragmento2 == 0111){
            numHexa = "7F";
        }else if(fragmento2 == 1000){
            numHexa = "8F";
        }else if(fragmento2 == 1001){
            numHexa = "9F";
        }else if(fragmento2 == 1010){
            numHexa = "AF";
        }else if(fragmento2 == 1011){
            numHexa = "BF";
        }else if(fragmento2 == 1100){
            numHexa = "CF";
        }else if(fragmento2 == 1101){
            numHexa = "DF";
        }else if(fragmento2 == 1110){
            numHexa = "EF";
        }else if(fragmento2 == 1111){
            numHexa = "FF";
        }else{
            printf("Ha algo errado!");
        }
    }
    return numHexa;
}

void main(){
    int binario;
    printf("Informe o valor de um numero binario de 16 algarismos: "); // 0010 0100
    scanf("%d", &binario);
    char separacao_hexadicmal[4] = modificacaoHexadecimal(binario);
    printf("O valor em herxadecimal eh: %s", separacao_hexadicmal);
    getch();
}
