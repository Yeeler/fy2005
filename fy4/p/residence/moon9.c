inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",9);

  set ("short", "新月楼"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG
    
    舍却残生犹不悔
     
    身已空 尽成泪
       
    路长梦短无寻处 总是情愁滋味 
       
    眉间心上 柔肠百结 尽付东流水
    
LONG);
        set("exits", ([
"913" : __DIR__"userroom/wokao1308416737",
"912" : __DIR__"userroom/doszhou1302882715",
"911" : __DIR__"userroom/xuedos1302882373",
"910" : __DIR__"userroom/abroad1300699324",
"909" : __DIR__"userroom/rep1286117559",
"908" : __DIR__"userroom/ruo1283961033",
"907" : __DIR__"userroom/daow1281359445",
"906" : __DIR__"userroom/atao1280673471",
"905" : __DIR__"userroom/lail1278108858",
"904" : __DIR__"userroom/cac1278108155",
"903" : __DIR__"userroom/yucun1274539611",
"902" : __DIR__"userroom/vivie1272205481",
"901" : __DIR__"userroom/xuxin1271005902",
  "down" : __DIR__"moon"+(query("floor")-1),
]));
        set("coor/x",-15);
        set("coor/y",-35);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/