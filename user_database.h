
#define MAX_BORROW_LIMIT 5
#define USERNAME_SIZE 50
#define PASSWORD_SIZE 50

typedef struct User
{
    unsigned int id;
    char username[USERNAME_SIZE];
    char password[PASSWORD_SIZE];
    unsigned int userType; // 1 for Admin, 2 for Faculty , 3 for User
    unsigned int borrowedBooksUID[MAX_BORROW_LIMIT]
} User;

User Adminbase[10] = {
    {0, "1162hsw", "!yac$6@kgp96", 1, {0, 0, 0}},
    {1, "9374ygh", "lfsxe6xe5$lu", 1, {0, 0, 0}},
    {2, "4166vdb", "zqirxlvs3osn", 1, {0, 0, 0}},
    {3, "2799ggc", "4!80&87ut#pl", 1, {0, 0, 0}},
    {4, "4107vue", "loy6pldp6@qa", 1, {0, 0, 0}},
    {5, "1657ufk", "@$&ate7fv8f5", 1, {0, 0, 0}},
    {6, "9527rtr", "9cid1e!d4&#n", 1, {0, 0, 0}},
};

User Facultybase[15] = {
    {100, "4348wuy", "j8ne$!pp6opf", 2, {0, 0, 0}},
    {101, "7738exr", "iw8wz$547kd9", 2, {0, 0, 0}},
    {102, "6023sjm", "8j0!@!vld9r0", 2, {0, 0, 0}},
    {103, "4470jte", "9@hmdzr7t6v5", 2, {0, 0, 0}},
    {104, "3450bjj", "&e6s#2&57lct", 2, {0, 0, 0}},
    {105, "4307lup", "a8bv31r!r$h@", 2, {0, 0, 0}},
    {106, "7392qth", "#pg4o3scvr3a", 2, {0, 0, 0}},
    {107, "5575izh", "1t4z#gar861i", 2, {0, 0, 0}},
    {108, "7400nts", "8ygr$&2x9$mw", 2, {0, 0, 0}},
    {109, "1441ifp", "e8q@@$8$&&d5", 2, {0, 0, 0}},
    {110, "2918awy", "fz$y8f342p9t", 2, {0, 0, 0}},
    {111, "2888pqk", "mvaxgtom3gcg", 2, {0, 0, 0}},
    {112, "6671xjv", "15x&r5e&7j!e", 2, {0, 0, 0}},
    {113, "1834rlg", "poi@o@mcc$c$", 2, {0, 0, 0}},
    {114, "7844lst", "hq#4@4i2ac9&", 2, {0, 0, 0}},
};

User userbase[100] = {
    {1000, "3493tfk", "1$rjn2lnfflx", 3, {0, 0, 0}},
    {1001, "7807oqb", "@o7!4sd7kamb", 3, {0, 0, 0}},
    {1002, "6146tgt", "ugou4#mp1nqx", 3, {0, 0, 0}},
    {1003, "8040jxd", "u0cev7p#fh4t", 3, {0, 0, 0}},
    {1004, "1775mvm", "1uu#ywrv0lra", 3, {0, 0, 0}},
    {1005, "2586mfx", "8$$j0czuezr5", 3, {0, 0, 0}},
    {1006, "9594ruz", "&4pw9g7tl@q0", 3, {0, 0, 0}},
    {1007, "1552dxh", "vh&yxxnm&gb9", 3, {0, 0, 0}},
    {1008, "8249jdd", "6z#0ib7a3crj", 3, {0, 0, 0}},
    {1009, "4750gbx", "drag0k!&x#6r", 3, {0, 0, 0}},
    {1010, "3220kuo", "os52i&a7kqkc", 3, {0, 0, 0}},
    {1011, "5032unr", "n3z&000h&gyq", 3, {0, 0, 0}},
    {1012, "2372trg", "h79@7wdvdrr@", 3, {0, 0, 0}},
    {1013, "4094scv", "tn&apdbav047", 3, {0, 0, 0}},
    {1014, "5134pwe", "@#mfcj53j931", 3, {0, 0, 0}},
    {1015, "9914wge", "70u&ob1@aeo8", 3, {0, 0, 0}},
    {1016, "9634jbq", "yigk!9ocir7e", 3, {0, 0, 0}},
    {1017, "1115llx", "gdhcdv2x2pcv", 3, {0, 0, 0}},
    {1018, "9974jpo", "!z$9#i71m4e&", 3, {0, 0, 0}},
    {1019, "4066rif", "nfoz@#28bvku", 3, {0, 0, 0}},
    {1020, "8278uef", "6qwi3m5b!r1s", 3, {0, 0, 0}},
    {1021, "8497zsm", "12g9uzfar9jg", 3, {0, 0, 0}},
    {1022, "6462slu", "f393f31y@s&0", 3, {0, 0, 0}},
    {1023, "6306uvp", "qmd8yiabh1dm", 3, {0, 0, 0}},
    {1024, "7168apj", "8@mpa1g@sn12", 3, {0, 0, 0}},
    {1025, "5623agb", "7nasn1wcrnxx", 3, {0, 0, 0}},
    {1026, "4003dys", "oq45s$d40kpd", 3, {0, 0, 0}},
    {1027, "9110akm", "n57!1lo!dpj7", 3, {0, 0, 0}},
    {1028, "5518nqa", "zky95nd&batf", 3, {0, 0, 0}},
    {1029, "1891wan", "v4#0i33p58da", 3, {0, 0, 0}},
    {1030, "3114qac", "20&kdyqen$ui", 3, {0, 0, 0}},
    {1031, "2938osi", "njk@xnyrvvht", 3, {0, 0, 0}},
    {1032, "1559njv", "w6xcoi!jvqc6", 3, {0, 0, 0}},
    {1033, "1364jxg", "4xl7dk0n7#59", 3, {0, 0, 0}},
    {1034, "5880mvb", "1rsfcn0vswo0", 3, {0, 0, 0}},
    {1035, "6132hxw", "&rwb2u7ydp&&", 3, {0, 0, 0}},
    {1036, "1855pls", "ca@wihz@glft", 3, {0, 0, 0}},
    {1037, "2789orm", "bzz2nu$ae0i$", 3, {0, 0, 0}},
    {1038, "6818ocd", "5xbu@fq2$!5e", 3, {0, 0, 0}},
    {1039, "2195ijx", "sksrao6wmsr2", 3, {0, 0, 0}},
    {1040, "1714wwu", "ae2wxg!z87dj", 3, {0, 0, 0}},
    {1041, "7472rza", "tzelc#1hgh15", 3, {0, 0, 0}},
    {1042, "9192bnt", "c!vm&phr$6v9", 3, {0, 0, 0}},
    {1043, "9120usq", "h1qx20j4!sih", 3, {0, 0, 0}},
    {1044, "9209imc", "rqwpc2&fz0it", 3, {0, 0, 0}},
    {1045, "5809sdz", "p0rr@9yhekq5", 3, {0, 0, 0}},
    {1046, "5187dkd", "slme0hwat0zu", 3, {0, 0, 0}},
    {1047, "9113kcr", "boa3c&iz!u5i", 3, {0, 0, 0}},
    {1048, "5363jmh", "7we2myk!lpeb", 3, {0, 0, 0}},
    {1049, "5620clc", "crcpaovs9goo", 3, {0, 0, 0}},

};