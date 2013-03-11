#include "sounds.h"
#include "tone.h"
#include "playback.h"

void sound1( void ) {

  struct note_t* note8 = note_new(C1, FORTH, NULL);
  struct note_t* note7 = note_new(B, FORTH, note8);
  struct note_t* note6 = note_new(A, FORTH, note7);
  struct note_t* note5 = note_new(G, FORTH, note6);
  struct note_t* note4 = note_new(F, FORTH, note5);
  struct note_t* note3 = note_new(E, FORTH, note4);
  struct note_t* note2 = note_new(D, FORTH, note3);
  struct note_t* note1 = note_new(C, FORTH, note2);
  
  set_track(0, note1);
}

void lisa_sound ( void ) {
  note_t *s21 = note_new( C, WHOLE, NULL);
  
  note_t *s20 = note_new( D, FORTH, s21);
  note_t *s19 = note_new( D, FORTH, s20);
  note_t *s18 = note_new( D, FORTH, s19);
  note_t *s17 = note_new( D, FORTH, s18);
  
  note_t *s16 = note_new( E, HALF, s17);
  note_t *s15 = note_new( E, HALF, s16);
  
  note_t *s14 = note_new( F, FORTH, s15);
  note_t *s13 = note_new( F, FORTH, s14);
  note_t *s12 = note_new( F, FORTH, s13);
  note_t *s11 = note_new( F, FORTH, s12);
  
  note_t *s10 = note_new( G, WHOLE, s11);
  
  note_t *s09 = note_new( A, FORTH, s10);
  note_t *s08 = note_new( A, FORTH, s09);
  note_t *s07 = note_new( A, FORTH, s08);
  note_t *s06 = note_new( A, FORTH, s07);
  
  note_t *s05 = note_new( G, HALF, s06);
  note_t *s04 = note_new( G, HALF, s05);
  
  note_t *s03 = note_new( F, FORTH, s04);
  note_t *s02 = note_new( E, FORTH, s03);
  note_t *s01 = note_new( D, FORTH, s02);
  note_t *s00 = note_new( C, FORTH, s01);
  
  set_track( 0, s00 );
}

void random_explosion ( void ) {
  note_t *t06 = note_new( C, SHORT, NULL);
  note_t *t05 = note_new( D, SHORT, t06);
  note_t *t04 = note_new( C, SHORT, t05);
  note_t *t03 = note_new( F, SHORT, t04);
  note_t *t02 = note_new( C, SHORT, t03);
  note_t *t01 = note_new( G, SHORT, t02);
  note_t *t00 = note_new( A, SHORT, t01);

  note_t *t16 = note_new( F, SHORT, NULL);
  note_t *t15 = note_new( G, SHORT, t16);
  note_t *t14 = note_new( A, SHORT, t15);
  note_t *t13 = note_new( F, SHORT, t14);
  note_t *t12 = note_new( E, SHORT, t13);
  note_t *t11 = note_new( F, SHORT, t12);
  note_t *t10 = note_new( A, SHORT, t11);

  set_track( 0, t00 );
  set_track( 1, t10 );
}

void sound_scale ( void ) {
  note_t *t06 = note_new( A, FORTH, NULL);
  note_t *t05 = note_new( B, FORTH, t06);
  note_t *t04 = note_new( G, FORTH, t05);
  note_t *t03 = note_new( F, FORTH, t04);
  note_t *t02 = note_new( E, FORTH, t03);
  note_t *t01 = note_new( D, FORTH, t02);
  note_t *t00 = note_new( C, FORTH, t01);

  note_t *t16 = note_new( C, FORTH, NULL);
  note_t *t15 = note_new( D, FORTH, t16);
  note_t *t14 = note_new( E, FORTH, t15);
  note_t *t13 = note_new( F, FORTH, t14);
  note_t *t12 = note_new( G, FORTH, t13);
  note_t *t11 = note_new( A, FORTH, t12);
  note_t *t10 = note_new( B, FORTH, t11);

  set_track( 0, t00 );
  set_track( 1, t10 );
}

void portal_song ( void ) {
  /*
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);


  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);

  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  note_t *t = note_new( A, FORTH, t);
  // 24*/

  note_t *t129 = note_new( D5, EIGHT, NULL);
  note_t *t128 = note_new( F5_, EIGHT, t129);
  note_t *t127 = note_new( D5, EIGHT, t128);
  note_t *t126 = note_new( B4, EIGHT, t127);
  note_t *t125 = note_new( D5, EIGHT, t126);
  note_t *t124 = note_new( F5_, EIGHT, t125);
  note_t *t123 = note_new( D5, EIGHT, t124);
  note_t *t122 = note_new( A4, EIGHT, t123);

  note_t *t121 = note_new( F4_, EIGHT, t122);
  note_t *t120 = note_new( F4_, EIGHT, t121);
  note_t *t119 = note_new( E4, EIGHT, t120);
  note_t *t118 = note_new( E4, EIGHT, t119);
  note_t *t117 = note_new( E4, EIGHT, t118);
  note_t *t116 = note_new( F4, EIGHT, t117);
  note_t *t115 = note_new( F4, EIGHT, t116);
  note_t *t114 = note_new( D4, EIGHT, t115);

  note_t *t113 = note_new( C4, FORTH, t114);
  note_t *t112 = note_new( D4, FORTH, t113);
  note_t *t111 = note_new( F4, FORTH, t112);
  note_t *t110 = note_new( G4, FORTH, t111);
  note_t *t109 = note_new( A4, FORTH, t110);
  note_t *t108 = note_new( A4, FORTH, t109);

  note_t *t107 = note_new( G5, EIGHT, t108);
  note_t *t106 = note_new( F4, EIGHT, t107);
  note_t *t105 = note_new( G4, FORTH, t106);
  note_t *t104 = note_new( A4, FORTH, t105);
  note_t *t103 = note_new( B4_, EIGHT, t104);
  note_t *t102 = note_new( B4_, EIGHT, t103);
  // 20

  note_t *t101 = note_new( A4, EIGHT, t102);
  note_t *t100 = note_new( G4, EIGHT, t101);
  note_t *t099 = note_new( F4, FORTH, t100);
  note_t *t098 = note_new( F4, FORTH, t099);
  note_t *t097 = note_new( E4, EIGHT, t098);
  note_t *t096 = note_new( D4, EIGHT, t097);

  note_t *t095 = note_new( D4, EIGHT, t096);
  note_t *t094 = note_new( E4, EIGHT, t095);
  note_t *t093 = note_new( F4, EIGHT, t094);
  note_t *t092 = note_new( G4, EIGHT, t093);
  note_t *t091 = note_new( F4, FORTH, t092);
  note_t *t090 = note_new( C4, FORTH, t091);

  note_t *t089 = note_new( B3_, EIGHT, t090);
  note_t *t088 = note_new( A3, EIGHT, t089);
  note_t *t087 = note_new( C4, FORTH, t088);
  note_t *t086 = note_new( C4, FORTH, t087);
  note_t *t085 = note_new( C4, EIGHT, t086);
  note_t *t084 = note_new( D4, EIGHT, t085);

  note_t *t083 = note_new( C4, EIGHT, t084);
  note_t *t082 = note_new( D4, EIGHT, t083);
  note_t *t081 = note_new( D4, EIGHT, t082);
  note_t *t080 = note_new( E4, EIGHT, t081);
  note_t *t079 = note_new( F4, FORTH, t080);
  note_t *t078 = note_new( C4, FORTH, t079);
  // 16

  note_t *t077 = note_new( B3_, EIGHT, t078);
  note_t *t076 = note_new( A3, EIGHT, t077);
  note_t *t075 = note_new( PAUSE, FORTH, t076);
  note_t *t074 = note_new( C4, EIGHT, t075);
  note_t *t073 = note_new( D4, EIGHT, t074);
  note_t *t072 = note_new( E4, EIGHT, t073);
  note_t *t071 = note_new( F4_, EIGHT, t072);

  note_t *t070 = note_new( E4, EIGHT, t071);
  note_t *t069 = note_new( D4, EIGHT, t070);
  note_t *t068 = note_new( A3, EIGHT, t069);
  note_t *t067 = note_new( E4, EIGHT, t068);
  note_t *t066 = note_new( E4, EIGHT, t067);
  note_t *t065 = note_new( D4, EIGHT, t066);
  note_t *t064 = note_new( C4, FORTH, t065);

  note_t *t063 = note_new( C4, EIGHT, t064);
  note_t *t062 = note_new( E4, EIGHT, t063);
  note_t *t061 = note_new( G4, FORTH, t062);
  note_t *t060 = note_new( G4, EIGHT, t061);
  note_t *t059 = note_new( F4_, EIGHT, t060);
  note_t *t058 = note_new( E4, FORTH, t059);

  note_t *t057 = note_new( PAUSE, HALF, t058);
  note_t *t056 = note_new( A3, HALF, t057);
  // 12

  note_t *t055 = note_new( A3, EIGHT, t056);
  note_t *t054 = note_new( E4, EIGHT, t055);
  note_t *t053 = note_new( D4, FORTH, t054);
  note_t *t052 = note_new( D4, EIGHT, t053);
  note_t *t051 = note_new( F4_, EIGHT, t052);
  note_t *t050 = note_new( E4, FORTH, t051);

  note_t *t049 = note_new( E4, EIGHT, t050);
  note_t *t048 = note_new( E4, EIGHT, t049);
  note_t *t047 = note_new( F4_, EIGHT, t048);
  note_t *t046 = note_new( G4, EIGHT, t047);
  note_t *t045 = note_new( A3, EIGHT, t046);
  note_t *t044 = note_new( PAUSE, EIGHT, t045);
  note_t *t043 = note_new( PAUSE, FORTH, t044);

  note_t *t042 = note_new( PAUSE, HALF, t043);
  note_t *t041 = note_new( F4_, HALF, t042);

  note_t *t040 = note_new( E4, EIGHT, t041);
  note_t *t039 = note_new( E4, EIGHT, t040);
  note_t *t038 = note_new( F4_, EIGHT, t039);
  note_t *t037 = note_new( G4, EIGHT, t038);
  note_t *t036 = note_new( PAUSE, HALF, t037);
  // 85

  note_t *t035 = note_new( F4_, HALF, t036);
  note_t *t034 = note_new( F4_, FORTH_P, t035);
  note_t *t033 = note_new( A3, EIGHT, t034);

  note_t *t032 = note_new( A3, EIGHT, t033);
  note_t *t031 = note_new( A3, EIGHT, t032);
  note_t *t030 = note_new( E4, FORTH, t031);
  note_t *t029 = note_new( D4, FORTH_P, t030);
  note_t *t028 = note_new( C4, EIGHT, t029);

  note_t *t027 = note_new( C4, EIGHT, t028);
  note_t *t026 = note_new( E4, EIGHT, t027);
  note_t *t025 = note_new( G4, FORTH, t026);
  note_t *t024 = note_new( G4, EIGHT, t025);
  note_t *t023 = note_new( F4_, EIGHT, t024);
  note_t *t022 = note_new( E4, FORTH, t023);

  note_t *t021 = note_new( A3, EIGHT, t022);
  note_t *t019 = note_new( A3, EIGHT, t021);
  note_t *t018 = note_new( A3, HALF_P, t019);
  // 4

  note_t *t017 = note_new( A3, EIGHT, t018);
  note_t *t016 = note_new( E4, EIGHT, t017);
  note_t *t015 = note_new( D4, FORTH, t016);
  note_t *t014 = note_new( F4_, FORTH_P, t015);
  note_t *t013 = note_new( E4, EIGHT, t014);

  note_t *t012 = note_new( E4, EIGHT, t013);
  note_t *t011 = note_new( E4, EIGHT, t012);
  note_t *t010 = note_new( F4_, EIGHT, t011);
  note_t *t009 = note_new( G4, EIGHT, t010);
  note_t *t008 = note_new( A3, EIGHT, t009);
  note_t *t007 = note_new( PAUSE, EIGHT, t008);
  note_t *t006 = note_new( PAUSE, FORTH, t007);

  note_t *t005 = note_new( PAUSE, HALF, t006);
  note_t *t004 = note_new( F4_, HALF, t005);

  note_t *t003 = note_new( D4, EIGHT, t004);
  note_t *t002 = note_new( D4, EIGHT, t003);
  note_t *t001 = note_new( F4_, EIGHT, t002);
  note_t *t000 = note_new( G4, EIGHT, t001);
  // 0
  set_track( 0, t000 );
}

void silent( void ) {

  set_track(0, NULL);

}
/*
1000
1001
1002
1003
1004
1005
1006
1007
1008
1009
1010
1011
1012
1013
1014
1015
1016
1017
1018
1019
1020
1021
1022
1023
1024
1025
1026
1027
1028
1029
1030
1031
1032
1033
1034
1035
1036
1037
1038
1039
1040
1041
1042
1043
1044
1045
1046
1047
1048
1049
1050
1051
1052
1053
1054
1055
1056
1057
1058
1059
1060
1061
1062
1063
1064
1065
1066
1067
1068
1069
1070
1071
1072
1073
1074
1075
1076
1077
1078
1079
1080
1081
1082
1083
1084
1085
1086
1087
1088
1089
1090
1091
1092
1093
1094
1095
1096
1097
1098
1099
1100
1101
1102
1103
1104
1105
1106
1107
1108
1109
1110
1111
1112
1113
1114
1115
1116
1117
1118
1119
1120
1121
1122
1123
1124
1125
1126
1127
1128
1129
1130
1131
1132
1133
1134
1135
1136
1137
1138
1139
1140
1141
1142
1143
1144
1145
1146
1147
1148
1149
1150
1151
1152
1153
1154
1155
1156
1157
1158
1159
1160
1161
1162
1163
1164
1165
1166
1167
1168
1169
1170
1171
1172
1173
1174
1175
1176
1177
1178
1179
1180
1181
1182
1183
1184
1185
1186
1187
1188
1189
1190
1191
1192
1193
1194
1195
1196
1197
1198
1199
1200
1201
1202
1203
1204
1205
1206
1207
1208
1209
1210
1211
1212
1213
1214
1215
1216
1217
1218
1219
1220
1221
1222
1223
1224
1225
1226
1227
1228
1229
1230
1231
1232
1233
1234
1235
1236
1237
1238
1239
1240
1241
1242
1243
1244
1245
1246
1247
1248
1249
1250
1251
1252
1253
1254
1255
1256
1257
1258
1259
1260
1261
1262
1263
1264
1265
1266
1267
1268
1269
1270
1271
1272
1273
1274
1275
1276
1277
1278
1279
1280
1281
1282
1283
1284
1285
1286
1287
1288
1289
1290
1291
1292
1293
1294
1295
1296
1297
1298
1299
1300
1301
1302
1303
1304
1305
1306
1307
1308
1309
1310
1311
1312
1313
1314
1315
1316
1317
1318
1319
1320
1321
1322
1323
1324
1325
1326
1327
1328
1329
1330
1331
1332
1333
1334
1335
1336
1337
1338
1339
1340
1341
1342
1343
1344
1345
1346
1347
1348
1349
1350
1351
1352
1353
1354
1355
1356
1357
1358
1359
1360
1361
1362
1363
1364
1365
1366
1367
1368
1369
1370
1371
1372
1373
1374
1375
1376
1377
1378
1379
1380
1381
1382
1383
1384
1385
1386
1387
1388
1389
1390
1391
1392
1393
1394
1395
1396
1397
1398
1399
1400
1401
1402
1403
1404
1405
1406
1407
1408
1409
1410
1411
1412
1413
1414
1415
1416
1417
1418
1419
1420
1421
1422
1423
1424
1425
1426
1427
1428
1429
1430
1431
1432
1433
1434
1435
1436
1437
1438
1439
1440
1441
1442
1443
1444
1445
1446
1447
1448
1449
1450
1451
1452
1453
1454
1455
1456
1457
1458
1459
1460
1461
1462
1463
1464
1465
1466
1467
1468
1469
1470
1471
1472
1473
1474
1475
1476
1477
1478
1479
1480
1481
1482
1483
1484
1485
1486
1487
1488
1489
1490
1491
1492
1493
1494
1495
1496
1497
1498
1499
*/
