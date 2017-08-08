/*
** 挂印封侯(猴)。
这棵生长在路东侧的古柏树传说是汉柏，苍郁挺拔，枝繁叶茂。
在它的主干与侧枝的交接处之上长了一个奇特的树瘤，
越看越像一只顽皮的猴子在猴头猴脑地到处张望，
胸前还挂着一个似圆似方的印牌，这就是岱庙八景之一的挂印封侯(猴)。
** 麒麟望月
在阁老池的东侧有古柏，树干上淤结了一个球状疤瘤，酷似一只双目仰视的瑞兽麒麟，
右上方还有一个圆形树疤，天然的组成了另一个岱庙八景之一-麒麟望月。
** 宁死不屈
池之北侧路东又有一株枯死的古柏，看它那躯体以顺时针方向拧扭盘旋而上，纹理清晰，
质感细腻，尤为奇特。传说它是一位古代忠臣的化身，在陪同天子祭泰山时，由于不满巨大的耗资而挡驾进谏，
激怒了天子，后在群臣的请求下虽免于一死，但又因他的耿直不阿，拒不谢罪而重被斩首，
他的魂魄就立于路旁向泰山神申冤告状，被列为岱庙八景之一---宁死不屈。
** 孤柏披忠
北距14米处的甬道上有一棵古柏独立阶下，传说是唐代忠臣安金藏的化身。
据传安金藏的魂魄曾来泰山神前告武则天灭子之状，化为此柏，因名“孤忠柏”，列为岱庙八景之一----孤柏披忠。
** 仙鹤展翅
在孤忠柏西侧的甬道下有一棵古柏，上有一枯枝向北，宛如展翅欲飞的仙鹤，这是岱庙八景之一----仙鹤展翅。
** 汉柏凌寒
古柏枝身扭结上耸，若虬龙蟠旋，虽然肤剥心枯，却又继生新枝，苍古葱郁，堪称绝奇。
被誉为泰安八景之一“汉柏凌寒”，也被列为岱庙八景之一。
** 唐槐抱子
唐槐原来高大茂盛，蔽荫亩许，后逐渐衰枯，建国前在兵荒马乱中摧折而亡。1952年在枯槐内植一小槐，俗称“唐槐抱子”，
今列为岱庙八景之一。今日新槐已扶疏郁茂，树前有双碑：一块是明万历年间甘一骥书“唐槐”大字碑；
另一块为清康熙年间张鹏翮题《唐槐诗》：“潇洒名山日正长，烟霞为侣足徜徉。谁能欹枕清风夜，一任槐花满地香。”
** 云列三台
在后花园的西墙下，也有一棵古柏，苍翠的树冠上，簇拥着茂密的枝叶，好似一团团云朵，
所以被称为“云列三台”，被列为岱庙八景之一。

*/


#include <room.h>
inherit ROOM;

string *scene = ({"挂印封侯","麒麟望月","宁死不屈","孤柏披忠","仙鹤展翅","汉柏凌寒","唐槐抱子","云列三台" });
string *scene_des = ({
"一棵苍郁挺拔，枝繁叶茂的汉柏，在它的主干与侧枝的交接处之上长了一个
奇特的树瘤，越看越像一只顽皮的猴子在猴头猴脑地到处张望，胸前还挂着
一个似圆似方的印牌。\n",
"一棵古柏树干上淤结了一个球状疤瘤，酷似一只双目仰视的瑞兽麒麟，右上
方还有一个圆形树疤。\n",
"一株枯死的古柏，看它那躯体以顺时针方向拧扭盘旋而上，纹理清晰，质感
细腻，尤为奇特。\n",
"一棵古柏独立阶下，传说是唐代忠臣安金藏的化身。据传安金藏的魂魄曾来
泰山神前告武则天灭子之状，化为此柏，因名“孤忠柏”。\n",
"甬道下有一棵古柏，上有一枯枝向北，宛如展翅欲飞的仙鹤。	\n",
"一棵古柏枝身扭结上耸，若虬龙蟠旋，虽然肤剥心枯，却又继生新枝，苍古
葱郁，堪称绝奇。\n",
"一棵唐槐，高大茂盛，蔽荫亩许，内又有一小槐，扶疏郁茂，树前有碑，上
题“潇洒名山日正长，烟霞为侣足徜徉。谁能欹枕清风夜，一任槐花满地香。”\n",
"一棵古柏，苍翠的树冠上，簇拥着茂密的枝叶，好似一团团云朵。\n",
});

void create()
{
  set("short","遥参亭");
  set("long",@LONG
遥参亭是岱庙的前庭，古帝王凡有事于岱宗，必先至此进行简单的参拜，然后
选择吉日良辰才再入庙祭神。亭前有石坊，建于清代乾隆三十五年，四柱三间，为
冲天柱式牌坊，顶端蹲立着“望天吼”石兽，额书“遥参亭”。坊的左右铁狮蹲列，
旗杆高竖。从此向北便可遥望泰山，因此此亭又称遥参亭。
LONG
  );
  	set("exits",([
         	"north":__DIR__"daimiao",
         	"south":__DIR__"shuanglong",
         	"east": __DIR__"e_peidian",
//         	"west": __DIR__"w_peidian",
               ]));
        set("objects", ([
        	__DIR__"npc/guard1":	2,
        
       	]) );
        set("item_desc", ([
        ]) );
	set("NONPC",1);
	set("coor/x",0);
	set("coor/y",-65);
	set("coor/z",0);
	setup();
  
}


