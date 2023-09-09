#include "../config.h"
#include "../../include/constants/species.h"
#include "../../include/constants/moves.h"

extern const u8 NAME_PURE_POWER[];
extern const u8 NAME_LIBERO[];
extern const u8 NAME_WIMP_OUT[];
extern const u8 NAME_PROPELLER_TAIL[];
extern const u8 NAME_SHELL_ARMOR[];
extern const u8 NAME_AIR_LOCK[];
extern const u8 NAME_WHITE_SMOKE[];
extern const u8 NAME_CHILLING_NEIGH[];
extern const u8 NAME_FILTER[];
extern const u8 NAME_PROPELLERTAIL[];
extern const u8 NAME_QUEENLYMAJESTY[];
extern const u8 NAME_BLUBBERDEFENSE[];
extern const u8 NAME_FULLMETALBODY[];
extern const u8 NAME_QUILLRUSH[];
extern const u8 NAME_CASHSPLASH[];
extern const u8 NAME_ROUGH_SKIN[];
extern const u8 NAME_POWER_OF_ALCHEMY[];
extern const u8 NAME_TANGLING_HAIR[];
extern const u8 NAME_TURBOBLAZE[];
extern const u8 NAME_TERAVOLT[];
extern const u8 NAME_ARMORTAIL[];
extern const u8 NAME_VITALSPIRIT[];
extern const u8 NAME_SHADOWSHIELD[];
extern const u8 NAME_PRISMARMOR[];
extern const u8 NAME_LINGERINGAROMA[];
static struct DuplicateAbility sDuplicateAbilities[] =
{
    {
        .species = SPECIES_MEDITITE, //Mon
        .currAbility = ABILITY_HUGEPOWER, //The original abilitiy
        .replaceAbilityString = NAME_PURE_POWER, //The new ability name
    },
    {
        .species = SPECIES_MEDICHAM,
        .currAbility = ABILITY_HUGEPOWER,
        .replaceAbilityString = NAME_PURE_POWER,
    },
    {
        .species = SPECIES_MEDICHAM_MEGA,
        .currAbility = ABILITY_HUGEPOWER,
        .replaceAbilityString = NAME_PURE_POWER,
    },
    {
        .species = SPECIES_SCORBUNNY,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_RABOOT,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_CINDERACE,
        .currAbility = ABILITY_PROTEAN,
        .replaceAbilityString = NAME_LIBERO,
    },
    {
        .species = SPECIES_WIMPOD,
        .currAbility = ABILITY_EMERGENCYEXIT,
        .replaceAbilityString = NAME_WIMP_OUT,
    },
    {
        .species = SPECIES_CHEWTLE,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_DREDNAW,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_CORPHISH,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_CRAWDAUNT,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_CRUSTLE,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_DWEBBLE,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_SHELMET,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_ESCAVALIER,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_KINGLER,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_KRABBY,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_LAPRAS,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_OMANYTE,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },    
    {
        .species = SPECIES_OMASTAR,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_SAMUROTT_H,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_SHELLDER,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_CLOYSTER,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_TORKOAL,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_TURTONATOR,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_CLAMPERL,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_DEWOTT,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_GROTLE,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_OSHAWOTT,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_SAMUROTT,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_SLOWBRO_MEGA,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },
    {
        .species = SPECIES_RAYQUAZA,
        .currAbility = ABILITY_CLOUDNINE,
        .replaceAbilityString = NAME_AIR_LOCK,
    },
    {
        .species = SPECIES_SIZZLIPEDE,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_CENTISKORCH,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_SIZZLIPEDE_S,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_CENTISKORCH_S,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_HEATMOR,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_TORKOAL,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_WHITE_SMOKE,
    },
    {
        .species = SPECIES_GLASTRIER,
        .currAbility = ABILITY_MOXIE,
        .replaceAbilityString = NAME_CHILLING_NEIGH,
    },
    {
        .species = SPECIES_MR_MIME,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_MIME_JR,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_REGICE,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_AVALUGG,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_AGGRON_MEGA,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_MIME_JR_G,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_STUNFISK_G,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_BARRASKEWDA,
        .currAbility = ABILITY_STALWART,
        .replaceAbilityString = NAME_PROPELLERTAIL,
    },
    {
        .species = SPECIES_VESPIQUEN,
        .currAbility = ABILITY_DAZZLING,
        .replaceAbilityString = NAME_QUEENLYMAJESTY,
    },
    {
        .species = SPECIES_TSAREENA,
        .currAbility = ABILITY_DAZZLING,
        .replaceAbilityString = NAME_QUEENLYMAJESTY,
    },
    {
        .species = SPECIES_WAILORD,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_BLUBBERDEFENSE,
    },
    {
        .species = SPECIES_SOLGALEO,
        .currAbility = ABILITY_CLEARBODY,
        .replaceAbilityString = NAME_FULLMETALBODY,
    },
    {
        .species = SPECIES_DECIDUEYE_H,
        .currAbility = ABILITY_BULLRUSH,
        .replaceAbilityString = NAME_QUILLRUSH,
    },
    {
        .species = SPECIES_WHISCASH,
        .currAbility = ABILITY_WATERBUBBLE,
        .replaceAbilityString = NAME_CASHSPLASH,
    },
    {
        .species = SPECIES_GIBLE,
        .currAbility = ABILITY_IRONBARBS,
        .replaceAbilityString = NAME_ROUGH_SKIN,
    },
    {
        .species = SPECIES_GABITE,
        .currAbility = ABILITY_IRONBARBS,
        .replaceAbilityString = NAME_ROUGH_SKIN,
    },
    {
        .species = SPECIES_GARCHOMP,
        .currAbility = ABILITY_IRONBARBS,
        .replaceAbilityString = NAME_ROUGH_SKIN,
    },
    {
        .species = SPECIES_CARVANHA,
        .currAbility = ABILITY_IRONBARBS,
        .replaceAbilityString = NAME_ROUGH_SKIN,
    },
    {
        .species = SPECIES_SHARPEDO,
        .currAbility = ABILITY_IRONBARBS,
        .replaceAbilityString = NAME_ROUGH_SKIN,
    },
    {
        .species = SPECIES_DRUDDIGON,
        .currAbility = ABILITY_IRONBARBS,
        .replaceAbilityString = NAME_ROUGH_SKIN,
    },
    {
        .species = SPECIES_GRIMER_A,
        .currAbility = ABILITY_RECEIVER,
        .replaceAbilityString = NAME_POWER_OF_ALCHEMY,
    },
    {
        .species = SPECIES_MUK_A,
        .currAbility = ABILITY_RECEIVER,
        .replaceAbilityString = NAME_POWER_OF_ALCHEMY,
    },
    {
        .species = SPECIES_DIGLETT_A,
        .currAbility = ABILITY_GOOEY,
        .replaceAbilityString = NAME_TANGLING_HAIR,
    },
    {
        .species = SPECIES_MUDSDALE,
        .currAbility = ABILITY_GOOEY,
        .replaceAbilityString = NAME_TANGLING_HAIR,
    },
    {
        .species = SPECIES_DUGTRIO_A,
        .currAbility = ABILITY_GOOEY,
        .replaceAbilityString = NAME_TANGLING_HAIR,
    },
    {
        .species = SPECIES_SCREAMTAIL,
        .currAbility = ABILITY_GOOEY,
        .replaceAbilityString = NAME_TANGLING_HAIR,
    },
    {
        .species = SPECIES_KYUREM_WHITE,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TURBOBLAZE,
    },
    {
        .species = SPECIES_KYUREM_BLACK,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TERAVOLT,
    },
        {
        .species = SPECIES_RESHIRAM,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TURBOBLAZE,
    },
    {
        .species = SPECIES_ZEKROM,
        .currAbility = ABILITY_MOLDBREAKER,
        .replaceAbilityString = NAME_TERAVOLT,
    },
        {
        .species = SPECIES_VAROOM,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_REVAVROOM,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_FILTER,
    },
    {
        .species = SPECIES_FARIGIRAF,
        .currAbility = ABILITY_DAZZLING,
        .replaceAbilityString = NAME_ARMORTAIL,
    },
    {
        .species = SPECIES_MANKEY,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_PRIMEAPE,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ELECTABUZZ,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ELECTIVIRE,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_MAGMAR,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_DELIBIRD,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_TYROGUE,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ELEKID,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_MAGBY,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_VIGOROTH,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_LILLIPUP,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ROCKRUFF,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_LYCANROC_N,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_MR_MIME_G,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ANNIHILAPE,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_LUNALA,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_SHADOWSHIELD,
    },
    {
        .species = SPECIES_YAMASK_G,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_SHADOWSHIELD,
    },
    {
        .species = SPECIES_YAMASK,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_SHADOWSHIELD,
    },
    {
        .species = SPECIES_RUNERIGUS,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_SHADOWSHIELD,
    },
    {
        .species = SPECIES_COFAGRIGUS,
        .currAbility = ABILITY_MULTISCALE,
        .replaceAbilityString = NAME_SHADOWSHIELD,
    },
    {
        .species = SPECIES_NECROZMA,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_PRISMARMOR,
    },
    {
        .species = SPECIES_NECROZMA_DUSK_MANE,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_PRISMARMOR,
    },
    {
        .species = SPECIES_NECROZMA_DAWN_WINGS,
        .currAbility = ABILITY_SOLIDROCK,
        .replaceAbilityString = NAME_PRISMARMOR,
    },
    {
        .species = SPECIES_OINKOLOGNE,
        .currAbility = ABILITY_MUMMY,
        .replaceAbilityString = NAME_LINGERINGAROMA,
    },
    {
        .species = SPECIES_KLAWF,
        .currAbility = ABILITY_BATTLEARMOR,
        .replaceAbilityString = NAME_SHELL_ARMOR,
    },

        {
        .species = SPECIES_ELEKID,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ELECTABUZZ,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },
    {
        .species = SPECIES_ELECTIVIRE,
        .currAbility = ABILITY_INSOMNIA,
        .replaceAbilityString = NAME_VITALSPIRIT,
    },

};