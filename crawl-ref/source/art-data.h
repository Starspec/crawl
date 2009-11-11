/*
 * File:       art-data.h
 * Summary:    Definitions for unrandom artefacts.
 */

/*
 * This file is automatically generated from art-data.txt via
 * util/art-data.pl.  Do not directly edit this file, but rather change
 * art-data.txt.
 *
 * If the unrandart_entry struct is changed or a new artefact property is
 * added to artefact_prop_type, then change art-data.pl so that the
 * art-data.h file it produces matches up with the new structure.
 */

#ifdef ART_DATA_H
#error "art-data.h included twice!"
#endif

#ifndef ART_FUNC_H
#error "art-func.h must be included before art-data.h"
#endif

#define ART_DATA_H

/* 1: UNRAND_DUMMY1 */
{
    "DUMMY UNRANDART 1", "DUMMY UNRANDART 1", 
    OBJ_UNASSIGNED, 250, 250, 250, BLACK, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 2: UNRAND_SINGING_SWORD */
{
    "Singing Sword", "golden long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +7, +7, ETC_GOLD, 1200, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "This blessed weapon loves nothing more than to sing to its owner, whether they want it to or not.", 
    "", 
    _SINGING_SWORD_equip, _SINGING_SWORD_unequip, NULL, { NULL }, NULL, 
},

/* 3: UNRAND_TROG */
{
    "Wrath of Trog", "bloodstained battleaxe", 
    OBJ_WEAPONS, WPN_BATTLEAXE, +3, +11, ETC_BLOOD, 1000, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "This was the favourite weapon of the old god Trog, before it was lost one day. It induces a bloodthirsty berserker rage in anyone who uses it to strike another.", 
    "", 
    _TROG_equip, _TROG_unequip, NULL, { _TROG_melee_effect }, NULL, 
},

/* 4: UNRAND_VARIABILITY */
{
    "Mace of Variability", "shimmering mace", 
    OBJ_WEAPONS, WPN_MACE, 0, 0, ETC_RANDOM, 700, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "It is rather unreliable.", 
    "", 
    NULL, NULL, _VARIABILITY_world_reacts, { NULL }, NULL, 
},

/* 5: UNRAND_PRUNE */
{
    "Glaive of Prune", "purple glaive", 
    OBJ_WEAPONS, WPN_GLAIVE, 0, +12, MAGENTA, 1000, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "It is the creation of a mad god, and carries a curse which transforms anyone possessing it into a prune. Fortunately, the curse works very slowly, and one can use it briefly with no consequences worse than slightly purple skin and a few wrinkles.", 
    "", 
    _PRUNE_equip, NULL, NULL, { NULL }, NULL, 
},

/* 6: UNRAND_POWER */
{
    "Sword of Power", "chunky great sword", 
    OBJ_WEAPONS, WPN_GREAT_SWORD, 0, 0, RED, 1000, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "It rewards the powerful with power and the meek with weakness.", 
    "", 
    _POWER_equip, NULL, _POWER_world_reacts, { NULL }, NULL, 
},

/* 7: UNRAND_OLGREB */
{
    "Staff of Olgreb", "green glowing staff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, 0, 0, ETC_POISON, 1000, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "It was the magical weapon wielded by the mighty wizard Olgreb before he met his fate somewhere within these dungeons. It increases the ability of its wielder to use venomous magic, and carries magical powers which can be evoked.", 
    "", 
    _OLGREB_equip, _OLGREB_unequip, _OLGREB_world_reacts, { NULL }, _OLGREB_evoke, 
},

/* 8: UNRAND_WUCAD_MU */
{
    "Staff of Wucad Mu", "ephemeral quarterstaff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, 0, 0, ETC_MAGIC, 1000, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "Its power varies in proportion to its wielder's intelligence. Using it can be a bit risky.", 
    "", 
    _WUCAD_MU_equip, _WUCAD_MU_unequip, _WUCAD_MU_world_reacts, { _WUCAD_MU_melee_effect }, _WUCAD_MU_evoke, 
},

/* 9: UNRAND_VAMPIRES_TOOTH */
{
    "Vampire's Tooth", "ivory dagger", 
    OBJ_WEAPONS, WPN_DAGGER, +3, +4, ETC_BONE, 1000, 
    UNRAND_FLAG_SPECIAL, 
    {
        SPWPN_VAMPIRICISM, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "It is lethally vampiric.", 
    "", 
    _VAMPIRES_TOOTH_equip, NULL, NULL, { NULL }, NULL, 
},

/* 10: UNRAND_CURSES */
{
    "Scythe of Curses", "warped scythe", 
    OBJ_WEAPONS, WPN_SCYTHE, +13, +13, ETC_NECRO, 800, 
    UNRAND_FLAG_SPECIAL | UNRAND_FLAG_EVIL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 3, 0, 0, 
        0, 
    },
    "", 
    "This weapon carries a terrible and highly irritating curse.", 
    "", 
    _CURSES_equip, NULL, _CURSES_world_reacts, { _CURSES_melee_effect }, NULL, 
},

/* 11: UNRAND_TORMENT */
{
    "Sceptre of Torment", "jewelled golden mace", 
    OBJ_WEAPONS, WPN_MACE, +7, +6, ETC_GOLD, 1200, 
    UNRAND_FLAG_SPECIAL | UNRAND_FLAG_EVIL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "This truly accursed weapon is an instrument of Hell.", 
    "", 
    _TORMENT_equip, NULL, _TORMENT_world_reacts, { _TORMENT_melee_effect }, NULL, 
},

/* 12: UNRAND_ZONGULDROK */
{
    "Sword of Zonguldrok", "bone long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +9, +9, ETC_BONE, 1250, 
    UNRAND_FLAG_SPECIAL | UNRAND_FLAG_EVIL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "This dreadful weapon is used at the user's peril.", 
    "", 
    _ZONGULDROK_equip, NULL, _ZONGULDROK_world_reacts, { _ZONGULDROK_melee_effect }, NULL, 
},

/* 13: UNRAND_CEREBOV */
{
    "Sword of Cerebov", "great serpentine sword", 
    OBJ_WEAPONS, WPN_GREAT_SWORD, +6, +6, ETC_FIRE, 2000, 
    UNRAND_FLAG_SPECIAL | UNRAND_FLAG_UNHOLY, 
    {
        SPWPN_FLAMING, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, -1, 0, 0, 
        0, 
    },
    "Eerie flames cover its twisted blade.", 
    "", 
    "", 
    NULL, NULL, NULL, { _CEREBOV_melee_effect }, NULL, 
},

/* 14: UNRAND_DISPATER */
{
    "Staff of Dispater", "golden staff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, +4, +4, ETC_GOLD, 1200, 
    UNRAND_FLAG_SPECIAL | UNRAND_FLAG_UNHOLY, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "This legendary item can unleash the fury of Hell.", 
    "", 
    NULL, NULL, NULL, { _DISPATER_melee_effect }, _DISPATER_evoke, 
},

/* 15: UNRAND_ASMODEUS */
{
    "Sceptre of Asmodeus", "ruby sceptre", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, +7, +7, ETC_BLOOD, 1500, 
    UNRAND_FLAG_SPECIAL | UNRAND_FLAG_EVIL, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "It carries some of the powers of the arch-fiend Asmodeus.", 
    "", 
    NULL, NULL, NULL, { _ASMODEUS_melee_effect }, _ASMODEUS_evoke, 
},

/* 16: UNRAND_BLOODBANE */
{
    "long sword \"Bloodbane\"", "blackened long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +7, +8, ETC_DARK, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VORPAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 1, 0, 
        0, 0, 0, 0, -20, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 17: UNRAND_FLAMING_DEATH */
{
    "scimitar of Flaming Death", "smoking scimitar", 
    OBJ_WEAPONS, WPN_SCIMITAR, +7, +5, ETC_FIRE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_FLAMING, 0, 0, 0, 0, 0, 
        2, -1, 0, 1, 0, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 18: UNRAND_BRILLIANCE */
{
    "mace of Brilliance", "brightly glowing mace", 
    OBJ_WEAPONS, WPN_MACE, +5, +5, ETC_HOLY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_HOLY_WRATH, 5, 0, 0, 5, 0, 
        0, 0, 0, 0, 1, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, -20, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 19: UNRAND_LEECH */
{
    "demon blade \"Leech\"", "runed demon blade", 
    OBJ_WEAPONS, WPN_DEMON_BLADE, +13, +4, MAGENTA, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VAMPIRICISM, 0, -1, -1, -1, -1, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 4, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 20: UNRAND_CHILLY_DEATH */
{
    "dagger of Chilly Death", "sapphire dagger", 
    OBJ_WEAPONS, WPN_DAGGER, +5, +7, ETC_ICE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_FREEZING, 0, 0, 0, 0, 0, 
        -1, 2, 0, 1, 0, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A dagger made of one huge piece of sapphire.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 21: UNRAND_MORG */
{
    "dagger \"Morg\"", "rusty dagger", 
    OBJ_WEAPONS, WPN_DAGGER, -1, +4, LIGHTRED, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_PAIN, 0, 0, 0, 5, 0, 
        0, 0, 0, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "An ugly rusty dagger.", 
    "", 
    "Many years ago it was the property of a powerful mage called Boris. He got lost in the Dungeon while seeking the Orb.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 22: UNRAND_FINISHER */
{
    "scythe \"Finisher\"", "blackened scythe", 
    OBJ_WEAPONS, WPN_SCYTHE, +3, +5, ETC_DARK, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_SPEED, 0, 0, 3, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, -1, 0, 0, 
        0, 
    },
    "A long and sharp scythe, specially modified for combat purposes.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 23: UNRAND_PUNK */
{
    "sling \"Punk\"", "blue sling", 
    OBJ_WEAPONS, WPN_SLING, +9, +12, ETC_ICE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_FROST, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A sling made of weird blue leather.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 24: UNRAND_KRISHNA */
{
    "bow of Krishna \"Sharnga\"", "golden bow", 
    OBJ_WEAPONS, WPN_BOW, +8, +8, ETC_GOLD, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_SPEED, 0, 0, 0, 0, 3, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A wonderful golden bow.", 
    "", 
    "It once belonged to a foreign god. It works best with special arrows which are not generally available.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 25: UNRAND_SKULLCRUSHER */
{
    "giant club \"Skullcrusher\"", "brutal giant club", 
    OBJ_WEAPONS, WPN_GIANT_CLUB, +0, +5, BROWN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_SPEED, 0, 0, 5, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 26: UNRAND_GUARD */
{
    "glaive of the Guard", "polished glaive", 
    OBJ_WEAPONS, WPN_GLAIVE, +5, +8, ETC_ELECTRICITY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_ELECTROCUTION, 5, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "This weapon once belonged to Gar Dogh, the guard of a king's treasures. According to legend he was lost somewhere in the Dungeon.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 27: UNRAND_JIHAD */
{
    "sword of Jihad", "crystal sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +12, +10, ETC_HOLY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_HOLY_WRATH, 0, 3, 0, 0, 0, 
        0, 0, 0, 0, 1, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 0, 
        0, 0, 0, 0, -50, 0, 
        0, 
    },
    "A long sword made of one huge piece of crystal.", 
    "", 
    "This sword was The Shining One's gift to a worshipper.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 28: UNRAND_HELLFIRE */
{
    "crossbow \"Hellfire\"", "flaming crossbow", 
    OBJ_WEAPONS, WPN_CROSSBOW, +6, +9, ETC_FIRE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_FLAME, 0, 0, 0, 0, 0, 
        2, -1, 0, 0, 0, 40, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A flaming crossbow, forged in the fires of the Hells.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 29: UNRAND_DOOM_KNIGHT */
{
    "sword of the Doom Knight", "adamantine great sword", 
    OBJ_WEAPONS, WPN_GREAT_SWORD, +13, +13, BLUE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_PAIN, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "An adamantine great sword.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 30: UNRAND_EOS */
{
    "\"Eos\"", "encrusted morningstar", 
    OBJ_WEAPONS, WPN_MORNINGSTAR, +5, +5, ETC_JEWEL, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_ELECTROCUTION, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 31: UNRAND_BOTONO */
{
    "spear of the Botono", "ebony spear", 
    OBJ_WEAPONS, WPN_SPEAR, +2, +10, ETC_UNHOLY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VAMPIRICISM, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 1, 0, 
        0, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, -30, 0, 
        0, 
    },
    "", 
    "", 
    "A really dark and malign artefact, which no wise man would even touch.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 32: UNRAND_OCTOPUS_KING */
{
    "trident of the Octopus King", "mangy trident", 
    OBJ_WEAPONS, WPN_TRIDENT, +10, +4, ETC_WATER, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 1, 1, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "This trident was stolen many years ago from the Octopus King's garden by a really unimportant and already dead man. But beware of the Octopus King's wrath!", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 33: UNRAND_ARGA */
{
    "mithril axe \"Arga\"", "mithril axe", 
    OBJ_WEAPONS, WPN_WAR_AXE, +10, +6, WHITE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_SPEED, 0, 0, 2, 0, 0, 
        0, 0, 0, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A beautiful mithril axe, probably lost by some dwarven hero.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 34: UNRAND_ELEMENTAL_STAFF */
{
    "Elemental Staff", "black staff", 
    OBJ_WEAPONS, WPN_QUARTERSTAFF, +3, +1, DARKGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_PROTECTION, 0, 0, 0, 0, 0, 
        2, 2, 0, 0, 0, 60, 
        0, 0, 0, 0, 0, 1, 
        0, 0, 0, 0, 2, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "This powerful staff used to belong to the leader of the Guild of Five Elements.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 35: UNRAND_SNIPER */
{
    "hand crossbow \"Sniper\"", "black crossbow", 
    OBJ_WEAPONS, WPN_HAND_CROSSBOW, +10, +0, ETC_DARK, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A hand crossbow made of some black material.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 36: UNRAND_PIERCER */
{
    "longbow \"Piercer\"", "very long metal bow", 
    OBJ_WEAPONS, WPN_LONGBOW, +2, +10, CYAN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VORPAL, 0, -2, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "An exceptionally large metal longbow.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 37: UNRAND_BLOWGUN_ASSASSIN */
{
    "blowgun of the Assassin", "tiny blowgun", 
    OBJ_WEAPONS, WPN_BLOWGUN, +6, +6, WHITE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 60, 0, 
        0, 
    },
    "It is designed for easy concealment, but still packs a nasty punch.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 38: UNRAND_WYRMBANE */
{
    "Wyrmbane", "scale-covered lance", 
    OBJ_WEAPONS, WPN_SPEAR, +9, +6, LIGHTGREEN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_DRAGON_SLAYING, 5, 0, 0, 0, 0, 
        1, 0, 0, 1, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 39: UNRAND_SPRIGGANS_KNIFE */
{
    "Spriggan's Knife", "dainty little knife", 
    OBJ_WEAPONS, WPN_KNIFE, +4, +10, LIGHTCYAN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_NORMAL, 0, 4, 0, 0, 4, 
        0, 0, 0, 0, 0, 20, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 50, 0, 
        0, 
    },
    "A dainty little knife.", 
    "", 
    "This knife was made by Spriggans, or for Spriggans, or possibly from Spriggans. Anyway, it's in some way associated with those fey folk.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 40: UNRAND_PLUTONIUM_SWORD */
{
    "plutonium sword", "glowing long sword", 
    OBJ_WEAPONS, WPN_LONG_SWORD, +12, +16, ETC_RANDOM, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        6, 0, 0, 1, -20, 0, 
        0, 
    },
    "A long sword made of weird glowing metal.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 41: UNRAND_UNDEADHUNTER */
{
    "great mace \"Undeadhunter\"", "great steel mace", 
    OBJ_WEAPONS, WPN_GREAT_MACE, +7, +7, LIGHTGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_HOLY_WRATH, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 42: UNRAND_SERPENT_SCOURGE */
{
    "whip \"Serpent-Scourge\"", "forked whip", 
    OBJ_WEAPONS, WPN_WHIP, +5, +10, DARKGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_VENOM, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "A double-ended whip made from the cured hides of the Lair of Beasts' deadly grey snakes.", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 43: UNRAND_ACCURACY */
{
    "knife of Accuracy", "thin dagger", 
    OBJ_WEAPONS, WPN_DAGGER, +27, -1, LIGHTCYAN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "It is almost unerringly accurate.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 44: UNRAND_CRYSTAL_SPEAR */
{
    "Lehudib's crystal spear", "crystal spear", 
    OBJ_WEAPONS, WPN_SPEAR, +6, +6, GREEN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPWPN_NORMAL, 0, 0, 0, 3, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "Presumably this relic led to the invention of the famous spell, or maybe the other way around.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 45: UNRAND_IGNORANCE */
{
    "shield of Ignorance", "dull large shield", 
    OBJ_ARMOUR, ARM_LARGE_SHIELD, +8, 0, BROWN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 2, 2, 0, -6, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 3, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 46: UNRAND_AUGMENTATION */
{
    "robe of Augmentation", "silk robe", 
    OBJ_ARMOUR, ARM_ROBE, +4, 0, LIGHTRED, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 2, 2, 2, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A robe made of the finest silk.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 47: UNRAND_THIEF */
{
    "cloak of the Thief", "tattered cloak", 
    OBJ_ARMOUR, ARM_CLOAK, +1, 0, ETC_DARK, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 2, 0, 0, 2, 
        0, 0, 0, 0, 0, 0, 
        1, 1, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, -3, 0, 60, 0, 
        0, 
    },
    "", 
    "", 
    "It allows its wearer to excel in the arts of thievery.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 48: UNRAND_BULLSEYE */
{
    "shield \"Bullseye\"", "round shield", 
    OBJ_ARMOUR, ARM_SHIELD, +15, 0, RED, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, -5, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 49: UNRAND_DYROVEPREVA */
{
    "crown of Dyrovepreva", "jewelled bronze crown", 
    OBJ_ARMOUR, ARM_CAP, +3, 0, ETC_JEWEL, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 2, 0, 
        0, 0, 1, 0, 0, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A large crown of dull bronze, set with a dazzling array of gemstones.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 50: UNRAND_BEAR_SPIRIT */
{
    "hat of the Bear Spirit", "fur hat", 
    OBJ_ARMOUR, ARM_CAP, +2, 0, DARKGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 50, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 
    },
    "", 
    "", 
    "Once owned by Ukta, a powerful ogre shaman, this fur hat houses the spirit of an especially mighty bear.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 51: UNRAND_MISFORTUNE */
{
    "robe of Misfortune", "fabulously ornate robe", 
    OBJ_ARMOUR, ARM_ROBE, -5, 0, MAGENTA, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, -4, -2, -2, -2, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 1, 0, 0, 0, 
        5, 0, 0, 1, -80, 0, 
        0, 
    },
    "A splendid flowing robe of fur and silk.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 52: UNRAND_FLASH */
{
    "cloak of Flash", "vibrating cloak", 
    OBJ_ARMOUR, ARM_CLOAK, +3, 0, ETC_GILA, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 4, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A vibrating cloak.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 53: UNRAND_BOOTS_ASSASSIN */
{
    "boots of the Assassin", "soft boots", 
    OBJ_ARMOUR, ARM_BOOTS, +2, 0, BROWN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 3, 
        0, 0, 0, 0, 0, 0, 
        0, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 80, 0, 
        0, 
    },
    "Some soft boots.", 
    "", 
    "These boots were specially designed by the Assassin's Guild.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 54: UNRAND_LEAR */
{
    "Lear's chain mail", "golden chain mail", 
    OBJ_ARMOUR, ARM_CHAIN_MAIL, -1, 0, ETC_GOLD, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, -3, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 
        0, 0, 0, -1, 0, 0, 
        0, 
    },
    "A chain mail made of pure gold.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 55: UNRAND_ZHOR */
{
    "skin of Zhor", "smelly skin", 
    OBJ_ARMOUR, ARM_ANIMAL_SKIN, +4, 0, BROWN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 2, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "The skin of some strange animal.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 56: UNRAND_SALAMANDER */
{
    "salamander hide armour", "red leather armour", 
    OBJ_ARMOUR, ARM_LEATHER_ARMOUR, +3, 0, ETC_FIRE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        2, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A leather armour made of a salamander's skin.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 57: UNRAND_WAR */
{
    "gauntlets of War", "thick gauntlets", 
    OBJ_ARMOUR, ARM_GLOVES, +3, 0, BROWN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 3, 3, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 58: UNRAND_RESISTANCE */
{
    "shield of Resistance", "bronze shield", 
    OBJ_ARMOUR, ARM_SHIELD, +5, 0, LIGHTRED, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        1, 1, 0, 0, 0, 40, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A bronze shield.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 59: UNRAND_FOLLY */
{
    "robe of Folly", "dull robe", 
    OBJ_ARMOUR, ARM_ROBE, -1, 0, LIGHTGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, -5, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 0, 0, 0, 
        0, 0, 0, 2, 0, 0, 
        0, 
    },
    "A dull grey robe.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 60: UNRAND_MAXWELL */
{
    "Maxwell's patent armour", "weird-looking armour", 
    OBJ_ARMOUR, ARM_PLATE_MAIL, +10, 0, LIGHTGREEN, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        1, 0, 1, 0, 0, 
        0, 0, 0, -1, 0, 0, 
        0, 
    },
    "A weird-looking armour.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 61: UNRAND_DRAGONMASK */
{
    "mask of the Dragon", "blue mask", 
    OBJ_ARMOUR, ARM_CAP, 0, 0, ETC_SHIMMER_BLUE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 40, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 2, 2, 0, 0, 0, 
        0, 
    },
    "A blue mask.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 62: UNRAND_NIGHT */
{
    "robe of Night", "black robe", 
    OBJ_ARMOUR, ARM_ROBE, +4, 0, ETC_DARK, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 30, 
        1, 1, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 50, 0, 
        0, 
    },
    "A long black robe made of strange glossy material.", 
    "", 
    "According to legend, this robe was the gift of Ratri the Goddess of the Night to one of her followers.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 63: UNRAND_DRAGON_KING */
{
    "armour of the Dragon King", "shiny dragon armour", 
    OBJ_ARMOUR, ARM_GOLD_DRAGON_ARMOUR, +5, 0, ETC_GOLD, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 64: UNRAND_ALCHEMIST */
{
    "hat of the Alchemist", "dirty hat", 
    OBJ_ARMOUR, ARM_WIZARD_HAT, +2, 0, MAGENTA, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, 0, 0, 
        1, 1, 1, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A dirty hat.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 65: UNRAND_FENCERS_GLOVES */
{
    "Fencer's gloves", "silk gloves", 
    OBJ_ARMOUR, ARM_GLOVES, +2, 0, WHITE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 3, 0, 0, 3, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 5, 0, 0, 0, 0, 
        0, 
    },
    "A pair of gloves made of white silk.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 66: UNRAND_STARLIGHT */
{
    "cloak of Starlight", "phosphorescent cloak", 
    OBJ_ARMOUR, ARM_CLOAK, 0, 0, ETC_ICE, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 4, 0, 0, 0, 
        0, 1, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, -30, 0, 
        0, 
    },
    "A phosphorescent cloak.", 
    "", 
    "A cloak woven of pure light beams.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 67: UNRAND_RATSKIN_CLOAK */
{
    "ratskin cloak", "motley cloak", 
    OBJ_ARMOUR, ARM_CLOAK, +1, 0, ETC_BEOGH, 0, 
    UNRAND_FLAG_NONE, 
    {
        SPARM_NORMAL, 0, 0, 0, -1, -1, 
        0, 0, 0, 1, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "An enchantress with a magic loom and way too much time on her hands stitched this cloak from the hides of hundreds of rats, most of them orange. It's a bit awkward to wear and looks rather foolish, but it provides excellent protection from rats of all kinds.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 68: UNRAND_AIR */
{
    "amulet of the Air", "sky-blue amulet", 
    OBJ_JEWELLERY, AMU_CONTROLLED_FLIGHT, 0, 0, ETC_ELECTRICITY, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 3, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        0, 0, 1, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 50, 0, 
        0, 
    },
    "A sky-blue amulet.", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 69: UNRAND_SHADOWS */
{
    "ring of Shadows", "black ring", 
    OBJ_JEWELLERY, RING_INVISIBILITY, 0, 0, ETC_DARK, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 4, 0, 0, 0, 
        0, 0, 0, 0, 1, 0, 
        1, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, -3, 0, 0, 40, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 70: UNRAND_CEKUGOB */
{
    "amulet of Cekugob", "crystal amulet", 
    OBJ_JEWELLERY, AMU_WARDING, 0, 0, LIGHTGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 1, 1, 0, 0, 0, 
        0, 0, 1, 1, 1, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 1, 0, 2, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 71: UNRAND_FOUR_WINDS */
{
    "amulet of the Four Winds", "jade amulet", 
    OBJ_JEWELLERY, AMU_CLARITY, 0, 0, ETC_POISON, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 1, 100, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 72: UNRAND_BLOODLUST */
{
    "necklace of Bloodlust", "blood-stained necklace", 
    OBJ_JEWELLERY, AMU_RAGE, 0, 0, ETC_BLOOD, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 2, -2, 0, 
        0, 0, 0, 0, 0, 30, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 1, 0, 
        0, 0, 3, 3, -20, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 73: UNRAND_SHAOLIN */
{
    "ring of Shaolin", "jade ring", 
    OBJ_JEWELLERY, RING_EVASION, +8, 0, ETC_POISON, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 74: UNRAND_ROBUSTNESS */
{
    "ring of Robustness", "steel ring", 
    OBJ_JEWELLERY, RING_PROTECTION, +8, 0, LIGHTGREY, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 75: UNRAND_MAGE */
{
    "ring of the Mage", "sapphire ring", 
    OBJ_JEWELLERY, RING_WIZARDRY, 0, 0, ETC_ENCHANT, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 0, 3, 0, 
        0, 0, 0, 0, 0, 50, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 76: UNRAND_SHIELDING */
{
    "brooch of Shielding", "shield-shaped amulet", 
    OBJ_JEWELLERY, AMU_WARDING, 0, 0, ETC_MAGIC, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 4, 4, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "A shield-shaped amulet.", 
    "", 
    "Back in the good old days, every adventurer had one of these handy devices. That, and a pony.", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

/* 77: UNRAND_DUMMY2 */
{
    "DUMMY UNRANDART 2", "DUMMY UNRANDART 2", 
    OBJ_UNASSIGNED, 250, 250, 250, BLACK, 0, 
    UNRAND_FLAG_NONE, 
    {
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 
        0, 0, 0, 0, 0, 0, 
        0, 
    },
    "", 
    "", 
    "", 
    NULL, NULL, NULL, { NULL }, NULL, 
},

