inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",1);

  set ("short", "摘星阁底层");
  set ("long", @LONG

    千金难求珍宝 家和易得欢笑 人生自是有情痴 愿作双飞鸟

    情两难分付 是一丝烦恼 蓦然回首神仙地 还是人间好


LONG);
        set("exits", ([
"117" : __DIR__"userroom/terry1317609806",
"116" : __DIR__"userroom/chi1315896743",
"115" : __DIR__"userroom/cen1315896657",
"114" : __DIR__"userroom/tun1315896573",
"113" : __DIR__"userroom/snoop1309267082",
"101" : __DIR__"userroom/hhua1295271887",
"112" : __DIR__"userroom/spp1267156776",
"111" : __DIR__"userroom/icecloud1267051694",
"110" : __DIR__"userroom/blocnum1267014127",
"109" : __DIR__"userroom/mouse1266803487",
"108" : __DIR__"userroom/duoduo1266080262",
"107" : __DIR__"userroom/zzzq1263466194",
"106" : __DIR__"userroom/mhate1261013360",
"105" : __DIR__"userroom/shuang1260254587",
"104" : __DIR__"userroom/coco1259405473",
"103" : __DIR__"userroom/qfuren1258548529",
"102" : __DIR__"userroom/replya1257503407",
  "up" : __DIR__"star"+(query("floor")+1), 
  "southeast" : __DIR__"enterance",
]));
        set("coor/x",-25);
        set("coor/y",-35);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
