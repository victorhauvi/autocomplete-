#include "../autocomplete.h"
struct term susCases[] = {
{"suspicion", 3710730.},
{"suspected", 2810580.},
{"suspect", 2395310.},
{"suspended", 1604260.},
{"sustained", 1563040.},
{"susan", 1543820.},
{"suspicious", 1426170.},
{"suspicions", 1342080.},
{"sustain", 999361.},
{"suspense", 931244.},
{"susceptible", 610914.},
};
struct term impoCases[] = {
{"important", 13228800.},
{"impossible", 10933000.},
{"importance", 7006680.},
{"imposed", 2222850.},
{"imposing", 1021670.},
{"imported", 789789.},
{"import", 786783.},
{"impose", 736388.},
{"impossibility", 734647.},
{"impotent", 409807.},
};
struct term apCases[] = {
{"appeared", 16991300.},
{"appear", 11204400.},
{"appearance", 11093200.},
{"appears", 8415370.},
{"apparently", 5747110.},
{"approach", 5655580.},
{"appointed", 5584770.},
{"april", 4989920.},
{"apply", 4494350.},
{"apart", 4424810.},
{"approached", 4317690.},
{"appeal", 3612320.},
{"approaching", 3544910.},
{"apparent", 3346420.},
{"applicable", 3205200.},
{"apartment", 2904570.},
{"apt", 2732100.},
{"application", 2654250.},
{"appointment", 2093420.},
{"appearing", 2032820.},
{"appetite", 1750700.},
{"apprehension", 1661610.},
{"appropriate", 1562640.},
{"appreciate", 1506550.},
{"apple", 1484010.},
{"approval", 1450220.},
{"applause", 1417390.},
{"appealed", 1281400.},
{"apparatus", 1255600.},
{"appreciation", 1245560.},
{"approve", 1197690.},
{"apology", 1057110.},
{"approbation", 889947.},
{"apollo", 868823.},
{"apron", 851339.},
{"appoint", 713366.},
{"applying", 676815.},
{"apostle", 655217.},
{"appalling", 623651.},
{"apprehend", 621277.},
{"appealing", 618904.},
{"apparition", 615819.},
{"apparel", 583619.},
{"ape", 444142.},
{"applications", 442165.},
{"appropriation", 411469.},
{"apprentice", 408700.},
{"appellation", 398573.},
{"apiece", 395488.},
{"apprehensive", 395329.},
};
struct term deCases[] = {
{"def", 74899200.},
{"de", 43339300.},
{"death", 30965300.},
{"dear", 27050300.},
{"dead", 22404900.},
{"deep", 16381900.},
{"desire", 13828800.},
{"deal", 12018600.},
{"declared", 8656040.},
{"determined", 8587370.},
{"degree", 8029380.},
{"decided", 7176610.},
{"delight", 6497190.},
{"desired", 6274010.},
{"demanded", 5571800.},
{"december", 5354160.},
{"demand", 5025760.},
{"deeply", 4840470.},
{"destroy", 4826150.},
{"delicate", 4781850.},
{"devil", 4725440.},
{"degrees", 4711040.},
{"description", 4611200.},
{"despair", 4546330.},
{"details", 4427900.},
{"development", 4343170.},
{"devoted", 4307170.},
{"destroyed", 4264130.},
{"departure", 4110100.},
{"delivered", 4109940.},
{"desert", 3927820.},
{"destruction", 3850530.},
{"deck", 3796570.},
{"delay", 3777110.},
{"delighted", 3726400.},
{"design", 3585420.},
{"departed", 3454640.},
{"decision", 3406780.},
{"delightful", 3391510.},
{"derived", 3357570.},
{"desperate", 3184790.},
{"defective", 3169600.},
{"developed", 3147290.},
{"descended", 3132250.},
{"deny", 3125450.},
{"devotion", 2979170.},
{"debt", 2934630.},
{"declare", 2926010.},
{"deeds", 2836920.},
{"deed", 2811450.},
{"derive", 2810980.},
{"deserted", 2808210.},
{"deeper", 2750610.},
{"defend", 2726170.},
{"desires", 2724900.},
{"depends", 2721660.},
{"describe", 2660580.},
{"detail", 2608920.},
{"depth", 2590250.},
{"decide", 2577910.},
{"definite", 2539380.},
{"denied", 2528380.},
{"depths", 2461290.},
{"determine", 2459630.},
{"deliver", 2429650.},
{"desk", 2426330.},
{"depend", 2408050.},
{"determination", 2391830.},
{"defeat", 2366520.},
{"demands", 2363590.},
{"dearest", 2250220.},
{"deadly", 2171820.},
{"deceived", 2149590.},
{"depart", 2113590.},
{"defect", 2081870.},
{"destined", 2081470.},
{"derivative", 2049270.},
{"department", 2031550.},
{"deserve", 2021340.},
{"deemed", 1927910.},
{"desirable", 1914150.},
{"descent", 1884790.},
{"deer", 1832100.},
{"defeated", 1807340.},
{"deprived", 1806310.},
{"destiny", 1799910.},
{"declined", 1793260.},
{"designed", 1766680.},
{"den", 1754340.},
{"delicious", 1740100.},
{"dealing", 1719290.},
{"decent", 1716680.},
{"despite", 1677910.},
{"desirous", 1664460.},
{"del", 1635350.},
{"dealt", 1632180.},
{"deserved", 1620400.},
{"declaration", 1609480.},
{"designs", 1600460.},
{"dependent", 1573800.},
{"deliberately", 1548170.},
{"desolate", 1493890.},
{"descend", 1477990.},
{"deceive", 1456630.},
{"dedicated", 1455370.},
{"delicacy", 1445950.},
{"decline", 1435750.},
{"dense", 1428390.},
{"debts", 1403230.},
{"deepest", 1383690.},
{"decree", 1373960.},
{"defense", 1372300.},
{"deductible", 1368420.},
{"depended", 1361220.},
{"describes", 1340340.},
{"defiance", 1311380.},
{"defended", 1295950.},
{"despise", 1282660.},
{"declaring", 1266210.},
{"decidedly", 1239230.},
{"develop", 1237330.},
{"debate", 1221350.},
{"descending", 1199990.},
{"deliberate", 1185590.},
{"defined", 1182980.},
{"decisive", 1181160.},
{"dec", 1177120.},
{"dean", 1172540.},
{"democracy", 1166920.},
{"deposited", 1163600.},
{"detective", 1160910.},
{"delayed", 1155050.},
{"dew", 1152440.},
{"deaf", 1135830.},
{"devils", 1115650.},
{"despatched", 1111140.},
{"detected", 1100780.},
{"device", 1098490.},
{"descendants", 1071030.},
{"deceased", 1046590.},
{"democratic", 1044060.},
{"dearly", 1005610.},
{"delights", 996433.},
{"detached", 995642.},
{"desperately", 982035.},
{"detained", 973095.},
{"delaware", 972699.},
{"devote", 971513.},
{"decorated", 970563.},
{"destitute", 967241.},
{"definition", 963760.},
{"destination", 949836.},
{"destroying", 944693.},
{"detailed", 943981.},
{"demonstration", 928079.},
{"depression", 927763.},
{"desolation", 901576.},
{"definitely", 882589.},
{"deem", 851577.},
{"detach", 847858.},
{"destructive", 830453.},
{"deprive", 828317.},
{"detachment", 828080.},
{"despatch", 823333.},
{"devout", 818191.},
{"devised", 803080.},
{"depressed", 798966.},
{"deposit", 779425.},
{"demon", 773492.},
{"delivery", 768745.},
{"desiring", 759093.},
{"detect", 747859.},
{"denmark", 741530.},
{"deference", 734093.},
{"delete", 729426.},
{"dependence", 707748.},
{"deity", 705138.},
{"demanding", 700312.},
{"defy", 681720.},
{"degraded", 673413.},
{"despairing", 672068.},
{"dey", 668587.},
{"deserving", 667480.},
{"degradation", 659964.},
{"defending", 659331.},
{"deliberation", 658461.},
{"dealings", 657670.},
{"demonstrated", 657670.},
{"deserts", 651974.},
{"denial", 651420.},
{"denounced", 650312.},
{"developing", 644537.},
{"delicately", 642005.},
{"defensive", 640819.},
{"declining", 629743.},
{"deputy", 619933.},
{"deities", 613524.},
{"despotism", 609964.},
{"deception", 598255.},
{"devour", 593746.},
{"detain", 590107.},
{"deficient", 584252.},
{"decoration", 584094.},
{"define", 580455.},
{"devise", 574047.},
{"deceit", 564395.},
{"deals", 545803.},
{"decency", 545566.},
{"desperation", 537892.},
{"deposits", 536310.},
{"delirium", 512734.},
{"deficiency", 494538.},
{"denotes", 493114.},
{"descendant", 492085.},
{"dealer", 489079.},
{"deuce", 488288.},
{"decorations", 487655.},
{"deplorable", 477607.},
{"dexterity", 476263.},
{"defiant", 469142.},
{"demonstrate", 441453.},
{"derby", 436706.},
{"derision", 428557.},
{"demonstrations", 419538.},
{"detestable", 419063.},
{"desertion", 417007.},
{"depicted", 401500.},
};
struct term beCases[] = {
{"be", 566252700.},
{"been", 235765400.},
{"before", 111708900.},
{"being", 79222000.},
{"between", 47903400.},
{"because", 46558700.},
{"better", 41646300.},
{"best", 33754400.},
{"began", 32532700.},
{"believe", 28196500.},
{"behind", 22620500.},
{"became", 22481100.},
{"become", 22432600.},
{"beautiful", 19056300.},
{"bed", 17663500.},
{"beyond", 15834400.},
{"below", 14606200.},
{"bear", 13139700.},
{"beauty", 12958600.},
{"beginning", 12073300.},
{"beside", 10071000.},
{"begin", 9120750.},
{"beneath", 8545360.},
{"besides", 7052490.},
{"bent", 5893950.},
{"beat", 5545290.},
{"becomes", 5530740.},
{"bearing", 5131530.},
{"belief", 5072590.},
{"becoming", 4398540.},
{"beg", 4131220.},
{"behold", 3905110.},
{"belong", 3759390.},
{"belonged", 3688820.},
{"bell", 3492060.},
{"benefit", 3485420.},
{"begged", 3462630.},
{"beloved", 3368730.},
{"beast", 3258680.},
{"belonging", 3240480.},
{"begins", 3028850.},
{"beings", 3009310.},
{"beheld", 2868970.},
{"beasts", 2748480.},
{"beaten", 2651320.},
{"belongs", 2635030.},
{"ben", 2634630.},
{"bears", 2516590.},
{"beard", 2465880.},
{"beating", 2410580.},
{"behalf", 2234630.},
{"betrayed", 2157340.},
{"beach", 2143180.},
{"beds", 2057660.},
{"bestowed", 1913040.},
{"bedroom", 1831160.},
{"bench", 1820710.},
{"bells", 1790410.},
{"bending", 1637640.},
{"berlin", 1611380.},
{"beforehand", 1547060.},
{"beer", 1546500.},
{"behaviour", 1494050.},
{"bet", 1475380.},
{"betray", 1444840.},
{"bewildered", 1408850.},
{"beautifully", 1260040.},
{"beef", 1217080.},
{"behaved", 1209640.},
{"bestow", 1203710.},
{"benjamin", 1133060.},
{"beauties", 1117240.},
{"beggar", 1059170.},
{"beam", 1052280.},
{"beams", 1041760.},
{"bee", 1026890.},
{"begging", 1021670.},
{"behave", 990500.},
{"bees", 975152.},
{"betwixt", 939314.},
{"behavior", 850390.},
{"beads", 849441.},
{"beseech", 837574.},
{"benevolent", 837495.},
{"bedside", 788444.},
{"besieged", 775390.},
{"belgium", 766925.},
{"beans", 762099.},
{"benevolence", 759489.},
{"belly", 750944.},
{"befallen", 709252.},
{"beset", 700154.},
{"beneficial", 691688.},
{"beware", 596911.},
{"befall", 568351.},
{"belgian", 522623.},
{"berth", 514870.},
{"bewilderment", 512496.},
{"befell", 509253.},
{"benefactor", 477370.},
{"bengal", 470329.},
{"beak", 467006.},
{"bearded", 450234.},
{"beth", 445250.},
{"believer", 416927.},
{"beastly", 415978.},
{"beaver", 401817.},
{"bennett", 398890.},
};
struct term treCases[] = {
{"trees", 12646900.},
{"tree", 10287200.},
{"treated", 5237860.},
{"treatment", 4044910.},
{"trembling", 3811050.},
{"treat", 3155040.},
{"treaty", 3048320.},
{"treasure", 2735110.},
{"trembled", 2194760.},
{"tremendous", 2000620.},
{"treasury", 1987330.},
{"treasures", 1601880.},
{"tremble", 1395790.},
{"tread", 1372930.},
{"treachery", 1213520.},
{"treason", 1170950.},
{"trenches", 926735.},
{"treating", 871751.},
{"treacherous", 865501.},
{"treatise", 773492.},
{"trench", 670486.},
{"treaties", 645407.},
{"tremulous", 628081.},
{"tremor", 418589.},
};
struct term thCases[] = {
{"the", 5627187200.},
{"that", 1107331800.},
{"this", 401542500.},
{"they", 334039800.},
{"their", 282026500.},
{"them", 250991700.},
{"there", 196120000.},
{"than", 150877900.},
{"then", 125563600.},
{"these", 109051000.},
{"those", 87862100.},
{"through", 79292500.},
{"think", 71578000.},
{"thought", 67462300.},
{"though", 57087700.},
{"things", 56755900.},
{"three", 50214600.},
{"thing", 46147200.},
{"thou", 35585700.},
{"themselves", 32579300.},
{"thy", 30448900.},
{"thus", 27522100.},
{"thee", 26941400.},
{"therefore", 23828100.},
{"thousand", 21862300.},
{"thinking", 11975300.},
{"thoughts", 11725100.},
{"third", 10346800.},
{"that's", 9391240.},
{"threw", 7917910.},
{"thrown", 6893150.},
{"thirty", 6722900.},
{"there's", 6501780.},
{"thick", 6436430.},
{"throughout", 6089670.},
{"thin", 6006840.},
{"thomas", 5734140.},
{"throw", 5585010.},
{"thank", 5341340.},
{"theory", 4662150.},
{"thinks", 4605350.},
{"throne", 4555820.},
{"thoroughly", 4512310.},
{"throat", 4041430.},
{"thine", 4015710.},
{"thousands", 3946330.},
{"thanks", 3764210.},
{"thrust", 3439530.},
{"thence", 3338270.},
{"th'", 3081230.},
{"threatened", 3012080.},
{"thereof", 2975850.},
{"thither", 2802830.},
{"throwing", 2734000.},
{"thereby", 2446500.},
{"they're", 2371900.},
{"theatre", 2371100.},
{"therein", 2290170.},
{"thunder", 2274900.},
{"thyself", 1829650.},
{"theirs", 1779340.},
{"thanked", 1699270.},
{"thread", 1643580.},
{"thief", 1615250.},
{"thirst", 1602750.},
{"threatening", 1599910.},
{"threshold", 1589460.},
{"thoughtful", 1576880.},
{"thirteen", 1529020.},
{"theme", 1322930.},
{"thankful", 1322770.},
{"they'll", 1281790.},
{"thorough", 1275540.},
{"throng", 1269130.},
{"thoughtfully", 1265260.},
{"theories", 1209960.},
{"thursday", 1200940.},
{"thrill", 1152200.},
{"thieves", 1009320.},
{"threats", 968744.},
{"they'd", 966133.},
{"thumb", 963681.},
{"threat", 957193.},
{"throws", 951655.},
{"they've", 920326.},
{"theology", 887020.},
{"thrice", 861308.},
{"thompson", 852289.},
{"thickly", 797859.},
{"thereupon", 782036.},
{"thickness", 770802.},
{"theodore", 756561.},
{"theological", 732827.},
{"thames", 731403.},
{"thrilling", 727606.},
{"threaten", 718429.},
{"thrilled", 713128.},
{"thicket", 706641.},
{"thereto", 699600.},
{"thereafter", 689078.},
{"thirsty", 688049.},
{"threads", 681720.},
{"theatrical", 628793.},
{"thereon", 621119.},
{"theft", 616452.},
{"therewith", 598176.},
{"theater", 555139.},
{"thanksgiving", 555060.},
{"thirteenth", 541848.},
{"thermometer", 538604.},
{"thorn", 519617.},
{"thigh", 487576.},
{"thoughtless", 480297.},
{"thirty-six", 473335.},
{"thomson", 468193.},
{"thebes", 462022.},
{"thirty-two", 417481.},
{"therefrom", 408541.},
{"three-quarters", 402529.},
};
struct term canCases[] = {
{"can", 121007400.},
{"cannot", 35565600.},
{"can't", 17672800.},
{"canada", 2287240.},
{"candle", 2089460.},
{"canoe", 1931080.},
{"cannon", 1530210.},
{"candles", 1241210.},
{"canal", 1161620.},
{"candidate", 1069690.},
{"cane", 1010670.},
{"canst", 992082.},
{"canadian", 989788.},
{"candid", 588841.},
{"candy", 553161.},
{"canon", 513288.},
{"canopy", 436073.},
{"canyon", 410598.},
{"canton", 394617.},
};
struct term dickCases[] = {
{"dick", 4639920.},
{"dickens", 648651.},
};
struct term ballsCases[] = {
{"balls", 1295560.},
};
struct term neverCases[] = {
{"never", 89967300.},
{"nevertheless", 3320310.},
};
struct term goingCases[] = {
{"going", 41931500.},
};
struct term toCases[] = {
{"to", 2595609600.},
{"too", 75885600.},
{"took", 50166900.},
{"told", 42469600.},
{"together", 30495500.},
{"towards", 20819900.},
{"town", 20568700.},
{"toward", 15297200.},
{"tone", 10156900.},
{"tom", 9709350.},
{"top", 9199550.},
{"touch", 8139660.},
{"touched", 6264990.},
{"tongue", 6211980.},
{"total", 4543880.},
{"towns", 3524020.},
{"touching", 2814690.},
{"tower", 2728540.},
{"tones", 2706470.},
{"torn", 2615170.},
{"tobacco", 2115410.},
{"tomb", 2089540.},
{"today", 2001640.},
{"tore", 1656080.},
{"torture", 1581870.},
{"totally", 1482190.},
{"tossed", 1438830.},
{"tongues", 1379970.},
{"towers", 1343420.},
{"tomorrow", 1260040.},
{"tools", 1231240.},
{"tommy", 1209170.},
{"token", 1205450.},
{"tops", 1129020.},
{"touches", 1098410.},
{"tour", 1051250.},
{"torment", 1016760.},
{"tons", 1008850.},
{"torrent", 1003000.},
{"topic", 923728.},
{"tonight", 879741.},
{"tolerably", 855374.},
{"tough", 823017.},
{"tortured", 798254.},
{"torch", 786229.},
{"toast", 756403.},
{"topics", 738049.},
{"tooth", 710913.},
{"tolerable", 709647.},
{"tool", 661704.},
{"toy", 635597.},
{"ton", 602132.},
{"toilet", 595328.},
{"toe", 584015.},
{"toss", 538129.},
{"tony", 518746.},
{"tout", 480851.},
{"township", 402924.},
{"toleration", 400551.},
};
struct term giveCases[] = {
{"give", 55400300.},
{"given", 34414100.},
{"gives", 8363950.},
};
struct term youCases[] = {
{"you", 604890300.},
{"your", 165855300.},
{"young", 59182100.},
{"yourself", 13161700.},
{"youth", 10809700.},
{"yours", 6077020.},
{"you'll", 5674010.},
{"you've", 4345460.},
{"younger", 4182570.},
{"you'd", 3300850.},
{"yourselves", 1852990.},
{"youthful", 1790650.},
{"youngest", 1239540.},
};
struct term upCases[] = {
{"up", 179271200.},
{"upon", 142459500.},
{"upper", 5016820.},
{"upward", 2019290.},
{"upright", 1922850.},
{"upstairs", 1887330.},
{"upwards", 1423560.},
{"upset", 1225150.},
{"uproar", 695169.},
{"uppermost", 444854.},
};
struct term momCases[] = {
{"moment", 39098800.},
{"moments", 5067610.},
{"momentary", 1116920.},
{"momentous", 469617.},
};
