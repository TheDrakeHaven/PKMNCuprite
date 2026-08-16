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
        .partySize = 0,
        .party = (const struct TrainerMon[])
        {
        },
    },
#line 84
    [DIFFICULTY_NORMAL][TRAINER_SAWYER] =
    {
#line 85
        .trainerName = _("SAWYER"),
#line 86
        .trainerClass = TRAINER_CLASS_GAMER,
#line 87
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 89
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 90
        .doubleBattle = FALSE,
#line 91
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 93
            .species = SPECIES_MONFERNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 95
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 94
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 97
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_1] =
    {
#line 98
        .trainerName = _("GRUNT"),
#line 99
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 100
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 102
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 103
        .doubleBattle = FALSE,
#line 104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 106
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 107
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 110
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_2] =
    {
#line 111
        .trainerName = _("GRUNT"),
#line 112
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 113
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 115
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 116
        .doubleBattle = FALSE,
#line 117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 119
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 120
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 123
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 124
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 127
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_3] =
    {
#line 128
        .trainerName = _("GRUNT"),
#line 129
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 130
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 132
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 133
        .doubleBattle = FALSE,
#line 134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 136
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 137
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 140
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_4] =
    {
#line 141
        .trainerName = _("GRUNT"),
#line 142
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 143
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 145
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 146
        .doubleBattle = FALSE,
#line 147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 149
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 150
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 153
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_1] =
    {
#line 154
        .trainerName = _("GRUNT"),
#line 155
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 156
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 158
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 159
        .doubleBattle = FALSE,
#line 160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 162
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 163
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 166
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_2] =
    {
#line 167
        .trainerName = _("GRUNT"),
#line 168
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 169
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 171
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 172
        .doubleBattle = FALSE,
#line 173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 175
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 176
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 179
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_3] =
    {
#line 180
        .trainerName = _("GRUNT"),
#line 181
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 182
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 184
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 185
        .doubleBattle = FALSE,
#line 186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 188
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 189
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 192
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE] =
    {
#line 193
        .trainerName = _("GABRIELLE"),
#line 194
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 195
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 196
F_TRAINER_FEMALE | 
#line 197
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 198
        .doubleBattle = FALSE,
#line 199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 201
            .species = SPECIES_PERSIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 202
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 205
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 206
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 209
            .species = SPECIES_HUNTAIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 210
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 214
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_PETALBURG_WOODS] =
    {
#line 215
        .trainerName = _("GRUNT"),
#line 216
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 217
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 219
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 220
        .doubleBattle = FALSE,
#line 221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 223
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 224
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 227
    [DIFFICULTY_NORMAL][TRAINER_MARCEL] =
    {
#line 228
        .trainerName = _("MARCEL"),
#line 229
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 230
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 232
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 233
        .items = { ITEM_HYPER_POTION },
#line 234
        .doubleBattle = FALSE,
#line 235
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 237
            .species = SPECIES_TRANQUILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 239
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 238
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 241
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 243
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 242
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 245
    [DIFFICULTY_NORMAL][TRAINER_ALBERTO] =
    {
#line 246
        .trainerName = _("ALBERTO"),
#line 247
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 248
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 250
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 251
        .doubleBattle = FALSE,
#line 252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 254
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 255
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 258
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 259
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 262
    [DIFFICULTY_NORMAL][TRAINER_ED] =
    {
#line 263
        .trainerName = _("ED"),
#line 264
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 265
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 267
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 268
        .doubleBattle = FALSE,
#line 269
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 271
            .species = SPECIES_LOUDRED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 272
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 275
            .species = SPECIES_IVYSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 276
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 279
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_4] =
    {
#line 280
        .trainerName = _("GRUNT"),
#line 281
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 282
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 283
F_TRAINER_FEMALE | 
#line 284
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 285
        .doubleBattle = FALSE,
#line 286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 288
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 289
            .lvl = 62,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 292
    [DIFFICULTY_NORMAL][TRAINER_DECLAN] =
    {
#line 293
        .trainerName = _("DECLAN"),
#line 294
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 295
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 297
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 298
        .doubleBattle = FALSE,
#line 299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 301
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 302
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 305
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_RUSTURF_TUNNEL] =
    {
#line 306
        .trainerName = _("GRUNT"),
#line 307
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 308
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 310
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 311
        .doubleBattle = FALSE,
#line 312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 314
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 315
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 317
                MOVE_BITE,
                MOVE_SAND_ATTACK,
                MOVE_SWAGGER,
                MOVE_SNARL,
            },
            },
        },
    },
#line 322
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 323
        .trainerName = _("GRUNT"),
#line 324
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 325
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 327
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 328
        .doubleBattle = FALSE,
#line 329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 331
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 332
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 335
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 337
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 336
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 339
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 340
        .trainerName = _("GRUNT"),
#line 341
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 342
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 344
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 345
        .doubleBattle = FALSE,
#line 346
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 348
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 349
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 352
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 353
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 356
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 357
        .trainerName = _("GRUNT"),
#line 358
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 359
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 361
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 362
        .doubleBattle = FALSE,
#line 363
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 365
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 366
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 369
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 370
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 373
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 374
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 377
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 378
        .trainerName = _("GRUNT"),
#line 379
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 380
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 382
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 383
        .doubleBattle = FALSE,
#line 384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 386
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 387
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 390
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 391
        .trainerName = _("GRUNT"),
#line 392
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 393
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 395
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 396
        .doubleBattle = FALSE,
#line 397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 399
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 400
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 403
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 404
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 407
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 408
        .trainerName = _("GRUNT"),
#line 409
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 410
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 412
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 413
        .doubleBattle = FALSE,
#line 414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 416
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 417
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 420
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 421
        .trainerName = _("GRUNT"),
#line 422
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 423
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 425
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 426
        .doubleBattle = FALSE,
#line 427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 429
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 430
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 433
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 434
        .trainerName = _("GRUNT"),
#line 435
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 436
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 438
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 439
        .doubleBattle = FALSE,
#line 440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 442
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 443
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 446
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 447
        .trainerName = _("GRUNT"),
#line 448
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 449
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 451
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 452
        .doubleBattle = FALSE,
#line 453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 455
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 456
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 459
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 460
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 463
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 464
        .trainerName = _("GRUNT"),
#line 465
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 466
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 467
F_TRAINER_FEMALE | 
#line 468
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 469
        .doubleBattle = FALSE,
#line 470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 472
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 473
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 476
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 477
        .trainerName = _("GRUNT"),
#line 478
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 479
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 480
F_TRAINER_FEMALE | 
#line 481
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 482
        .doubleBattle = FALSE,
#line 483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 485
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 486
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 489
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 490
        .trainerName = _("GRUNT"),
#line 491
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 492
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 493
F_TRAINER_FEMALE | 
#line 494
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 495
        .doubleBattle = FALSE,
#line 496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 498
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 499
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 502
    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
#line 503
        .trainerName = _("FREDRICK"),
#line 504
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 505
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 507
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 508
        .doubleBattle = FALSE,
#line 509
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 511
            .species = SPECIES_WORMADAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 513
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 512
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 515
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 517
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 516
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 519
    [DIFFICULTY_NORMAL][TRAINER_MATTIAS] =
    {
#line 520
        .trainerName = _("MATTHIAS"),
#line 521
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 522
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 524
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 525
        .doubleBattle = FALSE,
#line 526
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 528
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 528
            .heldItem = ITEM_BLACK_SLUDGE,
#line 531
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 529
            .ability = ABILITY_POISON_TOUCH,
#line 530
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 532
                MOVE_GUNK_SHOT,
                MOVE_LUNGE,
                MOVE_TOXIC_SPIKES,
                MOVE_PROTECT,
            },
            },
            {
#line 537
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 537
            .heldItem = ITEM_LEFTOVERS,
#line 540
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 538
            .ability = ABILITY_THICK_FAT,
#line 539
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 541
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_FISSURE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 546
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 546
            .heldItem = ITEM_WISE_GLASSES,
#line 549
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 547
            .ability = ABILITY_SHED_SKIN,
#line 548
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 550
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 555
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 555
            .heldItem = ITEM_EXPERT_BELT,
#line 558
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 556
            .ability = ABILITY_INTIMIDATE,
#line 557
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 559
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_TRAILBLAZE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 564
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 564
            .heldItem = ITEM_MUSCLE_BAND,
#line 567
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 565
            .ability = ABILITY_WATER_ABSORB,
#line 566
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 568
                MOVE_SEED_BOMB,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_PIN_MISSILE,
            },
            },
        },
    },
#line 573
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 574
        .trainerName = _("ZANDER"),
#line 575
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 576
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 578
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 579
        .doubleBattle = FALSE,
#line 580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 582
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 583
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 586
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 587
        .trainerName = _("SHELLY"),
#line 588
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 589
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 590
F_TRAINER_FEMALE | 
#line 591
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 592
        .doubleBattle = FALSE,
#line 593
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 595
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 595
            .heldItem = ITEM_ROCKY_HELMET,
#line 598
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 596
            .ability = ABILITY_DRIZZLE,
#line 597
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 599
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_POISON_FANG,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 604
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .heldItem = ITEM_MAGNET,
#line 607
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 605
            .ability = ABILITY_STATIC,
#line 606
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 608
                MOVE_WILD_CHARGE,
                MOVE_BITE,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 613
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 613
            .heldItem = ITEM_CHOICE_BAND,
#line 616
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 614
            .ability = ABILITY_HYPER_CUTTER,
#line 615
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 617
                MOVE_CRABHAMMER,
            },
            },
            {
#line 619
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .heldItem = ITEM_BLACK_SLUDGE,
#line 622
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 620
            .ability = ABILITY_STICKY_HOLD,
#line 621
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 623
                MOVE_SLUDGE_WAVE,
                MOVE_DISABLE,
                MOVE_MINIMIZE,
                MOVE_ACID_ARMOR,
            },
            },
            {
#line 628
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 628
            .heldItem = ITEM_SHARP_BEAK,
#line 631
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 629
            .ability = ABILITY_INNER_FOCUS,
#line 630
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 632
                MOVE_AIR_CUTTER,
                MOVE_VENOSHOCK,
                MOVE_HAZE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 637
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 638
        .trainerName = _("SHELLY"),
#line 639
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 640
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 641
F_TRAINER_FEMALE | 
#line 642
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 643
        .doubleBattle = FALSE,
#line 644
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 646
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .heldItem = ITEM_ROCKY_HELMET,
#line 649
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 647
            .ability = ABILITY_DRIZZLE,
#line 648
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 650
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 655
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .heldItem = ITEM_MAGNET,
#line 658
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 656
            .ability = ABILITY_STATIC,
#line 657
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 659
                MOVE_THUNDER_WAVE,
                MOVE_VOLT_SWITCH,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 664
            .species = SPECIES_CRAWDAUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 664
            .heldItem = ITEM_CHOICE_BAND,
#line 667
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 665
            .ability = ABILITY_ADAPTABILITY,
#line 666
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 668
                MOVE_CRABHAMMER,
                MOVE_CRUNCH,
            },
            },
            {
#line 671
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .heldItem = ITEM_BLACK_SLUDGE,
#line 674
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 672
            .ability = ABILITY_STICKY_HOLD,
#line 673
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_GUNK_SHOT,
                MOVE_TOXIC,
                MOVE_MINIMIZE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 680
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 680
            .heldItem = ITEM_SHARP_BEAK,
#line 683
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 681
            .ability = ABILITY_INNER_FOCUS,
#line 682
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_HURRICANE,
                MOVE_VENOSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 689
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 690
        .trainerName = _("ARCHIE"),
#line 691
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 692
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 694
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 695
        .doubleBattle = FALSE,
#line 696
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 698
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 698
            .heldItem = ITEM_DAMP_ROCK,
#line 701
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 699
            .ability = ABILITY_WATER_ABSORB,
#line 700
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 702
                MOVE_ENERGY_BALL,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 707
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 707
            .heldItem = ITEM_MUSCLE_BAND,
#line 710
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 708
            .ability = ABILITY_SPEED_BOOST,
#line 709
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 711
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_EARTHQUAKE,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 716
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 716
            .heldItem = ITEM_STICKY_BARB,
#line 719
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 717
            .ability = ABILITY_SHED_SKIN,
#line 718
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 720
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 725
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 725
            .heldItem = ITEM_CHOICE_SPECS,
#line 728
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 726
            .ability = ABILITY_VOLT_ABSORB,
#line 727
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 729
                MOVE_HYDRO_PUMP,
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 735
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 735
            .heldItem = ITEM_LEFTOVERS,
#line 738
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 736
            .ability = ABILITY_OBLIVIOUS,
#line 737
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 739
                MOVE_BLIZZARD,
                MOVE_SURF,
                MOVE_YAWN,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 744
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 745
        .trainerName = _("LEAH"),
#line 746
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 747
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 748
F_TRAINER_FEMALE | 
#line 749
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 750
        .doubleBattle = FALSE,
#line 751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 753
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 754
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 757
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 758
        .trainerName = _("DAISY"),
#line 759
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 760
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 761
F_TRAINER_FEMALE | 
#line 762
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 763
        .doubleBattle = FALSE,
#line 764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 766
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 767
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 770
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 771
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 774
    [DIFFICULTY_NORMAL][TRAINER_ROSE] =
    {
#line 775
        .trainerName = _("ROSE"),
#line 776
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 777
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 778
F_TRAINER_FEMALE | 
#line 779
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 780
        .doubleBattle = FALSE,
#line 781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 783
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 784
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 787
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 788
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 791
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 792
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 797
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 798
        .trainerName = _("FELIX"),
#line 799
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 800
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 802
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 803
        .items = { ITEM_FULL_RESTORE },
#line 804
        .doubleBattle = FALSE,
#line 805
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 807
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 808
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 811
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 812
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 816
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 817
        .trainerName = _("VIOLET"),
#line 818
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 819
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 820
F_TRAINER_FEMALE | 
#line 821
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 822
        .doubleBattle = FALSE,
#line 823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 825
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 826
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 829
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 830
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 833
    [DIFFICULTY_NORMAL][TRAINER_DUSTY] =
    {
#line 834
        .trainerName = _("DUSTY"),
#line 835
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 836
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 838
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 839
        .doubleBattle = FALSE,
#line 840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 842
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 844
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 843
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 846
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 847
        .trainerName = _("CHIP"),
#line 848
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 849
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 851
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 852
        .doubleBattle = FALSE,
#line 853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 855
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 857
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 856
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 859
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 861
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 860
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 863
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 865
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 864
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 867
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 868
        .trainerName = _("FOSTER"),
#line 869
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 870
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 872
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 873
        .doubleBattle = FALSE,
#line 874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 876
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 878
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 877
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 880
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 882
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 881
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 884
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY] =
    {
#line 885
        .trainerName = _("GABBY & TY"),
#line 886
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 887
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 889
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 890
        .doubleBattle = TRUE,
#line 891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 893
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 895
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 894
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 897
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 899
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 898
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 901
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 902
        .trainerName = _("GABBY & TY"),
#line 903
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 904
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 906
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 907
        .doubleBattle = TRUE,
#line 908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 910
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 912
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 911
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 914
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 916
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 915
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 919
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 920
        .trainerName = _("LOLA"),
#line 921
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 922
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 923
F_TRAINER_FEMALE | 
#line 924
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 925
        .doubleBattle = FALSE,
#line 926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 928
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 930
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 929
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 932
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 934
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 933
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 936
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 937
        .trainerName = _("AUSTINA"),
#line 938
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 939
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 940
F_TRAINER_FEMALE | 
#line 941
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 942
        .doubleBattle = FALSE,
#line 943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 945
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 946
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 949
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 950
        .trainerName = _("GWEN"),
#line 951
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 952
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 953
F_TRAINER_FEMALE | 
#line 954
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 955
        .doubleBattle = FALSE,
#line 956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 958
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 959
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 962
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 963
        .trainerName = _("RICKY"),
#line 964
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 965
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 967
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 968
        .doubleBattle = FALSE,
#line 969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 971
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 973
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 972
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 975
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 976
        .trainerName = _("SIMON"),
#line 977
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 978
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 980
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 981
        .doubleBattle = FALSE,
#line 982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 984
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 985
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 988
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 989
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 992
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 993
        .trainerName = _("CHARLIE"),
#line 994
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 995
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 997
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 998
        .doubleBattle = FALSE,
#line 999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1001
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1002
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1005
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 1006
        .trainerName = _("RANDALL"),
#line 1007
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1008
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1010
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1011
        .items = { ITEM_HYPER_POTION },
#line 1012
        .doubleBattle = FALSE,
#line 1013
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1015
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1016
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1019
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1020
        .trainerName = _("PARKER"),
#line 1021
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1022
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1024
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1025
        .items = { ITEM_HYPER_POTION },
#line 1026
        .doubleBattle = FALSE,
#line 1027
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1029
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1030
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1033
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1034
        .trainerName = _("GEORGE"),
#line 1035
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1036
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1038
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1039
        .items = { ITEM_HYPER_POTION },
#line 1040
        .doubleBattle = FALSE,
#line 1041
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1043
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1043
            .heldItem = ITEM_SITRUS_BERRY,
#line 1045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1044
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1047
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1048
        .trainerName = _("BERKE"),
#line 1049
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1050
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1052
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1053
        .items = { ITEM_HYPER_POTION },
#line 1054
        .doubleBattle = FALSE,
#line 1055
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1057
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1058
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1061
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1062
        .trainerName = _("BRAXTON"),
#line 1063
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1064
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1066
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1067
        .items = { ITEM_HYPER_POTION },
#line 1068
        .doubleBattle = FALSE,
#line 1069
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1071
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1073
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1072
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1075
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1076
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1079
            .species = SPECIES_GLACEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1081
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1080
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1083
            .species = SPECIES_SAWSBUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1084
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1087
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1089
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1088
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1091
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1092
        .trainerName = _("VINCENT"),
#line 1093
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1094
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1096
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1097
        .items = { ITEM_FULL_RESTORE },
#line 1098
        .doubleBattle = FALSE,
#line 1099
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1101
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1103
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1102
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1105
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1107
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1106
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1109
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1111
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1110
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1113
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1114
        .trainerName = _("LEROY"),
#line 1115
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1116
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1118
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1119
        .items = { ITEM_FULL_RESTORE },
#line 1120
        .doubleBattle = FALSE,
#line 1121
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1123
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1125
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1124
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1127
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1129
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1128
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1131
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 1132
        .trainerName = _("WILTON"),
#line 1133
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1134
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1136
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1137
        .items = { ITEM_SUPER_POTION },
#line 1138
        .doubleBattle = FALSE,
#line 1139
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1141
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1143
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1142
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1145
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1147
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1146
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1149
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1151
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1150
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1153
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1154
        .trainerName = _("EDGAR"),
#line 1155
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1156
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1158
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1159
        .items = { ITEM_FULL_RESTORE },
#line 1160
        .doubleBattle = FALSE,
#line 1161
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1163
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1164
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1167
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1169
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1168
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1171
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1172
        .trainerName = _("ALBERT"),
#line 1173
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1174
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1176
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1177
        .items = { ITEM_FULL_RESTORE },
#line 1178
        .doubleBattle = FALSE,
#line 1179
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1181
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1182
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1185
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1186
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1189
    [DIFFICULTY_NORMAL][TRAINER_SAMMY] =
    {
#line 1190
        .trainerName = _("SAMMY"),
#line 1191
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1192
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1194
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1195
        .items = { ITEM_FULL_RESTORE },
#line 1196
        .doubleBattle = FALSE,
#line 1197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1199
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1201
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1200
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1203
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1205
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1204
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1207
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1209
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1208
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1211
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1212
        .trainerName = _("VITO"),
#line 1213
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1214
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1216
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1217
        .items = { ITEM_FULL_RESTORE },
#line 1218
        .doubleBattle = FALSE,
#line 1219
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1221
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1223
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1222
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1225
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1227
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1226
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1229
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1231
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1230
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1233
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1235
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1234
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1237
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1238
        .trainerName = _("OWEN"),
#line 1239
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1240
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1242
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1243
        .items = { ITEM_FULL_RESTORE },
#line 1244
        .doubleBattle = FALSE,
#line 1245
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1247
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1249
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1248
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1251
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1252
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1255
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1257
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1256
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1259
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1260
        .trainerName = _("WARREN"),
#line 1261
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1262
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1264
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1265
        .items = { ITEM_FULL_RESTORE },
#line 1266
        .doubleBattle = FALSE,
#line 1267
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1269
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1271
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1270
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1273
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1275
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1274
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1277
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1278
        .trainerName = _("MARY"),
#line 1279
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1280
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1281
F_TRAINER_FEMALE | 
#line 1282
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1283
        .items = { ITEM_HYPER_POTION },
#line 1284
        .doubleBattle = FALSE,
#line 1285
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1287
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1288
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1292
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1293
        .trainerName = _("ALEXIA"),
#line 1294
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1295
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1296
F_TRAINER_FEMALE | 
#line 1297
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1298
        .items = { ITEM_HYPER_POTION },
#line 1299
        .doubleBattle = FALSE,
#line 1300
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1302
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1303
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1306
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1307
        .trainerName = _("JODY"),
#line 1308
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1309
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1310
F_TRAINER_FEMALE | 
#line 1311
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1312
        .items = { ITEM_HYPER_POTION },
#line 1313
        .doubleBattle = FALSE,
#line 1314
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1316
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1317
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1319
                MOVE_SWORDS_DANCE,
                MOVE_DRAIN_PUNCH,
            },
            },
        },
    },
#line 1322
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1323
        .trainerName = _("WENDY"),
#line 1324
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1325
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1326
F_TRAINER_FEMALE | 
#line 1327
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1328
        .items = { ITEM_FULL_RESTORE },
#line 1329
        .doubleBattle = FALSE,
#line 1330
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1332
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1334
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1333
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1336
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1337
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1340
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1342
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1341
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1344
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1345
        .trainerName = _("KEIRA"),
#line 1346
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1347
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1348
F_TRAINER_FEMALE | 
#line 1349
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1350
        .items = { ITEM_FULL_RESTORE },
#line 1351
        .doubleBattle = FALSE,
#line 1352
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1354
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1356
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1355
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1358
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1360
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1359
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1362
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 1363
        .trainerName = _("BROOKE"),
#line 1364
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1365
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1366
F_TRAINER_FEMALE | 
#line 1367
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1368
        .items = { ITEM_SUPER_POTION },
#line 1369
        .doubleBattle = FALSE,
#line 1370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1372
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1373
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1376
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1377
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1380
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1382
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1381
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1384
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1385
        .trainerName = _("JENNIFER"),
#line 1386
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1387
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1388
F_TRAINER_FEMALE | 
#line 1389
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1390
        .items = { ITEM_FULL_RESTORE },
#line 1391
        .doubleBattle = FALSE,
#line 1392
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1394
            .species = SPECIES_DUOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1396
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1395
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1398
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1399
        .trainerName = _("HOPE"),
#line 1400
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1401
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1402
F_TRAINER_FEMALE | 
#line 1403
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1404
        .items = { ITEM_FULL_RESTORE },
#line 1405
        .doubleBattle = FALSE,
#line 1406
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1408
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1409
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1412
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1413
        .trainerName = _("SHANNON"),
#line 1414
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1415
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1416
F_TRAINER_FEMALE | 
#line 1417
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1418
        .items = { ITEM_FULL_RESTORE },
#line 1419
        .doubleBattle = FALSE,
#line 1420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1422
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1424
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1423
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1426
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1427
        .trainerName = _("MICHELLE"),
#line 1428
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1429
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1430
F_TRAINER_FEMALE | 
#line 1431
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1432
        .items = { ITEM_FULL_RESTORE },
#line 1433
        .doubleBattle = FALSE,
#line 1434
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1436
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1438
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1437
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1440
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1442
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1441
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1444
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1446
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1445
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1448
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1449
        .trainerName = _("CAROLINE"),
#line 1450
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1451
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1452
F_TRAINER_FEMALE | 
#line 1453
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1454
        .items = { ITEM_FULL_RESTORE },
#line 1455
        .doubleBattle = FALSE,
#line 1456
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1458
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1459
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1462
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1464
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1463
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1466
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1467
        .trainerName = _("JULIE"),
#line 1468
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1469
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1470
F_TRAINER_FEMALE | 
#line 1471
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1472
        .items = { ITEM_FULL_RESTORE },
#line 1473
        .doubleBattle = FALSE,
#line 1474
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1476
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1478
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1477
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1480
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1482
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1481
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1484
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1486
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1485
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1488
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1489
        .trainerName = _("PATRICIA"),
#line 1490
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1491
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1492
F_TRAINER_FEMALE | 
#line 1493
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1494
        .doubleBattle = FALSE,
#line 1495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1497
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1498
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1501
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1502
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1505
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1506
        .trainerName = _("KINDRA"),
#line 1507
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1508
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1509
F_TRAINER_FEMALE | 
#line 1510
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1511
        .doubleBattle = FALSE,
#line 1512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1514
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1515
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1518
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1519
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1522
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1523
        .trainerName = _("TAMMY"),
#line 1524
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1525
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1526
F_TRAINER_FEMALE | 
#line 1527
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1528
        .doubleBattle = FALSE,
#line 1529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1531
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1532
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1535
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1536
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1539
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 1540
        .trainerName = _("VALERIE"),
#line 1541
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1542
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1543
F_TRAINER_FEMALE | 
#line 1544
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1545
        .doubleBattle = FALSE,
#line 1546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1548
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1549
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1552
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1553
        .trainerName = _("TASHA"),
#line 1554
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1555
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1556
F_TRAINER_FEMALE | 
#line 1557
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1558
        .doubleBattle = FALSE,
#line 1559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1561
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1563
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1562
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1565
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 1566
        .trainerName = _("CINDY"),
#line 1567
        .trainerClass = TRAINER_CLASS_LADY,
#line 1568
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1569
F_TRAINER_FEMALE | 
#line 1570
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1571
        .items = { ITEM_FULL_RESTORE },
#line 1572
        .doubleBattle = FALSE,
#line 1573
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1575
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1575
            .heldItem = ITEM_NUGGET,
#line 1577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1576
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1579
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1580
        .trainerName = _("DAPHNE"),
#line 1581
        .trainerClass = TRAINER_CLASS_LADY,
#line 1582
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1583
F_TRAINER_FEMALE | 
#line 1584
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1585
        .items = { ITEM_FULL_RESTORE },
#line 1586
        .doubleBattle = FALSE,
#line 1587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1589
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1589
            .heldItem = ITEM_FOCUS_SASH,
#line 1591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1590
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1593
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1593
            .heldItem = ITEM_FOCUS_SASH,
#line 1595
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1594
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1597
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1598
        .trainerName = _("GRUNT"),
#line 1599
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1600
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1602
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1603
        .doubleBattle = FALSE,
#line 1604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1606
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1607
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1610
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1611
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1614
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1615
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1618
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1619
        .trainerName = _("SHEILA"),
#line 1620
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1621
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1622
F_TRAINER_FEMALE | 
#line 1623
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1624
        .doubleBattle = FALSE,
#line 1625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1627
            .species = SPECIES_ZEBSTRIKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1628
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1631
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1632
        .trainerName = _("SHIRLEY"),
#line 1633
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1634
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1635
F_TRAINER_FEMALE | 
#line 1636
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1637
        .doubleBattle = FALSE,
#line 1638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1640
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1641
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1644
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 1645
        .trainerName = _("JESSICA"),
#line 1646
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1647
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1648
F_TRAINER_FEMALE | 
#line 1649
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1650
        .doubleBattle = FALSE,
#line 1651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1653
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1654
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1657
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1658
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1662
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1663
        .trainerName = _("CONNIE"),
#line 1664
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1665
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1666
F_TRAINER_FEMALE | 
#line 1667
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1668
        .doubleBattle = FALSE,
#line 1669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1671
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1673
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1672
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1675
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1676
        .trainerName = _("BRIDGET"),
#line 1677
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1678
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1679
F_TRAINER_FEMALE | 
#line 1680
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1681
        .doubleBattle = FALSE,
#line 1682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1684
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1686
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1685
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1688
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1689
        .trainerName = _("BRIANNA"),
#line 1690
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1691
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1692
F_TRAINER_FEMALE | 
#line 1693
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1694
        .doubleBattle = FALSE,
#line 1695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1697
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1699
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1698
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1701
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1702
        .trainerName = _("OLIVIA"),
#line 1703
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1704
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1705
F_TRAINER_FEMALE | 
#line 1706
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1707
        .doubleBattle = FALSE,
#line 1708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1710
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1712
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1711
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1714
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1716
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1715
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1718
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1720
            .iv = TRAINER_PARTY_IVS(12, 31, 12, 12, 12, 12),
#line 1719
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1722
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1723
        .trainerName = _("TIFFANY"),
#line 1724
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1725
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1726
F_TRAINER_FEMALE | 
#line 1727
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1728
        .doubleBattle = FALSE,
#line 1729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1731
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1733
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1732
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1735
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1737
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1736
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1739
    [DIFFICULTY_NORMAL][TRAINER_WINSTON] =
    {
#line 1740
        .trainerName = _("WINSTON"),
#line 1741
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1742
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1744
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1745
        .items = { ITEM_FULL_RESTORE },
#line 1746
        .doubleBattle = FALSE,
#line 1747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1749
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1749
            .heldItem = ITEM_NUGGET,
#line 1751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1750
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1753
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1754
        .trainerName = _("MOLLIE"),
#line 1755
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1756
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1757
F_TRAINER_FEMALE | 
#line 1758
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1759
        .doubleBattle = FALSE,
#line 1760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1762
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1763
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1766
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1768
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1767
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1770
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1771
        .trainerName = _("GARRET"),
#line 1772
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1773
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1775
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1776
        .items = { ITEM_FULL_RESTORE },
#line 1777
        .doubleBattle = FALSE,
#line 1778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1780
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1780
            .heldItem = ITEM_NUGGET,
#line 1782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1781
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1784
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1785
        .trainerName = _("STEVE"),
#line 1786
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1787
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1789
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1790
        .doubleBattle = FALSE,
#line 1791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1793
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1794
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1797
    [DIFFICULTY_NORMAL][TRAINER_THALIA] =
    {
#line 1798
        .trainerName = _("THALIA"),
#line 1799
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1800
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1801
F_TRAINER_FEMALE | 
#line 1802
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1803
        .doubleBattle = FALSE,
#line 1804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1806
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1807
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1810
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1811
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1814
    [DIFFICULTY_NORMAL][TRAINER_MARCUS] =
    {
#line 1815
        .trainerName = _("MARCUS"),
#line 1816
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1817
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1819
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1820
        .doubleBattle = FALSE,
#line 1821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1823
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1824
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1827
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1828
        .trainerName = _("GRUNT"),
#line 1829
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1830
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1831
F_TRAINER_FEMALE | 
#line 1832
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1833
        .doubleBattle = FALSE,
#line 1834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1836
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1837
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1840
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1841
        .trainerName = _("LUIS"),
#line 1842
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1843
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1845
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1846
        .doubleBattle = FALSE,
#line 1847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1849
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1850
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1853
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1854
        .trainerName = _("DOMINIK"),
#line 1855
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1856
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1858
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1859
        .doubleBattle = FALSE,
#line 1860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1862
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1863
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1866
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1867
        .trainerName = _("DOUGLAS"),
#line 1868
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1869
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1871
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1872
        .doubleBattle = FALSE,
#line 1873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1875
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1877
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1876
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1879
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1881
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1880
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1883
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1884
        .trainerName = _("DARRIN"),
#line 1885
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1886
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1888
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1889
        .doubleBattle = FALSE,
#line 1890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1892
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1894
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1893
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1896
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1898
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1897
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1900
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1902
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1901
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1904
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 1905
        .trainerName = _("TONY"),
#line 1906
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1907
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1909
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1910
        .doubleBattle = FALSE,
#line 1911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1913
            .species = SPECIES_RAMPARDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1914
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1917
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1918
        .trainerName = _("JEROME"),
#line 1919
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1920
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1922
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1923
        .doubleBattle = FALSE,
#line 1924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1926
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1927
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1930
    [DIFFICULTY_NORMAL][TRAINER_MATTI] =
    {
#line 1931
        .trainerName = _("MATTI"),
#line 1932
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1933
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1935
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1936
        .doubleBattle = FALSE,
#line 1937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1939
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1940
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1943
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 1944
        .trainerName = _("DAVID"),
#line 1945
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1946
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1948
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1949
        .doubleBattle = FALSE,
#line 1950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1952
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1953
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1956
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1957
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1960
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 1961
        .trainerName = _("SPENCER"),
#line 1962
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1963
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1965
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1966
        .doubleBattle = FALSE,
#line 1967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1969
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1970
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1973
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1974
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1977
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 1978
        .trainerName = _("ROLAND"),
#line 1979
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1980
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1982
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1983
        .doubleBattle = FALSE,
#line 1984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1986
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1987
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1990
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 1991
        .trainerName = _("NOLEN"),
#line 1992
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1993
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1995
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1996
        .doubleBattle = FALSE,
#line 1997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1999
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2000
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2003
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 2004
        .trainerName = _("STAN"),
#line 2005
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2006
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2008
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2009
        .doubleBattle = FALSE,
#line 2010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2012
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2013
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2016
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2017
        .trainerName = _("BARRY"),
#line 2018
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2019
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2021
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2022
        .doubleBattle = FALSE,
#line 2023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2025
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2026
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2029
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2030
        .trainerName = _("DEAN"),
#line 2031
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2032
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2034
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2035
        .doubleBattle = FALSE,
#line 2036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2038
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2039
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2042
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2043
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2046
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2047
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2050
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2051
        .trainerName = _("RODNEY"),
#line 2052
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2053
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2055
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2056
        .doubleBattle = FALSE,
#line 2057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2059
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2060
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2063
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2064
        .trainerName = _("RICHARD"),
#line 2065
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2066
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2068
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2069
        .doubleBattle = FALSE,
#line 2070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2072
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2073
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2076
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2077
        .trainerName = _("HERMAN"),
#line 2078
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2079
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2081
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2082
        .doubleBattle = FALSE,
#line 2083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2085
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2086
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2089
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2090
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2093
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2094
        .trainerName = _("SANTIAGO"),
#line 2095
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2096
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2098
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2099
        .doubleBattle = FALSE,
#line 2100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2102
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2103
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2106
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2107
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2110
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2111
        .trainerName = _("GILBERT"),
#line 2112
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2113
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2115
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2116
        .doubleBattle = FALSE,
#line 2117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2119
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2120
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2123
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2124
        .trainerName = _("FRANKLIN"),
#line 2125
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2126
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2128
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2129
        .doubleBattle = FALSE,
#line 2130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2132
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2133
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2136
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2137
        .trainerName = _("KEVIN"),
#line 2138
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2139
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2141
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2142
        .doubleBattle = FALSE,
#line 2143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2145
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2146
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2149
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2150
        .trainerName = _("JACK"),
#line 2151
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2152
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2154
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2155
        .doubleBattle = FALSE,
#line 2156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2158
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2159
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2162
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2163
        .trainerName = _("DUDLEY"),
#line 2164
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2165
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2167
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2168
        .doubleBattle = FALSE,
#line 2169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2171
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2172
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2175
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2176
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2179
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2180
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2183
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2184
        .trainerName = _("CHAD"),
#line 2185
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2186
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2188
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2189
        .doubleBattle = FALSE,
#line 2190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2192
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2193
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2196
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2197
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2200
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2201
        .trainerName = _("TAKAO"),
#line 2202
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2203
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2205
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2206
        .doubleBattle = FALSE,
#line 2207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2209
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2211
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2210
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2213
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2214
        .trainerName = _("HITOSHI"),
#line 2215
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2216
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2218
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2219
        .doubleBattle = FALSE,
#line 2220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2222
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2224
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2223
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2226
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2228
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2227
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2230
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2231
        .trainerName = _("KIYO"),
#line 2232
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2233
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2235
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2236
        .doubleBattle = FALSE,
#line 2237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2239
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2241
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2240
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2243
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2244
        .trainerName = _("KOICHI"),
#line 2245
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2246
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2248
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2249
        .doubleBattle = FALSE,
#line 2250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2252
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2253
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2256
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2258
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2257
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2260
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 2261
        .trainerName = _("NOB"),
#line 2262
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2263
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2265
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2266
        .doubleBattle = FALSE,
#line 2267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2269
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2271
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2270
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2273
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2274
        .trainerName = _("YUJI"),
#line 2275
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2276
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2278
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2279
        .doubleBattle = FALSE,
#line 2280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2282
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2284
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2283
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2286
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2287
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2290
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2291
        .trainerName = _("DAISUKE"),
#line 2292
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2293
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2295
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2296
        .doubleBattle = FALSE,
#line 2297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2299
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2300
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2303
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2304
        .trainerName = _("ATSUSHI"),
#line 2305
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2306
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2308
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2309
        .doubleBattle = FALSE,
#line 2310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2312
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2314
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2313
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2316
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2317
        .trainerName = _("KIRK"),
#line 2318
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2319
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2321
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2322
        .doubleBattle = FALSE,
#line 2323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2325
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2327
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2326
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2329
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2331
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2330
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2333
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2334
        .trainerName = _("GRUNT"),
#line 2335
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2336
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2337
F_TRAINER_FEMALE | 
#line 2338
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2339
        .doubleBattle = FALSE,
#line 2340
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2342
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2343
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2346
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2347
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2350
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2351
        .trainerName = _("GRUNT"),
#line 2352
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2353
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2355
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2356
        .doubleBattle = FALSE,
#line 2357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2359
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2360
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2363
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2364
        .trainerName = _("SHAWN"),
#line 2365
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2366
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2368
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2369
        .doubleBattle = FALSE,
#line 2370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2372
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2373
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2376
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2378
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2377
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2380
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO] =
    {
#line 2381
        .trainerName = _("FERNANDO"),
#line 2382
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2383
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2385
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2386
        .doubleBattle = FALSE,
#line 2387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2389
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2390
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2393
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2394
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2397
    [DIFFICULTY_NORMAL][TRAINER_DALTON] =
    {
#line 2398
        .trainerName = _("DALTON"),
#line 2399
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2400
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2402
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2403
        .doubleBattle = FALSE,
#line 2404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2406
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2407
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2410
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2411
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2414
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2415
        .trainerName = _("COLE"),
#line 2416
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2417
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2419
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2420
        .doubleBattle = FALSE,
#line 2421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2423
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2425
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2424
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2427
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2428
        .trainerName = _("JEFF"),
#line 2429
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2430
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2432
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2433
        .doubleBattle = FALSE,
#line 2434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2436
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2438
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2437
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2440
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2442
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2441
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2444
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2445
        .trainerName = _("AXLE"),
#line 2446
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2447
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2449
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2450
        .doubleBattle = FALSE,
#line 2451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2453
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2454
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2456
                MOVE_DRAGON_PULSE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2460
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2461
        .trainerName = _("JACE"),
#line 2462
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2463
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2465
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2466
        .doubleBattle = FALSE,
#line 2467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2469
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2471
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2470
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2473
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2474
        .trainerName = _("KEEGAN"),
#line 2475
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2476
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2478
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2479
        .doubleBattle = FALSE,
#line 2480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2482
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2484
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2483
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2485
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_BREATH,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 2489
    [DIFFICULTY_NORMAL][TRAINER_BERNIE] =
    {
#line 2490
        .trainerName = _("BERNIE"),
#line 2491
        .trainerClass = TRAINER_CLASS_GAMER,
#line 2492
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2494
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2495
        .doubleBattle = FALSE,
#line 2496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2498
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2499
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2502
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2503
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2506
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2507
        .trainerName = _("DREW"),
#line 2508
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2509
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2511
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2512
        .doubleBattle = FALSE,
#line 2513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2515
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2516
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2519
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2520
        .trainerName = _("BEAU"),
#line 2521
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2522
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2524
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2525
        .doubleBattle = FALSE,
#line 2526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2528
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2529
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2532
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2533
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2536
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2537
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2541
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2542
        .trainerName = _("LARRY"),
#line 2543
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2544
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2546
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2547
        .doubleBattle = FALSE,
#line 2548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2550
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2551
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2554
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2555
        .trainerName = _("SHANE"),
#line 2556
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2557
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2559
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2560
        .doubleBattle = FALSE,
#line 2561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2563
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2564
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2567
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2568
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2571
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2572
        .trainerName = _("JUSTIN"),
#line 2573
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2574
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2576
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2577
        .doubleBattle = FALSE,
#line 2578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2580
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2581
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2584
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2585
        .trainerName = _("ETHAN"),
#line 2586
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2587
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2589
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2590
        .doubleBattle = FALSE,
#line 2591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2593
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2594
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2597
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2598
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2601
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2602
        .trainerName = _("AUTUMN"),
#line 2603
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2604
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2605
F_TRAINER_FEMALE | 
#line 2606
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2607
        .doubleBattle = FALSE,
#line 2608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2610
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2611
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2614
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2615
        .trainerName = _("TRAVIS"),
#line 2616
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2617
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2619
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2620
        .doubleBattle = FALSE,
#line 2621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2623
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2624
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2627
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2628
        .trainerName = _("BRENT"),
#line 2629
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2630
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2632
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2633
        .doubleBattle = FALSE,
#line 2634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2636
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2638
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2637
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2640
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2641
        .trainerName = _("DONALD"),
#line 2642
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2643
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2645
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2646
        .doubleBattle = FALSE,
#line 2647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2649
            .species = SPECIES_WATCHOG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2651
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2650
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2653
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2655
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2654
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2657
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2659
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2658
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2661
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2662
        .trainerName = _("TAYLOR"),
#line 2663
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2664
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2666
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2667
        .doubleBattle = FALSE,
#line 2668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2670
            .species = SPECIES_CRUSTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2672
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2671
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2674
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2676
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2675
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2678
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2680
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2679
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2682
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 2683
        .trainerName = _("JEFFREY"),
#line 2684
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2685
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2687
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2688
        .doubleBattle = FALSE,
#line 2689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2691
            .species = SPECIES_BEHEEYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2692
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2695
            .species = SPECIES_VESPIQUEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2696
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2699
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2700
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2703
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2704
        .trainerName = _("DEREK"),
#line 2705
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2706
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2708
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2709
        .doubleBattle = FALSE,
#line 2710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2712
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2714
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2713
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2716
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2718
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2717
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2720
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2721
        .trainerName = _("EDWARD"),
#line 2722
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2723
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2725
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2726
        .doubleBattle = FALSE,
#line 2727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2729
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2730
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2733
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2734
        .trainerName = _("PRESTON"),
#line 2735
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2736
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2738
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2739
        .doubleBattle = FALSE,
#line 2740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2742
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2744
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2743
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2746
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2747
        .trainerName = _("VIRGIL"),
#line 2748
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2749
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2751
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2752
        .doubleBattle = FALSE,
#line 2753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2755
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2757
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2756
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2759
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2760
        .trainerName = _("BLAKE"),
#line 2761
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2762
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2764
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2765
        .doubleBattle = FALSE,
#line 2766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2768
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2770
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2769
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2772
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2773
        .trainerName = _("WILLIAM"),
#line 2774
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2775
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2777
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2778
        .doubleBattle = FALSE,
#line 2779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2781
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2782
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2785
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2786
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2789
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2790
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2793
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2794
        .trainerName = _("JOSHUA"),
#line 2795
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2796
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2798
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2799
        .doubleBattle = FALSE,
#line 2800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2802
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2803
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2806
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2807
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2810
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 2811
        .trainerName = _("CAMERON"),
#line 2812
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2813
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2815
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2816
        .doubleBattle = FALSE,
#line 2817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2819
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2820
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2823
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2824
        .trainerName = _("JACLYN"),
#line 2825
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2826
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2827
F_TRAINER_FEMALE | 
#line 2828
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2829
        .doubleBattle = FALSE,
#line 2830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2832
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2833
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2836
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2837
        .trainerName = _("HANNAH"),
#line 2838
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2839
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2840
F_TRAINER_FEMALE | 
#line 2841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2842
        .doubleBattle = FALSE,
#line 2843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2845
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2847
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2846
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2849
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2850
        .trainerName = _("SAMANTHA"),
#line 2851
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2852
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2853
F_TRAINER_FEMALE | 
#line 2854
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2855
        .doubleBattle = FALSE,
#line 2856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2858
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2860
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2859
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2862
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2863
        .trainerName = _("MAURA"),
#line 2864
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2865
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2866
F_TRAINER_FEMALE | 
#line 2867
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2868
        .doubleBattle = FALSE,
#line 2869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2871
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2873
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2872
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2875
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2876
        .trainerName = _("KAYLA"),
#line 2877
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2878
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2879
F_TRAINER_FEMALE | 
#line 2880
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2881
        .doubleBattle = FALSE,
#line 2882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2884
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2885
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2888
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2889
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2892
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2893
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2896
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2897
        .trainerName = _("ALEXIS"),
#line 2898
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2899
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2900
F_TRAINER_FEMALE | 
#line 2901
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2902
        .doubleBattle = FALSE,
#line 2903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2905
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2906
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2909
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2910
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2913
    [DIFFICULTY_NORMAL][TRAINER_JACKI] =
    {
#line 2914
        .trainerName = _("JACKI"),
#line 2915
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2916
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2917
F_TRAINER_FEMALE | 
#line 2918
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2919
        .doubleBattle = FALSE,
#line 2920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2922
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2923
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2926
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2927
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2930
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 2931
        .trainerName = _("WALTER"),
#line 2932
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2933
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2935
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2936
        .doubleBattle = FALSE,
#line 2937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2939
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2940
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2943
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 2944
        .trainerName = _("MICAH"),
#line 2945
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2946
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2948
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2949
        .doubleBattle = FALSE,
#line 2950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2952
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2953
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2956
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2957
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2960
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 2961
        .trainerName = _("THOMAS"),
#line 2962
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2963
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2965
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2966
        .doubleBattle = FALSE,
#line 2967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2969
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2970
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2973
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 2974
        .trainerName = _("MATT"),
#line 2975
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2976
        .trainerPic = TRAINER_PIC_SALON_MAIDEN_ANABEL,
        .encounterMusic_gender =
#line 2978
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2979
        .doubleBattle = FALSE,
#line 2980
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2981
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2983
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2983
            .heldItem = ITEM_CHOICE_SPECS,
#line 2987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2984
            .ability = ABILITY_SCRAPPY,
#line 2985
            .lvl = 75,
#line 2986
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2987
                MOVE_BOOMBURST,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 2992
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .heldItem = ITEM_CHOICE_BAND,
#line 2996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2993
            .ability = ABILITY_KEEN_EYE,
#line 2994
            .lvl = 75,
#line 2995
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2996
                MOVE_BRICK_BREAK,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3001
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3001
            .heldItem = ITEM_THROAT_SPRAY,
#line 3005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3002
            .ability = ABILITY_BIG_PECKS,
#line 3003
            .lvl = 75,
#line 3004
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3005
                MOVE_SING,
                MOVE_PARTING_SHOT,
                MOVE_BOOMBURST,
                MOVE_ROOST,
            },
            },
            {
#line 3010
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3010
            .heldItem = ITEM_CHOICE_SCARF,
#line 3014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3011
            .ability = ABILITY_SHARPNESS,
#line 3012
            .lvl = 75,
#line 3013
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3014
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_KNOCK_OFF,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3019
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3019
            .heldItem = ITEM_LEFTOVERS,
#line 3023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3020
            .ability = ABILITY_SERENE_GRACE,
#line 3021
            .lvl = 75,
#line 3022
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3023
                MOVE_RELIC_SONG,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
            },
            },
            {
#line 3028
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3028
            .heldItem = ITEM_ROCKY_HELMET,
#line 3032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3029
            .ability = ABILITY_CUTE_CHARM,
#line 3030
            .lvl = 75,
#line 3031
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3032
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_PUNCH,
                MOVE_BODY_SLAM,
                MOVE_SPIRIT_BREAK,
            },
            },
        },
    },
#line 3038
    [DIFFICULTY_NORMAL][TRAINER_OZ] =
    {
#line 3039
        .trainerName = _("OZ"),
#line 3040
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3041
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3043
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3044
        .doubleBattle = FALSE,
#line 3045
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3046
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3048
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3048
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3049
            .ability = ABILITY_SNIPER,
#line 3050
            .lvl = 75,
#line 3052
            .nature = NATURE_JOLLY,
#line 3051
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3053
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3058
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3058
            .heldItem = ITEM_LEFTOVERS,
#line 3063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3059
            .ability = ABILITY_FLAME_BODY,
#line 3060
            .lvl = 75,
#line 3062
            .nature = NATURE_TIMID,
#line 3061
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3063
                MOVE_QUIVER_DANCE,
                MOVE_FIERY_DANCE,
                MOVE_MORNING_SUN,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 3068
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3068
            .heldItem = ITEM_CHOICE_SPECS,
#line 3073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3069
            .ability = ABILITY_TINTED_LENS,
#line 3070
            .lvl = 75,
#line 3072
            .nature = NATURE_MODEST,
#line 3071
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3073
                MOVE_BUG_BUZZ,
                MOVE_AIR_SLASH,
                MOVE_HIDDEN_POWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3078
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3078
            .heldItem = ITEM_CHOICE_BAND,
#line 3083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3079
            .ability = ABILITY_TECHNICIAN,
#line 3080
            .lvl = 75,
#line 3082
            .nature = NATURE_ADAMANT,
#line 3081
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3083
                MOVE_CLOSE_COMBAT,
                MOVE_BULLET_PUNCH,
                MOVE_U_TURN,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3088
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3088
            .heldItem = ITEM_CHESTO_BERRY,
#line 3093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3089
            .ability = ABILITY_CONTRARY,
#line 3090
            .lvl = 75,
#line 3092
            .nature = NATURE_BOLD,
#line 3091
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3093
                MOVE_REST,
                MOVE_SHELL_SMASH,
                MOVE_BODY_PRESS,
                MOVE_INFESTATION,
            },
            },
            {
#line 3098
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3098
            .heldItem = ITEM_ASSAULT_VEST,
#line 3103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3099
            .ability = ABILITY_OVERCOAT,
#line 3100
            .lvl = 75,
#line 3102
            .nature = NATURE_ADAMANT,
#line 3101
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3103
                MOVE_LEECH_LIFE,
                MOVE_LEAF_STORM,
                MOVE_TRIPLE_AXEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 3108
    [DIFFICULTY_NORMAL][TRAINER_DIEGO] =
    {
#line 3109
        .trainerName = _("DIEGO"),
#line 3110
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3111
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3113
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3114
        .doubleBattle = FALSE,
#line 3115
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3116
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3118
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3118
            .heldItem = ITEM_LEFTOVERS,
#line 3122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3119
            .ability = ABILITY_DROUGHT,
#line 3120
            .lvl = 75,
#line 3121
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3122
                MOVE_SPIKES,
                MOVE_PRECIPICE_BLADES,
                MOVE_STEALTH_ROCK,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 3127
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .heldItem = ITEM_MUSCLE_BAND,
#line 3131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3128
            .ability = ABILITY_FLAME_BODY,
#line 3129
            .lvl = 75,
#line 3130
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3131
                MOVE_PLAY_ROUGH,
                MOVE_MEGAHORN,
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
            },
            },
            {
#line 3136
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3136
            .heldItem = ITEM_LIFE_ORB,
#line 3140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3137
            .ability = ABILITY_SPEED_BOOST,
#line 3138
            .lvl = 75,
#line 3139
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3140
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3146
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3146
            .heldItem = ITEM_ASSAULT_VEST,
#line 3150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3147
            .ability = ABILITY_BLAZE,
#line 3148
            .lvl = 75,
#line 3149
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3150
                MOVE_SCORCHING_SANDS,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 3156
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3156
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3157
            .ability = ABILITY_LEVITATE,
#line 3158
            .lvl = 75,
#line 3159
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3160
                MOVE_OVERHEAT,
                MOVE_VOLT_SWITCH,
                MOVE_WILL_O_WISP,
                MOVE_HEX,
            },
            },
            {
#line 3166
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3166
            .heldItem = ITEM_CHOICE_SPECS,
#line 3170
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3167
            .ability = ABILITY_INFILTRATOR,
#line 3168
            .lvl = 75,
#line 3169
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3170
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_TRICK,
            },
            },
        },
    },
#line 3176
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3177
        .trainerName = _("DRAKE"),
#line 3178
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3179
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3181
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3182
        .doubleBattle = FALSE,
#line 3183
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3184
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3186
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3186
            .heldItem = ITEM_LIFE_ORB,
#line 3190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3187
            .ability = ABILITY_SHEER_FORCE,
#line 3188
            .lvl = 75,
#line 3189
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3190
                MOVE_CRUNCH,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 3195
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .heldItem = ITEM_ASSAULT_VEST,
#line 3199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3196
            .ability = ABILITY_UNNERVE,
#line 3197
            .lvl = 75,
#line 3198
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3199
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3204
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3204
            .heldItem = ITEM_CHOICE_BAND,
#line 3208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3205
            .ability = ABILITY_PRESSURE,
#line 3206
            .lvl = 75,
#line 3207
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3208
                MOVE_AERIAL_ACE,
                MOVE_ICE_SPINNER,
                MOVE_DIRE_CLAW,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3213
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3213
            .heldItem = ITEM_CHOICE_SPECS,
#line 3217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3214
            .ability = ABILITY_LEVITATE,
#line 3215
            .lvl = 75,
#line 3216
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3217
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3222
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .heldItem = ITEM_ROCKY_HELMET,
#line 3226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3223
            .ability = ABILITY_INTIMIDATE,
#line 3224
            .lvl = 75,
#line 3225
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3226
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_FANG,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 3231
            .species = SPECIES_GIRATINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3231
            .heldItem = ITEM_LEFTOVERS,
#line 3235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3232
            .ability = ABILITY_PRESSURE,
#line 3233
            .lvl = 75,
#line 3234
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3235
                MOVE_POLTERGEIST,
                MOVE_OUTRAGE,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3240
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_LG] =
    {
#line 3241
        .trainerName = _("DRAKE"),
#line 3242
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3243
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3245
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3246
        .doubleBattle = FALSE,
#line 3247
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3248
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3250
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .heldItem = ITEM_LIFE_ORB,
#line 3254
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 0, 0, 252),
#line 3255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3251
            .ability = ABILITY_SHEER_FORCE,
#line 3252
            .lvl = 80,
#line 3253
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3255
                MOVE_THUNDER_PUNCH,
                MOVE_EARTHQUAKE,
                MOVE_POISON_JAB,
                MOVE_BITE,
            },
            },
            {
#line 3260
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .heldItem = ITEM_ASSAULT_VEST,
#line 3264
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 4, 0, 0),
#line 3265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3261
            .ability = ABILITY_ANGER_SHELL,
#line 3262
            .lvl = 80,
#line 3263
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3265
                MOVE_JET_PUNCH,
                MOVE_WAVE_CRASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_BRICK_BREAK,
            },
            },
            {
#line 3270
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3270
            .heldItem = ITEM_LEFTOVERS,
#line 3274
            .ev = TRAINER_PARTY_EVS(0, 0, 252, 0, 4, 252),
#line 3275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3271
            .ability = ABILITY_MAGIC_GUARD,
#line 3272
            .lvl = 80,
#line 3273
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3275
                MOVE_SPARKLY_SWIRL,
                MOVE_CALM_MIND,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 3280
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .heldItem = ITEM_LUM_BERRY,
#line 3285
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 3286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3281
            .ability = ABILITY_INNER_FOCUS,
#line 3282
            .lvl = 80,
#line 3284
            .nature = NATURE_ADAMANT,
#line 3283
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3286
                MOVE_OUTRAGE,
                MOVE_DRAGON_ASCENT,
                MOVE_TEMPER_FLARE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3291
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3291
            .heldItem = ITEM_CHOICE_SPECS,
#line 3295
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 3296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3292
            .ability = ABILITY_REFRIGERATE,
#line 3293
            .lvl = 80,
#line 3294
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3296
                MOVE_TRI_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_GLACIATE,
            },
            },
            {
#line 3301
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3301
            .heldItem = ITEM_AIR_BALLOON,
#line 3305
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 3306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3302
            .ability = ABILITY_VOLT_ABSORB,
#line 3303
            .lvl = 80,
#line 3304
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3306
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_THUNDERBOLT,
                MOVE_ENERGY_BALL,
            },
            },
        },
    },
#line 3311
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_EM] =
    {
#line 3312
        .trainerName = _("DRAKE"),
#line 3313
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3314
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3316
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3317
        .doubleBattle = FALSE,
#line 3318
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3319
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3321
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3321
            .heldItem = ITEM_ASSAULT_VEST,
#line 3325
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 6, 252),
#line 3326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3322
            .ability = ABILITY_DRIZZLE,
#line 3323
            .lvl = 80,
#line 3324
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3326
                MOVE_WATER_SPOUT,
                MOVE_BLIZZARD,
                MOVE_THUNDER,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 3331
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3331
            .heldItem = ITEM_ROCKY_HELMET,
#line 3335
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3332
            .ability = ABILITY_ROUGH_SKIN,
#line 3333
            .lvl = 80,
#line 3334
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3336
                MOVE_POISON_FANG,
                MOVE_CRUNCH,
                MOVE_LIQUIDATION,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3341
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3341
            .heldItem = ITEM_LIFE_ORB,
#line 3345
            .ev = TRAINER_PARTY_EVS(0, 0, 6, 252, 252, 0),
#line 3346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3342
            .ability = ABILITY_COMPETITIVE,
#line 3343
            .lvl = 80,
#line 3344
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3346
                MOVE_SPRINGTIDE_STORM,
                MOVE_WEATHER_BALL,
                MOVE_SCALD,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3351
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3351
            .heldItem = ITEM_MUSCLE_BAND,
#line 3355
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 6, 0, 0),
#line 3356
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3352
            .ability = ABILITY_SWIFT_SWIM,
#line 3353
            .lvl = 80,
#line 3354
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3356
                MOVE_THUNDER_PUNCH,
                MOVE_SWORDS_DANCE,
                MOVE_LIQUIDATION,
                MOVE_WOOD_HAMMER,
            },
            },
            {
#line 3361
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3361
            .heldItem = ITEM_FOCUS_SASH,
#line 3365
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3362
            .ability = ABILITY_DRIZZLE,
#line 3363
            .lvl = 80,
#line 3364
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3366
                MOVE_TAILWIND,
                MOVE_HURRICANE,
                MOVE_FEATHER_DANCE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 3371
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3371
            .heldItem = ITEM_SCOPE_LENS,
#line 3375
            .ev = TRAINER_PARTY_EVS(6, 0, 0, 252, 252, 0),
#line 3376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3372
            .ability = ABILITY_SNIPER,
#line 3373
            .lvl = 80,
#line 3374
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3376
                MOVE_SNIPE_SHOT,
                MOVE_DRACO_METEOR,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
            },
            },
        },
    },
#line 3381
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_PT] =
    {
#line 3382
        .trainerName = _("DRAKE"),
#line 3383
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3384
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3386
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3387
        .doubleBattle = FALSE,
#line 3388
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3389
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3391
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .heldItem = ITEM_ROCKY_HELMET,
#line 3395
            .ev = TRAINER_PARTY_EVS(252, 0, 142, 0, 0, 114),
#line 3396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3392
            .ability = ABILITY_COMPETITIVE,
#line 3393
            .lvl = 80,
#line 3394
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3396
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICY_WIND,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3401
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3401
            .heldItem = ITEM_CHOICE_SCARF,
#line 3405
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 80, 252, 176),
#line 3406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3402
            .ability = ABILITY_FLAME_BODY,
#line 3403
            .lvl = 80,
#line 3404
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3406
                MOVE_ARMOR_CANNON,
                MOVE_FIERY_WRATH,
                MOVE_SCORCHING_SANDS,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 3411
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .heldItem = ITEM_LIFE_ORB,
#line 3415
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3412
            .ability = ABILITY_MOTOR_DRIVE,
#line 3413
            .lvl = 80,
#line 3414
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3416
                MOVE_CLOSE_COMBAT,
                MOVE_SUPERCELL_SLAM,
                MOVE_FAKE_OUT,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3421
            .species = SPECIES_CRESSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3421
            .heldItem = ITEM_LEFTOVERS,
#line 3425
            .ev = TRAINER_PARTY_EVS(252, 0, 4, 0, 0, 252),
#line 3426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3422
            .ability = ABILITY_LEVITATE,
#line 3423
            .lvl = 80,
#line 3424
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3426
                MOVE_MOONBLAST,
                MOVE_LUMINA_CRASH,
                MOVE_CALM_MIND,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 3431
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3431
            .heldItem = ITEM_ASSAULT_VEST,
#line 3435
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3432
            .ability = ABILITY_SERENE_GRACE,
#line 3433
            .lvl = 80,
#line 3434
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3436
                MOVE_AIR_SLASH,
                MOVE_FIERY_DANCE,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 3441
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .heldItem = ITEM_CHOICE_BAND,
#line 3445
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3442
            .ability = ABILITY_SLUSH_RUSH,
#line 3443
            .lvl = 80,
#line 3444
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_AERIAL_ACE,
                MOVE_ICE_SPINNER,
                MOVE_DIRE_CLAW,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3451
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_SS] =
    {
#line 3452
        .trainerName = _("DRAKE"),
#line 3453
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3454
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3456
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3457
        .doubleBattle = FALSE,
#line 3458
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3459
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3461
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3461
            .heldItem = ITEM_CHOICE_SPECS,
#line 3465
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .ability = ABILITY_FLASH_FIRE,
#line 3463
            .lvl = 80,
#line 3464
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3466
                MOVE_SEARING_SHOT,
                MOVE_INFERNAL_PARADE,
                MOVE_ENERGY_BALL,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3471
            .species = SPECIES_LUGIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3471
            .heldItem = ITEM_LEFTOVERS,
#line 3475
            .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
#line 3476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3472
            .ability = ABILITY_MULTISCALE,
#line 3473
            .lvl = 80,
#line 3474
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3476
                MOVE_AEROBLAST,
                MOVE_ESPER_WING,
                MOVE_DRAGON_PULSE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3481
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3481
            .heldItem = ITEM_MUSCLE_BAND,
#line 3485
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3482
            .ability = ABILITY_SHARPNESS,
#line 3483
            .lvl = 80,
#line 3484
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3486
                MOVE_AQUA_CUTTER,
                MOVE_STONE_AXE,
                MOVE_CEASELESS_EDGE,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 3491
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3491
            .heldItem = ITEM_ASSAULT_VEST,
#line 3495
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 3496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3492
            .ability = ABILITY_INNER_FOCUS,
#line 3493
            .lvl = 80,
#line 3494
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3496
                MOVE_NIGHT_SHADE,
                MOVE_MOONBLAST,
                MOVE_SHADOW_BALL,
                MOVE_LUMINA_CRASH,
            },
            },
            {
#line 3501
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3501
            .heldItem = ITEM_ROCKY_HELMET,
#line 3505
            .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
#line 3506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3502
            .ability = ABILITY_FLOWER_VEIL,
#line 3503
            .lvl = 80,
#line 3504
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3506
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_STRENGTH_SAP,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 3511
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3511
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3515
            .ev = TRAINER_PARTY_EVS(252, 0, 0, 0, 252, 4),
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3512
            .ability = ABILITY_POISON_PUPPETEER,
#line 3513
            .lvl = 80,
#line 3514
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_MALIGNANT_CHAIN,
                MOVE_ASTRAL_BARRAGE,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_SNEAK,
            },
            },
        },
    },
#line 3521
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_CHAMP] =
    {
#line 3522
        .trainerName = _("DRAKE"),
#line 3523
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3524
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3526
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3527
        .doubleBattle = FALSE,
#line 3528
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3529
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3531
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3531
            .heldItem = ITEM_ROCKY_HELMET,
#line 3535
            .ev = TRAINER_PARTY_EVS(252, 6, 252, 0, 0, 0),
#line 3536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3532
            .ability = ABILITY_SAND_STREAM,
#line 3533
            .lvl = 80,
#line 3534
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3536
                MOVE_KNOCK_OFF,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_ACCELEROCK,
            },
            },
            {
#line 3541
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3541
            .heldItem = ITEM_LEFTOVERS,
#line 3545
            .ev = TRAINER_PARTY_EVS(158, 252, 0, 100, 0, 0),
#line 3546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3542
            .ability = ABILITY_SAND_VEIL,
#line 3543
            .lvl = 80,
#line 3544
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3546
                MOVE_DRAGON_RUSH,
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3551
            .species = SPECIES_HEATRAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3551
            .heldItem = ITEM_ASSAULT_VEST,
#line 3555
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 3556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3552
            .ability = ABILITY_FLAME_BODY,
#line 3553
            .lvl = 80,
#line 3554
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3556
                MOVE_MAGMA_STORM,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3561
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3561
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3565
            .ev = TRAINER_PARTY_EVS(2, 252, 4, 252, 0, 0),
#line 3566
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3562
            .ability = ABILITY_INTIMIDATE,
#line 3563
            .lvl = 80,
#line 3564
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3566
                MOVE_DRAGON_RUSH,
                MOVE_TEMPER_FLARE,
                MOVE_AIR_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3571
            .species = SPECIES_TERRAKION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3571
            .heldItem = ITEM_CHOICE_BAND,
#line 3575
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3572
            .ability = ABILITY_JUSTIFIED,
#line 3573
            .lvl = 80,
#line 3574
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3576
                MOVE_STONE_EDGE,
                MOVE_CLOSE_COMBAT,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3581
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3581
            .heldItem = ITEM_LOADED_DICE,
#line 3585
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3582
            .ability = ABILITY_THICK_FAT,
#line 3583
            .lvl = 80,
#line 3584
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3586
                MOVE_ICICLE_SPEAR,
                MOVE_BONE_RUSH,
                MOVE_ROCK_BLAST,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 3591
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
    {
#line 3592
        .trainerName = _("ALEC"),
#line 3593
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3594
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3596
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3597
        .doubleBattle = FALSE,
#line 3598
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3600
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3604
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3601
            .ability = ABILITY_STURDY,
#line 3602
            .lvl = 16,
#line 3603
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3605
                MOVE_STEALTH_ROCK,
                MOVE_MIMIC,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3610
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3611
            .ability = ABILITY_LEVITATE,
#line 3612
            .lvl = 16,
#line 3613
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3615
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3620
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .heldItem = ITEM_SALAC_BERRY,
#line 3624
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3621
            .ability = ABILITY_SUCTION_CUPS,
#line 3622
            .lvl = 16,
#line 3623
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3625
                MOVE_ANCIENT_POWER,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 3630
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3630
            .heldItem = ITEM_SALAC_BERRY,
#line 3634
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3631
            .ability = ABILITY_UNNERVE,
#line 3632
            .lvl = 16,
#line 3633
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3635
                MOVE_ANCIENT_POWER,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3640
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3641
        .trainerName = _("GARRETT"),
#line 3642
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3643
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3645
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3646
        .doubleBattle = FALSE,
#line 3647
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3649
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3653
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3650
            .ability = ABILITY_MARVEL_SCALE,
#line 3651
            .lvl = 22,
#line 3652
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3654
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3659
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3663
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3660
            .ability = ABILITY_TORRENT,
#line 3661
            .lvl = 22,
#line 3662
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3664
                MOVE_FLIP_TURN,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3669
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .heldItem = ITEM_SCOPE_LENS,
#line 3673
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3670
            .ability = ABILITY_SKILL_LINK,
#line 3671
            .lvl = 22,
#line 3672
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3674
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3679
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3679
            .heldItem = ITEM_WIDE_LENS,
#line 3683
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3680
            .ability = ABILITY_TORRENT,
#line 3681
            .lvl = 22,
#line 3682
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3684
                MOVE_BULLDOZE,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3689
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3690
        .trainerName = _("SAM"),
#line 3691
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3692
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3694
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3695
        .doubleBattle = FALSE,
#line 3696
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3698
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3698
            .heldItem = ITEM_METAL_COAT,
#line 3702
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3699
            .ability = ABILITY_MAGNET_PULL,
#line 3700
            .lvl = 32,
#line 3701
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_MAGNET_RISE,
                MOVE_SPARK,
                MOVE_FLASH_CANNON,
                MOVE_TRI_ATTACK,
            },
            },
            {
#line 3708
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3708
            .heldItem = ITEM_SILK_SCARF,
#line 3712
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3709
            .ability = ABILITY_DOWNLOAD,
#line 3710
            .lvl = 32,
#line 3711
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3713
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3718
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3718
            .heldItem = ITEM_SITRUS_BERRY,
#line 3722
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3719
            .ability = ABILITY_VITAL_SPIRIT,
#line 3721
            .lvl = 32,
#line 3720
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3723
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_METAL_SOUND,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3728
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3728
            .heldItem = ITEM_SITRUS_BERRY,
#line 3732
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3729
            .ability = ABILITY_INTIMIDATE,
#line 3731
            .lvl = 32,
#line 3730
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3732
                MOVE_BITE,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3737
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3737
            .heldItem = ITEM_MAGNET,
#line 3741
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3738
            .ability = ABILITY_STATIC,
#line 3739
            .lvl = 32,
#line 3740
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3742
                MOVE_ELECTRIC_TERRAIN,
                MOVE_PAYBACK,
                MOVE_MUD_BOMB,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 3747
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3748
        .trainerName = _("JOSE"),
#line 3749
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3750
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3752
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3753
        .doubleBattle = FALSE,
#line 3754
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3756
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3760
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3757
            .ability = ABILITY_NATURAL_CURE,
#line 3758
            .lvl = 38,
#line 3759
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3761
                MOVE_COTTON_GUARD,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_ALLURING_VOICE,
            },
            },
            {
#line 3766
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3766
            .heldItem = ITEM_CHARCOAL,
#line 3770
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3767
            .ability = ABILITY_BLAZE,
#line 3768
            .lvl = 38,
#line 3769
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3771
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3776
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3776
            .heldItem = ITEM_ASSAULT_VEST,
#line 3780
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3777
            .ability = ABILITY_LEVITATE,
#line 3778
            .lvl = 38,
#line 3779
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3781
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3786
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3786
            .heldItem = ITEM_ROCKY_HELMET,
#line 3790
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3787
            .ability = ABILITY_MARVEL_SCALE,
#line 3788
            .lvl = 38,
#line 3789
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3791
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_SLAM,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3796
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3796
            .heldItem = ITEM_DRAGON_FANG,
#line 3800
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3797
            .ability = ABILITY_SNIPER,
#line 3798
            .lvl = 38,
#line 3799
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3801
                MOVE_SCALE_SHOT,
                MOVE_OCTAZOOKA,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
            {
#line 3806
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3806
            .heldItem = ITEM_LIFE_ORB,
#line 3810
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3807
            .ability = ABILITY_ROUGH_SKIN,
#line 3808
            .lvl = 38,
#line 3809
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3811
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3816
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3817
        .trainerName = _("GRAYSON"),
#line 3818
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3819
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3821
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3822
        .doubleBattle = FALSE,
#line 3823
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3825
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .heldItem = ITEM_MUSCLE_BAND,
#line 3829
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3826
            .ability = ABILITY_IRON_FIST,
#line 3827
            .lvl = 43,
#line 3828
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3829
                MOVE_BULK_UP,
                MOVE_ROCK_SLIDE,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3834
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .heldItem = ITEM_BLACK_BELT,
#line 3838
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3835
            .ability = ABILITY_GUTS,
#line 3836
            .lvl = 43,
#line 3837
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3838
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3843
            .species = SPECIES_LOPUNNY,
#line 3843
            .gender = TRAINER_MON_FEMALE,
#line 3843
            .heldItem = ITEM_ROCKY_HELMET,
#line 3847
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3844
            .ability = ABILITY_CUTE_CHARM,
#line 3845
            .lvl = 43,
#line 3846
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3847
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3852
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .heldItem = ITEM_FOCUS_BAND,
#line 3856
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3853
            .ability = ABILITY_MOXIE,
#line 3854
            .lvl = 43,
#line 3855
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3856
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3861
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .heldItem = ITEM_EXPERT_BELT,
#line 3865
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3862
            .ability = ABILITY_INNER_FOCUS,
#line 3863
            .lvl = 43,
#line 3864
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3865
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_METAL_SOUND,
            },
            },
            {
#line 3870
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .heldItem = ITEM_FOCUS_BAND,
#line 3874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3871
            .ability = ABILITY_POISON_TOUCH,
#line 3872
            .lvl = 43,
#line 3873
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3874
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3879
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3880
        .trainerName = _("MATTHEW"),
#line 3881
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3882
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3884
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3885
        .doubleBattle = FALSE,
#line 3886
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3888
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3888
            .heldItem = ITEM_AIR_BALLOON,
#line 3892
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3889
            .ability = ABILITY_STURDY,
#line 3890
            .lvl = 51,
#line 3891
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3892
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3897
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3897
            .heldItem = ITEM_MUSCLE_BAND,
#line 3901
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3898
            .ability = ABILITY_STURDY,
#line 3899
            .lvl = 51,
#line 3900
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3901
                MOVE_ROOST,
                MOVE_DRILL_PECK,
                MOVE_IRON_HEAD,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 3906
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .heldItem = ITEM_ASSAULT_VEST,
#line 3910
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3907
            .ability = ABILITY_CLEAR_BODY,
#line 3908
            .lvl = 51,
#line 3909
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3910
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3915
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3915
            .heldItem = ITEM_CHOICE_SPECS,
#line 3919
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3916
            .ability = ABILITY_COMPETITIVE,
#line 3917
            .lvl = 51,
#line 3918
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3919
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3924
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3924
            .heldItem = ITEM_CHOICE_BAND,
#line 3928
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3925
            .ability = ABILITY_TECHNICIAN,
#line 3926
            .lvl = 51,
#line 3927
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3928
                MOVE_BULLET_PUNCH,
                MOVE_MEGAHORN,
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3933
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3933
            .heldItem = ITEM_ROCKY_HELMET,
#line 3937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3934
            .ability = ABILITY_IRON_BARBS,
#line 3935
            .lvl = 51,
#line 3936
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3937
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3942
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3943
        .trainerName = _("MARK"),
#line 3944
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3945
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3947
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3948
        .doubleBattle = FALSE,
#line 3949
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3951
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3951
            .heldItem = ITEM_ROCKY_HELMET,
#line 3955
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3952
            .ability = ABILITY_FLASH_FIRE,
#line 3953
            .lvl = 61,
#line 3954
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3955
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_MOONBLAST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3960
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3960
            .heldItem = ITEM_CHOICE_SPECS,
#line 3964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3961
            .ability = ABILITY_PIXILATE,
#line 3962
            .lvl = 61,
#line 3963
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3964
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_MOONBLAST,
            },
            },
            {
#line 3969
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3969
            .heldItem = ITEM_CHOICE_BAND,
#line 3973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3970
            .ability = ABILITY_HUGE_POWER,
#line 3971
            .lvl = 61,
#line 3972
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3973
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 3978
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .heldItem = ITEM_ASSAULT_VEST,
#line 3982
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3979
            .ability = ABILITY_SERENE_GRACE,
#line 3980
            .lvl = 61,
#line 3981
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3982
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3987
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3987
            .heldItem = ITEM_LEFTOVERS,
#line 3991
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3988
            .ability = ABILITY_SERENE_GRACE,
#line 3989
            .lvl = 61,
#line 3990
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3991
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_FIERY_DANCE,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3996
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3996
            .heldItem = ITEM_OCCA_BERRY,
#line 4000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3997
            .ability = ABILITY_INTIMIDATE,
#line 3998
            .lvl = 61,
#line 3999
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4000
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 4005
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 4006
        .trainerName = _("XANDER"),
#line 4007
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4008
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 4010
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4011
        .doubleBattle = TRUE,
#line 4012
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4014
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4014
            .heldItem = ITEM_BLACK_SLUDGE,
#line 4018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4015
            .ability = ABILITY_CURSED_BODY,
#line 4016
            .lvl = 67,
#line 4017
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4018
                MOVE_ASTRAL_BARRAGE,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 4023
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4023
            .heldItem = ITEM_SITRUS_BERRY,
#line 4027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4024
            .ability = ABILITY_MUMMY,
#line 4025
            .lvl = 67,
#line 4026
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4027
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_BALL,
                MOVE_PROTECT,
            },
            },
            {
#line 4032
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .heldItem = ITEM_CHOICE_SPECS,
#line 4036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4033
            .ability = ABILITY_FLASH_FIRE,
#line 4034
            .lvl = 67,
#line 4035
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4036
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 4041
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4041
            .heldItem = ITEM_SITRUS_BERRY,
#line 4045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4042
            .ability = ABILITY_LEVITATE,
#line 4043
            .lvl = 67,
#line 4044
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4045
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 4050
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4050
            .heldItem = ITEM_CHOICE_BAND,
#line 4054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4051
            .ability = ABILITY_NO_GUARD,
#line 4052
            .lvl = 67,
#line 4053
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4054
                MOVE_EARTHQUAKE,
                MOVE_RAGE_FIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 4059
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4059
            .heldItem = ITEM_LEFTOVERS,
#line 4063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4060
            .ability = ABILITY_PRESSURE,
#line 4061
            .lvl = 67,
#line 4062
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4063
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 4068
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 4069
        .trainerName = _("JERRY"),
#line 4070
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4071
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4073
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4074
        .doubleBattle = FALSE,
#line 4075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4077
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4079
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4078
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4081
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 4082
        .trainerName = _("TED"),
#line 4083
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4084
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4086
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4087
        .doubleBattle = FALSE,
#line 4088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4090
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4092
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4091
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4094
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 4095
        .trainerName = _("PAUL"),
#line 4096
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4097
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4099
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4100
        .doubleBattle = FALSE,
#line 4101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4103
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4105
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4104
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4107
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4109
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4108
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4111
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4113
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4112
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4115
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 4116
        .trainerName = _("KAREN"),
#line 4117
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4118
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4119
F_TRAINER_FEMALE | 
#line 4120
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4121
        .doubleBattle = FALSE,
#line 4122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4124
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4126
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4125
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4128
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 4129
        .trainerName = _("GEORGIA"),
#line 4130
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4131
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4132
F_TRAINER_FEMALE | 
#line 4133
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4134
        .doubleBattle = FALSE,
#line 4135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4137
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4139
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4138
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4141
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4142
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4145
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 4146
        .trainerName = _("KATE & JOY"),
#line 4147
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4148
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4150
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4151
        .doubleBattle = TRUE,
#line 4152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4154
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4155
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4158
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4159
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4163
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 4164
        .trainerName = _("ANNA & MEG"),
#line 4165
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4166
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4168
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4169
        .doubleBattle = TRUE,
#line 4170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4172
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4173
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4176
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4177
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4180
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 4181
        .trainerName = _("VICTOR"),
#line 4182
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4183
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4185
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4186
        .doubleBattle = FALSE,
#line 4187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4189
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4189
            .heldItem = ITEM_ORAN_BERRY,
#line 4191
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4190
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4193
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4193
            .heldItem = ITEM_ORAN_BERRY,
#line 4195
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4194
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4197
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 4198
        .trainerName = _("MIGUEL"),
#line 4199
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4200
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4202
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4203
        .doubleBattle = FALSE,
#line 4204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4206
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4206
            .heldItem = ITEM_ORAN_BERRY,
#line 4208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4207
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4210
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 4211
        .trainerName = _("COLTON"),
#line 4212
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4213
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4215
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4216
        .doubleBattle = FALSE,
#line 4217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4219
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4219
            .heldItem = ITEM_ORAN_BERRY,
#line 4221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4220
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4222
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4227
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4227
            .heldItem = ITEM_ORAN_BERRY,
#line 4229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4228
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4230
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4235
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4235
            .heldItem = ITEM_ORAN_BERRY,
#line 4237
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4236
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4238
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4243
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4243
            .heldItem = ITEM_ORAN_BERRY,
#line 4245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4244
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4246
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4251
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .heldItem = ITEM_ORAN_BERRY,
#line 4253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4252
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4254
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4259
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .heldItem = ITEM_ORAN_BERRY,
#line 4261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4260
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4262
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4267
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4268
        .trainerName = _("VICTORIA"),
#line 4269
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4270
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4271
F_TRAINER_FEMALE | 
#line 4272
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4273
        .doubleBattle = FALSE,
#line 4274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4276
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4276
            .heldItem = ITEM_ORAN_BERRY,
#line 4278
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4277
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4280
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 4281
        .trainerName = _("VANESSA"),
#line 4282
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4283
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4284
F_TRAINER_FEMALE | 
#line 4285
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4286
        .doubleBattle = FALSE,
#line 4287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4289
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4289
            .heldItem = ITEM_ORAN_BERRY,
#line 4291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4290
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4293
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4294
        .trainerName = _("BETHANY"),
#line 4295
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4296
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4297
F_TRAINER_FEMALE | 
#line 4298
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4299
        .doubleBattle = FALSE,
#line 4300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4302
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .heldItem = ITEM_ORAN_BERRY,
#line 4304
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4303
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4306
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4306
            .heldItem = ITEM_ORAN_BERRY,
#line 4308
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4307
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4310
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4310
            .heldItem = ITEM_ORAN_BERRY,
#line 4312
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4311
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4314
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 4315
        .trainerName = _("ISABEL"),
#line 4316
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4317
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4318
F_TRAINER_FEMALE | 
#line 4319
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4320
        .doubleBattle = FALSE,
#line 4321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4323
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .heldItem = ITEM_ORAN_BERRY,
#line 4325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4324
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4327
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4327
            .heldItem = ITEM_ORAN_BERRY,
#line 4329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4328
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4331
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 4332
        .trainerName = _("TIMOTHY"),
#line 4333
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4334
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4336
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4337
        .doubleBattle = FALSE,
#line 4338
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4340
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4342
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4341
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4344
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4345
        .trainerName = _("VICKY"),
#line 4346
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4347
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4348
F_TRAINER_FEMALE | 
#line 4349
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4350
        .doubleBattle = FALSE,
#line 4351
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4353
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4354
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4357
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 4358
        .trainerName = _("SHELBY"),
#line 4359
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4360
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4361
F_TRAINER_FEMALE | 
#line 4362
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4363
        .doubleBattle = FALSE,
#line 4364
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4366
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4367
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4370
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4372
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4371
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4374
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4375
        .trainerName = _("CALVIN"),
#line 4376
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4377
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4379
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4380
        .doubleBattle = FALSE,
#line 4381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4383
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4384
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4387
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4388
        .trainerName = _("BILLY"),
#line 4389
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4390
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4392
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4393
        .doubleBattle = FALSE,
#line 4394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4396
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4397
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4400
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4401
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4404
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4405
        .trainerName = _("JOSH"),
#line 4406
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4407
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4409
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4410
        .doubleBattle = FALSE,
#line 4411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4413
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4415
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4414
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4416
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4418
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4419
        .trainerName = _("TOMMY"),
#line 4420
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4421
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4423
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4424
        .doubleBattle = FALSE,
#line 4425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4427
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4428
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4431
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4432
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4435
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4436
        .trainerName = _("JOEY"),
#line 4437
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4438
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4440
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4441
        .doubleBattle = FALSE,
#line 4442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4444
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4445
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4448
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4449
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4452
    [DIFFICULTY_NORMAL][TRAINER_GLASSES] =
    {
#line 4453
        .trainerName = _("GLASSES"),
#line 4454
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4455
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4457
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4458
        .doubleBattle = FALSE,
#line 4459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4461
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4462
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4465
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4466
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4469
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4470
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4473
    [DIFFICULTY_NORMAL][TRAINER_PERKEO] =
    {
#line 4474
        .trainerName = _("PERKEO"),
#line 4475
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4476
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4478
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4479
        .doubleBattle = FALSE,
#line 4480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4482
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4483
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4486
            .species = SPECIES_RAMPARDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4487
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4490
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4491
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4494
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 4495
        .trainerName = _("DANNY"),
#line 4496
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4497
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4499
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4500
        .doubleBattle = FALSE,
#line 4501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4504
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4507
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4508
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4511
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4512
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4515
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4516
        .trainerName = _("BEN"),
#line 4517
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4518
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4520
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4521
        .doubleBattle = FALSE,
#line 4522
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4524
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4526
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4525
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4529
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4531
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4530
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4534
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4535
        .trainerName = _("QUINCY"),
#line 4536
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4537
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4539
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4540
        .items = { ITEM_FULL_RESTORE },
#line 4541
        .doubleBattle = FALSE,
#line 4542
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4544
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4545
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4548
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4549
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4552
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4553
        .trainerName = _("KATELYNN"),
#line 4554
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4555
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4556
F_TRAINER_FEMALE | 
#line 4557
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4558
        .items = { ITEM_FULL_RESTORE },
#line 4559
        .doubleBattle = FALSE,
#line 4560
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4562
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4564
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4563
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4565
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4570
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4572
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4571
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4573
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4578
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4579
        .trainerName = _("JAYLEN"),
#line 4580
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4581
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4583
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4584
        .doubleBattle = FALSE,
#line 4585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4587
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4588
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4591
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4592
        .trainerName = _("DILLON"),
#line 4593
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4594
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4596
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4597
        .doubleBattle = FALSE,
#line 4598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4600
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4601
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4604
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4605
        .trainerName = _("EDDIE"),
#line 4606
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4607
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4609
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4610
        .doubleBattle = FALSE,
#line 4611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4613
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4614
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4617
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4618
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4621
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4622
        .trainerName = _("ALLEN"),
#line 4623
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4624
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4626
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4627
        .doubleBattle = FALSE,
#line 4628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4630
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4631
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4634
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4635
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4638
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4639
        .trainerName = _("TIMMY"),
#line 4640
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4641
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4643
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4644
        .doubleBattle = FALSE,
#line 4645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4647
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4648
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4651
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4652
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4655
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4656
        .trainerName = _("FATTY"),
#line 4657
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4658
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4660
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4661
        .doubleBattle = FALSE,
#line 4662
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4663
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4665
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .heldItem = ITEM_LIFE_ORB,
#line 4669
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4666
            .ability = ABILITY_THICK_FAT,
#line 4667
            .lvl = 77,
#line 4668
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4670
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4675
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4675
            .heldItem = ITEM_CHOICE_BAND,
#line 4679
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4676
            .ability = ABILITY_INTIMIDATE,
#line 4677
            .lvl = 77,
#line 4678
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4680
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4685
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4685
            .heldItem = ITEM_LEFTOVERS,
#line 4689
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4686
            .ability = ABILITY_CHLOROPHYLL,
#line 4687
            .lvl = 77,
#line 4688
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4690
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4695
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .heldItem = ITEM_FOCUS_SASH,
#line 4699
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4696
            .ability = ABILITY_MAGIC_GUARD,
#line 4697
            .lvl = 77,
#line 4698
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4700
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4705
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4705
            .heldItem = ITEM_WIDE_LENS,
#line 4709
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4710
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4706
            .ability = ABILITY_STATIC,
#line 4707
            .lvl = 77,
#line 4708
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4710
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4715
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .heldItem = ITEM_EVIOLITE,
#line 4719
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4720
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4716
            .ability = ABILITY_SWIFT_SWIM,
#line 4717
            .lvl = 77,
#line 4718
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4720
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4725
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4726
        .trainerName = _("ANDREW"),
#line 4727
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4728
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4730
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4731
        .doubleBattle = FALSE,
#line 4732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4734
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4735
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4738
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4739
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4742
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4743
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4746
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4747
        .trainerName = _("IVAN"),
#line 4748
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4749
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4751
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4752
        .doubleBattle = FALSE,
#line 4753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4755
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4756
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4759
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4760
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4763
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4764
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4767
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4768
        .trainerName = _("CLAUDE"),
#line 4769
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4770
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4772
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4773
        .doubleBattle = FALSE,
#line 4774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4776
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4777
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4780
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4781
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4784
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4785
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4788
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4789
        .trainerName = _("ELLIOT"),
#line 4790
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4791
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4793
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4794
        .doubleBattle = FALSE,
#line 4795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4797
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4798
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4801
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4802
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4805
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4806
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4809
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4810
        .trainerName = _("NED"),
#line 4811
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4812
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4814
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4815
        .doubleBattle = FALSE,
#line 4816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4818
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4820
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4819
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4822
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4823
        .trainerName = _("DALE"),
#line 4824
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4825
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4827
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4828
        .doubleBattle = FALSE,
#line 4829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4831
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4832
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4835
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4836
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4839
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4840
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4843
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4844
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4847
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4848
        .trainerName = _("NOLAN"),
#line 4849
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4850
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4853
        .doubleBattle = FALSE,
#line 4854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4856
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4857
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4860
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4861
        .trainerName = _("BARNY"),
#line 4862
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4863
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4865
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4866
        .doubleBattle = FALSE,
#line 4867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4869
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4870
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4873
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4874
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4877
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4878
        .trainerName = _("WADE"),
#line 4879
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4880
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4882
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4883
        .doubleBattle = FALSE,
#line 4884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4886
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4888
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4887
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4889
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4890
        .trainerName = _("ABIGAL"),
#line 4891
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4892
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4893
F_TRAINER_FEMALE | 
#line 4894
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4895
        .doubleBattle = FALSE,
#line 4896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4898
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4899
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4901
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4902
        .trainerName = _("CARTER"),
#line 4903
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4904
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4906
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4907
        .doubleBattle = FALSE,
#line 4908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4910
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4912
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4911
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4914
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4916
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4915
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4918
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4919
        .trainerName = _("RONALD"),
#line 4920
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4921
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4923
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4924
        .doubleBattle = FALSE,
#line 4925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4927
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4928
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4932
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4933
        .trainerName = _("JACOB"),
#line 4934
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4935
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4937
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4938
        .doubleBattle = FALSE,
#line 4939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4941
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4943
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4942
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4945
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4947
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4946
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4949
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4951
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4950
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4953
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4954
        .trainerName = _("ANTHONY"),
#line 4955
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4956
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4958
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4959
        .doubleBattle = FALSE,
#line 4960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4962
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4963
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4966
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4967
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4970
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4971
        .trainerName = _("BENJAMIN"),
#line 4972
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4973
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4975
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4976
        .doubleBattle = FALSE,
#line 4977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4979
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4980
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4983
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4984
        .trainerName = _("JASMINE"),
#line 4985
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4986
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4987
F_TRAINER_FEMALE | 
#line 4988
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4989
        .doubleBattle = FALSE,
#line 4990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4992
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4994
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4993
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4996
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4998
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4997
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5000
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5001
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5004
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 5005
        .trainerName = _("DYLAN"),
#line 5006
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5007
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5009
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5010
        .doubleBattle = FALSE,
#line 5011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5013
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5014
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5017
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 5018
        .trainerName = _("MARIA"),
#line 5019
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5020
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5021
F_TRAINER_FEMALE | 
#line 5022
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5023
        .doubleBattle = FALSE,
#line 5024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5026
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5027
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5030
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 5031
        .trainerName = _("CAMDEN"),
#line 5032
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5033
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5035
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5036
        .doubleBattle = FALSE,
#line 5037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5039
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5040
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5043
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5044
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5047
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5048
        .trainerName = _("DEMETRIUS"),
#line 5049
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5050
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5052
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5053
        .doubleBattle = FALSE,
#line 5054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5056
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5057
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5060
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5061
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5064
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 5065
        .trainerName = _("ISAIAH"),
#line 5066
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5067
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5069
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5070
        .doubleBattle = FALSE,
#line 5071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5073
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5074
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5077
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 5078
        .trainerName = _("PABLO"),
#line 5079
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5080
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5082
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5083
        .doubleBattle = FALSE,
#line 5084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5086
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5087
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5090
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5091
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5094
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 5095
        .trainerName = _("CHASE"),
#line 5096
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5097
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5099
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5100
        .doubleBattle = FALSE,
#line 5101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5103
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5104
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5107
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5109
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5108
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5111
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 5112
        .trainerName = _("ISOBEL"),
#line 5113
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5114
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5115
F_TRAINER_FEMALE | 
#line 5116
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5117
        .doubleBattle = FALSE,
#line 5118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5120
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5121
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5124
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 5125
        .trainerName = _("DONNY"),
#line 5126
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5127
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5128
F_TRAINER_FEMALE | 
#line 5129
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5130
        .doubleBattle = FALSE,
#line 5131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5133
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5134
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5137
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5138
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5141
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 5142
        .trainerName = _("TALIA"),
#line 5143
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5144
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5145
F_TRAINER_FEMALE | 
#line 5146
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5147
        .doubleBattle = FALSE,
#line 5148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5150
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5151
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5154
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 5155
        .trainerName = _("KATELYN"),
#line 5156
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5157
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5158
F_TRAINER_FEMALE | 
#line 5159
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5160
        .doubleBattle = FALSE,
#line 5161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5163
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5164
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5167
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 5168
        .trainerName = _("ALLISON"),
#line 5169
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5170
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5171
F_TRAINER_FEMALE | 
#line 5172
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5173
        .doubleBattle = FALSE,
#line 5174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5176
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5177
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5180
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5181
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5184
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 5185
        .trainerName = _("NICOLAS"),
#line 5186
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5187
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5189
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5190
        .doubleBattle = FALSE,
#line 5191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5193
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5195
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5194
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5197
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5199
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5198
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5201
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 5202
        .trainerName = _("AARON"),
#line 5203
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5204
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5206
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5207
        .doubleBattle = FALSE,
#line 5208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5211
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5214
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5215
        .trainerName = _("PERRY"),
#line 5216
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5217
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5219
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5220
        .doubleBattle = FALSE,
#line 5221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5223
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5224
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5227
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5228
        .trainerName = _("HUGH"),
#line 5229
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5230
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5232
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5233
        .doubleBattle = FALSE,
#line 5234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5236
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5237
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5240
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5241
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5244
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5245
        .trainerName = _("PHIL"),
#line 5246
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5247
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5249
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5250
        .doubleBattle = FALSE,
#line 5251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5253
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5254
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5257
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5258
        .trainerName = _("JARED"),
#line 5259
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5260
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5262
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5263
        .doubleBattle = FALSE,
#line 5264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5266
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5268
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5267
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5270
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5271
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5274
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5276
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5275
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5278
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5279
        .trainerName = _("HUMBERTO"),
#line 5280
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5281
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5283
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5284
        .doubleBattle = FALSE,
#line 5285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5287
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5289
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5288
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5291
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5292
        .trainerName = _("PRESLEY"),
#line 5293
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5294
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5296
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5297
        .doubleBattle = FALSE,
#line 5298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5300
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5304
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5305
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5308
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5309
        .trainerName = _("EDWARDO"),
#line 5310
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5311
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5313
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5314
        .doubleBattle = FALSE,
#line 5315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5317
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5318
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5321
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5322
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5326
        .trainerName = _("COLIN"),
#line 5327
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5328
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5330
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5331
        .doubleBattle = FALSE,
#line 5332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5335
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5338
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5339
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5342
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 5343
        .trainerName = _("ROBERT"),
#line 5344
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5345
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5347
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5348
        .doubleBattle = FALSE,
#line 5349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5351
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5352
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5355
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5356
        .trainerName = _("BENNY"),
#line 5357
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5358
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5360
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5361
        .doubleBattle = FALSE,
#line 5362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5364
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5365
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5368
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5369
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5372
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5373
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5376
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5377
        .trainerName = _("CHESTER"),
#line 5378
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5379
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5381
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5382
        .doubleBattle = FALSE,
#line 5383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5385
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5386
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5389
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5390
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5393
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5394
        .trainerName = _("ALEX"),
#line 5395
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5396
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5398
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5399
        .doubleBattle = FALSE,
#line 5400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5402
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5404
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5403
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5406
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5408
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5407
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5410
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5411
        .trainerName = _("BECK"),
#line 5412
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5413
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5415
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5416
        .doubleBattle = FALSE,
#line 5417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5419
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5420
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5423
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5424
        .trainerName = _("YASU"),
#line 5425
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5426
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5428
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5429
        .doubleBattle = FALSE,
#line 5430
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5432
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5433
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5436
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5437
        .trainerName = _("TAKASHI"),
#line 5438
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5439
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5441
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5442
        .doubleBattle = FALSE,
#line 5443
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5445
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5446
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5449
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5450
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5453
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5454
        .trainerName = _("DIANNE"),
#line 5455
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5456
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5457
F_TRAINER_FEMALE | 
#line 5458
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5459
        .items = { ITEM_FULL_RESTORE },
#line 5460
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5462
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5463
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5465
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5468
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5469
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5471
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5474
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5475
        .trainerName = _("JANI"),
#line 5476
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5477
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5478
F_TRAINER_FEMALE | 
#line 5479
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5480
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5483
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5486
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5487
        .trainerName = _("LAO"),
#line 5488
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5489
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5491
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5492
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5494
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5495
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5498
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5499
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5502
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5506
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5507
        .trainerName = _("LUNG"),
#line 5508
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5509
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5511
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5512
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5514
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5515
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5518
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5519
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5522
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5523
        .trainerName = _("JOCELYN"),
#line 5524
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5525
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5526
F_TRAINER_FEMALE | 
#line 5527
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5528
        .doubleBattle = FALSE,
#line 5529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5531
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5533
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5532
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5535
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5536
        .trainerName = _("LAURA"),
#line 5537
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5538
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5539
F_TRAINER_FEMALE | 
#line 5540
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5541
        .doubleBattle = FALSE,
#line 5542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5544
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5545
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5548
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5549
        .trainerName = _("CYNDY"),
#line 5550
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5551
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5552
F_TRAINER_FEMALE | 
#line 5553
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5554
        .doubleBattle = FALSE,
#line 5555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5557
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5558
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5561
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5563
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5562
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5565
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5566
        .trainerName = _("CORA"),
#line 5567
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5568
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5569
F_TRAINER_FEMALE | 
#line 5570
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5571
        .doubleBattle = FALSE,
#line 5572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5574
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5576
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5575
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5578
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5579
        .trainerName = _("PAULA"),
#line 5580
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5581
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5582
F_TRAINER_FEMALE | 
#line 5583
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5584
        .doubleBattle = FALSE,
#line 5585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5587
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5589
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5588
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5591
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5592
        .trainerName = _("MADELINE"),
#line 5593
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5594
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5595
F_TRAINER_FEMALE | 
#line 5596
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5597
        .doubleBattle = FALSE,
#line 5598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5600
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5601
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5604
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5605
        .trainerName = _("CLARISSA"),
#line 5606
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5607
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5608
F_TRAINER_FEMALE | 
#line 5609
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5610
        .doubleBattle = FALSE,
#line 5611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5613
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5614
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5617
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5618
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5621
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5622
        .trainerName = _("ANGELICA"),
#line 5623
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5624
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5625
F_TRAINER_FEMALE | 
#line 5626
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5627
        .doubleBattle = FALSE,
#line 5628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5630
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5632
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5631
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5634
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5635
        .trainerName = _("BEVERLY"),
#line 5636
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5637
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5638
F_TRAINER_FEMALE | 
#line 5639
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5640
        .doubleBattle = FALSE,
#line 5641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5643
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5644
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5647
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5648
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5651
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5652
        .trainerName = _("IMANI"),
#line 5653
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5654
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5655
F_TRAINER_FEMALE | 
#line 5656
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5657
        .doubleBattle = FALSE,
#line 5658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5664
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5665
        .trainerName = _("KYLA"),
#line 5666
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5667
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5668
F_TRAINER_FEMALE | 
#line 5669
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5670
        .doubleBattle = FALSE,
#line 5671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5673
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5674
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5677
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5678
        .trainerName = _("DENISE"),
#line 5679
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5680
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5681
F_TRAINER_FEMALE | 
#line 5682
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5683
        .doubleBattle = FALSE,
#line 5684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5686
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5687
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5690
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5691
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5694
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5695
        .trainerName = _("BETH"),
#line 5696
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5697
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5698
F_TRAINER_FEMALE | 
#line 5699
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5700
        .doubleBattle = FALSE,
#line 5701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5704
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5707
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5708
        .trainerName = _("TARA"),
#line 5709
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5710
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5711
F_TRAINER_FEMALE | 
#line 5712
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5713
        .doubleBattle = FALSE,
#line 5714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5716
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5717
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5720
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5721
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5724
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5725
        .trainerName = _("MISSY"),
#line 5726
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5727
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5728
F_TRAINER_FEMALE | 
#line 5729
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5730
        .doubleBattle = FALSE,
#line 5731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5733
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5734
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5737
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5738
        .trainerName = _("ALICE"),
#line 5739
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5740
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5741
F_TRAINER_FEMALE | 
#line 5742
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5743
        .doubleBattle = FALSE,
#line 5744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5746
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5747
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5750
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5751
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5754
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5755
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5758
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5759
        .trainerName = _("JENNY"),
#line 5760
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5761
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5762
F_TRAINER_FEMALE | 
#line 5763
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5764
        .doubleBattle = FALSE,
#line 5765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5767
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5768
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5771
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5772
        .trainerName = _("GRACE"),
#line 5773
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5774
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5775
F_TRAINER_FEMALE | 
#line 5776
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5777
        .doubleBattle = FALSE,
#line 5778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5780
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5781
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5784
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5785
        .trainerName = _("TANYA"),
#line 5786
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5787
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5788
F_TRAINER_FEMALE | 
#line 5789
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5790
        .doubleBattle = FALSE,
#line 5791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5793
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5794
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5797
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5798
        .trainerName = _("SHARON"),
#line 5799
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5800
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5801
F_TRAINER_FEMALE | 
#line 5802
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5803
        .doubleBattle = FALSE,
#line 5804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5806
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5807
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5810
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5811
        .trainerName = _("NIKKI"),
#line 5812
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5813
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5814
F_TRAINER_FEMALE | 
#line 5815
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5816
        .doubleBattle = FALSE,
#line 5817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5819
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5820
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5823
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5824
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5827
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5828
        .trainerName = _("BRENDA"),
#line 5829
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5830
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5831
F_TRAINER_FEMALE | 
#line 5832
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5833
        .doubleBattle = FALSE,
#line 5834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5836
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5837
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5840
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5841
        .trainerName = _("KATIE"),
#line 5842
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5843
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5844
F_TRAINER_FEMALE | 
#line 5845
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5846
        .doubleBattle = FALSE,
#line 5847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5849
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5850
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5853
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5854
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5857
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5858
        .trainerName = _("SUSIE"),
#line 5859
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5860
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5861
F_TRAINER_FEMALE | 
#line 5862
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5863
        .doubleBattle = FALSE,
#line 5864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5866
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5867
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5870
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5871
        .trainerName = _("KARA"),
#line 5872
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5873
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5874
F_TRAINER_FEMALE | 
#line 5875
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5876
        .doubleBattle = FALSE,
#line 5877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5879
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5880
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5883
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5884
        .trainerName = _("DANA"),
#line 5885
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5886
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5887
F_TRAINER_FEMALE | 
#line 5888
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5889
        .doubleBattle = FALSE,
#line 5890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5892
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5893
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5896
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5897
        .trainerName = _("SIENNA"),
#line 5898
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5899
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5900
F_TRAINER_FEMALE | 
#line 5901
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5902
        .doubleBattle = FALSE,
#line 5903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5905
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5906
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5909
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5910
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5913
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5914
        .trainerName = _("DEBRA"),
#line 5915
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5916
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5917
F_TRAINER_FEMALE | 
#line 5918
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5919
        .doubleBattle = FALSE,
#line 5920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5922
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5923
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5926
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5927
        .trainerName = _("LINDA"),
#line 5928
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5929
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5930
F_TRAINER_FEMALE | 
#line 5931
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5932
        .doubleBattle = FALSE,
#line 5933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5935
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5936
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5939
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5940
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5943
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5944
        .trainerName = _("KAYLEE"),
#line 5945
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5946
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5947
F_TRAINER_FEMALE | 
#line 5948
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5949
        .doubleBattle = FALSE,
#line 5950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5952
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5953
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5956
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5957
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5960
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5961
        .trainerName = _("LAUREL"),
#line 5962
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5963
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5964
F_TRAINER_FEMALE | 
#line 5965
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5966
        .doubleBattle = FALSE,
#line 5967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5969
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5970
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5973
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5974
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5977
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5978
        .trainerName = _("CARLEE"),
#line 5979
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5980
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5981
F_TRAINER_FEMALE | 
#line 5982
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5983
        .doubleBattle = FALSE,
#line 5984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5986
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5987
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5990
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5991
        .trainerName = _("HEIDI"),
#line 5992
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5993
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5994
F_TRAINER_FEMALE | 
#line 5995
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5996
        .doubleBattle = FALSE,
#line 5997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5999
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6000
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6003
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6004
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6008
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 6009
        .trainerName = _("BECKY"),
#line 6010
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6011
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6012
F_TRAINER_FEMALE | 
#line 6013
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6014
        .doubleBattle = TRUE,
#line 6015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6017
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6017
            .heldItem = ITEM_FOCUS_SASH,
#line 6019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6018
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6020
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6023
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6023
            .heldItem = ITEM_WIDE_LENS,
#line 6026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6024
            .ability = ABILITY_MOODY,
#line 6025
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6026
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 6031
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 6032
        .trainerName = _("CAROL"),
#line 6033
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6034
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6035
F_TRAINER_FEMALE | 
#line 6036
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6037
        .doubleBattle = FALSE,
#line 6038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6040
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6041
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6044
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6045
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6048
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 6049
        .trainerName = _("NANCY"),
#line 6050
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6051
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6052
F_TRAINER_FEMALE | 
#line 6053
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6054
        .doubleBattle = FALSE,
#line 6055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6057
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6058
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6061
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6062
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6065
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6066
        .trainerName = _("MARTHA"),
#line 6067
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6068
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6069
F_TRAINER_FEMALE | 
#line 6070
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6071
        .doubleBattle = FALSE,
#line 6072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6074
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6075
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6078
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6079
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6082
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 6083
        .trainerName = _("DIANA"),
#line 6084
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6085
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6086
F_TRAINER_FEMALE | 
#line 6087
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6088
        .doubleBattle = FALSE,
#line 6089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6091
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6092
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6095
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6096
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6099
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6101
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6100
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6103
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6104
        .trainerName = _("CEDRIC"),
#line 6105
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6106
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6108
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6109
        .doubleBattle = FALSE,
#line 6110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6112
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6113
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6116
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 6117
        .trainerName = _("IRENE"),
#line 6118
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6119
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6120
F_TRAINER_FEMALE | 
#line 6121
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6122
        .doubleBattle = FALSE,
#line 6123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6125
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6126
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6129
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6130
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6133
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 6134
        .trainerName = _("AMY & LIV"),
#line 6135
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6136
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6138
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6139
        .doubleBattle = TRUE,
#line 6140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6142
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6143
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6146
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6147
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6151
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 6152
        .trainerName = _("GINA & MIA"),
#line 6153
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6154
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6156
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6157
        .doubleBattle = TRUE,
#line 6158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6160
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6161
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6164
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6165
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6168
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6169
        .trainerName = _("MIU & YUKI"),
#line 6170
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6171
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6173
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6174
        .doubleBattle = TRUE,
#line 6175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6177
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6178
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6181
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6182
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6186
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6187
        .trainerName = _("HUEY"),
#line 6188
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6189
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6191
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6192
        .doubleBattle = FALSE,
#line 6193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6195
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6197
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6196
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6199
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6201
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6200
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6203
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6204
        .trainerName = _("EDMOND"),
#line 6205
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6206
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6208
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6209
        .doubleBattle = FALSE,
#line 6210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6212
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6213
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6216
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 6217
        .trainerName = _("ERNEST"),
#line 6218
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6219
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6221
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6222
        .doubleBattle = FALSE,
#line 6223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6225
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6226
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6229
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6230
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6233
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6234
        .trainerName = _("DWAYNE"),
#line 6235
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6236
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6238
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6239
        .doubleBattle = FALSE,
#line 6240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6242
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6243
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6246
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6247
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6250
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6251
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6254
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6255
        .trainerName = _("PHILLIP"),
#line 6256
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6257
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6259
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6260
        .doubleBattle = FALSE,
#line 6261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6263
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6264
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6267
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6268
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6271
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6272
        .trainerName = _("LEONARD"),
#line 6273
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6274
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6276
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6277
        .doubleBattle = FALSE,
#line 6278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6280
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6281
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6284
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6285
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6288
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6289
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6292
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6293
        .trainerName = _("DUNCAN"),
#line 6294
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6295
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6297
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6298
        .doubleBattle = FALSE,
#line 6299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6301
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6302
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6305
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6306
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6309
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6310
        .trainerName = _("ELI"),
#line 6311
        .trainerClass = TRAINER_CLASS_GAMER,
#line 6312
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6314
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6315
        .doubleBattle = FALSE,
#line 6316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6318
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6320
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6319
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6322
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6323
        .trainerName = _("ANNIKA"),
#line 6324
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6325
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6326
F_TRAINER_FEMALE | 
#line 6327
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6328
        .doubleBattle = FALSE,
#line 6329
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6331
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .heldItem = ITEM_FOCUS_SASH,
#line 6333
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6332
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6335
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6335
            .heldItem = ITEM_FOCUS_SASH,
#line 6337
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6336
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6339
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6340
        .trainerName = _("JAZMYN"),
#line 6341
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6342
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6343
F_TRAINER_FEMALE | 
#line 6344
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6345
        .items = { ITEM_HYPER_POTION },
#line 6346
        .doubleBattle = FALSE,
#line 6347
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6349
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6350
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6353
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6354
        .trainerName = _("JONAS"),
#line 6355
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6356
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6358
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6359
        .doubleBattle = FALSE,
#line 6360
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6362
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6363
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6366
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6367
        .trainerName = _("KAYLEY"),
#line 6368
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6369
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6370
F_TRAINER_FEMALE | 
#line 6371
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6372
        .doubleBattle = FALSE,
#line 6373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6375
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6376
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6379
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6380
        .trainerName = _("AURON"),
#line 6381
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6382
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6384
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6385
        .doubleBattle = FALSE,
#line 6386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6388
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6389
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6392
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6393
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6396
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6397
        .trainerName = _("KELVIN"),
#line 6398
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6399
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6401
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6402
        .doubleBattle = FALSE,
#line 6403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6405
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6407
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6406
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6409
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6411
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6410
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6413
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6414
        .trainerName = _("MARLEY"),
#line 6415
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6416
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6417
F_TRAINER_FEMALE | 
#line 6418
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6419
        .items = { ITEM_HYPER_POTION },
#line 6420
        .doubleBattle = FALSE,
#line 6421
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6423
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6424
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6427
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6428
        .trainerName = _("REYNA"),
#line 6429
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6430
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6431
F_TRAINER_FEMALE | 
#line 6432
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6433
        .doubleBattle = FALSE,
#line 6434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6436
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6438
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6437
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6440
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6442
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6441
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6444
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6445
        .trainerName = _("HUDSON"),
#line 6446
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6447
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6449
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6450
        .doubleBattle = FALSE,
#line 6451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6453
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6454
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6457
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6458
        .trainerName = _("CONOR"),
#line 6459
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6460
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6462
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6463
        .doubleBattle = FALSE,
#line 6464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6466
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6467
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6470
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6472
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6471
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6474
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6475
        .trainerName = _("EDWIN"),
#line 6476
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6477
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6479
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6480
        .doubleBattle = FALSE,
#line 6481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6483
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6484
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6487
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6488
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6491
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6492
        .trainerName = _("HECTOR"),
#line 6493
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6494
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6496
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6497
        .doubleBattle = FALSE,
#line 6498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6500
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6501
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6504
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6505
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6508
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6509
        .trainerName = _("TABITHA"),
#line 6510
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6511
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6513
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6514
        .doubleBattle = FALSE,
#line 6515
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6517
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .heldItem = ITEM_SITRUS_BERRY,
#line 6520
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6518
            .ability = ABILITY_DROUGHT,
#line 6519
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6521
                MOVE_SHELL_SMASH,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6526
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .heldItem = ITEM_POISON_BARB,
#line 6529
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6527
            .ability = ABILITY_LEVITATE,
#line 6528
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6530
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6535
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6535
            .heldItem = ITEM_LIFE_ORB,
#line 6538
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6537
            .ability = ABILITY_LEVITATE,
#line 6536
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6539
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_TRICK,
            },
            },
        },
    },
#line 6544
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL_VR] =
    {
#line 6545
        .trainerName = _("SAMUEL"),
#line 6546
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6547
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6549
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6550
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6551
        .doubleBattle = TRUE,
#line 6552
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_SLOWKING,
#line 6554
            .gender = TRAINER_MON_MALE,
#line 6554
            .heldItem = ITEM_LIFE_ORB,
#line 6558
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6555
            .ability = ABILITY_REGENERATOR,
#line 6556
            .lvl = 70,
#line 6557
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6559
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
                MOVE_ICY_WIND,
            },
            },
            {
#line 6564
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .heldItem = ITEM_ROCKY_HELMET,
#line 6568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6565
            .ability = ABILITY_REGENERATOR,
#line 6566
            .lvl = 70,
#line 6567
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6568
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6573
            .species = SPECIES_GLISCOR,
#line 6573
            .gender = TRAINER_MON_FEMALE,
#line 6573
            .heldItem = ITEM_TOXIC_ORB,
#line 6577
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6574
            .ability = ABILITY_POISON_HEAL,
#line 6575
            .lvl = 70,
#line 6576
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6578
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6583
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .heldItem = ITEM_ASSAULT_VEST,
#line 6587
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6584
            .ability = ABILITY_CLEAR_BODY,
#line 6585
            .lvl = 70,
#line 6586
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6588
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6593
            .species = SPECIES_HONCHKROW,
#line 6593
            .gender = TRAINER_MON_MALE,
#line 6593
            .heldItem = ITEM_FOCUS_SASH,
#line 6597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6594
            .ability = ABILITY_MOXIE,
#line 6595
            .lvl = 70,
#line 6596
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6597
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 6602
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6603
            .ability = ABILITY_INFILTRATOR,
#line 6604
            .lvl = 70,
#line 6605
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6606
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6611
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103] =
    {
#line 6612
        .trainerName = _("SAMUEL"),
#line 6613
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6614
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6616
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6617
        .doubleBattle = FALSE,
#line 6618
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6620
            .species = SPECIES_SLOWPOKE,
#line 6620
            .gender = TRAINER_MON_MALE,
#line 6624
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6621
            .ability = ABILITY_REGENERATOR,
#line 6622
            .lvl = 5,
#line 6623
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6625
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6629
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6630
        .trainerName = _("SAMUEL"),
#line 6631
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6632
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6634
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6635
        .doubleBattle = FALSE,
#line 6636
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6638
            .species = SPECIES_SLOWPOKE,
#line 6638
            .gender = TRAINER_MON_MALE,
#line 6638
            .heldItem = ITEM_LIFE_ORB,
#line 6642
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6639
            .ability = ABILITY_REGENERATOR,
#line 6640
            .lvl = 49,
#line 6641
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6643
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6648
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6648
            .heldItem = ITEM_ROCKY_HELMET,
#line 6652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6649
            .ability = ABILITY_REGENERATOR,
#line 6650
            .lvl = 49,
#line 6651
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6652
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6657
            .species = SPECIES_GLIGAR,
#line 6657
            .gender = TRAINER_MON_FEMALE,
#line 6657
            .heldItem = ITEM_RAZOR_FANG,
#line 6661
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6658
            .ability = ABILITY_HYPER_CUTTER,
#line 6659
            .lvl = 49,
#line 6660
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6662
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6667
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6667
            .heldItem = ITEM_ASSAULT_VEST,
#line 6671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6668
            .ability = ABILITY_CLEAR_BODY,
#line 6669
            .lvl = 49,
#line 6670
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6671
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6676
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6676
            .heldItem = ITEM_FOCUS_SASH,
#line 6680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6677
            .ability = ABILITY_PRANKSTER,
#line 6678
            .lvl = 49,
#line 6679
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6680
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6685
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6686
        .trainerName = _("SAMUEL"),
#line 6687
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6688
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6691
        .doubleBattle = FALSE,
#line 6692
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6694
            .species = SPECIES_SLOWPOKE,
#line 6694
            .gender = TRAINER_MON_MALE,
#line 6694
            .heldItem = ITEM_SITRUS_BERRY,
#line 6698
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6695
            .ability = ABILITY_REGENERATOR,
#line 6696
            .lvl = 24,
#line 6697
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6699
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6704
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6704
            .heldItem = ITEM_LUM_BERRY,
#line 6708
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6705
            .ability = ABILITY_REGENERATOR,
#line 6706
            .lvl = 24,
#line 6707
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6709
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6714
            .species = SPECIES_GLIGAR,
#line 6714
            .gender = TRAINER_MON_FEMALE,
#line 6714
            .heldItem = ITEM_RAZOR_FANG,
#line 6718
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6715
            .ability = ABILITY_HYPER_CUTTER,
#line 6716
            .lvl = 24,
#line 6717
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6719
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6724
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6724
            .heldItem = ITEM_METAL_COAT,
#line 6728
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6725
            .ability = ABILITY_CLEAR_BODY,
#line 6726
            .lvl = 24,
#line 6727
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6728
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_HONE_CLAWS,
            },
            },
        },
    },
#line 6733
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6734
        .trainerName = _("ISAAC"),
#line 6735
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6736
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6738
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6739
        .doubleBattle = FALSE,
#line 6740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6742
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6743
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6746
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6747
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6750
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6751
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6754
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6755
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6758
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6759
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6762
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6763
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6766
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6767
        .trainerName = _("DAVIS"),
#line 6768
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6769
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6771
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6772
        .doubleBattle = FALSE,
#line 6773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6775
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6776
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6779
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6780
        .trainerName = _("MITCHELL"),
#line 6781
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6782
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6784
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6785
        .doubleBattle = FALSE,
#line 6786
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6788
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6789
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6792
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6793
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6796
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6797
        .trainerName = _("LYDIA"),
#line 6798
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6799
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6800
F_TRAINER_FEMALE | 
#line 6801
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6802
        .doubleBattle = FALSE,
#line 6803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6805
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6806
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6809
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6810
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6813
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6814
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6817
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6818
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6821
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6822
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6825
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6826
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6829
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6830
        .trainerName = _("HALLE"),
#line 6831
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6832
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6833
F_TRAINER_FEMALE | 
#line 6834
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6835
        .items = { ITEM_FULL_RESTORE },
#line 6836
        .doubleBattle = FALSE,
#line 6837
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6839
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6840
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6843
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6844
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6847
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6848
        .trainerName = _("GARRISON"),
#line 6849
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6850
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6853
        .doubleBattle = FALSE,
#line 6854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6856
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6857
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6860
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6861
        .trainerName = _("JACKSON"),
#line 6862
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6863
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6865
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6866
        .items = { ITEM_FULL_RESTORE },
#line 6867
        .doubleBattle = FALSE,
#line 6868
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6870
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6872
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6871
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6874
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6875
        .trainerName = _("LORENZO"),
#line 6876
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6877
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6879
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6880
        .items = { ITEM_FULL_RESTORE },
#line 6881
        .doubleBattle = FALSE,
#line 6882
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6884
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6886
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6885
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6888
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6890
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6889
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6892
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6894
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6893
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6896
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6897
        .trainerName = _("SEBASTIAN"),
#line 6898
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6899
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6901
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6902
        .items = { ITEM_FULL_RESTORE },
#line 6903
        .doubleBattle = FALSE,
#line 6904
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6906
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6908
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6907
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6910
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6911
        .trainerName = _("CATHERINE"),
#line 6912
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6913
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6914
F_TRAINER_FEMALE | 
#line 6915
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6916
        .items = { ITEM_FULL_RESTORE },
#line 6917
        .doubleBattle = FALSE,
#line 6918
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6920
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6921
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6924
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6926
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6925
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6928
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6929
        .trainerName = _("JENNA"),
#line 6930
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6931
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6932
F_TRAINER_FEMALE | 
#line 6933
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6934
        .items = { ITEM_FULL_RESTORE },
#line 6935
        .doubleBattle = FALSE,
#line 6936
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6938
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6940
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6939
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6942
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6944
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6943
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6946
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6948
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6947
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6950
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6951
        .trainerName = _("SOPHIA"),
#line 6952
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6953
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6954
F_TRAINER_FEMALE | 
#line 6955
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6956
        .items = { ITEM_FULL_RESTORE },
#line 6957
        .doubleBattle = FALSE,
#line 6958
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6960
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6962
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6961
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6964
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6966
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6965
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6968
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6969
        .trainerName = _("JULIO"),
#line 6970
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6971
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6973
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6974
        .doubleBattle = FALSE,
#line 6975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6977
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6978
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6981
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6982
        .trainerName = _("GRUNT"),
#line 6983
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6984
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6986
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6987
        .doubleBattle = FALSE,
#line 6988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6990
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6991
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6994
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6996
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6995
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6998
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6999
        .trainerName = _("GRUNT"),
#line 7000
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7001
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7002
F_TRAINER_FEMALE | 
#line 7003
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7004
        .doubleBattle = FALSE,
#line 7005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7007
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7008
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7011
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7012
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7015
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7016
        .trainerName = _("GRUNT"),
#line 7017
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7018
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7020
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7021
        .doubleBattle = FALSE,
#line 7022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7024
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7025
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7028
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7030
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7029
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7032
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7033
        .trainerName = _("MARC"),
#line 7034
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7035
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7037
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7038
        .doubleBattle = FALSE,
#line 7039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7041
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7043
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7042
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7045
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7047
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7046
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7049
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7050
        .trainerName = _("BRENDEN"),
#line 7051
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7052
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7054
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7055
        .doubleBattle = FALSE,
#line 7056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7058
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7060
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7059
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7062
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7063
        .trainerName = _("LILITH"),
#line 7064
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7065
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7066
F_TRAINER_FEMALE | 
#line 7067
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7068
        .doubleBattle = FALSE,
#line 7069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7071
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7073
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7072
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7075
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7076
        .trainerName = _("CRISTIAN"),
#line 7077
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7078
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7080
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7081
        .doubleBattle = FALSE,
#line 7082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7084
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7086
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7085
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7088
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7089
        .trainerName = _("SYLVIA"),
#line 7090
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7091
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7092
F_TRAINER_FEMALE | 
#line 7093
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7094
        .doubleBattle = FALSE,
#line 7095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7097
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7099
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7098
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7101
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7102
        .trainerName = _("LEONARDO"),
#line 7103
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7104
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7106
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7107
        .doubleBattle = FALSE,
#line 7108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7110
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7111
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7114
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7115
        .trainerName = _("ATHENA"),
#line 7116
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7117
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7118
F_TRAINER_FEMALE | 
#line 7119
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7120
        .items = { ITEM_HYPER_POTION },
#line 7121
        .doubleBattle = FALSE,
#line 7122
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7124
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7125
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7128
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7130
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7129
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7133
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7134
        .trainerName = _("HARRISON"),
#line 7135
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7136
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7138
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7139
        .doubleBattle = FALSE,
#line 7140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7142
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7143
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7146
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7147
        .trainerName = _("GRUNT"),
#line 7148
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7149
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7151
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7152
        .doubleBattle = FALSE,
#line 7153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7155
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7156
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7159
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7160
        .trainerName = _("CLARENCE"),
#line 7161
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7162
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7164
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7165
        .doubleBattle = FALSE,
#line 7166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7168
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7169
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7172
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7173
        .trainerName = _("TERRY"),
#line 7174
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7175
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7176
F_TRAINER_FEMALE | 
#line 7177
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7178
        .doubleBattle = FALSE,
#line 7179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7181
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7182
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7185
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7186
        .trainerName = _("NATE"),
#line 7187
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7188
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7190
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7191
        .doubleBattle = FALSE,
#line 7192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7194
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7195
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7198
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7199
        .trainerName = _("KATHLEEN"),
#line 7200
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7201
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7202
F_TRAINER_FEMALE | 
#line 7203
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7204
        .doubleBattle = FALSE,
#line 7205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7207
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7209
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7208
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7211
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7212
        .trainerName = _("CLIFFORD"),
#line 7213
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7214
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7216
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7217
        .doubleBattle = FALSE,
#line 7218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7220
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7221
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7224
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7225
        .trainerName = _("NICHOLAS"),
#line 7226
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7227
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7229
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7230
        .doubleBattle = FALSE,
#line 7231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7233
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7234
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7237
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7238
        .trainerName = _("GRUNT"),
#line 7239
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7240
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7241
F_TRAINER_FEMALE | 
#line 7242
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7243
        .doubleBattle = FALSE,
#line 7244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7246
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7247
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7250
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7251
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7254
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7255
        .trainerName = _("GRUNT"),
#line 7256
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7257
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7259
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7260
        .doubleBattle = FALSE,
#line 7261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7263
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7264
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7267
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7268
        .trainerName = _("GRUNT"),
#line 7269
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7270
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7272
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7273
        .doubleBattle = FALSE,
#line 7274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7276
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7277
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7280
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7281
        .trainerName = _("GRUNT"),
#line 7282
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7283
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7285
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7286
        .doubleBattle = FALSE,
#line 7287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7289
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7290
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7293
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7294
        .trainerName = _("GRUNT"),
#line 7295
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7296
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7298
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7299
        .doubleBattle = FALSE,
#line 7300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7302
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7303
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7306
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7307
        .trainerName = _("MACEY"),
#line 7308
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7309
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7310
F_TRAINER_FEMALE | 
#line 7311
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7312
        .doubleBattle = FALSE,
#line 7313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7315
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7316
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7319
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7320
        .trainerName = _("SAMUEL"),
#line 7321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7322
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7325
        .doubleBattle = FALSE,
#line 7326
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7328
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7328
            .heldItem = ITEM_RAZOR_FANG,
#line 7332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7329
            .ability = ABILITY_HYPER_CUTTER,
#line 7330
            .lvl = 16,
#line 7331
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7332
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7337
            .species = SPECIES_SLOWPOKE,
#line 7337
            .gender = TRAINER_MON_MALE,
#line 7337
            .heldItem = ITEM_SITRUS_BERRY,
#line 7341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7338
            .ability = ABILITY_REGENERATOR,
#line 7339
            .lvl = 16,
#line 7340
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7341
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7346
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7347
            .ability = ABILITY_REGENERATOR,
#line 7348
            .lvl = 16,
#line 7349
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7350
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 7355
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7355
            .heldItem = ITEM_SITRUS_BERRY,
#line 7359
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7356
            .ability = ABILITY_CLEAR_BODY,
#line 7357
            .lvl = 16,
#line 7358
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7359
                MOVE_TACKLE,
                MOVE_METAL_CLAW,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 7363
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7364
        .trainerName = _("PAXTON"),
#line 7365
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7366
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7368
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7369
        .doubleBattle = FALSE,
#line 7370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7372
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7373
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7376
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7377
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7380
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7381
        .trainerName = _("ISABELLA"),
#line 7382
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7383
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7384
F_TRAINER_FEMALE | 
#line 7385
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7386
        .doubleBattle = FALSE,
#line 7387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7389
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7390
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7393
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7394
        .trainerName = _("GRUNT"),
#line 7395
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7396
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7397
F_TRAINER_FEMALE | 
#line 7398
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7399
        .doubleBattle = FALSE,
#line 7400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7402
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7403
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7406
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7407
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7410
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7411
        .trainerName = _("TABITHA"),
#line 7412
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7413
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7415
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7416
        .doubleBattle = FALSE,
#line 7417
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7419
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7419
            .heldItem = ITEM_SITRUS_BERRY,
#line 7422
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7420
            .ability = ABILITY_DROUGHT,
#line 7421
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7423
                MOVE_RAPID_SPIN,
                MOVE_LAVA_PLUME,
                MOVE_IRON_DEFENSE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 7428
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7428
            .heldItem = ITEM_LUM_BERRY,
#line 7431
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7429
            .ability = ABILITY_LEVITATE,
#line 7430
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7432
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
                MOVE_TOXIC,
            },
            },
            {
#line 7437
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7437
            .heldItem = ITEM_SITRUS_BERRY,
#line 7440
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7438
            .ability = ABILITY_LEVITATE,
#line 7439
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7441
                MOVE_SCORCHING_SANDS,
                MOVE_EXTRASENSORY,
                MOVE_COSMIC_POWER,
                MOVE_IMPRISON,
            },
            },
            {
#line 7446
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7446
            .heldItem = ITEM_LUM_BERRY,
#line 7449
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7447
            .ability = ABILITY_OWN_TEMPO,
#line 7448
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7450
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 7455
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7456
        .trainerName = _("JONATHAN"),
#line 7457
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7458
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7460
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7461
        .items = { ITEM_HYPER_POTION },
#line 7462
        .doubleBattle = FALSE,
#line 7463
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7465
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7466
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7469
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7470
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7474
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7475
        .trainerName = _("MAXIE"),
#line 7476
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7477
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7479
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7480
        .doubleBattle = FALSE,
#line 7481
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7483
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7483
            .heldItem = ITEM_IRON_BALL,
#line 7486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7484
            .ability = ABILITY_HEAVY_METAL,
#line 7485
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7487
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_DRAGON_RUSH,
                MOVE_BULK_UP,
            },
            },
            {
#line 7492
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7492
            .heldItem = ITEM_SHARP_BEAK,
#line 7495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7493
            .ability = ABILITY_INNER_FOCUS,
#line 7494
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7496
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7501
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7501
            .heldItem = ITEM_MUSCLE_BAND,
#line 7504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7502
            .ability = ABILITY_IMMUNITY,
#line 7503
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7505
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7510
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7510
            .heldItem = ITEM_EXPERT_BELT,
#line 7513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7511
            .ability = ABILITY_UNNERVE,
#line 7512
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7514
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7519
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7519
            .heldItem = ITEM_ROCKY_HELMET,
#line 7522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7520
            .ability = ABILITY_ROCK_HEAD,
#line 7521
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7523
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7528
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7529
        .trainerName = _("MAXIE"),
#line 7530
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7531
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7533
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7534
        .doubleBattle = FALSE,
#line 7535
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7537
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7537
            .heldItem = ITEM_MUSCLE_BAND,
#line 7540
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7538
            .ability = ABILITY_HEAVY_METAL,
#line 7539
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7541
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7546
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7546
            .heldItem = ITEM_LUM_BERRY,
#line 7549
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7547
            .ability = ABILITY_IMMUNITY,
#line 7548
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7550
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_HONE_CLAWS,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7555
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7555
            .heldItem = ITEM_LUM_BERRY,
#line 7558
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7556
            .ability = ABILITY_UNNERVE,
#line 7557
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7559
                MOVE_FIRE_SPIN,
                MOVE_TORMENT,
                MOVE_SNARL,
                MOVE_HOWL,
            },
            },
            {
#line 7564
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .heldItem = ITEM_ROCKY_HELMET,
#line 7567
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7565
            .ability = ABILITY_ROCK_HEAD,
#line 7566
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7568
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7573
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7573
            .heldItem = ITEM_SHARP_BEAK,
#line 7576
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7574
            .ability = ABILITY_INNER_FOCUS,
#line 7575
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7577
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7582
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7583
        .trainerName = _("TIANA"),
#line 7584
        .trainerClass = TRAINER_CLASS_LASS,
#line 7585
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7586
F_TRAINER_FEMALE | 
#line 7587
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7588
        .doubleBattle = FALSE,
#line 7589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7591
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7592
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7595
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7596
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7599
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7600
        .trainerName = _("HALEY"),
#line 7601
        .trainerClass = TRAINER_CLASS_LASS,
#line 7602
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7603
F_TRAINER_FEMALE | 
#line 7604
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7605
        .doubleBattle = FALSE,
#line 7606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7608
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7609
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7612
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7613
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7616
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7617
        .trainerName = _("JANICE"),
#line 7618
        .trainerClass = TRAINER_CLASS_LASS,
#line 7619
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7620
F_TRAINER_FEMALE | 
#line 7621
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7622
        .doubleBattle = FALSE,
#line 7623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7625
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7626
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7629
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7630
        .trainerName = _("VIVI"),
#line 7631
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7632
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7633
F_TRAINER_FEMALE | 
#line 7634
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7635
        .doubleBattle = FALSE,
#line 7636
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7638
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7640
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7639
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7642
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7644
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7643
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7646
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7648
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7647
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7650
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7651
        .trainerName = _("SALLY"),
#line 7652
        .trainerClass = TRAINER_CLASS_LASS,
#line 7653
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7654
F_TRAINER_FEMALE | 
#line 7655
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7656
        .doubleBattle = FALSE,
#line 7657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7659
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7660
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7663
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7664
        .trainerName = _("ROBIN"),
#line 7665
        .trainerClass = TRAINER_CLASS_LASS,
#line 7666
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7667
F_TRAINER_FEMALE | 
#line 7668
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7669
        .doubleBattle = FALSE,
#line 7670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7672
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7673
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7676
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7677
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7680
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7681
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7685
    [DIFFICULTY_NORMAL][TRAINER_NAMI] =
    {
#line 7686
        .trainerName = _("NAMI"),
#line 7687
        .trainerClass = TRAINER_CLASS_LASS,
#line 7688
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7689
F_TRAINER_FEMALE | 
#line 7690
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7691
        .doubleBattle = FALSE,
#line 7692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7694
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7695
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7698
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7699
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7702
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7703
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7706
    [DIFFICULTY_NORMAL][TRAINER_KIDDO] =
    {
#line 7707
        .trainerName = _("KIDDO"),
#line 7708
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 7709
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 7711
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7712
        .doubleBattle = FALSE,
#line 7713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7715
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7716
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7718
                MOVE_AFTER_YOU,
                MOVE_PLAY_NICE,
            },
            },
            {
#line 7721
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7721
            .heldItem = ITEM_TOXIC_ORB,
#line 7723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7722
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7724
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7727
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .heldItem = ITEM_FLAME_ORB,
#line 7729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7728
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7730
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7733
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7734
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7736
                MOVE_ENCORE,
                MOVE_AMNESIA,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 7741
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7742
        .trainerName = _("ANDREA"),
#line 7743
        .trainerClass = TRAINER_CLASS_LASS,
#line 7744
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7745
F_TRAINER_FEMALE | 
#line 7746
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7747
        .doubleBattle = FALSE,
#line 7748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7750
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7752
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7751
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7754
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7755
        .trainerName = _("CRISSY"),
#line 7756
        .trainerClass = TRAINER_CLASS_LASS,
#line 7757
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7758
F_TRAINER_FEMALE | 
#line 7759
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7760
        .doubleBattle = FALSE,
#line 7761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7763
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7765
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7764
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7767
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7768
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7771
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7772
        .trainerName = _("RICK"),
#line 7773
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7774
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7776
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7777
        .doubleBattle = FALSE,
#line 7778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7780
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7781
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7784
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7785
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7788
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7789
        .trainerName = _("LYLE"),
#line 7790
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7791
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7793
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7794
        .doubleBattle = FALSE,
#line 7795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7797
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7798
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7801
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7802
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7805
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7806
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7809
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7810
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7813
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7814
        .trainerName = _("JOSIE"),
#line 7815
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7816
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7818
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7819
        .doubleBattle = FALSE,
#line 7820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7822
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7824
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7823
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7826
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7827
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7830
    [DIFFICULTY_NORMAL][TRAINER_BONNEY] =
    {
#line 7831
        .trainerName = _("BONNEY"),
#line 7832
        .trainerClass = TRAINER_CLASS_LADY,
#line 7833
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 7834
F_TRAINER_FEMALE | 
#line 7835
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7836
        .doubleBattle = TRUE,
#line 7837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7839
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7841
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7840
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7843
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7845
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7844
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7847
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7848
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7851
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7853
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7852
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7855
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7856
        .trainerName = _("DOUG"),
#line 7857
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7858
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7860
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7861
        .doubleBattle = FALSE,
#line 7862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7864
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7865
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7868
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7869
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7872
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7873
        .trainerName = _("GREG"),
#line 7874
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7875
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7877
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7878
        .doubleBattle = FALSE,
#line 7879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7881
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7882
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7885
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7886
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7889
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7890
        .trainerName = _("KENT"),
#line 7891
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7892
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7894
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7895
        .doubleBattle = FALSE,
#line 7896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7898
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7899
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7902
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7903
        .trainerName = _("JAMES"),
#line 7904
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7905
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7907
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7908
        .doubleBattle = FALSE,
#line 7909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7911
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7912
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7915
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7916
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7919
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7920
        .trainerName = _("BRICE"),
#line 7921
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7922
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7924
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7925
        .doubleBattle = FALSE,
#line 7926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7928
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7929
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7932
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7933
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7936
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7937
        .trainerName = _("TRENT"),
#line 7938
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7939
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7941
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7942
        .doubleBattle = FALSE,
#line 7943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7945
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7946
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7949
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7950
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7953
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7954
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7957
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7958
        .trainerName = _("LENNY"),
#line 7959
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7960
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7962
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7963
        .doubleBattle = FALSE,
#line 7964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7966
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7967
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7970
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7971
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7974
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7975
        .trainerName = _("LUCAS"),
#line 7976
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7977
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7979
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7980
        .doubleBattle = FALSE,
#line 7981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7983
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7984
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7987
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7988
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7991
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7992
        .trainerName = _("ALAN"),
#line 7993
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7994
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7996
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7997
        .doubleBattle = FALSE,
#line 7998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8000
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8001
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8004
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8005
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8008
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8009
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8012
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8013
        .trainerName = _("CLARK"),
#line 8014
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8015
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8017
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8018
        .doubleBattle = FALSE,
#line 8019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8021
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8022
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8025
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8026
        .trainerName = _("ERIC"),
#line 8027
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8028
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8030
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8031
        .doubleBattle = FALSE,
#line 8032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8034
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8035
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8038
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8039
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8042
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 8043
        .trainerName = _("MIKE"),
#line 8044
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8045
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8047
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8048
        .doubleBattle = FALSE,
#line 8049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8051
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8052
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8055
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8056
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8059
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8060
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8063
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8064
        .trainerName = _("DEZ & LUKE"),
#line 8065
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8066
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8068
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8069
        .doubleBattle = TRUE,
#line 8070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8072
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8073
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8076
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8077
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8080
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8081
        .trainerName = _("LEA & JED"),
#line 8082
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8083
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8085
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8086
        .doubleBattle = TRUE,
#line 8087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8089
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8090
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8093
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8094
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8097
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8098
        .trainerName = _("KIRA & DAN"),
#line 8099
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8100
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8102
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8103
        .doubleBattle = TRUE,
#line 8104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8106
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8107
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8110
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8111
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8114
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8115
        .trainerName = _("JOHANNA"),
#line 8116
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8117
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8118
F_TRAINER_FEMALE | 
#line 8119
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8120
        .doubleBattle = FALSE,
#line 8121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8123
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8124
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8127
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8128
        .trainerName = _("GERALD"),
#line 8129
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8130
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8132
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8133
        .items = { ITEM_HYPER_POTION },
#line 8134
        .doubleBattle = FALSE,
#line 8135
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8137
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8138
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8142
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8143
        .trainerName = _("VIVIAN"),
#line 8144
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8145
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8146
F_TRAINER_FEMALE | 
#line 8147
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8148
        .doubleBattle = FALSE,
#line 8149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8151
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8153
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8152
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8155
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8157
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8156
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8159
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8160
        .trainerName = _("DANIELLE"),
#line 8161
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8162
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8163
F_TRAINER_FEMALE | 
#line 8164
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8165
        .doubleBattle = FALSE,
#line 8166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8168
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8170
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8169
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8172
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8173
        .trainerName = _("HIDEO"),
#line 8174
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8175
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8177
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8178
        .doubleBattle = FALSE,
#line 8179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8181
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8182
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8185
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8186
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8190
        .trainerName = _("KEIGO"),
#line 8191
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8192
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8194
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8195
        .doubleBattle = FALSE,
#line 8196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8198
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8199
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8202
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8203
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8206
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8207
        .trainerName = _("RILEY"),
#line 8208
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8209
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8211
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8212
        .doubleBattle = FALSE,
#line 8213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8215
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8216
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8219
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8220
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8223
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8224
        .trainerName = _("FLINT"),
#line 8225
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8226
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8228
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8229
        .doubleBattle = FALSE,
#line 8230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8232
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8233
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8236
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8238
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8237
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8240
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8241
        .trainerName = _("ASHLEY"),
#line 8242
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8243
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8244
F_TRAINER_FEMALE | 
#line 8245
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8246
        .doubleBattle = FALSE,
#line 8247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8249
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8251
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8250
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8253
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8255
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8254
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8257
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8259
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8258
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8261
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8262
        .trainerName = _("CHAD"),
#line 8263
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8264
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8266
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8267
        .doubleBattle = TRUE,
#line 8268
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8270
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8271
            .ability = ABILITY_STURDY,
#line 8272
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8273
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 8276
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8277
            .ability = ABILITY_SAND_STREAM,
#line 8278
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8279
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 8284
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8285
            .ability = ABILITY_LIGHTNING_ROD,
#line 8286
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8287
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 8291
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8292
            .ability = ABILITY_SAND_VEIL,
#line 8293
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8294
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 8298
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8299
        .trainerName = _("SAMUEL"),
#line 8300
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8301
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8303
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8304
        .doubleBattle = TRUE,
#line 8305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8307
            .species = SPECIES_SLOWKING,
#line 8307
            .gender = TRAINER_MON_MALE,
#line 8307
            .heldItem = ITEM_LIFE_ORB,
#line 8311
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8308
            .ability = ABILITY_REGENERATOR,
#line 8309
            .lvl = 54,
#line 8310
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8312
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8317
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8317
            .heldItem = ITEM_ROCKY_HELMET,
#line 8321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8318
            .ability = ABILITY_REGENERATOR,
#line 8319
            .lvl = 54,
#line 8320
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8321
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8326
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8326
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8327
            .ability = ABILITY_INFILTRATOR,
#line 8328
            .lvl = 54,
#line 8329
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8330
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8335
            .species = SPECIES_GLISCOR,
#line 8335
            .gender = TRAINER_MON_FEMALE,
#line 8335
            .heldItem = ITEM_TOXIC_ORB,
#line 8339
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8336
            .ability = ABILITY_POISON_HEAL,
#line 8337
            .lvl = 54,
#line 8338
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8340
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8345
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8345
            .heldItem = ITEM_ASSAULT_VEST,
#line 8349
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8346
            .ability = ABILITY_CLEAR_BODY,
#line 8347
            .lvl = 54,
#line 8348
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8350
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8355
            .species = SPECIES_HONCHKROW,
#line 8355
            .gender = TRAINER_MON_MALE,
#line 8355
            .heldItem = ITEM_FOCUS_SASH,
#line 8359
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8356
            .ability = ABILITY_MOXIE,
#line 8357
            .lvl = 54,
#line 8358
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8360
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8365
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8366
        .trainerName = _("JONAH"),
#line 8367
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8368
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8370
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8371
        .doubleBattle = FALSE,
#line 8372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8374
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8375
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8378
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8379
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8382
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8383
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8386
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8387
        .trainerName = _("HENRY"),
#line 8388
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8389
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8391
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8392
        .doubleBattle = FALSE,
#line 8393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8395
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8396
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8399
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8400
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8403
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8404
        .trainerName = _("ROGER"),
#line 8405
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8406
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8408
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8409
        .doubleBattle = FALSE,
#line 8410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8412
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8413
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8416
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8417
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8420
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8421
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8424
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8425
        .trainerName = _("ALEXA"),
#line 8426
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8427
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8428
F_TRAINER_FEMALE | 
#line 8429
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8430
        .items = { ITEM_FULL_RESTORE },
#line 8431
        .doubleBattle = FALSE,
#line 8432
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8434
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8435
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8438
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8440
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8439
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8442
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8443
        .trainerName = _("RUBEN"),
#line 8444
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8445
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8447
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8448
        .items = { ITEM_HYPER_POTION },
#line 8449
        .doubleBattle = FALSE,
#line 8450
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8452
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8454
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8453
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8456
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8458
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8457
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8460
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8461
        .trainerName = _("KOJI"),
#line 8462
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8463
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8465
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8466
        .doubleBattle = FALSE,
#line 8467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8469
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8470
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8473
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8474
        .trainerName = _("WAYNE"),
#line 8475
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8476
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8478
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8479
        .doubleBattle = FALSE,
#line 8480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8482
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8483
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8486
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8487
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8490
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8491
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8494
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8495
        .trainerName = _("AIDAN"),
#line 8496
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8497
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8499
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8500
        .doubleBattle = FALSE,
#line 8501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8503
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8504
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8507
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8508
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8511
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8512
        .trainerName = _("REED"),
#line 8513
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8514
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8516
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8517
        .doubleBattle = FALSE,
#line 8518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8520
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8521
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8524
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8525
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8528
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8529
        .trainerName = _("TISHA"),
#line 8530
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8531
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8532
F_TRAINER_FEMALE | 
#line 8533
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8534
        .doubleBattle = FALSE,
#line 8535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8537
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8538
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8541
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8542
        .trainerName = _("TORI & TIA"),
#line 8543
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8544
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8546
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8547
        .doubleBattle = TRUE,
#line 8548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8550
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8551
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8554
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8555
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8558
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8559
        .trainerName = _("KIM & IRIS"),
#line 8560
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8561
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8563
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8564
        .doubleBattle = TRUE,
#line 8565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8567
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8568
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8571
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8572
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8575
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8576
        .trainerName = _("TYRA & IVY"),
#line 8577
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8578
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8580
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8581
        .doubleBattle = TRUE,
#line 8582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8584
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8585
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8588
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8589
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8593
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8594
        .trainerName = _("MEL & PAUL"),
#line 8595
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8596
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8598
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8599
        .doubleBattle = TRUE,
#line 8600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8602
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8603
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8606
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8607
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8610
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8611
        .trainerName = _("JOHN & JAY"),
#line 8612
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8613
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8615
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8616
        .doubleBattle = TRUE,
#line 8617
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8619
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8621
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8620
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8623
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8625
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8624
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8627
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8628
        .trainerName = _("RELI & IAN"),
#line 8629
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8630
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8632
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8633
        .doubleBattle = TRUE,
#line 8634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8636
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8637
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8640
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8641
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8644
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8645
        .trainerName = _("LILA & ROY"),
#line 8646
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8647
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8649
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8650
        .doubleBattle = TRUE,
#line 8651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8653
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8654
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8657
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8658
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8661
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8662
        .trainerName = _("LISA & RAY"),
#line 8663
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8664
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8666
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8667
        .doubleBattle = TRUE,
#line 8668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8670
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8671
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8674
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8675
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8678
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8679
        .trainerName = _("CHRIS"),
#line 8680
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8681
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8683
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8684
        .doubleBattle = FALSE,
#line 8685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8687
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8688
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8691
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8692
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8695
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8696
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8699
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8700
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8703
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8704
        .trainerName = _("DAWSON"),
#line 8705
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8706
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8708
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8709
        .doubleBattle = FALSE,
#line 8710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8712
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8712
            .heldItem = ITEM_NUGGET,
#line 8714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8713
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8716
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8717
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8720
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8721
        .trainerName = _("SARAH"),
#line 8722
        .trainerClass = TRAINER_CLASS_LADY,
#line 8723
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8724
F_TRAINER_FEMALE | 
#line 8725
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8726
        .items = { ITEM_FULL_RESTORE },
#line 8727
        .doubleBattle = FALSE,
#line 8728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8730
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8731
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8734
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8734
            .heldItem = ITEM_NUGGET,
#line 8736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8735
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8738
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8739
        .trainerName = _("DARIAN"),
#line 8740
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8741
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8743
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8744
        .doubleBattle = FALSE,
#line 8745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8747
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8748
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8751
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8752
        .trainerName = _("HAILEY"),
#line 8753
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8754
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8755
F_TRAINER_FEMALE | 
#line 8756
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8757
        .doubleBattle = FALSE,
#line 8758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8760
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8761
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8764
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8765
        .trainerName = _("CHANDLER"),
#line 8766
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8767
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8769
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8770
        .doubleBattle = FALSE,
#line 8771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8773
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8774
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8777
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8778
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8781
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8782
        .trainerName = _("KALEB"),
#line 8783
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8784
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8786
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8787
        .doubleBattle = FALSE,
#line 8788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8790
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8790
            .heldItem = ITEM_ORAN_BERRY,
#line 8792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8791
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8794
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8794
            .heldItem = ITEM_ORAN_BERRY,
#line 8796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8795
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8798
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8799
        .trainerName = _("JOSEPH"),
#line 8800
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8801
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8803
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8804
        .doubleBattle = FALSE,
#line 8805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8807
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8808
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8811
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8812
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8815
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8816
        .trainerName = _("ALYSSA"),
#line 8817
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8818
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8819
F_TRAINER_FEMALE | 
#line 8820
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8821
        .doubleBattle = FALSE,
#line 8822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8824
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8825
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8828
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8829
        .trainerName = _("MARCOS"),
#line 8830
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8831
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8833
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8834
        .doubleBattle = FALSE,
#line 8835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8837
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8839
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8838
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8841
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8842
        .trainerName = _("RHETT"),
#line 8843
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8844
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8846
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8847
        .doubleBattle = FALSE,
#line 8848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8850
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8852
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8851
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8854
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8855
        .trainerName = _("TYRON"),
#line 8856
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8857
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8859
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8860
        .doubleBattle = FALSE,
#line 8861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8863
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8864
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8867
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8868
        .trainerName = _("CELINA"),
#line 8869
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8870
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8871
F_TRAINER_FEMALE | 
#line 8872
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8873
        .doubleBattle = FALSE,
#line 8874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8876
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8877
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8880
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8881
        .trainerName = _("BIANCA"),
#line 8882
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8883
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8884
F_TRAINER_FEMALE | 
#line 8885
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8886
        .doubleBattle = FALSE,
#line 8887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8889
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8890
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8893
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8894
        .trainerName = _("HAYDEN"),
#line 8895
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8896
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8898
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8899
        .doubleBattle = FALSE,
#line 8900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8902
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8903
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8906
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8907
        .trainerName = _("SOPHIE"),
#line 8908
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8909
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8910
F_TRAINER_FEMALE | 
#line 8911
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8912
        .doubleBattle = FALSE,
#line 8913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8915
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8916
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8919
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8920
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8923
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8924
        .trainerName = _("COBY"),
#line 8925
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8926
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8928
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8929
        .doubleBattle = FALSE,
#line 8930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8932
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8933
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8936
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8937
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8940
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8941
        .trainerName = _("LAWRENCE"),
#line 8942
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8943
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8945
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8946
        .doubleBattle = FALSE,
#line 8947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8949
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8950
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8953
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8954
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8957
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8958
        .trainerName = _("WYATT"),
#line 8959
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8960
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8962
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8963
        .doubleBattle = FALSE,
#line 8964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8966
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8967
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8970
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8971
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8974
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8975
        .trainerName = _("ANGELINA"),
#line 8976
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8977
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8978
F_TRAINER_FEMALE | 
#line 8979
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8980
        .doubleBattle = FALSE,
#line 8981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8983
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8984
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8987
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8988
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8991
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8992
        .trainerName = _("KAI"),
#line 8993
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8994
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8996
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8997
        .doubleBattle = FALSE,
#line 8998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9000
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9001
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9004
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9005
        .trainerName = _("CHARLOTTE"),
#line 9006
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9007
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9008
F_TRAINER_FEMALE | 
#line 9009
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9010
        .doubleBattle = FALSE,
#line 9011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9013
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9014
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9017
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9018
        .trainerName = _("DEANDRE"),
#line 9019
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9020
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9022
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9023
        .doubleBattle = FALSE,
#line 9024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9026
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9027
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9030
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9031
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9034
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9035
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9038
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9039
        .trainerName = _("GRUNT"),
#line 9040
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9041
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9043
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9044
        .doubleBattle = FALSE,
#line 9045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9047
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9048
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9051
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9052
        .trainerName = _("GRUNT"),
#line 9053
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9054
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9056
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9057
        .doubleBattle = FALSE,
#line 9058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9060
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9061
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9064
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9065
        .trainerName = _("GRUNT"),
#line 9066
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9067
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9069
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9070
        .doubleBattle = FALSE,
#line 9071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9073
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9074
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9077
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9078
        .trainerName = _("GRUNT"),
#line 9079
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9080
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9082
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9083
        .doubleBattle = FALSE,
#line 9084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9086
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9087
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9090
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9091
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9094
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9095
        .trainerName = _("GRUNT"),
#line 9096
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9097
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9099
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9100
        .doubleBattle = FALSE,
#line 9101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9103
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9104
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9107
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9108
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9111
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9112
        .trainerName = _("GRUNT"),
#line 9113
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9114
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9116
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9117
        .doubleBattle = FALSE,
#line 9118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9120
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9121
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9124
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9125
        .trainerName = _("GRUNT"),
#line 9126
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9127
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9129
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9130
        .doubleBattle = FALSE,
#line 9131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9133
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9134
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9137
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9138
        .trainerName = _("GRUNT"),
#line 9139
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9140
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9142
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9143
        .doubleBattle = FALSE,
#line 9144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9146
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9147
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9150
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9151
        .trainerName = _("GRUNT"),
#line 9152
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9153
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9155
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9156
        .doubleBattle = FALSE,
#line 9157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9159
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9160
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9163
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9164
        .trainerName = _("GRUNT"),
#line 9165
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9166
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9168
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9169
        .doubleBattle = FALSE,
#line 9170
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9172
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9173
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9176
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9177
        .trainerName = _("GRUNT"),
#line 9178
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9179
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9181
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9182
        .doubleBattle = FALSE,
#line 9183
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9185
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9187
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9186
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9189
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9190
        .trainerName = _("GRUNT"),
#line 9191
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9192
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9194
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9195
        .doubleBattle = FALSE,
#line 9196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9198
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9199
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9202
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9203
        .trainerName = _("GRUNT"),
#line 9204
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9205
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9207
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9208
        .doubleBattle = FALSE,
#line 9209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9211
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9212
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9215
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9216
        .trainerName = _("GRUNT"),
#line 9217
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9218
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9219
F_TRAINER_FEMALE | 
#line 9220
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9221
        .doubleBattle = FALSE,
#line 9222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9224
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9225
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9228
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9229
        .trainerName = _("GRUNT"),
#line 9230
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9231
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9232
F_TRAINER_FEMALE | 
#line 9233
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9234
        .doubleBattle = FALSE,
#line 9235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9237
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9238
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9241
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9242
        .trainerName = _("GRUNT"),
#line 9243
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9244
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9245
F_TRAINER_FEMALE | 
#line 9246
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9247
        .doubleBattle = FALSE,
#line 9248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9250
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9251
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9254
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9255
        .trainerName = _("TABITHA"),
#line 9256
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9257
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9259
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9260
        .doubleBattle = FALSE,
#line 9261
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9263
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9263
            .heldItem = ITEM_SITRUS_BERRY,
#line 9266
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9264
            .ability = ABILITY_DROUGHT,
#line 9265
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9267
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9272
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9272
            .heldItem = ITEM_POISON_BARB,
#line 9275
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9273
            .ability = ABILITY_LEVITATE,
#line 9274
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9276
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9281
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9281
            .heldItem = ITEM_LIFE_ORB,
#line 9284
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9282
            .ability = ABILITY_LEVITATE,
#line 9283
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9285
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9290
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9290
            .heldItem = ITEM_FOCUS_SASH,
#line 9293
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9291
            .ability = ABILITY_OWN_TEMPO,
#line 9292
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9294
                MOVE_EARTHQUAKE,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_FISSURE,
            },
            },
        },
    },
#line 9299
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9300
        .trainerName = _("DARCY"),
#line 9301
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9302
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9303
F_TRAINER_FEMALE | 
#line 9304
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9305
        .items = { ITEM_HYPER_POTION },
#line 9306
        .doubleBattle = FALSE,
#line 9307
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9309
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9310
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9313
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9314
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9317
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9318
        .trainerName = _("MAXIE"),
#line 9319
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9320
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9322
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9323
        .doubleBattle = FALSE,
#line 9324
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9326
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9326
            .heldItem = ITEM_ROCKY_HELMET,
#line 9329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9327
            .ability = ABILITY_ROCK_HEAD,
#line 9328
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9330
                MOVE_EARTHQUAKE,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 9335
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9335
            .heldItem = ITEM_AIR_BALLOON,
#line 9338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9336
            .ability = ABILITY_HEAVY_METAL,
#line 9337
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9339
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9344
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9344
            .heldItem = ITEM_SHARP_BEAK,
#line 9347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9345
            .ability = ABILITY_INNER_FOCUS,
#line 9346
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9348
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9353
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9354
        .trainerName = _("PETE"),
#line 9355
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9356
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9358
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9359
        .doubleBattle = FALSE,
#line 9360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9362
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9363
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9366
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9367
        .trainerName = _("ISABELLE"),
#line 9368
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9369
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9370
F_TRAINER_FEMALE | 
#line 9371
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9372
        .doubleBattle = FALSE,
#line 9373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9375
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9376
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9379
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9380
        .trainerName = _("ANDRES"),
#line 9381
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9382
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9384
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9385
        .doubleBattle = FALSE,
#line 9386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9388
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9390
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9389
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9392
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9394
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9393
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9396
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9397
        .trainerName = _("JOSUE"),
#line 9398
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9399
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9401
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9402
        .doubleBattle = FALSE,
#line 9403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9405
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9407
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9406
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9409
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9411
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9410
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9413
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9414
        .trainerName = _("CAMRON"),
#line 9415
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9416
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9418
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9419
        .doubleBattle = FALSE,
#line 9420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9422
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9423
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9426
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9427
        .trainerName = _("CORY"),
#line 9428
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9429
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9431
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9432
        .doubleBattle = FALSE,
#line 9433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9435
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9436
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9439
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9440
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9443
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9444
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9447
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9448
        .trainerName = _("CAROLINA"),
#line 9449
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9450
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9451
F_TRAINER_FEMALE | 
#line 9452
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9453
        .items = { ITEM_HYPER_POTION },
#line 9454
        .doubleBattle = FALSE,
#line 9455
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9457
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9458
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9461
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9463
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9462
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9465
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9467
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9466
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9469
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9470
        .trainerName = _("ELIJAH"),
#line 9471
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9472
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9474
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9475
        .doubleBattle = FALSE,
#line 9476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9478
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9479
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9482
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9483
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9486
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9487
        .trainerName = _("CELIA"),
#line 9488
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9489
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9490
F_TRAINER_FEMALE | 
#line 9491
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9492
        .doubleBattle = FALSE,
#line 9493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9495
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9496
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9499
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9500
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9503
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9504
        .trainerName = _("BRYAN"),
#line 9505
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9506
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9508
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9509
        .doubleBattle = FALSE,
#line 9510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9512
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9513
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9516
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9517
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9520
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9521
        .trainerName = _("BRANDEN"),
#line 9522
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9523
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9525
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9526
        .doubleBattle = FALSE,
#line 9527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9529
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9530
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9533
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9534
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9537
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9538
        .trainerName = _("BRYANT"),
#line 9539
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9540
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9542
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9543
        .doubleBattle = FALSE,
#line 9544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9546
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9547
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9550
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9551
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9555
        .trainerName = _("SHAYLA"),
#line 9556
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9557
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9558
F_TRAINER_FEMALE | 
#line 9559
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9560
        .doubleBattle = FALSE,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9568
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9572
        .trainerName = _("KYRA"),
#line 9573
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9574
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9575
F_TRAINER_FEMALE | 
#line 9576
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9577
        .doubleBattle = FALSE,
#line 9578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9580
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9584
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9585
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9589
        .trainerName = _("JAIDEN"),
#line 9590
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9591
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9593
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9594
        .doubleBattle = FALSE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9598
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9601
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9602
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9605
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9606
        .trainerName = _("ALIX"),
#line 9607
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9608
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9609
F_TRAINER_FEMALE | 
#line 9610
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9611
        .doubleBattle = FALSE,
#line 9612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9614
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9615
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9618
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9619
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9622
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9623
        .trainerName = _("HELENE"),
#line 9624
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9625
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9626
F_TRAINER_FEMALE | 
#line 9627
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9628
        .doubleBattle = FALSE,
#line 9629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9631
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9632
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9635
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9636
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9639
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9640
        .trainerName = _("MARLENE"),
#line 9641
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9642
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9643
F_TRAINER_FEMALE | 
#line 9644
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9645
        .doubleBattle = FALSE,
#line 9646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9648
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9649
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9652
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9653
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9656
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9657
        .trainerName = _("DEVAN"),
#line 9658
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9659
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9661
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9662
        .doubleBattle = FALSE,
#line 9663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9665
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9666
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9669
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9670
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9673
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9674
        .trainerName = _("JOHNSON"),
#line 9675
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9676
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9678
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9679
        .doubleBattle = FALSE,
#line 9680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9682
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9683
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9686
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9687
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9690
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9691
        .trainerName = _("MELINA"),
#line 9692
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9693
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9694
F_TRAINER_FEMALE | 
#line 9695
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9696
        .doubleBattle = FALSE,
#line 9697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9699
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9700
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9703
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9704
        .trainerName = _("MELISSA"),
#line 9705
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9706
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9707
F_TRAINER_FEMALE | 
#line 9708
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9709
        .doubleBattle = FALSE,
#line 9710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9712
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9713
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9716
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9717
        .trainerName = _("BRANDI"),
#line 9718
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9719
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9720
F_TRAINER_FEMALE | 
#line 9721
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9722
        .doubleBattle = FALSE,
#line 9723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9725
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9726
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9729
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9730
        .trainerName = _("AISHA"),
#line 9731
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9732
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9733
F_TRAINER_FEMALE | 
#line 9734
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9735
        .doubleBattle = FALSE,
#line 9736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9738
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9739
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9742
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9743
        .trainerName = _("MAKAYLA"),
#line 9744
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9745
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9746
F_TRAINER_FEMALE | 
#line 9747
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9748
        .items = { ITEM_HYPER_POTION },
#line 9749
        .doubleBattle = FALSE,
#line 9750
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9752
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9753
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9756
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9757
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9760
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9761
        .trainerName = _("FABIAN"),
#line 9762
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9763
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9765
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9766
        .doubleBattle = FALSE,
#line 9767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9769
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9770
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9773
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9774
        .trainerName = _("DAYTON"),
#line 9775
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9776
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9778
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9779
        .doubleBattle = FALSE,
#line 9780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9782
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9783
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9786
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9787
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9790
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9791
        .trainerName = _("RACHEL"),
#line 9792
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9793
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9794
F_TRAINER_FEMALE | 
#line 9795
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9796
        .doubleBattle = FALSE,
#line 9797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9799
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9800
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9803
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9804
        .trainerName = _("LEONEL"),
#line 9805
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9806
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9808
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9809
        .items = { ITEM_HYPER_POTION },
#line 9810
        .doubleBattle = FALSE,
#line 9811
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9813
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9814
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9817
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9818
        .trainerName = _("CALLIE"),
#line 9819
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9820
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9821
F_TRAINER_FEMALE | 
#line 9822
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9823
        .doubleBattle = FALSE,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9826
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9827
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9830
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9831
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9834
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9835
        .trainerName = _("CALE"),
#line 9836
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9837
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9839
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9840
        .doubleBattle = FALSE,
#line 9841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9843
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9844
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9847
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9848
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9851
    [DIFFICULTY_NORMAL][TRAINER_SONDHEIM] =
    {
#line 9852
        .trainerName = _("SONDHEIM"),
#line 9853
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9854
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9856
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9857
        .doubleBattle = FALSE,
#line 9858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9860
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9861
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9864
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9865
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9868
    [DIFFICULTY_NORMAL][TRAINER_ASHER] =
    {
#line 9869
        .trainerName = _("ASHER"),
#line 9870
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9871
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9873
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9874
        .doubleBattle = FALSE,
#line 9875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9877
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9878
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9881
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9882
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9886
    [DIFFICULTY_NORMAL][TRAINER_BRIDGETTE] =
    {
#line 9887
        .trainerName = _("BRIDGETTE"),
#line 9888
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9889
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9890
F_TRAINER_FEMALE | 
#line 9891
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9892
        .doubleBattle = FALSE,
#line 9893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9895
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9896
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9899
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9900
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9903
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9904
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9907
    [DIFFICULTY_NORMAL][TRAINER_FLAVIA] =
    {
#line 9908
        .trainerName = _("FLAVIA"),
#line 9909
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9910
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9911
F_TRAINER_FEMALE | 
#line 9912
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9913
        .doubleBattle = FALSE,
#line 9914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9916
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9917
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9920
    [DIFFICULTY_NORMAL][TRAINER_OLIVE] =
    {
#line 9921
        .trainerName = _("OLIVE"),
#line 9922
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9923
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9924
F_TRAINER_FEMALE | 
#line 9925
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9926
        .doubleBattle = FALSE,
#line 9927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9929
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9930
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9933
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9934
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9937
    [DIFFICULTY_NORMAL][TRAINER_VIOLA] =
    {
#line 9938
        .trainerName = _("VIOLA"),
#line 9939
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9940
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9941
F_TRAINER_FEMALE | 
#line 9942
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9943
        .doubleBattle = FALSE,
#line 9944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9946
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9947
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9950
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9951
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9955
    [DIFFICULTY_NORMAL][TRAINER_REIJU] =
    {
#line 9956
        .trainerName = _("VIOLA"),
#line 9957
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9958
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9959
F_TRAINER_FEMALE | 
#line 9960
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9961
        .doubleBattle = FALSE,
#line 9962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9964
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9965
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9968
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9969
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9972
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9973
        .trainerName = _("MYLES"),
#line 9974
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9975
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9977
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9978
        .doubleBattle = FALSE,
#line 9979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9981
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9983
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9982
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9985
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9987
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9986
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9989
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9991
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9990
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9993
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9994
        .trainerName = _("PAT"),
#line 9995
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9996
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9997
F_TRAINER_FEMALE | 
#line 9998
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9999
        .doubleBattle = FALSE,
#line 10000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10002
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10004
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10003
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10006
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10008
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10007
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10010
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10011
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10015
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10016
        .trainerName = _("CRISTIN"),
#line 10017
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10018
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10019
F_TRAINER_FEMALE | 
#line 10020
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10021
        .items = { ITEM_HYPER_POTION },
#line 10022
        .doubleBattle = FALSE,
#line 10023
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10025
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10027
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10026
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10029
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10031
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10030
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10033
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10034
        .trainerName = _("GRUNT"),
#line 10035
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10036
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10038
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10039
        .doubleBattle = FALSE,
#line 10040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10042
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10042
            .heldItem = ITEM_EVIOLITE,
#line 10044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10043
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10045
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10046
        .trainerName = _("GRUNT"),
#line 10047
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10048
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10050
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10051
        .doubleBattle = FALSE,
#line 10052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10054
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10055
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10057
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10058
        .trainerName = _("GRUNT"),
#line 10059
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10060
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10062
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10063
        .doubleBattle = FALSE,
#line 10064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10066
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10067
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10069
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10070
        .trainerName = _("GRUNT"),
#line 10071
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10072
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10074
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10075
        .doubleBattle = FALSE,
#line 10076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10078
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10079
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10081
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10082
        .trainerName = _("GRUNT"),
#line 10083
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10084
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10086
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10087
        .doubleBattle = FALSE,
#line 10088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10090
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10091
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10093
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10094
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10096
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_1] =
    {
#line 10097
        .trainerName = _("GRUNT"),
#line 10098
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10099
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10101
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10102
        .doubleBattle = FALSE,
#line 10103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10105
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10106
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10109
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_2] =
    {
#line 10110
        .trainerName = _("GRUNT"),
#line 10111
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10112
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10114
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10115
        .doubleBattle = FALSE,
#line 10116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10118
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10119
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10121
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_3] =
    {
#line 10122
        .trainerName = _("GRUNT"),
#line 10123
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10124
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10126
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10127
        .doubleBattle = FALSE,
#line 10128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10130
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10131
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10133
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_4] =
    {
#line 10134
        .trainerName = _("GRUNT"),
#line 10135
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10136
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10138
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10139
        .doubleBattle = FALSE,
#line 10140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10142
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10143
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10145
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10146
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10148
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_5] =
    {
#line 10149
        .trainerName = _("GRUNT"),
#line 10150
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10151
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10153
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10154
        .doubleBattle = FALSE,
#line 10155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10157
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10158
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10160
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_6] =
    {
#line 10161
        .trainerName = _("GRUNT"),
#line 10162
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10163
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10165
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10166
        .doubleBattle = FALSE,
#line 10167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10169
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10170
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10172
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10173
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10175
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_7] =
    {
#line 10176
        .trainerName = _("GRUNT"),
#line 10177
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10178
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10180
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10181
        .doubleBattle = FALSE,
#line 10182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10184
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10185
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10187
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10188
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10190
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10191
        .trainerName = _("ANGELO"),
#line 10192
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10193
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10195
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10196
        .doubleBattle = FALSE,
#line 10197
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10199
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10200
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10203
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10205
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10204
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10207
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10208
        .trainerName = _("DARIUS"),
#line 10209
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10210
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10212
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10213
        .doubleBattle = FALSE,
#line 10214
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10216
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10218
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10217
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10220
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10221
        .trainerName = _("STEVEN"),
#line 10222
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10223
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10225
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10226
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10227
        .doubleBattle = FALSE,
#line 10228
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10230
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10231
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10233
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10238
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10239
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10241
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10246
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10247
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10249
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10254
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10255
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10257
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10262
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10263
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10265
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10270
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .heldItem = ITEM_SITRUS_BERRY,
#line 10272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10271
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10273
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10278
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS] =
    {
#line 10279
        .trainerName = _("GHOSTESS"),
#line 10280
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10281
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10282
F_TRAINER_FEMALE | 
#line 10283
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10284
        .doubleBattle = FALSE,
#line 10285
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10287
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10287
            .heldItem = ITEM_TWISTED_SPOON,
#line 10290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10288
            .ability = ABILITY_THICK_FAT,
#line 10289
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10291
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10296
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10296
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10297
            .ability = ABILITY_WONDER_SKIN,
#line 10298
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10300
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_PAYBACK,
            },
            },
            {
#line 10305
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10305
            .heldItem = ITEM_METRONOME,
#line 10308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10306
            .ability = ABILITY_ROCK_HEAD,
#line 10307
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10309
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ZEN_HEADBUTT,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10314
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10314
            .heldItem = ITEM_ASSAULT_VEST,
#line 10317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10315
            .ability = ABILITY_CURSED_BODY,
#line 10316
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10318
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10323
    [DIFFICULTY_NORMAL][TRAINER_JORDAN] =
    {
#line 10324
        .trainerName = _("JORDAN"),
#line 10325
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10326
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10328
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10329
        .doubleBattle = FALSE,
#line 10330
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10332
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10333
            .ability = ABILITY_CHLOROPHYLL,
#line 10334
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10336
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10341
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .heldItem = ITEM_EVIOLITE,
#line 10344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10342
            .ability = ABILITY_PRESSURE,
#line 10343
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10345
                MOVE_ZEN_HEADBUTT,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10350
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10350
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10351
            .ability = ABILITY_LIQUID_OOZE,
#line 10352
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10354
                MOVE_GUNK_SHOT,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10359
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10359
            .heldItem = ITEM_QUICK_CLAW,
#line 10362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10360
            .ability = ABILITY_OBLIVIOUS,
#line 10361
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10363
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10368
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10368
            .heldItem = ITEM_SHARP_BEAK,
#line 10371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10369
            .ability = ABILITY_INNER_FOCUS,
#line 10370
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10372
                MOVE_AERIAL_ACE,
                MOVE_CROSS_POISON,
                MOVE_KNOCK_OFF,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10377
    [DIFFICULTY_NORMAL][TRAINER_JORDAN2] =
    {
#line 10378
        .trainerName = _("JORDAN"),
#line 10379
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10380
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10382
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10383
        .doubleBattle = FALSE,
#line 10384
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10386
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10386
            .heldItem = ITEM_WIDE_LENS,
#line 10389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10387
            .ability = ABILITY_CHLOROPHYLL,
#line 10388
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10390
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10395
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10395
            .heldItem = ITEM_ASSAULT_VEST,
#line 10398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10396
            .ability = ABILITY_PRESSURE,
#line 10397
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10399
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10404
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10404
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10405
            .ability = ABILITY_LIQUID_OOZE,
#line 10406
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10408
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10413
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10413
            .heldItem = ITEM_CHOICE_SPECS,
#line 10416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10414
            .ability = ABILITY_OBLIVIOUS,
#line 10415
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10417
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 10422
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10422
            .heldItem = ITEM_SHARP_BEAK,
#line 10425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10423
            .ability = ABILITY_INNER_FOCUS,
#line 10424
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10426
                MOVE_CROSS_POISON,
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_U_TURN,
            },
            },
            {
#line 10431
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10431
            .heldItem = ITEM_LIFE_ORB,
#line 10434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10432
            .ability = ABILITY_AIR_LOCK,
#line 10433
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10435
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10440
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS2] =
    {
#line 10441
        .trainerName = _("GHOSTESS"),
#line 10442
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10443
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10444
F_TRAINER_FEMALE | 
#line 10445
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10446
        .doubleBattle = FALSE,
#line 10447
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10449
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .heldItem = ITEM_EXPERT_BELT,
#line 10452
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10450
            .ability = ABILITY_THICK_FAT,
#line 10451
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10453
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10458
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10458
            .heldItem = ITEM_THROAT_SPRAY,
#line 10461
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10459
            .ability = ABILITY_WONDER_SKIN,
#line 10460
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10462
                MOVE_FAKE_OUT,
                MOVE_HYPER_VOICE,
                MOVE_ALLURING_VOICE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10467
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10467
            .heldItem = ITEM_WIDE_LENS,
#line 10470
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10468
            .ability = ABILITY_INTIMIDATE,
#line 10469
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10471
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10476
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10476
            .heldItem = ITEM_ASSAULT_VEST,
#line 10479
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 10477
            .ability = ABILITY_CURSED_BODY,
#line 10478
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10480
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10485
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_8] =
    {
#line 10486
        .trainerName = _("GRUNT"),
#line 10487
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10488
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10490
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10491
        .doubleBattle = FALSE,
#line 10492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10494
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10495
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10497
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_9] =
    {
#line 10498
        .trainerName = _("GRUNT"),
#line 10499
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10500
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10502
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10503
        .doubleBattle = FALSE,
#line 10504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10506
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10507
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10509
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_10] =
    {
#line 10510
        .trainerName = _("GRUNT"),
#line 10511
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10512
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10514
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10515
        .doubleBattle = FALSE,
#line 10516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10518
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10519
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10521
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_11] =
    {
#line 10522
        .trainerName = _("GRUNT"),
#line 10523
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10524
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10526
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10527
        .doubleBattle = FALSE,
#line 10528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10530
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10532
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10531
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10534
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10535
        .trainerName = _("MARIELA"),
#line 10536
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10537
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10538
F_TRAINER_FEMALE | 
#line 10539
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10540
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10542
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10543
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10546
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10547
        .trainerName = _("ALVARO"),
#line 10548
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10549
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10551
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10552
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10554
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10555
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10558
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10559
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10562
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10563
        .trainerName = _("EVERETT"),
#line 10564
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10565
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10567
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10568
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10570
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10571
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10574
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10575
        .trainerName = _("RED"),
#line 10576
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10577
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10579
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10580
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10582
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10583
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10586
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10587
        .trainerName = _("LEAF"),
#line 10588
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10589
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10590
F_TRAINER_FEMALE | 
#line 10591
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10592
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10594
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10595
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10598
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10599
        .trainerName = _("SAMUEL"),
#line 10600
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10601
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10603
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10604
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10606
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10607
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10610
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10611
        .trainerName = _("MAY"),
#line 10612
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10613
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10614
F_TRAINER_FEMALE | 
#line 10615
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10616
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10618
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10619
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10622
    [DIFFICULTY_NORMAL][TRAINER_ALEC_REMATCH] =
    {
#line 10623
        .trainerName = _("ALEC"),
#line 10624
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10625
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10627
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10628
        .doubleBattle = TRUE,
#line 10629
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10631
            .species = SPECIES_LANDORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10631
            .heldItem = ITEM_ASSAULT_VEST,
#line 10635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10633
            .ability = ABILITY_INTIMIDATE,
#line 10632
            .lvl = 78,
#line 10634
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10635
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 10640
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10640
            .heldItem = ITEM_LIGHT_CLAY,
#line 10644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10642
            .ability = ABILITY_SAND_STREAM,
#line 10641
            .lvl = 78,
#line 10643
            .nature = NATURE_LONELY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10644
                MOVE_STEALTH_ROCK,
                MOVE_EXPANDING_FORCE,
                MOVE_LIGHT_SCREEN,
                MOVE_REFLECT,
            },
            },
            {
#line 10649
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10649
            .heldItem = ITEM_LEFTOVERS,
#line 10653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10651
            .ability = ABILITY_SOUNDPROOF,
#line 10650
            .lvl = 78,
#line 10652
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10653
                MOVE_BEHEMOTH_BASH,
                MOVE_STONE_EDGE,
                MOVE_KINGS_SHIELD,
                MOVE_IRON_DEFENSE,
            },
            },
            {
#line 10658
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10658
            .heldItem = ITEM_WISE_GLASSES,
#line 10662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10660
            .ability = ABILITY_SOLID_ROCK,
#line 10659
            .lvl = 78,
#line 10661
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10662
                MOVE_SCALD,
                MOVE_ANCIENT_POWER,
                MOVE_ICY_WIND,
                MOVE_SWAGGER,
            },
            },
            {
#line 10667
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10667
            .heldItem = ITEM_LIFE_ORB,
#line 10671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10669
            .ability = ABILITY_UNNERVE,
#line 10668
            .lvl = 78,
#line 10670
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10671
                MOVE_DIAMOND_STORM,
                MOVE_HURRICANE,
                MOVE_PSYCHIC_FANGS,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 10676
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10676
            .heldItem = ITEM_CHOICE_SPECS,
#line 10680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10678
            .ability = ABILITY_SUCTION_CUPS,
#line 10677
            .lvl = 78,
#line 10679
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10680
                MOVE_ANCIENT_POWER,
                MOVE_ENERGY_BALL,
                MOVE_FLASH_CANNON,
                MOVE_SLUDGE_BOMB,
            },
            },
        },
    },
#line 10685
    [DIFFICULTY_NORMAL][TRAINER_GARRETT_REMATCH] =
    {
#line 10686
        .trainerName = _("GARRETT"),
#line 10687
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10688
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 10690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10691
        .doubleBattle = TRUE,
#line 10692
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10694
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10694
            .heldItem = ITEM_CHOICE_BAND,
#line 10698
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10696
            .ability = ABILITY_DRIZZLE,
#line 10695
            .lvl = 78,
#line 10697
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10698
                MOVE_WAVE_CRASH,
                MOVE_CRUNCH,
                MOVE_FLIP_TURN,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 10703
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10703
            .heldItem = ITEM_RINDO_BERRY,
#line 10707
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10705
            .ability = ABILITY_TORRENT,
#line 10704
            .lvl = 78,
#line 10706
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10707
                MOVE_SPIKES,
                MOVE_HIGH_HORSEPOWER,
                MOVE_PROTECT,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 10712
            .species = SPECIES_LUGIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .heldItem = ITEM_LEFTOVERS,
#line 10716
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10714
            .ability = ABILITY_MULTISCALE,
#line 10713
            .lvl = 78,
#line 10715
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10716
                MOVE_BLIZZARD,
                MOVE_PSYCHIC_NOISE,
                MOVE_ROOST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10721
            .species = SPECIES_PALKIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10721
            .heldItem = ITEM_CHOICE_SPECS,
#line 10725
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10723
            .ability = ABILITY_TELEPATHY,
#line 10722
            .lvl = 78,
#line 10724
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10725
                MOVE_SPACIAL_REND,
                MOVE_HYDRO_PUMP,
                MOVE_EARTH_POWER,
                MOVE_THUNDER,
            },
            },
            {
#line 10730
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10730
            .heldItem = ITEM_EXPERT_BELT,
#line 10734
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10732
            .ability = ABILITY_MARVEL_SCALE,
#line 10731
            .lvl = 78,
#line 10733
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10734
                MOVE_SPRINGTIDE_STORM,
                MOVE_SURF,
                MOVE_BLIZZARD,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 10739
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10739
            .heldItem = ITEM_ASSAULT_VEST,
#line 10743
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10741
            .ability = ABILITY_TORRENT,
#line 10740
            .lvl = 78,
#line 10742
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10743
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_HYDRO_PUMP,
                MOVE_HURRICANE,
            },
            },
        },
    },
#line 10748
    [DIFFICULTY_NORMAL][TRAINER_SAM_REMATCH] =
    {
#line 10749
        .trainerName = _("SAM"),
#line 10750
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10751
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 10753
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10754
        .doubleBattle = TRUE,
#line 10755
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10757
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10757
            .heldItem = ITEM_MUSCLE_BAND,
#line 10761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10759
            .ability = ABILITY_INTIMIDATE,
#line 10758
            .lvl = 78,
#line 10760
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10761
                MOVE_VOLT_TACKLE,
                MOVE_JAW_LOCK,
                MOVE_PLAY_ROUGH,
                MOVE_PSYCHIC_FANGS,
            },
            },
            {
#line 10766
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10766
            .heldItem = ITEM_EVIOLITE,
#line 10770
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10768
            .ability = ABILITY_DOWNLOAD,
#line 10767
            .lvl = 78,
#line 10769
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10770
                MOVE_METAL_SOUND,
                MOVE_VOLT_SWITCH,
                MOVE_ION_DELUGE,
                MOVE_FAKE_OUT,
            },
            },
            {
#line 10775
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10775
            .heldItem = ITEM_CHOICE_SPECS,
#line 10779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10777
            .ability = ABILITY_MAGNET_PULL,
#line 10776
            .lvl = 78,
#line 10778
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10779
                MOVE_STEEL_BEAM,
                MOVE_VOLT_SWITCH,
                MOVE_DISCHARGE,
                MOVE_ELECTROWEB,
            },
            },
            {
#line 10784
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10784
            .heldItem = ITEM_CHOICE_BAND,
#line 10788
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10786
            .ability = ABILITY_MOTOR_DRIVE,
#line 10785
            .lvl = 78,
#line 10787
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10788
                MOVE_CLOSE_COMBAT,
                MOVE_ICE_PUNCH,
                MOVE_FIRE_PUNCH,
                MOVE_SUPERCELL_SLAM,
            },
            },
            {
#line 10793
            .species = SPECIES_RAIKOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10793
            .heldItem = ITEM_ASSAULT_VEST,
#line 10797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10795
            .ability = ABILITY_VOLT_ABSORB,
#line 10794
            .lvl = 78,
#line 10796
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10797
                MOVE_DISCHARGE,
                MOVE_SHADOW_BALL,
                MOVE_SCALD,
                MOVE_AURA_SPHERE,
            },
            },
            {
#line 10802
            .species = SPECIES_THUNDURUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10802
            .heldItem = ITEM_LEFTOVERS,
#line 10806
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10804
            .ability = ABILITY_VOLT_ABSORB,
#line 10803
            .lvl = 78,
#line 10805
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10806
                MOVE_WILDBOLT_STORM,
                MOVE_NASTY_PLOT,
                MOVE_AIR_SLASH,
                MOVE_GRASS_KNOT,
            },
            },
        },
    },
#line 10811
    [DIFFICULTY_NORMAL][TRAINER_JOSE_REMATCH] =
    {
#line 10812
        .trainerName = _("JOSE"),
#line 10813
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10814
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10816
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10817
        .doubleBattle = TRUE,
#line 10818
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10820
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10820
            .heldItem = ITEM_FAIRY_FEATHER,
#line 10824
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10822
            .ability = ABILITY_NATURAL_CURE,
#line 10821
            .lvl = 78,
#line 10823
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10824
                MOVE_SAFEGUARD,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_SPARKLY_SWIRL,
            },
            },
            {
#line 10829
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10829
            .heldItem = ITEM_CHOICE_SPECS,
#line 10833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10831
            .ability = ABILITY_BERSERK,
#line 10830
            .lvl = 78,
#line 10832
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10833
                MOVE_DRACO_METEOR,
                MOVE_ERUPTION,
                MOVE_FLAMETHROWER,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 10838
            .species = SPECIES_DIALGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10838
            .heldItem = ITEM_ASSAULT_VEST,
#line 10842
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10840
            .ability = ABILITY_TELEPATHY,
#line 10839
            .lvl = 78,
#line 10841
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10842
                MOVE_ROAR_OF_TIME,
                MOVE_EARTH_POWER,
                MOVE_METAL_BURST,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 10847
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10847
            .heldItem = ITEM_LEFTOVERS,
#line 10851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10849
            .ability = ABILITY_LEVITATE,
#line 10848
            .lvl = 78,
#line 10850
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10851
                MOVE_U_TURN,
                MOVE_DRAGON_RUSH,
                MOVE_EARTH_POWER,
                MOVE_DRAGON_DANCE,
            },
            },
            {
#line 10856
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10856
            .heldItem = ITEM_ROCKY_HELMET,
#line 10860
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10858
            .ability = ABILITY_MARVEL_SCALE,
#line 10857
            .lvl = 78,
#line 10859
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10860
                MOVE_DRAGON_ASCENT,
                MOVE_THUNDER_WAVE,
                MOVE_AIR_SLASH,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 10865
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10865
            .heldItem = ITEM_DRAGON_FANG,
#line 10869
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10867
            .ability = ABILITY_SNIPER,
#line 10866
            .lvl = 78,
#line 10868
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10869
                MOVE_SCALE_SHOT,
                MOVE_OCTAZOOKA,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
        },
    },
#line 10874
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON_REMATCH] =
    {
#line 10875
        .trainerName = _("GRAYSON"),
#line 10876
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10877
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 10879
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10880
        .doubleBattle = TRUE,
#line 10881
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10883
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10883
            .heldItem = ITEM_CHOICE_SCARF,
#line 10887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10885
            .ability = ABILITY_IRON_FIST,
#line 10884
            .lvl = 78,
#line 10886
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10887
                MOVE_KNOCK_OFF,
                MOVE_ROCK_SLIDE,
                MOVE_DYNAMIC_PUNCH,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10892
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10892
            .heldItem = ITEM_BLACK_BELT,
#line 10896
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10894
            .ability = ABILITY_NO_GUARD,
#line 10893
            .lvl = 78,
#line 10895
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10896
                MOVE_DUAL_CHOP,
                MOVE_DARKEST_LARIAT,
                MOVE_FISSURE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10901
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10901
            .heldItem = ITEM_FOCUS_BAND,
#line 10905
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10903
            .ability = ABILITY_POISON_TOUCH,
#line 10902
            .lvl = 78,
#line 10904
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10905
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 10910
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10910
            .heldItem = ITEM_ROCKY_HELMET,
#line 10914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10912
            .ability = ABILITY_CUTE_CHARM,
#line 10911
            .lvl = 78,
#line 10913
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10914
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 10919
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10919
            .heldItem = ITEM_FOCUS_SASH,
#line 10923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10921
            .ability = ABILITY_MOXIE,
#line 10920
            .lvl = 78,
#line 10922
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10923
                MOVE_CLOSE_COMBAT,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 10928
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10928
            .heldItem = ITEM_EXPERT_BELT,
#line 10932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10930
            .ability = ABILITY_INNER_FOCUS,
#line 10929
            .lvl = 78,
#line 10931
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10932
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
        },
    },
#line 10937
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW_REMATCH] =
    {
#line 10938
        .trainerName = _("MATTHEW"),
#line 10939
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10940
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 10942
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10943
        .doubleBattle = TRUE,
#line 10944
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10946
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10946
            .heldItem = ITEM_AIR_BALLOON,
#line 10950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10948
            .ability = ABILITY_STURDY,
#line 10947
            .lvl = 78,
#line 10949
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10950
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10955
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10955
            .heldItem = ITEM_MUSCLE_BAND,
#line 10959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10957
            .ability = ABILITY_STURDY,
#line 10956
            .lvl = 78,
#line 10958
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10959
                MOVE_SPIKES,
                MOVE_DRILL_PECK,
                MOVE_IRON_HEAD,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 10964
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10964
            .heldItem = ITEM_CHOICE_SPECS,
#line 10968
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10966
            .ability = ABILITY_COMPETITIVE,
#line 10965
            .lvl = 78,
#line 10967
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10968
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 10973
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10973
            .heldItem = ITEM_ASSAULT_VEST,
#line 10977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10975
            .ability = ABILITY_CLEAR_BODY,
#line 10974
            .lvl = 78,
#line 10976
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10977
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10982
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10982
            .heldItem = ITEM_CHOICE_BAND,
#line 10986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10984
            .ability = ABILITY_TECHNICIAN,
#line 10983
            .lvl = 78,
#line 10985
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10986
                MOVE_BULLET_PUNCH,
                MOVE_MEGAHORN,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 10991
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10991
            .heldItem = ITEM_ROCKY_HELMET,
#line 10995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10993
            .ability = ABILITY_IRON_BARBS,
#line 10992
            .lvl = 78,
#line 10994
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10995
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 11000
    [DIFFICULTY_NORMAL][TRAINER_MARK_REMATCH] =
    {
#line 11001
        .trainerName = _("MARK"),
#line 11002
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11003
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 11005
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 11006
        .doubleBattle = TRUE,
#line 11007
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11009
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11009
            .heldItem = ITEM_ROCKY_HELMET,
#line 11013
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11011
            .ability = ABILITY_FLASH_FIRE,
#line 11010
            .lvl = 78,
#line 11012
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11013
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_MOONBLAST,
                MOVE_PSYCHIC_TERRAIN,
            },
            },
            {
#line 11018
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11018
            .heldItem = ITEM_CHOICE_BAND,
#line 11022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11020
            .ability = ABILITY_HUGE_POWER,
#line 11019
            .lvl = 78,
#line 11021
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11022
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 11027
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11027
            .heldItem = ITEM_ASSAULT_VEST,
#line 11031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11029
            .ability = ABILITY_TELEPATHY,
#line 11028
            .lvl = 78,
#line 11030
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11031
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 11036
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11036
            .heldItem = ITEM_LEFTOVERS,
#line 11040
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11038
            .ability = ABILITY_SERENE_GRACE,
#line 11037
            .lvl = 78,
#line 11039
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11040
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_FIERY_DANCE,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 11045
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11045
            .heldItem = ITEM_CHOICE_SPECS,
#line 11049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11047
            .ability = ABILITY_PIXILATE,
#line 11046
            .lvl = 78,
#line 11048
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11049
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_MOONBLAST,
            },
            },
            {
#line 11054
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11054
            .heldItem = ITEM_OCCA_BERRY,
#line 11058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11056
            .ability = ABILITY_INTIMIDATE,
#line 11055
            .lvl = 78,
#line 11057
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11058
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 11063
    [DIFFICULTY_NORMAL][TRAINER_XANDER_REMATCH] =
    {
#line 11064
        .trainerName = _("XANDER"),
#line 11065
        .trainerClass = TRAINER_CLASS_LEADER,
#line 11066
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 11068
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 11069
        .doubleBattle = TRUE,
#line 11070
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 11072
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11072
            .heldItem = ITEM_BLACK_SLUDGE,
#line 11076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11074
            .ability = ABILITY_CURSED_BODY,
#line 11073
            .lvl = 78,
#line 11075
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11076
                MOVE_ASTRAL_BARRAGE,
                MOVE_SLUDGE_WAVE,
                MOVE_PERISH_SONG,
                MOVE_PROTECT,
            },
            },
            {
#line 11081
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11081
            .heldItem = ITEM_SITRUS_BERRY,
#line 11085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11083
            .ability = ABILITY_MUMMY,
#line 11082
            .lvl = 78,
#line 11084
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11085
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_BALL,
                MOVE_PROTECT,
            },
            },
            {
#line 11090
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11090
            .heldItem = ITEM_SITRUS_BERRY,
#line 11094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11092
            .ability = ABILITY_LEVITATE,
#line 11091
            .lvl = 78,
#line 11093
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11094
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 11099
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11099
            .heldItem = ITEM_LEFTOVERS,
#line 11103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11101
            .ability = ABILITY_PRESSURE,
#line 11100
            .lvl = 78,
#line 11102
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11103
                MOVE_PSYSTRIKE,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
            {
#line 11108
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11108
            .heldItem = ITEM_CHOICE_SPECS,
#line 11112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11110
            .ability = ABILITY_FLASH_FIRE,
#line 11109
            .lvl = 78,
#line 11111
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11112
                MOVE_OVERHEAT,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 11117
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 11117
            .heldItem = ITEM_CHOICE_BAND,
#line 11121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 11119
            .ability = ABILITY_NO_GUARD,
#line 11118
            .lvl = 78,
#line 11120
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 11121
                MOVE_EARTHQUAKE,
                MOVE_RAGE_FIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
        },
    },
