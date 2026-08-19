//
// DO NOT MODIFY THIS FILE! It is auto-generated from src/data/trainers.party
//
// If you want to modify this file set COMPETITIVE_PARTY_SYNTAX to FALSE
// in include/config/general.h and remove this notice.
// Use sed -i '/^#line/d' 'src/data/trainers.h' to remove #line markers.
//

#line 1 "src/data/trainers.party"

#line 76
    [DIFFICULTY_NORMAL][TRAINER_NONE] =
    {
#line 78
        .trainerClass = TRAINER_CLASS_PKMN_TRAINER_1,
#line 79
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 81
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 82
        .doubleBattle = FALSE,
#line 83
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_SMART_SWITCHING,
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 85
    [DIFFICULTY_NORMAL][TRAINER_SAWYER] =
    {
#line 86
        .trainerName = _("SAWYER"),
#line 87
        .trainerClass = TRAINER_CLASS_GAMER,
#line 88
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 90
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 91
        .doubleBattle = FALSE,
#line 92
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 94
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 96
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 95
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 98
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 99
        .trainerName = _("GRUNT"),
#line 100
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 101
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 103
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 104
        .doubleBattle = FALSE,
#line 105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 107
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 108
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 111
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 112
        .trainerName = _("GRUNT"),
#line 113
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 114
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 116
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 117
        .doubleBattle = FALSE,
#line 118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 120
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 121
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 124
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 125
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 128
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 129
        .trainerName = _("GRUNT"),
#line 130
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 131
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 133
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 134
        .doubleBattle = FALSE,
#line 135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 137
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 138
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 141
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 142
        .trainerName = _("GRUNT"),
#line 143
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 144
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 146
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 147
        .doubleBattle = FALSE,
#line 148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 150
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 151
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 154
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 155
        .trainerName = _("GRUNT"),
#line 156
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 157
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 159
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 160
        .doubleBattle = FALSE,
#line 161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 163
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 164
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 167
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 168
        .trainerName = _("GRUNT"),
#line 169
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 170
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 172
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 173
        .doubleBattle = FALSE,
#line 174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 176
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 177
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 180
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 181
        .trainerName = _("GRUNT"),
#line 182
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 183
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 185
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 186
        .doubleBattle = FALSE,
#line 187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 189
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 190
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 193
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE] =
    {
#line 194
        .trainerName = _("GABRIELLE"),
#line 195
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 196
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 197
F_TRAINER_FEMALE | 
#line 198
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 199
        .doubleBattle = FALSE,
#line 200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 202
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 203
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 206
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 207
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 210
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 211
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 215
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 216
        .trainerName = _("GRUNT"),
#line 217
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 218
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 220
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 221
        .doubleBattle = FALSE,
#line 222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 224
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 225
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 228
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 229
        .trainerName = _("MARCEL"),
#line 230
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 233
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 234
        .items = { ITEM_HYPER_POTION },
#line 235
        .doubleBattle = FALSE,
#line 236
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 238
            .species = SPECIES_TRANQUILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 240
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 239
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 242
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 244
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 243
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 246
    [DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
    {
#line 247
        .trainerName = _("ALBERTO"),
#line 248
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 249
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 251
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 252
        .doubleBattle = FALSE,
#line 253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 255
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 256
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 259
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 260
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 263
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 264
        .trainerName = _("ED"),
#line 265
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 266
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 268
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 269
        .doubleBattle = FALSE,
#line 270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 272
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 273
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 276
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 277
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 280
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 281
        .trainerName = _("GRUNT"),
#line 282
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 283
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 284
F_TRAINER_FEMALE | 
#line 285
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 286
        .doubleBattle = FALSE,
#line 287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 289
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 290
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 293
    [DIFFICULTY_NORMAL][TRAINER_DECLAN] =
    {
#line 294
        .trainerName = _("DECLAN"),
#line 295
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 296
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 298
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 299
        .doubleBattle = FALSE,
#line 300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 302
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 303
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 306
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 307
        .trainerName = _("GRUNT"),
#line 308
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 309
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 311
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 312
        .doubleBattle = FALSE,
#line 313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 315
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 316
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 318
                MOVE_BITE,
                MOVE_SAND_ATTACK,
                MOVE_SWAGGER,
                MOVE_SNARL,
            },
            },
        },
    },
#line 323
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 324
        .trainerName = _("GRUNT"),
#line 325
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 326
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 328
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 329
        .doubleBattle = FALSE,
#line 330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 332
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 333
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 336
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 337
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 340
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 341
        .trainerName = _("GRUNT"),
#line 342
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 343
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 345
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 346
        .doubleBattle = FALSE,
#line 347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 349
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 350
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 353
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 354
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 357
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 358
        .trainerName = _("GRUNT"),
#line 359
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 360
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 362
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 363
        .doubleBattle = FALSE,
#line 364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 366
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 367
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 370
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 371
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 374
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 375
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 378
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 379
        .trainerName = _("GRUNT"),
#line 380
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 381
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 383
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 384
        .doubleBattle = FALSE,
#line 385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 387
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 388
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 391
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 392
        .trainerName = _("GRUNT"),
#line 393
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 394
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 396
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 397
        .doubleBattle = FALSE,
#line 398
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 400
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 401
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 404
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 405
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 408
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 409
        .trainerName = _("GRUNT"),
#line 410
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 411
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 413
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 414
        .doubleBattle = FALSE,
#line 415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 417
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 418
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 421
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 422
        .trainerName = _("GRUNT"),
#line 423
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 424
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 426
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 427
        .doubleBattle = FALSE,
#line 428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 430
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 431
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 434
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 435
        .trainerName = _("GRUNT"),
#line 436
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 437
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 439
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 440
        .doubleBattle = FALSE,
#line 441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 443
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 444
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 447
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 448
        .trainerName = _("GRUNT"),
#line 449
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 450
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 452
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 453
        .doubleBattle = FALSE,
#line 454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 456
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 457
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 460
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 461
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 464
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 465
        .trainerName = _("GRUNT"),
#line 466
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 467
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 468
F_TRAINER_FEMALE | 
#line 469
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 470
        .doubleBattle = FALSE,
#line 471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 473
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 474
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 477
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 478
        .trainerName = _("GRUNT"),
#line 479
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 480
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 481
F_TRAINER_FEMALE | 
#line 482
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 483
        .doubleBattle = FALSE,
#line 484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 486
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 487
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 490
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 491
        .trainerName = _("GRUNT"),
#line 492
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 493
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 494
F_TRAINER_FEMALE | 
#line 495
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 496
        .doubleBattle = FALSE,
#line 497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 499
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 500
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 503
    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
#line 504
        .trainerName = _("FREDRICK"),
#line 505
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 506
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 508
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 509
        .doubleBattle = FALSE,
#line 510
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 512
            .species = SPECIES_WORMADAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 514
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 513
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 516
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 518
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 517
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 520
    [DIFFICULTY_NORMAL][TRAINER_MATTIAS] =
    {
#line 521
        .trainerName = _("MATTHIAS"),
#line 522
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 523
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 525
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 526
        .doubleBattle = FALSE,
#line 527
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 529
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 529
            .heldItem = ITEM_BLACK_SLUDGE,
#line 532
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 530
            .ability = ABILITY_POISON_TOUCH,
#line 531
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 533
                MOVE_GUNK_SHOT,
                MOVE_LUNGE,
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
            },
            },
            {
#line 538
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 538
            .heldItem = ITEM_LEFTOVERS,
#line 541
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 539
            .ability = ABILITY_THICK_FAT,
#line 540
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 542
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_FISSURE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 547
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 547
            .heldItem = ITEM_WISE_GLASSES,
#line 550
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 548
            .ability = ABILITY_SHED_SKIN,
#line 549
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 551
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 556
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 556
            .heldItem = ITEM_EXPERT_BELT,
#line 559
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 557
            .ability = ABILITY_INTIMIDATE,
#line 558
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 560
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_TRAILBLAZE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 565
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 565
            .heldItem = ITEM_MUSCLE_BAND,
#line 568
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 566
            .ability = ABILITY_WATER_ABSORB,
#line 567
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 569
                MOVE_SEED_BOMB,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_PIN_MISSILE,
            },
            },
        },
    },
#line 574
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 575
        .trainerName = _("ZANDER"),
#line 576
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 577
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 579
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 580
        .doubleBattle = FALSE,
#line 581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 583
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 584
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 587
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 588
        .trainerName = _("SHELLY"),
#line 589
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 590
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 591
F_TRAINER_FEMALE | 
#line 592
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 593
        .doubleBattle = FALSE,
#line 594
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 596
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 596
            .heldItem = ITEM_ROCKY_HELMET,
#line 599
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 597
            .ability = ABILITY_DRIZZLE,
#line 598
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 600
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_POISON_FANG,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 605
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 605
            .heldItem = ITEM_MAGNET,
#line 608
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 606
            .ability = ABILITY_STATIC,
#line 607
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 609
                MOVE_WILD_CHARGE,
                MOVE_BITE,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 614
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 614
            .heldItem = ITEM_CHOICE_BAND,
#line 617
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 615
            .ability = ABILITY_HYPER_CUTTER,
#line 616
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 618
                MOVE_CRABHAMMER,
            },
            },
            {
#line 620
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 620
            .heldItem = ITEM_BLACK_SLUDGE,
#line 623
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 621
            .ability = ABILITY_STICKY_HOLD,
#line 622
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 624
                MOVE_SLUDGE_WAVE,
                MOVE_DISABLE,
                MOVE_MINIMIZE,
                MOVE_ACID_ARMOR,
            },
            },
            {
#line 629
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 629
            .heldItem = ITEM_SHARP_BEAK,
#line 632
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 630
            .ability = ABILITY_INNER_FOCUS,
#line 631
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 633
                MOVE_AIR_CUTTER,
                MOVE_VENOSHOCK,
                MOVE_HAZE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 638
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 639
        .trainerName = _("SHELLY"),
#line 640
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 641
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 642
F_TRAINER_FEMALE | 
#line 643
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 644
        .doubleBattle = FALSE,
#line 645
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 647
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 647
            .heldItem = ITEM_ROCKY_HELMET,
#line 650
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 648
            .ability = ABILITY_DRIZZLE,
#line 649
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 651
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 656
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 656
            .heldItem = ITEM_MAGNET,
#line 659
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 657
            .ability = ABILITY_STATIC,
#line 658
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 660
                MOVE_THUNDER_WAVE,
                MOVE_VOLT_SWITCH,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 665
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 665
            .heldItem = ITEM_CHOICE_BAND,
#line 668
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 666
            .ability = ABILITY_ADAPTABILITY,
#line 667
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 669
                MOVE_CRABHAMMER,
                MOVE_CRUNCH,
            },
            },
            {
#line 672
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 672
            .heldItem = ITEM_BLACK_SLUDGE,
#line 675
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 673
            .ability = ABILITY_STICKY_HOLD,
#line 674
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 676
                MOVE_GUNK_SHOT,
                MOVE_TOXIC,
                MOVE_MINIMIZE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 681
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 681
            .heldItem = ITEM_SHARP_BEAK,
#line 684
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 682
            .ability = ABILITY_INNER_FOCUS,
#line 683
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 685
                MOVE_HURRICANE,
                MOVE_VENOSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 690
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 691
        .trainerName = _("ARCHIE"),
#line 692
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 693
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 695
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 696
        .doubleBattle = FALSE,
#line 697
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 699
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .heldItem = ITEM_DAMP_ROCK,
#line 702
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 700
            .ability = ABILITY_WATER_ABSORB,
#line 701
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 703
                MOVE_ENERGY_BALL,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 708
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 708
            .heldItem = ITEM_MUSCLE_BAND,
#line 711
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 709
            .ability = ABILITY_SPEED_BOOST,
#line 710
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 712
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_EARTHQUAKE,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 717
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 717
            .heldItem = ITEM_STICKY_BARB,
#line 720
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 718
            .ability = ABILITY_SHED_SKIN,
#line 719
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 721
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 726
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 726
            .heldItem = ITEM_CHOICE_SPECS,
#line 729
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 727
            .ability = ABILITY_VOLT_ABSORB,
#line 728
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 730
                MOVE_HYDRO_PUMP,
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 736
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 736
            .heldItem = ITEM_LEFTOVERS,
#line 739
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 737
            .ability = ABILITY_OBLIVIOUS,
#line 738
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 740
                MOVE_BLIZZARD,
                MOVE_SURF,
                MOVE_YAWN,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 745
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 746
        .trainerName = _("LEAH"),
#line 747
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 748
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 749
F_TRAINER_FEMALE | 
#line 750
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 751
        .doubleBattle = FALSE,
#line 752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 754
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 755
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 758
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 759
        .trainerName = _("DAISY"),
#line 760
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 761
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 762
F_TRAINER_FEMALE | 
#line 763
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 764
        .doubleBattle = FALSE,
#line 765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 767
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 768
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 771
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 772
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 775
    [DIFFICULTY_NORMAL][TRAINER_ROSE] =
    {
#line 776
        .trainerName = _("ROSE"),
#line 777
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 778
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 779
F_TRAINER_FEMALE | 
#line 780
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 781
        .doubleBattle = FALSE,
#line 782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 784
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 785
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 788
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 789
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 792
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 793
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 798
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 799
        .trainerName = _("FELIX"),
#line 800
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 801
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 803
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 804
        .items = { ITEM_FULL_RESTORE },
#line 805
        .doubleBattle = FALSE,
#line 806
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 808
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 809
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 812
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 813
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 817
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 818
        .trainerName = _("VIOLET"),
#line 819
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 820
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 821
F_TRAINER_FEMALE | 
#line 822
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 823
        .doubleBattle = FALSE,
#line 824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 826
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 827
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 830
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 831
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 834
    [DIFFICULTY_NORMAL][TRAINER_DUSTY] =
    {
#line 835
        .trainerName = _("DUSTY"),
#line 836
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 837
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 839
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 840
        .doubleBattle = FALSE,
#line 841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 843
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 845
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 844
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 847
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 848
        .trainerName = _("CHIP"),
#line 849
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 850
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 853
        .doubleBattle = FALSE,
#line 854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 856
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 858
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 857
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 860
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 862
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 861
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 864
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 866
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 865
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 868
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 869
        .trainerName = _("FOSTER"),
#line 870
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 871
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 873
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 874
        .doubleBattle = FALSE,
#line 875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 877
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 879
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 878
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 881
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 883
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 882
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 885
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY] =
    {
#line 886
        .trainerName = _("GABBY & TY"),
#line 887
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 888
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 890
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 891
        .doubleBattle = TRUE,
#line 892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 894
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 896
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 895
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 898
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 899
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 902
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 903
        .trainerName = _("GABBY & TY"),
#line 904
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 905
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 907
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 908
        .doubleBattle = TRUE,
#line 909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 911
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 913
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 912
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 915
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 917
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 916
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 920
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 921
        .trainerName = _("LOLA"),
#line 922
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 923
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 924
F_TRAINER_FEMALE | 
#line 925
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 926
        .doubleBattle = FALSE,
#line 927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 929
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 931
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 930
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 933
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 935
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 934
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 937
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 938
        .trainerName = _("AUSTINA"),
#line 939
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 940
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 941
F_TRAINER_FEMALE | 
#line 942
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 943
        .doubleBattle = FALSE,
#line 944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 946
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 947
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 950
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 951
        .trainerName = _("GWEN"),
#line 952
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 953
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 954
F_TRAINER_FEMALE | 
#line 955
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 956
        .doubleBattle = FALSE,
#line 957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 959
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 960
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 963
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 964
        .trainerName = _("RICKY"),
#line 965
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 966
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 968
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 969
        .doubleBattle = FALSE,
#line 970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 972
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 974
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 973
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 976
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 977
        .trainerName = _("SIMON"),
#line 978
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 979
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 981
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 982
        .doubleBattle = FALSE,
#line 983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 985
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 986
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 989
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 990
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 993
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 994
        .trainerName = _("CHARLIE"),
#line 995
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 996
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 998
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 999
        .doubleBattle = FALSE,
#line 1000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1002
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1003
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1006
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 1007
        .trainerName = _("RANDALL"),
#line 1008
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1009
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1011
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1012
        .items = { ITEM_HYPER_POTION },
#line 1013
        .doubleBattle = FALSE,
#line 1014
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1016
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1017
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1020
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1021
        .trainerName = _("PARKER"),
#line 1022
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1023
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1025
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1026
        .items = { ITEM_HYPER_POTION },
#line 1027
        .doubleBattle = FALSE,
#line 1028
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1030
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1031
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1034
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1035
        .trainerName = _("GEORGE"),
#line 1036
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1037
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1039
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1040
        .items = { ITEM_HYPER_POTION },
#line 1041
        .doubleBattle = FALSE,
#line 1042
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1044
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1044
            .heldItem = ITEM_SITRUS_BERRY,
#line 1046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1045
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1048
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1049
        .trainerName = _("BERKE"),
#line 1050
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1051
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1053
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1054
        .items = { ITEM_HYPER_POTION },
#line 1055
        .doubleBattle = FALSE,
#line 1056
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1058
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1059
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1062
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1063
        .trainerName = _("BRAXTON"),
#line 1064
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1065
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1067
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1068
        .items = { ITEM_HYPER_POTION },
#line 1069
        .doubleBattle = FALSE,
#line 1070
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1072
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1074
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1073
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1076
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1078
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1077
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1080
            .species = SPECIES_GLACEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1082
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1081
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1084
            .species = SPECIES_SAWSBUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1085
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1088
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1089
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1092
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1093
        .trainerName = _("VINCENT"),
#line 1094
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1095
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1097
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1098
        .items = { ITEM_FULL_RESTORE },
#line 1099
        .doubleBattle = FALSE,
#line 1100
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1102
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1104
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1103
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1106
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1108
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1107
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1110
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1112
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1111
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1114
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1115
        .trainerName = _("LEROY"),
#line 1116
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1117
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1119
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1120
        .items = { ITEM_FULL_RESTORE },
#line 1121
        .doubleBattle = FALSE,
#line 1122
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1124
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1125
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1128
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1130
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1129
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1132
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 1133
        .trainerName = _("WILTON"),
#line 1134
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1135
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1137
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1138
        .items = { ITEM_SUPER_POTION },
#line 1139
        .doubleBattle = FALSE,
#line 1140
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1142
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1144
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1143
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1146
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1148
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1147
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1150
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1152
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1151
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1154
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1155
        .trainerName = _("EDGAR"),
#line 1156
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1157
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1159
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1160
        .items = { ITEM_FULL_RESTORE },
#line 1161
        .doubleBattle = FALSE,
#line 1162
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1164
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1166
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1165
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1168
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1170
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1169
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1172
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1173
        .trainerName = _("ALBERT"),
#line 1174
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1175
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1177
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1178
        .items = { ITEM_FULL_RESTORE },
#line 1179
        .doubleBattle = FALSE,
#line 1180
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1182
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1184
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1183
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1186
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1188
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1187
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1190
    [DIFFICULTY_NORMAL][TRAINER_SAMMY] =
    {
#line 1191
        .trainerName = _("SAMMY"),
#line 1192
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1193
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1195
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1196
        .items = { ITEM_FULL_RESTORE },
#line 1197
        .doubleBattle = FALSE,
#line 1198
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1200
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1202
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1201
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1204
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1206
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1205
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1208
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1210
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1209
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1212
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1213
        .trainerName = _("VITO"),
#line 1214
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1215
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1217
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1218
        .items = { ITEM_FULL_RESTORE },
#line 1219
        .doubleBattle = FALSE,
#line 1220
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1222
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1224
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1223
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1226
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1228
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1227
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1230
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1232
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1231
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1234
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1236
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1235
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1238
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1239
        .trainerName = _("OWEN"),
#line 1240
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1241
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1243
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1244
        .items = { ITEM_FULL_RESTORE },
#line 1245
        .doubleBattle = FALSE,
#line 1246
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1248
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1250
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1249
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1252
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1253
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1256
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1257
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1260
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1261
        .trainerName = _("WARREN"),
#line 1262
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1263
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1265
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1266
        .items = { ITEM_FULL_RESTORE },
#line 1267
        .doubleBattle = FALSE,
#line 1268
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1270
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1272
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1271
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1274
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1276
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1275
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1278
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1279
        .trainerName = _("MARY"),
#line 1280
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1281
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1282
F_TRAINER_FEMALE | 
#line 1283
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1284
        .items = { ITEM_HYPER_POTION },
#line 1285
        .doubleBattle = FALSE,
#line 1286
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1288
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1289
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1293
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1294
        .trainerName = _("ALEXIA"),
#line 1295
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1296
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1297
F_TRAINER_FEMALE | 
#line 1298
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1299
        .items = { ITEM_HYPER_POTION },
#line 1300
        .doubleBattle = FALSE,
#line 1301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1303
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1304
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1307
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1308
        .trainerName = _("JODY"),
#line 1309
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1310
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1311
F_TRAINER_FEMALE | 
#line 1312
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1313
        .items = { ITEM_HYPER_POTION },
#line 1314
        .doubleBattle = FALSE,
#line 1315
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1317
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1318
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1320
                MOVE_SWORDS_DANCE,
                MOVE_DRAIN_PUNCH,
            },
            },
        },
    },
#line 1323
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1324
        .trainerName = _("WENDY"),
#line 1325
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1326
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1327
F_TRAINER_FEMALE | 
#line 1328
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1329
        .items = { ITEM_FULL_RESTORE },
#line 1330
        .doubleBattle = FALSE,
#line 1331
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1333
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1335
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1334
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1337
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1339
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1338
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1341
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1343
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1342
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1345
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1346
        .trainerName = _("KEIRA"),
#line 1347
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1348
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1349
F_TRAINER_FEMALE | 
#line 1350
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1351
        .items = { ITEM_FULL_RESTORE },
#line 1352
        .doubleBattle = FALSE,
#line 1353
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1355
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1357
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1356
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1359
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1361
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1360
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1363
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 1364
        .trainerName = _("BROOKE"),
#line 1365
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1366
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1367
F_TRAINER_FEMALE | 
#line 1368
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1369
        .items = { ITEM_SUPER_POTION },
#line 1370
        .doubleBattle = FALSE,
#line 1371
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1373
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1375
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1374
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1377
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1379
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1378
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1381
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1383
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1382
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1385
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1386
        .trainerName = _("JENNIFER"),
#line 1387
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1388
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1389
F_TRAINER_FEMALE | 
#line 1390
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1391
        .items = { ITEM_FULL_RESTORE },
#line 1392
        .doubleBattle = FALSE,
#line 1393
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1395
            .species = SPECIES_DUOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1397
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1396
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1399
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1400
        .trainerName = _("HOPE"),
#line 1401
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1402
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1403
F_TRAINER_FEMALE | 
#line 1404
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1405
        .items = { ITEM_FULL_RESTORE },
#line 1406
        .doubleBattle = FALSE,
#line 1407
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1409
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1411
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1410
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1413
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1414
        .trainerName = _("SHANNON"),
#line 1415
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1416
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1417
F_TRAINER_FEMALE | 
#line 1418
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1419
        .items = { ITEM_FULL_RESTORE },
#line 1420
        .doubleBattle = FALSE,
#line 1421
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1423
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1425
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1424
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1427
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1428
        .trainerName = _("MICHELLE"),
#line 1429
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1430
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1431
F_TRAINER_FEMALE | 
#line 1432
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1433
        .items = { ITEM_FULL_RESTORE },
#line 1434
        .doubleBattle = FALSE,
#line 1435
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1437
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1439
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1438
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1441
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1442
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1445
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1447
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1446
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1449
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1450
        .trainerName = _("CAROLINE"),
#line 1451
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1452
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1453
F_TRAINER_FEMALE | 
#line 1454
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1455
        .items = { ITEM_FULL_RESTORE },
#line 1456
        .doubleBattle = FALSE,
#line 1457
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1459
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1461
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1460
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1463
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1465
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1464
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1467
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1468
        .trainerName = _("JULIE"),
#line 1469
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1470
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1471
F_TRAINER_FEMALE | 
#line 1472
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1473
        .items = { ITEM_FULL_RESTORE },
#line 1474
        .doubleBattle = FALSE,
#line 1475
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1477
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1479
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1478
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1481
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1483
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1482
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1485
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1487
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1486
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1489
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1490
        .trainerName = _("PATRICIA"),
#line 1491
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1492
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1493
F_TRAINER_FEMALE | 
#line 1494
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1495
        .doubleBattle = FALSE,
#line 1496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1498
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1499
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1502
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1503
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1506
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1507
        .trainerName = _("KINDRA"),
#line 1508
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1509
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1510
F_TRAINER_FEMALE | 
#line 1511
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1512
        .doubleBattle = FALSE,
#line 1513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1515
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1516
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1519
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1520
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1523
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1524
        .trainerName = _("TAMMY"),
#line 1525
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1526
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1527
F_TRAINER_FEMALE | 
#line 1528
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1529
        .doubleBattle = FALSE,
#line 1530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1532
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1533
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1536
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1537
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1540
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 1541
        .trainerName = _("VALERIE"),
#line 1542
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1543
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1544
F_TRAINER_FEMALE | 
#line 1545
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1546
        .doubleBattle = FALSE,
#line 1547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1549
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1550
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1553
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1554
        .trainerName = _("TASHA"),
#line 1555
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1556
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1557
F_TRAINER_FEMALE | 
#line 1558
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1559
        .doubleBattle = FALSE,
#line 1560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1562
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1564
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1563
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1566
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 1567
        .trainerName = _("CINDY"),
#line 1568
        .trainerClass = TRAINER_CLASS_LADY,
#line 1569
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1570
F_TRAINER_FEMALE | 
#line 1571
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1572
        .items = { ITEM_FULL_RESTORE },
#line 1573
        .doubleBattle = FALSE,
#line 1574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1576
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1576
            .heldItem = ITEM_NUGGET,
#line 1578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1577
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1580
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1581
        .trainerName = _("DAPHNE"),
#line 1582
        .trainerClass = TRAINER_CLASS_LADY,
#line 1583
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1584
F_TRAINER_FEMALE | 
#line 1585
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1586
        .items = { ITEM_FULL_RESTORE },
#line 1587
        .doubleBattle = FALSE,
#line 1588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1590
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1590
            .heldItem = ITEM_FOCUS_SASH,
#line 1592
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1591
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1594
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1594
            .heldItem = ITEM_FOCUS_SASH,
#line 1596
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1595
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1598
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1599
        .trainerName = _("GRUNT"),
#line 1600
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1601
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1603
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1604
        .doubleBattle = FALSE,
#line 1605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1607
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1608
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1611
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1612
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1615
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1616
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1619
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1620
        .trainerName = _("SHEILA"),
#line 1621
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1622
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1623
F_TRAINER_FEMALE | 
#line 1624
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1625
        .doubleBattle = FALSE,
#line 1626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1628
            .species = SPECIES_ZEBSTRIKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1629
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1632
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1633
        .trainerName = _("SHIRLEY"),
#line 1634
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1635
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1636
F_TRAINER_FEMALE | 
#line 1637
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1638
        .doubleBattle = FALSE,
#line 1639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1641
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1642
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1645
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 1646
        .trainerName = _("JESSICA"),
#line 1647
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1648
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1649
F_TRAINER_FEMALE | 
#line 1650
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1651
        .doubleBattle = FALSE,
#line 1652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1654
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1655
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1658
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1659
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1663
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1664
        .trainerName = _("CONNIE"),
#line 1665
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1666
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1667
F_TRAINER_FEMALE | 
#line 1668
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1669
        .doubleBattle = FALSE,
#line 1670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1672
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1674
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1673
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1676
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1677
        .trainerName = _("BRIDGET"),
#line 1678
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1679
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1680
F_TRAINER_FEMALE | 
#line 1681
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1682
        .doubleBattle = FALSE,
#line 1683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1685
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1687
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1686
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1689
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1690
        .trainerName = _("BRIANNA"),
#line 1691
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1692
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1693
F_TRAINER_FEMALE | 
#line 1694
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1695
        .doubleBattle = FALSE,
#line 1696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1698
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1700
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1699
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1702
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1703
        .trainerName = _("OLIVIA"),
#line 1704
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1705
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1706
F_TRAINER_FEMALE | 
#line 1707
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1708
        .doubleBattle = FALSE,
#line 1709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1711
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1713
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1712
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1715
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1717
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1716
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1719
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1721
            .iv = TRAINER_PARTY_IVS(12, 31, 12, 12, 12, 12),
#line 1720
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1723
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1724
        .trainerName = _("TIFFANY"),
#line 1725
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1726
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1727
F_TRAINER_FEMALE | 
#line 1728
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1729
        .doubleBattle = FALSE,
#line 1730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1732
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1734
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1733
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1736
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1738
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1737
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1740
    [DIFFICULTY_NORMAL][TRAINER_WINSTON] =
    {
#line 1741
        .trainerName = _("WINSTON"),
#line 1742
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1743
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1745
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1746
        .items = { ITEM_FULL_RESTORE },
#line 1747
        .doubleBattle = FALSE,
#line 1748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1750
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1750
            .heldItem = ITEM_NUGGET,
#line 1752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1751
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1754
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1755
        .trainerName = _("MOLLIE"),
#line 1756
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1757
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1758
F_TRAINER_FEMALE | 
#line 1759
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1760
        .doubleBattle = FALSE,
#line 1761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1763
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1764
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1767
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1769
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1768
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1771
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1772
        .trainerName = _("GARRET"),
#line 1773
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1774
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1776
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1777
        .items = { ITEM_FULL_RESTORE },
#line 1778
        .doubleBattle = FALSE,
#line 1779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1781
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1781
            .heldItem = ITEM_NUGGET,
#line 1783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1782
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1785
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1786
        .trainerName = _("STEVE"),
#line 1787
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1788
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1790
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1791
        .doubleBattle = FALSE,
#line 1792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1794
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1795
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1798
    [DIFFICULTY_NORMAL][TRAINER_THALIA] =
    {
#line 1799
        .trainerName = _("THALIA"),
#line 1800
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1801
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1802
F_TRAINER_FEMALE | 
#line 1803
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1804
        .doubleBattle = FALSE,
#line 1805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1807
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1808
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1811
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1812
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1815
    [DIFFICULTY_NORMAL][TRAINER_MARCUS] =
    {
#line 1816
        .trainerName = _("MARCUS"),
#line 1817
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1818
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1820
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1821
        .doubleBattle = FALSE,
#line 1822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1824
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1825
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1828
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1829
        .trainerName = _("GRUNT"),
#line 1830
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1831
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1832
F_TRAINER_FEMALE | 
#line 1833
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1834
        .doubleBattle = FALSE,
#line 1835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1837
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1838
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1841
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1842
        .trainerName = _("LUIS"),
#line 1843
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1844
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1846
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1847
        .doubleBattle = FALSE,
#line 1848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1850
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1851
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1854
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1855
        .trainerName = _("DOMINIK"),
#line 1856
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1857
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1859
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1860
        .doubleBattle = FALSE,
#line 1861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1863
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1864
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1867
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1868
        .trainerName = _("DOUGLAS"),
#line 1869
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1870
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1872
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1873
        .doubleBattle = FALSE,
#line 1874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1876
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1878
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1877
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1880
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1882
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1881
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1884
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1885
        .trainerName = _("DARRIN"),
#line 1886
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1887
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1889
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1890
        .doubleBattle = FALSE,
#line 1891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1893
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1895
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1894
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1897
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1899
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1898
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1901
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1903
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1902
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1905
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 1906
        .trainerName = _("TONY"),
#line 1907
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1908
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1910
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1911
        .doubleBattle = FALSE,
#line 1912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1914
            .species = SPECIES_RAMPARDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1915
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1918
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1919
        .trainerName = _("JEROME"),
#line 1920
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1921
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1923
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1924
        .doubleBattle = FALSE,
#line 1925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1927
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1928
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1931
    [DIFFICULTY_NORMAL][TRAINER_MATTI] =
    {
#line 1932
        .trainerName = _("MATTI"),
#line 1933
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1934
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1936
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1937
        .doubleBattle = FALSE,
#line 1938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1940
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1941
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1944
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 1945
        .trainerName = _("DAVID"),
#line 1946
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1947
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1949
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1950
        .doubleBattle = FALSE,
#line 1951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1953
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1954
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1957
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1958
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1961
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 1962
        .trainerName = _("SPENCER"),
#line 1963
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1964
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1966
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1967
        .doubleBattle = FALSE,
#line 1968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1970
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1971
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1974
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1975
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1978
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 1979
        .trainerName = _("ROLAND"),
#line 1980
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1981
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1983
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1984
        .doubleBattle = FALSE,
#line 1985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1987
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1988
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1991
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 1992
        .trainerName = _("NOLEN"),
#line 1993
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1994
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1996
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1997
        .doubleBattle = FALSE,
#line 1998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2000
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2001
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2004
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 2005
        .trainerName = _("STAN"),
#line 2006
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2007
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2009
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2010
        .doubleBattle = FALSE,
#line 2011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2013
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2014
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2017
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2018
        .trainerName = _("BARRY"),
#line 2019
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2020
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2022
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2023
        .doubleBattle = FALSE,
#line 2024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2026
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2027
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2030
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2031
        .trainerName = _("DEAN"),
#line 2032
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2033
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2035
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2036
        .doubleBattle = FALSE,
#line 2037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2039
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2040
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2043
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2044
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2047
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2048
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2051
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2052
        .trainerName = _("RODNEY"),
#line 2053
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2054
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2056
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2057
        .doubleBattle = FALSE,
#line 2058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2060
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2061
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2064
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2065
        .trainerName = _("RICHARD"),
#line 2066
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2067
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2069
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2070
        .doubleBattle = FALSE,
#line 2071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2073
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2074
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2077
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2078
        .trainerName = _("HERMAN"),
#line 2079
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2080
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2082
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2083
        .doubleBattle = FALSE,
#line 2084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2086
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2087
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2090
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2091
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2094
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2095
        .trainerName = _("SANTIAGO"),
#line 2096
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2097
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2099
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2100
        .doubleBattle = FALSE,
#line 2101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2103
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2104
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2107
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2108
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2111
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2112
        .trainerName = _("GILBERT"),
#line 2113
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2114
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2116
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2117
        .doubleBattle = FALSE,
#line 2118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2120
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2121
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2124
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2125
        .trainerName = _("FRANKLIN"),
#line 2126
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2127
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2129
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2130
        .doubleBattle = FALSE,
#line 2131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2133
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2134
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2137
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2138
        .trainerName = _("KEVIN"),
#line 2139
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2140
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2142
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2143
        .doubleBattle = FALSE,
#line 2144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2146
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2147
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2150
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2151
        .trainerName = _("JACK"),
#line 2152
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2153
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2155
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2156
        .doubleBattle = FALSE,
#line 2157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2159
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2160
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2163
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2164
        .trainerName = _("DUDLEY"),
#line 2165
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2166
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2168
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2169
        .doubleBattle = FALSE,
#line 2170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2172
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2173
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2176
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2177
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2180
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2181
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2184
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2185
        .trainerName = _("CHAD"),
#line 2186
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2187
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2189
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2190
        .doubleBattle = FALSE,
#line 2191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2193
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2194
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2197
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2198
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2201
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2202
        .trainerName = _("TAKAO"),
#line 2203
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2204
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2206
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2207
        .doubleBattle = FALSE,
#line 2208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2210
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2212
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2211
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2214
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2215
        .trainerName = _("HITOSHI"),
#line 2216
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2217
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2219
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2220
        .doubleBattle = FALSE,
#line 2221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2223
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2225
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2224
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2227
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2229
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2228
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2231
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2232
        .trainerName = _("KIYO"),
#line 2233
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2234
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2236
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2237
        .doubleBattle = FALSE,
#line 2238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2240
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2242
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2241
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2244
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2245
        .trainerName = _("KOICHI"),
#line 2246
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2247
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2249
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2250
        .doubleBattle = FALSE,
#line 2251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2253
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2255
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2254
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2257
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2259
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2258
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2261
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 2262
        .trainerName = _("NOB"),
#line 2263
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2264
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2266
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2267
        .doubleBattle = FALSE,
#line 2268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2270
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2272
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2271
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2274
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2275
        .trainerName = _("YUJI"),
#line 2276
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2277
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2279
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2280
        .doubleBattle = FALSE,
#line 2281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2283
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2285
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2284
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2287
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2289
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2288
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2291
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2292
        .trainerName = _("DAISUKE"),
#line 2293
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2294
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2296
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2297
        .doubleBattle = FALSE,
#line 2298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2300
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2301
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2304
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2305
        .trainerName = _("ATSUSHI"),
#line 2306
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2307
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2309
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2310
        .doubleBattle = FALSE,
#line 2311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2313
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2315
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2314
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2317
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2318
        .trainerName = _("KIRK"),
#line 2319
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2320
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2322
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2323
        .doubleBattle = FALSE,
#line 2324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2326
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2328
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2327
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2330
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2332
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2331
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2334
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2335
        .trainerName = _("GRUNT"),
#line 2336
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2337
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2338
F_TRAINER_FEMALE | 
#line 2339
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2340
        .doubleBattle = FALSE,
#line 2341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2343
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2344
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2347
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2348
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2351
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2352
        .trainerName = _("GRUNT"),
#line 2353
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2354
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2356
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2357
        .doubleBattle = FALSE,
#line 2358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2360
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2361
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2364
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2365
        .trainerName = _("SHAWN"),
#line 2366
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2367
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2369
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2370
        .doubleBattle = FALSE,
#line 2371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2373
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2375
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2374
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2377
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2379
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2378
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2381
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO] =
    {
#line 2382
        .trainerName = _("FERNANDO"),
#line 2383
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2384
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2386
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2387
        .doubleBattle = FALSE,
#line 2388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2390
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2391
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2394
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2395
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2398
    [DIFFICULTY_NORMAL][TRAINER_DALTON] =
    {
#line 2399
        .trainerName = _("DALTON"),
#line 2400
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2401
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2403
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2404
        .doubleBattle = FALSE,
#line 2405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2407
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2408
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2411
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2412
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2415
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2416
        .trainerName = _("COLE"),
#line 2417
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2418
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2420
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2421
        .doubleBattle = FALSE,
#line 2422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2424
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2426
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2425
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2428
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2429
        .trainerName = _("JEFF"),
#line 2430
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2431
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2433
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2434
        .doubleBattle = FALSE,
#line 2435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2437
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2439
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2438
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2441
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2443
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2442
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2445
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2446
        .trainerName = _("AXLE"),
#line 2447
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2448
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2450
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2451
        .doubleBattle = FALSE,
#line 2452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2454
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2456
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2455
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2457
                MOVE_DRAGON_PULSE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2461
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2462
        .trainerName = _("JACE"),
#line 2463
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2464
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2466
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2467
        .doubleBattle = FALSE,
#line 2468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2470
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2472
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2471
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2474
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2475
        .trainerName = _("KEEGAN"),
#line 2476
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2477
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2479
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2480
        .doubleBattle = FALSE,
#line 2481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2483
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2485
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2484
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2486
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_BREATH,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 2490
    [DIFFICULTY_NORMAL][TRAINER_BERNIE] =
    {
#line 2491
        .trainerName = _("BERNIE"),
#line 2492
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2493
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2495
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2496
        .doubleBattle = FALSE,
#line 2497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2499
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2500
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2503
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2504
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2507
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2508
        .trainerName = _("DREW"),
#line 2509
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2510
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2512
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2513
        .doubleBattle = FALSE,
#line 2514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2516
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2517
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2520
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2521
        .trainerName = _("BEAU"),
#line 2522
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2523
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2525
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2526
        .doubleBattle = FALSE,
#line 2527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2529
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2530
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2533
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2534
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2537
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2538
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2542
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2543
        .trainerName = _("LARRY"),
#line 2544
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2545
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2547
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2548
        .doubleBattle = FALSE,
#line 2549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2551
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2552
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2555
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2556
        .trainerName = _("SHANE"),
#line 2557
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2558
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2560
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2561
        .doubleBattle = FALSE,
#line 2562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2564
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2565
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2568
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2569
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2572
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2573
        .trainerName = _("JUSTIN"),
#line 2574
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2575
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2577
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2578
        .doubleBattle = FALSE,
#line 2579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2581
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2582
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2585
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2586
        .trainerName = _("ETHAN"),
#line 2587
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2588
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2590
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2591
        .doubleBattle = FALSE,
#line 2592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2594
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2595
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2598
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2599
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2602
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2603
        .trainerName = _("AUTUMN"),
#line 2604
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2605
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2606
F_TRAINER_FEMALE | 
#line 2607
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2608
        .doubleBattle = FALSE,
#line 2609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2611
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2612
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2615
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2616
        .trainerName = _("TRAVIS"),
#line 2617
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2618
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2620
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2621
        .doubleBattle = FALSE,
#line 2622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2624
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2625
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2628
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2629
        .trainerName = _("BRENT"),
#line 2630
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2631
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2633
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2634
        .doubleBattle = FALSE,
#line 2635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2637
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2639
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2638
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2641
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2642
        .trainerName = _("DONALD"),
#line 2643
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2644
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2646
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2647
        .doubleBattle = FALSE,
#line 2648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2650
            .species = SPECIES_WATCHOG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2652
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2651
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2654
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2656
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2655
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2658
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2660
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2659
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2662
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2663
        .trainerName = _("TAYLOR"),
#line 2664
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2665
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2667
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2668
        .doubleBattle = FALSE,
#line 2669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2671
            .species = SPECIES_CRUSTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2673
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2672
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2675
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2677
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2676
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2679
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2681
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2680
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2683
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 2684
        .trainerName = _("JEFFREY"),
#line 2685
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2686
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2688
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2689
        .doubleBattle = FALSE,
#line 2690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2692
            .species = SPECIES_BEHEEYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2693
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2696
            .species = SPECIES_VESPIQUEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2697
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2700
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2701
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2704
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2705
        .trainerName = _("DEREK"),
#line 2706
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2707
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2709
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2710
        .doubleBattle = FALSE,
#line 2711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2713
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2715
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2714
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2717
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2719
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2718
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2721
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2722
        .trainerName = _("EDWARD"),
#line 2723
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2724
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2726
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2727
        .doubleBattle = FALSE,
#line 2728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2730
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2731
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2734
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2735
        .trainerName = _("PRESTON"),
#line 2736
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2737
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2740
        .doubleBattle = FALSE,
#line 2741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2743
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2745
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2744
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2747
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2748
        .trainerName = _("VIRGIL"),
#line 2749
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2750
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2752
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2753
        .doubleBattle = FALSE,
#line 2754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2756
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2758
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2757
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2760
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2761
        .trainerName = _("BLAKE"),
#line 2762
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2763
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2765
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2766
        .doubleBattle = FALSE,
#line 2767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2769
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2771
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2770
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2773
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2774
        .trainerName = _("WILLIAM"),
#line 2775
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2776
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2778
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2779
        .doubleBattle = FALSE,
#line 2780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2782
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2783
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2786
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2787
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2790
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2791
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2794
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2795
        .trainerName = _("JOSHUA"),
#line 2796
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2797
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2799
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2800
        .doubleBattle = FALSE,
#line 2801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2803
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2804
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2807
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2808
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2811
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 2812
        .trainerName = _("CAMERON"),
#line 2813
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2814
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2816
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2817
        .doubleBattle = FALSE,
#line 2818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2820
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2821
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2824
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2825
        .trainerName = _("JACLYN"),
#line 2826
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2827
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2828
F_TRAINER_FEMALE | 
#line 2829
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2830
        .doubleBattle = FALSE,
#line 2831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2833
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2834
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2837
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2838
        .trainerName = _("HANNAH"),
#line 2839
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2840
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2841
F_TRAINER_FEMALE | 
#line 2842
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2843
        .doubleBattle = FALSE,
#line 2844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2846
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2848
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2847
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2850
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2851
        .trainerName = _("SAMANTHA"),
#line 2852
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2853
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2854
F_TRAINER_FEMALE | 
#line 2855
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2856
        .doubleBattle = FALSE,
#line 2857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2859
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2861
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2860
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2863
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2864
        .trainerName = _("MAURA"),
#line 2865
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2866
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2867
F_TRAINER_FEMALE | 
#line 2868
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2869
        .doubleBattle = FALSE,
#line 2870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2872
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2874
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2873
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2876
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2877
        .trainerName = _("KAYLA"),
#line 2878
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2879
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2880
F_TRAINER_FEMALE | 
#line 2881
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2882
        .doubleBattle = FALSE,
#line 2883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2885
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2886
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2889
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2890
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2893
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2894
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2897
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2898
        .trainerName = _("ALEXIS"),
#line 2899
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2900
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2901
F_TRAINER_FEMALE | 
#line 2902
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2903
        .doubleBattle = FALSE,
#line 2904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2906
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2907
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2910
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2911
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2914
    [DIFFICULTY_NORMAL][TRAINER_JACKI] =
    {
#line 2915
        .trainerName = _("JACKI"),
#line 2916
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2917
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2918
F_TRAINER_FEMALE | 
#line 2919
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2920
        .doubleBattle = FALSE,
#line 2921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2923
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2924
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2927
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2928
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2931
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 2932
        .trainerName = _("WALTER"),
#line 2933
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2934
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2936
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2937
        .doubleBattle = FALSE,
#line 2938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2940
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2941
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2944
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 2945
        .trainerName = _("MICAH"),
#line 2946
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2947
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2949
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2950
        .doubleBattle = FALSE,
#line 2951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2953
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2954
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2957
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2958
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2961
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 2962
        .trainerName = _("THOMAS"),
#line 2963
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2964
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2966
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2967
        .doubleBattle = FALSE,
#line 2968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2970
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2971
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2974
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 2975
        .trainerName = _("MATT"),
#line 2976
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2977
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 2979
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2980
        .doubleBattle = FALSE,
#line 2981
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2982
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2984
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2984
            .heldItem = ITEM_CHOICE_SPECS,
#line 2988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2985
            .ability = ABILITY_SCRAPPY,
#line 2986
            .lvl = 75,
#line 2987
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2988
                MOVE_BOOMBURST,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 2993
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2993
            .heldItem = ITEM_CHOICE_BAND,
#line 2997
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2994
            .ability = ABILITY_KEEN_EYE,
#line 2995
            .lvl = 75,
#line 2996
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2997
                MOVE_BRICK_BREAK,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3002
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3002
            .heldItem = ITEM_THROAT_SPRAY,
#line 3006
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3003
            .ability = ABILITY_BIG_PECKS,
#line 3004
            .lvl = 75,
#line 3005
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3006
                MOVE_SING,
                MOVE_PARTING_SHOT,
                MOVE_BOOMBURST,
                MOVE_ROOST,
            },
            },
            {
#line 3011
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3011
            .heldItem = ITEM_CHOICE_SCARF,
#line 3015
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3012
            .ability = ABILITY_SHARPNESS,
#line 3013
            .lvl = 75,
#line 3014
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3015
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_KNOCK_OFF,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3020
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3020
            .heldItem = ITEM_LEFTOVERS,
#line 3024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3021
            .ability = ABILITY_SERENE_GRACE,
#line 3022
            .lvl = 75,
#line 3023
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3024
                MOVE_RELIC_SONG,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 3029
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3029
            .heldItem = ITEM_ROCKY_HELMET,
#line 3033
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3030
            .ability = ABILITY_CUTE_CHARM,
#line 3031
            .lvl = 75,
#line 3032
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3033
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_PUNCH,
                MOVE_BODY_SLAM,
                MOVE_SPIRIT_BREAK,
            },
            },
        },
    },
#line 3039
    [DIFFICULTY_NORMAL][TRAINER_OZ] =
    {
#line 3040
        .trainerName = _("OZ"),
#line 3041
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3042
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3044
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3045
        .doubleBattle = FALSE,
#line 3046
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3047
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3049
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3049
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3050
            .ability = ABILITY_SNIPER,
#line 3051
            .lvl = 75,
#line 3053
            .nature = NATURE_JOLLY,
#line 3052
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3054
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3059
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3059
            .heldItem = ITEM_LEFTOVERS,
#line 3064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3060
            .ability = ABILITY_FLAME_BODY,
#line 3061
            .lvl = 75,
#line 3063
            .nature = NATURE_TIMID,
#line 3062
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3064
                MOVE_QUIVER_DANCE,
                MOVE_FIERY_DANCE,
                MOVE_MORNING_SUN,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 3069
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3069
            .heldItem = ITEM_CHOICE_SPECS,
#line 3074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3070
            .ability = ABILITY_TINTED_LENS,
#line 3071
            .lvl = 75,
#line 3073
            .nature = NATURE_MODEST,
#line 3072
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3074
                MOVE_BUG_BUZZ,
                MOVE_AIR_SLASH,
                MOVE_HIDDEN_POWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3079
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3079
            .heldItem = ITEM_CHOICE_BAND,
#line 3084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3080
            .ability = ABILITY_TECHNICIAN,
#line 3081
            .lvl = 75,
#line 3083
            .nature = NATURE_ADAMANT,
#line 3082
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3084
                MOVE_CLOSE_COMBAT,
                MOVE_BULLET_PUNCH,
                MOVE_U_TURN,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3089
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3089
            .heldItem = ITEM_CHESTO_BERRY,
#line 3094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3090
            .ability = ABILITY_CONTRARY,
#line 3091
            .lvl = 75,
#line 3093
            .nature = NATURE_BOLD,
#line 3092
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3094
                MOVE_REST,
                MOVE_SHELL_SMASH,
                MOVE_BODY_PRESS,
                MOVE_SALT_CURE,
            },
            },
            {
#line 3099
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3099
            .heldItem = ITEM_ASSAULT_VEST,
#line 3104
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3100
            .ability = ABILITY_OVERCOAT,
#line 3101
            .lvl = 75,
#line 3103
            .nature = NATURE_ADAMANT,
#line 3102
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3104
                MOVE_LEECH_LIFE,
                MOVE_LEAF_STORM,
                MOVE_TRIPLE_AXEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 3109
    [DIFFICULTY_NORMAL][TRAINER_DIEGO] =
    {
#line 3110
        .trainerName = _("DIEGO"),
#line 3111
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3112
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3114
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3115
        .doubleBattle = FALSE,
#line 3116
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3117
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3119
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3119
            .heldItem = ITEM_LEFTOVERS,
#line 3123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3120
            .ability = ABILITY_DROUGHT,
#line 3121
            .lvl = 75,
#line 3122
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3123
                MOVE_SPIKES,
                MOVE_PRECIPICE_BLADES,
                MOVE_STEALTH_ROCK,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 3128
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3128
            .heldItem = ITEM_MUSCLE_BAND,
#line 3132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3129
            .ability = ABILITY_FLAME_BODY,
#line 3130
            .lvl = 75,
#line 3131
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3132
                MOVE_PLAY_ROUGH,
                MOVE_MEGAHORN,
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
            },
            },
            {
#line 3137
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3137
            .heldItem = ITEM_LIFE_ORB,
#line 3141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3138
            .ability = ABILITY_SPEED_BOOST,
#line 3139
            .lvl = 75,
#line 3140
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3141
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3147
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3147
            .heldItem = ITEM_ASSAULT_VEST,
#line 3151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3148
            .ability = ABILITY_BLAZE,
#line 3149
            .lvl = 75,
#line 3150
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3151
                MOVE_SCORCHING_SANDS,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 3157
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3157
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3158
            .ability = ABILITY_LEVITATE,
#line 3159
            .lvl = 75,
#line 3160
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3161
                MOVE_OVERHEAT,
                MOVE_VOLT_SWITCH,
                MOVE_WILL_O_WISP,
                MOVE_HEX,
            },
            },
            {
#line 3167
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3167
            .heldItem = ITEM_CHOICE_SPECS,
#line 3171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3168
            .ability = ABILITY_INFILTRATOR,
#line 3169
            .lvl = 75,
#line 3170
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3171
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_TRICK,
            },
            },
        },
    },
#line 3177
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3178
        .trainerName = _("DRAKE"),
#line 3179
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3180
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3182
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3183
        .doubleBattle = FALSE,
#line 3184
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3185
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3187
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3187
            .heldItem = ITEM_LIFE_ORB,
#line 3191
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3188
            .ability = ABILITY_SHEER_FORCE,
#line 3189
            .lvl = 75,
#line 3190
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3191
                MOVE_CRUNCH,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 3196
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3196
            .heldItem = ITEM_ASSAULT_VEST,
#line 3200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3197
            .ability = ABILITY_UNNERVE,
#line 3198
            .lvl = 75,
#line 3199
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3200
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3205
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3205
            .heldItem = ITEM_CHOICE_BAND,
#line 3209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3206
            .ability = ABILITY_PRESSURE,
#line 3207
            .lvl = 75,
#line 3208
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3209
                MOVE_AERIAL_ACE,
                MOVE_ICE_SPINNER,
                MOVE_DIRE_CLAW,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3214
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3214
            .heldItem = ITEM_CHOICE_SPECS,
#line 3218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3215
            .ability = ABILITY_LEVITATE,
#line 3216
            .lvl = 75,
#line 3217
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3218
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3223
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3223
            .heldItem = ITEM_ROCKY_HELMET,
#line 3227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3224
            .ability = ABILITY_INTIMIDATE,
#line 3225
            .lvl = 75,
#line 3226
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3227
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_FANG,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 3232
            .species = SPECIES_GIRATINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3232
            .heldItem = ITEM_LEFTOVERS,
#line 3236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3233
            .ability = ABILITY_PRESSURE,
#line 3234
            .lvl = 75,
#line 3235
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3236
                MOVE_POLTERGEIST,
                MOVE_OUTRAGE,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3241
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_LG] =
    {
#line 3242
        .trainerName = _("DRAKE"),
#line 3243
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3244
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3246
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3247
        .doubleBattle = FALSE,
#line 3248
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3249
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3251
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3251
            .heldItem = ITEM_LIFE_ORB,
#line 3255
            .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
#line 3256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3252
            .ability = ABILITY_SHEER_FORCE,
#line 3253
            .lvl = 80,
#line 3254
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3256
                MOVE_THUNDER_PUNCH,
                MOVE_STOMPING_TANTRUM,
                MOVE_POISON_JAB,
                MOVE_CRUNCH,
            },
            },
            {
#line 3261
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3261
            .heldItem = ITEM_LEFTOVERS,
#line 3265
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 0, 6),
#line 3266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3262
            .ability = ABILITY_MAGIC_GUARD,
#line 3263
            .lvl = 80,
#line 3264
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3266
                MOVE_DAZZLING_GLEAM,
                MOVE_FOLLOW_ME,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 3271
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3271
            .heldItem = ITEM_ASSAULT_VEST,
#line 3275
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 6, 0, 252),
#line 3276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3272
            .ability = ABILITY_ANGER_SHELL,
#line 3273
            .lvl = 80,
#line 3274
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3276
                MOVE_JET_PUNCH,
                MOVE_WAVE_CRASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 3281
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3281
            .heldItem = ITEM_LUM_BERRY,
#line 3286
            .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
#line 3287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3282
            .ability = ABILITY_INNER_FOCUS,
#line 3283
            .lvl = 80,
#line 3285
            .nature = NATURE_ADAMANT,
#line 3284
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3287
                MOVE_OUTRAGE,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_TAILWIND,
            },
            },
            {
#line 3292
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .heldItem = ITEM_CHOICE_SPECS,
#line 3296
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3293
            .ability = ABILITY_REFRIGERATE,
#line 3294
            .lvl = 80,
#line 3295
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3297
                MOVE_TRI_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_GLACIATE,
            },
            },
            {
#line 3302
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3302
            .heldItem = ITEM_AIR_BALLOON,
#line 3306
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3303
            .ability = ABILITY_VOLT_ABSORB,
#line 3304
            .lvl = 80,
#line 3305
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3307
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_THUNDERBOLT,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 3312
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_EM] =
    {
#line 3313
        .trainerName = _("DRAKE"),
#line 3314
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3315
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3317
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3318
        .doubleBattle = FALSE,
#line 3319
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3320
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3322
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3322
            .heldItem = ITEM_ASSAULT_VEST,
#line 3326
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 6, 252),
#line 3327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3323
            .ability = ABILITY_DRIZZLE,
#line 3324
            .lvl = 80,
#line 3325
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3327
                MOVE_WATER_SPOUT,
                MOVE_BLIZZARD,
                MOVE_THUNDER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 3332
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3332
            .heldItem = ITEM_ROCKY_HELMET,
#line 3336
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3333
            .ability = ABILITY_ROUGH_SKIN,
#line 3334
            .lvl = 80,
#line 3335
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3337
                MOVE_POISON_FANG,
                MOVE_CRUNCH,
                MOVE_FISHIOUS_REND,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3342
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3342
            .heldItem = ITEM_LIFE_ORB,
#line 3346
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 6, 252, 0),
#line 3347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3343
            .ability = ABILITY_COMPETITIVE,
#line 3344
            .lvl = 80,
#line 3345
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3347
                MOVE_SPRINGTIDE_STORM,
                MOVE_WEATHER_BALL,
                MOVE_SCALD,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3352
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3352
            .heldItem = ITEM_MUSCLE_BAND,
#line 3356
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 6, 0, 0),
#line 3357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3353
            .ability = ABILITY_SWIFT_SWIM,
#line 3354
            .lvl = 80,
#line 3355
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3357
                MOVE_THUNDER_PUNCH,
                MOVE_SWORDS_DANCE,
                MOVE_LIQUIDATION,
                MOVE_WOOD_HAMMER,
            },
            },
            {
#line 3362
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3362
            .heldItem = ITEM_RINDO_BERRY,
#line 3366
            .ev = TRAINER_PARTY_EVS(58, 252, 100, 0, 0, 100),
#line 3367
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3363
            .ability = ABILITY_SOLID_ROCK,
#line 3364
            .lvl = 80,
#line 3365
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3367
                MOVE_SPIKES,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PROTECT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 3372
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3372
            .heldItem = ITEM_SCOPE_LENS,
#line 3376
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3373
            .ability = ABILITY_SNIPER,
#line 3374
            .lvl = 80,
#line 3375
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3377
                MOVE_SNIPE_SHOT,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
            },
            },
        },
    },
#line 3382
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_PT] =
    {
#line 3383
        .trainerName = _("DRAKE"),
#line 3384
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3385
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3387
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3388
        .doubleBattle = FALSE,
#line 3389
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3390
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3392
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3392
            .heldItem = ITEM_TOXIC_ORB,
#line 3396
            .ev = TRAINER_PARTY_EVS(252, 6, 0, 252, 0, 0),
#line 3397
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3393
            .ability = ABILITY_POISON_HEAL,
#line 3394
            .lvl = 80,
#line 3395
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3397
                MOVE_STEALTH_ROCK,
                MOVE_U_TURN,
                MOVE_TAILWIND,
                MOVE_HIGH_HORSEPOWER,
            },
            },
            {
#line 3402
            .species = SPECIES_DARKRAI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3402
            .heldItem = ITEM_WIDE_LENS,
#line 3406
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 252, 6, 0),
#line 3407
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3403
            .ability = ABILITY_BAD_DREAMS,
#line 3404
            .lvl = 80,
#line 3405
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3407
                MOVE_DARK_PULSE,
                MOVE_DARK_VOID,
                MOVE_CALM_MIND,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 3412
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3412
            .heldItem = ITEM_CHOICE_BAND,
#line 3416
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3413
            .ability = ABILITY_SLUSH_RUSH,
#line 3414
            .lvl = 80,
#line 3415
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3417
                MOVE_AERIAL_ACE,
                MOVE_ICE_SPINNER,
                MOVE_DIRE_CLAW,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3422
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3422
            .heldItem = ITEM_LEFTOVERS,
#line 3426
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 6),
#line 3427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3423
            .ability = ABILITY_LEVITATE,
#line 3424
            .lvl = 80,
#line 3425
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3427
                MOVE_IRON_DEFENSE,
                MOVE_METEOR_MASH,
                MOVE_BODY_PRESS,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 3432
            .species = SPECIES_GIRATINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3432
            .heldItem = ITEM_ASSAULT_VEST,
#line 3436
            .ev = TRAINER_PARTY_EVS(6, 0, 252, 0, 0, 252),
#line 3437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3433
            .ability = ABILITY_PRESSURE,
#line 3434
            .lvl = 80,
#line 3435
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3437
                MOVE_SHADOW_FORCE,
                MOVE_ICY_WIND,
                MOVE_IRON_HEAD,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 3442
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3442
            .heldItem = ITEM_CHOICE_SCARF,
#line 3446
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 6),
#line 3447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3443
            .ability = ABILITY_SHARPNESS,
#line 3444
            .lvl = 80,
#line 3445
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3447
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_KNOCK_OFF,
                MOVE_TACHYON_CUTTER,
            },
            },
        },
    },
#line 3452
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_SS] =
    {
#line 3453
        .trainerName = _("DRAKE"),
#line 3454
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3455
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3457
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3458
        .doubleBattle = FALSE,
#line 3459
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3460
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3462
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .heldItem = ITEM_CHOICE_SPECS,
#line 3466
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 3467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3463
            .ability = ABILITY_FLASH_FIRE,
#line 3464
            .lvl = 80,
#line 3465
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3467
                MOVE_ERUPTION,
                MOVE_INFERNAL_PARADE,
                MOVE_ENERGY_BALL,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3472
            .species = SPECIES_LUGIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3472
            .heldItem = ITEM_LEFTOVERS,
#line 3476
            .ev = TRAINER_PARTY_EVS(110, 0, 0, 0, 200, 200),
#line 3477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3473
            .ability = ABILITY_MULTISCALE,
#line 3474
            .lvl = 80,
#line 3475
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3477
                MOVE_AEROBLAST,
                MOVE_ESPER_WING,
                MOVE_DRAGON_PULSE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3482
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3482
            .heldItem = ITEM_MUSCLE_BAND,
#line 3486
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3483
            .ability = ABILITY_SHARPNESS,
#line 3484
            .lvl = 80,
#line 3485
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3487
                MOVE_AQUA_CUTTER,
                MOVE_STONE_AXE,
                MOVE_CEASELESS_EDGE,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 3492
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3492
            .heldItem = ITEM_ROCKY_HELMET,
#line 3496
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 6, 252, 0),
#line 3497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3493
            .ability = ABILITY_FLOWER_VEIL,
#line 3494
            .lvl = 80,
#line 3495
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3497
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_STRENGTH_SAP,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 3502
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .heldItem = ITEM_ASSAULT_VEST,
#line 3506
            .ev = TRAINER_PARTY_EVS(38, 0, 110, 0, 252, 110),
#line 3507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3503
            .ability = ABILITY_INNER_FOCUS,
#line 3504
            .lvl = 80,
#line 3505
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3507
                MOVE_NIGHT_DAZE,
                MOVE_MOONBLAST,
                MOVE_SHADOW_BALL,
                MOVE_LUMINA_CRASH,
            },
            },
            {
#line 3512
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3516
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 3517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .ability = ABILITY_POISON_PUPPETEER,
#line 3514
            .lvl = 80,
#line 3515
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3517
                MOVE_MALIGNANT_CHAIN,
                MOVE_ASTRAL_BARRAGE,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_SNEAK,
            },
            },
        },
    },
#line 3522
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_CHAMP] =
    {
#line 3523
        .trainerName = _("DRAKE"),
#line 3524
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3525
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3527
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3528
        .doubleBattle = FALSE,
#line 3529
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3530
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3532
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3532
            .heldItem = ITEM_ROCKY_HELMET,
#line 3536
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3533
            .ability = ABILITY_SAND_STREAM,
#line 3534
            .lvl = 80,
#line 3535
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3537
                MOVE_KNOCK_OFF,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_ACCELEROCK,
            },
            },
            {
#line 3542
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3542
            .heldItem = ITEM_LIFE_ORB,
#line 3546
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3543
            .ability = ABILITY_SAND_VEIL,
#line 3544
            .lvl = 80,
#line 3545
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3547
                MOVE_DRAGON_RUSH,
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3552
            .species = SPECIES_HEATRAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .heldItem = ITEM_ASSAULT_VEST,
#line 3556
            .ev = TRAINER_PARTY_EVS(0, 6, 252, 0, 0, 252),
#line 3557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3553
            .ability = ABILITY_FLAME_BODY,
#line 3554
            .lvl = 80,
#line 3555
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3557
                MOVE_MAGMA_STORM,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3562
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3562
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3566
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3567
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3563
            .ability = ABILITY_INTIMIDATE,
#line 3564
            .lvl = 80,
#line 3565
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3567
                MOVE_DRAGON_RUSH,
                MOVE_TEMPER_FLARE,
                MOVE_AIR_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3572
            .species = SPECIES_TERRAKION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3572
            .heldItem = ITEM_CHOICE_BAND,
#line 3576
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3573
            .ability = ABILITY_JUSTIFIED,
#line 3574
            .lvl = 80,
#line 3575
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3577
                MOVE_STONE_EDGE,
                MOVE_CLOSE_COMBAT,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3582
            .species = SPECIES_JIRACHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .heldItem = ITEM_LEFTOVERS,
#line 3586
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 6),
#line 3587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3583
            .ability = ABILITY_SERENE_GRACE,
#line 3584
            .lvl = 80,
#line 3585
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_MAKE_IT_RAIN,
                MOVE_FREEZING_GLARE,
                MOVE_THUNDERBOLT,
                MOVE_DAZZLING_GLEAM,
            },
            },
        },
    },
#line 3592
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
    {
#line 3593
        .trainerName = _("ALEC"),
#line 3594
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3595
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3597
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3598
        .doubleBattle = FALSE,
#line 3599
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3601
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3602
            .ability = ABILITY_STURDY,
#line 3603
            .lvl = 16,
#line 3604
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3606
                MOVE_STEALTH_ROCK,
                MOVE_MIMIC,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3611
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3615
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3612
            .ability = ABILITY_LEVITATE,
#line 3613
            .lvl = 16,
#line 3614
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3616
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3621
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3621
            .heldItem = ITEM_SALAC_BERRY,
#line 3625
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3622
            .ability = ABILITY_SUCTION_CUPS,
#line 3623
            .lvl = 16,
#line 3624
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3626
                MOVE_ANCIENT_POWER,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 3631
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3631
            .heldItem = ITEM_SALAC_BERRY,
#line 3635
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3632
            .ability = ABILITY_UNNERVE,
#line 3633
            .lvl = 16,
#line 3634
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3636
                MOVE_ANCIENT_POWER,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3641
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3642
        .trainerName = _("GARRETT"),
#line 3643
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3644
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3646
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3647
        .doubleBattle = FALSE,
#line 3648
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3650
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3651
            .ability = ABILITY_MARVEL_SCALE,
#line 3652
            .lvl = 22,
#line 3653
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3660
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3664
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3661
            .ability = ABILITY_TORRENT,
#line 3662
            .lvl = 22,
#line 3663
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3665
                MOVE_FLIP_TURN,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3670
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3670
            .heldItem = ITEM_SCOPE_LENS,
#line 3674
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3671
            .ability = ABILITY_SKILL_LINK,
#line 3672
            .lvl = 22,
#line 3673
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3675
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3680
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3680
            .heldItem = ITEM_WIDE_LENS,
#line 3684
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3681
            .ability = ABILITY_TORRENT,
#line 3682
            .lvl = 22,
#line 3683
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_BULLDOZE,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3690
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3691
        .trainerName = _("SAM"),
#line 3692
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3693
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3695
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3696
        .doubleBattle = FALSE,
#line 3697
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3699
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .heldItem = ITEM_METAL_COAT,
#line 3703
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3700
            .ability = ABILITY_MAGNET_PULL,
#line 3701
            .lvl = 32,
#line 3702
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3704
                MOVE_MAGNET_RISE,
                MOVE_SPARK,
                MOVE_FLASH_CANNON,
                MOVE_TRI_ATTACK,
            },
            },
            {
#line 3709
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .heldItem = ITEM_SILK_SCARF,
#line 3713
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3710
            .ability = ABILITY_DOWNLOAD,
#line 3711
            .lvl = 32,
#line 3712
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3714
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3719
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .heldItem = ITEM_SITRUS_BERRY,
#line 3723
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3720
            .ability = ABILITY_VITAL_SPIRIT,
#line 3722
            .lvl = 32,
#line 3721
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3724
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_METAL_SOUND,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3729
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3729
            .heldItem = ITEM_SITRUS_BERRY,
#line 3733
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3730
            .ability = ABILITY_INTIMIDATE,
#line 3732
            .lvl = 32,
#line 3731
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3733
                MOVE_BITE,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3738
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3738
            .heldItem = ITEM_MAGNET,
#line 3742
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3739
            .ability = ABILITY_STATIC,
#line 3740
            .lvl = 32,
#line 3741
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3743
                MOVE_ELECTRIC_TERRAIN,
                MOVE_PAYBACK,
                MOVE_MUD_BOMB,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 3748
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3749
        .trainerName = _("JOSE"),
#line 3750
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3751
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3753
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3754
        .doubleBattle = FALSE,
#line 3755
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3757
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3757
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3761
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3758
            .ability = ABILITY_NATURAL_CURE,
#line 3759
            .lvl = 38,
#line 3760
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3762
                MOVE_COTTON_GUARD,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_ALLURING_VOICE,
            },
            },
            {
#line 3767
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3767
            .heldItem = ITEM_CHARCOAL,
#line 3771
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3768
            .ability = ABILITY_BLAZE,
#line 3769
            .lvl = 38,
#line 3770
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3772
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3777
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3777
            .heldItem = ITEM_ASSAULT_VEST,
#line 3781
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3778
            .ability = ABILITY_LEVITATE,
#line 3779
            .lvl = 38,
#line 3780
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3782
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3787
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3787
            .heldItem = ITEM_ROCKY_HELMET,
#line 3791
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3788
            .ability = ABILITY_MARVEL_SCALE,
#line 3789
            .lvl = 38,
#line 3790
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3792
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_SLAM,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3797
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3797
            .heldItem = ITEM_DRAGON_FANG,
#line 3801
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3798
            .ability = ABILITY_SNIPER,
#line 3799
            .lvl = 38,
#line 3800
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3802
                MOVE_SCALE_SHOT,
                MOVE_OCTAZOOKA,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
            {
#line 3807
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .heldItem = ITEM_LIFE_ORB,
#line 3811
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3808
            .ability = ABILITY_ROUGH_SKIN,
#line 3809
            .lvl = 38,
#line 3810
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3812
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3817
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3818
        .trainerName = _("GRAYSON"),
#line 3819
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3820
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3822
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3823
        .doubleBattle = FALSE,
#line 3824
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3826
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3826
            .heldItem = ITEM_MUSCLE_BAND,
#line 3830
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3827
            .ability = ABILITY_IRON_FIST,
#line 3828
            .lvl = 43,
#line 3829
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3830
                MOVE_BULK_UP,
                MOVE_ROCK_SLIDE,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3835
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3835
            .heldItem = ITEM_BLACK_BELT,
#line 3839
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3836
            .ability = ABILITY_GUTS,
#line 3837
            .lvl = 43,
#line 3838
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3839
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3844
            .species = SPECIES_LOPUNNY,
#line 3844
            .gender = TRAINER_MON_FEMALE,
#line 3844
            .heldItem = ITEM_ROCKY_HELMET,
#line 3848
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3845
            .ability = ABILITY_CUTE_CHARM,
#line 3846
            .lvl = 43,
#line 3847
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3848
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3853
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3853
            .heldItem = ITEM_FOCUS_BAND,
#line 3857
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3854
            .ability = ABILITY_MOXIE,
#line 3855
            .lvl = 43,
#line 3856
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3857
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3862
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .heldItem = ITEM_EXPERT_BELT,
#line 3866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3863
            .ability = ABILITY_INNER_FOCUS,
#line 3864
            .lvl = 43,
#line 3865
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3866
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_METAL_SOUND,
            },
            },
            {
#line 3871
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3871
            .heldItem = ITEM_FOCUS_BAND,
#line 3875
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3872
            .ability = ABILITY_POISON_TOUCH,
#line 3873
            .lvl = 43,
#line 3874
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3875
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3880
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3881
        .trainerName = _("MATTHEW"),
#line 3882
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3883
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3885
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3886
        .doubleBattle = FALSE,
#line 3887
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3889
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .heldItem = ITEM_AIR_BALLOON,
#line 3893
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3890
            .ability = ABILITY_STURDY,
#line 3891
            .lvl = 51,
#line 3892
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3893
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3898
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3898
            .heldItem = ITEM_MUSCLE_BAND,
#line 3902
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3899
            .ability = ABILITY_STURDY,
#line 3900
            .lvl = 51,
#line 3901
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3902
                MOVE_ROOST,
                MOVE_DRILL_PECK,
                MOVE_IRON_HEAD,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 3907
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3907
            .heldItem = ITEM_ASSAULT_VEST,
#line 3911
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3908
            .ability = ABILITY_CLEAR_BODY,
#line 3909
            .lvl = 51,
#line 3910
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3916
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .heldItem = ITEM_CHOICE_SPECS,
#line 3920
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3917
            .ability = ABILITY_COMPETITIVE,
#line 3918
            .lvl = 51,
#line 3919
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3920
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3925
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3925
            .heldItem = ITEM_CHOICE_BAND,
#line 3929
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3926
            .ability = ABILITY_TECHNICIAN,
#line 3927
            .lvl = 51,
#line 3928
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3929
                MOVE_BULLET_PUNCH,
                MOVE_MEGAHORN,
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3934
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3934
            .heldItem = ITEM_ROCKY_HELMET,
#line 3938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3935
            .ability = ABILITY_IRON_BARBS,
#line 3936
            .lvl = 51,
#line 3937
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3938
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3943
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3944
        .trainerName = _("MARK"),
#line 3945
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3946
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3948
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3949
        .doubleBattle = FALSE,
#line 3950
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3952
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3952
            .heldItem = ITEM_ROCKY_HELMET,
#line 3956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3953
            .ability = ABILITY_FLASH_FIRE,
#line 3954
            .lvl = 61,
#line 3955
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3956
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_MOONBLAST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3961
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3961
            .heldItem = ITEM_CHOICE_SPECS,
#line 3965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3962
            .ability = ABILITY_PIXILATE,
#line 3963
            .lvl = 61,
#line 3964
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3965
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_MOONBLAST,
            },
            },
            {
#line 3970
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3970
            .heldItem = ITEM_CHOICE_BAND,
#line 3974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3971
            .ability = ABILITY_HUGE_POWER,
#line 3972
            .lvl = 61,
#line 3973
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3974
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 3979
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3979
            .heldItem = ITEM_ASSAULT_VEST,
#line 3983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3980
            .ability = ABILITY_SERENE_GRACE,
#line 3981
            .lvl = 61,
#line 3982
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3983
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3988
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3988
            .heldItem = ITEM_LEFTOVERS,
#line 3992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3989
            .ability = ABILITY_SERENE_GRACE,
#line 3990
            .lvl = 61,
#line 3991
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3992
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_FIERY_DANCE,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3997
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3997
            .heldItem = ITEM_OCCA_BERRY,
#line 4001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3998
            .ability = ABILITY_INTIMIDATE,
#line 3999
            .lvl = 61,
#line 4000
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4001
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 4006
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 4007
        .trainerName = _("XANDER"),
#line 4008
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4009
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 4011
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4012
        .doubleBattle = TRUE,
#line 4013
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4015
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .heldItem = ITEM_BLACK_SLUDGE,
#line 4019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4016
            .ability = ABILITY_CURSED_BODY,
#line 4017
            .lvl = 67,
#line 4018
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4019
                MOVE_ASTRAL_BARRAGE,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 4024
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4024
            .heldItem = ITEM_SITRUS_BERRY,
#line 4028
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4025
            .ability = ABILITY_MUMMY,
#line 4026
            .lvl = 67,
#line 4027
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4028
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_BALL,
                MOVE_PROTECT,
            },
            },
            {
#line 4033
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4033
            .heldItem = ITEM_CHOICE_SPECS,
#line 4037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4034
            .ability = ABILITY_FLASH_FIRE,
#line 4035
            .lvl = 67,
#line 4036
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4037
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 4042
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .heldItem = ITEM_SITRUS_BERRY,
#line 4046
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4043
            .ability = ABILITY_LEVITATE,
#line 4044
            .lvl = 67,
#line 4045
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4046
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 4051
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4051
            .heldItem = ITEM_CHOICE_BAND,
#line 4055
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4052
            .ability = ABILITY_NO_GUARD,
#line 4053
            .lvl = 67,
#line 4054
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4055
                MOVE_EARTHQUAKE,
                MOVE_RAGE_FIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 4060
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4060
            .heldItem = ITEM_LEFTOVERS,
#line 4064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4061
            .ability = ABILITY_PRESSURE,
#line 4062
            .lvl = 67,
#line 4063
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4064
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 4069
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 4070
        .trainerName = _("JERRY"),
#line 4071
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4072
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4074
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4075
        .doubleBattle = FALSE,
#line 4076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4078
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4080
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4079
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4082
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 4083
        .trainerName = _("TED"),
#line 4084
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4085
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4087
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4088
        .doubleBattle = FALSE,
#line 4089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4091
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4092
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4095
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 4096
        .trainerName = _("PAUL"),
#line 4097
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4098
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4100
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4101
        .doubleBattle = FALSE,
#line 4102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4104
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4106
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4105
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4108
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4110
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4109
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4112
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4114
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4113
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4116
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 4117
        .trainerName = _("KAREN"),
#line 4118
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4119
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4120
F_TRAINER_FEMALE | 
#line 4121
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4122
        .doubleBattle = FALSE,
#line 4123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4125
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4126
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4129
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 4130
        .trainerName = _("GEORGIA"),
#line 4131
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4132
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4133
F_TRAINER_FEMALE | 
#line 4134
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4135
        .doubleBattle = FALSE,
#line 4136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4138
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4140
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4139
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4142
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4144
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4143
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4146
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 4147
        .trainerName = _("KATE & JOY"),
#line 4148
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4149
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4151
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4152
        .doubleBattle = TRUE,
#line 4153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4155
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4156
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4159
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4160
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4164
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 4165
        .trainerName = _("ANNA & MEG"),
#line 4166
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4167
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4169
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4170
        .doubleBattle = TRUE,
#line 4171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4173
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4174
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4177
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4178
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4181
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 4182
        .trainerName = _("VICTOR"),
#line 4183
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4184
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4186
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4187
        .doubleBattle = FALSE,
#line 4188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4190
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4190
            .heldItem = ITEM_ORAN_BERRY,
#line 4192
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4191
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4194
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .heldItem = ITEM_ORAN_BERRY,
#line 4196
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4195
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4198
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 4199
        .trainerName = _("MIGUEL"),
#line 4200
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4201
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4203
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4204
        .doubleBattle = FALSE,
#line 4205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4207
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .heldItem = ITEM_ORAN_BERRY,
#line 4209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4208
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4211
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 4212
        .trainerName = _("COLTON"),
#line 4213
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4214
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4216
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4217
        .doubleBattle = FALSE,
#line 4218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4220
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4220
            .heldItem = ITEM_ORAN_BERRY,
#line 4222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4221
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4223
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4228
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .heldItem = ITEM_ORAN_BERRY,
#line 4230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4229
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4231
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4236
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4236
            .heldItem = ITEM_ORAN_BERRY,
#line 4238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4237
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4239
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4244
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .heldItem = ITEM_ORAN_BERRY,
#line 4246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4245
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4247
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4252
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .heldItem = ITEM_ORAN_BERRY,
#line 4254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4253
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4255
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4260
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4260
            .heldItem = ITEM_ORAN_BERRY,
#line 4262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4261
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4263
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4268
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4269
        .trainerName = _("VICTORIA"),
#line 4270
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4271
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4272
F_TRAINER_FEMALE | 
#line 4273
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4274
        .doubleBattle = FALSE,
#line 4275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4277
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4277
            .heldItem = ITEM_ORAN_BERRY,
#line 4279
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4278
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4281
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 4282
        .trainerName = _("VANESSA"),
#line 4283
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4284
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4285
F_TRAINER_FEMALE | 
#line 4286
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4287
        .doubleBattle = FALSE,
#line 4288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4290
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .heldItem = ITEM_ORAN_BERRY,
#line 4292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4291
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4294
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4295
        .trainerName = _("BETHANY"),
#line 4296
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4297
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4298
F_TRAINER_FEMALE | 
#line 4299
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4300
        .doubleBattle = FALSE,
#line 4301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4303
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4303
            .heldItem = ITEM_ORAN_BERRY,
#line 4305
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4304
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4307
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .heldItem = ITEM_ORAN_BERRY,
#line 4309
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4308
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4311
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4311
            .heldItem = ITEM_ORAN_BERRY,
#line 4313
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4312
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4315
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 4316
        .trainerName = _("ISABEL"),
#line 4317
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4318
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4319
F_TRAINER_FEMALE | 
#line 4320
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4321
        .doubleBattle = FALSE,
#line 4322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4324
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .heldItem = ITEM_ORAN_BERRY,
#line 4326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4325
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4328
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4328
            .heldItem = ITEM_ORAN_BERRY,
#line 4330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4329
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4332
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 4333
        .trainerName = _("TIMOTHY"),
#line 4334
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4335
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4337
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4338
        .doubleBattle = FALSE,
#line 4339
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4341
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4342
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4345
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4346
        .trainerName = _("VICKY"),
#line 4347
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4348
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4349
F_TRAINER_FEMALE | 
#line 4350
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4351
        .doubleBattle = FALSE,
#line 4352
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4354
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4356
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4355
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4358
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 4359
        .trainerName = _("SHELBY"),
#line 4360
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4361
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4362
F_TRAINER_FEMALE | 
#line 4363
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4364
        .doubleBattle = FALSE,
#line 4365
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4367
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4369
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4368
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4371
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4373
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4372
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4375
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4376
        .trainerName = _("CALVIN"),
#line 4377
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4378
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4380
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4381
        .doubleBattle = FALSE,
#line 4382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4384
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4385
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4388
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4389
        .trainerName = _("BILLY"),
#line 4390
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4391
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4393
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4394
        .doubleBattle = FALSE,
#line 4395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4397
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4398
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4401
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4402
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4405
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4406
        .trainerName = _("JOSH"),
#line 4407
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4408
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4410
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4411
        .doubleBattle = FALSE,
#line 4412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4414
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4415
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4417
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4419
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4420
        .trainerName = _("TOMMY"),
#line 4421
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4422
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4424
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4425
        .doubleBattle = FALSE,
#line 4426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4428
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4430
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4429
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4432
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4433
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4436
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4437
        .trainerName = _("JOEY"),
#line 4438
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4439
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4441
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4442
        .doubleBattle = FALSE,
#line 4443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4445
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4446
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4449
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4450
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4453
    [DIFFICULTY_NORMAL][TRAINER_GLASSES] =
    {
#line 4454
        .trainerName = _("GLASSES"),
#line 4455
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4456
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4458
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4459
        .doubleBattle = FALSE,
#line 4460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4462
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4463
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4466
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4467
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4470
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4471
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4474
    [DIFFICULTY_NORMAL][TRAINER_PERKEO] =
    {
#line 4475
        .trainerName = _("PERKEO"),
#line 4476
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4477
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4479
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4480
        .doubleBattle = FALSE,
#line 4481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4483
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4484
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4487
            .species = SPECIES_RAMPARDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4488
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4491
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4492
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4495
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 4496
        .trainerName = _("DANNY"),
#line 4497
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4498
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4500
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4501
        .doubleBattle = FALSE,
#line 4502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4504
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4505
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4508
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4509
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4512
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4513
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4516
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4517
        .trainerName = _("BEN"),
#line 4518
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4519
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4521
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4522
        .doubleBattle = FALSE,
#line 4523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4525
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4527
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4526
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4530
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4532
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4531
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4535
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4536
        .trainerName = _("QUINCY"),
#line 4537
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4538
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4540
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4541
        .items = { ITEM_FULL_RESTORE },
#line 4542
        .doubleBattle = FALSE,
#line 4543
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4545
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4547
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4546
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4549
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4551
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4550
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4553
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4554
        .trainerName = _("KATELYNN"),
#line 4555
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4556
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4557
F_TRAINER_FEMALE | 
#line 4558
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4559
        .items = { ITEM_FULL_RESTORE },
#line 4560
        .doubleBattle = FALSE,
#line 4561
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4563
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4564
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4566
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4571
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4573
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4572
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4574
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4579
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4580
        .trainerName = _("JAYLEN"),
#line 4581
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4582
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4584
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4585
        .doubleBattle = FALSE,
#line 4586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4588
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4589
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4592
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4593
        .trainerName = _("DILLON"),
#line 4594
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4595
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4597
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4598
        .doubleBattle = FALSE,
#line 4599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4601
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4602
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4605
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4606
        .trainerName = _("EDDIE"),
#line 4607
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4608
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4610
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4611
        .doubleBattle = FALSE,
#line 4612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4615
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4618
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4619
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4622
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4623
        .trainerName = _("ALLEN"),
#line 4624
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4625
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4627
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4628
        .doubleBattle = FALSE,
#line 4629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4631
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4632
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4635
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4636
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4639
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4640
        .trainerName = _("TIMMY"),
#line 4641
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4642
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4644
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4645
        .doubleBattle = FALSE,
#line 4646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4648
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4649
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4652
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4653
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4656
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4657
        .trainerName = _("FATTY"),
#line 4658
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4659
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4661
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4662
        .doubleBattle = FALSE,
#line 4663
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4664
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4666
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4666
            .heldItem = ITEM_LIFE_ORB,
#line 4670
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4667
            .ability = ABILITY_THICK_FAT,
#line 4668
            .lvl = 77,
#line 4669
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4671
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4676
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .heldItem = ITEM_CHOICE_BAND,
#line 4680
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4677
            .ability = ABILITY_INTIMIDATE,
#line 4678
            .lvl = 77,
#line 4679
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4681
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4686
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .heldItem = ITEM_LEFTOVERS,
#line 4690
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4691
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4687
            .ability = ABILITY_CHLOROPHYLL,
#line 4688
            .lvl = 77,
#line 4689
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4691
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4696
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4696
            .heldItem = ITEM_FOCUS_SASH,
#line 4700
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4701
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4697
            .ability = ABILITY_MAGIC_GUARD,
#line 4698
            .lvl = 77,
#line 4699
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4701
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4706
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .heldItem = ITEM_WIDE_LENS,
#line 4710
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4711
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4707
            .ability = ABILITY_STATIC,
#line 4708
            .lvl = 77,
#line 4709
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4711
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4716
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .heldItem = ITEM_EVIOLITE,
#line 4720
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4721
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4717
            .ability = ABILITY_SWIFT_SWIM,
#line 4718
            .lvl = 77,
#line 4719
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4721
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4726
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4727
        .trainerName = _("ANDREW"),
#line 4728
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4729
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4731
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4732
        .doubleBattle = FALSE,
#line 4733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4735
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4736
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4739
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4740
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4743
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4744
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4747
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4748
        .trainerName = _("IVAN"),
#line 4749
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4750
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4752
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4753
        .doubleBattle = FALSE,
#line 4754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4756
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4757
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4760
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4761
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4764
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4765
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4768
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4769
        .trainerName = _("CLAUDE"),
#line 4770
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4771
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4773
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4774
        .doubleBattle = FALSE,
#line 4775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4777
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4778
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4781
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4782
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4785
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4786
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4789
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4790
        .trainerName = _("ELLIOT"),
#line 4791
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4792
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4794
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4795
        .doubleBattle = FALSE,
#line 4796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4798
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4799
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4802
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4803
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4806
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4807
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4810
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4811
        .trainerName = _("NED"),
#line 4812
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4813
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4815
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4816
        .doubleBattle = FALSE,
#line 4817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4819
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4821
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4820
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4823
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4824
        .trainerName = _("DALE"),
#line 4825
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4826
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4828
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4829
        .doubleBattle = FALSE,
#line 4830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4832
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4833
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4836
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4837
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4840
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4841
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4844
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4845
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4848
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4849
        .trainerName = _("NOLAN"),
#line 4850
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4851
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4853
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4854
        .doubleBattle = FALSE,
#line 4855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4857
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4858
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4861
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4862
        .trainerName = _("BARNY"),
#line 4863
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4864
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4866
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4867
        .doubleBattle = FALSE,
#line 4868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4870
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4871
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4874
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4875
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4878
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4879
        .trainerName = _("WADE"),
#line 4880
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4881
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4883
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4884
        .doubleBattle = FALSE,
#line 4885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4887
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4889
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4888
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4890
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4891
        .trainerName = _("ABIGAL"),
#line 4892
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4893
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4894
F_TRAINER_FEMALE | 
#line 4895
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4896
        .doubleBattle = FALSE,
#line 4897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4899
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4900
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4902
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4903
        .trainerName = _("CARTER"),
#line 4904
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4905
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4907
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4908
        .doubleBattle = FALSE,
#line 4909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4911
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4913
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4912
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4915
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4917
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4916
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4919
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4920
        .trainerName = _("RONALD"),
#line 4921
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4922
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4924
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4925
        .doubleBattle = FALSE,
#line 4926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4928
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4929
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4933
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4934
        .trainerName = _("JACOB"),
#line 4935
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4936
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4938
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4939
        .doubleBattle = FALSE,
#line 4940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4942
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4944
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4943
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4946
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4948
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4947
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4950
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4952
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4951
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4954
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4955
        .trainerName = _("ANTHONY"),
#line 4956
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4957
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4959
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4960
        .doubleBattle = FALSE,
#line 4961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4963
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4964
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4967
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4968
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4971
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4972
        .trainerName = _("BENJAMIN"),
#line 4973
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4974
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4976
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4977
        .doubleBattle = FALSE,
#line 4978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4980
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4981
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4984
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4985
        .trainerName = _("JASMINE"),
#line 4986
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4987
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4988
F_TRAINER_FEMALE | 
#line 4989
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4990
        .doubleBattle = FALSE,
#line 4991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4993
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4994
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4997
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4999
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4998
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5001
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5002
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5005
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 5006
        .trainerName = _("DYLAN"),
#line 5007
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5008
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5010
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5011
        .doubleBattle = FALSE,
#line 5012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5014
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5015
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5018
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 5019
        .trainerName = _("MARIA"),
#line 5020
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5021
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5022
F_TRAINER_FEMALE | 
#line 5023
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5024
        .doubleBattle = FALSE,
#line 5025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5027
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5028
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5031
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 5032
        .trainerName = _("CAMDEN"),
#line 5033
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5034
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5036
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5037
        .doubleBattle = FALSE,
#line 5038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5040
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5041
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5044
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5045
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5048
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5049
        .trainerName = _("DEMETRIUS"),
#line 5050
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5051
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5054
        .doubleBattle = FALSE,
#line 5055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5057
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5058
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5061
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5062
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5065
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 5066
        .trainerName = _("ISAIAH"),
#line 5067
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5068
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5070
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5071
        .doubleBattle = FALSE,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5075
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 5079
        .trainerName = _("PABLO"),
#line 5080
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5081
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5083
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5084
        .doubleBattle = FALSE,
#line 5085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5088
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5091
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5092
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5095
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 5096
        .trainerName = _("CHASE"),
#line 5097
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5098
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5100
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5101
        .doubleBattle = FALSE,
#line 5102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5104
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5105
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5108
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5109
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5112
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 5113
        .trainerName = _("ISOBEL"),
#line 5114
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5115
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5116
F_TRAINER_FEMALE | 
#line 5117
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5118
        .doubleBattle = FALSE,
#line 5119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5121
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5122
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5125
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 5126
        .trainerName = _("DONNY"),
#line 5127
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5128
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5129
F_TRAINER_FEMALE | 
#line 5130
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5131
        .doubleBattle = FALSE,
#line 5132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5134
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5135
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5138
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5139
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5142
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 5143
        .trainerName = _("TALIA"),
#line 5144
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5145
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5146
F_TRAINER_FEMALE | 
#line 5147
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5148
        .doubleBattle = FALSE,
#line 5149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5151
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5152
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5155
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 5156
        .trainerName = _("KATELYN"),
#line 5157
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5158
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5159
F_TRAINER_FEMALE | 
#line 5160
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5161
        .doubleBattle = FALSE,
#line 5162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5164
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5165
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5168
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 5169
        .trainerName = _("ALLISON"),
#line 5170
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5171
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5172
F_TRAINER_FEMALE | 
#line 5173
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5174
        .doubleBattle = FALSE,
#line 5175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5177
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5178
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5181
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5183
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5182
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5185
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 5186
        .trainerName = _("NICOLAS"),
#line 5187
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5188
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5190
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5191
        .doubleBattle = FALSE,
#line 5192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5194
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5195
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5198
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5200
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5199
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5202
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 5203
        .trainerName = _("AARON"),
#line 5204
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5205
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5207
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5208
        .doubleBattle = FALSE,
#line 5209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5211
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5212
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5215
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5216
        .trainerName = _("PERRY"),
#line 5217
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5218
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5220
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5221
        .doubleBattle = FALSE,
#line 5222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5224
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5225
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5228
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5229
        .trainerName = _("HUGH"),
#line 5230
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5231
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5233
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5234
        .doubleBattle = FALSE,
#line 5235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5237
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5238
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5241
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5242
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5245
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5246
        .trainerName = _("PHIL"),
#line 5247
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5248
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5250
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5251
        .doubleBattle = FALSE,
#line 5252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5254
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5255
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5258
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5259
        .trainerName = _("JARED"),
#line 5260
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5261
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5263
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5264
        .doubleBattle = FALSE,
#line 5265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5267
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5269
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5268
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5271
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5273
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5272
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5275
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5277
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5276
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5279
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5280
        .trainerName = _("HUMBERTO"),
#line 5281
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5282
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5284
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5285
        .doubleBattle = FALSE,
#line 5286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5288
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5290
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5289
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5292
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5293
        .trainerName = _("PRESLEY"),
#line 5294
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5295
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5297
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5298
        .doubleBattle = FALSE,
#line 5299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5301
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5302
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5305
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5306
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5309
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5310
        .trainerName = _("EDWARDO"),
#line 5311
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5312
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5314
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5315
        .doubleBattle = FALSE,
#line 5316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5318
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5320
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5319
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5322
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5324
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5323
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5326
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5327
        .trainerName = _("COLIN"),
#line 5328
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5329
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5331
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5332
        .doubleBattle = FALSE,
#line 5333
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5335
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5336
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5339
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5341
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5340
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5343
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 5344
        .trainerName = _("ROBERT"),
#line 5345
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5346
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5348
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5349
        .doubleBattle = FALSE,
#line 5350
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5352
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5353
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5356
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5357
        .trainerName = _("BENNY"),
#line 5358
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5359
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5361
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5362
        .doubleBattle = FALSE,
#line 5363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5365
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5366
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5369
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5370
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5373
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5374
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5377
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5378
        .trainerName = _("CHESTER"),
#line 5379
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5380
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5382
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5383
        .doubleBattle = FALSE,
#line 5384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5386
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5387
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5390
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5391
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5394
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5395
        .trainerName = _("ALEX"),
#line 5396
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5397
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5399
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5400
        .doubleBattle = FALSE,
#line 5401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5403
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5404
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5407
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5409
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5408
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5411
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5412
        .trainerName = _("BECK"),
#line 5413
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5414
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5416
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5417
        .doubleBattle = FALSE,
#line 5418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5420
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5421
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5424
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5425
        .trainerName = _("YASU"),
#line 5426
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5427
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5429
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5430
        .doubleBattle = FALSE,
#line 5431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5433
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5434
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5437
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5438
        .trainerName = _("TAKASHI"),
#line 5439
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5440
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5442
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5443
        .doubleBattle = FALSE,
#line 5444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5446
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5447
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5450
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5451
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5454
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5455
        .trainerName = _("DIANNE"),
#line 5456
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5457
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5458
F_TRAINER_FEMALE | 
#line 5459
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5460
        .items = { ITEM_FULL_RESTORE },
#line 5461
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5463
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5464
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5466
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5469
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5470
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5472
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5475
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5476
        .trainerName = _("JANI"),
#line 5477
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5478
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5479
F_TRAINER_FEMALE | 
#line 5480
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5481
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5483
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5484
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5487
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5488
        .trainerName = _("LAO"),
#line 5489
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5490
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5492
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5493
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5495
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5496
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5499
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5500
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5503
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5504
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5507
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5508
        .trainerName = _("LUNG"),
#line 5509
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5510
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5512
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5513
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5515
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5516
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5519
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5520
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5523
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5524
        .trainerName = _("JOCELYN"),
#line 5525
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5526
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5527
F_TRAINER_FEMALE | 
#line 5528
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5529
        .doubleBattle = FALSE,
#line 5530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5533
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5536
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5537
        .trainerName = _("LAURA"),
#line 5538
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5539
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5540
F_TRAINER_FEMALE | 
#line 5541
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5542
        .doubleBattle = FALSE,
#line 5543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5545
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5547
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5546
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5549
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5550
        .trainerName = _("CYNDY"),
#line 5551
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5552
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5553
F_TRAINER_FEMALE | 
#line 5554
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5555
        .doubleBattle = FALSE,
#line 5556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5558
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5560
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5559
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5562
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5563
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5566
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5567
        .trainerName = _("CORA"),
#line 5568
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5569
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5570
F_TRAINER_FEMALE | 
#line 5571
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5572
        .doubleBattle = FALSE,
#line 5573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5575
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5577
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5576
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5579
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5580
        .trainerName = _("PAULA"),
#line 5581
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5582
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5583
F_TRAINER_FEMALE | 
#line 5584
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5585
        .doubleBattle = FALSE,
#line 5586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5588
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5589
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5592
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5593
        .trainerName = _("MADELINE"),
#line 5594
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5595
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5596
F_TRAINER_FEMALE | 
#line 5597
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5598
        .doubleBattle = FALSE,
#line 5599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5601
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5602
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5605
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5606
        .trainerName = _("CLARISSA"),
#line 5607
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5608
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5609
F_TRAINER_FEMALE | 
#line 5610
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5611
        .doubleBattle = FALSE,
#line 5612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5614
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5615
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5618
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5619
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5622
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5623
        .trainerName = _("ANGELICA"),
#line 5624
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5625
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5626
F_TRAINER_FEMALE | 
#line 5627
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5628
        .doubleBattle = FALSE,
#line 5629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5631
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5633
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5632
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5635
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5636
        .trainerName = _("BEVERLY"),
#line 5637
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5638
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5639
F_TRAINER_FEMALE | 
#line 5640
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5641
        .doubleBattle = FALSE,
#line 5642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5644
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5645
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5648
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5649
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5652
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5653
        .trainerName = _("IMANI"),
#line 5654
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5655
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5656
F_TRAINER_FEMALE | 
#line 5657
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5658
        .doubleBattle = FALSE,
#line 5659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5661
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5662
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5665
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5666
        .trainerName = _("KYLA"),
#line 5667
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5668
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5669
F_TRAINER_FEMALE | 
#line 5670
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5671
        .doubleBattle = FALSE,
#line 5672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5674
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5675
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5678
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5679
        .trainerName = _("DENISE"),
#line 5680
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5681
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5682
F_TRAINER_FEMALE | 
#line 5683
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5684
        .doubleBattle = FALSE,
#line 5685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5687
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5688
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5691
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5692
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5695
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5696
        .trainerName = _("BETH"),
#line 5697
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5698
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5699
F_TRAINER_FEMALE | 
#line 5700
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5701
        .doubleBattle = FALSE,
#line 5702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5704
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5705
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5708
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5709
        .trainerName = _("TARA"),
#line 5710
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5711
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5712
F_TRAINER_FEMALE | 
#line 5713
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5714
        .doubleBattle = FALSE,
#line 5715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5717
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5718
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5721
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5722
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5725
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5726
        .trainerName = _("MISSY"),
#line 5727
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5728
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5729
F_TRAINER_FEMALE | 
#line 5730
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5731
        .doubleBattle = FALSE,
#line 5732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5734
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5735
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5738
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5739
        .trainerName = _("ALICE"),
#line 5740
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5741
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5742
F_TRAINER_FEMALE | 
#line 5743
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5744
        .doubleBattle = FALSE,
#line 5745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5747
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5748
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5751
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5752
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5755
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5756
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5759
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5760
        .trainerName = _("JENNY"),
#line 5761
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5762
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5763
F_TRAINER_FEMALE | 
#line 5764
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5765
        .doubleBattle = FALSE,
#line 5766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5768
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5769
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5772
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5773
        .trainerName = _("GRACE"),
#line 5774
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5775
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5776
F_TRAINER_FEMALE | 
#line 5777
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5778
        .doubleBattle = FALSE,
#line 5779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5781
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5782
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5785
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5786
        .trainerName = _("TANYA"),
#line 5787
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5788
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5789
F_TRAINER_FEMALE | 
#line 5790
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5791
        .doubleBattle = FALSE,
#line 5792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5794
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5795
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5798
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5799
        .trainerName = _("SHARON"),
#line 5800
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5801
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5802
F_TRAINER_FEMALE | 
#line 5803
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5804
        .doubleBattle = FALSE,
#line 5805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5807
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5808
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5811
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5812
        .trainerName = _("NIKKI"),
#line 5813
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5814
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5815
F_TRAINER_FEMALE | 
#line 5816
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5817
        .doubleBattle = FALSE,
#line 5818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5820
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5821
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5824
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5825
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5828
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5829
        .trainerName = _("BRENDA"),
#line 5830
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5831
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5832
F_TRAINER_FEMALE | 
#line 5833
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5834
        .doubleBattle = FALSE,
#line 5835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5837
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5838
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5841
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5842
        .trainerName = _("KATIE"),
#line 5843
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5844
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5845
F_TRAINER_FEMALE | 
#line 5846
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5847
        .doubleBattle = FALSE,
#line 5848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5850
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5851
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5854
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5855
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5858
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5859
        .trainerName = _("SUSIE"),
#line 5860
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5861
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5862
F_TRAINER_FEMALE | 
#line 5863
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5864
        .doubleBattle = FALSE,
#line 5865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5867
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5868
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5871
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5872
        .trainerName = _("KARA"),
#line 5873
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5874
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5875
F_TRAINER_FEMALE | 
#line 5876
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5877
        .doubleBattle = FALSE,
#line 5878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5880
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5881
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5884
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5885
        .trainerName = _("DANA"),
#line 5886
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5887
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5888
F_TRAINER_FEMALE | 
#line 5889
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5890
        .doubleBattle = FALSE,
#line 5891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5893
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5894
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5897
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5898
        .trainerName = _("SIENNA"),
#line 5899
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5900
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5901
F_TRAINER_FEMALE | 
#line 5902
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5903
        .doubleBattle = FALSE,
#line 5904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5906
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5907
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5910
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5911
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5914
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5915
        .trainerName = _("DEBRA"),
#line 5916
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5917
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5918
F_TRAINER_FEMALE | 
#line 5919
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5920
        .doubleBattle = FALSE,
#line 5921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5923
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5924
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5927
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5928
        .trainerName = _("LINDA"),
#line 5929
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5930
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5931
F_TRAINER_FEMALE | 
#line 5932
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5933
        .doubleBattle = FALSE,
#line 5934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5936
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5937
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5940
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5941
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5944
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5945
        .trainerName = _("KAYLEE"),
#line 5946
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5947
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5948
F_TRAINER_FEMALE | 
#line 5949
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5950
        .doubleBattle = FALSE,
#line 5951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5953
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5954
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5957
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5958
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5961
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5962
        .trainerName = _("LAUREL"),
#line 5963
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5964
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5965
F_TRAINER_FEMALE | 
#line 5966
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5967
        .doubleBattle = FALSE,
#line 5968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5970
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5971
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5974
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5975
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5978
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5979
        .trainerName = _("CARLEE"),
#line 5980
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5981
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5982
F_TRAINER_FEMALE | 
#line 5983
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5984
        .doubleBattle = FALSE,
#line 5985
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5987
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5988
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5991
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5992
        .trainerName = _("HEIDI"),
#line 5993
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5994
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5995
F_TRAINER_FEMALE | 
#line 5996
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5997
        .doubleBattle = FALSE,
#line 5998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6000
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6001
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6004
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6005
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6009
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 6010
        .trainerName = _("BECKY"),
#line 6011
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6012
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6013
F_TRAINER_FEMALE | 
#line 6014
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6015
        .doubleBattle = TRUE,
#line 6016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6018
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .heldItem = ITEM_FOCUS_SASH,
#line 6020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6019
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6021
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6024
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6024
            .heldItem = ITEM_WIDE_LENS,
#line 6027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6025
            .ability = ABILITY_MOODY,
#line 6026
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6027
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 6032
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 6033
        .trainerName = _("CAROL"),
#line 6034
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6035
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6036
F_TRAINER_FEMALE | 
#line 6037
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6038
        .doubleBattle = FALSE,
#line 6039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6041
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6042
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6045
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6046
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6049
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 6050
        .trainerName = _("NANCY"),
#line 6051
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6052
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6053
F_TRAINER_FEMALE | 
#line 6054
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6055
        .doubleBattle = FALSE,
#line 6056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6058
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6059
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6062
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6063
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6066
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6067
        .trainerName = _("MARTHA"),
#line 6068
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6069
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6070
F_TRAINER_FEMALE | 
#line 6071
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6072
        .doubleBattle = FALSE,
#line 6073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6075
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6076
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6079
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6080
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6083
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 6084
        .trainerName = _("DIANA"),
#line 6085
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6086
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6087
F_TRAINER_FEMALE | 
#line 6088
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6089
        .doubleBattle = FALSE,
#line 6090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6092
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6094
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6093
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6096
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6097
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6100
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6101
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6104
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6105
        .trainerName = _("CEDRIC"),
#line 6106
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6107
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6109
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6110
        .doubleBattle = FALSE,
#line 6111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6113
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6114
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6117
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 6118
        .trainerName = _("IRENE"),
#line 6119
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6120
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6121
F_TRAINER_FEMALE | 
#line 6122
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6123
        .doubleBattle = FALSE,
#line 6124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6126
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6127
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6130
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6131
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6134
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 6135
        .trainerName = _("AMY & LIV"),
#line 6136
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6137
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6139
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6140
        .doubleBattle = TRUE,
#line 6141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6143
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6144
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6147
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6148
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6152
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 6153
        .trainerName = _("GINA & MIA"),
#line 6154
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6155
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6157
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6158
        .doubleBattle = TRUE,
#line 6159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6161
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6162
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6165
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6166
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6169
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6170
        .trainerName = _("MIU & YUKI"),
#line 6171
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6172
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6174
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6175
        .doubleBattle = TRUE,
#line 6176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6178
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6179
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6182
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6183
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6187
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6188
        .trainerName = _("HUEY"),
#line 6189
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6190
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6193
        .doubleBattle = FALSE,
#line 6194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6196
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6198
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6197
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6200
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6202
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6201
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6204
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6205
        .trainerName = _("EDMOND"),
#line 6206
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6207
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6209
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6210
        .doubleBattle = FALSE,
#line 6211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6213
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6214
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6217
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 6218
        .trainerName = _("ERNEST"),
#line 6219
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6220
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6222
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6223
        .doubleBattle = FALSE,
#line 6224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6226
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6227
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6230
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6231
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6234
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6235
        .trainerName = _("DWAYNE"),
#line 6236
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6237
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6239
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6240
        .doubleBattle = FALSE,
#line 6241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6243
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6244
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6247
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6248
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6251
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6252
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6255
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6256
        .trainerName = _("PHILLIP"),
#line 6257
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6258
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6260
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6261
        .doubleBattle = FALSE,
#line 6262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6264
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6265
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6268
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6269
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6272
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6273
        .trainerName = _("LEONARD"),
#line 6274
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6275
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6277
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6278
        .doubleBattle = FALSE,
#line 6279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6281
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6282
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6285
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6286
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6289
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6290
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6293
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6294
        .trainerName = _("DUNCAN"),
#line 6295
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6296
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6298
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6299
        .doubleBattle = FALSE,
#line 6300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6302
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6303
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6306
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6307
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6310
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6311
        .trainerName = _("ELI"),
#line 6312
        .trainerClass = TRAINER_CLASS_GAMER,
#line 6313
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6315
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6316
        .doubleBattle = FALSE,
#line 6317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6319
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6321
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6320
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6323
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6324
        .trainerName = _("ANNIKA"),
#line 6325
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6326
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6327
F_TRAINER_FEMALE | 
#line 6328
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6329
        .doubleBattle = FALSE,
#line 6330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6332
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6332
            .heldItem = ITEM_FOCUS_SASH,
#line 6334
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6333
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6336
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6336
            .heldItem = ITEM_FOCUS_SASH,
#line 6338
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6337
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6340
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6341
        .trainerName = _("JAZMYN"),
#line 6342
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6343
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6344
F_TRAINER_FEMALE | 
#line 6345
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6346
        .items = { ITEM_HYPER_POTION },
#line 6347
        .doubleBattle = FALSE,
#line 6348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6350
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6351
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6354
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6355
        .trainerName = _("JONAS"),
#line 6356
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6357
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6359
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6360
        .doubleBattle = FALSE,
#line 6361
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6363
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6364
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6367
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6368
        .trainerName = _("KAYLEY"),
#line 6369
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6370
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6371
F_TRAINER_FEMALE | 
#line 6372
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6373
        .doubleBattle = FALSE,
#line 6374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6376
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6377
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6380
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6381
        .trainerName = _("AURON"),
#line 6382
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6383
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6385
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6386
        .doubleBattle = FALSE,
#line 6387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6389
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6390
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6393
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6394
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6397
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6398
        .trainerName = _("KELVIN"),
#line 6399
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6400
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6402
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6403
        .doubleBattle = FALSE,
#line 6404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6406
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6408
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6407
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6410
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6412
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6411
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6414
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6415
        .trainerName = _("MARLEY"),
#line 6416
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6417
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6418
F_TRAINER_FEMALE | 
#line 6419
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6420
        .items = { ITEM_HYPER_POTION },
#line 6421
        .doubleBattle = FALSE,
#line 6422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6424
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6425
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6428
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6429
        .trainerName = _("REYNA"),
#line 6430
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6431
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6432
F_TRAINER_FEMALE | 
#line 6433
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6434
        .doubleBattle = FALSE,
#line 6435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6437
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6439
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6438
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6441
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6443
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6442
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6445
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6446
        .trainerName = _("HUDSON"),
#line 6447
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6448
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6450
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6451
        .doubleBattle = FALSE,
#line 6452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6454
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6455
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6458
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6459
        .trainerName = _("CONOR"),
#line 6460
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6461
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6463
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6464
        .doubleBattle = FALSE,
#line 6465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6467
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6468
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6471
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6473
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6472
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6475
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6476
        .trainerName = _("EDWIN"),
#line 6477
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6478
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6480
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6481
        .doubleBattle = FALSE,
#line 6482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6484
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6485
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6488
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6489
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6492
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6493
        .trainerName = _("HECTOR"),
#line 6494
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6495
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6497
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6498
        .doubleBattle = FALSE,
#line 6499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6501
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6502
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6505
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6506
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6509
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6510
        .trainerName = _("TABITHA"),
#line 6511
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6512
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6514
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6515
        .doubleBattle = FALSE,
#line 6516
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6518
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6518
            .heldItem = ITEM_SITRUS_BERRY,
#line 6521
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6519
            .ability = ABILITY_DROUGHT,
#line 6520
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6522
                MOVE_SHELL_SMASH,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6527
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6527
            .heldItem = ITEM_POISON_BARB,
#line 6530
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6528
            .ability = ABILITY_LEVITATE,
#line 6529
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6531
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6536
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6536
            .heldItem = ITEM_LIFE_ORB,
#line 6539
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6538
            .ability = ABILITY_LEVITATE,
#line 6537
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6540
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_TRICK,
            },
            },
        },
    },
#line 6545
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL_VR] =
    {
#line 6546
        .trainerName = _("SAMUEL"),
#line 6547
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6548
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6550
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6551
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6552
        .doubleBattle = TRUE,
#line 6553
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6555
            .species = SPECIES_SLOWKING,
#line 6555
            .gender = TRAINER_MON_MALE,
#line 6555
            .heldItem = ITEM_LIFE_ORB,
#line 6559
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6556
            .ability = ABILITY_REGENERATOR,
#line 6557
            .lvl = 70,
#line 6558
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6560
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
                MOVE_ICY_WIND,
            },
            },
            {
#line 6565
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6565
            .heldItem = ITEM_ROCKY_HELMET,
#line 6569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6566
            .ability = ABILITY_REGENERATOR,
#line 6567
            .lvl = 70,
#line 6568
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6569
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6574
            .species = SPECIES_GLISCOR,
#line 6574
            .gender = TRAINER_MON_FEMALE,
#line 6574
            .heldItem = ITEM_TOXIC_ORB,
#line 6578
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6575
            .ability = ABILITY_POISON_HEAL,
#line 6576
            .lvl = 70,
#line 6577
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6579
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6584
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6584
            .heldItem = ITEM_ASSAULT_VEST,
#line 6588
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6585
            .ability = ABILITY_CLEAR_BODY,
#line 6586
            .lvl = 70,
#line 6587
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6589
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6594
            .species = SPECIES_HONCHKROW,
#line 6594
            .gender = TRAINER_MON_MALE,
#line 6594
            .heldItem = ITEM_FOCUS_SASH,
#line 6598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6595
            .ability = ABILITY_MOXIE,
#line 6596
            .lvl = 70,
#line 6597
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6598
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 6603
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6603
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6604
            .ability = ABILITY_INFILTRATOR,
#line 6605
            .lvl = 70,
#line 6606
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6607
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6612
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103] =
    {
#line 6613
        .trainerName = _("SAMUEL"),
#line 6614
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6615
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6617
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6618
        .doubleBattle = FALSE,
#line 6619
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6621
            .species = SPECIES_SLOWPOKE,
#line 6621
            .gender = TRAINER_MON_MALE,
#line 6625
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6622
            .ability = ABILITY_REGENERATOR,
#line 6623
            .lvl = 5,
#line 6624
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6626
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6630
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6631
        .trainerName = _("SAMUEL"),
#line 6632
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6633
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6635
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6636
        .doubleBattle = FALSE,
#line 6637
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6639
            .species = SPECIES_SLOWPOKE,
#line 6639
            .gender = TRAINER_MON_MALE,
#line 6639
            .heldItem = ITEM_LIFE_ORB,
#line 6643
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6640
            .ability = ABILITY_REGENERATOR,
#line 6641
            .lvl = 49,
#line 6642
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6644
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6649
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6649
            .heldItem = ITEM_ROCKY_HELMET,
#line 6653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6650
            .ability = ABILITY_REGENERATOR,
#line 6651
            .lvl = 49,
#line 6652
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6653
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6658
            .species = SPECIES_GLIGAR,
#line 6658
            .gender = TRAINER_MON_FEMALE,
#line 6658
            .heldItem = ITEM_RAZOR_FANG,
#line 6662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6659
            .ability = ABILITY_HYPER_CUTTER,
#line 6660
            .lvl = 49,
#line 6661
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6663
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6668
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6668
            .heldItem = ITEM_ASSAULT_VEST,
#line 6672
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6669
            .ability = ABILITY_CLEAR_BODY,
#line 6670
            .lvl = 49,
#line 6671
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6672
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6677
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6677
            .heldItem = ITEM_FOCUS_SASH,
#line 6681
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6678
            .ability = ABILITY_PRANKSTER,
#line 6679
            .lvl = 49,
#line 6680
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6681
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6686
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6687
        .trainerName = _("SAMUEL"),
#line 6688
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6689
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6691
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6692
        .doubleBattle = FALSE,
#line 6693
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6695
            .species = SPECIES_SLOWPOKE,
#line 6695
            .gender = TRAINER_MON_MALE,
#line 6695
            .heldItem = ITEM_SITRUS_BERRY,
#line 6699
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6696
            .ability = ABILITY_REGENERATOR,
#line 6697
            .lvl = 24,
#line 6698
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6700
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6705
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6705
            .heldItem = ITEM_LUM_BERRY,
#line 6709
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6706
            .ability = ABILITY_REGENERATOR,
#line 6707
            .lvl = 24,
#line 6708
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6710
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6715
            .species = SPECIES_GLIGAR,
#line 6715
            .gender = TRAINER_MON_FEMALE,
#line 6715
            .heldItem = ITEM_RAZOR_FANG,
#line 6719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6716
            .ability = ABILITY_HYPER_CUTTER,
#line 6717
            .lvl = 24,
#line 6718
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6720
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6725
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6725
            .heldItem = ITEM_METAL_COAT,
#line 6729
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6726
            .ability = ABILITY_CLEAR_BODY,
#line 6727
            .lvl = 24,
#line 6728
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6729
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_HONE_CLAWS,
            },
            },
        },
    },
#line 6734
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6735
        .trainerName = _("ISAAC"),
#line 6736
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6737
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6740
        .doubleBattle = FALSE,
#line 6741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6743
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6744
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6747
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6748
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6751
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6752
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6755
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6756
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6759
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6760
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6763
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6764
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6767
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6768
        .trainerName = _("DAVIS"),
#line 6769
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6770
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6772
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6773
        .doubleBattle = FALSE,
#line 6774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6776
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6777
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6780
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6781
        .trainerName = _("MITCHELL"),
#line 6782
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6783
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6785
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6786
        .doubleBattle = FALSE,
#line 6787
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6789
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6790
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6793
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6794
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6798
        .trainerName = _("LYDIA"),
#line 6799
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6800
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6801
F_TRAINER_FEMALE | 
#line 6802
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6803
        .doubleBattle = FALSE,
#line 6804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6806
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6807
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6810
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6811
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6814
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6815
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6818
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6819
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6822
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6823
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6826
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6827
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6830
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6831
        .trainerName = _("HALLE"),
#line 6832
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6833
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6834
F_TRAINER_FEMALE | 
#line 6835
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6836
        .items = { ITEM_FULL_RESTORE },
#line 6837
        .doubleBattle = FALSE,
#line 6838
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6840
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6841
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6844
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6845
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6848
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6849
        .trainerName = _("GARRISON"),
#line 6850
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6851
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6853
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6854
        .doubleBattle = FALSE,
#line 6855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6857
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6858
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6861
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6862
        .trainerName = _("JACKSON"),
#line 6863
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6864
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6866
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6867
        .items = { ITEM_FULL_RESTORE },
#line 6868
        .doubleBattle = FALSE,
#line 6869
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6871
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6873
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6872
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6875
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6876
        .trainerName = _("LORENZO"),
#line 6877
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6878
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6880
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6881
        .items = { ITEM_FULL_RESTORE },
#line 6882
        .doubleBattle = FALSE,
#line 6883
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6885
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6887
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6886
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6889
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6891
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6890
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6893
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6895
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6894
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6897
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6898
        .trainerName = _("SEBASTIAN"),
#line 6899
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6900
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6902
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6903
        .items = { ITEM_FULL_RESTORE },
#line 6904
        .doubleBattle = FALSE,
#line 6905
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6907
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6908
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6911
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6912
        .trainerName = _("CATHERINE"),
#line 6913
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6914
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6915
F_TRAINER_FEMALE | 
#line 6916
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6917
        .items = { ITEM_FULL_RESTORE },
#line 6918
        .doubleBattle = FALSE,
#line 6919
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6921
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6923
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6922
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6925
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6927
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6926
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6929
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6930
        .trainerName = _("JENNA"),
#line 6931
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6932
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6933
F_TRAINER_FEMALE | 
#line 6934
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6935
        .items = { ITEM_FULL_RESTORE },
#line 6936
        .doubleBattle = FALSE,
#line 6937
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6939
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6941
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6940
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6943
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6945
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6944
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6947
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6949
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6948
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6951
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6952
        .trainerName = _("SOPHIA"),
#line 6953
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6954
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6955
F_TRAINER_FEMALE | 
#line 6956
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6957
        .items = { ITEM_FULL_RESTORE },
#line 6958
        .doubleBattle = FALSE,
#line 6959
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6961
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6963
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6962
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6965
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6967
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6966
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6969
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6970
        .trainerName = _("JULIO"),
#line 6971
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6972
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6974
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6975
        .doubleBattle = FALSE,
#line 6976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6978
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6979
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6982
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6983
        .trainerName = _("GRUNT"),
#line 6984
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6985
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6987
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6988
        .doubleBattle = FALSE,
#line 6989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6991
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6993
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6992
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6995
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6997
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6996
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6999
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 7000
        .trainerName = _("GRUNT"),
#line 7001
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7002
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7003
F_TRAINER_FEMALE | 
#line 7004
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7005
        .doubleBattle = FALSE,
#line 7006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7008
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7009
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7012
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7013
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7016
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7017
        .trainerName = _("GRUNT"),
#line 7018
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7019
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7021
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7022
        .doubleBattle = FALSE,
#line 7023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7025
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7027
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7026
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7029
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7031
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7030
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7033
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7034
        .trainerName = _("MARC"),
#line 7035
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7036
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7038
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7039
        .doubleBattle = FALSE,
#line 7040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7042
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7043
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7046
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7047
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7050
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7051
        .trainerName = _("BRENDEN"),
#line 7052
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7053
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7055
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7056
        .doubleBattle = FALSE,
#line 7057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7059
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7061
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7060
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7063
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7064
        .trainerName = _("LILITH"),
#line 7065
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7066
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7067
F_TRAINER_FEMALE | 
#line 7068
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7069
        .doubleBattle = FALSE,
#line 7070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7072
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7074
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7073
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7076
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7077
        .trainerName = _("CRISTIAN"),
#line 7078
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7079
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7081
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7082
        .doubleBattle = FALSE,
#line 7083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7085
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7087
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7086
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7089
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7090
        .trainerName = _("SYLVIA"),
#line 7091
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7092
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7093
F_TRAINER_FEMALE | 
#line 7094
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7095
        .doubleBattle = FALSE,
#line 7096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7098
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7100
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7099
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7102
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7103
        .trainerName = _("LEONARDO"),
#line 7104
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7105
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7107
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7108
        .doubleBattle = FALSE,
#line 7109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7111
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7112
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7115
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7116
        .trainerName = _("ATHENA"),
#line 7117
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7118
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7119
F_TRAINER_FEMALE | 
#line 7120
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7121
        .items = { ITEM_HYPER_POTION },
#line 7122
        .doubleBattle = FALSE,
#line 7123
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7125
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7127
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7126
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7129
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7131
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7130
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7134
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7135
        .trainerName = _("HARRISON"),
#line 7136
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7137
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7139
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7140
        .doubleBattle = FALSE,
#line 7141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7143
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7144
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7147
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7148
        .trainerName = _("GRUNT"),
#line 7149
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7150
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7152
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7153
        .doubleBattle = FALSE,
#line 7154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7156
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7157
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7160
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7161
        .trainerName = _("CLARENCE"),
#line 7162
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7163
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7165
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7166
        .doubleBattle = FALSE,
#line 7167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7169
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7170
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7173
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7174
        .trainerName = _("TERRY"),
#line 7175
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7176
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7177
F_TRAINER_FEMALE | 
#line 7178
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7179
        .doubleBattle = FALSE,
#line 7180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7182
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7183
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7186
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7187
        .trainerName = _("NATE"),
#line 7188
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7189
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7191
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7192
        .doubleBattle = FALSE,
#line 7193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7195
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7197
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7196
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7199
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7200
        .trainerName = _("KATHLEEN"),
#line 7201
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7202
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7203
F_TRAINER_FEMALE | 
#line 7204
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7205
        .doubleBattle = FALSE,
#line 7206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7208
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7210
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7209
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7212
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7213
        .trainerName = _("CLIFFORD"),
#line 7214
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7215
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7217
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7218
        .doubleBattle = FALSE,
#line 7219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7221
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7222
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7225
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7226
        .trainerName = _("NICHOLAS"),
#line 7227
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7228
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7230
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7231
        .doubleBattle = FALSE,
#line 7232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7234
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7235
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7238
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7239
        .trainerName = _("GRUNT"),
#line 7240
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7241
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7242
F_TRAINER_FEMALE | 
#line 7243
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7244
        .doubleBattle = FALSE,
#line 7245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7247
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7248
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7251
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7252
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7255
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7256
        .trainerName = _("GRUNT"),
#line 7257
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7258
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7260
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7261
        .doubleBattle = FALSE,
#line 7262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7264
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7265
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7268
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7269
        .trainerName = _("GRUNT"),
#line 7270
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7271
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7273
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7274
        .doubleBattle = FALSE,
#line 7275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7277
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7278
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7281
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7282
        .trainerName = _("GRUNT"),
#line 7283
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7284
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7286
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7287
        .doubleBattle = FALSE,
#line 7288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7290
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7291
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7294
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7295
        .trainerName = _("GRUNT"),
#line 7296
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7297
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7299
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7300
        .doubleBattle = FALSE,
#line 7301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7303
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7304
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7307
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7308
        .trainerName = _("MACEY"),
#line 7309
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7310
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7311
F_TRAINER_FEMALE | 
#line 7312
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7313
        .doubleBattle = FALSE,
#line 7314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7316
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7317
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7320
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7321
        .trainerName = _("SAMUEL"),
#line 7322
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7323
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7325
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7326
        .doubleBattle = FALSE,
#line 7327
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7329
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7329
            .heldItem = ITEM_RAZOR_FANG,
#line 7333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7330
            .ability = ABILITY_HYPER_CUTTER,
#line 7331
            .lvl = 16,
#line 7332
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7333
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7338
            .species = SPECIES_SLOWPOKE,
#line 7338
            .gender = TRAINER_MON_MALE,
#line 7338
            .heldItem = ITEM_SITRUS_BERRY,
#line 7342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7339
            .ability = ABILITY_REGENERATOR,
#line 7340
            .lvl = 16,
#line 7341
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7342
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7347
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7348
            .ability = ABILITY_REGENERATOR,
#line 7349
            .lvl = 16,
#line 7350
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7351
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 7356
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .heldItem = ITEM_SITRUS_BERRY,
#line 7360
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7357
            .ability = ABILITY_CLEAR_BODY,
#line 7358
            .lvl = 16,
#line 7359
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7360
                MOVE_TACKLE,
                MOVE_METAL_CLAW,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 7364
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7365
        .trainerName = _("PAXTON"),
#line 7366
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7367
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7369
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7370
        .doubleBattle = FALSE,
#line 7371
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7373
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7374
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7377
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7378
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7381
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7382
        .trainerName = _("ISABELLA"),
#line 7383
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7384
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7385
F_TRAINER_FEMALE | 
#line 7386
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7387
        .doubleBattle = FALSE,
#line 7388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7390
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7391
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7394
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7395
        .trainerName = _("GRUNT"),
#line 7396
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7397
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7398
F_TRAINER_FEMALE | 
#line 7399
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7400
        .doubleBattle = FALSE,
#line 7401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7403
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7404
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7407
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7408
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7411
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7412
        .trainerName = _("TABITHA"),
#line 7413
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7414
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7416
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7417
        .doubleBattle = FALSE,
#line 7418
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7420
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7420
            .heldItem = ITEM_SITRUS_BERRY,
#line 7423
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7421
            .ability = ABILITY_DROUGHT,
#line 7422
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7424
                MOVE_RAPID_SPIN,
                MOVE_LAVA_PLUME,
                MOVE_IRON_DEFENSE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 7429
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7429
            .heldItem = ITEM_LUM_BERRY,
#line 7432
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7430
            .ability = ABILITY_LEVITATE,
#line 7431
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7433
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
                MOVE_TOXIC,
            },
            },
            {
#line 7438
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7438
            .heldItem = ITEM_SITRUS_BERRY,
#line 7441
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7439
            .ability = ABILITY_LEVITATE,
#line 7440
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7442
                MOVE_SCORCHING_SANDS,
                MOVE_EXTRASENSORY,
                MOVE_COSMIC_POWER,
                MOVE_IMPRISON,
            },
            },
            {
#line 7447
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7447
            .heldItem = ITEM_LUM_BERRY,
#line 7450
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7448
            .ability = ABILITY_OWN_TEMPO,
#line 7449
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7451
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 7456
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7457
        .trainerName = _("JONATHAN"),
#line 7458
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7459
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7461
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7462
        .items = { ITEM_HYPER_POTION },
#line 7463
        .doubleBattle = FALSE,
#line 7464
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7466
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7467
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7470
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7471
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7475
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7476
        .trainerName = _("MAXIE"),
#line 7477
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7478
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7480
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7481
        .doubleBattle = FALSE,
#line 7482
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7484
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .heldItem = ITEM_IRON_BALL,
#line 7487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7485
            .ability = ABILITY_HEAVY_METAL,
#line 7486
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7488
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_DRAGON_RUSH,
                MOVE_BULK_UP,
            },
            },
            {
#line 7493
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7493
            .heldItem = ITEM_SHARP_BEAK,
#line 7496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7494
            .ability = ABILITY_INNER_FOCUS,
#line 7495
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7497
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7502
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7502
            .heldItem = ITEM_MUSCLE_BAND,
#line 7505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7503
            .ability = ABILITY_IMMUNITY,
#line 7504
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7506
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7511
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7511
            .heldItem = ITEM_EXPERT_BELT,
#line 7514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7512
            .ability = ABILITY_UNNERVE,
#line 7513
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7515
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7520
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7520
            .heldItem = ITEM_ROCKY_HELMET,
#line 7523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7521
            .ability = ABILITY_ROCK_HEAD,
#line 7522
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7524
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7529
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7530
        .trainerName = _("MAXIE"),
#line 7531
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7532
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7534
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7535
        .doubleBattle = FALSE,
#line 7536
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7538
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7538
            .heldItem = ITEM_MUSCLE_BAND,
#line 7541
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7539
            .ability = ABILITY_HEAVY_METAL,
#line 7540
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7542
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7547
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7547
            .heldItem = ITEM_LUM_BERRY,
#line 7550
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7548
            .ability = ABILITY_IMMUNITY,
#line 7549
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7551
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_HONE_CLAWS,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7556
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7556
            .heldItem = ITEM_LUM_BERRY,
#line 7559
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7557
            .ability = ABILITY_UNNERVE,
#line 7558
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7560
                MOVE_FIRE_SPIN,
                MOVE_TORMENT,
                MOVE_SNARL,
                MOVE_HOWL,
            },
            },
            {
#line 7565
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7565
            .heldItem = ITEM_ROCKY_HELMET,
#line 7568
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7566
            .ability = ABILITY_ROCK_HEAD,
#line 7567
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7569
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7574
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .heldItem = ITEM_SHARP_BEAK,
#line 7577
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7575
            .ability = ABILITY_INNER_FOCUS,
#line 7576
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7578
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7583
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7584
        .trainerName = _("TIANA"),
#line 7585
        .trainerClass = TRAINER_CLASS_LASS,
#line 7586
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7587
F_TRAINER_FEMALE | 
#line 7588
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7589
        .doubleBattle = FALSE,
#line 7590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7592
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7593
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7596
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7597
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7600
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7601
        .trainerName = _("HALEY"),
#line 7602
        .trainerClass = TRAINER_CLASS_LASS,
#line 7603
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7604
F_TRAINER_FEMALE | 
#line 7605
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7606
        .doubleBattle = FALSE,
#line 7607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7609
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7610
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7613
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7614
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7617
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7618
        .trainerName = _("JANICE"),
#line 7619
        .trainerClass = TRAINER_CLASS_LASS,
#line 7620
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7621
F_TRAINER_FEMALE | 
#line 7622
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7623
        .doubleBattle = FALSE,
#line 7624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7626
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7627
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7630
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7631
        .trainerName = _("VIVI"),
#line 7632
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7633
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7634
F_TRAINER_FEMALE | 
#line 7635
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7636
        .doubleBattle = FALSE,
#line 7637
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7639
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7641
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7640
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7643
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7645
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7644
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7647
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7649
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7648
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7651
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7652
        .trainerName = _("SALLY"),
#line 7653
        .trainerClass = TRAINER_CLASS_LASS,
#line 7654
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7655
F_TRAINER_FEMALE | 
#line 7656
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7657
        .doubleBattle = FALSE,
#line 7658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7660
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7661
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7664
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7665
        .trainerName = _("ROBIN"),
#line 7666
        .trainerClass = TRAINER_CLASS_LASS,
#line 7667
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7668
F_TRAINER_FEMALE | 
#line 7669
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7670
        .doubleBattle = FALSE,
#line 7671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7673
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7674
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7677
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7678
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7681
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7682
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7686
    [DIFFICULTY_NORMAL][TRAINER_NAMI] =
    {
#line 7687
        .trainerName = _("NAMI"),
#line 7688
        .trainerClass = TRAINER_CLASS_LASS,
#line 7689
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7690
F_TRAINER_FEMALE | 
#line 7691
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7692
        .doubleBattle = FALSE,
#line 7693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7695
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7696
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7699
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7700
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7703
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7704
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7707
    [DIFFICULTY_NORMAL][TRAINER_KIDDO] =
    {
#line 7708
        .trainerName = _("KIDDO"),
#line 7709
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 7710
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 7712
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7713
        .doubleBattle = FALSE,
#line 7714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7716
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7717
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7719
                MOVE_AFTER_YOU,
                MOVE_PLAY_NICE,
            },
            },
            {
#line 7722
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .heldItem = ITEM_TOXIC_ORB,
#line 7724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7723
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7725
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7728
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7728
            .heldItem = ITEM_FLAME_ORB,
#line 7730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7729
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7731
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7734
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7735
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7737
                MOVE_ENCORE,
                MOVE_AMNESIA,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 7742
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7743
        .trainerName = _("ANDREA"),
#line 7744
        .trainerClass = TRAINER_CLASS_LASS,
#line 7745
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7746
F_TRAINER_FEMALE | 
#line 7747
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7748
        .doubleBattle = FALSE,
#line 7749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7751
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7753
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7752
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7755
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7756
        .trainerName = _("CRISSY"),
#line 7757
        .trainerClass = TRAINER_CLASS_LASS,
#line 7758
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7759
F_TRAINER_FEMALE | 
#line 7760
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7761
        .doubleBattle = FALSE,
#line 7762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7764
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7766
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7765
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7768
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7770
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7769
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7772
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7773
        .trainerName = _("RICK"),
#line 7774
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7775
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7777
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7778
        .doubleBattle = FALSE,
#line 7779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7781
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7782
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7785
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7786
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7789
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7790
        .trainerName = _("LYLE"),
#line 7791
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7792
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7794
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7795
        .doubleBattle = FALSE,
#line 7796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7798
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7799
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7802
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7803
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7806
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7807
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7810
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7811
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7814
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7815
        .trainerName = _("JOSIE"),
#line 7816
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7817
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7819
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7820
        .doubleBattle = FALSE,
#line 7821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7823
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7824
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7827
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7829
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7828
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7831
    [DIFFICULTY_NORMAL][TRAINER_BONNEY] =
    {
#line 7832
        .trainerName = _("BONNEY"),
#line 7833
        .trainerClass = TRAINER_CLASS_LADY,
#line 7834
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 7835
F_TRAINER_FEMALE | 
#line 7836
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7837
        .doubleBattle = TRUE,
#line 7838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7840
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7842
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7841
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7844
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7846
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7845
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7848
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7849
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7852
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7854
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7853
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7856
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7857
        .trainerName = _("DOUG"),
#line 7858
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7859
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7861
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7862
        .doubleBattle = FALSE,
#line 7863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7865
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7866
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7869
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7870
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7873
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7874
        .trainerName = _("GREG"),
#line 7875
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7876
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7878
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7879
        .doubleBattle = FALSE,
#line 7880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7882
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7883
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7886
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7887
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7890
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7891
        .trainerName = _("KENT"),
#line 7892
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7893
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7895
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7896
        .doubleBattle = FALSE,
#line 7897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7899
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7900
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7903
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7904
        .trainerName = _("JAMES"),
#line 7905
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7906
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7908
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7909
        .doubleBattle = FALSE,
#line 7910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7912
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7913
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7916
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7917
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7920
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7921
        .trainerName = _("BRICE"),
#line 7922
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7923
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7925
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7926
        .doubleBattle = FALSE,
#line 7927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7929
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7930
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7933
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7934
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7937
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7938
        .trainerName = _("TRENT"),
#line 7939
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7940
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7942
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7943
        .doubleBattle = FALSE,
#line 7944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7946
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7947
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7950
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7951
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7954
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7955
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7958
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7959
        .trainerName = _("LENNY"),
#line 7960
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7961
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7963
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7964
        .doubleBattle = FALSE,
#line 7965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7967
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7968
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7971
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7972
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7975
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7976
        .trainerName = _("LUCAS"),
#line 7977
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7978
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7980
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7981
        .doubleBattle = FALSE,
#line 7982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7984
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7985
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7988
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7989
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7992
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7993
        .trainerName = _("ALAN"),
#line 7994
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7995
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7997
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7998
        .doubleBattle = FALSE,
#line 7999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8001
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8002
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8005
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8006
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8009
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8010
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8013
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8014
        .trainerName = _("CLARK"),
#line 8015
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8016
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8018
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8019
        .doubleBattle = FALSE,
#line 8020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8022
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8023
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8026
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8027
        .trainerName = _("ERIC"),
#line 8028
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8029
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8031
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8032
        .doubleBattle = FALSE,
#line 8033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8035
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8036
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8039
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8040
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8043
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 8044
        .trainerName = _("MIKE"),
#line 8045
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8046
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8048
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8049
        .doubleBattle = FALSE,
#line 8050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8052
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8053
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8056
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8057
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8060
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8061
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8064
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8065
        .trainerName = _("DEZ & LUKE"),
#line 8066
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8067
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8069
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8070
        .doubleBattle = TRUE,
#line 8071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8073
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8074
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8077
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8078
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8081
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8082
        .trainerName = _("LEA & JED"),
#line 8083
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8084
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8086
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8087
        .doubleBattle = TRUE,
#line 8088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8090
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8091
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8094
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8095
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8098
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8099
        .trainerName = _("KIRA & DAN"),
#line 8100
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8101
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8103
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8104
        .doubleBattle = TRUE,
#line 8105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8107
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8108
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8111
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8112
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8115
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8116
        .trainerName = _("JOHANNA"),
#line 8117
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8118
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8119
F_TRAINER_FEMALE | 
#line 8120
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8121
        .doubleBattle = FALSE,
#line 8122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8124
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8125
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8128
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8129
        .trainerName = _("GERALD"),
#line 8130
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8131
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8133
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8134
        .items = { ITEM_HYPER_POTION },
#line 8135
        .doubleBattle = FALSE,
#line 8136
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8138
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8140
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8139
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8143
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8144
        .trainerName = _("VIVIAN"),
#line 8145
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8146
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8147
F_TRAINER_FEMALE | 
#line 8148
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8149
        .doubleBattle = FALSE,
#line 8150
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8152
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8154
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8153
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8156
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8158
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8157
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8160
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8161
        .trainerName = _("DANIELLE"),
#line 8162
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8163
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8164
F_TRAINER_FEMALE | 
#line 8165
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8166
        .doubleBattle = FALSE,
#line 8167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8169
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8171
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8170
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8173
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8174
        .trainerName = _("HIDEO"),
#line 8175
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8176
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8178
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8179
        .doubleBattle = FALSE,
#line 8180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8182
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8183
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8186
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8187
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8190
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8191
        .trainerName = _("KEIGO"),
#line 8192
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8193
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8195
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8196
        .doubleBattle = FALSE,
#line 8197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8199
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8200
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8203
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8204
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8207
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8208
        .trainerName = _("RILEY"),
#line 8209
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8210
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8212
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8213
        .doubleBattle = FALSE,
#line 8214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8216
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8217
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8220
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8221
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8224
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8225
        .trainerName = _("FLINT"),
#line 8226
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8227
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8230
        .doubleBattle = FALSE,
#line 8231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8233
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8235
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8234
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8237
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8239
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8238
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8241
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8242
        .trainerName = _("ASHLEY"),
#line 8243
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8244
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8245
F_TRAINER_FEMALE | 
#line 8246
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8247
        .doubleBattle = FALSE,
#line 8248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8250
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8252
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8251
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8254
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8256
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8255
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8258
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8259
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8262
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8263
        .trainerName = _("CHAD"),
#line 8264
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8265
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8267
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8268
        .doubleBattle = TRUE,
#line 8269
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8271
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8272
            .ability = ABILITY_STURDY,
#line 8273
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8274
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 8277
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8278
            .ability = ABILITY_SAND_STREAM,
#line 8279
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8280
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 8285
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8286
            .ability = ABILITY_LIGHTNING_ROD,
#line 8287
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8288
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 8292
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8293
            .ability = ABILITY_SAND_VEIL,
#line 8294
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8295
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 8299
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8300
        .trainerName = _("SAMUEL"),
#line 8301
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8302
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8304
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8305
        .doubleBattle = TRUE,
#line 8306
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8308
            .species = SPECIES_SLOWKING,
#line 8308
            .gender = TRAINER_MON_MALE,
#line 8308
            .heldItem = ITEM_LIFE_ORB,
#line 8312
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8309
            .ability = ABILITY_REGENERATOR,
#line 8310
            .lvl = 54,
#line 8311
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8313
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8318
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8318
            .heldItem = ITEM_ROCKY_HELMET,
#line 8322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8319
            .ability = ABILITY_REGENERATOR,
#line 8320
            .lvl = 54,
#line 8321
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8322
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8327
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8327
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8328
            .ability = ABILITY_INFILTRATOR,
#line 8329
            .lvl = 54,
#line 8330
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8331
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8336
            .species = SPECIES_GLISCOR,
#line 8336
            .gender = TRAINER_MON_FEMALE,
#line 8336
            .heldItem = ITEM_TOXIC_ORB,
#line 8340
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8337
            .ability = ABILITY_POISON_HEAL,
#line 8338
            .lvl = 54,
#line 8339
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8341
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8346
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8346
            .heldItem = ITEM_ASSAULT_VEST,
#line 8350
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8347
            .ability = ABILITY_CLEAR_BODY,
#line 8348
            .lvl = 54,
#line 8349
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8351
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8356
            .species = SPECIES_HONCHKROW,
#line 8356
            .gender = TRAINER_MON_MALE,
#line 8356
            .heldItem = ITEM_FOCUS_SASH,
#line 8360
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8357
            .ability = ABILITY_MOXIE,
#line 8358
            .lvl = 54,
#line 8359
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8361
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8366
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8367
        .trainerName = _("JONAH"),
#line 8368
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8369
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8371
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8372
        .doubleBattle = FALSE,
#line 8373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8375
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8376
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8379
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8380
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8383
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8384
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8387
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8388
        .trainerName = _("HENRY"),
#line 8389
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8390
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8392
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8393
        .doubleBattle = FALSE,
#line 8394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8396
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8397
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8400
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8401
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8404
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8405
        .trainerName = _("ROGER"),
#line 8406
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8407
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8409
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8410
        .doubleBattle = FALSE,
#line 8411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8413
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8414
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8417
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8418
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8421
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8422
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8425
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8426
        .trainerName = _("ALEXA"),
#line 8427
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8428
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8429
F_TRAINER_FEMALE | 
#line 8430
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8431
        .items = { ITEM_FULL_RESTORE },
#line 8432
        .doubleBattle = FALSE,
#line 8433
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8435
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8437
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8436
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8439
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8441
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8440
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8443
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8444
        .trainerName = _("RUBEN"),
#line 8445
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8446
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8448
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8449
        .items = { ITEM_HYPER_POTION },
#line 8450
        .doubleBattle = FALSE,
#line 8451
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8453
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8454
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8457
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8459
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8458
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8461
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8462
        .trainerName = _("KOJI"),
#line 8463
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8464
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8466
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8467
        .doubleBattle = FALSE,
#line 8468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8470
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8471
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8474
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8475
        .trainerName = _("WAYNE"),
#line 8476
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8477
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8479
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8480
        .doubleBattle = FALSE,
#line 8481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8483
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8484
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8487
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8488
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8491
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8492
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8495
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8496
        .trainerName = _("AIDAN"),
#line 8497
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8498
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8500
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8501
        .doubleBattle = FALSE,
#line 8502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8504
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8505
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8508
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8509
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8512
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8513
        .trainerName = _("REED"),
#line 8514
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8515
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8517
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8518
        .doubleBattle = FALSE,
#line 8519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8521
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8522
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8525
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8526
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8529
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8530
        .trainerName = _("TISHA"),
#line 8531
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8532
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8533
F_TRAINER_FEMALE | 
#line 8534
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8535
        .doubleBattle = FALSE,
#line 8536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8538
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8539
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8542
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8543
        .trainerName = _("TORI & TIA"),
#line 8544
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8545
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8547
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8548
        .doubleBattle = TRUE,
#line 8549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8551
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8552
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8555
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8556
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8559
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8560
        .trainerName = _("KIM & IRIS"),
#line 8561
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8562
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8564
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8565
        .doubleBattle = TRUE,
#line 8566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8568
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8569
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8572
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8573
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8576
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8577
        .trainerName = _("TYRA & IVY"),
#line 8578
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8579
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8581
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8582
        .doubleBattle = TRUE,
#line 8583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8585
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8586
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8589
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8590
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8594
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8595
        .trainerName = _("MEL & PAUL"),
#line 8596
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8597
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8599
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8600
        .doubleBattle = TRUE,
#line 8601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8603
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8604
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8607
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8608
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8611
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8612
        .trainerName = _("JOHN & JAY"),
#line 8613
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8614
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8616
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8617
        .doubleBattle = TRUE,
#line 8618
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8620
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8622
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8621
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8624
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8625
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8628
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8629
        .trainerName = _("RELI & IAN"),
#line 8630
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8631
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8633
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8634
        .doubleBattle = TRUE,
#line 8635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8637
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8638
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8641
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8642
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8646
        .trainerName = _("LILA & ROY"),
#line 8647
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8648
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8650
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8651
        .doubleBattle = TRUE,
#line 8652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8654
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8655
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8658
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8659
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8662
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8663
        .trainerName = _("LISA & RAY"),
#line 8664
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8665
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8667
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8668
        .doubleBattle = TRUE,
#line 8669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8671
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8672
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8675
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8676
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8679
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8680
        .trainerName = _("CHRIS"),
#line 8681
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8682
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8684
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8685
        .doubleBattle = FALSE,
#line 8686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8688
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8689
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8692
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8693
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8696
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8697
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8700
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8701
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8704
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8705
        .trainerName = _("DAWSON"),
#line 8706
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8707
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8709
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8710
        .doubleBattle = FALSE,
#line 8711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8713
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8713
            .heldItem = ITEM_NUGGET,
#line 8715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8714
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8717
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8718
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8721
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8722
        .trainerName = _("SARAH"),
#line 8723
        .trainerClass = TRAINER_CLASS_LADY,
#line 8724
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8725
F_TRAINER_FEMALE | 
#line 8726
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8727
        .items = { ITEM_FULL_RESTORE },
#line 8728
        .doubleBattle = FALSE,
#line 8729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8731
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8732
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8735
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .heldItem = ITEM_NUGGET,
#line 8737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8736
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8739
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8740
        .trainerName = _("DARIAN"),
#line 8741
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8742
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8744
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8745
        .doubleBattle = FALSE,
#line 8746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8748
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8749
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8752
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8753
        .trainerName = _("HAILEY"),
#line 8754
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8755
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8756
F_TRAINER_FEMALE | 
#line 8757
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8758
        .doubleBattle = FALSE,
#line 8759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8761
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8762
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8765
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8766
        .trainerName = _("CHANDLER"),
#line 8767
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8768
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8770
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8771
        .doubleBattle = FALSE,
#line 8772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8774
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8775
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8778
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8779
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8782
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8783
        .trainerName = _("KALEB"),
#line 8784
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8785
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8787
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8788
        .doubleBattle = FALSE,
#line 8789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8791
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8791
            .heldItem = ITEM_ORAN_BERRY,
#line 8793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8792
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8795
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8795
            .heldItem = ITEM_ORAN_BERRY,
#line 8797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8796
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8799
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8800
        .trainerName = _("JOSEPH"),
#line 8801
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8802
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8804
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8805
        .doubleBattle = FALSE,
#line 8806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8808
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8809
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8812
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8813
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8816
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8817
        .trainerName = _("ALYSSA"),
#line 8818
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8819
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8820
F_TRAINER_FEMALE | 
#line 8821
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8822
        .doubleBattle = FALSE,
#line 8823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8825
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8826
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8829
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8830
        .trainerName = _("MARCOS"),
#line 8831
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8832
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8834
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8835
        .doubleBattle = FALSE,
#line 8836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8838
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8840
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8839
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8842
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8843
        .trainerName = _("RHETT"),
#line 8844
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8845
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8847
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8848
        .doubleBattle = FALSE,
#line 8849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8851
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8853
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8852
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8855
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8856
        .trainerName = _("TYRON"),
#line 8857
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8858
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8860
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8861
        .doubleBattle = FALSE,
#line 8862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8864
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8865
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8868
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8869
        .trainerName = _("CELINA"),
#line 8870
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8871
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8872
F_TRAINER_FEMALE | 
#line 8873
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8874
        .doubleBattle = FALSE,
#line 8875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8877
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8878
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8881
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8882
        .trainerName = _("BIANCA"),
#line 8883
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8884
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8885
F_TRAINER_FEMALE | 
#line 8886
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8887
        .doubleBattle = FALSE,
#line 8888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8890
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8891
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8894
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8895
        .trainerName = _("HAYDEN"),
#line 8896
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8897
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8899
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8900
        .doubleBattle = FALSE,
#line 8901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8903
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8904
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8907
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8908
        .trainerName = _("SOPHIE"),
#line 8909
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8910
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8911
F_TRAINER_FEMALE | 
#line 8912
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8913
        .doubleBattle = FALSE,
#line 8914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8916
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8917
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8920
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8921
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8924
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8925
        .trainerName = _("COBY"),
#line 8926
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8927
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8929
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8930
        .doubleBattle = FALSE,
#line 8931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8933
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8934
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8937
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8938
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8941
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8942
        .trainerName = _("LAWRENCE"),
#line 8943
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8944
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8946
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8947
        .doubleBattle = FALSE,
#line 8948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8950
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8951
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8954
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8955
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8958
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8959
        .trainerName = _("WYATT"),
#line 8960
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8961
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8963
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8964
        .doubleBattle = FALSE,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8967
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8968
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8971
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8972
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8975
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8976
        .trainerName = _("ANGELINA"),
#line 8977
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8978
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8979
F_TRAINER_FEMALE | 
#line 8980
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8981
        .doubleBattle = FALSE,
#line 8982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8984
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8985
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8988
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8989
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8992
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8993
        .trainerName = _("KAI"),
#line 8994
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8995
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8997
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8998
        .doubleBattle = FALSE,
#line 8999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9001
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9002
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9005
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9006
        .trainerName = _("CHARLOTTE"),
#line 9007
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9008
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9009
F_TRAINER_FEMALE | 
#line 9010
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9011
        .doubleBattle = FALSE,
#line 9012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9014
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9015
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9018
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9019
        .trainerName = _("DEANDRE"),
#line 9020
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9021
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9023
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9024
        .doubleBattle = FALSE,
#line 9025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9027
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9028
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9031
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9032
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9035
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9036
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9039
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9040
        .trainerName = _("GRUNT"),
#line 9041
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9042
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9044
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9045
        .doubleBattle = FALSE,
#line 9046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9048
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9049
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9052
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9053
        .trainerName = _("GRUNT"),
#line 9054
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9055
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9057
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9058
        .doubleBattle = FALSE,
#line 9059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9061
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9062
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9065
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9066
        .trainerName = _("GRUNT"),
#line 9067
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9068
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9070
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9071
        .doubleBattle = FALSE,
#line 9072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9074
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9075
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9078
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9079
        .trainerName = _("GRUNT"),
#line 9080
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9081
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9083
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9084
        .doubleBattle = FALSE,
#line 9085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9087
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9088
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9091
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9092
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9095
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9096
        .trainerName = _("GRUNT"),
#line 9097
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9098
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9100
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9101
        .doubleBattle = FALSE,
#line 9102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9104
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9105
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9108
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9109
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9112
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9113
        .trainerName = _("GRUNT"),
#line 9114
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9115
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9117
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9118
        .doubleBattle = FALSE,
#line 9119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9121
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9122
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9125
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9126
        .trainerName = _("GRUNT"),
#line 9127
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9128
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9130
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9131
        .doubleBattle = FALSE,
#line 9132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9134
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9135
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9138
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9139
        .trainerName = _("GRUNT"),
#line 9140
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9141
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9143
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9144
        .doubleBattle = FALSE,
#line 9145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9147
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9148
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9151
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9152
        .trainerName = _("GRUNT"),
#line 9153
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9154
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9156
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9157
        .doubleBattle = FALSE,
#line 9158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9160
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9161
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9164
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9165
        .trainerName = _("GRUNT"),
#line 9166
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9167
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9169
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9170
        .doubleBattle = FALSE,
#line 9171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9173
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9174
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9177
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9178
        .trainerName = _("GRUNT"),
#line 9179
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9180
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9182
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9183
        .doubleBattle = FALSE,
#line 9184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9186
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9187
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9190
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9191
        .trainerName = _("GRUNT"),
#line 9192
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9193
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9195
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9196
        .doubleBattle = FALSE,
#line 9197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9199
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9200
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9203
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9204
        .trainerName = _("GRUNT"),
#line 9205
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9206
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9208
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9209
        .doubleBattle = FALSE,
#line 9210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9212
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9213
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9216
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9217
        .trainerName = _("GRUNT"),
#line 9218
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9219
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9220
F_TRAINER_FEMALE | 
#line 9221
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9222
        .doubleBattle = FALSE,
#line 9223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9225
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9226
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9229
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9230
        .trainerName = _("GRUNT"),
#line 9231
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9232
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9233
F_TRAINER_FEMALE | 
#line 9234
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9235
        .doubleBattle = FALSE,
#line 9236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9238
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9239
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9242
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9243
        .trainerName = _("GRUNT"),
#line 9244
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9245
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9246
F_TRAINER_FEMALE | 
#line 9247
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9248
        .doubleBattle = FALSE,
#line 9249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9251
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9252
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9255
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9256
        .trainerName = _("TABITHA"),
#line 9257
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9258
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9260
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9261
        .doubleBattle = FALSE,
#line 9262
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9264
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9264
            .heldItem = ITEM_SITRUS_BERRY,
#line 9267
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9265
            .ability = ABILITY_DROUGHT,
#line 9266
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9268
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9273
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9273
            .heldItem = ITEM_POISON_BARB,
#line 9276
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9274
            .ability = ABILITY_LEVITATE,
#line 9275
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9277
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9282
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9282
            .heldItem = ITEM_LIFE_ORB,
#line 9285
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9283
            .ability = ABILITY_LEVITATE,
#line 9284
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9286
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9291
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9291
            .heldItem = ITEM_FOCUS_SASH,
#line 9294
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9292
            .ability = ABILITY_OWN_TEMPO,
#line 9293
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9295
                MOVE_EARTHQUAKE,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_FISSURE,
            },
            },
        },
    },
#line 9300
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9301
        .trainerName = _("DARCY"),
#line 9302
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9303
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9304
F_TRAINER_FEMALE | 
#line 9305
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9306
        .items = { ITEM_HYPER_POTION },
#line 9307
        .doubleBattle = FALSE,
#line 9308
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9310
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9311
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9314
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9315
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9318
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9319
        .trainerName = _("MAXIE"),
#line 9320
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9321
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9323
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9324
        .doubleBattle = FALSE,
#line 9325
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9327
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9327
            .heldItem = ITEM_ROCKY_HELMET,
#line 9330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9328
            .ability = ABILITY_ROCK_HEAD,
#line 9329
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9331
                MOVE_EARTHQUAKE,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 9336
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9336
            .heldItem = ITEM_AIR_BALLOON,
#line 9339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9337
            .ability = ABILITY_HEAVY_METAL,
#line 9338
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9340
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9345
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9345
            .heldItem = ITEM_SHARP_BEAK,
#line 9348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9346
            .ability = ABILITY_INNER_FOCUS,
#line 9347
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9349
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9354
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9355
        .trainerName = _("PETE"),
#line 9356
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9357
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9359
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9360
        .doubleBattle = FALSE,
#line 9361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9363
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9364
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9367
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9368
        .trainerName = _("ISABELLE"),
#line 9369
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9370
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9371
F_TRAINER_FEMALE | 
#line 9372
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9373
        .doubleBattle = FALSE,
#line 9374
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9376
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9377
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9380
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9381
        .trainerName = _("ANDRES"),
#line 9382
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9383
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9386
        .doubleBattle = FALSE,
#line 9387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9389
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9391
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9390
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9393
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9395
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9394
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9397
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9398
        .trainerName = _("JOSUE"),
#line 9399
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9400
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9402
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9403
        .doubleBattle = FALSE,
#line 9404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9406
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9408
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9407
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9410
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9412
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9411
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9414
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9415
        .trainerName = _("CAMRON"),
#line 9416
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9417
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9419
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9420
        .doubleBattle = FALSE,
#line 9421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9423
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9424
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9427
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9428
        .trainerName = _("CORY"),
#line 9429
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9430
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9432
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9433
        .doubleBattle = FALSE,
#line 9434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9436
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9437
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9440
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9441
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9444
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9445
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9448
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9449
        .trainerName = _("CAROLINA"),
#line 9450
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9451
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9452
F_TRAINER_FEMALE | 
#line 9453
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9454
        .items = { ITEM_HYPER_POTION },
#line 9455
        .doubleBattle = FALSE,
#line 9456
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9458
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9460
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9459
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9462
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9464
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9463
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9466
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9467
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9470
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9471
        .trainerName = _("ELIJAH"),
#line 9472
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9473
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9475
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9476
        .doubleBattle = FALSE,
#line 9477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9479
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9480
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9483
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9484
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9487
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9488
        .trainerName = _("CELIA"),
#line 9489
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9490
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9491
F_TRAINER_FEMALE | 
#line 9492
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9493
        .doubleBattle = FALSE,
#line 9494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9496
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9497
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9500
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9501
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9504
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9505
        .trainerName = _("BRYAN"),
#line 9506
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9507
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9509
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9510
        .doubleBattle = FALSE,
#line 9511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9513
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9514
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9517
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9518
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9521
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9522
        .trainerName = _("BRANDEN"),
#line 9523
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9524
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9526
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9527
        .doubleBattle = FALSE,
#line 9528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9530
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9531
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9534
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9535
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9538
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9539
        .trainerName = _("BRYANT"),
#line 9540
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9541
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9543
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9544
        .doubleBattle = FALSE,
#line 9545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9547
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9548
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9551
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9552
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9555
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9556
        .trainerName = _("SHAYLA"),
#line 9557
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9558
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9559
F_TRAINER_FEMALE | 
#line 9560
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9561
        .doubleBattle = FALSE,
#line 9562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9564
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9565
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9568
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9570
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9569
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9572
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9573
        .trainerName = _("KYRA"),
#line 9574
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9575
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9576
F_TRAINER_FEMALE | 
#line 9577
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9578
        .doubleBattle = FALSE,
#line 9579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9581
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9582
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9585
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9586
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9589
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9590
        .trainerName = _("JAIDEN"),
#line 9591
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9592
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9594
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9595
        .doubleBattle = FALSE,
#line 9596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9598
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9599
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9602
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9603
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9606
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9607
        .trainerName = _("ALIX"),
#line 9608
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9609
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9610
F_TRAINER_FEMALE | 
#line 9611
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9612
        .doubleBattle = FALSE,
#line 9613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9615
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9616
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9619
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9620
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9623
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9624
        .trainerName = _("HELENE"),
#line 9625
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9626
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9627
F_TRAINER_FEMALE | 
#line 9628
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9629
        .doubleBattle = FALSE,
#line 9630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9632
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9633
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9636
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9637
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9640
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9641
        .trainerName = _("MARLENE"),
#line 9642
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9643
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9644
F_TRAINER_FEMALE | 
#line 9645
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9646
        .doubleBattle = FALSE,
#line 9647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9649
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9650
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9653
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9654
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9657
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9658
        .trainerName = _("DEVAN"),
#line 9659
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9660
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9662
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9663
        .doubleBattle = FALSE,
#line 9664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9666
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9667
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9670
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9671
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9674
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9675
        .trainerName = _("JOHNSON"),
#line 9676
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9677
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9679
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9680
        .doubleBattle = FALSE,
#line 9681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9683
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9684
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9687
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9688
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9691
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9692
        .trainerName = _("MELINA"),
#line 9693
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9694
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9695
F_TRAINER_FEMALE | 
#line 9696
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9697
        .doubleBattle = FALSE,
#line 9698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9700
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9701
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9704
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9705
        .trainerName = _("MELISSA"),
#line 9706
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9707
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9708
F_TRAINER_FEMALE | 
#line 9709
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9710
        .doubleBattle = FALSE,
#line 9711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9713
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9714
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9717
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9718
        .trainerName = _("BRANDI"),
#line 9719
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9720
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9721
F_TRAINER_FEMALE | 
#line 9722
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9723
        .doubleBattle = FALSE,
#line 9724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9726
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9727
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9730
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9731
        .trainerName = _("AISHA"),
#line 9732
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9733
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9734
F_TRAINER_FEMALE | 
#line 9735
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9736
        .doubleBattle = FALSE,
#line 9737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9739
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9740
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9743
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9744
        .trainerName = _("MAKAYLA"),
#line 9745
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9746
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9747
F_TRAINER_FEMALE | 
#line 9748
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9749
        .items = { ITEM_HYPER_POTION },
#line 9750
        .doubleBattle = FALSE,
#line 9751
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9753
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9754
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9757
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9758
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9761
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9762
        .trainerName = _("FABIAN"),
#line 9763
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9764
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9766
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9767
        .doubleBattle = FALSE,
#line 9768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9770
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9771
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9774
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9775
        .trainerName = _("DAYTON"),
#line 9776
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9777
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9779
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9780
        .doubleBattle = FALSE,
#line 9781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9783
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9784
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9787
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9788
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9791
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9792
        .trainerName = _("RACHEL"),
#line 9793
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9794
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9795
F_TRAINER_FEMALE | 
#line 9796
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9797
        .doubleBattle = FALSE,
#line 9798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9800
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9801
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9804
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9805
        .trainerName = _("LEONEL"),
#line 9806
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9807
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9809
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9810
        .items = { ITEM_HYPER_POTION },
#line 9811
        .doubleBattle = FALSE,
#line 9812
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9814
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9816
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9815
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9818
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9819
        .trainerName = _("CALLIE"),
#line 9820
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9821
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9822
F_TRAINER_FEMALE | 
#line 9823
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9824
        .doubleBattle = FALSE,
#line 9825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9827
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9828
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9831
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9832
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9835
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9836
        .trainerName = _("CALE"),
#line 9837
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9838
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9840
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9841
        .doubleBattle = FALSE,
#line 9842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9844
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9845
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9848
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9849
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9852
    [DIFFICULTY_NORMAL][TRAINER_SONDHEIM] =
    {
#line 9853
        .trainerName = _("SONDHEIM"),
#line 9854
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9855
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9857
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9858
        .doubleBattle = FALSE,
#line 9859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9861
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9862
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9865
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9866
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9869
    [DIFFICULTY_NORMAL][TRAINER_ASHER] =
    {
#line 9870
        .trainerName = _("ASHER"),
#line 9871
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9872
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9874
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9875
        .doubleBattle = FALSE,
#line 9876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9878
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9879
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9882
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9883
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9887
    [DIFFICULTY_NORMAL][TRAINER_BRIDGETTE] =
    {
#line 9888
        .trainerName = _("BRIDGETTE"),
#line 9889
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9890
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9891
F_TRAINER_FEMALE | 
#line 9892
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9893
        .doubleBattle = FALSE,
#line 9894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9896
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9897
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9900
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9901
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9904
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9905
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9908
    [DIFFICULTY_NORMAL][TRAINER_FLAVIA] =
    {
#line 9909
        .trainerName = _("FLAVIA"),
#line 9910
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9911
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9912
F_TRAINER_FEMALE | 
#line 9913
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9914
        .doubleBattle = FALSE,
#line 9915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9917
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9918
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9921
    [DIFFICULTY_NORMAL][TRAINER_OLIVE] =
    {
#line 9922
        .trainerName = _("OLIVE"),
#line 9923
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9924
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9925
F_TRAINER_FEMALE | 
#line 9926
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9927
        .doubleBattle = FALSE,
#line 9928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9930
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9931
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9934
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9935
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9938
    [DIFFICULTY_NORMAL][TRAINER_VIOLA] =
    {
#line 9939
        .trainerName = _("VIOLA"),
#line 9940
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9941
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9942
F_TRAINER_FEMALE | 
#line 9943
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9944
        .doubleBattle = FALSE,
#line 9945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9947
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9948
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9951
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9952
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9956
    [DIFFICULTY_NORMAL][TRAINER_REIJU] =
    {
#line 9957
        .trainerName = _("VIOLA"),
#line 9958
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9959
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9960
F_TRAINER_FEMALE | 
#line 9961
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9962
        .doubleBattle = FALSE,
#line 9963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9965
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9966
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9969
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9970
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9973
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9974
        .trainerName = _("MYLES"),
#line 9975
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9976
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9979
        .doubleBattle = FALSE,
#line 9980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9982
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9984
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9983
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9986
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9987
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9990
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9991
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9994
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9995
        .trainerName = _("PAT"),
#line 9996
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9997
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9998
F_TRAINER_FEMALE | 
#line 9999
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10000
        .doubleBattle = FALSE,
#line 10001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10003
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10005
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10004
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10007
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10008
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10011
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10013
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10012
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10016
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10017
        .trainerName = _("CRISTIN"),
#line 10018
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10019
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10020
F_TRAINER_FEMALE | 
#line 10021
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10022
        .items = { ITEM_HYPER_POTION },
#line 10023
        .doubleBattle = FALSE,
#line 10024
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10026
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10028
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10027
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10030
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10032
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10031
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10034
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10035
        .trainerName = _("GRUNT"),
#line 10036
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10037
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10039
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10040
        .doubleBattle = FALSE,
#line 10041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10043
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10043
            .heldItem = ITEM_EVIOLITE,
#line 10045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10044
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10046
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10047
        .trainerName = _("GRUNT"),
#line 10048
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10049
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10051
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10052
        .doubleBattle = FALSE,
#line 10053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10055
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10057
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10056
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10058
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10059
        .trainerName = _("GRUNT"),
#line 10060
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10061
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10063
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10064
        .doubleBattle = FALSE,
#line 10065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10067
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10069
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10068
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10070
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10071
        .trainerName = _("GRUNT"),
#line 10072
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10073
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10075
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10076
        .doubleBattle = FALSE,
#line 10077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10079
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10080
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10082
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10083
        .trainerName = _("GRUNT"),
#line 10084
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10085
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10087
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10088
        .doubleBattle = FALSE,
#line 10089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10091
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10092
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10094
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10095
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10097
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_1] =
    {
#line 10098
        .trainerName = _("GRUNT"),
#line 10099
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10100
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10102
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10103
        .doubleBattle = FALSE,
#line 10104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10106
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10107
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10110
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_2] =
    {
#line 10111
        .trainerName = _("GRUNT"),
#line 10112
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10113
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10115
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10116
        .doubleBattle = FALSE,
#line 10117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10119
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10120
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10122
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_3] =
    {
#line 10123
        .trainerName = _("GRUNT"),
#line 10124
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10125
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10127
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10128
        .doubleBattle = FALSE,
#line 10129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10131
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10133
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10132
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10134
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_4] =
    {
#line 10135
        .trainerName = _("GRUNT"),
#line 10136
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10137
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10139
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10140
        .doubleBattle = FALSE,
#line 10141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10143
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10144
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10146
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10147
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10149
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_5] =
    {
#line 10150
        .trainerName = _("GRUNT"),
#line 10151
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10152
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10154
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10155
        .doubleBattle = FALSE,
#line 10156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10158
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10159
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10161
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_6] =
    {
#line 10162
        .trainerName = _("GRUNT"),
#line 10163
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10164
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10166
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10167
        .doubleBattle = FALSE,
#line 10168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10170
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10171
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10173
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10175
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10174
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10176
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_7] =
    {
#line 10177
        .trainerName = _("GRUNT"),
#line 10178
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10179
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10181
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10182
        .doubleBattle = FALSE,
#line 10183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10185
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10186
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10188
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10189
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10191
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10192
        .trainerName = _("ANGELO"),
#line 10193
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10194
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10196
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10197
        .doubleBattle = FALSE,
#line 10198
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10200
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10202
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10201
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10204
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10206
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10205
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10208
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10209
        .trainerName = _("DARIUS"),
#line 10210
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10211
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10213
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10214
        .doubleBattle = FALSE,
#line 10215
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10217
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10219
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10218
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10221
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10222
        .trainerName = _("STEVEN"),
#line 10223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10224
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10226
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10227
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10228
        .doubleBattle = FALSE,
#line 10229
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10231
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10232
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10234
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10239
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10240
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10242
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10247
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10248
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10250
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10255
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10256
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10258
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10263
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10264
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10266
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10271
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10271
            .heldItem = ITEM_SITRUS_BERRY,
#line 10273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10272
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10274
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10279
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS] =
    {
#line 10280
        .trainerName = _("GHOSTESS"),
#line 10281
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10282
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10283
F_TRAINER_FEMALE | 
#line 10284
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10285
        .doubleBattle = FALSE,
#line 10286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10288
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10288
            .heldItem = ITEM_TWISTED_SPOON,
#line 10291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10289
            .ability = ABILITY_THICK_FAT,
#line 10290
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10292
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10297
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10297
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10298
            .ability = ABILITY_WONDER_SKIN,
#line 10299
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10301
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_PAYBACK,
            },
            },
            {
#line 10306
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10306
            .heldItem = ITEM_METRONOME,
#line 10309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10307
            .ability = ABILITY_ROCK_HEAD,
#line 10308
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10310
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ZEN_HEADBUTT,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10315
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .heldItem = ITEM_ASSAULT_VEST,
#line 10318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10316
            .ability = ABILITY_CURSED_BODY,
#line 10317
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10319
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10324
    [DIFFICULTY_NORMAL][TRAINER_JORDAN] =
    {
#line 10325
        .trainerName = _("JORDAN"),
#line 10326
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10327
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10329
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10330
        .doubleBattle = FALSE,
#line 10331
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10333
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10334
            .ability = ABILITY_CHLOROPHYLL,
#line 10335
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10337
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10342
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10342
            .heldItem = ITEM_EVIOLITE,
#line 10345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10343
            .ability = ABILITY_PRESSURE,
#line 10344
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10346
                MOVE_ZEN_HEADBUTT,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10351
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10351
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10352
            .ability = ABILITY_LIQUID_OOZE,
#line 10353
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10355
                MOVE_GUNK_SHOT,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10360
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10360
            .heldItem = ITEM_QUICK_CLAW,
#line 10363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10361
            .ability = ABILITY_OBLIVIOUS,
#line 10362
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10364
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10369
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10369
            .heldItem = ITEM_SHARP_BEAK,
#line 10372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10370
            .ability = ABILITY_INNER_FOCUS,
#line 10371
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10373
                MOVE_AERIAL_ACE,
                MOVE_CROSS_POISON,
                MOVE_KNOCK_OFF,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10378
    [DIFFICULTY_NORMAL][TRAINER_JORDAN2] =
    {
#line 10379
        .trainerName = _("JORDAN"),
#line 10380
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10381
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10383
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10384
        .doubleBattle = FALSE,
#line 10385
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10387
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10387
            .heldItem = ITEM_WIDE_LENS,
#line 10390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10388
            .ability = ABILITY_CHLOROPHYLL,
#line 10389
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10391
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10396
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10396
            .heldItem = ITEM_ASSAULT_VEST,
#line 10399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10397
            .ability = ABILITY_PRESSURE,
#line 10398
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10400
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10405
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10405
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10406
            .ability = ABILITY_LIQUID_OOZE,
#line 10407
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10409
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10414
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10414
            .heldItem = ITEM_CHOICE_SPECS,
#line 10417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10415
            .ability = ABILITY_OBLIVIOUS,
#line 10416
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10418
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 10423
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10423
            .heldItem = ITEM_SHARP_BEAK,
#line 10426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10424
            .ability = ABILITY_INNER_FOCUS,
#line 10425
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10427
                MOVE_CROSS_POISON,
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_U_TURN,
            },
            },
            {
#line 10432
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .heldItem = ITEM_LIFE_ORB,
#line 10435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10433
            .ability = ABILITY_AIR_LOCK,
#line 10434
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10436
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10441
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS2] =
    {
#line 10442
        .trainerName = _("GHOSTESS"),
#line 10443
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10444
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10445
F_TRAINER_FEMALE | 
#line 10446
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10447
        .doubleBattle = FALSE,
#line 10448
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10450
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10450
            .heldItem = ITEM_EXPERT_BELT,
#line 10453
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10451
            .ability = ABILITY_THICK_FAT,
#line 10452
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10454
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10459
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10459
            .heldItem = ITEM_THROAT_SPRAY,
#line 10462
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10460
            .ability = ABILITY_WONDER_SKIN,
#line 10461
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10463
                MOVE_FAKE_OUT,
                MOVE_HYPER_VOICE,
                MOVE_ALLURING_VOICE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10468
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10468
            .heldItem = ITEM_WIDE_LENS,
#line 10471
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10469
            .ability = ABILITY_INTIMIDATE,
#line 10470
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10472
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10477
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10477
            .heldItem = ITEM_ASSAULT_VEST,
#line 10480
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10478
            .ability = ABILITY_CURSED_BODY,
#line 10479
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10481
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10486
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_8] =
    {
#line 10487
        .trainerName = _("GRUNT"),
#line 10488
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10489
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10491
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10492
        .doubleBattle = FALSE,
#line 10493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10495
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10496
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10498
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_9] =
    {
#line 10499
        .trainerName = _("GRUNT"),
#line 10500
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10501
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10503
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10504
        .doubleBattle = FALSE,
#line 10505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10507
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10508
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10510
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_10] =
    {
#line 10511
        .trainerName = _("GRUNT"),
#line 10512
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10513
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10515
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10516
        .doubleBattle = FALSE,
#line 10517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10519
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10520
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10522
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_11] =
    {
#line 10523
        .trainerName = _("GRUNT"),
#line 10524
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10525
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10527
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10528
        .doubleBattle = FALSE,
#line 10529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10531
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10532
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10535
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10536
        .trainerName = _("MARIELA"),
#line 10537
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10538
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10539
F_TRAINER_FEMALE | 
#line 10540
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10541
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10543
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10544
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10547
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10548
        .trainerName = _("ALVARO"),
#line 10549
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10550
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10552
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10553
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10555
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10556
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10559
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10560
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10563
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10564
        .trainerName = _("EVERETT"),
#line 10565
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10566
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10568
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10569
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10571
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10572
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10575
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10576
        .trainerName = _("RED"),
#line 10577
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10578
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10580
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10581
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10583
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10584
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10587
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10588
        .trainerName = _("LEAF"),
#line 10589
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10590
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10591
F_TRAINER_FEMALE | 
#line 10592
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10593
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10595
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10596
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10599
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10600
        .trainerName = _("SAMUEL"),
#line 10601
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10602
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10604
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10605
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10607
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10608
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10611
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10612
        .trainerName = _("MAY"),
#line 10613
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10614
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10615
F_TRAINER_FEMALE | 
#line 10616
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10617
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10619
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10620
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10623
    [DIFFICULTY_NORMAL][TRAINER_ALEC_REMATCH] =
    {
#line 10624
        .trainerName = _("ALEC"),
#line 10625
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10626
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10628
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10629
        .doubleBattle = TRUE,
#line 10630
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10632
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10632
            .heldItem = ITEM_ASSAULT_VEST,
#line 10636
            .ev = TRAINER_PARTY_EVS(0, 0, 200, 110, 0, 200),
#line 10637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10634
            .ability = ABILITY_INTIMIDATE,
#line 10633
            .lvl = 78,
#line 10635
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10637
                MOVE_EARTH_POWER,
                MOVE_AIR_SLASH,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 10642
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10642
            .heldItem = ITEM_LIGHT_CLAY,
#line 10646
            .ev = TRAINER_PARTY_EVS(6, 0, 252, 0, 0, 252),
#line 10647
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10644
            .ability = ABILITY_SAND_STREAM,
#line 10643
            .lvl = 78,
#line 10645
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10647
                MOVE_STEALTH_ROCK,
                MOVE_EXPANDING_FORCE,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
            },
            },
            {
#line 10652
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10652
            .heldItem = ITEM_LEFTOVERS,
#line 10656
            .ev = TRAINER_PARTY_EVS(252, 6, 252, 0, 0, 0),
#line 10657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10654
            .ability = ABILITY_SOUNDPROOF,
#line 10653
            .lvl = 78,
#line 10655
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10657
                MOVE_BEHEMOTH_BASH,
                MOVE_ROCK_SLIDE,
                MOVE_KINGS_SHIELD,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 10662
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10662
            .heldItem = ITEM_CHOICE_SCARF,
#line 10666
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 6, 0, 0),
#line 10667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10664
            .ability = ABILITY_SOLID_ROCK,
#line 10663
            .lvl = 78,
#line 10665
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10667
                MOVE_ROCK_SLIDE,
                MOVE_STOMPING_TANTRUM,
                MOVE_POISON_JAB,
                MOVE_SHADOW_CLAW,
            },
            },
            {
#line 10672
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10672
            .heldItem = ITEM_LIFE_ORB,
#line 10676
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 10677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10674
            .ability = ABILITY_UNNERVE,
#line 10673
            .lvl = 78,
#line 10675
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10677
                MOVE_DIAMOND_STORM,
                MOVE_HURRICANE,
                MOVE_PSYCHIC_FANGS,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 10682
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10682
            .heldItem = ITEM_CHOICE_SPECS,
#line 10686
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 10687
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10684
            .ability = ABILITY_SUCTION_CUPS,
#line 10683
            .lvl = 78,
#line 10685
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10687
                MOVE_ANCIENT_POWER,
                MOVE_ENERGY_BALL,
                MOVE_FLASH_CANNON,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 10692
    [DIFFICULTY_NORMAL][TRAINER_GARRETT_REMATCH] =
    {
#line 10693
        .trainerName = _("GARRETT"),
#line 10694
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10695
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 10697
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10698
        .doubleBattle = TRUE,
#line 10699
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10701
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10701
            .heldItem = ITEM_CHOICE_BAND,
#line 10705
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 10706
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10703
            .ability = ABILITY_DRIZZLE,
#line 10702
            .lvl = 78,
#line 10704
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10706
                MOVE_WAVE_CRASH,
                MOVE_CRUNCH,
                MOVE_FLIP_TURN,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 10711
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10711
            .heldItem = ITEM_FOCUS_SASH,
#line 10715
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 10716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10713
            .ability = ABILITY_DRIZZLE,
#line 10712
            .lvl = 78,
#line 10714
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10716
                MOVE_TAILWIND,
                MOVE_HURRICANE,
                MOVE_FEATHER_DANCE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10721
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10721
            .heldItem = ITEM_LIFE_ORB,
#line 10725
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10726
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10723
            .ability = ABILITY_INTIMIDATE,
#line 10722
            .lvl = 78,
#line 10724
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10726
                MOVE_CRUNCH,
                MOVE_DRAGON_ASCENT,
                MOVE_WAVE_CRASH,
                MOVE_ICE_FANG,
            },
            },
            {
#line 10731
            .species = SPECIES_PALKIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10731
            .heldItem = ITEM_WISE_GLASSES,
#line 10735
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 6, 252),
#line 10736
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10733
            .ability = ABILITY_TELEPATHY,
#line 10732
            .lvl = 78,
#line 10734
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10736
                MOVE_SPACIAL_REND,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_THUNDER,
            },
            },
            {
#line 10741
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10741
            .heldItem = ITEM_EXPERT_BELT,
#line 10745
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 0, 252, 252),
#line 10746
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10743
            .ability = ABILITY_MARVEL_SCALE,
#line 10742
            .lvl = 78,
#line 10744
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10746
                MOVE_SPRINGTIDE_STORM,
                MOVE_SURF,
                MOVE_BLIZZARD,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10751
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10751
            .heldItem = ITEM_ASSAULT_VEST,
#line 10755
            .ev = TRAINER_PARTY_EVS(6, 0, 252, 0, 0, 252),
#line 10756
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10753
            .ability = ABILITY_TORRENT,
#line 10752
            .lvl = 78,
#line 10754
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10756
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_HURRICANE,
            },
            },
        },
    },
#line 10761
    [DIFFICULTY_NORMAL][TRAINER_SAM_REMATCH] =
    {
#line 10762
        .trainerName = _("SAM"),
#line 10763
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10764
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10766
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10767
        .doubleBattle = TRUE,
#line 10768
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10770
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10770
            .heldItem = ITEM_MUSCLE_BAND,
#line 10774
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10772
            .ability = ABILITY_INTIMIDATE,
#line 10771
            .lvl = 78,
#line 10773
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10775
                MOVE_VOLT_TACKLE,
                MOVE_JAW_LOCK,
                MOVE_PLAY_ROUGH,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 10780
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10780
            .heldItem = ITEM_EVIOLITE,
#line 10784
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 6, 252),
#line 10785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10782
            .ability = ABILITY_DOWNLOAD,
#line 10781
            .lvl = 78,
#line 10783
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10785
                MOVE_METAL_SOUND,
                MOVE_VOLT_SWITCH,
                MOVE_ION_DELUGE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 10790
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10790
            .heldItem = ITEM_CHOICE_SPECS,
#line 10794
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 10795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10792
            .ability = ABILITY_MAGNET_PULL,
#line 10791
            .lvl = 78,
#line 10793
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10795
                MOVE_STEEL_BEAM,
                MOVE_VOLT_SWITCH,
                MOVE_DISCHARGE,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 10800
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10800
            .heldItem = ITEM_CHOICE_BAND,
#line 10804
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 10805
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10802
            .ability = ABILITY_MOTOR_DRIVE,
#line 10801
            .lvl = 78,
#line 10803
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10805
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_SUPERCELL_SLAM,
            },
            },
            {
#line 10810
            .species = SPECIES_RAIKOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10810
            .heldItem = ITEM_ASSAULT_VEST,
#line 10814
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 6, 252),
#line 10815
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10812
            .ability = ABILITY_VOLT_ABSORB,
#line 10811
            .lvl = 78,
#line 10813
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10815
                MOVE_DISCHARGE,
                MOVE_SHADOW_BALL,
                MOVE_SCALD,
                MOVE_AURA_SPHERE,
            },
            },
            {
#line 10820
            .species = SPECIES_THUNDURUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10820
            .heldItem = ITEM_LEFTOVERS,
#line 10824
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 6),
#line 10825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10822
            .ability = ABILITY_VOLT_ABSORB,
#line 10821
            .lvl = 78,
#line 10823
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10825
                MOVE_WILDBOLT_STORM,
                MOVE_NASTY_PLOT,
                MOVE_AIR_SLASH,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 10830
    [DIFFICULTY_NORMAL][TRAINER_JOSE_REMATCH] =
    {
#line 10831
        .trainerName = _("JOSE"),
#line 10832
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10833
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10835
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10836
        .doubleBattle = TRUE,
#line 10837
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10839
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10839
            .heldItem = ITEM_FAIRY_FEATHER,
#line 10843
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 6, 252, 0),
#line 10844
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10841
            .ability = ABILITY_NATURAL_CURE,
#line 10840
            .lvl = 78,
#line 10842
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10844
                MOVE_SAFEGUARD,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_SPARKLY_SWIRL,
            },
            },
            {
#line 10849
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10849
            .heldItem = ITEM_CHOICE_SPECS,
#line 10853
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 10854
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10851
            .ability = ABILITY_BERSERK,
#line 10850
            .lvl = 78,
#line 10852
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10854
                MOVE_DRACO_METEOR,
                MOVE_ERUPTION,
                MOVE_FLAMETHROWER,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 10859
            .species = SPECIES_DIALGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10859
            .heldItem = ITEM_ASSAULT_VEST,
#line 10863
            .ev = TRAINER_PARTY_EVS(0, 0, 100, 0, 158, 252),
#line 10864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10861
            .ability = ABILITY_TELEPATHY,
#line 10860
            .lvl = 78,
#line 10862
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10864
                MOVE_ROAR_OF_TIME,
                MOVE_EARTH_POWER,
                MOVE_METAL_BURST,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10869
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10869
            .heldItem = ITEM_LEFTOVERS,
#line 10873
            .ev = TRAINER_PARTY_EVS(252, 252, 6, 0, 0, 0),
#line 10874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10871
            .ability = ABILITY_LEVITATE,
#line 10870
            .lvl = 78,
#line 10872
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10874
                MOVE_U_TURN,
                MOVE_DRAGON_RUSH,
                MOVE_EARTH_POWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10879
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10879
            .heldItem = ITEM_ROCKY_HELMET,
#line 10883
            .ev = TRAINER_PARTY_EVS(0, 6, 252, 0, 0, 252),
#line 10884
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10881
            .ability = ABILITY_MARVEL_SCALE,
#line 10880
            .lvl = 78,
#line 10882
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10884
                MOVE_DRAGON_ASCENT,
                MOVE_THUNDER_WAVE,
                MOVE_AIR_SLASH,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 10889
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10889
            .heldItem = ITEM_DRAGON_FANG,
#line 10893
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 10894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10891
            .ability = ABILITY_SNIPER,
#line 10890
            .lvl = 78,
#line 10892
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10894
                MOVE_SCALE_SHOT,
                MOVE_OCTAZOOKA,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 10899
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON_REMATCH] =
    {
#line 10900
        .trainerName = _("GRAYSON"),
#line 10901
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10902
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 10904
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10905
        .doubleBattle = TRUE,
#line 10906
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10908
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10908
            .heldItem = ITEM_ASSAULT_VEST,
#line 10912
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10910
            .ability = ABILITY_IRON_FIST,
#line 10909
            .lvl = 78,
#line 10911
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10913
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
                MOVE_DYNAMIC_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10918
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10918
            .heldItem = ITEM_ROCKY_HELMET,
#line 10922
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10920
            .ability = ABILITY_CUTE_CHARM,
#line 10919
            .lvl = 78,
#line 10921
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10923
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 10928
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .heldItem = ITEM_FOCUS_BAND,
#line 10932
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10933
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10930
            .ability = ABILITY_POISON_TOUCH,
#line 10929
            .lvl = 78,
#line 10931
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10933
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 10938
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10938
            .heldItem = ITEM_LIFE_ORB,
#line 10942
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10943
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10940
            .ability = ABILITY_NO_GUARD,
#line 10939
            .lvl = 78,
#line 10941
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10943
                MOVE_DUAL_CHOP,
                MOVE_DARKEST_LARIAT,
                MOVE_FISSURE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10948
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10948
            .heldItem = ITEM_FOCUS_SASH,
#line 10952
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 10953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10950
            .ability = ABILITY_MOXIE,
#line 10949
            .lvl = 78,
#line 10951
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10953
                MOVE_CLOSE_COMBAT,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 10958
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10958
            .heldItem = ITEM_EXPERT_BELT,
#line 10962
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 0, 252, 252),
#line 10963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10960
            .ability = ABILITY_INNER_FOCUS,
#line 10959
            .lvl = 78,
#line 10961
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10963
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 10968
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW_REMATCH] =
    {
#line 10969
        .trainerName = _("MATTHEW"),
#line 10970
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10971
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 10973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10974
        .doubleBattle = TRUE,
#line 10975
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10977
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10977
            .heldItem = ITEM_AIR_BALLOON,
#line 10981
            .ev = TRAINER_PARTY_EVS(252, 6, 0, 252, 0, 0),
#line 10982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10979
            .ability = ABILITY_STURDY,
#line 10978
            .lvl = 78,
#line 10980
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10982
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10987
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10987
            .heldItem = ITEM_MUSCLE_BAND,
#line 10991
            .ev = TRAINER_PARTY_EVS(0, 6, 252, 0, 0, 252),
#line 10992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10989
            .ability = ABILITY_STURDY,
#line 10988
            .lvl = 78,
#line 10990
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10992
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_IRON_HEAD,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 10997
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10997
            .heldItem = ITEM_CHOICE_SPECS,
#line 11001
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 11002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10999
            .ability = ABILITY_COMPETITIVE,
#line 10998
            .lvl = 78,
#line 11000
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11002
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 11007
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11007
            .heldItem = ITEM_ASSAULT_VEST,
#line 11011
            .ev = TRAINER_PARTY_EVS(0, 6, 252, 0, 0, 252),
#line 11012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11009
            .ability = ABILITY_CLEAR_BODY,
#line 11008
            .lvl = 78,
#line 11010
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11012
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 11017
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11017
            .heldItem = ITEM_CHOICE_BAND,
#line 11021
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 11022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11019
            .ability = ABILITY_TECHNICIAN,
#line 11018
            .lvl = 78,
#line 11020
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11022
                MOVE_BULLET_PUNCH,
                MOVE_MEGAHORN,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 11027
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11027
            .heldItem = ITEM_ROCKY_HELMET,
#line 11031
            .ev = TRAINER_PARTY_EVS(0, 6, 252, 0, 0, 252),
#line 11032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11029
            .ability = ABILITY_IRON_BARBS,
#line 11028
            .lvl = 78,
#line 11030
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11032
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 11037
    [DIFFICULTY_NORMAL][TRAINER_MARK_REMATCH] =
    {
#line 11038
        .trainerName = _("MARK"),
#line 11039
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11040
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 11042
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11043
        .doubleBattle = TRUE,
#line 11044
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11046
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11046
            .heldItem = ITEM_ROCKY_HELMET,
#line 11050
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 11051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11048
            .ability = ABILITY_FLASH_FIRE,
#line 11047
            .lvl = 78,
#line 11049
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11051
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC_TERRAIN,
            },
            },
            {
#line 11056
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11056
            .heldItem = ITEM_CHOICE_BAND,
#line 11060
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 11061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11058
            .ability = ABILITY_HUGE_POWER,
#line 11057
            .lvl = 78,
#line 11059
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11061
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 11066
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11066
            .heldItem = ITEM_ASSAULT_VEST,
#line 11070
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 6, 252),
#line 11071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11068
            .ability = ABILITY_TELEPATHY,
#line 11067
            .lvl = 78,
#line 11069
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11071
                MOVE_DAZZLING_GLEAM,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 11076
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11076
            .heldItem = ITEM_LEFTOVERS,
#line 11080
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 3),
#line 11081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11078
            .ability = ABILITY_SERENE_GRACE,
#line 11077
            .lvl = 78,
#line 11079
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11081
                MOVE_DAZZLING_GLEAM,
                MOVE_ANCIENT_POWER,
                MOVE_FIERY_DANCE,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 11086
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11086
            .heldItem = ITEM_CHOICE_SPECS,
#line 11090
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 11091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11088
            .ability = ABILITY_PIXILATE,
#line 11087
            .lvl = 78,
#line 11089
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11091
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 11096
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11096
            .heldItem = ITEM_OCCA_BERRY,
#line 11100
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 6),
#line 11101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11098
            .ability = ABILITY_INTIMIDATE,
#line 11097
            .lvl = 78,
#line 11099
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11101
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 11106
    [DIFFICULTY_NORMAL][TRAINER_XANDER_REMATCH] =
    {
#line 11107
        .trainerName = _("XANDER"),
#line 11108
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11109
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 11111
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11112
        .doubleBattle = TRUE,
#line 11113
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11115
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11115
            .heldItem = ITEM_BLACK_SLUDGE,
#line 11119
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 11120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11117
            .ability = ABILITY_CURSED_BODY,
#line 11116
            .lvl = 78,
#line 11118
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11120
                MOVE_ASTRAL_BARRAGE,
                MOVE_SLUDGE_WAVE,
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
            },
            },
            {
#line 11125
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11125
            .heldItem = ITEM_SITRUS_BERRY,
#line 11129
            .ev = TRAINER_PARTY_EVS(6, 0, 252, 0, 0, 252),
#line 11130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11127
            .ability = ABILITY_PRANKSTER,
#line 11126
            .lvl = 78,
#line 11128
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11130
                MOVE_ICY_WIND,
                MOVE_WILL_O_WISP,
                MOVE_FOUL_PLAY,
                MOVE_TAUNT,
            },
            },
            {
#line 11135
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11135
            .heldItem = ITEM_SITRUS_BERRY,
#line 11139
            .ev = TRAINER_PARTY_EVS(0, 0, 6, 0, 252, 252),
#line 11140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11137
            .ability = ABILITY_LEVITATE,
#line 11136
            .lvl = 78,
#line 11138
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11140
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 11145
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11145
            .heldItem = ITEM_LEFTOVERS,
#line 11149
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 11150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11147
            .ability = ABILITY_PRESSURE,
#line 11146
            .lvl = 78,
#line 11148
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11150
                MOVE_PSYSTRIKE,
                MOVE_AURA_SPHERE,
                MOVE_SHADOW_BALL,
                MOVE_NASTY_PLOT,
            },
            },
            {
#line 11155
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11155
            .heldItem = ITEM_CHOICE_SPECS,
#line 11159
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 11160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11157
            .ability = ABILITY_FLASH_FIRE,
#line 11156
            .lvl = 78,
#line 11158
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11160
                MOVE_OVERHEAT,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 11165
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11165
            .heldItem = ITEM_ASSAULT_VEST,
#line 11169
            .ev = TRAINER_PARTY_EVS(6, 252, 252, 0, 0, 0),
#line 11170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11167
            .ability = ABILITY_NO_GUARD,
#line 11166
            .lvl = 78,
#line 11168
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11170
                MOVE_FISSURE,
                MOVE_RAGE_FIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
