inherit __DIR__"ann_residence.c";

void create ()
{
  set("floor",4);

  set ("short", "怒涛阁"+CHINESE_D->chinese_number(query("floor"))+"层");
  set ("long", @LONG
  
    醉里且贪欢笑，要愁那得功夫。近来始觉古人书，信着全无是处。
    
    昨夜松边醉倒，问松我醉如何？只疑松动要来扶，以手推松曰去！
    
LONG);
        set("exits", ([
"415" : __DIR__"userroom/rsa1323165070",
"414" : __DIR__"userroom/reach1323162248",
"413" : __DIR__"userroom/laowuc1308329886",
"412" : __DIR__"userroom/asheng1303617901",
"411" : __DIR__"userroom/felipe1303394903",
"410" : __DIR__"userroom/gber1299171645",
"409" : __DIR__"userroom/huaser1299111051",
"408" : __DIR__"userroom/diwger1299008856",
"407" : __DIR__"userroom/hser1298762897",
"406" : __DIR__"userroom/fking1283956677",
"405" : __DIR__"userroom/eking1283956617",
"404" : __DIR__"userroom/dking1283956550",
"403" : __DIR__"userroom/cking1283956500",
"402" : __DIR__"userroom/bking1283956440",
"401" : __DIR__"userroom/aking1283956268",
  "down" : __DIR__"surge"+(query("floor")-1),
  "up" : __DIR__"surge"+(query("floor")+1), 
]));
        set("coor/x",-15);
        set("coor/y",-45);
        set("coor/z",query("floor")*40);
        setup();
}

/*
*/
