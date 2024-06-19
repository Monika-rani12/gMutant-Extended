  #include<stdio.h>
  #ifdef LLBMC
  #include <llbmc.h>
  #else
  //removed
  #endif
  
  #define BOUND 1 //BOUND 5
  int kappa;
  int input,output;
  #include <assert.h>
  #include <math.h>
  #include <stdlib.h>
  
  
  int check1(int v);
  void update(int a, int b, int c);
  int getInt();
  
  static int a156 = 11;
  
  int check1(int v)
  {
  int temp;
printf("POINT: 1\n");

  if(a156 == v){
printf("POINT: 2\n");
  temp=1;
  }
  else{
  temp=0;}
  return (temp);
  }
  
  void update(int a, int b, int c)
  {
  a156 = ((a - b) + c);
  }
  
  int getInt()
  {
  return a156;
  }
  
  // inputs
  int inputs[] = {2,5,3,1,4};
  
  
  int a122 = 2;
  int a57 = 2;
  int a114 = 11;
  int a4 = 10;
  int a50 = 3;
  int a142 = 11;
  int a176 = 6;
  int a28 = 8;
  int a134 = 7;
  int a62 = 12;
  int a94 = 11;
  int a23 = 11;
  int a193 = 2;
  int a35 = 6;
  int a148 = 9;
  int a150 = 9;
  int a138 = 9;
  int a111 = 13;
  int a90 = 7;
  int a89 = 7;
  int a38 = 10;
  int a49 = 2;
  int a44 = 12;
  int a13 = 1;
  int a84 = 17;
  int a180 = 15;
  int a182 = 7;
  int a108 = 3;
  int a188 = 13;
  int a117 = 5;
  int a80 = 9;
  int a172 = 11;
  int a11 = 6;
  int a47 = 4;
  int a137 = 9;
  int cf = 1;
  int a113 = 7;
  int a64 = 10;
  int a15 = 6;
  int a164 = 6;
  int a66 = 7;
  int a92 = 8;
  int a5 = 8;
  int a14 = 1;
  int a140 = 3;
  int a185 = 3;
  int a55 = 8;
  int a153 = 10;
  int a159 = 10;
  int a51 = 1;
  int a112 = 1;
  int a125 = 1;
  int a21 = 1;
  int a191 = 1;
  int a16 = 1;
  int a199 = 1;
  int a128 = 1;
  int a72 = 1;
  int a102 = 0;
  int a116 = 3;
  int a68 = 1;
  int a177 = 1;
  int a93 = 1;
  int a157 = 0;
  int a30 = 1;
  int a110 = 1;
  int a160 = 1;
  int a197 = 2;
  int a98 = 1;
  int a8 = 1;
  int a40 = 1;
  int a18 = 1;
  int a86 = 1;
  int a24 = 1;
  int a26 = 1;
  int a32 = 1;
  int a198 = 1;
  int a144 = 1;
  int a129 = 1;
  int a165 = 1;
  int a58 = 3;
  
  
  void errorCheck() {
printf("POINT: 3\n");

  if((((a92==10) && (a11==5)) && (a28==5))){
printf("POINT: 4\n");
  cf = 0;
  //error_ 0: assert(!//error_ 0);
  }
printf("POINT: 5\n");

  if((((a148==5) && (a23==10)) && (a28==9))){
printf("POINT: 6\n");
  cf = 0;
  //error_ 1: assert(!//error_ 1);
  }
printf("POINT: 7\n");

  if((((a4==14) && (a23==11)) && (a28==9))){
printf("POINT: 8\n");
  cf = 0;
  //error_ 2: assert(!//error_ 2);
  }
printf("POINT: 9\n");

  if((((a14==3) && (a193==6)) && (a28==4))){
printf("POINT: 10\n");
  cf = 0;
  //error_ 3: assert(!//error_ 3);
  }
printf("POINT: 11\n");

  if((((a38==10) && (check1(8))) && (a28==8))){
printf("POINT: 12\n");
  cf = 0;
  //error_ 4: assert(!//error_ 4);
  }
printf("POINT: 13\n");

  if((((a49==6) && (a5==5)) && (a28==7))){
printf("POINT: 14\n");
  cf = 0;
  //error_ 5: assert(!//error_ 5);
  }
printf("POINT: 15\n");

  if((((a185==3) && (a159==9)) && (a28==10))){
printf("POINT: 16\n");
  cf = 0;
  //error_ 6: assert(!//error_ 6);
  }
printf("POINT: 17\n");

  if((((a113==5) && (a23==12)) && (a28==9))){
printf("POINT: 18\n");
  cf = 0;
  //error_ 7: assert(!//error_ 7);
  }
printf("POINT: 19\n");

  if((((a108==10) && (a182==5)) && (a28==11))){
printf("POINT: 20\n");
  cf = 0;
  //error_ 8: assert(!//error_ 8);
  }
printf("POINT: 21\n");

  if((((a94==15) && (a5==11)) && (a28==7))){
printf("POINT: 22\n");
  cf = 0;
  //error_ 9: assert(!//error_ 9);
  }
printf("POINT: 23\n");

  if((((a114==9) && (a182==7)) && (a28==11))){
printf("POINT: 24\n");
  cf = 0;
  //error_ 10: assert(!//error_ 10);
  }
printf("POINT: 25\n");

  if((((a44==6) && (a122==3)) && (a28==6))){
printf("POINT: 26\n");
  cf = 0;
  //error_ 11: assert(!//error_ 11);
  }
printf("POINT: 27\n");

  if((((a150==10) && (check1(5))) && (a28==8))){
printf("POINT: 28\n");
  cf = 0;
  //error_ 12: assert(!//error_ 12);
  }
printf("POINT: 29\n");

  if((((a137==13) && (a159==6)) && (a28==10))){
printf("POINT: 30\n");
  cf = 0;
  //error_ 13: assert(!//error_ 13);
  }
printf("POINT: 31\n");

  if((((a176==6) && (a122==5)) && (a28==6))){
printf("POINT: 32\n");
  cf = 0;
  //error_ 14: assert(!//error_ 14);
  }
printf("POINT: 33\n");

  if((((a13==5) && (a11==10)) && (a28==5))){
printf("POINT: 34\n");
  cf = 0;
  //error_ 15: assert(!//error_ 15);
  }
printf("POINT: 35\n");

  if((((a80==10) && (a159==4)) && (a28==10))){
printf("POINT: 36\n");
  cf = 0;
  //error_ 16: assert(!//error_ 16);
  }
printf("POINT: 37\n");

  if((((a108==8) && (a182==5)) && (a28==11))){
printf("POINT: 38\n");
  cf = 0;
  //error_ 17: assert(!//error_ 17);
  }
printf("POINT: 39\n");

  if((((a164==5) && (a5==10)) && (a28==7))){
printf("POINT: 40\n");
  cf = 0;
  //error_ 18: assert(!//error_ 18);
  }
printf("POINT: 41\n");

  if((((a13==4) && (a23==8)) && (a28==9))){
printf("POINT: 42\n");
  cf = 0;
  //error_ 19: assert(!//error_ 19);
  }
printf("POINT: 43\n");

  if((((a62==14) && (a193==7)) && (a28==4))){
printf("POINT: 44\n");
  cf = 0;
  //error_ 20: assert(!//error_ 20);
  }
printf("POINT: 45\n");

  if((((a92==12) && (a23==9)) && (a28==9))){
printf("POINT: 46\n");
  cf = 0;
  //error_ 21: assert(!//error_ 21);
  }
printf("POINT: 47\n");

  if((((a122==8) && (a23==13)) && (a28==9))){
printf("POINT: 48\n");
  cf = 0;
  //error_ 22: assert(!//error_ 22);
  }
printf("POINT: 49\n");

  if((((a14==4) && (a193==6)) && (a28==4))){
printf("POINT: 50\n");
  cf = 0;
  //error_ 23: assert(!//error_ 23);
  }
printf("POINT: 51\n");

  if((((a185==9) && (a159==9)) && (a28==10))){
printf("POINT: 52\n");
  cf = 0;
  //error_ 24: assert(!//error_ 24);
  }
printf("POINT: 53\n");

  if((((a15==9) && (a193==9)) && (a28==4))){
printf("POINT: 54\n");
  cf = 0;
  //error_ 25: assert(!//error_ 25);
  }
printf("POINT: 55\n");

  if((((a114==10) && (a182==7)) && (a28==11))){
printf("POINT: 56\n");
  cf = 0;
  //error_ 26: assert(!//error_ 26);
  }
printf("POINT: 57\n");

  if((((check1(10)) && (a23==15)) && (a28==9))){
printf("POINT: 58\n");
  cf = 0;
  //error_ 27: assert(!//error_ 27);
  }
printf("POINT: 59\n");

  if((((a140==1) && (a5==7)) && (a28==7))){
printf("POINT: 60\n");
  cf = 0;
  //error_ 28: assert(!//error_ 28);
  }
printf("POINT: 61\n");

  if((((a66==11) && (a11==6)) && (a28==5))){
printf("POINT: 62\n");
  cf = 0;
  //error_ 29: assert(!//error_ 29);
  }
printf("POINT: 63\n");

  if((((a38==16) && (check1(8))) && (a28==8))){
printf("POINT: 64\n");
  cf = 0;
  //error_ 30: assert(!//error_ 30);
  }
printf("POINT: 65\n");

  if((((check1(7)) && (a23==15)) && (a28==9))){
printf("POINT: 66\n");
  cf = 0;
  //error_ 31: assert(!//error_ 31);
  }
printf("POINT: 67\n");

  if((((a150==5) && (a11==11)) && (a28==5))){
printf("POINT: 68\n");
  cf = 0;
  //error_ 32: assert(!//error_ 32);
  }
printf("POINT: 69\n");

  if((((a90==5) && (check1(11))) && (a28==8))){
printf("POINT: 70\n");
  cf = 0;
  //error_ 33: assert(!//error_ 33);
  }
printf("POINT: 71\n");

  if((((a23==9) && (a122==4)) && (a28==6))){
printf("POINT: 72\n");
  cf = 0;
  //error_ 34: assert(!//error_ 34);
  }
printf("POINT: 73\n");

  if((((a176==6) && (a193==8)) && (a28==4))){
printf("POINT: 74\n");
  cf = 0;
  //error_ 35: assert(!//error_ 35);
  }
printf("POINT: 75\n");

  if((((a122==1) && (a182==2)) && (a28==11))){
printf("POINT: 76\n");
  cf = 0;
  //error_ 36: assert(!//error_ 36);
  }
printf("POINT: 77\n");

  if((((a164==10) && (a5==10)) && (a28==7))){
printf("POINT: 78\n");
  cf = 0;
  //error_ 37: assert(!//error_ 37);
  }
printf("POINT: 79\n");

  if((((a44==8) && (a122==3)) && (a28==6))){
printf("POINT: 80\n");
  cf = 0;
  //error_ 38: assert(!//error_ 38);
  }
printf("POINT: 81\n");

  if((((a5==5) && (a122==8)) && (a28==6))){
printf("POINT: 82\n");
  cf = 0;
  //error_ 39: assert(!//error_ 39);
  }
printf("POINT: 83\n");

  if((((a113==7) && (check1(10))) && (a28==8))){
printf("POINT: 84\n");
  cf = 0;
  //error_ 40: assert(!//error_ 40);
  }
printf("POINT: 85\n");

  if((((a57==9) && (a122==1)) && (a28==6))){
printf("POINT: 86\n");
  cf = 0;
  //error_ 41: assert(!//error_ 41);
  }
printf("POINT: 87\n");

  if((((a111==8) && (check1(9))) && (a28==8))){
printf("POINT: 88\n");
  cf = 0;
  //error_ 42: assert(!//error_ 42);
  }
printf("POINT: 89\n");

  if((((a150==8) && (a11==11)) && (a28==5))){
printf("POINT: 90\n");
  cf = 0;
  //error_ 43: assert(!//error_ 43);
  }
printf("POINT: 91\n");

  if((((a122==6) && (a182==2)) && (a28==11))){
printf("POINT: 92\n");
  cf = 0;
  //error_ 44: assert(!//error_ 44);
  }
printf("POINT: 93\n");

  if((((a89==5) && (a193==3)) && (a28==4))){
printf("POINT: 94\n");
  cf = 0;
  //error_ 45: assert(!//error_ 45);
  }
printf("POINT: 95\n");

  if((((a142==16) && (check1(6))) && (a28==8))){
printf("POINT: 96\n");
  cf = 0;
  //error_ 46: assert(!//error_ 46);
  }
printf("POINT: 97\n");

  if((((a50==1) && (a182==8)) && (a28==11))){
printf("POINT: 98\n");
  cf = 0;
  //error_ 47: assert(!//error_ 47);
  }
printf("POINT: 99\n");

  if((((a134==9) && (a11==8)) && (a28==5))){
printf("POINT: 100\n");
  cf = 0;
  //error_ 48: assert(!//error_ 48);
  }
printf("POINT: 101\n");

  if((((a117==6) && (a11==7)) && (a28==5))){
printf("POINT: 102\n");
  cf = 0;
  //error_ 49: assert(!//error_ 49);
  }
printf("POINT: 103\n");

  if((((a137==12) && (a159==6)) && (a28==10))){
printf("POINT: 104\n");
  cf = 0;
  //error_ 50: assert(!//error_ 50);
  }
printf("POINT: 105\n");

  if((((a13==8) && (a11==10)) && (a28==5))){
printf("POINT: 106\n");
  cf = 0;
  //error_ 51: assert(!//error_ 51);
  }
printf("POINT: 107\n");

  if((((a140==8) && (a5==7)) && (a28==7))){
printf("POINT: 108\n");
  cf = 0;
  //error_ 52: assert(!//error_ 52);
  }
printf("POINT: 109\n");

  if((((a15==6) && (a193==9)) && (a28==4))){
printf("POINT: 110\n");
  cf = 0;
  //error_ 53: assert(!//error_ 53);
  }
printf("POINT: 111\n");

  if((((a84==15) && (a193==5)) && (a28==4))){
printf("POINT: 112\n");
  cf = 0;
  //error_ 54: assert(!//error_ 54);
  }
printf("POINT: 113\n");

  if((((a13==4) && (a11==10)) && (a28==5))){
printf("POINT: 114\n");
  cf = 0;
  //error_ 55: assert(!//error_ 55);
  }
printf("POINT: 115\n");

  if((((a64==13) && (a182==9)) && (a28==11))){
printf("POINT: 116\n");
  cf = 0;
  //error_ 56: assert(!//error_ 56);
  }
printf("POINT: 117\n");

  if((((a180==17) && (a182==4)) && (a28==11))){
printf("POINT: 118\n");
  cf = 0;
  //error_ 57: assert(!//error_ 57);
  }
printf("POINT: 119\n");

  if((((a57==3) && (a122==1)) && (a28==6))){
printf("POINT: 120\n");
  cf = 0;
  //error_ 58: assert(!//error_ 58);
  }
printf("POINT: 121\n");

  if((((a23==8) && (a122==4)) && (a28==6))){
printf("POINT: 122\n");
  cf = 0;
  //error_ 59: assert(!//error_ 59);
  }
printf("POINT: 123\n");

  if((((a94==13) && (a5==11)) && (a28==7))){
printf("POINT: 124\n");
  cf = 0;
  //error_ 60: assert(!//error_ 60);
  }
printf("POINT: 125\n");

  if((((a137==8) && (a159==6)) && (a28==10))){
printf("POINT: 126\n");
  cf = 0;
  //error_ 61: assert(!//error_ 61);
  }
printf("POINT: 127\n");

  if((((a4==15) && (a23==11)) && (a28==9))){
printf("POINT: 128\n");
  cf = 0;
  //error_ 62: assert(!//error_ 62);
  }
printf("POINT: 129\n");

  if((((a92==13) && (a159==7)) && (a28==10))){
printf("POINT: 130\n");
  cf = 0;
  //error_ 63: assert(!//error_ 63);
  }
printf("POINT: 131\n");

  if((((a137==6) && (a159==6)) && (a28==10))){
printf("POINT: 132\n");
  cf = 0;
  //error_ 64: assert(!//error_ 64);
  }
printf("POINT: 133\n");

  if((((a92==6) && (a23==9)) && (a28==9))){
printf("POINT: 134\n");
  cf = 0;
  //error_ 65: assert(!//error_ 65);
  }
printf("POINT: 135\n");

  if((((a150==3) && (a11==11)) && (a28==5))){
printf("POINT: 136\n");
  cf = 0;
  //error_ 66: assert(!//error_ 66);
  }
printf("POINT: 137\n");

  if((((a176==4) && (a122==5)) && (a28==6))){
printf("POINT: 138\n");
  cf = 0;
  //error_ 67: assert(!//error_ 67);
  }
printf("POINT: 139\n");

  if((((a153==8) && (a11==4)) && (a28==5))){
printf("POINT: 140\n");
  cf = 0;
  //error_ 68: assert(!//error_ 68);
  }
printf("POINT: 141\n");

  if((((a122==2) && (a182==2)) && (a28==11))){
printf("POINT: 142\n");
  cf = 0;
  //error_ 69: assert(!//error_ 69);
  }
printf("POINT: 143\n");

  if((((a113==9) && (a23==12)) && (a28==9))){
printf("POINT: 144\n");
  cf = 0;
  //error_ 70: assert(!//error_ 70);
  }
printf("POINT: 145\n");

  if((((a180==15) && (a182==4)) && (a28==11))){
printf("POINT: 146\n");
  cf = 0;
  //error_ 71: assert(!//error_ 71);
  }
printf("POINT: 147\n");

  if((((a13==6) && (a159==8)) && (a28==10))){
printf("POINT: 148\n");
  cf = 0;
  //error_ 72: assert(!//error_ 72);
  }
printf("POINT: 149\n");

  if((((a38==13) && (check1(8))) && (a28==8))){
printf("POINT: 150\n");
  cf = 0;
  //error_ 73: assert(!//error_ 73);
  }
printf("POINT: 151\n");

  if((((a185==4) && (a159==9)) && (a28==10))){
printf("POINT: 152\n");
  cf = 0;
  //error_ 74: assert(!//error_ 74);
  }
printf("POINT: 153\n");

  if((((a172==12) && (a23==14)) && (a28==9))){
printf("POINT: 154\n");
  cf = 0;
  //error_ 75: assert(!//error_ 75);
  }
printf("POINT: 155\n");

  if((((a35==3) && (a159==5)) && (a28==10))){
printf("POINT: 156\n");
  cf = 0;
  //error_ 76: assert(!//error_ 76);
  }
printf("POINT: 157\n");

  if((((a114==13) && (a182==7)) && (a28==11))){
printf("POINT: 158\n");
  cf = 0;
  //error_ 77: assert(!//error_ 77);
  }
printf("POINT: 159\n");

  if((((a55==2) && (a5==8)) && (a28==7))){
printf("POINT: 160\n");
  cf = 0;
  //error_ 78: assert(!//error_ 78);
  }
printf("POINT: 161\n");

  if((((a90==10) && (check1(11))) && (a28==8))){
printf("POINT: 162\n");
  cf = 0;
  //error_ 79: assert(!//error_ 79);
  }
printf("POINT: 163\n");

  if((((a49==3) && (a5==5)) && (a28==7))){
printf("POINT: 164\n");
  cf = 0;
  //error_ 80: assert(!//error_ 80);
  }
printf("POINT: 165\n");

  if((((a13==1) && (a23==8)) && (a28==9))){
printf("POINT: 166\n");
  cf = 0;
  //error_ 81: assert(!//error_ 81);
  }
printf("POINT: 167\n");

  if((((a188==12) && (a193==2)) && (a28==4))){
printf("POINT: 168\n");
  cf = 0;
  //error_ 82: assert(!//error_ 82);
  }
printf("POINT: 169\n");

  if((((a150==9) && (a11==11)) && (a28==5))){
printf("POINT: 170\n");
  cf = 0;
  //error_ 83: assert(!//error_ 83);
  }
printf("POINT: 171\n");

  if((((a13==1) && (a11==10)) && (a28==5))){
printf("POINT: 172\n");
  cf = 0;
  //error_ 84: assert(!//error_ 84);
  }
printf("POINT: 173\n");

  if((((a92==11) && (a159==7)) && (a28==10))){
printf("POINT: 174\n");
  cf = 0;
  //error_ 85: assert(!//error_ 85);
  }
printf("POINT: 175\n");

  if((((a84==13) && (a193==5)) && (a28==4))){
printf("POINT: 176\n");
  cf = 0;
  //error_ 86: assert(!//error_ 86);
  }
printf("POINT: 177\n");

  if((((a92==6) && (a11==5)) && (a28==5))){
printf("POINT: 178\n");
  cf = 0;
  //error_ 87: assert(!//error_ 87);
  }
printf("POINT: 179\n");

  if((((a134==10) && (a11==8)) && (a28==5))){
printf("POINT: 180\n");
  cf = 0;
  //error_ 88: assert(!//error_ 88);
  }
printf("POINT: 181\n");

  if((((a80==3) && (a159==4)) && (a28==10))){
printf("POINT: 182\n");
  cf = 0;
  //error_ 89: assert(!//error_ 89);
  }
printf("POINT: 183\n");

  if((((a180==15) && (a182==3)) && (a28==11))){
printf("POINT: 184\n");
  cf = 0;
  //error_ 90: assert(!//error_ 90);
  }
printf("POINT: 185\n");

  if((((a153==5) && (a11==4)) && (a28==5))){
printf("POINT: 186\n");
  cf = 0;
  //error_ 91: assert(!//error_ 91);
  }
printf("POINT: 187\n");

  if((((a148==8) && (a23==10)) && (a28==9))){
printf("POINT: 188\n");
  cf = 0;
  //error_ 92: assert(!//error_ 92);
  }
printf("POINT: 189\n");

  if((((a15==4) && (a193==9)) && (a28==4))){
printf("POINT: 190\n");
  cf = 0;
  //error_ 93: assert(!//error_ 93);
  }
printf("POINT: 191\n");

  if((((a64==8) && (a182==9)) && (a28==11))){
printf("POINT: 192\n");
  cf = 0;
  //error_ 94: assert(!//error_ 94);
  }
printf("POINT: 193\n");

  if((((a47==8) && (a159==10)) && (a28==10))){
printf("POINT: 194\n");
  cf = 0;
  //error_ 95: assert(!//error_ 95);
  }
printf("POINT: 195\n");

  if((((a89==4) && (a5==9)) && (a28==7))){
printf("POINT: 196\n");
  cf = 0;
  //error_ 96: assert(!//error_ 96);
  }
printf("POINT: 197\n");

  if((((a111==11) && (check1(9))) && (a28==8))){
printf("POINT: 198\n");
  cf = 0;
  //error_ 97: assert(!//error_ 97);
  }
printf("POINT: 199\n");

  if((((a134==11) && (a11==8)) && (a28==5))){
printf("POINT: 200\n");
  cf = 0;
  //error_ 98: assert(!//error_ 98);
  }
printf("POINT: 201\n");

  if((((a140==4) && (a5==7)) && (a28==7))){
printf("POINT: 202\n");
  cf = 0;
  //error_ 99: assert(!//error_ 99);
  }
  }
  void calculate_outputm2(int input) {
printf("POINT: 203\n");

  if(((input == 3) && (cf==1))) {
printf("POINT: 204\n");
  cf = 0;
  a28 = (a193 + 9);
  a180 = (a193 + 9);
  a182 = (a188 + -10);
  printf("%d\n", 21); //fflush(stdout);
  }
printf("POINT: 205\n");

  if(((cf==1) && (input == 4))) {
printf("POINT: 206\n");
printf("POINT: 207\n");

  if((a51 - 20) < a51){
printf("POINT: 208\n");
  a51  -=  4 ;}
  else{
  a51  -=  0;}
printf("POINT: 209\n");

  if((a125 + 20) > a125){
printf("POINT: 210\n");
  a125  +=  2 ;}
  else{
  a125  +=  0;}
printf("POINT: 211\n");

  if((a128 - 20) < a128){
printf("POINT: 212\n");
  a128  -=  4 ;}
  else{
  a128  -=  0;}
printf("POINT: 213\n");

  if((a102 + 20) > a102){
printf("POINT: 214\n");
  a102  +=  1 ;}
  else{
  a102  +=  0;}
printf("POINT: 215\n");

  if((a68 - 20) < a68){
printf("POINT: 216\n");
  a68  -=  2 ;}
  else{
  a68  -=  0;}
printf("POINT: 217\n");

  if((a93 + 20) > a93){
printf("POINT: 218\n");
  a93  +=  2 ;}
  else{
  a93  +=  0;}
printf("POINT: 219\n");

  if((a30 - 20) < a30){
printf("POINT: 220\n");
  a30  -=  4 ;}
  else{
  a30  -=  0;}
  cf = 0;
  a28 = ((a188 + a188) + -16);
  a159 = (a188 - 2);
  a138 = ((a159 / a28) - -9);
  printf("%d\n", 24); //fflush(stdout);
  }
printf("POINT: 221\n");

  if(((input == 1) && (cf==1))) {
printf("POINT: 222\n");
  cf = 0;
  a28 = (a188 + -5);
  update(a188, a193, -3);
  a38 = (getInt() - -8);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 223\n");

  if(((cf==1) && (input == 5))) {
printf("POINT: 224\n");
printf("POINT: 225\n");

  if((a112 + 20) > a112){
printf("POINT: 226\n");
  a112  +=  1 ;}
  else{
  a112  +=  0;}
printf("POINT: 227\n");

  if((a21 - 20) < a21){
printf("POINT: 228\n");
  a21  -=  4 ;}
  else{
  a21  -=  0;}
printf("POINT: 229\n");

  if((a72 - 20) < a72){
printf("POINT: 230\n");
  a72  -=  4 ;}
  else{
  a72  -=  0;}
printf("POINT: 231\n");

  if((a116 + 20) > a116){
printf("POINT: 232\n");
  a116  +=  1 ;}
  else{
  a116  +=  0;}
printf("POINT: 233\n");

  if((a177 - 20) < a177){
printf("POINT: 234\n");
  a177  -=  4 ;}
  else{
  a177  -=  0;}
printf("POINT: 235\n");

  if((a157 + 20) > a157){
printf("POINT: 236\n");
  a157  +=  1 ;}
  else{
  a157  +=  0;}
printf("POINT: 237\n");

  if((a110 + 20) > a110){
printf("POINT: 238\n");
  a110  +=  4 ;}
  else{
  a110  +=  0;}
  cf = 0;
  a122 = (a28 + -2);
  a49 = (a28 - -1);
  a28 = ((a188 * a122) - 20);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm1(int input) {
printf("POINT: 239\n");

  if(((a188==13) && (cf==1))) {
printf("POINT: 240\n");
  calculate_outputm2(input);
  }
  }
  void calculate_outputm4(int input) {
printf("POINT: 241\n");

  if((((cf==1) && (input == 4)) && a16 <= -22)) {
printf("POINT: 242\n");
  cf = 0;
  a28 = ((a193 * a89) + -9);
  a23 = (a193 + 6);
  a92 = ((a193 - a28) + 12);
  printf("%d\n", 20); //fflush(stdout);
  }
printf("POINT: 243\n");

  if(((cf==1) && (input == 5))) {
printf("POINT: 244\n");
  cf = 0;
  a159 = ((a28 + a89) + -6);
  a80 = (a28 - -4);
  a28 = ((a159 / a80) + 10);
  printf("%d\n", 20); //fflush(stdout);
  }
printf("POINT: 245\n");

  if((((cf==1) && (input == 1)) && a191 == 7440)) {
printf("POINT: 246\n");
  cf = 0;
  update(a28, 0, 5);
  a111 = (a193 + 8);
  a28 = (a89 + 2);
  printf("%d\n", 22); //fflush(stdout);
  }
printf("POINT: 247\n");

  if((((cf==1) && (input == 3)) && a199 == 680)) {
printf("POINT: 248\n");
  cf = 0;
  a11 = (a89 - -5);
  a150 = (a89 + 2);
  a28 = (a193 - -2);
  printf("%d\n", 24); //fflush(stdout);
  }
printf("POINT: 249\n");

  if(((cf==1) && (input == 2))) {
printf("POINT: 250\n");
  cf = 0;
  a182 = (a89 - -2);
  a50 = (a28 - 2);
  a28 = (a50 + 9);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm3(int input) {
printf("POINT: 251\n");

  if(((cf==1) && (a89==6))) {
printf("POINT: 252\n");
  calculate_outputm4(input);
  }
  }
  void calculate_outputm6(int input) {
printf("POINT: 253\n");

  if((((cf==1) && (input == 4)) && a125 == 7256)) {
printf("POINT: 254\n");
  cf = 0;
  a122 = (a153 + -7);
  a44 = ((a153 - a28) - -1);
  a28 = (a153 - 4);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 255\n");

  if((((cf==1) && (input == 2)) && a21 <= -28)) {
printf("POINT: 256\n");
  cf = 0;
  a159 = (a153 - 6);
  a80 = ((a153 / a159) - -1);
  a28 = (a11 - -6);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 257\n");

  if(((input == 5) && (cf==1))) {
printf("POINT: 258\n");
  cf = 0;
  a193 = ((a153 / a153) - -2);
  a89 = ((a193 / a11) - -5);
  a28 = (a153 + -6);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 259\n");

  if(((cf==1) && (input == 3))) {
printf("POINT: 260\n");
  cf = 0;
  a122 = (a11 + 1);
  a176 = ((a153 - a11) + -1);
  a28 = (a176 + 1);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 261\n");

  if(((input == 1) && (cf==1))) {
printf("POINT: 262\n");
  cf = 0;
  a11 = (a153 - 5);
  a92 = ((a28 * a11) - 12);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm5(int input) {
printf("POINT: 263\n");

  if(((a153==10) && (cf==1))) {
printf("POINT: 264\n");
  calculate_outputm6(input);
  }
  }
  void calculate_outputm8(int input) {
printf("POINT: 265\n");

  if((((cf==1) && (input == 2)) && a110 == 9480)) {
printf("POINT: 266\n");
  cf = 0;
  a182 = a11;
  a108 = (a92 + -3);
  a28 = ((a108 * a182) + -39);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 267\n");

  if(((cf==1) && (input == 5))) {
printf("POINT: 268\n");
  cf = 0;
  a11 = (a92 - 9);
  a153 = (a28 + 5);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 269\n");

  if((((cf==1) && (input == 3)) && a30 <= -37)) {
printf("POINT: 270\n");
  cf = 0;
  a134 = (a92 + -2);
  a11 = (a28 - -3);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 271\n");

  if(((cf==1) && (input == 1))) {
printf("POINT: 272\n");
  cf = 0;
  a5 = ((a28 + a28) + -5);
  a49 = (a92 - 5);
  a28 = (a5 - -2);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm7(int input) {
printf("POINT: 273\n");

  if(((cf==1) && (a92==13))) {
printf("POINT: 274\n");
  calculate_outputm8(input);
  }
  }
  void calculate_outputm10(int input) {
printf("POINT: 275\n");

  if((((input == 4) && (cf==1)) && a68 <= -41)) {
printf("POINT: 276\n");
  cf = 0;
  a28 = (a122 - -9);
  a182 = (a28 + -9);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 277\n");

  if(((input == 5) && (cf==1))) {
printf("POINT: 278\n");
  cf = 0;
  a188 = ((a49 - a28) - -14);
  a193 = ((a28 - a122) + -2);
  a28 = (a188 - 9);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 279\n");

  if(((cf==1) && (input == 3))) {
printf("POINT: 280\n");
  cf = 0;
  a5 = (a28 + -1);
  a28 = ((a122 + a122) - -3);
  a49 = (a5 - -3);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 281\n");

  if((((cf==1) && (input == 1)) && a177 <= -25)) {
printf("POINT: 282\n");
  cf = 0;
  a193 = (a122 - -3);
  a84 = (a49 + 10);
  a28 = (a193 + -1);
  printf("%d\n", 20); //fflush(stdout);
  }
  }
  void calculate_outputm9(int input) {
printf("POINT: 283\n");

  if(((cf==1) && (a49==5))) {
printf("POINT: 284\n");
  calculate_outputm10(input);
  }
  }
  void calculate_outputm12(int input) {
printf("POINT: 285\n");

  if((((input == 1) && (cf==1)) && a157 >= 36)) {
printf("POINT: 286\n");
  cf = 0;
  a159 = (a122 + 4);
  a28 = (a122 + a176);
  a185 = ((a176 - a28) - -8);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 287\n");

  if((((cf==1) && (input == 2)) && a93 == 1634)) {
printf("POINT: 288\n");
  cf = 0;
  a84 = (a176 - -8);
  a28 = (a84 - 9);
  a193 = ((a122 / a176) + 4);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 289\n");

  if(((input == 4) && (cf==1))) {
printf("POINT: 290\n");
  cf = 0;
  
  printf("%d\n", 26); //fflush(stdout);
  }
  }
  void calculate_outputm11(int input) {
printf("POINT: 291\n");

  if(((cf==1) && (a176==5))) {
printf("POINT: 292\n");
  calculate_outputm12(input);
  }
  }
  void calculate_outputm14(int input) {
printf("POINT: 293\n");

  if(((input == 4) && (cf==1))) {
printf("POINT: 294\n");
  cf = 0;
  a11 = (a5 + -1);
  a28 = (a11 + 1);
  a153 = (a49 - -2);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 295\n");

  if((((cf==1) && (input == 3)) && a51 <= -23)) {
printf("POINT: 296\n");
  cf = 0;
  a80 = (a28 - -3);
  a159 = (a28 - 3);
  a28 = a80;
  printf("%d\n", 20); //fflush(stdout);
  }
printf("POINT: 297\n");

  if((((input == 5) && (cf==1)) && a112 >= 33)) {
printf("POINT: 298\n");
  cf = 0;
  a28 = ((a49 - a5) - -8);
  a182 = (a28 + -4);
  a114 = (a182 - -6);
  printf("%d\n", 21); //fflush(stdout);
  }
printf("POINT: 299\n");

  if(((input == 1) && (cf==1))) {
printf("POINT: 300\n");
  cf = 0;
  a188 = (a5 - -8);
  a193 = (a5 + -3);
  a28 = (a188 - 9);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm13(int input) {
printf("POINT: 301\n");

  if(((a49==8) && (cf==1))) {
printf("POINT: 302\n");
  calculate_outputm14(input);
  }
  }
  void calculate_outputm16(int input) {
printf("POINT: 303\n");

  if((((input == 3) && (cf==1)) && a160 == 320)) {
printf("POINT: 304\n");
  cf = 0;
  a122 = ((a111 * getInt()) + -80);
  a28 = (getInt() - -2);
  a182 = (a28 + -9);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 305\n");

  if((((cf==1) && (input == 1)) && a197 >= 36)) {
printf("POINT: 306\n");
  cf = 0;
  a90 = (a111 - -1);
  update(a111, a111, 11);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 307\n");

  if(((input == 5) && (cf==1))) {
printf("POINT: 308\n");
printf("POINT: 309\n");

  if((a16 - 20) < a16){
printf("POINT: 310\n");
  a16  -=  2 ;}
  else{
  a16  -=  0;}
printf("POINT: 311\n");

  if((a197 + 20) > a197){
printf("POINT: 312\n");
  a197  +=  2 ;}
  else{
  a197  +=  0;}
printf("POINT: 313\n");

  if((a198 - 20) < a198){
printf("POINT: 314\n");
  a198  -=  2 ;}
  else{
  a198  -=  0;}
  cf = 0;
  a28 = (getInt() + 1);
  a159 = (a28 + -3);
  a92 = (a159 - -1);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 315\n");

  if(((cf==1) && (input == 4))) {
printf("POINT: 316\n");
  cf = 0;
  
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 317\n");

  if((((input == 2) && (cf==1)) && a98 == 4092)) {
printf("POINT: 318\n");
  cf = 0;
  a164 = ((getInt() / a28) - -9);
  a5 = ((a28 - a164) - -12);
  a28 = (a5 + -3);
  printf("%d\n", 24); //fflush(stdout);
  }
  }
  void calculate_outputm15(int input) {
printf("POINT: 319\n");

  if(((a111==9) && (cf==1))) {
printf("POINT: 320\n");
  calculate_outputm16(input);
  }
  }
  void calculate_outputm18(int input) {
printf("POINT: 321\n");

  if(((cf==1) && (input == 2))) {
printf("POINT: 322\n");
  cf = 0;
  a159 = a90;
  a28 = (getInt() - 1);
  a92 = ((a28 / a159) - -7);
  printf("%d\n", 22); //fflush(stdout);
  }
printf("POINT: 323\n");

  if(((input == 3) && (cf==1))) {
printf("POINT: 324\n");
  cf = 0;
  a5 = (getInt() - 6);
  a49 = (a5 + 3);
  a28 = (getInt() - 4);
  printf("%d\n", 21); //fflush(stdout);
  }
  }
  void calculate_outputm17(int input) {
printf("POINT: 325\n");

  if(((cf==1) && (a90==7))) {
printf("POINT: 326\n");
  calculate_outputm18(input);
  }
  }
  void calculate_outputm20(int input) {
printf("POINT: 327\n");

  if(((input == 1) && (cf==1))) {
printf("POINT: 328\n");
printf("POINT: 329\n");

  if((a32 + 20) > a32){
printf("POINT: 330\n");
  a32  +=  6 ;}
  else{
  a32  +=  0;}
  cf = 0;
  a23 = (a4 - -2);
  update(a23 * a4, 186, 0);
  printf("%d\n", 24); //fflush(stdout);
  }
printf("POINT: 331\n");

  if(((input == 3) && (cf==1))) {
printf("POINT: 332\n");
  cf = 0;
  a5 = (a23 + -4);
  a140 = ((a23 + a5) + -10);
  a28 = (a23 - 4);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 333\n");

  if(((input == 4) && (cf==1))) {
printf("POINT: 334\n");
printf("POINT: 335\n");

  if((a40 + 20) > a40){
printf("POINT: 336\n");
  a40  +=  2 ;}
  else{
  a40  +=  0;}
printf("POINT: 337\n");

  if((a24 - 20) < a24){
printf("POINT: 338\n");
  a24  -=  4 ;}
  else{
  a24  -=  0;}
  cf = 0;
  a28 = (a4 + -5);
  update(a23, 2, 0);
  a111 = ((a23 + getInt()) + -11);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 339\n");

  if(((cf==1) && (input == 5))) {
printf("POINT: 340\n");
printf("POINT: 341\n");

  if((a199 + 20) > a199){
printf("POINT: 342\n");
  a199  +=  4 ;}
  else{
  a199  +=  0;}
printf("POINT: 343\n");

  if((a18 - 20) < a18){
printf("POINT: 344\n");
  a18  -=  4 ;}
  else{
  a18  -=  0;}
  cf = 0;
  a182 = ((a23 - a4) + 6);
  a28 = ((a182 + a182) + 3);
  a180 = (a182 + 7);
  printf("%d\n", 22); //fflush(stdout);
  }
  }
  void calculate_outputm19(int input) {
printf("POINT: 345\n");

  if(((a4==13) && (cf==1))) {
printf("POINT: 346\n");
  calculate_outputm20(input);
  }
  }
  void calculate_outputm22(int input) {
printf("POINT: 347\n");

  if(((input == 4) && (cf==1))) {
printf("POINT: 348\n");
printf("POINT: 349\n");

  if((a160 + 20) > a160){
printf("POINT: 350\n");
  a160  +=  4 ;}
  else{
  a160  +=  0;}
printf("POINT: 351\n");

  if((a8 + 20) > a8){
printf("POINT: 352\n");
  a8  +=  4 ;}
  else{
  a8  +=  0;}
printf("POINT: 353\n");

  if((a86 + 20) > a86){
printf("POINT: 354\n");
  a86  +=  6 ;}
  else{
  a86  +=  0;}
  cf = 0;
  a159 = (getInt() - 2);
  a92 = (a28 - 1);
  a28 = (a23 + -5);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 355\n");

  if((((cf==1) && (input == 2)) && a86 == 6328)) {
printf("POINT: 356\n");
  cf = 0;
  a134 = (a23 + -6);
  a11 = (getInt() - 1);
  a28 = (a23 - 10);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 357\n");

  if((((input == 3) && (cf==1)) && a24 <= -26)) {
printf("POINT: 358\n");
  cf = 0;
  a137 = (getInt() - 1);
  a28 = (a137 + 2);
  a159 = 6;
  printf("%d\n", 22); //fflush(stdout);
  }
printf("POINT: 359\n");

  if((((input == 5) && (cf==1)) && a26 == 1498)) {
printf("POINT: 360\n");
  cf = 0;
  a23 = (getInt() + 4);
  a122 = (a28 + -1);
  printf("%d\n", 26); //fflush(stdout);
  }
  }
  void calculate_outputm21(int input) {
printf("POINT: 361\n");

  if(((check1(9)) && (cf==1))) {
printf("POINT: 362\n");
  calculate_outputm22(input);
  }
  }
  void calculate_outputm24(int input) {
printf("POINT: 363\n");

  if((((cf==1) && (input == 3)) && a58 >= 28)) {
printf("POINT: 364\n");
  cf = 0;
  a14 = (a80 - 4);
  a193 = (a159 - -2);
  a28 = (a193 - 2);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 365\n");

  if((((cf==1) && (input == 1)) && a129 == 2418)) {
printf("POINT: 366\n");
  cf = 0;
  a28 = ((a80 - a159) + 1);
  a11 = (a28 + 5);
  a13 = a159;
  printf("%d\n", 20); //fflush(stdout);
  }
printf("POINT: 367\n");

  if(((input == 5) && (cf==1))) {
printf("POINT: 368\n");
  cf = 0;
  a193 = ((a80 - a159) - 1);
  a89 = (a80 + -2);
  a28 = ((a193 + a89) + -5);
  printf("%d\n", 20); //fflush(stdout);
  }
printf("POINT: 369\n");

  if((((cf==1) && (input == 2)) && a165 <= -24)) {
printf("POINT: 370\n");
  cf = 0;
  a5 = (a80 + 3);
  a94 = (a159 - -11);
  a28 = (a94 - 8);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm23(int input) {
printf("POINT: 371\n");

  if(((cf==1) && (a80==8))) {
printf("POINT: 372\n");
  calculate_outputm24(input);
  }
  }
  void calculate_outputm26(int input) {
printf("POINT: 373\n");

  if(((cf==1) && (input == 2))) {
printf("POINT: 374\n");
printf("POINT: 375\n");

  if((a191 + 20) > a191){
printf("POINT: 376\n");
  a191  +=  6 ;}
  else{
  a191  +=  0;}
printf("POINT: 377\n");

  if((a26 + 20) > a26){
printf("POINT: 378\n");
  a26  +=  2 ;}
  else{
  a26  +=  0;}
printf("POINT: 379\n");

  if((a144 + 20) > a144){
printf("POINT: 380\n");
  a144  +=  2 ;}
  else{
  a144  +=  0;}
printf("POINT: 381\n");

  if((a129 + 20) > a129){
printf("POINT: 382\n");
  a129  +=  4 ;}
  else{
  a129  +=  0;}
printf("POINT: 383\n");

  if((a165 - 20) < a165){
printf("POINT: 384\n");
  a165  -=  4 ;}
  else{
  a165  -=  0;}
  cf = 0;
  a4 = (a159 - -6);
  a23 = (a28 + 1);
  a28 = (a4 - 4);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 385\n");

  if(((cf==1) && (input == 1))) {
printf("POINT: 386\n");
  cf = 0;
  a89 = (a28 - 4);
  a193 = (a92 - 5);
  a28 = ((a159 + a193) - 6);
  printf("%d\n", 22); //fflush(stdout);
  }
  }
  void calculate_outputm25(int input) {
printf("POINT: 387\n");

  if(((cf==1) && (a92==8))) {
printf("POINT: 388\n");
  calculate_outputm26(input);
  }
  }
  void calculate_outputm28(int input) {
printf("POINT: 389\n");

  if((((cf==1) && (input == 2)) && a102 >= 24)) {
printf("POINT: 390\n");
  cf = 0;
  a122 = (a28 + -9);
  a57 = (a159 - 8);
  a28 = (a122 - -5);
  printf("%d\n", 22); //fflush(stdout);
  }
printf("POINT: 391\n");

  if(((cf==1) && (input == 4))) {
printf("POINT: 392\n");
  cf = 0;
  a188 = ((a28 / a159) + 13);
  a193 = (a138 + -8);
  a28 = ((a193 + a138) + -8);
  printf("%d\n", 24); //fflush(stdout);
  }
printf("POINT: 393\n");

  if(((input == 5) && (cf==1))) {
printf("POINT: 394\n");
  cf = 0;
  a5 = (a138 - 5);
  a28 = (a159 + -4);
  a49 = (a5 - -3);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 395\n");

  if(((cf==1) && (input == 1))) {
printf("POINT: 396\n");
  cf = 0;
  
  printf("%d\n", 24); //fflush(stdout);
  }
printf("POINT: 397\n");

  if((((input == 3) && (cf==1)) && a116 >= 24)) {
printf("POINT: 398\n");
  cf = 0;
  update(a28, -a28, -13);
  a23 = (a138 + 5);
  a28 = (a138 - 1);
  printf("%d\n", 25); //fflush(stdout);
  }
  }
  void calculate_outputm27(int input) {
printf("POINT: 399\n");

  if(((a138==10) && (cf==1))) {
printf("POINT: 400\n");
  calculate_outputm28(input);
  }
  }
  void calculate_outputm30(int input) {
printf("POINT: 401\n");

  if((((input == 2) && (cf==1)) && a72 <= -48)) {
printf("POINT: 402\n");
  cf = 0;
  a11 = (a180 + -6);
  a92 = (a28 - 1);
  a28 = a11;
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 403\n");

  if((((input == 1) && (cf==1)) && a128 <= -37)) {
printf("POINT: 404\n");
  cf = 0;
  a153 = (a180 - 6);
  a28 = a153;
  a11 = (a153 - 1);
  printf("%d\n", 25); //fflush(stdout);
  }
printf("POINT: 405\n");

  if(((cf==1) && (input == 4))) {
printf("POINT: 406\n");
  cf = 0;
  
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 407\n");

  if(((cf==1) && (input == 3))) {
printf("POINT: 408\n");
  cf = 0;
  
  printf("%d\n", 24); //fflush(stdout);
  }
  }
  void calculate_outputm29(int input) {
printf("POINT: 409\n");

  if(((cf==1) && (a180==11))) {
printf("POINT: 410\n");
  calculate_outputm30(input);
  }
  }
  void calculate_outputm32(int input) {
printf("POINT: 411\n");

  if((((input == 4) && (cf==1)) && a40 == 6914)) {
printf("POINT: 412\n");
  cf = 0;
  a182 = (a28 - 3);
  a50 = (a180 + -10);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 413\n");

  if(((input == 3) && (cf==1))) {
printf("POINT: 414\n");
printf("POINT: 415\n");

  if((a98 + 20) > a98){
printf("POINT: 416\n");
  a98  +=  2 ;}
  else{
  a98  +=  0;}
printf("POINT: 417\n");

  if((a58 + 20) > a58){
printf("POINT: 418\n");
  a58  +=  1 ;}
  else{
  a58  +=  0;}
  cf = 0;
  a28 = (a180 + -1);
  a92 = (a182 - -4);
  a159 = (a28 + -3);
  printf("%d\n", 26); //fflush(stdout);
  }
printf("POINT: 419\n");

  if((((cf==1) && (input == 1)) && a18 <= -32)) {
printf("POINT: 420\n");
  cf = 0;
  a28 = ((a180 - a182) - -1);
  update(a28, -a182, -4);
  a38 = ((a182 - a182) - -13);
  printf("%d\n", 23); //fflush(stdout);
  }
printf("POINT: 421\n");

  if((((input == 2) && (cf==1)) && a8 == 5602)) {
printf("POINT: 422\n");
  cf = 0;
  a159 = (a180 + -5);
  a137 = ((a182 - a159) - -14);
  a28 = (a137 - 2);
  printf("%d\n", 23); //fflush(stdout);
  }
  }
  void calculate_outputm31(int input) {
printf("POINT: 423\n");

  if(((a180==11) && (cf==1))) {
printf("POINT: 424\n");
  calculate_outputm32(input);
  }
  }
  void calculate_outputm34(int input) {
printf("POINT: 425\n");

  if((((cf==1) && (input == 4)) && a32 == 642)) {
printf("POINT: 426\n");
  cf = 0;
  a28 = (a182 - 3);
  a11 = ((a50 + a28) - -3);
  a13 = (a11 + -2);
  printf("%d\n", 21); //fflush(stdout);
  }
printf("POINT: 427\n");

  if((((input == 3) && (cf==1)) && a144 == 8684)) {
printf("POINT: 428\n");
  cf = 0;
  a11 = (a50 + 6);
  a28 = ((a182 - a182) + 5);
  a134 = ((a11 - a50) + 4);
  printf("%d\n", 22); //fflush(stdout);
  }
printf("POINT: 429\n");

  if((((cf==1) && (input == 2)) && a198 <= -40)) {
printf("POINT: 430\n");
  cf = 0;
  a11 = (a182 - -2);
  a13 = ((a182 / a11) - -5);
  a28 = (a11 + -5);
  printf("%d\n", 21); //fflush(stdout);
  }
printf("POINT: 431\n");

  if(((input == 1) && (cf==1))) {
printf("POINT: 432\n");
  cf = 0;
  
  printf("%d\n", 20); //fflush(stdout);
  }
printf("POINT: 433\n");

  if(((input == 5) && (cf==1))) {
printf("POINT: 434\n");
  cf = 0;
  
  printf("%d\n", 24); //fflush(stdout);
  }
  }
  void calculate_outputm33(int input) {
printf("POINT: 435\n");

  if(((a50==2) && (cf==1))) {
printf("POINT: 436\n");
  calculate_outputm34(input);
  }
  }
  
  void calculate_output(int input) {
  cf = 1;
  
printf("POINT: 437\n");

  if(((cf==1) && (a28==4))) {
printf("POINT: 438\n");
printf("POINT: 439\n");

  if(((cf==1) && (a193==2))) {
printf("POINT: 440\n");
  calculate_outputm1(input);
  }
printf("POINT: 441\n");

  if(((a193==3) && (cf==1))) {
printf("POINT: 442\n");
  calculate_outputm3(input);
  }
  }
printf("POINT: 443\n");

  if(((a28==5) && (cf==1))) {
printf("POINT: 444\n");
printf("POINT: 445\n");

  if(((cf==1) && (a11==4))) {
printf("POINT: 446\n");
  calculate_outputm5(input);
  }
printf("POINT: 447\n");

  if(((cf==1) && (a11==5))) {
printf("POINT: 448\n");
  calculate_outputm7(input);
  }
  }
printf("POINT: 449\n");

  if(((a28==6) && (cf==1))) {
printf("POINT: 450\n");
printf("POINT: 451\n");

  if(((a122==2) && (cf==1))) {
printf("POINT: 452\n");
  calculate_outputm9(input);
  }
printf("POINT: 453\n");

  if(((cf==1) && (a122==5))) {
printf("POINT: 454\n");
  calculate_outputm11(input);
  }
  }
printf("POINT: 455\n");

  if(((cf==1) && (a28==7))) {
printf("POINT: 456\n");
printf("POINT: 457\n");

  if(((a5==5) && (cf==1))) {
printf("POINT: 458\n");
  calculate_outputm13(input);
  }
  }
printf("POINT: 459\n");

  if(((a28==8) && (cf==1))) {
printf("POINT: 460\n");
printf("POINT: 461\n");

  if(((check1(9)) && (cf==1))) {
printf("POINT: 462\n");
  calculate_outputm15(input);
  }
printf("POINT: 463\n");

  if(((check1(11)) && (cf==1))) {
printf("POINT: 464\n");
  calculate_outputm17(input);
  }
  }
printf("POINT: 465\n");

  if(((a28==9) && (cf==1))) {
printf("POINT: 466\n");
printf("POINT: 467\n");

  if(((a23==11) && (cf==1))) {
printf("POINT: 468\n");
  calculate_outputm19(input);
  }
printf("POINT: 469\n");

  if(((a23==15) && (cf==1))) {
printf("POINT: 470\n");
  calculate_outputm21(input);
  }
  }
printf("POINT: 471\n");

  if(((a28==10) && (cf==1))) {
printf("POINT: 472\n");
printf("POINT: 473\n");

  if(((a159==4) && (cf==1))) {
printf("POINT: 474\n");
  calculate_outputm23(input);
  }
printf("POINT: 475\n");

  if(((cf==1) && (a159==7))) {
printf("POINT: 476\n");
  calculate_outputm25(input);
  }
printf("POINT: 477\n");

  if(((a159==11) && (cf==1))) {
printf("POINT: 478\n");
  calculate_outputm27(input);
  }
  }
printf("POINT: 479\n");

  if(((cf==1) && (a28==11))) {
printf("POINT: 480\n");
printf("POINT: 481\n");

  if(((a182==3) && (cf==1))) {
printf("POINT: 482\n");
  calculate_outputm29(input);
  }
printf("POINT: 483\n");

  if(((cf==1) && (a182==4))) {
printf("POINT: 484\n");
  calculate_outputm31(input);
  }
printf("POINT: 485\n");

  if(((a182==8) && (cf==1))) {
printf("POINT: 486\n");
  calculate_outputm33(input);
  }
  }
  errorCheck();
  
printf("POINT: 487\n");

  if((cf==1)){
printf("POINT: 488\n");
  
  
  }
  //fprintf(stderr, "Invalid input: %d\n", input);
  }
  
  
  int main()
  {
  kappa = 0;
  // main i/o-loop
  int symb;
printf("POINT: 489\n");

  for (int FLAG=0;FLAG<BOUND;FLAG++){
int symb; scanf("%d",&symb);  
  calculate_output(symb);
  }
  
  return 0;
  
  }
  
  
