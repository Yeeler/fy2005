inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",7);

  set ("short", "ժ��¥"+CHINESE_D->chinese_number(query("floor"))+"��");
  set ("long", @LONG
  
    ������������   �������᳦   
    
    �����˹���ãã   ��̺޳�

LONG);
        set("exits", ([
"717" : __DIR__"userroom/mrtj1318994188",
"716" : __DIR__"userroom/zzzi1311857878",
"715" : __DIR__"userroom/zzzy1311592132",
"714" : __DIR__"userroom/zzzm1306596769",
"713" : __DIR__"userroom/sunf1306512809",
"712" : __DIR__"userroom/mengyc1305396112",
"711" : __DIR__"userroom/man1305095037",
"710" : __DIR__"userroom/zzzzq1300505581",
"709" : __DIR__"userroom/zzzze1300027105",
"708" : __DIR__"userroom/zzzt1299933687",
"707" : __DIR__"userroom/songshan1299258276",
"706" : __DIR__"userroom/taishan1299258234",
"705" : __DIR__"userroom/henshan1299258182",
"704" : __DIR__"userroom/hengshan1299258114",
"703" : __DIR__"userroom/huashan1299258016",
"702" : __DIR__"userroom/zzzh1298519438",
"701" : __DIR__"userroom/heyl1270712342",
  "down" : __DIR__"star"+(query("floor")-1),
  "up" : __DIR__"star"+(query("floor")+1), 
]));
        set("coor/x",-25);
        set("coor/y",-35);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
