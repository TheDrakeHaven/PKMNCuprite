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
#line 3284
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 3285
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3281
            .ability = ABILITY_INNER_FOCUS,
#line 3282
            .lvl = 80,
#line 3283
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3285
                MOVE_OUTRAGE,
                MOVE_DRAGON_ASCENT,
                MOVE_TEMPER_FLARE,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3290
            .species = SPECIES_ARTICUNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3290
            .heldItem = ITEM_CHOICE_SPECS,
#line 3294
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 3295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3291
            .ability = ABILITY_REFRIGERATE,
#line 3292
            .lvl = 80,
#line 3293
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3295
                MOVE_TRI_ATTACK,
                MOVE_AIR_SLASH,
                MOVE_ANCIENT_POWER,
                MOVE_GLACIATE,
            },
            },
            {
#line 3300
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3300
            .heldItem = ITEM_AIR_BALLOON,
#line 3304
            .ev = TRAINER_PARTY_EVS(0, 0, 4, 252, 252, 0),
#line 3305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3301
            .ability = ABILITY_VOLT_ABSORB,
#line 3302
            .lvl = 80,
#line 3303
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3305
                MOVE_SHADOW_BALL,
                MOVE_CALM_MIND,
                MOVE_THUNDERBOLT,
                MOVE_DOUBLE_TEAM,
            },
            },
        },
    },
#line 3310
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_EM] =
    {
#line 3311
        .trainerName = _("DRAKE"),
#line 3312
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3313
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3315
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3316
        .doubleBattle = FALSE,
#line 3317
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3318
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3320
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3320
            .heldItem = ITEM_AIR_BALLOON,
#line 3324
            .ev = TRAINER_PARTY_EVS(252, 4, 252, 0, 0, 0),
#line 3325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3321
            .ability = ABILITY_STURDY,
#line 3322
            .lvl = 80,
#line 3323
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3325
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3330
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3330
            .heldItem = ITEM_LIFE_ORB,
#line 3334
            .ev = TRAINER_PARTY_EVS(252, 0, 4, 252, 0, 0),
#line 3335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3331
            .ability = ABILITY_PRANKSTER,
#line 3332
            .lvl = 80,
#line 3333
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3335
                MOVE_PARTING_SHOT,
                MOVE_WILL_O_WISP,
                MOVE_KNOCK_OFF,
                MOVE_POLTERGEIST,
            },
            },
            {
#line 3340
            .species = SPECIES_DEOXYS_ATTACK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3340
            .heldItem = ITEM_WHITE_HERB,
#line 3344
            .ev = TRAINER_PARTY_EVS(4, 0, 0, 252, 252, 0),
#line 3345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3341
            .ability = ABILITY_PRESSURE,
#line 3342
            .lvl = 80,
#line 3343
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3345
                MOVE_PSYCHO_BOOST,
                MOVE_ICE_BEAM,
                MOVE_NASTY_PLOT,
                MOVE_FLASH_CANNON,
            },
            },
            {
#line 3350
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3350
            .heldItem = ITEM_ASSAULT_VEST,
#line 3354
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
#line 3355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3351
            .ability = ABILITY_INTIMIDATE,
#line 3352
            .lvl = 80,
#line 3353
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3355
                MOVE_DRAGON_RUSH,
                MOVE_TEMPER_FLARE,
                MOVE_AIR_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3360
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3360
            .heldItem = ITEM_ROCKY_HELMET,
#line 3364
            .ev = TRAINER_PARTY_EVS(4, 0, 252, 0, 252, 0),
#line 3365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3361
            .ability = ABILITY_FLOWER_VEIL,
#line 3362
            .lvl = 80,
#line 3363
            .nature = NATURE_MILD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3365
                MOVE_MOONBLAST,
                MOVE_ENERGY_BALL,
                MOVE_STRENGTH_SAP,
                MOVE_POLLEN_PUFF,
            },
            },
            {
#line 3370
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3370
            .heldItem = ITEM_LIFE_ORB,
#line 3374
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
#line 3375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3371
            .ability = ABILITY_SPEED_BOOST,
#line 3372
            .lvl = 80,
#line 3373
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3375
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3380
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_PT] =
    {
#line 3381
        .trainerName = _("DRAKE"),
#line 3382
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3383
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3385
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3386
        .doubleBattle = FALSE,
#line 3387
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3388
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3390
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3390
            .heldItem = ITEM_CHOICE_BAND,
#line 3394
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 4),
#line 3395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3391
            .ability = ABILITY_SHELL_ARMOR,
#line 3392
            .lvl = 80,
#line 3393
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3395
                MOVE_HEADLONG_RUSH,
                MOVE_SUPERPOWER,
                MOVE_POWER_WHIP,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 3400
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .heldItem = ITEM_LEFTOVERS,
#line 3404
            .ev = TRAINER_PARTY_EVS(0, 4, 252, 0, 0, 252),
#line 3405
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3401
            .ability = ABILITY_LEVITATE,
#line 3402
            .lvl = 80,
#line 3403
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3405
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
                MOVE_ZEN_HEADBUTT,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3410
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3410
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3414
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 3415
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3411
            .ability = ABILITY_CURSED_BODY,
#line 3412
            .lvl = 80,
#line 3413
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3415
                MOVE_SHADOW_BALL,
                MOVE_GLACIATE,
                MOVE_WILL_O_WISP,
                MOVE_DOUBLE_TEAM,
            },
            },
            {
#line 3420
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3420
            .heldItem = ITEM_LIFE_ORB,
#line 3424
            .ev = TRAINER_PARTY_EVS(0, 252, 4, 252, 0, 0),
#line 3425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3421
            .ability = ABILITY_MOTOR_DRIVE,
#line 3422
            .lvl = 80,
#line 3423
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3425
                MOVE_SUPERCELL_SLAM,
                MOVE_DRAIN_PUNCH,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3430
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3430
            .heldItem = ITEM_ASSAULT_VEST,
#line 3434
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3431
            .ability = ABILITY_SERENE_GRACE,
#line 3432
            .lvl = 80,
#line 3433
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3435
                MOVE_AIR_SLASH,
                MOVE_FIERY_DANCE,
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
            },
            },
            {
#line 3440
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3440
            .heldItem = ITEM_ROCKY_HELMET,
#line 3444
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 3445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3441
            .ability = ABILITY_VITAL_SPIRIT,
#line 3442
            .lvl = 80,
#line 3443
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3445
                MOVE_ARMOR_CANNON,
                MOVE_FIERY_WRATH,
                MOVE_NASTY_PLOT,
                MOVE_SCORCHING_SANDS,
            },
            },
        },
    },
#line 3450
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_SS] =
    {
#line 3451
        .trainerName = _("DRAKE"),
#line 3452
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3453
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3455
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3456
        .doubleBattle = FALSE,
#line 3457
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3458
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3460
            .species = SPECIES_TYPHLOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3460
            .heldItem = ITEM_CHOICE_SPECS,
#line 3464
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 6),
#line 3465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3461
            .ability = ABILITY_FLASH_FIRE,
#line 3462
            .lvl = 80,
#line 3463
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3465
                MOVE_SEARING_SHOT,
                MOVE_INFERNAL_PARADE,
                MOVE_SOLAR_BEAM,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3470
            .species = SPECIES_LUGIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .heldItem = ITEM_LEFTOVERS,
#line 3474
            .ev = TRAINER_PARTY_EVS(252, 0, 6, 0, 0, 252),
#line 3475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3471
            .ability = ABILITY_MULTISCALE,
#line 3472
            .lvl = 80,
#line 3473
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3475
                MOVE_AEROBLAST,
                MOVE_ESPER_WING,
                MOVE_DRAGON_PULSE,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3480
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .heldItem = ITEM_MUSCLE_BAND,
#line 3484
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3481
            .ability = ABILITY_SHARPNESS,
#line 3482
            .lvl = 80,
#line 3483
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3485
                MOVE_AQUA_CUTTER,
                MOVE_STONE_AXE,
                MOVE_CEASELESS_EDGE,
                MOVE_X_SCISSOR,
            },
            },
            {
#line 3490
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3490
            .heldItem = ITEM_ROCKY_HELMET,
#line 3494
            .ev = TRAINER_PARTY_EVS(0, 252, 252, 0, 0, 6),
#line 3495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3491
            .ability = ABILITY_DEFIANT,
#line 3492
            .lvl = 80,
#line 3493
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3495
                MOVE_RAGE_FIST,
                MOVE_BULK_UP,
                MOVE_CLOSE_COMBAT,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3500
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3500
            .heldItem = ITEM_ASSAULT_VEST,
#line 3504
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 3505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3501
            .ability = ABILITY_INNER_FOCUS,
#line 3502
            .lvl = 80,
#line 3503
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3505
                MOVE_NIGHT_SHADE,
                MOVE_MOONBLAST,
                MOVE_SHADOW_BALL,
                MOVE_LUMINA_CRASH,
            },
            },
            {
#line 3510
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3510
            .heldItem = ITEM_LOADED_DICE,
#line 3514
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3511
            .ability = ABILITY_THICK_FAT,
#line 3512
            .lvl = 80,
#line 3513
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3515
                MOVE_ICICLE_SPEAR,
                MOVE_BONE_RUSH,
                MOVE_ROCK_BLAST,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 3520
    [DIFFICULTY_NORMAL][TRAINER_DRAKE_CHAMP] =
    {
#line 3521
        .trainerName = _("DRAKE"),
#line 3522
        .trainerClass = TRAINER_CLASS_GAMER,
#line 3523
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3525
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3526
        .doubleBattle = FALSE,
#line 3527
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3528
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3530
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3530
            .heldItem = ITEM_ROCKY_HELMET,
#line 3534
            .ev = TRAINER_PARTY_EVS(252, 6, 252, 0, 0, 0),
#line 3535
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3531
            .ability = ABILITY_SAND_STREAM,
#line 3532
            .lvl = 80,
#line 3533
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3535
                MOVE_KNOCK_OFF,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_ACCELEROCK,
            },
            },
            {
#line 3540
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3540
            .heldItem = ITEM_LEFTOVERS,
#line 3544
            .ev = TRAINER_PARTY_EVS(158, 252, 0, 100, 0, 0),
#line 3545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3541
            .ability = ABILITY_SAND_VEIL,
#line 3542
            .lvl = 80,
#line 3543
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3545
                MOVE_DRAGON_RUSH,
                MOVE_EARTHQUAKE,
                MOVE_SWORDS_DANCE,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3550
            .species = SPECIES_HEATRAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3550
            .heldItem = ITEM_ASSAULT_VEST,
#line 3554
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 6, 252, 252),
#line 3555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3551
            .ability = ABILITY_FLAME_BODY,
#line 3552
            .lvl = 80,
#line 3553
            .nature = NATURE_HASTY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3555
                MOVE_MAGMA_STORM,
                MOVE_FLASH_CANNON,
                MOVE_BODY_PRESS,
                MOVE_SCORCHING_SANDS,
            },
            },
            {
#line 3560
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3560
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3564
            .ev = TRAINER_PARTY_EVS(2, 252, 4, 252, 0, 0),
#line 3565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3561
            .ability = ABILITY_INTIMIDATE,
#line 3562
            .lvl = 80,
#line 3563
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3565
                MOVE_DRAGON_RUSH,
                MOVE_TEMPER_FLARE,
                MOVE_AIR_SLASH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3570
            .species = SPECIES_TERRAKION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .heldItem = ITEM_CHOICE_BAND,
#line 3574
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .ability = ABILITY_JUSTIFIED,
#line 3572
            .lvl = 80,
#line 3573
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3575
                MOVE_STONE_EDGE,
                MOVE_CLOSE_COMBAT,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3580
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3580
            .heldItem = ITEM_LOADED_DICE,
#line 3584
            .ev = TRAINER_PARTY_EVS(0, 252, 6, 252, 0, 0),
#line 3585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3581
            .ability = ABILITY_THICK_FAT,
#line 3582
            .lvl = 80,
#line 3583
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3585
                MOVE_ICICLE_SPEAR,
                MOVE_BONE_RUSH,
                MOVE_ROCK_BLAST,
                MOVE_IRON_HEAD,
            },
            },
        },
    },
#line 3590
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
    {
#line 3591
        .trainerName = _("ALEC"),
#line 3592
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3593
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3595
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3596
        .doubleBattle = FALSE,
#line 3597
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3599
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3603
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3600
            .ability = ABILITY_STURDY,
#line 3601
            .lvl = 16,
#line 3602
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3604
                MOVE_STEALTH_ROCK,
                MOVE_MIMIC,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3609
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3613
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3610
            .ability = ABILITY_LEVITATE,
#line 3611
            .lvl = 16,
#line 3612
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3614
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3619
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3619
            .heldItem = ITEM_SALAC_BERRY,
#line 3623
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3620
            .ability = ABILITY_SUCTION_CUPS,
#line 3621
            .lvl = 16,
#line 3622
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3624
                MOVE_ANCIENT_POWER,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 3629
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3629
            .heldItem = ITEM_SALAC_BERRY,
#line 3633
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3630
            .ability = ABILITY_UNNERVE,
#line 3631
            .lvl = 16,
#line 3632
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3634
                MOVE_ANCIENT_POWER,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3639
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3640
        .trainerName = _("GARRETT"),
#line 3641
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3642
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3644
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3645
        .doubleBattle = FALSE,
#line 3646
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3648
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3652
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3649
            .ability = ABILITY_MARVEL_SCALE,
#line 3650
            .lvl = 22,
#line 3651
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3653
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3658
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3659
            .ability = ABILITY_TORRENT,
#line 3660
            .lvl = 22,
#line 3661
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3663
                MOVE_FLIP_TURN,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3668
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3668
            .heldItem = ITEM_SCOPE_LENS,
#line 3672
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3669
            .ability = ABILITY_SKILL_LINK,
#line 3670
            .lvl = 22,
#line 3671
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3678
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .heldItem = ITEM_WIDE_LENS,
#line 3682
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3679
            .ability = ABILITY_TORRENT,
#line 3680
            .lvl = 22,
#line 3681
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3683
                MOVE_BULLDOZE,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3688
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3689
        .trainerName = _("SAM"),
#line 3690
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3691
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3693
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3694
        .doubleBattle = FALSE,
#line 3695
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3697
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3697
            .heldItem = ITEM_METAL_COAT,
#line 3701
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3698
            .ability = ABILITY_MAGNET_PULL,
#line 3699
            .lvl = 32,
#line 3700
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3702
                MOVE_MAGNET_RISE,
                MOVE_SPARK,
                MOVE_FLASH_CANNON,
                MOVE_TRI_ATTACK,
            },
            },
            {
#line 3707
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3707
            .heldItem = ITEM_SILK_SCARF,
#line 3711
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3708
            .ability = ABILITY_DOWNLOAD,
#line 3709
            .lvl = 32,
#line 3710
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3712
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3717
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3717
            .heldItem = ITEM_SITRUS_BERRY,
#line 3721
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3718
            .ability = ABILITY_VITAL_SPIRIT,
#line 3720
            .lvl = 32,
#line 3719
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3722
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_METAL_SOUND,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3727
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3727
            .heldItem = ITEM_SITRUS_BERRY,
#line 3731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3728
            .ability = ABILITY_INTIMIDATE,
#line 3730
            .lvl = 32,
#line 3729
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3731
                MOVE_BITE,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3736
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3736
            .heldItem = ITEM_MAGNET,
#line 3740
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3737
            .ability = ABILITY_STATIC,
#line 3738
            .lvl = 32,
#line 3739
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3741
                MOVE_ELECTRIC_TERRAIN,
                MOVE_PAYBACK,
                MOVE_MUD_BOMB,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 3746
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3747
        .trainerName = _("JOSE"),
#line 3748
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3749
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3751
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3752
        .doubleBattle = FALSE,
#line 3753
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3755
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3755
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3759
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3756
            .ability = ABILITY_NATURAL_CURE,
#line 3757
            .lvl = 38,
#line 3758
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3760
                MOVE_COTTON_GUARD,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_ALLURING_VOICE,
            },
            },
            {
#line 3765
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3765
            .heldItem = ITEM_CHARCOAL,
#line 3769
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3766
            .ability = ABILITY_BLAZE,
#line 3767
            .lvl = 38,
#line 3768
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3770
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3775
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .heldItem = ITEM_ASSAULT_VEST,
#line 3779
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3776
            .ability = ABILITY_LEVITATE,
#line 3777
            .lvl = 38,
#line 3778
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3780
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3785
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3785
            .heldItem = ITEM_ROCKY_HELMET,
#line 3789
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3786
            .ability = ABILITY_MARVEL_SCALE,
#line 3787
            .lvl = 38,
#line 3788
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3790
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_SLAM,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3795
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3795
            .heldItem = ITEM_DRAGON_FANG,
#line 3799
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3796
            .ability = ABILITY_SNIPER,
#line 3797
            .lvl = 38,
#line 3798
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3800
                MOVE_SCALE_SHOT,
                MOVE_OCTAZOOKA,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
            {
#line 3805
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .heldItem = ITEM_LIFE_ORB,
#line 3809
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3806
            .ability = ABILITY_ROUGH_SKIN,
#line 3807
            .lvl = 38,
#line 3808
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3810
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3815
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3816
        .trainerName = _("GRAYSON"),
#line 3817
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3818
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3820
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3821
        .doubleBattle = FALSE,
#line 3822
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3824
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3824
            .heldItem = ITEM_MUSCLE_BAND,
#line 3828
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3825
            .ability = ABILITY_IRON_FIST,
#line 3826
            .lvl = 43,
#line 3827
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3828
                MOVE_BULK_UP,
                MOVE_ROCK_SLIDE,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3833
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3833
            .heldItem = ITEM_BLACK_BELT,
#line 3837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3834
            .ability = ABILITY_GUTS,
#line 3835
            .lvl = 43,
#line 3836
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3837
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3842
            .species = SPECIES_LOPUNNY,
#line 3842
            .gender = TRAINER_MON_FEMALE,
#line 3842
            .heldItem = ITEM_ROCKY_HELMET,
#line 3846
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3843
            .ability = ABILITY_CUTE_CHARM,
#line 3844
            .lvl = 43,
#line 3845
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3846
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3851
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3851
            .heldItem = ITEM_FOCUS_BAND,
#line 3855
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3852
            .ability = ABILITY_MOXIE,
#line 3853
            .lvl = 43,
#line 3854
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3860
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .heldItem = ITEM_EXPERT_BELT,
#line 3864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3861
            .ability = ABILITY_INNER_FOCUS,
#line 3862
            .lvl = 43,
#line 3863
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3864
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_METAL_SOUND,
            },
            },
            {
#line 3869
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3869
            .heldItem = ITEM_FOCUS_BAND,
#line 3873
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3870
            .ability = ABILITY_POISON_TOUCH,
#line 3871
            .lvl = 43,
#line 3872
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3878
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3879
        .trainerName = _("MATTHEW"),
#line 3880
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3881
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3883
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3884
        .doubleBattle = FALSE,
#line 3885
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3887
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3887
            .heldItem = ITEM_AIR_BALLOON,
#line 3891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3888
            .ability = ABILITY_STURDY,
#line 3889
            .lvl = 51,
#line 3890
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3891
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3896
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3896
            .heldItem = ITEM_MUSCLE_BAND,
#line 3900
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3897
            .ability = ABILITY_STURDY,
#line 3898
            .lvl = 51,
#line 3899
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3900
                MOVE_ROOST,
                MOVE_DRILL_PECK,
                MOVE_IRON_HEAD,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 3905
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3905
            .heldItem = ITEM_ASSAULT_VEST,
#line 3909
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3906
            .ability = ABILITY_CLEAR_BODY,
#line 3907
            .lvl = 51,
#line 3908
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3909
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3914
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3914
            .heldItem = ITEM_CHOICE_SPECS,
#line 3918
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3915
            .ability = ABILITY_COMPETITIVE,
#line 3916
            .lvl = 51,
#line 3917
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3918
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3923
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .heldItem = ITEM_CHOICE_BAND,
#line 3927
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3924
            .ability = ABILITY_TECHNICIAN,
#line 3925
            .lvl = 51,
#line 3926
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3927
                MOVE_BULLET_PUNCH,
                MOVE_MEGAHORN,
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3932
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3932
            .heldItem = ITEM_ROCKY_HELMET,
#line 3936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3933
            .ability = ABILITY_IRON_BARBS,
#line 3934
            .lvl = 51,
#line 3935
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3936
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3941
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3942
        .trainerName = _("MARK"),
#line 3943
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3944
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3946
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3947
        .doubleBattle = FALSE,
#line 3948
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3950
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .heldItem = ITEM_ROCKY_HELMET,
#line 3954
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3951
            .ability = ABILITY_FLASH_FIRE,
#line 3952
            .lvl = 61,
#line 3953
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3954
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_MOONBLAST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3959
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3959
            .heldItem = ITEM_CHOICE_SPECS,
#line 3963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3960
            .ability = ABILITY_PIXILATE,
#line 3961
            .lvl = 61,
#line 3962
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3963
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_MOONBLAST,
            },
            },
            {
#line 3968
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3968
            .heldItem = ITEM_CHOICE_BAND,
#line 3972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3969
            .ability = ABILITY_HUGE_POWER,
#line 3970
            .lvl = 61,
#line 3971
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3972
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 3977
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3977
            .heldItem = ITEM_ASSAULT_VEST,
#line 3981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3978
            .ability = ABILITY_SERENE_GRACE,
#line 3979
            .lvl = 61,
#line 3980
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3981
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3986
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3986
            .heldItem = ITEM_LEFTOVERS,
#line 3990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3987
            .ability = ABILITY_SERENE_GRACE,
#line 3988
            .lvl = 61,
#line 3989
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3990
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_FIERY_DANCE,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3995
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .heldItem = ITEM_OCCA_BERRY,
#line 3999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3996
            .ability = ABILITY_INTIMIDATE,
#line 3997
            .lvl = 61,
#line 3998
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3999
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 4004
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 4005
        .trainerName = _("XANDER"),
#line 4006
        .trainerClass = TRAINER_CLASS_LEADER,
#line 4007
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 4009
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4010
        .doubleBattle = TRUE,
#line 4011
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4013
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4013
            .heldItem = ITEM_BLACK_SLUDGE,
#line 4017
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4014
            .ability = ABILITY_CURSED_BODY,
#line 4015
            .lvl = 67,
#line 4016
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4017
                MOVE_ASTRAL_BARRAGE,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 4022
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4022
            .heldItem = ITEM_SITRUS_BERRY,
#line 4026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4023
            .ability = ABILITY_MUMMY,
#line 4024
            .lvl = 67,
#line 4025
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4026
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_BALL,
                MOVE_PROTECT,
            },
            },
            {
#line 4031
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4031
            .heldItem = ITEM_CHOICE_SPECS,
#line 4035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4032
            .ability = ABILITY_FLASH_FIRE,
#line 4033
            .lvl = 67,
#line 4034
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4035
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 4040
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .heldItem = ITEM_SITRUS_BERRY,
#line 4044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4041
            .ability = ABILITY_LEVITATE,
#line 4042
            .lvl = 67,
#line 4043
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4044
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 4049
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4049
            .heldItem = ITEM_CHOICE_BAND,
#line 4053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4050
            .ability = ABILITY_NO_GUARD,
#line 4051
            .lvl = 67,
#line 4052
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4053
                MOVE_EARTHQUAKE,
                MOVE_RAGE_FIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 4058
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4058
            .heldItem = ITEM_LEFTOVERS,
#line 4062
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4059
            .ability = ABILITY_PRESSURE,
#line 4060
            .lvl = 67,
#line 4061
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4062
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 4067
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 4068
        .trainerName = _("JERRY"),
#line 4069
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4070
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4072
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4073
        .doubleBattle = FALSE,
#line 4074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4076
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4077
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4080
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 4081
        .trainerName = _("TED"),
#line 4082
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4083
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4085
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4086
        .doubleBattle = FALSE,
#line 4087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4089
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4091
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4090
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4093
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 4094
        .trainerName = _("PAUL"),
#line 4095
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4096
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 4098
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4099
        .doubleBattle = FALSE,
#line 4100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4102
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4104
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4103
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4106
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4108
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4107
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4110
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4112
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4111
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4114
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 4115
        .trainerName = _("KAREN"),
#line 4116
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4117
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4118
F_TRAINER_FEMALE | 
#line 4119
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4120
        .doubleBattle = FALSE,
#line 4121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4123
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4125
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4124
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4127
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 4128
        .trainerName = _("GEORGIA"),
#line 4129
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 4130
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 4131
F_TRAINER_FEMALE | 
#line 4132
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4133
        .doubleBattle = FALSE,
#line 4134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4136
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4138
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4137
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4140
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4141
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4144
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 4145
        .trainerName = _("KATE & JOY"),
#line 4146
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4147
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4149
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4150
        .doubleBattle = TRUE,
#line 4151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4153
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4154
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4157
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4158
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4162
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 4163
        .trainerName = _("ANNA & MEG"),
#line 4164
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 4165
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 4167
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4168
        .doubleBattle = TRUE,
#line 4169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4171
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4172
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4175
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4176
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4179
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 4180
        .trainerName = _("VICTOR"),
#line 4181
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4182
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4184
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4185
        .doubleBattle = FALSE,
#line 4186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4188
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .heldItem = ITEM_ORAN_BERRY,
#line 4190
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4189
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4192
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .heldItem = ITEM_ORAN_BERRY,
#line 4194
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 4193
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4196
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 4197
        .trainerName = _("MIGUEL"),
#line 4198
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4199
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4201
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4202
        .doubleBattle = FALSE,
#line 4203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4205
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .heldItem = ITEM_ORAN_BERRY,
#line 4207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4206
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4209
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 4210
        .trainerName = _("COLTON"),
#line 4211
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4212
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 4214
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4215
        .doubleBattle = FALSE,
#line 4216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4218
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .heldItem = ITEM_ORAN_BERRY,
#line 4220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4219
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4221
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4226
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .heldItem = ITEM_ORAN_BERRY,
#line 4228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4227
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4229
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4234
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4234
            .heldItem = ITEM_ORAN_BERRY,
#line 4236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4235
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4237
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4242
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4242
            .heldItem = ITEM_ORAN_BERRY,
#line 4244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4243
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4245
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4250
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4250
            .heldItem = ITEM_ORAN_BERRY,
#line 4252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4251
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4253
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 4258
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4258
            .heldItem = ITEM_ORAN_BERRY,
#line 4260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4259
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4261
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 4266
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 4267
        .trainerName = _("VICTORIA"),
#line 4268
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4269
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4270
F_TRAINER_FEMALE | 
#line 4271
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4272
        .doubleBattle = FALSE,
#line 4273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4275
            .heldItem = ITEM_ORAN_BERRY,
#line 4277
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 4276
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4279
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 4280
        .trainerName = _("VANESSA"),
#line 4281
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4282
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4283
F_TRAINER_FEMALE | 
#line 4284
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4285
        .doubleBattle = FALSE,
#line 4286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4288
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4288
            .heldItem = ITEM_ORAN_BERRY,
#line 4290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4289
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4292
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4293
        .trainerName = _("BETHANY"),
#line 4294
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4295
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4296
F_TRAINER_FEMALE | 
#line 4297
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4298
        .doubleBattle = FALSE,
#line 4299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4301
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4301
            .heldItem = ITEM_ORAN_BERRY,
#line 4303
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4302
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4305
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4305
            .heldItem = ITEM_ORAN_BERRY,
#line 4307
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4306
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4309
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4309
            .heldItem = ITEM_ORAN_BERRY,
#line 4311
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4310
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4313
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 4314
        .trainerName = _("ISABEL"),
#line 4315
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4316
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4317
F_TRAINER_FEMALE | 
#line 4318
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4319
        .doubleBattle = FALSE,
#line 4320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4322
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4322
            .heldItem = ITEM_ORAN_BERRY,
#line 4324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4323
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4326
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4326
            .heldItem = ITEM_ORAN_BERRY,
#line 4328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4327
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4330
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 4331
        .trainerName = _("TIMOTHY"),
#line 4332
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4333
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4335
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4336
        .doubleBattle = FALSE,
#line 4337
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4339
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4341
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4340
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4343
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4344
        .trainerName = _("VICKY"),
#line 4345
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4346
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4347
F_TRAINER_FEMALE | 
#line 4348
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4349
        .doubleBattle = FALSE,
#line 4350
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4352
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4354
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4353
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4356
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 4357
        .trainerName = _("SHELBY"),
#line 4358
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4359
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4360
F_TRAINER_FEMALE | 
#line 4361
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4362
        .doubleBattle = FALSE,
#line 4363
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4365
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4367
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4366
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4369
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4371
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4370
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4373
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4374
        .trainerName = _("CALVIN"),
#line 4375
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4376
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4378
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4379
        .doubleBattle = FALSE,
#line 4380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4382
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4383
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4386
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4387
        .trainerName = _("BILLY"),
#line 4388
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4389
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4391
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4392
        .doubleBattle = FALSE,
#line 4393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4395
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4396
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4399
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4400
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4403
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4404
        .trainerName = _("JOSH"),
#line 4405
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4406
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4408
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4409
        .doubleBattle = FALSE,
#line 4410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4412
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4414
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4413
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4415
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4417
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4418
        .trainerName = _("TOMMY"),
#line 4419
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4420
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4422
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4423
        .doubleBattle = FALSE,
#line 4424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4426
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4428
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4427
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4430
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4432
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4431
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4434
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4435
        .trainerName = _("JOEY"),
#line 4436
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4437
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4439
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4440
        .doubleBattle = FALSE,
#line 4441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4443
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4444
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4447
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4448
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4451
    [DIFFICULTY_NORMAL][TRAINER_GLASSES] =
    {
#line 4452
        .trainerName = _("GLASSES"),
#line 4453
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4454
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4456
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4457
        .doubleBattle = FALSE,
#line 4458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4460
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4461
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4464
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4465
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4468
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4469
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4472
    [DIFFICULTY_NORMAL][TRAINER_PERKEO] =
    {
#line 4473
        .trainerName = _("PERKEO"),
#line 4474
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4475
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4477
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4478
        .doubleBattle = FALSE,
#line 4479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4481
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4482
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4485
            .species = SPECIES_RAMPARDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4486
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4489
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4490
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4493
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 4494
        .trainerName = _("DANNY"),
#line 4495
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4496
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4498
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4499
        .doubleBattle = FALSE,
#line 4500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4502
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4503
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4506
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4507
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4510
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4511
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4514
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4515
        .trainerName = _("BEN"),
#line 4516
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4517
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4519
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4520
        .doubleBattle = FALSE,
#line 4521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4523
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4525
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4524
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4528
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4530
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4529
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4533
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4534
        .trainerName = _("QUINCY"),
#line 4535
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4536
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4538
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4539
        .items = { ITEM_FULL_RESTORE },
#line 4540
        .doubleBattle = FALSE,
#line 4541
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4543
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4545
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4544
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4547
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4549
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4548
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4551
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4552
        .trainerName = _("KATELYNN"),
#line 4553
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4554
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4555
F_TRAINER_FEMALE | 
#line 4556
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4557
        .items = { ITEM_FULL_RESTORE },
#line 4558
        .doubleBattle = FALSE,
#line 4559
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4561
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4562
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4564
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4569
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4571
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4570
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4572
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4577
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4578
        .trainerName = _("JAYLEN"),
#line 4579
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4580
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4582
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4583
        .doubleBattle = FALSE,
#line 4584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4586
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4587
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4590
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4591
        .trainerName = _("DILLON"),
#line 4592
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4593
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4595
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4596
        .doubleBattle = FALSE,
#line 4597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4599
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4600
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4603
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4604
        .trainerName = _("EDDIE"),
#line 4605
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4606
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4608
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4609
        .doubleBattle = FALSE,
#line 4610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4612
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4613
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4616
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4617
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4620
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4621
        .trainerName = _("ALLEN"),
#line 4622
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4623
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4625
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4626
        .doubleBattle = FALSE,
#line 4627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4629
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4630
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4633
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4634
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4637
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4638
        .trainerName = _("TIMMY"),
#line 4639
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4640
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4642
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4643
        .doubleBattle = FALSE,
#line 4644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4646
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4647
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4650
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4651
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4654
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4655
        .trainerName = _("FATTY"),
#line 4656
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4657
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4659
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4660
        .doubleBattle = FALSE,
#line 4661
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4662
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4664
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4664
            .heldItem = ITEM_LIFE_ORB,
#line 4668
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4665
            .ability = ABILITY_THICK_FAT,
#line 4666
            .lvl = 77,
#line 4667
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4669
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4674
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .heldItem = ITEM_CHOICE_BAND,
#line 4678
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4679
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4675
            .ability = ABILITY_INTIMIDATE,
#line 4676
            .lvl = 77,
#line 4677
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4679
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4684
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4684
            .heldItem = ITEM_LEFTOVERS,
#line 4688
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4689
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4685
            .ability = ABILITY_CHLOROPHYLL,
#line 4686
            .lvl = 77,
#line 4687
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4689
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4694
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .heldItem = ITEM_FOCUS_SASH,
#line 4698
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4695
            .ability = ABILITY_MAGIC_GUARD,
#line 4696
            .lvl = 77,
#line 4697
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4699
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4704
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4704
            .heldItem = ITEM_WIDE_LENS,
#line 4708
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4709
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4705
            .ability = ABILITY_STATIC,
#line 4706
            .lvl = 77,
#line 4707
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4709
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4714
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4714
            .heldItem = ITEM_EVIOLITE,
#line 4718
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4719
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4715
            .ability = ABILITY_SWIFT_SWIM,
#line 4716
            .lvl = 77,
#line 4717
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4719
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4724
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4725
        .trainerName = _("ANDREW"),
#line 4726
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4727
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4729
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4730
        .doubleBattle = FALSE,
#line 4731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4733
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4734
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4737
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4738
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4741
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4742
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4745
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4746
        .trainerName = _("IVAN"),
#line 4747
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4748
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4750
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4751
        .doubleBattle = FALSE,
#line 4752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4754
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4755
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4758
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4759
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4762
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4763
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4766
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4767
        .trainerName = _("CLAUDE"),
#line 4768
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4769
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4771
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4772
        .doubleBattle = FALSE,
#line 4773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4775
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4776
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4779
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4780
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4783
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4784
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4787
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4788
        .trainerName = _("ELLIOT"),
#line 4789
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4790
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4792
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4793
        .doubleBattle = FALSE,
#line 4794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4796
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4797
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4800
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4801
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4804
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4805
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4808
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4809
        .trainerName = _("NED"),
#line 4810
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4811
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4813
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4814
        .doubleBattle = FALSE,
#line 4815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4817
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4819
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4818
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4821
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4822
        .trainerName = _("DALE"),
#line 4823
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4824
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4826
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4827
        .doubleBattle = FALSE,
#line 4828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4830
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4831
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4834
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4835
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4838
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4839
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4842
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4843
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4846
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4847
        .trainerName = _("NOLAN"),
#line 4848
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4849
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4851
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4852
        .doubleBattle = FALSE,
#line 4853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4855
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4856
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4859
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4860
        .trainerName = _("BARNY"),
#line 4861
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4862
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4864
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4865
        .doubleBattle = FALSE,
#line 4866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4868
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4869
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4872
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4873
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4876
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4877
        .trainerName = _("WADE"),
#line 4878
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4879
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4881
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4882
        .doubleBattle = FALSE,
#line 4883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4885
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4887
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4886
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4888
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4889
        .trainerName = _("ABIGAL"),
#line 4890
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4891
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4892
F_TRAINER_FEMALE | 
#line 4893
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4894
        .doubleBattle = FALSE,
#line 4895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4897
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4898
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4900
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4901
        .trainerName = _("CARTER"),
#line 4902
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4903
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4905
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4906
        .doubleBattle = FALSE,
#line 4907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4909
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4911
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4910
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4913
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4915
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4914
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4917
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4918
        .trainerName = _("RONALD"),
#line 4919
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4920
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4922
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4923
        .doubleBattle = FALSE,
#line 4924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4926
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4927
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4931
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4932
        .trainerName = _("JACOB"),
#line 4933
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4934
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4936
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4937
        .doubleBattle = FALSE,
#line 4938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4940
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4942
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4941
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4944
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4946
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4945
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4948
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4950
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4949
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4952
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4953
        .trainerName = _("ANTHONY"),
#line 4954
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4955
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4957
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4958
        .doubleBattle = FALSE,
#line 4959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4961
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4962
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4965
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4966
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4969
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4970
        .trainerName = _("BENJAMIN"),
#line 4971
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4972
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4974
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4975
        .doubleBattle = FALSE,
#line 4976
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4978
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4979
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4982
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4983
        .trainerName = _("JASMINE"),
#line 4984
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4985
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4986
F_TRAINER_FEMALE | 
#line 4987
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4988
        .doubleBattle = FALSE,
#line 4989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4991
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4993
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4992
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4995
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4997
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4996
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4999
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5000
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5003
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 5004
        .trainerName = _("DYLAN"),
#line 5005
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5006
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5008
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5009
        .doubleBattle = FALSE,
#line 5010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5012
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5013
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5016
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 5017
        .trainerName = _("MARIA"),
#line 5018
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5019
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5020
F_TRAINER_FEMALE | 
#line 5021
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5022
        .doubleBattle = FALSE,
#line 5023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5025
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5026
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5029
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 5030
        .trainerName = _("CAMDEN"),
#line 5031
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5032
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5034
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5035
        .doubleBattle = FALSE,
#line 5036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5038
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5039
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5042
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5043
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5046
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 5047
        .trainerName = _("DEMETRIUS"),
#line 5048
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 5049
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 5051
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5052
        .doubleBattle = FALSE,
#line 5053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5055
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5056
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5059
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5060
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5063
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 5064
        .trainerName = _("ISAIAH"),
#line 5065
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5066
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5068
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5069
        .doubleBattle = FALSE,
#line 5070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5072
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5073
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5076
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 5077
        .trainerName = _("PABLO"),
#line 5078
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5079
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5081
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5082
        .doubleBattle = FALSE,
#line 5083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5085
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5086
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5089
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5090
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5093
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 5094
        .trainerName = _("CHASE"),
#line 5095
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5096
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 5098
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5099
        .doubleBattle = FALSE,
#line 5100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5102
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5103
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5106
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5108
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5107
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5110
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 5111
        .trainerName = _("ISOBEL"),
#line 5112
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5113
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5114
F_TRAINER_FEMALE | 
#line 5115
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5116
        .doubleBattle = FALSE,
#line 5117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5119
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5120
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5123
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 5124
        .trainerName = _("DONNY"),
#line 5125
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5126
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5127
F_TRAINER_FEMALE | 
#line 5128
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5129
        .doubleBattle = FALSE,
#line 5130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5132
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5133
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5136
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5138
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 5137
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5140
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 5141
        .trainerName = _("TALIA"),
#line 5142
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5143
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5144
F_TRAINER_FEMALE | 
#line 5145
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5146
        .doubleBattle = FALSE,
#line 5147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5149
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5150
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5153
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 5154
        .trainerName = _("KATELYN"),
#line 5155
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5156
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5157
F_TRAINER_FEMALE | 
#line 5158
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5159
        .doubleBattle = FALSE,
#line 5160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5162
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5163
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5166
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 5167
        .trainerName = _("ALLISON"),
#line 5168
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 5169
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 5170
F_TRAINER_FEMALE | 
#line 5171
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5172
        .doubleBattle = FALSE,
#line 5173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5175
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5176
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5179
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5181
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 5180
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5183
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 5184
        .trainerName = _("NICOLAS"),
#line 5185
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5186
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5188
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5189
        .doubleBattle = FALSE,
#line 5190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5192
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5194
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5193
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5196
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5198
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5197
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5200
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 5201
        .trainerName = _("AARON"),
#line 5202
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 5203
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 5205
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5206
        .doubleBattle = FALSE,
#line 5207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5209
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5210
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5213
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 5214
        .trainerName = _("PERRY"),
#line 5215
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5216
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5218
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5219
        .doubleBattle = FALSE,
#line 5220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5222
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5223
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5226
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 5227
        .trainerName = _("HUGH"),
#line 5228
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5229
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5231
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5232
        .doubleBattle = FALSE,
#line 5233
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5235
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5237
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5236
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5239
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5240
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5243
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 5244
        .trainerName = _("PHIL"),
#line 5245
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5246
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5248
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5249
        .doubleBattle = FALSE,
#line 5250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5252
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5253
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5256
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 5257
        .trainerName = _("JARED"),
#line 5258
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5259
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5261
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5262
        .doubleBattle = FALSE,
#line 5263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5265
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5267
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5266
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5269
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5271
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5270
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5273
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5275
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5274
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5277
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 5278
        .trainerName = _("HUMBERTO"),
#line 5279
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5280
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5282
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5283
        .doubleBattle = FALSE,
#line 5284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5286
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5288
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5287
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5290
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5291
        .trainerName = _("PRESLEY"),
#line 5292
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5293
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5295
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5296
        .doubleBattle = FALSE,
#line 5297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5299
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5300
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5303
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5304
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5307
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5308
        .trainerName = _("EDWARDO"),
#line 5309
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5310
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5312
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5313
        .doubleBattle = FALSE,
#line 5314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5316
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5318
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5317
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5320
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5322
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5321
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5324
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5325
        .trainerName = _("COLIN"),
#line 5326
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5327
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5329
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5330
        .doubleBattle = FALSE,
#line 5331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5333
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5334
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5337
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5338
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5341
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 5342
        .trainerName = _("ROBERT"),
#line 5343
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5344
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5346
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5347
        .doubleBattle = FALSE,
#line 5348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5350
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5351
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5354
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5355
        .trainerName = _("BENNY"),
#line 5356
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5357
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5359
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5360
        .doubleBattle = FALSE,
#line 5361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5363
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5365
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5364
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5367
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5368
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5371
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5372
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5375
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5376
        .trainerName = _("CHESTER"),
#line 5377
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5378
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5380
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5381
        .doubleBattle = FALSE,
#line 5382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5384
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5385
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5388
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5389
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5392
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5393
        .trainerName = _("ALEX"),
#line 5394
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5395
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5397
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5398
        .doubleBattle = FALSE,
#line 5399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5401
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5403
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5402
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5405
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5407
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5406
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5409
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5410
        .trainerName = _("BECK"),
#line 5411
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5412
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5414
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5415
        .doubleBattle = FALSE,
#line 5416
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5418
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5419
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5422
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5423
        .trainerName = _("YASU"),
#line 5424
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5425
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5427
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5428
        .doubleBattle = FALSE,
#line 5429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5431
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5432
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5435
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5436
        .trainerName = _("TAKASHI"),
#line 5437
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5438
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5440
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5441
        .doubleBattle = FALSE,
#line 5442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5444
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5446
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5445
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5448
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5449
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5452
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5453
        .trainerName = _("DIANNE"),
#line 5454
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5455
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5456
F_TRAINER_FEMALE | 
#line 5457
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5458
        .items = { ITEM_FULL_RESTORE },
#line 5459
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5461
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5462
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5464
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5467
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5468
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5470
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5473
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5474
        .trainerName = _("JANI"),
#line 5475
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5476
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5477
F_TRAINER_FEMALE | 
#line 5478
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5479
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5481
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5482
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5485
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5486
        .trainerName = _("LAO"),
#line 5487
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5488
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5490
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5491
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5493
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5494
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5497
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5498
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5501
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5502
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5505
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5506
        .trainerName = _("LUNG"),
#line 5507
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5508
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5510
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5511
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5513
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5514
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5517
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5518
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5521
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5522
        .trainerName = _("JOCELYN"),
#line 5523
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5524
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5525
F_TRAINER_FEMALE | 
#line 5526
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5527
        .doubleBattle = FALSE,
#line 5528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5530
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5532
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5531
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5534
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5535
        .trainerName = _("LAURA"),
#line 5536
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5537
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5538
F_TRAINER_FEMALE | 
#line 5539
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5540
        .doubleBattle = FALSE,
#line 5541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5543
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5545
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5544
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5547
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5548
        .trainerName = _("CYNDY"),
#line 5549
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5550
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5551
F_TRAINER_FEMALE | 
#line 5552
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5553
        .doubleBattle = FALSE,
#line 5554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5556
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5558
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5557
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5560
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5562
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5561
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5564
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5565
        .trainerName = _("CORA"),
#line 5566
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5567
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5568
F_TRAINER_FEMALE | 
#line 5569
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5570
        .doubleBattle = FALSE,
#line 5571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5573
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5575
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5574
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5577
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5578
        .trainerName = _("PAULA"),
#line 5579
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5580
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5581
F_TRAINER_FEMALE | 
#line 5582
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5583
        .doubleBattle = FALSE,
#line 5584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5586
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5588
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5587
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5590
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5591
        .trainerName = _("MADELINE"),
#line 5592
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5593
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5594
F_TRAINER_FEMALE | 
#line 5595
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5596
        .doubleBattle = FALSE,
#line 5597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5599
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5600
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5603
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5604
        .trainerName = _("CLARISSA"),
#line 5605
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5606
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5607
F_TRAINER_FEMALE | 
#line 5608
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5609
        .doubleBattle = FALSE,
#line 5610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5612
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5613
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5616
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5617
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5620
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5621
        .trainerName = _("ANGELICA"),
#line 5622
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5623
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5624
F_TRAINER_FEMALE | 
#line 5625
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5626
        .doubleBattle = FALSE,
#line 5627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5629
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5631
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5630
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5633
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5634
        .trainerName = _("BEVERLY"),
#line 5635
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5636
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5637
F_TRAINER_FEMALE | 
#line 5638
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5639
        .doubleBattle = FALSE,
#line 5640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5642
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5643
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5646
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5647
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5650
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5651
        .trainerName = _("IMANI"),
#line 5652
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5653
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5654
F_TRAINER_FEMALE | 
#line 5655
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5656
        .doubleBattle = FALSE,
#line 5657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5659
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5660
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5663
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5664
        .trainerName = _("KYLA"),
#line 5665
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5666
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5667
F_TRAINER_FEMALE | 
#line 5668
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5669
        .doubleBattle = FALSE,
#line 5670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5672
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5673
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5676
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5677
        .trainerName = _("DENISE"),
#line 5678
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5679
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5680
F_TRAINER_FEMALE | 
#line 5681
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5682
        .doubleBattle = FALSE,
#line 5683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5685
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5686
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5689
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5690
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5693
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5694
        .trainerName = _("BETH"),
#line 5695
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5696
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5697
F_TRAINER_FEMALE | 
#line 5698
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5699
        .doubleBattle = FALSE,
#line 5700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5702
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5703
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5706
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5707
        .trainerName = _("TARA"),
#line 5708
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5709
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5710
F_TRAINER_FEMALE | 
#line 5711
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5712
        .doubleBattle = FALSE,
#line 5713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5715
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5716
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5719
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5720
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5723
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5724
        .trainerName = _("MISSY"),
#line 5725
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5726
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5727
F_TRAINER_FEMALE | 
#line 5728
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5729
        .doubleBattle = FALSE,
#line 5730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5732
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5733
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5736
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5737
        .trainerName = _("ALICE"),
#line 5738
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5739
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5740
F_TRAINER_FEMALE | 
#line 5741
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5742
        .doubleBattle = FALSE,
#line 5743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5745
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5746
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5749
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5750
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5753
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5754
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5757
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5758
        .trainerName = _("JENNY"),
#line 5759
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5760
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5761
F_TRAINER_FEMALE | 
#line 5762
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5763
        .doubleBattle = FALSE,
#line 5764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5766
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5767
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5770
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5771
        .trainerName = _("GRACE"),
#line 5772
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5773
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5774
F_TRAINER_FEMALE | 
#line 5775
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5776
        .doubleBattle = FALSE,
#line 5777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5779
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5780
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5783
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5784
        .trainerName = _("TANYA"),
#line 5785
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5786
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5787
F_TRAINER_FEMALE | 
#line 5788
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5789
        .doubleBattle = FALSE,
#line 5790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5792
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5796
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5797
        .trainerName = _("SHARON"),
#line 5798
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5799
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5800
F_TRAINER_FEMALE | 
#line 5801
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5802
        .doubleBattle = FALSE,
#line 5803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5805
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5806
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5809
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5810
        .trainerName = _("NIKKI"),
#line 5811
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5812
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5813
F_TRAINER_FEMALE | 
#line 5814
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5815
        .doubleBattle = FALSE,
#line 5816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5818
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5819
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5822
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5823
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5826
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5827
        .trainerName = _("BRENDA"),
#line 5828
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5829
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5830
F_TRAINER_FEMALE | 
#line 5831
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5832
        .doubleBattle = FALSE,
#line 5833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5835
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5836
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5839
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5840
        .trainerName = _("KATIE"),
#line 5841
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5842
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5843
F_TRAINER_FEMALE | 
#line 5844
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5845
        .doubleBattle = FALSE,
#line 5846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5848
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5849
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5852
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5853
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5856
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5857
        .trainerName = _("SUSIE"),
#line 5858
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5859
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5860
F_TRAINER_FEMALE | 
#line 5861
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5862
        .doubleBattle = FALSE,
#line 5863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5865
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5866
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5869
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5870
        .trainerName = _("KARA"),
#line 5871
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5872
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5873
F_TRAINER_FEMALE | 
#line 5874
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5875
        .doubleBattle = FALSE,
#line 5876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5878
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5879
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5882
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5883
        .trainerName = _("DANA"),
#line 5884
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5885
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5886
F_TRAINER_FEMALE | 
#line 5887
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5888
        .doubleBattle = FALSE,
#line 5889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5891
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5892
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5895
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5896
        .trainerName = _("SIENNA"),
#line 5897
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5898
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5899
F_TRAINER_FEMALE | 
#line 5900
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5901
        .doubleBattle = FALSE,
#line 5902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5904
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5905
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5908
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5909
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5912
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5913
        .trainerName = _("DEBRA"),
#line 5914
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5915
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5916
F_TRAINER_FEMALE | 
#line 5917
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5918
        .doubleBattle = FALSE,
#line 5919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5921
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5922
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5925
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5926
        .trainerName = _("LINDA"),
#line 5927
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5928
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5929
F_TRAINER_FEMALE | 
#line 5930
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5931
        .doubleBattle = FALSE,
#line 5932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5934
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5935
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5938
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5939
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5942
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5943
        .trainerName = _("KAYLEE"),
#line 5944
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5945
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5946
F_TRAINER_FEMALE | 
#line 5947
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5948
        .doubleBattle = FALSE,
#line 5949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5951
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5952
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5955
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5956
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5959
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5960
        .trainerName = _("LAUREL"),
#line 5961
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5962
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5963
F_TRAINER_FEMALE | 
#line 5964
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5965
        .doubleBattle = FALSE,
#line 5966
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5968
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5970
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5969
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5972
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5973
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5976
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5977
        .trainerName = _("CARLEE"),
#line 5978
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5979
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5980
F_TRAINER_FEMALE | 
#line 5981
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5982
        .doubleBattle = FALSE,
#line 5983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5985
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5986
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5989
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5990
        .trainerName = _("HEIDI"),
#line 5991
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5992
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5993
F_TRAINER_FEMALE | 
#line 5994
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5995
        .doubleBattle = FALSE,
#line 5996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5998
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5999
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6002
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6003
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6007
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 6008
        .trainerName = _("BECKY"),
#line 6009
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6010
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6011
F_TRAINER_FEMALE | 
#line 6012
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6013
        .doubleBattle = TRUE,
#line 6014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6016
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6016
            .heldItem = ITEM_FOCUS_SASH,
#line 6018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6017
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6019
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 6022
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6022
            .heldItem = ITEM_WIDE_LENS,
#line 6025
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6023
            .ability = ABILITY_MOODY,
#line 6024
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6025
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 6030
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 6031
        .trainerName = _("CAROL"),
#line 6032
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6033
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6034
F_TRAINER_FEMALE | 
#line 6035
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6036
        .doubleBattle = FALSE,
#line 6037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6039
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6040
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6043
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6044
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6047
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 6048
        .trainerName = _("NANCY"),
#line 6049
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6050
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6051
F_TRAINER_FEMALE | 
#line 6052
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6053
        .doubleBattle = FALSE,
#line 6054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6056
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6057
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6060
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6061
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6064
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 6065
        .trainerName = _("MARTHA"),
#line 6066
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6067
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6068
F_TRAINER_FEMALE | 
#line 6069
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6070
        .doubleBattle = FALSE,
#line 6071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6073
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6074
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6077
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6078
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6081
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 6082
        .trainerName = _("DIANA"),
#line 6083
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6084
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6085
F_TRAINER_FEMALE | 
#line 6086
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6087
        .doubleBattle = FALSE,
#line 6088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6090
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6091
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6094
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6095
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6098
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6099
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6102
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 6103
        .trainerName = _("CEDRIC"),
#line 6104
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6105
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6107
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6108
        .doubleBattle = FALSE,
#line 6109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6111
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6112
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6115
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 6116
        .trainerName = _("IRENE"),
#line 6117
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 6118
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 6119
F_TRAINER_FEMALE | 
#line 6120
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 6121
        .doubleBattle = FALSE,
#line 6122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6124
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6125
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6128
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6129
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6132
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 6133
        .trainerName = _("AMY & LIV"),
#line 6134
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6135
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6137
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6138
        .doubleBattle = TRUE,
#line 6139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6141
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6142
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6145
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6146
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6150
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 6151
        .trainerName = _("GINA & MIA"),
#line 6152
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6153
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6155
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6156
        .doubleBattle = TRUE,
#line 6157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6159
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6160
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6163
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6164
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6167
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 6168
        .trainerName = _("MIU & YUKI"),
#line 6169
        .trainerClass = TRAINER_CLASS_TWINS,
#line 6170
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 6172
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6173
        .doubleBattle = TRUE,
#line 6174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6176
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6177
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6180
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6181
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6185
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 6186
        .trainerName = _("HUEY"),
#line 6187
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6188
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6191
        .doubleBattle = FALSE,
#line 6192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6194
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6196
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6195
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6198
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6200
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 6199
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6202
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 6203
        .trainerName = _("EDMOND"),
#line 6204
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6205
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6207
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6208
        .doubleBattle = FALSE,
#line 6209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6211
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6212
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6215
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 6216
        .trainerName = _("ERNEST"),
#line 6217
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6218
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6220
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6221
        .doubleBattle = FALSE,
#line 6222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6224
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6225
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6228
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6229
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6232
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 6233
        .trainerName = _("DWAYNE"),
#line 6234
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6235
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6237
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6238
        .doubleBattle = FALSE,
#line 6239
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6241
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6242
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6245
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6246
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6249
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6250
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6253
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 6254
        .trainerName = _("PHILLIP"),
#line 6255
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6256
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6258
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6259
        .doubleBattle = FALSE,
#line 6260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6262
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6263
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6266
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6267
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6270
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 6271
        .trainerName = _("LEONARD"),
#line 6272
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6273
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6276
        .doubleBattle = FALSE,
#line 6277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6279
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6280
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6283
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6284
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6287
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6288
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6291
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6292
        .trainerName = _("DUNCAN"),
#line 6293
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6294
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6296
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6297
        .doubleBattle = FALSE,
#line 6298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6300
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6301
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6304
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6305
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6308
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6309
        .trainerName = _("ELI"),
#line 6310
        .trainerClass = TRAINER_CLASS_GAMER,
#line 6311
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6313
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6314
        .doubleBattle = FALSE,
#line 6315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6317
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6319
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6318
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6321
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6322
        .trainerName = _("ANNIKA"),
#line 6323
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6324
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6325
F_TRAINER_FEMALE | 
#line 6326
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6327
        .doubleBattle = FALSE,
#line 6328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6330
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .heldItem = ITEM_FOCUS_SASH,
#line 6332
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6331
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6334
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6334
            .heldItem = ITEM_FOCUS_SASH,
#line 6336
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6335
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6338
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6339
        .trainerName = _("JAZMYN"),
#line 6340
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6341
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6342
F_TRAINER_FEMALE | 
#line 6343
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6344
        .items = { ITEM_HYPER_POTION },
#line 6345
        .doubleBattle = FALSE,
#line 6346
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6348
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6349
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6352
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6353
        .trainerName = _("JONAS"),
#line 6354
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6355
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6357
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6358
        .doubleBattle = FALSE,
#line 6359
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6361
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6362
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6365
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6366
        .trainerName = _("KAYLEY"),
#line 6367
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6368
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6369
F_TRAINER_FEMALE | 
#line 6370
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6371
        .doubleBattle = FALSE,
#line 6372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6374
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6375
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6378
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6379
        .trainerName = _("AURON"),
#line 6380
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6381
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6383
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6384
        .doubleBattle = FALSE,
#line 6385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6387
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6388
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6391
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6392
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6395
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6396
        .trainerName = _("KELVIN"),
#line 6397
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6398
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6400
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6401
        .doubleBattle = FALSE,
#line 6402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6404
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6406
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6405
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6408
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6410
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6409
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6412
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6413
        .trainerName = _("MARLEY"),
#line 6414
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6415
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6416
F_TRAINER_FEMALE | 
#line 6417
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6418
        .items = { ITEM_HYPER_POTION },
#line 6419
        .doubleBattle = FALSE,
#line 6420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6422
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6423
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6426
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6427
        .trainerName = _("REYNA"),
#line 6428
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6429
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6430
F_TRAINER_FEMALE | 
#line 6431
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6432
        .doubleBattle = FALSE,
#line 6433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6435
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6437
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6436
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6439
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6441
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6440
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6443
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6444
        .trainerName = _("HUDSON"),
#line 6445
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6446
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6448
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6449
        .doubleBattle = FALSE,
#line 6450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6452
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6453
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6456
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6457
        .trainerName = _("CONOR"),
#line 6458
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6459
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6461
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6462
        .doubleBattle = FALSE,
#line 6463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6465
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6466
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6469
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6471
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6470
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6473
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6474
        .trainerName = _("EDWIN"),
#line 6475
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6476
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6478
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6479
        .doubleBattle = FALSE,
#line 6480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6482
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6483
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6486
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6487
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6490
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6491
        .trainerName = _("HECTOR"),
#line 6492
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6493
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6495
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6496
        .doubleBattle = FALSE,
#line 6497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6499
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6500
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6503
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6504
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6507
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6508
        .trainerName = _("TABITHA"),
#line 6509
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6510
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6512
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6513
        .doubleBattle = FALSE,
#line 6514
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6516
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6516
            .heldItem = ITEM_SITRUS_BERRY,
#line 6519
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6517
            .ability = ABILITY_DROUGHT,
#line 6518
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6520
                MOVE_SHELL_SMASH,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6525
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6525
            .heldItem = ITEM_POISON_BARB,
#line 6528
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6526
            .ability = ABILITY_LEVITATE,
#line 6527
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6529
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6534
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6534
            .heldItem = ITEM_LIFE_ORB,
#line 6537
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6536
            .ability = ABILITY_LEVITATE,
#line 6535
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6538
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_TRICK,
            },
            },
        },
    },
#line 6543
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL_VR] =
    {
#line 6544
        .trainerName = _("SAMUEL"),
#line 6545
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6546
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6548
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6549
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6550
        .doubleBattle = TRUE,
#line 6551
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6553
            .species = SPECIES_SLOWKING,
#line 6553
            .gender = TRAINER_MON_MALE,
#line 6553
            .heldItem = ITEM_LIFE_ORB,
#line 6557
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6554
            .ability = ABILITY_REGENERATOR,
#line 6555
            .lvl = 70,
#line 6556
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6558
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6563
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6563
            .heldItem = ITEM_ROCKY_HELMET,
#line 6567
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6564
            .ability = ABILITY_REGENERATOR,
#line 6565
            .lvl = 70,
#line 6566
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6567
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6572
            .species = SPECIES_GLISCOR,
#line 6572
            .gender = TRAINER_MON_FEMALE,
#line 6572
            .heldItem = ITEM_TOXIC_ORB,
#line 6576
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6573
            .ability = ABILITY_POISON_HEAL,
#line 6574
            .lvl = 70,
#line 6575
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6577
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6582
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6582
            .heldItem = ITEM_ASSAULT_VEST,
#line 6586
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6583
            .ability = ABILITY_CLEAR_BODY,
#line 6584
            .lvl = 70,
#line 6585
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6587
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6592
            .species = SPECIES_HONCHKROW,
#line 6592
            .gender = TRAINER_MON_MALE,
#line 6592
            .heldItem = ITEM_FOCUS_SASH,
#line 6596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6593
            .ability = ABILITY_MOXIE,
#line 6594
            .lvl = 70,
#line 6595
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6596
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 6601
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6602
            .ability = ABILITY_INFILTRATOR,
#line 6603
            .lvl = 70,
#line 6604
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6605
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6610
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103] =
    {
#line 6611
        .trainerName = _("SAMUEL"),
#line 6612
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6613
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6615
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6616
        .doubleBattle = FALSE,
#line 6617
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6619
            .species = SPECIES_SLOWPOKE,
#line 6619
            .gender = TRAINER_MON_MALE,
#line 6623
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6620
            .ability = ABILITY_REGENERATOR,
#line 6621
            .lvl = 5,
#line 6622
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6624
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6628
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6629
        .trainerName = _("SAMUEL"),
#line 6630
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6631
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6633
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6634
        .doubleBattle = FALSE,
#line 6635
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6637
            .species = SPECIES_SLOWPOKE,
#line 6637
            .gender = TRAINER_MON_MALE,
#line 6637
            .heldItem = ITEM_LIFE_ORB,
#line 6641
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6638
            .ability = ABILITY_REGENERATOR,
#line 6639
            .lvl = 49,
#line 6640
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6642
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6647
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6647
            .heldItem = ITEM_ROCKY_HELMET,
#line 6651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6648
            .ability = ABILITY_REGENERATOR,
#line 6649
            .lvl = 49,
#line 6650
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6651
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6656
            .species = SPECIES_GLIGAR,
#line 6656
            .gender = TRAINER_MON_FEMALE,
#line 6656
            .heldItem = ITEM_RAZOR_FANG,
#line 6660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6657
            .ability = ABILITY_HYPER_CUTTER,
#line 6658
            .lvl = 49,
#line 6659
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6661
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6666
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6666
            .heldItem = ITEM_ASSAULT_VEST,
#line 6670
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6667
            .ability = ABILITY_CLEAR_BODY,
#line 6668
            .lvl = 49,
#line 6669
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6670
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6675
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6675
            .heldItem = ITEM_FOCUS_SASH,
#line 6679
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6676
            .ability = ABILITY_PRANKSTER,
#line 6677
            .lvl = 49,
#line 6678
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6679
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6684
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6685
        .trainerName = _("SAMUEL"),
#line 6686
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6687
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6689
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6690
        .doubleBattle = FALSE,
#line 6691
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6693
            .species = SPECIES_SLOWPOKE,
#line 6693
            .gender = TRAINER_MON_MALE,
#line 6693
            .heldItem = ITEM_SITRUS_BERRY,
#line 6697
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6694
            .ability = ABILITY_REGENERATOR,
#line 6695
            .lvl = 24,
#line 6696
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6698
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6703
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6703
            .heldItem = ITEM_LUM_BERRY,
#line 6707
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6704
            .ability = ABILITY_REGENERATOR,
#line 6705
            .lvl = 24,
#line 6706
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6708
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6713
            .species = SPECIES_GLIGAR,
#line 6713
            .gender = TRAINER_MON_FEMALE,
#line 6713
            .heldItem = ITEM_RAZOR_FANG,
#line 6717
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6714
            .ability = ABILITY_HYPER_CUTTER,
#line 6715
            .lvl = 24,
#line 6716
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6718
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6723
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6723
            .heldItem = ITEM_METAL_COAT,
#line 6727
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6724
            .ability = ABILITY_CLEAR_BODY,
#line 6725
            .lvl = 24,
#line 6726
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6727
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_HONE_CLAWS,
            },
            },
        },
    },
#line 6732
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6733
        .trainerName = _("ISAAC"),
#line 6734
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6735
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6737
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6738
        .doubleBattle = FALSE,
#line 6739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6741
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6742
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6745
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6746
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6749
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6750
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6753
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6754
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6757
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6758
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6761
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6762
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6765
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6766
        .trainerName = _("DAVIS"),
#line 6767
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6768
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6771
        .doubleBattle = FALSE,
#line 6772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6774
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6775
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6778
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6779
        .trainerName = _("MITCHELL"),
#line 6780
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6781
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6783
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6784
        .doubleBattle = FALSE,
#line 6785
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6787
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6788
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6791
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6792
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6795
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6796
        .trainerName = _("LYDIA"),
#line 6797
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6798
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6799
F_TRAINER_FEMALE | 
#line 6800
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6801
        .doubleBattle = FALSE,
#line 6802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6804
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6805
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6808
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6809
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6812
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6813
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6816
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6817
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6820
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6821
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6824
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6825
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6828
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6829
        .trainerName = _("HALLE"),
#line 6830
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6831
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6832
F_TRAINER_FEMALE | 
#line 6833
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6834
        .items = { ITEM_FULL_RESTORE },
#line 6835
        .doubleBattle = FALSE,
#line 6836
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6838
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6839
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6842
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6843
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6846
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6847
        .trainerName = _("GARRISON"),
#line 6848
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6849
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6851
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6852
        .doubleBattle = FALSE,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6856
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6859
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6860
        .trainerName = _("JACKSON"),
#line 6861
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6862
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6864
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6865
        .items = { ITEM_FULL_RESTORE },
#line 6866
        .doubleBattle = FALSE,
#line 6867
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6869
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6871
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6870
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6873
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6874
        .trainerName = _("LORENZO"),
#line 6875
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6876
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6878
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6879
        .items = { ITEM_FULL_RESTORE },
#line 6880
        .doubleBattle = FALSE,
#line 6881
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6883
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6885
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6884
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6887
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6889
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6888
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6891
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6893
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6892
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6895
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6896
        .trainerName = _("SEBASTIAN"),
#line 6897
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6898
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6900
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6901
        .items = { ITEM_FULL_RESTORE },
#line 6902
        .doubleBattle = FALSE,
#line 6903
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6905
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6907
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6906
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6909
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6910
        .trainerName = _("CATHERINE"),
#line 6911
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6912
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6913
F_TRAINER_FEMALE | 
#line 6914
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6915
        .items = { ITEM_FULL_RESTORE },
#line 6916
        .doubleBattle = FALSE,
#line 6917
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6919
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6921
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6920
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6923
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6925
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6924
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6927
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6928
        .trainerName = _("JENNA"),
#line 6929
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6930
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6931
F_TRAINER_FEMALE | 
#line 6932
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6933
        .items = { ITEM_FULL_RESTORE },
#line 6934
        .doubleBattle = FALSE,
#line 6935
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6937
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6938
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6941
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6942
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6945
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6947
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6946
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6950
        .trainerName = _("SOPHIA"),
#line 6951
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6952
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6953
F_TRAINER_FEMALE | 
#line 6954
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6955
        .items = { ITEM_FULL_RESTORE },
#line 6956
        .doubleBattle = FALSE,
#line 6957
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6959
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6961
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6960
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6963
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6965
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6964
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6967
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6968
        .trainerName = _("JULIO"),
#line 6969
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6970
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6972
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6973
        .doubleBattle = FALSE,
#line 6974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6976
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6977
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6980
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6981
        .trainerName = _("GRUNT"),
#line 6982
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6983
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6985
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6986
        .doubleBattle = FALSE,
#line 6987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6989
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6991
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6990
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6993
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6995
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6994
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6997
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6998
        .trainerName = _("GRUNT"),
#line 6999
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7000
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7001
F_TRAINER_FEMALE | 
#line 7002
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7003
        .doubleBattle = FALSE,
#line 7004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7006
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7007
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7010
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7011
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7014
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7015
        .trainerName = _("GRUNT"),
#line 7016
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7017
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7019
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7020
        .doubleBattle = FALSE,
#line 7021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7023
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7025
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7024
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7027
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7029
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7028
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7031
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7032
        .trainerName = _("MARC"),
#line 7033
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7034
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7036
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7037
        .doubleBattle = FALSE,
#line 7038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7040
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7042
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7041
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7044
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7046
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7045
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7048
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7049
        .trainerName = _("BRENDEN"),
#line 7050
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7051
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7054
        .doubleBattle = FALSE,
#line 7055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7057
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7058
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7061
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7062
        .trainerName = _("LILITH"),
#line 7063
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7064
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7065
F_TRAINER_FEMALE | 
#line 7066
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7067
        .doubleBattle = FALSE,
#line 7068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7070
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7072
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7071
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7074
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7075
        .trainerName = _("CRISTIAN"),
#line 7076
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7077
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7079
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7080
        .doubleBattle = FALSE,
#line 7081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7083
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7085
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7084
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7087
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7088
        .trainerName = _("SYLVIA"),
#line 7089
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7090
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7091
F_TRAINER_FEMALE | 
#line 7092
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7093
        .doubleBattle = FALSE,
#line 7094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7096
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7098
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7097
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7100
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7101
        .trainerName = _("LEONARDO"),
#line 7102
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7103
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7105
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7106
        .doubleBattle = FALSE,
#line 7107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7109
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7110
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7113
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7114
        .trainerName = _("ATHENA"),
#line 7115
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7116
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7117
F_TRAINER_FEMALE | 
#line 7118
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7119
        .items = { ITEM_HYPER_POTION },
#line 7120
        .doubleBattle = FALSE,
#line 7121
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7123
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7125
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7124
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7127
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7128
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7132
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7133
        .trainerName = _("HARRISON"),
#line 7134
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7135
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7137
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7138
        .doubleBattle = FALSE,
#line 7139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7141
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7142
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7145
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7146
        .trainerName = _("GRUNT"),
#line 7147
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7148
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7150
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7151
        .doubleBattle = FALSE,
#line 7152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7155
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7158
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7159
        .trainerName = _("CLARENCE"),
#line 7160
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7161
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7163
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7164
        .doubleBattle = FALSE,
#line 7165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7167
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7168
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7171
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7172
        .trainerName = _("TERRY"),
#line 7173
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7174
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7175
F_TRAINER_FEMALE | 
#line 7176
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7177
        .doubleBattle = FALSE,
#line 7178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7180
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7181
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7184
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7185
        .trainerName = _("NATE"),
#line 7186
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7187
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7189
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7190
        .doubleBattle = FALSE,
#line 7191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7193
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7195
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7194
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7197
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7198
        .trainerName = _("KATHLEEN"),
#line 7199
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7200
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7201
F_TRAINER_FEMALE | 
#line 7202
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7203
        .doubleBattle = FALSE,
#line 7204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7206
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7207
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7210
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7211
        .trainerName = _("CLIFFORD"),
#line 7212
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7213
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7215
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7216
        .doubleBattle = FALSE,
#line 7217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7219
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7220
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7223
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7224
        .trainerName = _("NICHOLAS"),
#line 7225
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7226
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7228
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7229
        .doubleBattle = FALSE,
#line 7230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7232
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7233
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7236
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7237
        .trainerName = _("GRUNT"),
#line 7238
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7239
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7240
F_TRAINER_FEMALE | 
#line 7241
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7242
        .doubleBattle = FALSE,
#line 7243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7245
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7246
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7249
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7250
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7253
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7254
        .trainerName = _("GRUNT"),
#line 7255
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7256
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7258
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7259
        .doubleBattle = FALSE,
#line 7260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7262
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7263
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7266
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7267
        .trainerName = _("GRUNT"),
#line 7268
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7269
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7271
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7272
        .doubleBattle = FALSE,
#line 7273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7275
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7276
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7279
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7280
        .trainerName = _("GRUNT"),
#line 7281
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7282
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7284
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7285
        .doubleBattle = FALSE,
#line 7286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7288
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7289
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7292
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7293
        .trainerName = _("GRUNT"),
#line 7294
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7295
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7297
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7298
        .doubleBattle = FALSE,
#line 7299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7301
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7302
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7305
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7306
        .trainerName = _("MACEY"),
#line 7307
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7308
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7309
F_TRAINER_FEMALE | 
#line 7310
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7311
        .doubleBattle = FALSE,
#line 7312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7314
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7315
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7318
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7319
        .trainerName = _("SAMUEL"),
#line 7320
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7321
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7323
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7324
        .doubleBattle = FALSE,
#line 7325
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7327
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7327
            .heldItem = ITEM_RAZOR_FANG,
#line 7331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7328
            .ability = ABILITY_HYPER_CUTTER,
#line 7329
            .lvl = 16,
#line 7330
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7331
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7336
            .species = SPECIES_SLOWPOKE,
#line 7336
            .gender = TRAINER_MON_MALE,
#line 7336
            .heldItem = ITEM_SITRUS_BERRY,
#line 7340
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7337
            .ability = ABILITY_REGENERATOR,
#line 7338
            .lvl = 16,
#line 7339
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7340
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7345
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7346
            .ability = ABILITY_REGENERATOR,
#line 7347
            .lvl = 16,
#line 7348
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7349
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 7354
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7354
            .heldItem = ITEM_SITRUS_BERRY,
#line 7358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7355
            .ability = ABILITY_CLEAR_BODY,
#line 7356
            .lvl = 16,
#line 7357
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7358
                MOVE_TACKLE,
                MOVE_METAL_CLAW,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 7362
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7363
        .trainerName = _("PAXTON"),
#line 7364
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7365
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7367
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7368
        .doubleBattle = FALSE,
#line 7369
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7371
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7372
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7375
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7376
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7379
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7380
        .trainerName = _("ISABELLA"),
#line 7381
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7382
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7383
F_TRAINER_FEMALE | 
#line 7384
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7385
        .doubleBattle = FALSE,
#line 7386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7388
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7389
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7392
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7393
        .trainerName = _("GRUNT"),
#line 7394
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7395
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7396
F_TRAINER_FEMALE | 
#line 7397
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7398
        .doubleBattle = FALSE,
#line 7399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7401
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7402
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7405
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7406
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7409
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7410
        .trainerName = _("TABITHA"),
#line 7411
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7412
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7414
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7415
        .doubleBattle = FALSE,
#line 7416
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7418
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7418
            .heldItem = ITEM_SITRUS_BERRY,
#line 7421
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7419
            .ability = ABILITY_DROUGHT,
#line 7420
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7422
                MOVE_RAPID_SPIN,
                MOVE_LAVA_PLUME,
                MOVE_IRON_DEFENSE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 7427
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7427
            .heldItem = ITEM_LUM_BERRY,
#line 7430
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7428
            .ability = ABILITY_LEVITATE,
#line 7429
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7431
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
                MOVE_TOXIC,
            },
            },
            {
#line 7436
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7436
            .heldItem = ITEM_SITRUS_BERRY,
#line 7439
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7437
            .ability = ABILITY_LEVITATE,
#line 7438
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7440
                MOVE_SCORCHING_SANDS,
                MOVE_EXTRASENSORY,
                MOVE_COSMIC_POWER,
                MOVE_IMPRISON,
            },
            },
            {
#line 7445
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7445
            .heldItem = ITEM_LUM_BERRY,
#line 7448
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7446
            .ability = ABILITY_OWN_TEMPO,
#line 7447
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7449
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 7454
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7455
        .trainerName = _("JONATHAN"),
#line 7456
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7457
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7459
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7460
        .items = { ITEM_HYPER_POTION },
#line 7461
        .doubleBattle = FALSE,
#line 7462
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7464
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7465
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7468
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7469
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7473
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7474
        .trainerName = _("MAXIE"),
#line 7475
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7476
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7478
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7479
        .doubleBattle = FALSE,
#line 7480
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7482
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .heldItem = ITEM_IRON_BALL,
#line 7485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7483
            .ability = ABILITY_HEAVY_METAL,
#line 7484
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7485
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_DRAGON_RUSH,
                MOVE_BULK_UP,
            },
            },
            {
#line 7490
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7490
            .heldItem = ITEM_SHARP_BEAK,
#line 7493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7491
            .ability = ABILITY_INNER_FOCUS,
#line 7492
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7493
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7498
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7498
            .heldItem = ITEM_MUSCLE_BAND,
#line 7501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7499
            .ability = ABILITY_IMMUNITY,
#line 7500
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7501
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7506
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7506
            .heldItem = ITEM_EXPERT_BELT,
#line 7509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7507
            .ability = ABILITY_UNNERVE,
#line 7508
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7509
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7514
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7514
            .heldItem = ITEM_ROCKY_HELMET,
#line 7517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7515
            .ability = ABILITY_ROCK_HEAD,
#line 7516
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7517
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7522
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7523
        .trainerName = _("MAXIE"),
#line 7524
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7525
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7527
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7528
        .doubleBattle = FALSE,
#line 7529
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7531
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7531
            .heldItem = ITEM_MUSCLE_BAND,
#line 7534
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7532
            .ability = ABILITY_HEAVY_METAL,
#line 7533
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7535
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7540
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7540
            .heldItem = ITEM_LUM_BERRY,
#line 7543
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7541
            .ability = ABILITY_IMMUNITY,
#line 7542
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7544
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_HONE_CLAWS,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7549
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7549
            .heldItem = ITEM_LUM_BERRY,
#line 7552
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7550
            .ability = ABILITY_UNNERVE,
#line 7551
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7553
                MOVE_FIRE_SPIN,
                MOVE_TORMENT,
                MOVE_SNARL,
                MOVE_HOWL,
            },
            },
            {
#line 7558
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .heldItem = ITEM_ROCKY_HELMET,
#line 7561
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7559
            .ability = ABILITY_ROCK_HEAD,
#line 7560
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7562
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7567
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7567
            .heldItem = ITEM_SHARP_BEAK,
#line 7570
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7568
            .ability = ABILITY_INNER_FOCUS,
#line 7569
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7571
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7576
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7577
        .trainerName = _("TIANA"),
#line 7578
        .trainerClass = TRAINER_CLASS_LASS,
#line 7579
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7580
F_TRAINER_FEMALE | 
#line 7581
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7582
        .doubleBattle = FALSE,
#line 7583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7585
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7586
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7589
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7590
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7593
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7594
        .trainerName = _("HALEY"),
#line 7595
        .trainerClass = TRAINER_CLASS_LASS,
#line 7596
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7597
F_TRAINER_FEMALE | 
#line 7598
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7599
        .doubleBattle = FALSE,
#line 7600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7602
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7603
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7606
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7607
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7610
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7611
        .trainerName = _("JANICE"),
#line 7612
        .trainerClass = TRAINER_CLASS_LASS,
#line 7613
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7614
F_TRAINER_FEMALE | 
#line 7615
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7616
        .doubleBattle = FALSE,
#line 7617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7619
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7620
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7623
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7624
        .trainerName = _("VIVI"),
#line 7625
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7626
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7627
F_TRAINER_FEMALE | 
#line 7628
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7629
        .doubleBattle = FALSE,
#line 7630
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7632
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7634
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7633
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7636
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7638
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7637
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7640
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7642
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7641
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7644
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7645
        .trainerName = _("SALLY"),
#line 7646
        .trainerClass = TRAINER_CLASS_LASS,
#line 7647
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7648
F_TRAINER_FEMALE | 
#line 7649
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7650
        .doubleBattle = FALSE,
#line 7651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7653
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7654
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7657
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7658
        .trainerName = _("ROBIN"),
#line 7659
        .trainerClass = TRAINER_CLASS_LASS,
#line 7660
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7661
F_TRAINER_FEMALE | 
#line 7662
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7663
        .doubleBattle = FALSE,
#line 7664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7666
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7667
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7670
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7671
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7674
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7675
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7679
    [DIFFICULTY_NORMAL][TRAINER_NAMI] =
    {
#line 7680
        .trainerName = _("NAMI"),
#line 7681
        .trainerClass = TRAINER_CLASS_LASS,
#line 7682
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7683
F_TRAINER_FEMALE | 
#line 7684
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7685
        .doubleBattle = FALSE,
#line 7686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7688
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7689
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7692
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7693
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7696
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7697
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7700
    [DIFFICULTY_NORMAL][TRAINER_KIDDO] =
    {
#line 7701
        .trainerName = _("KIDDO"),
#line 7702
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 7703
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 7705
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7706
        .doubleBattle = FALSE,
#line 7707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7709
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7710
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7712
                MOVE_AFTER_YOU,
                MOVE_PLAY_NICE,
            },
            },
            {
#line 7715
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7715
            .heldItem = ITEM_TOXIC_ORB,
#line 7717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7716
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7718
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7721
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7721
            .heldItem = ITEM_FLAME_ORB,
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
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7728
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7730
                MOVE_ENCORE,
                MOVE_AMNESIA,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 7735
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7736
        .trainerName = _("ANDREA"),
#line 7737
        .trainerClass = TRAINER_CLASS_LASS,
#line 7738
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7739
F_TRAINER_FEMALE | 
#line 7740
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7741
        .doubleBattle = FALSE,
#line 7742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7744
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7746
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7745
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7748
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7749
        .trainerName = _("CRISSY"),
#line 7750
        .trainerClass = TRAINER_CLASS_LASS,
#line 7751
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7752
F_TRAINER_FEMALE | 
#line 7753
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7754
        .doubleBattle = FALSE,
#line 7755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7757
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7759
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7758
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7761
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7762
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7765
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7766
        .trainerName = _("RICK"),
#line 7767
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7768
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7770
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7771
        .doubleBattle = FALSE,
#line 7772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7774
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7775
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7778
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7779
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7782
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7783
        .trainerName = _("LYLE"),
#line 7784
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7785
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7787
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7788
        .doubleBattle = FALSE,
#line 7789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7791
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7792
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7795
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7796
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7799
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7800
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7803
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7804
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7807
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7808
        .trainerName = _("JOSIE"),
#line 7809
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7810
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7812
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7813
        .doubleBattle = FALSE,
#line 7814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7816
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7818
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7817
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7820
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7822
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7821
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7824
    [DIFFICULTY_NORMAL][TRAINER_BONNEY] =
    {
#line 7825
        .trainerName = _("BONNEY"),
#line 7826
        .trainerClass = TRAINER_CLASS_LADY,
#line 7827
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 7828
F_TRAINER_FEMALE | 
#line 7829
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7830
        .doubleBattle = TRUE,
#line 7831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7833
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7835
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7834
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7837
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7838
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7841
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7843
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7842
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7845
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7847
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7846
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7849
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7850
        .trainerName = _("DOUG"),
#line 7851
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7852
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7854
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7855
        .doubleBattle = FALSE,
#line 7856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7858
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7859
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7862
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7863
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7866
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7867
        .trainerName = _("GREG"),
#line 7868
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7869
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7871
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7872
        .doubleBattle = FALSE,
#line 7873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7875
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7876
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7879
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7880
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7883
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7884
        .trainerName = _("KENT"),
#line 7885
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7886
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7888
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7889
        .doubleBattle = FALSE,
#line 7890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7892
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7893
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7896
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7897
        .trainerName = _("JAMES"),
#line 7898
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7899
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7901
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7902
        .doubleBattle = FALSE,
#line 7903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7905
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7906
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7909
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7910
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7913
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7914
        .trainerName = _("BRICE"),
#line 7915
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7916
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7918
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7919
        .doubleBattle = FALSE,
#line 7920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7922
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7923
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7926
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7927
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7930
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7931
        .trainerName = _("TRENT"),
#line 7932
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7933
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7935
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7936
        .doubleBattle = FALSE,
#line 7937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7939
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7940
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7943
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7944
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7947
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7948
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7951
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7952
        .trainerName = _("LENNY"),
#line 7953
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7954
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7956
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7957
        .doubleBattle = FALSE,
#line 7958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7960
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7961
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7964
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7965
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7968
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7969
        .trainerName = _("LUCAS"),
#line 7970
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7971
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7973
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7974
        .doubleBattle = FALSE,
#line 7975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7977
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7978
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7981
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7982
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7985
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7986
        .trainerName = _("ALAN"),
#line 7987
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7988
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7990
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7991
        .doubleBattle = FALSE,
#line 7992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7994
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7995
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7998
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7999
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8002
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8003
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8006
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 8007
        .trainerName = _("CLARK"),
#line 8008
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8009
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8011
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8012
        .doubleBattle = FALSE,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8015
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8016
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8019
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 8020
        .trainerName = _("ERIC"),
#line 8021
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8022
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8024
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8025
        .doubleBattle = FALSE,
#line 8026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8028
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8029
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8032
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8033
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8036
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 8037
        .trainerName = _("MIKE"),
#line 8038
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8039
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8041
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8042
        .doubleBattle = FALSE,
#line 8043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8045
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8046
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8049
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8050
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8053
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8054
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8057
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8058
        .trainerName = _("DEZ & LUKE"),
#line 8059
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8060
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8062
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8063
        .doubleBattle = TRUE,
#line 8064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8066
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8067
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8070
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8071
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8074
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8075
        .trainerName = _("LEA & JED"),
#line 8076
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8077
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8079
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8080
        .doubleBattle = TRUE,
#line 8081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8083
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8084
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8087
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8088
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8091
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8092
        .trainerName = _("KIRA & DAN"),
#line 8093
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8094
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8096
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8097
        .doubleBattle = TRUE,
#line 8098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8100
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8101
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8104
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8105
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8108
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8109
        .trainerName = _("JOHANNA"),
#line 8110
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8111
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8112
F_TRAINER_FEMALE | 
#line 8113
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8114
        .doubleBattle = FALSE,
#line 8115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8117
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8118
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8121
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8122
        .trainerName = _("GERALD"),
#line 8123
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8124
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8126
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8127
        .items = { ITEM_HYPER_POTION },
#line 8128
        .doubleBattle = FALSE,
#line 8129
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8131
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8132
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8136
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8137
        .trainerName = _("VIVIAN"),
#line 8138
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8139
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8140
F_TRAINER_FEMALE | 
#line 8141
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8142
        .doubleBattle = FALSE,
#line 8143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8145
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8147
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8146
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8149
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8151
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8150
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8153
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8154
        .trainerName = _("DANIELLE"),
#line 8155
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8156
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8157
F_TRAINER_FEMALE | 
#line 8158
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8159
        .doubleBattle = FALSE,
#line 8160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8162
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8164
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8163
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8166
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8167
        .trainerName = _("HIDEO"),
#line 8168
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8169
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8171
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8172
        .doubleBattle = FALSE,
#line 8173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8175
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8176
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8179
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8180
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8183
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8184
        .trainerName = _("KEIGO"),
#line 8185
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8186
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8188
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8189
        .doubleBattle = FALSE,
#line 8190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8192
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8193
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8196
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8197
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8200
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8201
        .trainerName = _("RILEY"),
#line 8202
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8203
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8205
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8206
        .doubleBattle = FALSE,
#line 8207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8209
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8210
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8213
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8214
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8217
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8218
        .trainerName = _("FLINT"),
#line 8219
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8220
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8222
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8223
        .doubleBattle = FALSE,
#line 8224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8226
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8228
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8227
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8230
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8232
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8231
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8234
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8235
        .trainerName = _("ASHLEY"),
#line 8236
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8237
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8238
F_TRAINER_FEMALE | 
#line 8239
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8240
        .doubleBattle = FALSE,
#line 8241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8243
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8245
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8244
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8247
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8249
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8248
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8251
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8253
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8252
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8255
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8256
        .trainerName = _("CHAD"),
#line 8257
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8258
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8260
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8261
        .doubleBattle = TRUE,
#line 8262
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8264
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8265
            .ability = ABILITY_STURDY,
#line 8266
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8267
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 8270
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8273
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8271
            .ability = ABILITY_SAND_STREAM,
#line 8272
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8273
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 8278
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8279
            .ability = ABILITY_LIGHTNING_ROD,
#line 8280
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8281
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 8285
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8286
            .ability = ABILITY_SAND_VEIL,
#line 8287
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8288
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 8292
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8293
        .trainerName = _("SAMUEL"),
#line 8294
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8295
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8297
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8298
        .doubleBattle = TRUE,
#line 8299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8301
            .species = SPECIES_SLOWKING,
#line 8301
            .gender = TRAINER_MON_MALE,
#line 8301
            .heldItem = ITEM_LIFE_ORB,
#line 8305
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8302
            .ability = ABILITY_REGENERATOR,
#line 8303
            .lvl = 54,
#line 8304
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8306
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8311
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8311
            .heldItem = ITEM_ROCKY_HELMET,
#line 8315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8312
            .ability = ABILITY_REGENERATOR,
#line 8313
            .lvl = 54,
#line 8314
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8315
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8320
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8320
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8324
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8321
            .ability = ABILITY_INFILTRATOR,
#line 8322
            .lvl = 54,
#line 8323
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8324
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8329
            .species = SPECIES_GLISCOR,
#line 8329
            .gender = TRAINER_MON_FEMALE,
#line 8329
            .heldItem = ITEM_TOXIC_ORB,
#line 8333
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8330
            .ability = ABILITY_POISON_HEAL,
#line 8331
            .lvl = 54,
#line 8332
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8334
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8339
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8339
            .heldItem = ITEM_ASSAULT_VEST,
#line 8343
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8340
            .ability = ABILITY_CLEAR_BODY,
#line 8341
            .lvl = 54,
#line 8342
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8344
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8349
            .species = SPECIES_HONCHKROW,
#line 8349
            .gender = TRAINER_MON_MALE,
#line 8349
            .heldItem = ITEM_FOCUS_SASH,
#line 8353
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8350
            .ability = ABILITY_MOXIE,
#line 8351
            .lvl = 54,
#line 8352
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8354
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8359
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8360
        .trainerName = _("JONAH"),
#line 8361
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8362
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8364
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8365
        .doubleBattle = FALSE,
#line 8366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8368
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8369
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8372
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8373
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8376
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8377
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8380
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8381
        .trainerName = _("HENRY"),
#line 8382
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8383
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8385
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8386
        .doubleBattle = FALSE,
#line 8387
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8389
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8390
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8393
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8394
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8397
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8398
        .trainerName = _("ROGER"),
#line 8399
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8400
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8402
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8403
        .doubleBattle = FALSE,
#line 8404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8406
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8407
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8410
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8411
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8414
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8415
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8418
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8419
        .trainerName = _("ALEXA"),
#line 8420
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8421
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8422
F_TRAINER_FEMALE | 
#line 8423
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8424
        .items = { ITEM_FULL_RESTORE },
#line 8425
        .doubleBattle = FALSE,
#line 8426
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8428
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8430
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8429
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8432
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8434
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8433
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8436
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8437
        .trainerName = _("RUBEN"),
#line 8438
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8439
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8441
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8442
        .items = { ITEM_HYPER_POTION },
#line 8443
        .doubleBattle = FALSE,
#line 8444
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8446
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8448
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8447
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8450
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8452
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8451
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8454
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8455
        .trainerName = _("KOJI"),
#line 8456
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8457
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8459
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8460
        .doubleBattle = FALSE,
#line 8461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8463
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8464
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8467
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8468
        .trainerName = _("WAYNE"),
#line 8469
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8470
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8472
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8473
        .doubleBattle = FALSE,
#line 8474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8476
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8477
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8480
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8481
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8484
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8486
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8485
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8488
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8489
        .trainerName = _("AIDAN"),
#line 8490
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8491
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8493
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8494
        .doubleBattle = FALSE,
#line 8495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8497
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8498
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8501
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8502
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8505
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8506
        .trainerName = _("REED"),
#line 8507
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8508
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8510
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8511
        .doubleBattle = FALSE,
#line 8512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8514
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8515
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8518
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8519
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8522
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8523
        .trainerName = _("TISHA"),
#line 8524
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8525
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8526
F_TRAINER_FEMALE | 
#line 8527
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8528
        .doubleBattle = FALSE,
#line 8529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8531
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8532
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8535
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8536
        .trainerName = _("TORI & TIA"),
#line 8537
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8538
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8540
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8541
        .doubleBattle = TRUE,
#line 8542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8544
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8545
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8548
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8549
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8552
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8553
        .trainerName = _("KIM & IRIS"),
#line 8554
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8555
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8557
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8558
        .doubleBattle = TRUE,
#line 8559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8561
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8562
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8565
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8566
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8569
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8570
        .trainerName = _("TYRA & IVY"),
#line 8571
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8572
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8574
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8575
        .doubleBattle = TRUE,
#line 8576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8578
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8579
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8582
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8583
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8587
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8588
        .trainerName = _("MEL & PAUL"),
#line 8589
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8590
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8592
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8593
        .doubleBattle = TRUE,
#line 8594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8596
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8597
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8600
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8601
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8604
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8605
        .trainerName = _("JOHN & JAY"),
#line 8606
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8607
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8609
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8610
        .doubleBattle = TRUE,
#line 8611
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8613
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8615
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8614
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8617
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8619
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8618
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8621
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8622
        .trainerName = _("RELI & IAN"),
#line 8623
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8624
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8626
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8627
        .doubleBattle = TRUE,
#line 8628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8630
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8631
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8634
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8635
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8638
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8639
        .trainerName = _("LILA & ROY"),
#line 8640
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8641
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8643
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8644
        .doubleBattle = TRUE,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8648
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8651
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8652
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8655
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8656
        .trainerName = _("LISA & RAY"),
#line 8657
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8658
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8660
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8661
        .doubleBattle = TRUE,
#line 8662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8664
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8665
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8668
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8669
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8672
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8673
        .trainerName = _("CHRIS"),
#line 8674
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8675
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8677
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8678
        .doubleBattle = FALSE,
#line 8679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8681
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8682
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8685
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8686
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8689
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8690
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8693
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8694
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8697
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8698
        .trainerName = _("DAWSON"),
#line 8699
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8700
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8702
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8703
        .doubleBattle = FALSE,
#line 8704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8706
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8706
            .heldItem = ITEM_NUGGET,
#line 8708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8707
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8710
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8711
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8714
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8715
        .trainerName = _("SARAH"),
#line 8716
        .trainerClass = TRAINER_CLASS_LADY,
#line 8717
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8718
F_TRAINER_FEMALE | 
#line 8719
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8720
        .items = { ITEM_FULL_RESTORE },
#line 8721
        .doubleBattle = FALSE,
#line 8722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8724
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8725
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8728
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8728
            .heldItem = ITEM_NUGGET,
#line 8730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8729
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8732
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8733
        .trainerName = _("DARIAN"),
#line 8734
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8735
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8737
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8738
        .doubleBattle = FALSE,
#line 8739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8741
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8742
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8745
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8746
        .trainerName = _("HAILEY"),
#line 8747
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8748
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8749
F_TRAINER_FEMALE | 
#line 8750
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8751
        .doubleBattle = FALSE,
#line 8752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8754
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8755
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8758
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8759
        .trainerName = _("CHANDLER"),
#line 8760
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8761
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8763
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8764
        .doubleBattle = FALSE,
#line 8765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8767
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8768
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8771
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8772
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8775
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8776
        .trainerName = _("KALEB"),
#line 8777
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8778
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8780
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8781
        .doubleBattle = FALSE,
#line 8782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8784
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .heldItem = ITEM_ORAN_BERRY,
#line 8786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8785
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8788
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8788
            .heldItem = ITEM_ORAN_BERRY,
#line 8790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8789
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8792
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8793
        .trainerName = _("JOSEPH"),
#line 8794
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8795
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8797
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8798
        .doubleBattle = FALSE,
#line 8799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8801
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8802
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8805
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8806
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8809
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8810
        .trainerName = _("ALYSSA"),
#line 8811
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8812
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8813
F_TRAINER_FEMALE | 
#line 8814
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8815
        .doubleBattle = FALSE,
#line 8816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8818
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8819
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8822
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8823
        .trainerName = _("MARCOS"),
#line 8824
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8825
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8827
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8828
        .doubleBattle = FALSE,
#line 8829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8831
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8833
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8832
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8835
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8836
        .trainerName = _("RHETT"),
#line 8837
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8838
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8840
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8841
        .doubleBattle = FALSE,
#line 8842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8844
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8846
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8845
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8848
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8849
        .trainerName = _("TYRON"),
#line 8850
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8851
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8853
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8854
        .doubleBattle = FALSE,
#line 8855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8857
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8858
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8861
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8862
        .trainerName = _("CELINA"),
#line 8863
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8864
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8865
F_TRAINER_FEMALE | 
#line 8866
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8867
        .doubleBattle = FALSE,
#line 8868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8870
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8871
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8874
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8875
        .trainerName = _("BIANCA"),
#line 8876
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8877
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8878
F_TRAINER_FEMALE | 
#line 8879
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8880
        .doubleBattle = FALSE,
#line 8881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8883
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8884
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8887
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8888
        .trainerName = _("HAYDEN"),
#line 8889
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8890
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8892
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8893
        .doubleBattle = FALSE,
#line 8894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8896
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8897
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8900
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8901
        .trainerName = _("SOPHIE"),
#line 8902
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8903
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8904
F_TRAINER_FEMALE | 
#line 8905
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8906
        .doubleBattle = FALSE,
#line 8907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8909
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8910
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8913
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8914
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8917
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8918
        .trainerName = _("COBY"),
#line 8919
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8920
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8922
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8923
        .doubleBattle = FALSE,
#line 8924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8926
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8927
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8930
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8931
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8934
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8935
        .trainerName = _("LAWRENCE"),
#line 8936
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8937
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8939
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8940
        .doubleBattle = FALSE,
#line 8941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8943
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8944
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8947
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8948
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8951
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8952
        .trainerName = _("WYATT"),
#line 8953
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8954
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8956
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8957
        .doubleBattle = FALSE,
#line 8958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8960
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8961
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8964
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8965
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8968
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8969
        .trainerName = _("ANGELINA"),
#line 8970
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8971
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8972
F_TRAINER_FEMALE | 
#line 8973
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8974
        .doubleBattle = FALSE,
#line 8975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8977
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8978
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8981
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8982
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8985
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8986
        .trainerName = _("KAI"),
#line 8987
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8988
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8990
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8991
        .doubleBattle = FALSE,
#line 8992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8994
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8995
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8998
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 8999
        .trainerName = _("CHARLOTTE"),
#line 9000
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9001
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9002
F_TRAINER_FEMALE | 
#line 9003
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9004
        .doubleBattle = FALSE,
#line 9005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9007
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9008
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9011
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9012
        .trainerName = _("DEANDRE"),
#line 9013
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9014
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9016
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9017
        .doubleBattle = FALSE,
#line 9018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9020
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9021
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9024
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9025
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9028
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9029
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9032
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9033
        .trainerName = _("GRUNT"),
#line 9034
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9035
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9037
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9038
        .doubleBattle = FALSE,
#line 9039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9041
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9042
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9045
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9046
        .trainerName = _("GRUNT"),
#line 9047
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9048
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9050
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9051
        .doubleBattle = FALSE,
#line 9052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9054
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9055
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9058
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9059
        .trainerName = _("GRUNT"),
#line 9060
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9061
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9063
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9064
        .doubleBattle = FALSE,
#line 9065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9067
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9068
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9071
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9072
        .trainerName = _("GRUNT"),
#line 9073
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9074
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9076
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9077
        .doubleBattle = FALSE,
#line 9078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9080
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9081
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9084
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9085
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9088
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9089
        .trainerName = _("GRUNT"),
#line 9090
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9091
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9093
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9094
        .doubleBattle = FALSE,
#line 9095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9097
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9098
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9101
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9102
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9105
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9106
        .trainerName = _("GRUNT"),
#line 9107
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9108
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9110
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9111
        .doubleBattle = FALSE,
#line 9112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9114
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9115
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9118
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9119
        .trainerName = _("GRUNT"),
#line 9120
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9121
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9123
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9124
        .doubleBattle = FALSE,
#line 9125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9127
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9128
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9131
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9132
        .trainerName = _("GRUNT"),
#line 9133
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9134
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9136
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9137
        .doubleBattle = FALSE,
#line 9138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9140
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9141
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9144
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9145
        .trainerName = _("GRUNT"),
#line 9146
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9147
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9149
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9150
        .doubleBattle = FALSE,
#line 9151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9153
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9154
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9157
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9158
        .trainerName = _("GRUNT"),
#line 9159
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9160
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9162
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9163
        .doubleBattle = FALSE,
#line 9164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9166
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9167
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9170
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9171
        .trainerName = _("GRUNT"),
#line 9172
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9173
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9175
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9176
        .doubleBattle = FALSE,
#line 9177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9179
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9180
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9183
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9184
        .trainerName = _("GRUNT"),
#line 9185
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9186
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9188
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9189
        .doubleBattle = FALSE,
#line 9190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9192
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9193
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9196
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9197
        .trainerName = _("GRUNT"),
#line 9198
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9199
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9201
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9202
        .doubleBattle = FALSE,
#line 9203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9205
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9206
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9209
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9210
        .trainerName = _("GRUNT"),
#line 9211
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9212
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9213
F_TRAINER_FEMALE | 
#line 9214
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9215
        .doubleBattle = FALSE,
#line 9216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9218
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9219
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9222
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9223
        .trainerName = _("GRUNT"),
#line 9224
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9225
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9226
F_TRAINER_FEMALE | 
#line 9227
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9228
        .doubleBattle = FALSE,
#line 9229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9231
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9232
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9235
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9236
        .trainerName = _("GRUNT"),
#line 9237
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9238
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9239
F_TRAINER_FEMALE | 
#line 9240
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9241
        .doubleBattle = FALSE,
#line 9242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9244
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9245
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9248
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9249
        .trainerName = _("TABITHA"),
#line 9250
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9251
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9253
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9254
        .doubleBattle = FALSE,
#line 9255
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9257
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9257
            .heldItem = ITEM_SITRUS_BERRY,
#line 9260
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9258
            .ability = ABILITY_DROUGHT,
#line 9259
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9261
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9266
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9266
            .heldItem = ITEM_POISON_BARB,
#line 9269
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9267
            .ability = ABILITY_LEVITATE,
#line 9268
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9270
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9275
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9275
            .heldItem = ITEM_LIFE_ORB,
#line 9278
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9276
            .ability = ABILITY_LEVITATE,
#line 9277
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9279
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9284
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .heldItem = ITEM_FOCUS_SASH,
#line 9287
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9285
            .ability = ABILITY_OWN_TEMPO,
#line 9286
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9288
                MOVE_EARTHQUAKE,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_FISSURE,
            },
            },
        },
    },
#line 9293
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9294
        .trainerName = _("DARCY"),
#line 9295
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9296
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9297
F_TRAINER_FEMALE | 
#line 9298
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9299
        .items = { ITEM_HYPER_POTION },
#line 9300
        .doubleBattle = FALSE,
#line 9301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9303
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9304
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9307
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9308
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9311
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9312
        .trainerName = _("MAXIE"),
#line 9313
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9314
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9316
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9317
        .doubleBattle = FALSE,
#line 9318
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9320
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9320
            .heldItem = ITEM_ROCKY_HELMET,
#line 9323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9321
            .ability = ABILITY_ROCK_HEAD,
#line 9322
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9323
                MOVE_EARTHQUAKE,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 9328
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9328
            .heldItem = ITEM_AIR_BALLOON,
#line 9331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9329
            .ability = ABILITY_HEAVY_METAL,
#line 9330
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9331
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9336
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9336
            .heldItem = ITEM_SHARP_BEAK,
#line 9339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9337
            .ability = ABILITY_INNER_FOCUS,
#line 9338
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9339
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9344
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9345
        .trainerName = _("PETE"),
#line 9346
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9347
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9349
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9350
        .doubleBattle = FALSE,
#line 9351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9353
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9354
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9357
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9358
        .trainerName = _("ISABELLE"),
#line 9359
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9360
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9361
F_TRAINER_FEMALE | 
#line 9362
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9363
        .doubleBattle = FALSE,
#line 9364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9366
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9367
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9371
        .trainerName = _("ANDRES"),
#line 9372
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9373
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9375
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9376
        .doubleBattle = FALSE,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9380
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9383
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9385
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9384
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9387
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9388
        .trainerName = _("JOSUE"),
#line 9389
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9390
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9392
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9393
        .doubleBattle = FALSE,
#line 9394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9396
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9398
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9397
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9400
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9402
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9401
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9404
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9405
        .trainerName = _("CAMRON"),
#line 9406
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9407
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9409
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9410
        .doubleBattle = FALSE,
#line 9411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9413
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9414
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9417
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9418
        .trainerName = _("CORY"),
#line 9419
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9420
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9422
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9423
        .doubleBattle = FALSE,
#line 9424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9426
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9427
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9430
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9431
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9434
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9435
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9438
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9439
        .trainerName = _("CAROLINA"),
#line 9440
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9441
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9442
F_TRAINER_FEMALE | 
#line 9443
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9444
        .items = { ITEM_HYPER_POTION },
#line 9445
        .doubleBattle = FALSE,
#line 9446
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9448
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9450
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9449
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9452
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9454
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9453
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9456
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9458
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9457
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9460
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9461
        .trainerName = _("ELIJAH"),
#line 9462
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9463
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9465
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9466
        .doubleBattle = FALSE,
#line 9467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9469
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9470
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9473
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9474
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9477
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9478
        .trainerName = _("CELIA"),
#line 9479
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9480
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9481
F_TRAINER_FEMALE | 
#line 9482
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9483
        .doubleBattle = FALSE,
#line 9484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9486
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9487
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9490
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9491
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9494
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9495
        .trainerName = _("BRYAN"),
#line 9496
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9497
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9499
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9500
        .doubleBattle = FALSE,
#line 9501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9503
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9504
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9507
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9508
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9511
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9512
        .trainerName = _("BRANDEN"),
#line 9513
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9514
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9516
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9517
        .doubleBattle = FALSE,
#line 9518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9520
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9521
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9524
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9525
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9528
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9529
        .trainerName = _("BRYANT"),
#line 9530
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9531
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9533
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9534
        .doubleBattle = FALSE,
#line 9535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9537
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9538
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9541
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9542
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9545
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9546
        .trainerName = _("SHAYLA"),
#line 9547
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9548
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9549
F_TRAINER_FEMALE | 
#line 9550
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9551
        .doubleBattle = FALSE,
#line 9552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9554
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9555
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9558
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9559
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9562
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9563
        .trainerName = _("KYRA"),
#line 9564
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9565
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9566
F_TRAINER_FEMALE | 
#line 9567
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9568
        .doubleBattle = FALSE,
#line 9569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9571
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9572
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9575
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9576
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9579
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9580
        .trainerName = _("JAIDEN"),
#line 9581
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9582
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9584
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9585
        .doubleBattle = FALSE,
#line 9586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9588
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9589
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9592
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9593
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9596
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9597
        .trainerName = _("ALIX"),
#line 9598
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9599
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9600
F_TRAINER_FEMALE | 
#line 9601
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9602
        .doubleBattle = FALSE,
#line 9603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9605
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9606
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9609
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9610
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9613
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9614
        .trainerName = _("HELENE"),
#line 9615
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9616
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9617
F_TRAINER_FEMALE | 
#line 9618
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9619
        .doubleBattle = FALSE,
#line 9620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9622
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9623
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9626
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9627
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9630
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9631
        .trainerName = _("MARLENE"),
#line 9632
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9633
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9634
F_TRAINER_FEMALE | 
#line 9635
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9636
        .doubleBattle = FALSE,
#line 9637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9639
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9640
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9643
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9644
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9647
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9648
        .trainerName = _("DEVAN"),
#line 9649
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9650
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9652
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9653
        .doubleBattle = FALSE,
#line 9654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9656
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9657
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9660
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9661
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9664
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9665
        .trainerName = _("JOHNSON"),
#line 9666
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9667
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9670
        .doubleBattle = FALSE,
#line 9671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9673
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9674
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9677
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9678
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9681
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9682
        .trainerName = _("MELINA"),
#line 9683
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9684
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9685
F_TRAINER_FEMALE | 
#line 9686
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9687
        .doubleBattle = FALSE,
#line 9688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9690
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9691
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9694
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9695
        .trainerName = _("MELISSA"),
#line 9696
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9697
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9698
F_TRAINER_FEMALE | 
#line 9699
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9700
        .doubleBattle = FALSE,
#line 9701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9703
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9704
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9707
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9708
        .trainerName = _("BRANDI"),
#line 9709
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9710
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9711
F_TRAINER_FEMALE | 
#line 9712
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9713
        .doubleBattle = FALSE,
#line 9714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9716
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9717
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9720
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9721
        .trainerName = _("AISHA"),
#line 9722
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9723
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9724
F_TRAINER_FEMALE | 
#line 9725
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9726
        .doubleBattle = FALSE,
#line 9727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9729
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9730
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9733
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9734
        .trainerName = _("MAKAYLA"),
#line 9735
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9736
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9737
F_TRAINER_FEMALE | 
#line 9738
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9739
        .items = { ITEM_HYPER_POTION },
#line 9740
        .doubleBattle = FALSE,
#line 9741
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9743
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9744
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9747
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9748
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9751
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9752
        .trainerName = _("FABIAN"),
#line 9753
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9754
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9756
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9757
        .doubleBattle = FALSE,
#line 9758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9760
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9761
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9764
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9765
        .trainerName = _("DAYTON"),
#line 9766
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9767
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9769
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9770
        .doubleBattle = FALSE,
#line 9771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9773
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9774
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9777
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9778
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9781
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9782
        .trainerName = _("RACHEL"),
#line 9783
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9784
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9785
F_TRAINER_FEMALE | 
#line 9786
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9787
        .doubleBattle = FALSE,
#line 9788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9790
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9791
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9794
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9795
        .trainerName = _("LEONEL"),
#line 9796
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9797
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9799
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9800
        .items = { ITEM_HYPER_POTION },
#line 9801
        .doubleBattle = FALSE,
#line 9802
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9804
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9806
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9805
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9808
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9809
        .trainerName = _("CALLIE"),
#line 9810
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9811
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9812
F_TRAINER_FEMALE | 
#line 9813
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9814
        .doubleBattle = FALSE,
#line 9815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9817
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9818
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9821
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9822
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9825
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9826
        .trainerName = _("CALE"),
#line 9827
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9828
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9830
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9831
        .doubleBattle = FALSE,
#line 9832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9834
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9835
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9838
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9839
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9842
    [DIFFICULTY_NORMAL][TRAINER_SONDHEIM] =
    {
#line 9843
        .trainerName = _("SONDHEIM"),
#line 9844
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9845
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9847
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9848
        .doubleBattle = FALSE,
#line 9849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9851
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9852
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9855
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9856
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9859
    [DIFFICULTY_NORMAL][TRAINER_ASHER] =
    {
#line 9860
        .trainerName = _("ASHER"),
#line 9861
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9862
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9864
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9865
        .doubleBattle = FALSE,
#line 9866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9868
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9869
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9872
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9873
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9877
    [DIFFICULTY_NORMAL][TRAINER_BRIDGETTE] =
    {
#line 9878
        .trainerName = _("BRIDGETTE"),
#line 9879
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9880
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9881
F_TRAINER_FEMALE | 
#line 9882
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9883
        .doubleBattle = FALSE,
#line 9884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9886
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9887
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9890
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9891
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9894
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9895
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9898
    [DIFFICULTY_NORMAL][TRAINER_FLAVIA] =
    {
#line 9899
        .trainerName = _("FLAVIA"),
#line 9900
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9901
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9902
F_TRAINER_FEMALE | 
#line 9903
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9904
        .doubleBattle = FALSE,
#line 9905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9907
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9908
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9911
    [DIFFICULTY_NORMAL][TRAINER_OLIVE] =
    {
#line 9912
        .trainerName = _("OLIVE"),
#line 9913
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9914
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9915
F_TRAINER_FEMALE | 
#line 9916
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9917
        .doubleBattle = FALSE,
#line 9918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9920
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9921
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9924
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9925
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9928
    [DIFFICULTY_NORMAL][TRAINER_VIOLA] =
    {
#line 9929
        .trainerName = _("VIOLA"),
#line 9930
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9931
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9932
F_TRAINER_FEMALE | 
#line 9933
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9934
        .doubleBattle = FALSE,
#line 9935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9937
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9938
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9941
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9942
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9946
    [DIFFICULTY_NORMAL][TRAINER_REIJU] =
    {
#line 9947
        .trainerName = _("VIOLA"),
#line 9948
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9949
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9950
F_TRAINER_FEMALE | 
#line 9951
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9952
        .doubleBattle = FALSE,
#line 9953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9955
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9956
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9959
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9960
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9963
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9964
        .trainerName = _("MYLES"),
#line 9965
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9966
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9968
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9969
        .doubleBattle = FALSE,
#line 9970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9972
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9974
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9973
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9976
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9978
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9977
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9980
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9982
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9981
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9984
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9985
        .trainerName = _("PAT"),
#line 9986
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9987
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9988
F_TRAINER_FEMALE | 
#line 9989
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9990
        .doubleBattle = FALSE,
#line 9991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9993
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9995
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9994
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9997
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9999
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9998
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10001
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10003
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10002
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10006
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10007
        .trainerName = _("CRISTIN"),
#line 10008
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10009
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10010
F_TRAINER_FEMALE | 
#line 10011
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10012
        .items = { ITEM_HYPER_POTION },
#line 10013
        .doubleBattle = FALSE,
#line 10014
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10016
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10018
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10017
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10020
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10022
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10021
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10024
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10025
        .trainerName = _("GRUNT"),
#line 10026
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10027
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10029
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10030
        .doubleBattle = FALSE,
#line 10031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10033
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .heldItem = ITEM_EVIOLITE,
#line 10035
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10034
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10036
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10037
        .trainerName = _("GRUNT"),
#line 10038
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10039
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10041
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10042
        .doubleBattle = FALSE,
#line 10043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10045
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10047
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10046
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10048
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10049
        .trainerName = _("GRUNT"),
#line 10050
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10051
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10053
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10054
        .doubleBattle = FALSE,
#line 10055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10057
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10059
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10058
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10060
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10061
        .trainerName = _("GRUNT"),
#line 10062
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10063
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10065
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10066
        .doubleBattle = FALSE,
#line 10067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10069
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10070
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10072
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10073
        .trainerName = _("GRUNT"),
#line 10074
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10075
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10077
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10078
        .doubleBattle = FALSE,
#line 10079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10081
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10082
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10084
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10085
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10087
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_1] =
    {
#line 10088
        .trainerName = _("GRUNT"),
#line 10089
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10090
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10092
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10093
        .doubleBattle = FALSE,
#line 10094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10096
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10098
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10097
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10100
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_2] =
    {
#line 10101
        .trainerName = _("GRUNT"),
#line 10102
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10103
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10105
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10106
        .doubleBattle = FALSE,
#line 10107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10109
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10110
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10112
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_3] =
    {
#line 10113
        .trainerName = _("GRUNT"),
#line 10114
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10115
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10117
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10118
        .doubleBattle = FALSE,
#line 10119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10121
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10123
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10122
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10124
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_4] =
    {
#line 10125
        .trainerName = _("GRUNT"),
#line 10126
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10127
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10129
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10130
        .doubleBattle = FALSE,
#line 10131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10133
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10134
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10136
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10137
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10139
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_5] =
    {
#line 10140
        .trainerName = _("GRUNT"),
#line 10141
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10142
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10144
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10145
        .doubleBattle = FALSE,
#line 10146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10148
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10149
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10151
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_6] =
    {
#line 10152
        .trainerName = _("GRUNT"),
#line 10153
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10154
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10156
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10157
        .doubleBattle = FALSE,
#line 10158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10160
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10161
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10163
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10164
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10166
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_7] =
    {
#line 10167
        .trainerName = _("GRUNT"),
#line 10168
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10169
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10171
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10172
        .doubleBattle = FALSE,
#line 10173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10175
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10176
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10178
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10179
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10181
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10182
        .trainerName = _("ANGELO"),
#line 10183
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10184
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10186
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10187
        .doubleBattle = FALSE,
#line 10188
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10190
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10192
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10191
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10194
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10195
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10198
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10199
        .trainerName = _("DARIUS"),
#line 10200
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10201
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10203
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10204
        .doubleBattle = FALSE,
#line 10205
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10207
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10208
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10211
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10212
        .trainerName = _("STEVEN"),
#line 10213
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10214
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10217
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10218
        .doubleBattle = FALSE,
#line 10219
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10221
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10222
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10224
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10229
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10230
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10232
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10237
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10238
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10240
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10245
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10246
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10248
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10253
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10255
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10254
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10256
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10261
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10261
            .heldItem = ITEM_SITRUS_BERRY,
#line 10263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10262
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10264
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10269
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS] =
    {
#line 10270
        .trainerName = _("GHOSTESS"),
#line 10271
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10272
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10273
F_TRAINER_FEMALE | 
#line 10274
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10275
        .doubleBattle = FALSE,
#line 10276
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10278
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10278
            .heldItem = ITEM_TWISTED_SPOON,
#line 10281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10279
            .ability = ABILITY_THICK_FAT,
#line 10280
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10281
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10286
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10287
            .ability = ABILITY_WONDER_SKIN,
#line 10288
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10289
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_PAYBACK,
            },
            },
            {
#line 10294
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .heldItem = ITEM_METRONOME,
#line 10297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10295
            .ability = ABILITY_ROCK_HEAD,
#line 10296
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10297
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ZEN_HEADBUTT,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10302
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10302
            .heldItem = ITEM_ASSAULT_VEST,
#line 10305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10303
            .ability = ABILITY_CURSED_BODY,
#line 10304
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10305
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10310
    [DIFFICULTY_NORMAL][TRAINER_JORDAN] =
    {
#line 10311
        .trainerName = _("JORDAN"),
#line 10312
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10313
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10315
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10316
        .doubleBattle = FALSE,
#line 10317
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10319
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10322
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10320
            .ability = ABILITY_CHLOROPHYLL,
#line 10321
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10322
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10327
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10327
            .heldItem = ITEM_EVIOLITE,
#line 10330
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10328
            .ability = ABILITY_PRESSURE,
#line 10329
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10330
                MOVE_ZEN_HEADBUTT,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10335
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10335
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10336
            .ability = ABILITY_LIQUID_OOZE,
#line 10337
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10338
                MOVE_GUNK_SHOT,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10343
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10343
            .heldItem = ITEM_QUICK_CLAW,
#line 10346
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10344
            .ability = ABILITY_OBLIVIOUS,
#line 10345
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10346
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10351
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10351
            .heldItem = ITEM_SHARP_BEAK,
#line 10354
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10352
            .ability = ABILITY_INNER_FOCUS,
#line 10353
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10354
                MOVE_AERIAL_ACE,
                MOVE_CROSS_POISON,
                MOVE_KNOCK_OFF,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10359
    [DIFFICULTY_NORMAL][TRAINER_JORDAN2] =
    {
#line 10360
        .trainerName = _("JORDAN"),
#line 10361
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10362
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10364
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10365
        .doubleBattle = FALSE,
#line 10366
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10368
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10368
            .heldItem = ITEM_WIDE_LENS,
#line 10371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10369
            .ability = ABILITY_CHLOROPHYLL,
#line 10370
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10371
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10376
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10376
            .heldItem = ITEM_LIFE_ORB,
#line 10379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10377
            .ability = ABILITY_PRESSURE,
#line 10378
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10379
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10384
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10384
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10385
            .ability = ABILITY_LIQUID_OOZE,
#line 10386
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10387
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10392
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10392
            .heldItem = ITEM_CHOICE_SPECS,
#line 10395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10393
            .ability = ABILITY_OBLIVIOUS,
#line 10394
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10395
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 10400
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10400
            .heldItem = ITEM_SHARP_BEAK,
#line 10403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10401
            .ability = ABILITY_INNER_FOCUS,
#line 10402
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10403
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10408
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10408
            .heldItem = ITEM_ASSAULT_VEST,
#line 10411
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10409
            .ability = ABILITY_AIR_LOCK,
#line 10410
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10411
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10416
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS2] =
    {
#line 10417
        .trainerName = _("GHOSTESS"),
#line 10418
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10419
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10420
F_TRAINER_FEMALE | 
#line 10421
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10422
        .doubleBattle = FALSE,
#line 10423
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10425
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10425
            .heldItem = ITEM_EXPERT_BELT,
#line 10428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10426
            .ability = ABILITY_THICK_FAT,
#line 10427
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10428
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10433
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10433
            .heldItem = ITEM_MUSCLE_BAND,
#line 10436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10434
            .ability = ABILITY_WONDER_SKIN,
#line 10435
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10436
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10441
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10441
            .heldItem = ITEM_WIDE_LENS,
#line 10444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10442
            .ability = ABILITY_INTIMIDATE,
#line 10443
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10444
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10449
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .heldItem = ITEM_ASSAULT_VEST,
#line 10452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10450
            .ability = ABILITY_CURSED_BODY,
#line 10451
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10452
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10457
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_8] =
    {
#line 10458
        .trainerName = _("GRUNT"),
#line 10459
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10460
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10462
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10463
        .doubleBattle = FALSE,
#line 10464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10466
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10467
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10469
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_9] =
    {
#line 10470
        .trainerName = _("GRUNT"),
#line 10471
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10472
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10474
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10475
        .doubleBattle = FALSE,
#line 10476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10478
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10480
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10479
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10481
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_10] =
    {
#line 10482
        .trainerName = _("GRUNT"),
#line 10483
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10484
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10486
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10487
        .doubleBattle = FALSE,
#line 10488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10490
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10491
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10493
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_11] =
    {
#line 10494
        .trainerName = _("GRUNT"),
#line 10495
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10496
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10498
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10499
        .doubleBattle = FALSE,
#line 10500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10502
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10503
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10506
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10507
        .trainerName = _("MARIELA"),
#line 10508
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10509
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10510
F_TRAINER_FEMALE | 
#line 10511
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10512
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10514
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10515
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10518
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10519
        .trainerName = _("ALVARO"),
#line 10520
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10521
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10523
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10524
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10526
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10527
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10530
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10531
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10534
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10535
        .trainerName = _("EVERETT"),
#line 10536
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10537
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10539
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10540
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10542
            .species = SPECIES_WOBBUFFET,
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
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10547
        .trainerName = _("RED"),
#line 10548
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10549
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10551
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10552
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10554
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10555
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10558
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10559
        .trainerName = _("LEAF"),
#line 10560
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10561
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10562
F_TRAINER_FEMALE | 
#line 10563
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10564
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10566
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10567
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10570
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10571
        .trainerName = _("SAMUEL"),
#line 10572
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10573
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10575
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10576
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10578
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10579
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10582
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10583
        .trainerName = _("MAY"),
#line 10584
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10585
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10586
F_TRAINER_FEMALE | 
#line 10587
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10588
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10590
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10591
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
