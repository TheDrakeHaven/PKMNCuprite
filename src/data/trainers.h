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
            .species = SPECIES_CORPHISH,
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
            .species = SPECIES_CORPHISH,
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
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3391
            .heldItem = ITEM_FOCUS_SASH,
#line 3395
            .ev = TRAINER_PARTY_EVS(6, 0, 252, 252, 0, 0),
#line 3396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3392
            .ability = ABILITY_SNOW_WARNING,
#line 3393
            .lvl = 80,
#line 3394
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3396
                MOVE_ROCK_WRECKER,
                MOVE_GLACIAL_LANCE,
                MOVE_CRUNCH,
                MOVE_EXPLOSION,
            },
            },
            {
#line 3401
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3401
            .heldItem = ITEM_LOADED_DICE,
#line 3405
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3402
            .ability = ABILITY_THICK_FAT,
#line 3403
            .lvl = 80,
#line 3404
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3406
                MOVE_ICICLE_SPEAR,
                MOVE_BONE_RUSH,
                MOVE_ROCK_BLAST,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3411
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3415
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 3416
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3412
            .ability = ABILITY_CURSED_BODY,
#line 3413
            .lvl = 80,
#line 3414
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3416
                MOVE_SHADOW_BALL,
                MOVE_GLACIATE,
                MOVE_WILL_O_WISP,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 3421
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3421
            .heldItem = ITEM_ASSAULT_VEST,
#line 3425
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3422
            .ability = ABILITY_SERENE_GRACE,
#line 3423
            .lvl = 80,
#line 3424
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3426
                MOVE_AIR_SLASH,
                MOVE_FIERY_DANCE,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 3431
            .species = SPECIES_REGICE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3431
            .heldItem = ITEM_LEFTOVERS,
#line 3435
            .ev = TRAINER_PARTY_EVS(252, 0, 252, 0, 6, 0),
#line 3436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3432
            .ability = ABILITY_ICE_BODY,
#line 3433
            .lvl = 80,
#line 3434
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3436
                MOVE_ICE_BEAM,
                MOVE_ANCIENT_POWER,
                MOVE_NASTY_PLOT,
                MOVE_THUNDER_CAGE,
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
                MOVE_SOLAR_BEAM,
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
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3511
            .heldItem = ITEM_LIFE_ORB,
#line 3515
            .ev = TRAINER_PARTY_EVS(6, 252, 0, 252, 0, 0),
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3512
            .ability = ABILITY_MOTOR_DRIVE,
#line 3513
            .lvl = 80,
#line 3514
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_SUPERCELL_SLAM,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
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
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7484
            .ability = ABILITY_HEAVY_METAL,
#line 7485
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7486
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_DRAGON_RUSH,
                MOVE_BULK_UP,
            },
            },
            {
#line 7491
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7491
            .heldItem = ITEM_SHARP_BEAK,
#line 7494
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7492
            .ability = ABILITY_INNER_FOCUS,
#line 7493
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7494
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7499
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7499
            .heldItem = ITEM_MUSCLE_BAND,
#line 7502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7500
            .ability = ABILITY_IMMUNITY,
#line 7501
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7502
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7507
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7507
            .heldItem = ITEM_EXPERT_BELT,
#line 7510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7508
            .ability = ABILITY_UNNERVE,
#line 7509
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7510
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7515
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7515
            .heldItem = ITEM_ROCKY_HELMET,
#line 7518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7516
            .ability = ABILITY_ROCK_HEAD,
#line 7517
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7518
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7523
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7524
        .trainerName = _("MAXIE"),
#line 7525
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7526
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7528
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7529
        .doubleBattle = FALSE,
#line 7530
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7532
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7532
            .heldItem = ITEM_MUSCLE_BAND,
#line 7535
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7533
            .ability = ABILITY_HEAVY_METAL,
#line 7534
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7536
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7541
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .heldItem = ITEM_LUM_BERRY,
#line 7544
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7542
            .ability = ABILITY_IMMUNITY,
#line 7543
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7545
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_HONE_CLAWS,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7550
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7550
            .heldItem = ITEM_LUM_BERRY,
#line 7553
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7551
            .ability = ABILITY_UNNERVE,
#line 7552
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7554
                MOVE_FIRE_SPIN,
                MOVE_TORMENT,
                MOVE_SNARL,
                MOVE_HOWL,
            },
            },
            {
#line 7559
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7559
            .heldItem = ITEM_ROCKY_HELMET,
#line 7562
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7560
            .ability = ABILITY_ROCK_HEAD,
#line 7561
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7563
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7568
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7568
            .heldItem = ITEM_SHARP_BEAK,
#line 7571
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7569
            .ability = ABILITY_INNER_FOCUS,
#line 7570
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7572
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7577
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7578
        .trainerName = _("TIANA"),
#line 7579
        .trainerClass = TRAINER_CLASS_LASS,
#line 7580
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7581
F_TRAINER_FEMALE | 
#line 7582
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7583
        .doubleBattle = FALSE,
#line 7584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7586
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7587
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7590
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7591
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7594
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7595
        .trainerName = _("HALEY"),
#line 7596
        .trainerClass = TRAINER_CLASS_LASS,
#line 7597
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7598
F_TRAINER_FEMALE | 
#line 7599
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7600
        .doubleBattle = FALSE,
#line 7601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7603
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7604
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7607
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7608
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7611
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7612
        .trainerName = _("JANICE"),
#line 7613
        .trainerClass = TRAINER_CLASS_LASS,
#line 7614
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7615
F_TRAINER_FEMALE | 
#line 7616
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7617
        .doubleBattle = FALSE,
#line 7618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7620
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7621
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7624
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7625
        .trainerName = _("VIVI"),
#line 7626
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7627
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7628
F_TRAINER_FEMALE | 
#line 7629
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7630
        .doubleBattle = FALSE,
#line 7631
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7633
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7635
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7634
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7637
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7639
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7638
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7641
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7643
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7642
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7645
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7646
        .trainerName = _("SALLY"),
#line 7647
        .trainerClass = TRAINER_CLASS_LASS,
#line 7648
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7649
F_TRAINER_FEMALE | 
#line 7650
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7651
        .doubleBattle = FALSE,
#line 7652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7654
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7655
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7658
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7659
        .trainerName = _("ROBIN"),
#line 7660
        .trainerClass = TRAINER_CLASS_LASS,
#line 7661
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7662
F_TRAINER_FEMALE | 
#line 7663
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7664
        .doubleBattle = FALSE,
#line 7665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7667
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7668
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7671
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7672
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7675
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7676
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7680
    [DIFFICULTY_NORMAL][TRAINER_NAMI] =
    {
#line 7681
        .trainerName = _("NAMI"),
#line 7682
        .trainerClass = TRAINER_CLASS_LASS,
#line 7683
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7684
F_TRAINER_FEMALE | 
#line 7685
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7686
        .doubleBattle = FALSE,
#line 7687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7689
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7690
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7693
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7694
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7697
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7698
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7701
    [DIFFICULTY_NORMAL][TRAINER_KIDDO] =
    {
#line 7702
        .trainerName = _("KIDDO"),
#line 7703
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 7704
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 7706
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7707
        .doubleBattle = FALSE,
#line 7708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7710
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7711
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7713
                MOVE_AFTER_YOU,
                MOVE_PLAY_NICE,
            },
            },
            {
#line 7716
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .heldItem = ITEM_TOXIC_ORB,
#line 7718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7717
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7719
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7722
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .heldItem = ITEM_FLAME_ORB,
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
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7729
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7731
                MOVE_ENCORE,
                MOVE_AMNESIA,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 7736
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7737
        .trainerName = _("ANDREA"),
#line 7738
        .trainerClass = TRAINER_CLASS_LASS,
#line 7739
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7740
F_TRAINER_FEMALE | 
#line 7741
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7742
        .doubleBattle = FALSE,
#line 7743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7745
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7747
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7746
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7749
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7750
        .trainerName = _("CRISSY"),
#line 7751
        .trainerClass = TRAINER_CLASS_LASS,
#line 7752
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7753
F_TRAINER_FEMALE | 
#line 7754
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7755
        .doubleBattle = FALSE,
#line 7756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7758
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7760
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7759
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7762
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7764
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7763
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7766
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7767
        .trainerName = _("RICK"),
#line 7768
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7769
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7771
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7772
        .doubleBattle = FALSE,
#line 7773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7775
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7776
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7779
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7780
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7783
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7784
        .trainerName = _("LYLE"),
#line 7785
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7786
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7788
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7789
        .doubleBattle = FALSE,
#line 7790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7792
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7793
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7796
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7797
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7800
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7801
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7804
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7805
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7808
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7809
        .trainerName = _("JOSIE"),
#line 7810
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7811
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7813
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7814
        .doubleBattle = FALSE,
#line 7815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7817
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7819
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7818
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7821
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7823
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7822
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7825
    [DIFFICULTY_NORMAL][TRAINER_BONNEY] =
    {
#line 7826
        .trainerName = _("BONNEY"),
#line 7827
        .trainerClass = TRAINER_CLASS_LADY,
#line 7828
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 7829
F_TRAINER_FEMALE | 
#line 7830
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7831
        .doubleBattle = TRUE,
#line 7832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7834
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7836
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7835
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7838
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7840
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7839
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7842
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7844
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7843
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7846
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7848
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7847
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7850
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7851
        .trainerName = _("DOUG"),
#line 7852
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7853
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7855
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7856
        .doubleBattle = FALSE,
#line 7857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7859
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7860
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7863
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7864
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7867
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7868
        .trainerName = _("GREG"),
#line 7869
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7870
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7872
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7873
        .doubleBattle = FALSE,
#line 7874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7876
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7877
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7880
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7881
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7884
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7885
        .trainerName = _("KENT"),
#line 7886
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7887
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7890
        .doubleBattle = FALSE,
#line 7891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7893
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7894
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7897
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7898
        .trainerName = _("JAMES"),
#line 7899
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7900
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7902
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7903
        .doubleBattle = FALSE,
#line 7904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7907
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7910
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7911
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7914
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7915
        .trainerName = _("BRICE"),
#line 7916
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7917
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7919
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7920
        .doubleBattle = FALSE,
#line 7921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7923
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7924
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7927
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7928
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7931
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7932
        .trainerName = _("TRENT"),
#line 7933
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7934
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7936
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7937
        .doubleBattle = FALSE,
#line 7938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7940
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7941
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7944
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7945
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7948
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7949
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7952
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7953
        .trainerName = _("LENNY"),
#line 7954
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7955
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7957
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7958
        .doubleBattle = FALSE,
#line 7959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7961
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7962
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7965
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7966
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7969
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7970
        .trainerName = _("LUCAS"),
#line 7971
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7972
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7974
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7975
        .doubleBattle = FALSE,
#line 7976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7978
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7979
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7982
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7983
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7986
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7987
        .trainerName = _("ALAN"),
#line 7988
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7989
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7991
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7992
        .doubleBattle = FALSE,
#line 7993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7995
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7996
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7999
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8000
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8003
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8004
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8007
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8008
        .trainerName = _("CLARK"),
#line 8009
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8010
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8012
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8013
        .doubleBattle = FALSE,
#line 8014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8016
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8017
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8020
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8021
        .trainerName = _("ERIC"),
#line 8022
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8023
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8025
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8026
        .doubleBattle = FALSE,
#line 8027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8029
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8030
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8033
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8034
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8037
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 8038
        .trainerName = _("MIKE"),
#line 8039
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8040
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8042
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8043
        .doubleBattle = FALSE,
#line 8044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8046
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8047
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8050
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8051
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8054
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8055
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8058
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8059
        .trainerName = _("DEZ & LUKE"),
#line 8060
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8061
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8063
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8064
        .doubleBattle = TRUE,
#line 8065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8067
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8068
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8071
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8072
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8075
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8076
        .trainerName = _("LEA & JED"),
#line 8077
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8078
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8080
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8081
        .doubleBattle = TRUE,
#line 8082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8084
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8085
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8088
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8089
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8092
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8093
        .trainerName = _("KIRA & DAN"),
#line 8094
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8095
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8097
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8098
        .doubleBattle = TRUE,
#line 8099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8101
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8102
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8105
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8106
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8109
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8110
        .trainerName = _("JOHANNA"),
#line 8111
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8112
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8113
F_TRAINER_FEMALE | 
#line 8114
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8115
        .doubleBattle = FALSE,
#line 8116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8118
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8119
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8122
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8123
        .trainerName = _("GERALD"),
#line 8124
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8127
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8128
        .items = { ITEM_HYPER_POTION },
#line 8129
        .doubleBattle = FALSE,
#line 8130
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8132
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8134
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8133
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8137
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8138
        .trainerName = _("VIVIAN"),
#line 8139
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8140
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8141
F_TRAINER_FEMALE | 
#line 8142
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8143
        .doubleBattle = FALSE,
#line 8144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8146
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8148
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8147
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8150
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8152
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8151
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8154
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8155
        .trainerName = _("DANIELLE"),
#line 8156
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8157
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8158
F_TRAINER_FEMALE | 
#line 8159
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8160
        .doubleBattle = FALSE,
#line 8161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8163
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8165
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8164
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8167
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8168
        .trainerName = _("HIDEO"),
#line 8169
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8170
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8172
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8173
        .doubleBattle = FALSE,
#line 8174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8176
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8177
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8180
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8181
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8184
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8185
        .trainerName = _("KEIGO"),
#line 8186
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8187
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8189
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8190
        .doubleBattle = FALSE,
#line 8191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8193
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8194
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8197
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8198
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8201
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8202
        .trainerName = _("RILEY"),
#line 8203
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8204
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8206
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8207
        .doubleBattle = FALSE,
#line 8208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8210
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8211
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8214
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8215
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8218
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8219
        .trainerName = _("FLINT"),
#line 8220
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8221
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8223
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8224
        .doubleBattle = FALSE,
#line 8225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8227
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8229
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8228
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8231
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8233
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8232
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8235
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8236
        .trainerName = _("ASHLEY"),
#line 8237
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8238
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8239
F_TRAINER_FEMALE | 
#line 8240
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8241
        .doubleBattle = FALSE,
#line 8242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8244
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8246
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8245
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8248
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8250
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8249
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8252
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8253
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8256
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8257
        .trainerName = _("CHAD"),
#line 8258
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8259
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8261
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8262
        .doubleBattle = TRUE,
#line 8263
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8265
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8266
            .ability = ABILITY_STURDY,
#line 8267
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8268
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 8271
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8274
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8272
            .ability = ABILITY_SAND_STREAM,
#line 8273
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8274
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 8279
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8280
            .ability = ABILITY_LIGHTNING_ROD,
#line 8281
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8282
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 8286
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8287
            .ability = ABILITY_SAND_VEIL,
#line 8288
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8289
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 8293
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8294
        .trainerName = _("SAMUEL"),
#line 8295
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8296
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8298
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8299
        .doubleBattle = TRUE,
#line 8300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8302
            .species = SPECIES_SLOWKING,
#line 8302
            .gender = TRAINER_MON_MALE,
#line 8302
            .heldItem = ITEM_LIFE_ORB,
#line 8306
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8303
            .ability = ABILITY_REGENERATOR,
#line 8304
            .lvl = 54,
#line 8305
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8307
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8312
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .heldItem = ITEM_ROCKY_HELMET,
#line 8316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8313
            .ability = ABILITY_REGENERATOR,
#line 8314
            .lvl = 54,
#line 8315
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8316
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8321
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8321
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8322
            .ability = ABILITY_INFILTRATOR,
#line 8323
            .lvl = 54,
#line 8324
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8325
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8330
            .species = SPECIES_GLISCOR,
#line 8330
            .gender = TRAINER_MON_FEMALE,
#line 8330
            .heldItem = ITEM_TOXIC_ORB,
#line 8334
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8331
            .ability = ABILITY_POISON_HEAL,
#line 8332
            .lvl = 54,
#line 8333
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8335
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8340
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .heldItem = ITEM_ASSAULT_VEST,
#line 8344
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8341
            .ability = ABILITY_CLEAR_BODY,
#line 8342
            .lvl = 54,
#line 8343
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8345
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8350
            .species = SPECIES_HONCHKROW,
#line 8350
            .gender = TRAINER_MON_MALE,
#line 8350
            .heldItem = ITEM_FOCUS_SASH,
#line 8354
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8351
            .ability = ABILITY_MOXIE,
#line 8352
            .lvl = 54,
#line 8353
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8355
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8360
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8361
        .trainerName = _("JONAH"),
#line 8362
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8363
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8365
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8366
        .doubleBattle = FALSE,
#line 8367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8369
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8370
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8373
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8374
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8377
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8378
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8381
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8382
        .trainerName = _("HENRY"),
#line 8383
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8384
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8386
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8387
        .doubleBattle = FALSE,
#line 8388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8390
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8391
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8394
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8395
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8398
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8399
        .trainerName = _("ROGER"),
#line 8400
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8401
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8403
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8404
        .doubleBattle = FALSE,
#line 8405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8407
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8408
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8411
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8412
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8415
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8417
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8416
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8419
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8420
        .trainerName = _("ALEXA"),
#line 8421
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8422
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8423
F_TRAINER_FEMALE | 
#line 8424
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8425
        .items = { ITEM_FULL_RESTORE },
#line 8426
        .doubleBattle = FALSE,
#line 8427
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8429
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8431
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8430
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8433
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8435
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8434
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8437
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8438
        .trainerName = _("RUBEN"),
#line 8439
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8440
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8442
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8443
        .items = { ITEM_HYPER_POTION },
#line 8444
        .doubleBattle = FALSE,
#line 8445
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8447
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8448
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8451
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8452
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8455
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8456
        .trainerName = _("KOJI"),
#line 8457
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8458
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8460
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8461
        .doubleBattle = FALSE,
#line 8462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8464
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8465
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8468
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8469
        .trainerName = _("WAYNE"),
#line 8470
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8471
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8473
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8474
        .doubleBattle = FALSE,
#line 8475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8477
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8478
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8481
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8482
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8485
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8486
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8489
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8490
        .trainerName = _("AIDAN"),
#line 8491
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8492
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8494
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8495
        .doubleBattle = FALSE,
#line 8496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8498
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8499
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8502
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8503
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8506
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8507
        .trainerName = _("REED"),
#line 8508
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8509
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8511
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8512
        .doubleBattle = FALSE,
#line 8513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8515
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8516
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8519
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8520
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8523
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8524
        .trainerName = _("TISHA"),
#line 8525
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8526
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8527
F_TRAINER_FEMALE | 
#line 8528
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8529
        .doubleBattle = FALSE,
#line 8530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8532
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8533
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8536
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8537
        .trainerName = _("TORI & TIA"),
#line 8538
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8539
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8541
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8542
        .doubleBattle = TRUE,
#line 8543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8545
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8546
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8549
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8550
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8553
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8554
        .trainerName = _("KIM & IRIS"),
#line 8555
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8556
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8558
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8559
        .doubleBattle = TRUE,
#line 8560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8562
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8563
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8566
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8567
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8570
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8571
        .trainerName = _("TYRA & IVY"),
#line 8572
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8573
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8575
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8576
        .doubleBattle = TRUE,
#line 8577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8579
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8580
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8583
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8584
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8588
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8589
        .trainerName = _("MEL & PAUL"),
#line 8590
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8591
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8593
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8594
        .doubleBattle = TRUE,
#line 8595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8597
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8598
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8601
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8602
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8605
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8606
        .trainerName = _("JOHN & JAY"),
#line 8607
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8608
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8610
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8611
        .doubleBattle = TRUE,
#line 8612
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8614
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8616
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8615
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8618
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8619
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8622
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8623
        .trainerName = _("RELI & IAN"),
#line 8624
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8625
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8627
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8628
        .doubleBattle = TRUE,
#line 8629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8631
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8632
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8635
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8636
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8639
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8640
        .trainerName = _("LILA & ROY"),
#line 8641
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8642
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8644
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8645
        .doubleBattle = TRUE,
#line 8646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8648
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8649
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8652
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8653
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8656
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8657
        .trainerName = _("LISA & RAY"),
#line 8658
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8659
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8661
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8662
        .doubleBattle = TRUE,
#line 8663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8665
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8666
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8669
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8670
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8673
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8674
        .trainerName = _("CHRIS"),
#line 8675
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8676
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8678
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8679
        .doubleBattle = FALSE,
#line 8680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8682
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8683
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8686
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8687
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8690
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8691
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8694
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8695
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8699
        .trainerName = _("DAWSON"),
#line 8700
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8701
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8703
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8704
        .doubleBattle = FALSE,
#line 8705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8707
            .heldItem = ITEM_NUGGET,
#line 8709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8708
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8711
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8712
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8715
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8716
        .trainerName = _("SARAH"),
#line 8717
        .trainerClass = TRAINER_CLASS_LADY,
#line 8718
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8719
F_TRAINER_FEMALE | 
#line 8720
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8721
        .items = { ITEM_FULL_RESTORE },
#line 8722
        .doubleBattle = FALSE,
#line 8723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8725
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8726
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8729
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8729
            .heldItem = ITEM_NUGGET,
#line 8731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8730
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8733
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8734
        .trainerName = _("DARIAN"),
#line 8735
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8736
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8738
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8739
        .doubleBattle = FALSE,
#line 8740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8742
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8743
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8746
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8747
        .trainerName = _("HAILEY"),
#line 8748
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8749
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8750
F_TRAINER_FEMALE | 
#line 8751
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8752
        .doubleBattle = FALSE,
#line 8753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8755
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8756
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8759
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8760
        .trainerName = _("CHANDLER"),
#line 8761
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8762
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8764
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8765
        .doubleBattle = FALSE,
#line 8766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8768
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8769
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8772
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8773
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8776
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8777
        .trainerName = _("KALEB"),
#line 8778
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8779
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8781
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8782
        .doubleBattle = FALSE,
#line 8783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8785
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .heldItem = ITEM_ORAN_BERRY,
#line 8787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8786
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8789
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8789
            .heldItem = ITEM_ORAN_BERRY,
#line 8791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8790
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8793
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8794
        .trainerName = _("JOSEPH"),
#line 8795
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8796
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8798
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8799
        .doubleBattle = FALSE,
#line 8800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8802
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8803
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8806
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8807
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8810
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8811
        .trainerName = _("ALYSSA"),
#line 8812
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8813
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8814
F_TRAINER_FEMALE | 
#line 8815
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8816
        .doubleBattle = FALSE,
#line 8817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8819
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8820
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8823
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8824
        .trainerName = _("MARCOS"),
#line 8825
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8826
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8828
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8829
        .doubleBattle = FALSE,
#line 8830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8833
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8836
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8837
        .trainerName = _("RHETT"),
#line 8838
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8839
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8842
        .doubleBattle = FALSE,
#line 8843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8845
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8847
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8846
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8849
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8850
        .trainerName = _("TYRON"),
#line 8851
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8852
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8854
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8855
        .doubleBattle = FALSE,
#line 8856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8858
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8859
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8862
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8863
        .trainerName = _("CELINA"),
#line 8864
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8865
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8866
F_TRAINER_FEMALE | 
#line 8867
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8868
        .doubleBattle = FALSE,
#line 8869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8871
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8872
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8875
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8876
        .trainerName = _("BIANCA"),
#line 8877
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8878
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8879
F_TRAINER_FEMALE | 
#line 8880
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8881
        .doubleBattle = FALSE,
#line 8882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8884
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8885
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8888
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8889
        .trainerName = _("HAYDEN"),
#line 8890
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8891
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8893
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8894
        .doubleBattle = FALSE,
#line 8895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8897
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8898
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8901
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8902
        .trainerName = _("SOPHIE"),
#line 8903
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8904
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8905
F_TRAINER_FEMALE | 
#line 8906
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8907
        .doubleBattle = FALSE,
#line 8908
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8910
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8911
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8914
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8915
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8918
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8919
        .trainerName = _("COBY"),
#line 8920
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8921
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8923
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8924
        .doubleBattle = FALSE,
#line 8925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8927
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8928
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8931
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8932
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8935
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8936
        .trainerName = _("LAWRENCE"),
#line 8937
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8938
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8940
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8941
        .doubleBattle = FALSE,
#line 8942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8944
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8945
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8948
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8949
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8952
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8953
        .trainerName = _("WYATT"),
#line 8954
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8955
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8957
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8958
        .doubleBattle = FALSE,
#line 8959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8961
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8962
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8965
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8966
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8969
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8970
        .trainerName = _("ANGELINA"),
#line 8971
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8972
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8973
F_TRAINER_FEMALE | 
#line 8974
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8975
        .doubleBattle = FALSE,
#line 8976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8978
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8979
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8982
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8983
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8986
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8987
        .trainerName = _("KAI"),
#line 8988
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8989
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8991
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8992
        .doubleBattle = FALSE,
#line 8993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8995
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8996
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8999
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9000
        .trainerName = _("CHARLOTTE"),
#line 9001
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9002
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9003
F_TRAINER_FEMALE | 
#line 9004
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9005
        .doubleBattle = FALSE,
#line 9006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9008
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9009
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9012
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9013
        .trainerName = _("DEANDRE"),
#line 9014
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9015
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9017
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9018
        .doubleBattle = FALSE,
#line 9019
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9021
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9022
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9025
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9026
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9029
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9030
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9033
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9034
        .trainerName = _("GRUNT"),
#line 9035
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9036
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9038
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9039
        .doubleBattle = FALSE,
#line 9040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9042
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9043
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9046
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9047
        .trainerName = _("GRUNT"),
#line 9048
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9049
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9051
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9052
        .doubleBattle = FALSE,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9055
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9056
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9059
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9060
        .trainerName = _("GRUNT"),
#line 9061
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9062
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9064
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9065
        .doubleBattle = FALSE,
#line 9066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9068
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9069
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9072
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9073
        .trainerName = _("GRUNT"),
#line 9074
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9075
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9077
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9078
        .doubleBattle = FALSE,
#line 9079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9081
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9082
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9085
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9086
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9089
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9090
        .trainerName = _("GRUNT"),
#line 9091
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9092
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9094
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9095
        .doubleBattle = FALSE,
#line 9096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9098
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9099
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9102
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9103
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9106
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9107
        .trainerName = _("GRUNT"),
#line 9108
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9109
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9111
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9112
        .doubleBattle = FALSE,
#line 9113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9115
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9116
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9119
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9120
        .trainerName = _("GRUNT"),
#line 9121
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9122
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9124
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9125
        .doubleBattle = FALSE,
#line 9126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9128
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9129
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9132
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9133
        .trainerName = _("GRUNT"),
#line 9134
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9135
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9137
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9138
        .doubleBattle = FALSE,
#line 9139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9141
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9142
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9145
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9146
        .trainerName = _("GRUNT"),
#line 9147
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9148
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9150
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9151
        .doubleBattle = FALSE,
#line 9152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9154
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9155
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9158
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9159
        .trainerName = _("GRUNT"),
#line 9160
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9161
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9163
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9164
        .doubleBattle = FALSE,
#line 9165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9167
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9168
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9171
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9172
        .trainerName = _("GRUNT"),
#line 9173
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9174
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9176
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9177
        .doubleBattle = FALSE,
#line 9178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9180
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9181
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9184
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9185
        .trainerName = _("GRUNT"),
#line 9186
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9187
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9189
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9190
        .doubleBattle = FALSE,
#line 9191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9193
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9194
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9197
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9198
        .trainerName = _("GRUNT"),
#line 9199
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9200
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9202
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9203
        .doubleBattle = FALSE,
#line 9204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9206
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9207
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9210
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9211
        .trainerName = _("GRUNT"),
#line 9212
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9213
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9214
F_TRAINER_FEMALE | 
#line 9215
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9216
        .doubleBattle = FALSE,
#line 9217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9219
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9220
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9223
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9224
        .trainerName = _("GRUNT"),
#line 9225
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9226
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9227
F_TRAINER_FEMALE | 
#line 9228
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9229
        .doubleBattle = FALSE,
#line 9230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9232
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9233
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9236
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9237
        .trainerName = _("GRUNT"),
#line 9238
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9239
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9240
F_TRAINER_FEMALE | 
#line 9241
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9242
        .doubleBattle = FALSE,
#line 9243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9245
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9246
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9249
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9250
        .trainerName = _("TABITHA"),
#line 9251
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9252
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9254
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9255
        .doubleBattle = FALSE,
#line 9256
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9258
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9258
            .heldItem = ITEM_SITRUS_BERRY,
#line 9261
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9259
            .ability = ABILITY_DROUGHT,
#line 9260
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9262
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9267
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9267
            .heldItem = ITEM_POISON_BARB,
#line 9270
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9268
            .ability = ABILITY_LEVITATE,
#line 9269
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9271
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9276
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9276
            .heldItem = ITEM_LIFE_ORB,
#line 9279
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9277
            .ability = ABILITY_LEVITATE,
#line 9278
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9280
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9285
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9285
            .heldItem = ITEM_FOCUS_SASH,
#line 9288
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9286
            .ability = ABILITY_OWN_TEMPO,
#line 9287
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9289
                MOVE_EARTHQUAKE,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_FISSURE,
            },
            },
        },
    },
#line 9294
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9295
        .trainerName = _("DARCY"),
#line 9296
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9297
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9298
F_TRAINER_FEMALE | 
#line 9299
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9300
        .items = { ITEM_HYPER_POTION },
#line 9301
        .doubleBattle = FALSE,
#line 9302
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9304
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9305
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9308
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9309
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9312
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9313
        .trainerName = _("MAXIE"),
#line 9314
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9315
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9317
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9318
        .doubleBattle = FALSE,
#line 9319
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9321
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9321
            .heldItem = ITEM_ROCKY_HELMET,
#line 9324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9322
            .ability = ABILITY_ROCK_HEAD,
#line 9323
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9324
                MOVE_EARTHQUAKE,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 9329
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9329
            .heldItem = ITEM_AIR_BALLOON,
#line 9332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9330
            .ability = ABILITY_HEAVY_METAL,
#line 9331
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9332
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9337
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9337
            .heldItem = ITEM_SHARP_BEAK,
#line 9340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9338
            .ability = ABILITY_INNER_FOCUS,
#line 9339
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9340
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9345
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9346
        .trainerName = _("PETE"),
#line 9347
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9348
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9350
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9351
        .doubleBattle = FALSE,
#line 9352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9355
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9358
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9359
        .trainerName = _("ISABELLE"),
#line 9360
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9361
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9362
F_TRAINER_FEMALE | 
#line 9363
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9364
        .doubleBattle = FALSE,
#line 9365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9367
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9368
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9371
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9372
        .trainerName = _("ANDRES"),
#line 9373
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9374
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9376
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9377
        .doubleBattle = FALSE,
#line 9378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9380
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9382
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9381
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9384
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9386
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9385
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9388
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9389
        .trainerName = _("JOSUE"),
#line 9390
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9391
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9393
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9394
        .doubleBattle = FALSE,
#line 9395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9397
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9399
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9398
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9401
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9403
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9402
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9405
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9406
        .trainerName = _("CAMRON"),
#line 9407
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9408
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9410
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9411
        .doubleBattle = FALSE,
#line 9412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9414
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9415
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9418
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9419
        .trainerName = _("CORY"),
#line 9420
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9421
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9423
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9424
        .doubleBattle = FALSE,
#line 9425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9427
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9428
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9431
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9432
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9435
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9436
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9439
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9440
        .trainerName = _("CAROLINA"),
#line 9441
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9442
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9443
F_TRAINER_FEMALE | 
#line 9444
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9445
        .items = { ITEM_HYPER_POTION },
#line 9446
        .doubleBattle = FALSE,
#line 9447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9449
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9450
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9453
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9455
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9454
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9457
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9458
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9461
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9462
        .trainerName = _("ELIJAH"),
#line 9463
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9464
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9466
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9467
        .doubleBattle = FALSE,
#line 9468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9470
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9471
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9474
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9475
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9478
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9479
        .trainerName = _("CELIA"),
#line 9480
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9481
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9482
F_TRAINER_FEMALE | 
#line 9483
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9484
        .doubleBattle = FALSE,
#line 9485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9487
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9488
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9491
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9492
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9495
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9496
        .trainerName = _("BRYAN"),
#line 9497
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9498
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9500
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9501
        .doubleBattle = FALSE,
#line 9502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9504
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9505
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9508
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9509
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9512
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9513
        .trainerName = _("BRANDEN"),
#line 9514
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9515
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9517
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9518
        .doubleBattle = FALSE,
#line 9519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9521
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9522
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9525
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9526
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9529
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9530
        .trainerName = _("BRYANT"),
#line 9531
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9532
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9534
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9535
        .doubleBattle = FALSE,
#line 9536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9538
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9539
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9542
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9543
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9546
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9547
        .trainerName = _("SHAYLA"),
#line 9548
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9549
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9550
F_TRAINER_FEMALE | 
#line 9551
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9552
        .doubleBattle = FALSE,
#line 9553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9555
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9556
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9559
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9560
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9563
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9564
        .trainerName = _("KYRA"),
#line 9565
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9566
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9567
F_TRAINER_FEMALE | 
#line 9568
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9569
        .doubleBattle = FALSE,
#line 9570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9572
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9573
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9576
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9577
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9580
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9581
        .trainerName = _("JAIDEN"),
#line 9582
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9583
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9585
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9586
        .doubleBattle = FALSE,
#line 9587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9589
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9590
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9593
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9594
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9597
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9598
        .trainerName = _("ALIX"),
#line 9599
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9600
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9601
F_TRAINER_FEMALE | 
#line 9602
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9603
        .doubleBattle = FALSE,
#line 9604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9606
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9607
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9610
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9611
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9614
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9615
        .trainerName = _("HELENE"),
#line 9616
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9617
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9618
F_TRAINER_FEMALE | 
#line 9619
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9620
        .doubleBattle = FALSE,
#line 9621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9623
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9624
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9627
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9628
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9631
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9632
        .trainerName = _("MARLENE"),
#line 9633
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9634
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9635
F_TRAINER_FEMALE | 
#line 9636
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9637
        .doubleBattle = FALSE,
#line 9638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9640
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9641
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9644
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9645
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9648
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9649
        .trainerName = _("DEVAN"),
#line 9650
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9651
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9653
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9654
        .doubleBattle = FALSE,
#line 9655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9657
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9658
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9661
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9662
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9665
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9666
        .trainerName = _("JOHNSON"),
#line 9667
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9668
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9670
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9671
        .doubleBattle = FALSE,
#line 9672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9674
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9675
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9678
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9679
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9682
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9683
        .trainerName = _("MELINA"),
#line 9684
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9685
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9686
F_TRAINER_FEMALE | 
#line 9687
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9688
        .doubleBattle = FALSE,
#line 9689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9691
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9692
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9695
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9696
        .trainerName = _("MELISSA"),
#line 9697
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9698
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9699
F_TRAINER_FEMALE | 
#line 9700
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9701
        .doubleBattle = FALSE,
#line 9702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9704
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9705
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9708
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9709
        .trainerName = _("BRANDI"),
#line 9710
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9711
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9712
F_TRAINER_FEMALE | 
#line 9713
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9714
        .doubleBattle = FALSE,
#line 9715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9717
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9718
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9721
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9722
        .trainerName = _("AISHA"),
#line 9723
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9724
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9725
F_TRAINER_FEMALE | 
#line 9726
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9727
        .doubleBattle = FALSE,
#line 9728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9730
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9731
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9734
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9735
        .trainerName = _("MAKAYLA"),
#line 9736
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9737
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9738
F_TRAINER_FEMALE | 
#line 9739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9740
        .items = { ITEM_HYPER_POTION },
#line 9741
        .doubleBattle = FALSE,
#line 9742
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9744
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9745
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9748
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9749
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9752
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9753
        .trainerName = _("FABIAN"),
#line 9754
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9755
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9757
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9758
        .doubleBattle = FALSE,
#line 9759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9761
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9762
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9765
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9766
        .trainerName = _("DAYTON"),
#line 9767
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9768
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9770
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9771
        .doubleBattle = FALSE,
#line 9772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9774
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9775
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9778
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9779
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9782
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9783
        .trainerName = _("RACHEL"),
#line 9784
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9785
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9786
F_TRAINER_FEMALE | 
#line 9787
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9788
        .doubleBattle = FALSE,
#line 9789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9791
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9792
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9795
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9796
        .trainerName = _("LEONEL"),
#line 9797
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9798
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9800
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9801
        .items = { ITEM_HYPER_POTION },
#line 9802
        .doubleBattle = FALSE,
#line 9803
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9805
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9807
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9806
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9809
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9810
        .trainerName = _("CALLIE"),
#line 9811
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9812
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9813
F_TRAINER_FEMALE | 
#line 9814
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9815
        .doubleBattle = FALSE,
#line 9816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9818
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9819
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9822
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9823
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9826
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9827
        .trainerName = _("CALE"),
#line 9828
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9829
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9831
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9832
        .doubleBattle = FALSE,
#line 9833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9835
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9836
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9839
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9840
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9843
    [DIFFICULTY_NORMAL][TRAINER_SONDHEIM] =
    {
#line 9844
        .trainerName = _("SONDHEIM"),
#line 9845
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9846
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9848
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9849
        .doubleBattle = FALSE,
#line 9850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9852
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9853
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9856
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9857
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9860
    [DIFFICULTY_NORMAL][TRAINER_ASHER] =
    {
#line 9861
        .trainerName = _("ASHER"),
#line 9862
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9863
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9865
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9866
        .doubleBattle = FALSE,
#line 9867
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9869
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9870
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9873
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9874
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9878
    [DIFFICULTY_NORMAL][TRAINER_BRIDGETTE] =
    {
#line 9879
        .trainerName = _("BRIDGETTE"),
#line 9880
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9881
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9882
F_TRAINER_FEMALE | 
#line 9883
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9884
        .doubleBattle = FALSE,
#line 9885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9887
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9888
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9891
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9892
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9895
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9896
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9899
    [DIFFICULTY_NORMAL][TRAINER_FLAVIA] =
    {
#line 9900
        .trainerName = _("FLAVIA"),
#line 9901
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9902
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9903
F_TRAINER_FEMALE | 
#line 9904
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9905
        .doubleBattle = FALSE,
#line 9906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9908
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9909
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9912
    [DIFFICULTY_NORMAL][TRAINER_OLIVE] =
    {
#line 9913
        .trainerName = _("OLIVE"),
#line 9914
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9915
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9916
F_TRAINER_FEMALE | 
#line 9917
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9918
        .doubleBattle = FALSE,
#line 9919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9921
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9922
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9925
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9926
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9929
    [DIFFICULTY_NORMAL][TRAINER_VIOLA] =
    {
#line 9930
        .trainerName = _("VIOLA"),
#line 9931
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9932
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9933
F_TRAINER_FEMALE | 
#line 9934
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9935
        .doubleBattle = FALSE,
#line 9936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9938
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9939
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9942
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9943
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9947
    [DIFFICULTY_NORMAL][TRAINER_REIJU] =
    {
#line 9948
        .trainerName = _("VIOLA"),
#line 9949
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9950
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9951
F_TRAINER_FEMALE | 
#line 9952
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9953
        .doubleBattle = FALSE,
#line 9954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9956
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9957
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9960
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9961
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9964
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9965
        .trainerName = _("MYLES"),
#line 9966
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9967
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9969
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9970
        .doubleBattle = FALSE,
#line 9971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9973
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9975
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9974
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9977
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9979
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9978
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9981
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9983
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9982
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9985
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9986
        .trainerName = _("PAT"),
#line 9987
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9988
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9989
F_TRAINER_FEMALE | 
#line 9990
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9991
        .doubleBattle = FALSE,
#line 9992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9994
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9996
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9995
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9998
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10000
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9999
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10002
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10004
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10003
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10007
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10008
        .trainerName = _("CRISTIN"),
#line 10009
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10010
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10011
F_TRAINER_FEMALE | 
#line 10012
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10013
        .items = { ITEM_HYPER_POTION },
#line 10014
        .doubleBattle = FALSE,
#line 10015
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10017
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10019
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10018
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10021
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10023
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10022
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10025
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10026
        .trainerName = _("GRUNT"),
#line 10027
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10028
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10030
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10031
        .doubleBattle = FALSE,
#line 10032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10034
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10034
            .heldItem = ITEM_EVIOLITE,
#line 10036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10035
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10037
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10038
        .trainerName = _("GRUNT"),
#line 10039
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10040
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10042
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10043
        .doubleBattle = FALSE,
#line 10044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10046
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10048
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10047
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10049
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10050
        .trainerName = _("GRUNT"),
#line 10051
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10052
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10054
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10055
        .doubleBattle = FALSE,
#line 10056
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10058
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10059
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10061
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10062
        .trainerName = _("GRUNT"),
#line 10063
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10064
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10066
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10067
        .doubleBattle = FALSE,
#line 10068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10070
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10071
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10073
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10074
        .trainerName = _("GRUNT"),
#line 10075
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10076
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10078
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10079
        .doubleBattle = FALSE,
#line 10080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10082
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10083
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10085
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10086
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10088
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_1] =
    {
#line 10089
        .trainerName = _("GRUNT"),
#line 10090
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10091
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10093
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10094
        .doubleBattle = FALSE,
#line 10095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10097
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10098
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10101
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_2] =
    {
#line 10102
        .trainerName = _("GRUNT"),
#line 10103
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10104
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10106
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10107
        .doubleBattle = FALSE,
#line 10108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10110
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10112
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10111
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10113
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_3] =
    {
#line 10114
        .trainerName = _("GRUNT"),
#line 10115
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10116
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10118
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10119
        .doubleBattle = FALSE,
#line 10120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10122
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10124
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10123
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10125
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_4] =
    {
#line 10126
        .trainerName = _("GRUNT"),
#line 10127
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10128
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10130
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10131
        .doubleBattle = FALSE,
#line 10132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10134
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10136
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10135
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10137
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10138
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10140
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_5] =
    {
#line 10141
        .trainerName = _("GRUNT"),
#line 10142
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10143
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10145
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10146
        .doubleBattle = FALSE,
#line 10147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10149
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10150
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10152
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_6] =
    {
#line 10153
        .trainerName = _("GRUNT"),
#line 10154
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10155
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10157
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10158
        .doubleBattle = FALSE,
#line 10159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10161
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10162
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10164
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10165
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10167
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_7] =
    {
#line 10168
        .trainerName = _("GRUNT"),
#line 10169
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10170
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10172
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10173
        .doubleBattle = FALSE,
#line 10174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10176
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10177
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10179
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10180
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10182
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10183
        .trainerName = _("ANGELO"),
#line 10184
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10185
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10187
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10188
        .doubleBattle = FALSE,
#line 10189
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10191
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10193
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10192
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10195
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10197
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10196
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10199
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10200
        .trainerName = _("DARIUS"),
#line 10201
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10202
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10204
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10205
        .doubleBattle = FALSE,
#line 10206
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10208
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10210
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10209
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10212
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10213
        .trainerName = _("STEVEN"),
#line 10214
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10215
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10217
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10218
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10219
        .doubleBattle = FALSE,
#line 10220
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10222
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10223
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10225
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10230
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10231
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10233
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10238
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10239
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10241
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10246
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10247
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10249
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10254
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10255
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10257
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10262
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10262
            .heldItem = ITEM_SITRUS_BERRY,
#line 10264
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10263
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10265
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10270
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS] =
    {
#line 10271
        .trainerName = _("GHOSTESS"),
#line 10272
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10273
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10274
F_TRAINER_FEMALE | 
#line 10275
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10276
        .doubleBattle = FALSE,
#line 10277
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10279
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10279
            .heldItem = ITEM_TWISTED_SPOON,
#line 10282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10280
            .ability = ABILITY_THICK_FAT,
#line 10281
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10282
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10287
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10287
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10288
            .ability = ABILITY_WONDER_SKIN,
#line 10289
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10290
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_PAYBACK,
            },
            },
            {
#line 10295
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10295
            .heldItem = ITEM_METRONOME,
#line 10298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10296
            .ability = ABILITY_ROCK_HEAD,
#line 10297
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10298
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ZEN_HEADBUTT,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10303
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10303
            .heldItem = ITEM_ASSAULT_VEST,
#line 10306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10304
            .ability = ABILITY_CURSED_BODY,
#line 10305
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10306
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10311
    [DIFFICULTY_NORMAL][TRAINER_JORDAN] =
    {
#line 10312
        .trainerName = _("JORDAN"),
#line 10313
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10314
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10316
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10317
        .doubleBattle = FALSE,
#line 10318
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10320
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10321
            .ability = ABILITY_CHLOROPHYLL,
#line 10322
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10323
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10328
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10328
            .heldItem = ITEM_EVIOLITE,
#line 10331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10329
            .ability = ABILITY_PRESSURE,
#line 10330
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10331
                MOVE_ZEN_HEADBUTT,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10336
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10336
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10337
            .ability = ABILITY_LIQUID_OOZE,
#line 10338
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10339
                MOVE_GUNK_SHOT,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10344
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10344
            .heldItem = ITEM_QUICK_CLAW,
#line 10347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10345
            .ability = ABILITY_OBLIVIOUS,
#line 10346
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10347
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10352
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10352
            .heldItem = ITEM_SHARP_BEAK,
#line 10355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10353
            .ability = ABILITY_INNER_FOCUS,
#line 10354
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10355
                MOVE_AERIAL_ACE,
                MOVE_CROSS_POISON,
                MOVE_KNOCK_OFF,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10360
    [DIFFICULTY_NORMAL][TRAINER_JORDAN2] =
    {
#line 10361
        .trainerName = _("JORDAN"),
#line 10362
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10363
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10365
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10366
        .doubleBattle = FALSE,
#line 10367
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10369
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10369
            .heldItem = ITEM_WIDE_LENS,
#line 10372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10370
            .ability = ABILITY_CHLOROPHYLL,
#line 10371
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10372
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10377
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10377
            .heldItem = ITEM_LIFE_ORB,
#line 10380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10378
            .ability = ABILITY_PRESSURE,
#line 10379
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10380
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10385
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10385
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10388
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10386
            .ability = ABILITY_LIQUID_OOZE,
#line 10387
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10388
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10393
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10393
            .heldItem = ITEM_CHOICE_SPECS,
#line 10396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10394
            .ability = ABILITY_OBLIVIOUS,
#line 10395
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10396
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 10401
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10401
            .heldItem = ITEM_SHARP_BEAK,
#line 10404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10402
            .ability = ABILITY_INNER_FOCUS,
#line 10403
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10404
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10409
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10409
            .heldItem = ITEM_ASSAULT_VEST,
#line 10412
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10410
            .ability = ABILITY_AIR_LOCK,
#line 10411
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10412
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10417
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS2] =
    {
#line 10418
        .trainerName = _("GHOSTESS"),
#line 10419
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10420
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10421
F_TRAINER_FEMALE | 
#line 10422
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10423
        .doubleBattle = FALSE,
#line 10424
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10426
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10426
            .heldItem = ITEM_EXPERT_BELT,
#line 10429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10427
            .ability = ABILITY_THICK_FAT,
#line 10428
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10429
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10434
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10434
            .heldItem = ITEM_MUSCLE_BAND,
#line 10437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10435
            .ability = ABILITY_WONDER_SKIN,
#line 10436
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10437
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10442
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10442
            .heldItem = ITEM_WIDE_LENS,
#line 10445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10443
            .ability = ABILITY_INTIMIDATE,
#line 10444
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10445
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10450
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10450
            .heldItem = ITEM_ASSAULT_VEST,
#line 10453
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10451
            .ability = ABILITY_CURSED_BODY,
#line 10452
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10453
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10458
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_8] =
    {
#line 10459
        .trainerName = _("GRUNT"),
#line 10460
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10461
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10463
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10464
        .doubleBattle = FALSE,
#line 10465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10467
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10468
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10470
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_9] =
    {
#line 10471
        .trainerName = _("GRUNT"),
#line 10472
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10473
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10475
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10476
        .doubleBattle = FALSE,
#line 10477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10479
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10480
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10482
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_10] =
    {
#line 10483
        .trainerName = _("GRUNT"),
#line 10484
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10485
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10487
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10488
        .doubleBattle = FALSE,
#line 10489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10491
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10492
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10494
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_11] =
    {
#line 10495
        .trainerName = _("GRUNT"),
#line 10496
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10497
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10499
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10500
        .doubleBattle = FALSE,
#line 10501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10503
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10504
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10507
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10508
        .trainerName = _("MARIELA"),
#line 10509
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10510
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10511
F_TRAINER_FEMALE | 
#line 10512
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10513
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10515
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10516
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10519
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10520
        .trainerName = _("ALVARO"),
#line 10521
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10522
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10524
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10525
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10527
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10528
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10531
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10532
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10535
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10536
        .trainerName = _("EVERETT"),
#line 10537
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10538
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10540
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10541
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10543
            .species = SPECIES_WOBBUFFET,
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
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10548
        .trainerName = _("RED"),
#line 10549
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10550
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10552
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10553
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10555
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10556
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10559
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10560
        .trainerName = _("LEAF"),
#line 10561
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10562
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10563
F_TRAINER_FEMALE | 
#line 10564
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10565
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10567
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10568
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10571
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10572
        .trainerName = _("SAMUEL"),
#line 10573
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10574
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10576
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10577
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10579
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10580
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10583
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10584
        .trainerName = _("MAY"),
#line 10585
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10586
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10587
F_TRAINER_FEMALE | 
#line 10588
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10589
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10591
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10592
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
