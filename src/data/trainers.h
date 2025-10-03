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
                MOVE_LEAF_BLADE,
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
    [DIFFICULTY_NORMAL][TRAINER_DRAKE2] =
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
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3250
            .heldItem = ITEM_ASSAULT_VEST,
#line 3254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3251
            .ability = ABILITY_SAND_STREAM,
#line 3252
            .lvl = 80,
#line 3253
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3254
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3259
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3259
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3260
            .ability = ABILITY_INTIMIDATE,
#line 3261
            .lvl = 80,
#line 3262
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3263
                MOVE_DRAGON_RUSH,
                MOVE_PSYCHIC_FANGS,
                MOVE_EARTHQUAKE,
                MOVE_DRAGON_ASCENT,
            },
            },
            {
#line 3268
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3268
            .heldItem = ITEM_LIFE_ORB,
#line 3272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3269
            .ability = ABILITY_OBLIVIOUS,
#line 3270
            .lvl = 80,
#line 3271
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3272
                MOVE_EARTHQUAKE,
                MOVE_ICE_SPINNER,
                MOVE_KNOCK_OFF,
                MOVE_BULK_UP,
            },
            },
            {
#line 3277
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3277
            .heldItem = ITEM_CHOICE_SPECS,
#line 3281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3278
            .ability = ABILITY_LEVITATE,
#line 3279
            .lvl = 80,
#line 3280
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3281
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3286
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3286
            .heldItem = ITEM_ROCKY_HELMET,
#line 3290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3287
            .ability = ABILITY_STURDY,
#line 3288
            .lvl = 80,
#line 3289
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3290
                MOVE_ICE_PUNCH,
                MOVE_STONE_EDGE,
                MOVE_HEAVY_SLAM,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3295
            .species = SPECIES_HEATRAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3295
            .heldItem = ITEM_LEFTOVERS,
#line 3299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3296
            .ability = ABILITY_FLAME_BODY,
#line 3297
            .lvl = 80,
#line 3298
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3299
                MOVE_OVERHEAT,
                MOVE_STEEL_BEAM,
                MOVE_DARK_PULSE,
                MOVE_SCORCHING_SANDS,
            },
            },
        },
    },
#line 3304
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
    {
#line 3305
        .trainerName = _("ALEC"),
#line 3306
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3307
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3309
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3310
        .doubleBattle = FALSE,
#line 3311
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3313
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3317
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3314
            .ability = ABILITY_STURDY,
#line 3315
            .lvl = 16,
#line 3316
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3318
                MOVE_STEALTH_ROCK,
                MOVE_MIMIC,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3323
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3324
            .ability = ABILITY_LEVITATE,
#line 3325
            .lvl = 16,
#line 3326
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3328
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3333
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3333
            .heldItem = ITEM_SALAC_BERRY,
#line 3337
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3334
            .ability = ABILITY_SUCTION_CUPS,
#line 3335
            .lvl = 16,
#line 3336
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3338
                MOVE_ANCIENT_POWER,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
                MOVE_BULLET_SEED,
            },
            },
            {
#line 3343
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3343
            .heldItem = ITEM_SALAC_BERRY,
#line 3347
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3344
            .ability = ABILITY_UNNERVE,
#line 3345
            .lvl = 16,
#line 3346
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3348
                MOVE_ANCIENT_POWER,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3353
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3354
        .trainerName = _("GARRETT"),
#line 3355
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3356
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3358
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3359
        .doubleBattle = FALSE,
#line 3360
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3362
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3366
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3363
            .ability = ABILITY_MARVEL_SCALE,
#line 3364
            .lvl = 22,
#line 3365
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3367
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3372
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3376
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3373
            .ability = ABILITY_TORRENT,
#line 3374
            .lvl = 22,
#line 3375
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3377
                MOVE_FLIP_TURN,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3382
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .heldItem = ITEM_SCOPE_LENS,
#line 3386
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3383
            .ability = ABILITY_SKILL_LINK,
#line 3384
            .lvl = 22,
#line 3385
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3387
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3392
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3392
            .heldItem = ITEM_WIDE_LENS,
#line 3396
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3393
            .ability = ABILITY_TORRENT,
#line 3394
            .lvl = 22,
#line 3395
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3397
                MOVE_BULLDOZE,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3402
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3403
        .trainerName = _("SAM"),
#line 3404
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3405
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3407
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3408
        .doubleBattle = FALSE,
#line 3409
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3411
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3411
            .heldItem = ITEM_METAL_COAT,
#line 3415
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3412
            .ability = ABILITY_MAGNET_PULL,
#line 3413
            .lvl = 32,
#line 3414
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3416
                MOVE_MAGNET_RISE,
                MOVE_SPARK,
                MOVE_FLASH_CANNON,
                MOVE_TRI_ATTACK,
            },
            },
            {
#line 3421
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3421
            .heldItem = ITEM_SILK_SCARF,
#line 3425
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3422
            .ability = ABILITY_DOWNLOAD,
#line 3423
            .lvl = 32,
#line 3424
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3426
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3431
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3431
            .heldItem = ITEM_SITRUS_BERRY,
#line 3435
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3432
            .ability = ABILITY_VITAL_SPIRIT,
#line 3434
            .lvl = 32,
#line 3433
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3436
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_KICK,
                MOVE_METAL_SOUND,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3441
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3441
            .heldItem = ITEM_SITRUS_BERRY,
#line 3445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3442
            .ability = ABILITY_INTIMIDATE,
#line 3444
            .lvl = 32,
#line 3443
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3445
                MOVE_BITE,
                MOVE_DOUBLE_KICK,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3450
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3450
            .heldItem = ITEM_MAGNET,
#line 3454
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3451
            .ability = ABILITY_STATIC,
#line 3452
            .lvl = 32,
#line 3453
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3455
                MOVE_ELECTRIC_TERRAIN,
                MOVE_PAYBACK,
                MOVE_MUD_BOMB,
                MOVE_ELECTROWEB,
            },
            },
        },
    },
#line 3460
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3461
        .trainerName = _("JOSE"),
#line 3462
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3463
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3465
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3466
        .doubleBattle = FALSE,
#line 3467
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3469
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3469
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3473
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3470
            .ability = ABILITY_NATURAL_CURE,
#line 3471
            .lvl = 38,
#line 3472
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3474
                MOVE_COTTON_GUARD,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_ALLURING_VOICE,
            },
            },
            {
#line 3479
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3479
            .heldItem = ITEM_CHARCOAL,
#line 3483
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3480
            .ability = ABILITY_BLAZE,
#line 3481
            .lvl = 38,
#line 3482
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3484
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3489
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3489
            .heldItem = ITEM_ASSAULT_VEST,
#line 3493
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3490
            .ability = ABILITY_LEVITATE,
#line 3491
            .lvl = 38,
#line 3492
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3494
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3499
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3499
            .heldItem = ITEM_ROCKY_HELMET,
#line 3503
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3500
            .ability = ABILITY_MARVEL_SCALE,
#line 3501
            .lvl = 38,
#line 3502
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3504
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_SLAM,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3509
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .heldItem = ITEM_DRAGON_FANG,
#line 3513
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3510
            .ability = ABILITY_SNIPER,
#line 3511
            .lvl = 38,
#line 3512
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3514
                MOVE_SCALE_SHOT,
                MOVE_OCTAZOOKA,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
            {
#line 3519
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3519
            .heldItem = ITEM_LIFE_ORB,
#line 3523
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3520
            .ability = ABILITY_ROUGH_SKIN,
#line 3521
            .lvl = 38,
#line 3522
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3524
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3529
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3530
        .trainerName = _("GRAYSON"),
#line 3531
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3532
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3534
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3535
        .doubleBattle = FALSE,
#line 3536
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3538
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3538
            .heldItem = ITEM_MUSCLE_BAND,
#line 3542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3539
            .ability = ABILITY_IRON_FIST,
#line 3540
            .lvl = 43,
#line 3541
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3542
                MOVE_BULK_UP,
                MOVE_ROCK_SLIDE,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3547
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3547
            .heldItem = ITEM_BLACK_BELT,
#line 3551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3548
            .ability = ABILITY_GUTS,
#line 3549
            .lvl = 43,
#line 3550
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3551
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3556
            .species = SPECIES_LOPUNNY,
#line 3556
            .gender = TRAINER_MON_FEMALE,
#line 3556
            .heldItem = ITEM_ROCKY_HELMET,
#line 3560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3557
            .ability = ABILITY_CUTE_CHARM,
#line 3558
            .lvl = 43,
#line 3559
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3560
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3565
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .heldItem = ITEM_FOCUS_BAND,
#line 3569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3566
            .ability = ABILITY_MOXIE,
#line 3567
            .lvl = 43,
#line 3568
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3569
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3574
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3574
            .heldItem = ITEM_EXPERT_BELT,
#line 3578
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3575
            .ability = ABILITY_INNER_FOCUS,
#line 3576
            .lvl = 43,
#line 3577
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3578
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_METAL_SOUND,
            },
            },
            {
#line 3583
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .heldItem = ITEM_FOCUS_BAND,
#line 3587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3584
            .ability = ABILITY_POISON_TOUCH,
#line 3585
            .lvl = 43,
#line 3586
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3592
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3593
        .trainerName = _("MATTHEW"),
#line 3594
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3595
        .trainerPic = TRAINER_PIC_LEADER_JUAN,
        .encounterMusic_gender =
#line 3597
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3598
        .doubleBattle = FALSE,
#line 3599
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3601
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3601
            .heldItem = ITEM_AIR_BALLOON,
#line 3605
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3602
            .ability = ABILITY_STURDY,
#line 3603
            .lvl = 51,
#line 3604
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3605
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3610
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3610
            .heldItem = ITEM_MUSCLE_BAND,
#line 3614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3611
            .ability = ABILITY_STURDY,
#line 3612
            .lvl = 51,
#line 3613
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3614
                MOVE_ROOST,
                MOVE_DRILL_PECK,
                MOVE_IRON_HEAD,
                MOVE_DRILL_RUN,
            },
            },
            {
#line 3619
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3619
            .heldItem = ITEM_ASSAULT_VEST,
#line 3623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3620
            .ability = ABILITY_CLEAR_BODY,
#line 3621
            .lvl = 51,
#line 3622
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3623
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3628
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3628
            .heldItem = ITEM_CHOICE_SPECS,
#line 3632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3629
            .ability = ABILITY_COMPETITIVE,
#line 3630
            .lvl = 51,
#line 3631
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3632
                MOVE_SCALD,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3637
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .heldItem = ITEM_CHOICE_BAND,
#line 3641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3638
            .ability = ABILITY_TECHNICIAN,
#line 3639
            .lvl = 51,
#line 3640
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3641
                MOVE_BULLET_PUNCH,
                MOVE_MEGAHORN,
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
            },
            },
            {
#line 3646
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3646
            .heldItem = ITEM_ROCKY_HELMET,
#line 3650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3647
            .ability = ABILITY_IRON_BARBS,
#line 3648
            .lvl = 51,
#line 3649
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3650
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3655
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3656
        .trainerName = _("MARK"),
#line 3657
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3658
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3660
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3661
        .doubleBattle = FALSE,
#line 3662
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3664
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3664
            .heldItem = ITEM_ROCKY_HELMET,
#line 3668
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3665
            .ability = ABILITY_FLASH_FIRE,
#line 3666
            .lvl = 61,
#line 3667
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3668
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_MOONBLAST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3673
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3673
            .heldItem = ITEM_CHOICE_SPECS,
#line 3677
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3674
            .ability = ABILITY_PIXILATE,
#line 3675
            .lvl = 61,
#line 3676
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3677
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_MOONBLAST,
            },
            },
            {
#line 3682
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3682
            .heldItem = ITEM_CHOICE_BAND,
#line 3686
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3683
            .ability = ABILITY_HUGE_POWER,
#line 3684
            .lvl = 61,
#line 3685
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3686
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_SUPERPOWER,
            },
            },
            {
#line 3691
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3691
            .heldItem = ITEM_ASSAULT_VEST,
#line 3695
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3692
            .ability = ABILITY_SERENE_GRACE,
#line 3693
            .lvl = 61,
#line 3694
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3695
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3700
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3700
            .heldItem = ITEM_LEFTOVERS,
#line 3704
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3701
            .ability = ABILITY_SERENE_GRACE,
#line 3702
            .lvl = 61,
#line 3703
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3704
                MOVE_MOONBLAST,
                MOVE_ANCIENT_POWER,
                MOVE_FIERY_DANCE,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3709
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .heldItem = ITEM_OCCA_BERRY,
#line 3713
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3710
            .ability = ABILITY_INTIMIDATE,
#line 3711
            .lvl = 61,
#line 3712
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3713
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3718
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 3719
        .trainerName = _("XANDER"),
#line 3720
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3721
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3723
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3724
        .doubleBattle = TRUE,
#line 3725
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3727
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3727
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3731
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3728
            .ability = ABILITY_CURSED_BODY,
#line 3729
            .lvl = 67,
#line 3730
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3731
                MOVE_ASTRAL_BARRAGE,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3736
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3736
            .heldItem = ITEM_SITRUS_BERRY,
#line 3740
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3737
            .ability = ABILITY_MUMMY,
#line 3738
            .lvl = 67,
#line 3739
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3740
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_SHADOW_BALL,
                MOVE_PROTECT,
            },
            },
            {
#line 3745
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3745
            .heldItem = ITEM_CHOICE_SPECS,
#line 3749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3746
            .ability = ABILITY_FLASH_FIRE,
#line 3747
            .lvl = 67,
#line 3748
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3749
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3754
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3754
            .heldItem = ITEM_SITRUS_BERRY,
#line 3758
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3755
            .ability = ABILITY_LEVITATE,
#line 3756
            .lvl = 67,
#line 3757
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3758
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3763
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3763
            .heldItem = ITEM_CHOICE_BAND,
#line 3767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3764
            .ability = ABILITY_NO_GUARD,
#line 3765
            .lvl = 67,
#line 3766
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3767
                MOVE_EARTHQUAKE,
                MOVE_RAGE_FIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3772
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3772
            .heldItem = ITEM_LEFTOVERS,
#line 3776
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3773
            .ability = ABILITY_PRESSURE,
#line 3774
            .lvl = 67,
#line 3775
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3776
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 3781
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3782
        .trainerName = _("JERRY"),
#line 3783
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3784
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3786
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3787
        .doubleBattle = FALSE,
#line 3788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3790
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3792
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3791
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3794
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3795
        .trainerName = _("TED"),
#line 3796
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3797
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3799
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3800
        .doubleBattle = FALSE,
#line 3801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3803
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3804
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3807
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3808
        .trainerName = _("PAUL"),
#line 3809
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3810
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3812
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3813
        .doubleBattle = FALSE,
#line 3814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3816
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3818
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3817
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3820
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3822
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3821
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3824
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3826
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3825
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3828
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3829
        .trainerName = _("KAREN"),
#line 3830
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3831
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3832
F_TRAINER_FEMALE | 
#line 3833
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3834
        .doubleBattle = FALSE,
#line 3835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3837
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3839
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3838
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3841
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3842
        .trainerName = _("GEORGIA"),
#line 3843
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3844
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3845
F_TRAINER_FEMALE | 
#line 3846
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3847
        .doubleBattle = FALSE,
#line 3848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3850
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3851
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3854
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3856
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3855
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3858
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3859
        .trainerName = _("KATE & JOY"),
#line 3860
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3861
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3863
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3864
        .doubleBattle = TRUE,
#line 3865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3867
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3868
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3871
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3872
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3876
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3877
        .trainerName = _("ANNA & MEG"),
#line 3878
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3879
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3881
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3882
        .doubleBattle = TRUE,
#line 3883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3885
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3886
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3889
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3890
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3893
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3894
        .trainerName = _("VICTOR"),
#line 3895
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3896
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3898
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3899
        .doubleBattle = FALSE,
#line 3900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3902
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3902
            .heldItem = ITEM_ORAN_BERRY,
#line 3904
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3903
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3906
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .heldItem = ITEM_ORAN_BERRY,
#line 3908
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3907
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3910
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3911
        .trainerName = _("MIGUEL"),
#line 3912
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3913
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3915
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3916
        .doubleBattle = FALSE,
#line 3917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3919
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3919
            .heldItem = ITEM_ORAN_BERRY,
#line 3921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3920
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3923
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3924
        .trainerName = _("COLTON"),
#line 3925
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3926
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3928
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3929
        .doubleBattle = FALSE,
#line 3930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3932
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3932
            .heldItem = ITEM_ORAN_BERRY,
#line 3934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3933
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3935
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3940
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .heldItem = ITEM_ORAN_BERRY,
#line 3942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3941
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3943
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3948
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3948
            .heldItem = ITEM_ORAN_BERRY,
#line 3950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3949
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3951
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3956
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3956
            .heldItem = ITEM_ORAN_BERRY,
#line 3958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3957
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3959
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3964
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3964
            .heldItem = ITEM_ORAN_BERRY,
#line 3966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3965
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3967
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3972
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .heldItem = ITEM_ORAN_BERRY,
#line 3974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3973
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3975
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3980
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3981
        .trainerName = _("VICTORIA"),
#line 3982
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3983
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3984
F_TRAINER_FEMALE | 
#line 3985
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3986
        .doubleBattle = FALSE,
#line 3987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3989
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3989
            .heldItem = ITEM_ORAN_BERRY,
#line 3991
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3990
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3993
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3994
        .trainerName = _("VANESSA"),
#line 3995
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3996
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3997
F_TRAINER_FEMALE | 
#line 3998
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3999
        .doubleBattle = FALSE,
#line 4000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4002
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .heldItem = ITEM_ORAN_BERRY,
#line 4004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4003
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4006
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 4007
        .trainerName = _("BETHANY"),
#line 4008
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4009
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4010
F_TRAINER_FEMALE | 
#line 4011
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4012
        .doubleBattle = FALSE,
#line 4013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4015
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .heldItem = ITEM_ORAN_BERRY,
#line 4017
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4016
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4019
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4019
            .heldItem = ITEM_ORAN_BERRY,
#line 4021
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4020
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4023
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4023
            .heldItem = ITEM_ORAN_BERRY,
#line 4025
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4024
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4027
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 4028
        .trainerName = _("ISABEL"),
#line 4029
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 4030
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 4031
F_TRAINER_FEMALE | 
#line 4032
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 4033
        .doubleBattle = FALSE,
#line 4034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4036
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4036
            .heldItem = ITEM_ORAN_BERRY,
#line 4038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4037
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4040
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4040
            .heldItem = ITEM_ORAN_BERRY,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4044
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 4045
        .trainerName = _("TIMOTHY"),
#line 4046
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4047
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 4049
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4050
        .doubleBattle = FALSE,
#line 4051
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4053
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4054
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4057
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 4058
        .trainerName = _("VICKY"),
#line 4059
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 4060
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4061
F_TRAINER_FEMALE | 
#line 4062
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4063
        .doubleBattle = FALSE,
#line 4064
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4066
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4068
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4067
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4070
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 4071
        .trainerName = _("SHELBY"),
#line 4072
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4073
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4074
F_TRAINER_FEMALE | 
#line 4075
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4076
        .doubleBattle = FALSE,
#line 4077
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4079
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4081
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4080
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4083
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4085
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4084
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4087
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4088
        .trainerName = _("CALVIN"),
#line 4089
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4090
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4092
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4093
        .doubleBattle = FALSE,
#line 4094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4096
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4097
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4100
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4101
        .trainerName = _("BILLY"),
#line 4102
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4103
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4105
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4106
        .doubleBattle = FALSE,
#line 4107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4109
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4110
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4113
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4114
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4117
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4118
        .trainerName = _("JOSH"),
#line 4119
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4120
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4122
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4123
        .doubleBattle = FALSE,
#line 4124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4126
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4128
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4127
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4129
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4131
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4132
        .trainerName = _("TOMMY"),
#line 4133
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4134
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4136
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4137
        .doubleBattle = FALSE,
#line 4138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4140
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4141
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4144
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4146
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4145
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4148
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4149
        .trainerName = _("JOEY"),
#line 4150
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4151
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4154
        .doubleBattle = FALSE,
#line 4155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4157
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4158
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4161
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4162
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4165
    [DIFFICULTY_NORMAL][TRAINER_GLASSES] =
    {
#line 4166
        .trainerName = _("GLASSES"),
#line 4167
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4168
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4171
        .doubleBattle = FALSE,
#line 4172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4174
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4175
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4178
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4179
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4182
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4183
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4186
    [DIFFICULTY_NORMAL][TRAINER_PERKEO] =
    {
#line 4187
        .trainerName = _("PERKEO"),
#line 4188
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4189
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4191
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4192
        .doubleBattle = FALSE,
#line 4193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4195
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4196
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4199
            .species = SPECIES_RAMPARDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4200
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4203
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4204
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4207
    [DIFFICULTY_NORMAL][TRAINER_DANNY] =
    {
#line 4208
        .trainerName = _("DANNY"),
#line 4209
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4210
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4212
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4213
        .doubleBattle = FALSE,
#line 4214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4216
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4217
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4220
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4221
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4224
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4225
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4228
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4229
        .trainerName = _("BEN"),
#line 4230
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4231
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4233
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4234
        .doubleBattle = FALSE,
#line 4235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4237
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4238
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4242
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4243
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4247
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4248
        .trainerName = _("QUINCY"),
#line 4249
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4250
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4252
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4253
        .items = { ITEM_FULL_RESTORE },
#line 4254
        .doubleBattle = FALSE,
#line 4255
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4257
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4258
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4261
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4263
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4262
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4265
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4266
        .trainerName = _("KATELYNN"),
#line 4267
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4268
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4269
F_TRAINER_FEMALE | 
#line 4270
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4271
        .items = { ITEM_FULL_RESTORE },
#line 4272
        .doubleBattle = FALSE,
#line 4273
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4277
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4276
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4278
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4283
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4285
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4284
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4286
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4291
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4292
        .trainerName = _("JAYLEN"),
#line 4293
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4294
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4296
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4297
        .doubleBattle = FALSE,
#line 4298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4300
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4304
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4305
        .trainerName = _("DILLON"),
#line 4306
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4307
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4309
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4310
        .doubleBattle = FALSE,
#line 4311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4313
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4314
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4317
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4318
        .trainerName = _("EDDIE"),
#line 4319
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4320
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4322
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4323
        .doubleBattle = FALSE,
#line 4324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4326
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4327
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4330
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4331
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4334
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4335
        .trainerName = _("ALLEN"),
#line 4336
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4337
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4339
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4340
        .doubleBattle = FALSE,
#line 4341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4343
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4344
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4347
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4348
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4351
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4352
        .trainerName = _("TIMMY"),
#line 4353
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4354
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4356
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4357
        .doubleBattle = FALSE,
#line 4358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4360
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4361
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4364
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4365
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4368
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4369
        .trainerName = _("FATTY"),
#line 4370
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4371
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4373
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4374
        .doubleBattle = FALSE,
#line 4375
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4376
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4378
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .heldItem = ITEM_LIFE_ORB,
#line 4382
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4379
            .ability = ABILITY_THICK_FAT,
#line 4380
            .lvl = 77,
#line 4381
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4383
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4388
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4388
            .heldItem = ITEM_CHOICE_BAND,
#line 4392
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4389
            .ability = ABILITY_INTIMIDATE,
#line 4390
            .lvl = 77,
#line 4391
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4393
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4398
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .heldItem = ITEM_LEFTOVERS,
#line 4402
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4399
            .ability = ABILITY_CHLOROPHYLL,
#line 4400
            .lvl = 77,
#line 4401
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4403
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4408
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .heldItem = ITEM_FOCUS_SASH,
#line 4412
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4409
            .ability = ABILITY_MAGIC_GUARD,
#line 4410
            .lvl = 77,
#line 4411
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4413
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4418
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4418
            .heldItem = ITEM_WIDE_LENS,
#line 4422
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4419
            .ability = ABILITY_STATIC,
#line 4420
            .lvl = 77,
#line 4421
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4423
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4428
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4428
            .heldItem = ITEM_EVIOLITE,
#line 4432
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4429
            .ability = ABILITY_SWIFT_SWIM,
#line 4430
            .lvl = 77,
#line 4431
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4433
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4438
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4439
        .trainerName = _("ANDREW"),
#line 4440
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4441
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4443
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4444
        .doubleBattle = FALSE,
#line 4445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4447
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4448
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4451
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4452
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4455
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4456
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4459
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4460
        .trainerName = _("IVAN"),
#line 4461
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4462
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4464
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4465
        .doubleBattle = FALSE,
#line 4466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4468
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4469
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4472
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4473
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4476
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4477
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4480
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4481
        .trainerName = _("CLAUDE"),
#line 4482
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4483
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4485
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4486
        .doubleBattle = FALSE,
#line 4487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4489
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4490
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4493
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4494
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4497
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4498
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4501
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4502
        .trainerName = _("ELLIOT"),
#line 4503
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4504
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4506
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4507
        .doubleBattle = FALSE,
#line 4508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4510
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4511
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4514
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4515
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4518
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4519
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4522
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4523
        .trainerName = _("NED"),
#line 4524
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4525
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4527
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4528
        .doubleBattle = FALSE,
#line 4529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4531
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4533
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4532
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4535
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4536
        .trainerName = _("DALE"),
#line 4537
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4538
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4540
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4541
        .doubleBattle = FALSE,
#line 4542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4544
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4545
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4548
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4549
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4552
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4553
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4556
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4557
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4560
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4561
        .trainerName = _("NOLAN"),
#line 4562
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4563
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4565
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4566
        .doubleBattle = FALSE,
#line 4567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4569
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4570
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4573
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4574
        .trainerName = _("BARNY"),
#line 4575
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4576
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4578
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4579
        .doubleBattle = FALSE,
#line 4580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4582
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4583
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4586
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4587
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4590
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4591
        .trainerName = _("WADE"),
#line 4592
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4593
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4595
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4596
        .doubleBattle = FALSE,
#line 4597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4599
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4600
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4602
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4603
        .trainerName = _("ABIGAL"),
#line 4604
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4605
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4606
F_TRAINER_FEMALE | 
#line 4607
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4608
        .doubleBattle = FALSE,
#line 4609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4611
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4612
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4614
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4615
        .trainerName = _("CARTER"),
#line 4616
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4617
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4619
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4620
        .doubleBattle = FALSE,
#line 4621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4623
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4625
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4624
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4627
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4629
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4628
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4631
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4632
        .trainerName = _("RONALD"),
#line 4633
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4634
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4636
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4637
        .doubleBattle = FALSE,
#line 4638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4640
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4641
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4645
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4646
        .trainerName = _("JACOB"),
#line 4647
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4648
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4650
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4651
        .doubleBattle = FALSE,
#line 4652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4654
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4656
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4655
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4658
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4660
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4659
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4662
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4664
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4663
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4666
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4667
        .trainerName = _("ANTHONY"),
#line 4668
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4669
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4671
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4672
        .doubleBattle = FALSE,
#line 4673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4675
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4676
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4679
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4680
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4683
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4684
        .trainerName = _("BENJAMIN"),
#line 4685
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4686
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4688
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4689
        .doubleBattle = FALSE,
#line 4690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4692
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4693
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4696
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4697
        .trainerName = _("JASMINE"),
#line 4698
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4699
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4700
F_TRAINER_FEMALE | 
#line 4701
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4702
        .doubleBattle = FALSE,
#line 4703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4705
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4707
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4706
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4709
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4711
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4710
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4713
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4714
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4717
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4718
        .trainerName = _("DYLAN"),
#line 4719
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4720
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4722
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4723
        .doubleBattle = FALSE,
#line 4724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4726
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4727
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4730
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4731
        .trainerName = _("MARIA"),
#line 4732
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4733
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4734
F_TRAINER_FEMALE | 
#line 4735
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4736
        .doubleBattle = FALSE,
#line 4737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4739
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4740
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4743
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4744
        .trainerName = _("CAMDEN"),
#line 4745
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4746
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4748
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4749
        .doubleBattle = FALSE,
#line 4750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4752
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4753
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4756
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4757
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4760
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4761
        .trainerName = _("DEMETRIUS"),
#line 4762
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4763
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4765
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4766
        .doubleBattle = FALSE,
#line 4767
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4769
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4770
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4773
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4774
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4777
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4778
        .trainerName = _("ISAIAH"),
#line 4779
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4780
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4782
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4783
        .doubleBattle = FALSE,
#line 4784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4786
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4787
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4790
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4791
        .trainerName = _("PABLO"),
#line 4792
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4793
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4795
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4796
        .doubleBattle = FALSE,
#line 4797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4799
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4800
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4803
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4804
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4807
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4808
        .trainerName = _("CHASE"),
#line 4809
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4810
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4812
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4813
        .doubleBattle = FALSE,
#line 4814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4816
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4817
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4820
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4821
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4824
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4825
        .trainerName = _("ISOBEL"),
#line 4826
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4827
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4828
F_TRAINER_FEMALE | 
#line 4829
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4830
        .doubleBattle = FALSE,
#line 4831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4833
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4834
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4837
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4838
        .trainerName = _("DONNY"),
#line 4839
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4840
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4841
F_TRAINER_FEMALE | 
#line 4842
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4843
        .doubleBattle = FALSE,
#line 4844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4846
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4847
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4850
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4852
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4851
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4854
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4855
        .trainerName = _("TALIA"),
#line 4856
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4857
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4858
F_TRAINER_FEMALE | 
#line 4859
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4860
        .doubleBattle = FALSE,
#line 4861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4863
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4864
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4867
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4868
        .trainerName = _("KATELYN"),
#line 4869
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4870
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4871
F_TRAINER_FEMALE | 
#line 4872
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4873
        .doubleBattle = FALSE,
#line 4874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4876
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4877
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4880
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4881
        .trainerName = _("ALLISON"),
#line 4882
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4883
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4884
F_TRAINER_FEMALE | 
#line 4885
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4886
        .doubleBattle = FALSE,
#line 4887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4889
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4890
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4893
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4895
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4894
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4897
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4898
        .trainerName = _("NICOLAS"),
#line 4899
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4900
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4902
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4903
        .doubleBattle = FALSE,
#line 4904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4906
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4908
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4907
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4910
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4912
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4911
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4914
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4915
        .trainerName = _("AARON"),
#line 4916
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4917
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4919
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4920
        .doubleBattle = FALSE,
#line 4921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4923
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4925
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4924
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4927
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4928
        .trainerName = _("PERRY"),
#line 4929
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4930
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4932
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4933
        .doubleBattle = FALSE,
#line 4934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4936
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4937
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4940
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4941
        .trainerName = _("HUGH"),
#line 4942
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4943
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4945
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4946
        .doubleBattle = FALSE,
#line 4947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4949
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4950
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4953
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4954
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4957
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4958
        .trainerName = _("PHIL"),
#line 4959
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4960
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4962
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4963
        .doubleBattle = FALSE,
#line 4964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4966
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4967
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4970
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4971
        .trainerName = _("JARED"),
#line 4972
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4973
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4975
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4976
        .doubleBattle = FALSE,
#line 4977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4979
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4981
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4980
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4983
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4985
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4984
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4987
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4989
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4988
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4991
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4992
        .trainerName = _("HUMBERTO"),
#line 4993
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4994
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4996
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4997
        .doubleBattle = FALSE,
#line 4998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5000
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5002
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 5001
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5004
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 5005
        .trainerName = _("PRESLEY"),
#line 5006
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5007
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5009
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5010
        .doubleBattle = FALSE,
#line 5011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5013
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5014
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5017
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5018
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5021
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 5022
        .trainerName = _("EDWARDO"),
#line 5023
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5024
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5026
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5027
        .doubleBattle = FALSE,
#line 5028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5030
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5031
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5034
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5036
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5035
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5038
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 5039
        .trainerName = _("COLIN"),
#line 5040
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5041
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5043
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5044
        .doubleBattle = FALSE,
#line 5045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5047
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5048
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5051
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5052
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5055
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 5056
        .trainerName = _("ROBERT"),
#line 5057
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5058
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5060
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5061
        .doubleBattle = FALSE,
#line 5062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5064
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5065
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5068
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 5069
        .trainerName = _("BENNY"),
#line 5070
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5071
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5073
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5074
        .doubleBattle = FALSE,
#line 5075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5077
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5078
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5081
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5082
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5085
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5086
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5089
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 5090
        .trainerName = _("CHESTER"),
#line 5091
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5092
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5094
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5095
        .doubleBattle = FALSE,
#line 5096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5098
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5099
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5102
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5103
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5106
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 5107
        .trainerName = _("ALEX"),
#line 5108
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5109
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5111
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5112
        .doubleBattle = FALSE,
#line 5113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5115
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5117
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5116
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5119
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5121
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5120
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5123
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 5124
        .trainerName = _("BECK"),
#line 5125
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 5126
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5128
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5129
        .doubleBattle = FALSE,
#line 5130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5132
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5133
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5136
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5137
        .trainerName = _("YASU"),
#line 5138
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5139
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5141
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5142
        .doubleBattle = FALSE,
#line 5143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5145
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5146
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5149
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5150
        .trainerName = _("TAKASHI"),
#line 5151
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5152
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5154
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5155
        .doubleBattle = FALSE,
#line 5156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5158
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5159
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5162
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5163
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5166
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5167
        .trainerName = _("DIANNE"),
#line 5168
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5169
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5170
F_TRAINER_FEMALE | 
#line 5171
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5172
        .items = { ITEM_FULL_RESTORE },
#line 5173
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5175
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5176
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5178
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5181
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5182
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5184
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5187
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5188
        .trainerName = _("JANI"),
#line 5189
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5190
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5191
F_TRAINER_FEMALE | 
#line 5192
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5193
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5195
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5196
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5199
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5200
        .trainerName = _("LAO"),
#line 5201
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5202
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5204
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5205
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5207
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5208
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5211
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5212
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5215
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5216
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5219
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5220
        .trainerName = _("LUNG"),
#line 5221
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5222
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5224
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5225
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5227
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5228
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5231
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5232
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5235
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5236
        .trainerName = _("JOCELYN"),
#line 5237
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5238
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5239
F_TRAINER_FEMALE | 
#line 5240
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5241
        .doubleBattle = FALSE,
#line 5242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5244
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5246
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5245
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5248
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5249
        .trainerName = _("LAURA"),
#line 5250
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5251
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5252
F_TRAINER_FEMALE | 
#line 5253
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5254
        .doubleBattle = FALSE,
#line 5255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5257
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5259
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5258
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5261
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5262
        .trainerName = _("CYNDY"),
#line 5263
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5264
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5265
F_TRAINER_FEMALE | 
#line 5266
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5267
        .doubleBattle = FALSE,
#line 5268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5270
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5271
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5274
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5276
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5275
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5278
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5279
        .trainerName = _("CORA"),
#line 5280
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5281
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5282
F_TRAINER_FEMALE | 
#line 5283
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5284
        .doubleBattle = FALSE,
#line 5285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5287
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5289
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5288
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5291
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5292
        .trainerName = _("PAULA"),
#line 5293
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5294
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5295
F_TRAINER_FEMALE | 
#line 5296
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5297
        .doubleBattle = FALSE,
#line 5298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5300
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5301
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5304
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5305
        .trainerName = _("MADELINE"),
#line 5306
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5307
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5308
F_TRAINER_FEMALE | 
#line 5309
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5310
        .doubleBattle = FALSE,
#line 5311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5313
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5314
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5317
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5318
        .trainerName = _("CLARISSA"),
#line 5319
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5320
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5321
F_TRAINER_FEMALE | 
#line 5322
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5323
        .doubleBattle = FALSE,
#line 5324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5326
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5327
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5330
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5331
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5334
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5335
        .trainerName = _("ANGELICA"),
#line 5336
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5337
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5338
F_TRAINER_FEMALE | 
#line 5339
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5340
        .doubleBattle = FALSE,
#line 5341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5343
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5345
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5344
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5347
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5348
        .trainerName = _("BEVERLY"),
#line 5349
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5350
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5351
F_TRAINER_FEMALE | 
#line 5352
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5353
        .doubleBattle = FALSE,
#line 5354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5356
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5357
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5360
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5361
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5364
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5365
        .trainerName = _("IMANI"),
#line 5366
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5367
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5368
F_TRAINER_FEMALE | 
#line 5369
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5370
        .doubleBattle = FALSE,
#line 5371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5373
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5374
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5377
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5378
        .trainerName = _("KYLA"),
#line 5379
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5380
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5381
F_TRAINER_FEMALE | 
#line 5382
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5383
        .doubleBattle = FALSE,
#line 5384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5386
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5387
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5390
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5391
        .trainerName = _("DENISE"),
#line 5392
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5393
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5394
F_TRAINER_FEMALE | 
#line 5395
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5396
        .doubleBattle = FALSE,
#line 5397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5399
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5400
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5403
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5404
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5407
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5408
        .trainerName = _("BETH"),
#line 5409
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5410
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5411
F_TRAINER_FEMALE | 
#line 5412
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5413
        .doubleBattle = FALSE,
#line 5414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5416
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5417
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5420
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5421
        .trainerName = _("TARA"),
#line 5422
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5423
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5424
F_TRAINER_FEMALE | 
#line 5425
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5426
        .doubleBattle = FALSE,
#line 5427
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5429
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5430
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5433
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5434
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5437
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5438
        .trainerName = _("MISSY"),
#line 5439
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5440
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5441
F_TRAINER_FEMALE | 
#line 5442
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5443
        .doubleBattle = FALSE,
#line 5444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5446
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5447
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5450
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5451
        .trainerName = _("ALICE"),
#line 5452
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5453
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5454
F_TRAINER_FEMALE | 
#line 5455
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5456
        .doubleBattle = FALSE,
#line 5457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5459
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5460
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5463
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5464
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5467
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5468
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5471
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5472
        .trainerName = _("JENNY"),
#line 5473
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5474
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5475
F_TRAINER_FEMALE | 
#line 5476
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5477
        .doubleBattle = FALSE,
#line 5478
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5480
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5481
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5484
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5485
        .trainerName = _("GRACE"),
#line 5486
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5487
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5488
F_TRAINER_FEMALE | 
#line 5489
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5490
        .doubleBattle = FALSE,
#line 5491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5493
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5494
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5497
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5498
        .trainerName = _("TANYA"),
#line 5499
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5500
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5501
F_TRAINER_FEMALE | 
#line 5502
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5503
        .doubleBattle = FALSE,
#line 5504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5506
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5507
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5510
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5511
        .trainerName = _("SHARON"),
#line 5512
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5513
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5514
F_TRAINER_FEMALE | 
#line 5515
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5516
        .doubleBattle = FALSE,
#line 5517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5519
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5520
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5523
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5524
        .trainerName = _("NIKKI"),
#line 5525
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5526
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5527
F_TRAINER_FEMALE | 
#line 5528
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5529
        .doubleBattle = FALSE,
#line 5530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5532
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5533
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5536
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5537
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5540
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5541
        .trainerName = _("BRENDA"),
#line 5542
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5543
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5544
F_TRAINER_FEMALE | 
#line 5545
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5546
        .doubleBattle = FALSE,
#line 5547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5549
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5550
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5553
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5554
        .trainerName = _("KATIE"),
#line 5555
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5556
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5557
F_TRAINER_FEMALE | 
#line 5558
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5559
        .doubleBattle = FALSE,
#line 5560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5562
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5563
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5566
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5567
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5570
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5571
        .trainerName = _("SUSIE"),
#line 5572
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5573
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5574
F_TRAINER_FEMALE | 
#line 5575
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5576
        .doubleBattle = FALSE,
#line 5577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5579
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5580
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5583
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5584
        .trainerName = _("KARA"),
#line 5585
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5586
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5587
F_TRAINER_FEMALE | 
#line 5588
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5589
        .doubleBattle = FALSE,
#line 5590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5592
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5593
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5596
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5597
        .trainerName = _("DANA"),
#line 5598
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5599
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5600
F_TRAINER_FEMALE | 
#line 5601
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5602
        .doubleBattle = FALSE,
#line 5603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5605
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5606
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5609
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5610
        .trainerName = _("SIENNA"),
#line 5611
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5612
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5613
F_TRAINER_FEMALE | 
#line 5614
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5615
        .doubleBattle = FALSE,
#line 5616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5618
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5619
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5622
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5623
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5626
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5627
        .trainerName = _("DEBRA"),
#line 5628
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5629
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5630
F_TRAINER_FEMALE | 
#line 5631
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5632
        .doubleBattle = FALSE,
#line 5633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5635
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5636
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5639
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5640
        .trainerName = _("LINDA"),
#line 5641
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5642
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5643
F_TRAINER_FEMALE | 
#line 5644
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5645
        .doubleBattle = FALSE,
#line 5646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5648
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5649
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5652
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5653
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5656
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5657
        .trainerName = _("KAYLEE"),
#line 5658
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5659
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5660
F_TRAINER_FEMALE | 
#line 5661
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5662
        .doubleBattle = FALSE,
#line 5663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5665
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5666
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5669
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5670
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5673
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5674
        .trainerName = _("LAUREL"),
#line 5675
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5676
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5677
F_TRAINER_FEMALE | 
#line 5678
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5679
        .doubleBattle = FALSE,
#line 5680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5682
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5683
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5686
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5687
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5690
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5691
        .trainerName = _("CARLEE"),
#line 5692
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5693
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5694
F_TRAINER_FEMALE | 
#line 5695
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5696
        .doubleBattle = FALSE,
#line 5697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5699
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5700
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5703
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5704
        .trainerName = _("HEIDI"),
#line 5705
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5706
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5707
F_TRAINER_FEMALE | 
#line 5708
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5709
        .doubleBattle = FALSE,
#line 5710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5712
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5713
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5716
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5717
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5721
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5722
        .trainerName = _("BECKY"),
#line 5723
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5724
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5725
F_TRAINER_FEMALE | 
#line 5726
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5727
        .doubleBattle = TRUE,
#line 5728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5730
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5730
            .heldItem = ITEM_FOCUS_SASH,
#line 5732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5731
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5733
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5736
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5736
            .heldItem = ITEM_WIDE_LENS,
#line 5739
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5737
            .ability = ABILITY_MOODY,
#line 5738
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5739
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5744
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5745
        .trainerName = _("CAROL"),
#line 5746
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5747
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5748
F_TRAINER_FEMALE | 
#line 5749
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5750
        .doubleBattle = FALSE,
#line 5751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5753
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5754
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5757
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5758
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5761
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5762
        .trainerName = _("NANCY"),
#line 5763
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5764
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5765
F_TRAINER_FEMALE | 
#line 5766
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5767
        .doubleBattle = FALSE,
#line 5768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5770
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5771
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5774
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5775
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5778
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5779
        .trainerName = _("MARTHA"),
#line 5780
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5781
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5782
F_TRAINER_FEMALE | 
#line 5783
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5784
        .doubleBattle = FALSE,
#line 5785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5787
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5788
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5791
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5792
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5795
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5796
        .trainerName = _("DIANA"),
#line 5797
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5798
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5799
F_TRAINER_FEMALE | 
#line 5800
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5801
        .doubleBattle = FALSE,
#line 5802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5804
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5805
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5808
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5809
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5812
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5813
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5816
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5817
        .trainerName = _("CEDRIC"),
#line 5818
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5819
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5821
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5822
        .doubleBattle = FALSE,
#line 5823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5825
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5826
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5829
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5830
        .trainerName = _("IRENE"),
#line 5831
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5832
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5833
F_TRAINER_FEMALE | 
#line 5834
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5835
        .doubleBattle = FALSE,
#line 5836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5838
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5839
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5842
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5843
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5846
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5847
        .trainerName = _("AMY & LIV"),
#line 5848
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5849
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5851
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5852
        .doubleBattle = TRUE,
#line 5853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5855
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5856
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5859
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5860
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5864
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5865
        .trainerName = _("GINA & MIA"),
#line 5866
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5867
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5869
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5870
        .doubleBattle = TRUE,
#line 5871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5873
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5874
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5877
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5878
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5881
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5882
        .trainerName = _("MIU & YUKI"),
#line 5883
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5884
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5886
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5887
        .doubleBattle = TRUE,
#line 5888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5890
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5891
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5894
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5895
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5899
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5900
        .trainerName = _("HUEY"),
#line 5901
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5902
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5904
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5905
        .doubleBattle = FALSE,
#line 5906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5908
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5910
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5909
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5912
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5914
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5913
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5916
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5917
        .trainerName = _("EDMOND"),
#line 5918
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5919
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5921
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5922
        .doubleBattle = FALSE,
#line 5923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5925
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5926
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5929
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5930
        .trainerName = _("ERNEST"),
#line 5931
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5932
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5934
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5935
        .doubleBattle = FALSE,
#line 5936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5938
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5939
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5942
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5943
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5946
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5947
        .trainerName = _("DWAYNE"),
#line 5948
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5949
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5951
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5952
        .doubleBattle = FALSE,
#line 5953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5955
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5956
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5959
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5960
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5963
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5964
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5967
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5968
        .trainerName = _("PHILLIP"),
#line 5969
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5970
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5972
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5973
        .doubleBattle = FALSE,
#line 5974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5976
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5977
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5980
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5981
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5984
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5985
        .trainerName = _("LEONARD"),
#line 5986
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5987
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5989
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5990
        .doubleBattle = FALSE,
#line 5991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5993
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5994
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5997
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5998
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6001
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6002
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6005
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 6006
        .trainerName = _("DUNCAN"),
#line 6007
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6008
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6010
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6011
        .doubleBattle = FALSE,
#line 6012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6014
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6015
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6018
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6019
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6022
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 6023
        .trainerName = _("ELI"),
#line 6024
        .trainerClass = TRAINER_CLASS_GAMER,
#line 6025
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6027
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6028
        .doubleBattle = FALSE,
#line 6029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6031
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6033
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6032
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6035
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 6036
        .trainerName = _("ANNIKA"),
#line 6037
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 6038
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 6039
F_TRAINER_FEMALE | 
#line 6040
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 6041
        .doubleBattle = FALSE,
#line 6042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6044
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6044
            .heldItem = ITEM_FOCUS_SASH,
#line 6046
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6045
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6048
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6048
            .heldItem = ITEM_FOCUS_SASH,
#line 6050
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6049
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6052
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 6053
        .trainerName = _("JAZMYN"),
#line 6054
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 6055
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6056
F_TRAINER_FEMALE | 
#line 6057
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6058
        .items = { ITEM_HYPER_POTION },
#line 6059
        .doubleBattle = FALSE,
#line 6060
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6062
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6063
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6066
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 6067
        .trainerName = _("JONAS"),
#line 6068
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 6069
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 6071
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6072
        .doubleBattle = FALSE,
#line 6073
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6075
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6076
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6079
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 6080
        .trainerName = _("KAYLEY"),
#line 6081
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 6082
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 6083
F_TRAINER_FEMALE | 
#line 6084
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6085
        .doubleBattle = FALSE,
#line 6086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6088
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6089
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6092
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 6093
        .trainerName = _("AURON"),
#line 6094
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6095
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6097
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6098
        .doubleBattle = FALSE,
#line 6099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6101
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6102
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6105
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6107
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6106
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6109
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 6110
        .trainerName = _("KELVIN"),
#line 6111
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6112
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6114
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6115
        .doubleBattle = FALSE,
#line 6116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6118
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6120
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6119
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6122
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6124
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6123
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6126
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6127
        .trainerName = _("MARLEY"),
#line 6128
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6129
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6130
F_TRAINER_FEMALE | 
#line 6131
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6132
        .items = { ITEM_HYPER_POTION },
#line 6133
        .doubleBattle = FALSE,
#line 6134
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6136
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6137
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6140
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6141
        .trainerName = _("REYNA"),
#line 6142
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6143
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6144
F_TRAINER_FEMALE | 
#line 6145
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6146
        .doubleBattle = FALSE,
#line 6147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6149
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6151
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6150
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6153
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6155
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6154
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6157
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6158
        .trainerName = _("HUDSON"),
#line 6159
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6160
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6162
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6163
        .doubleBattle = FALSE,
#line 6164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6166
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6167
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6170
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6171
        .trainerName = _("CONOR"),
#line 6172
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6173
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6175
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6176
        .doubleBattle = FALSE,
#line 6177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6179
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6180
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6183
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6185
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6184
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6187
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6188
        .trainerName = _("EDWIN"),
#line 6189
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6190
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6192
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6193
        .doubleBattle = FALSE,
#line 6194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6196
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6197
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6200
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6201
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6204
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6205
        .trainerName = _("HECTOR"),
#line 6206
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6207
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6209
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6210
        .doubleBattle = FALSE,
#line 6211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6213
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6214
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6217
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6218
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6221
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6222
        .trainerName = _("TABITHA"),
#line 6223
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6224
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6226
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6227
        .doubleBattle = FALSE,
#line 6228
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6230
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6230
            .heldItem = ITEM_SITRUS_BERRY,
#line 6233
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6231
            .ability = ABILITY_DROUGHT,
#line 6232
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6234
                MOVE_SHELL_SMASH,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6239
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6239
            .heldItem = ITEM_POISON_BARB,
#line 6242
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6240
            .ability = ABILITY_LEVITATE,
#line 6241
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6243
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6248
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6248
            .heldItem = ITEM_LIFE_ORB,
#line 6251
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6250
            .ability = ABILITY_LEVITATE,
#line 6249
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6252
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_TRICK,
            },
            },
        },
    },
#line 6257
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL_VR] =
    {
#line 6258
        .trainerName = _("SAMUEL"),
#line 6259
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6260
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6262
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6263
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6264
        .doubleBattle = TRUE,
#line 6265
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6267
            .species = SPECIES_SLOWKING,
#line 6267
            .gender = TRAINER_MON_MALE,
#line 6267
            .heldItem = ITEM_LIFE_ORB,
#line 6271
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6268
            .ability = ABILITY_REGENERATOR,
#line 6269
            .lvl = 70,
#line 6270
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6272
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6277
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6277
            .heldItem = ITEM_ROCKY_HELMET,
#line 6281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6278
            .ability = ABILITY_REGENERATOR,
#line 6279
            .lvl = 70,
#line 6280
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6281
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6286
            .species = SPECIES_GLISCOR,
#line 6286
            .gender = TRAINER_MON_FEMALE,
#line 6286
            .heldItem = ITEM_TOXIC_ORB,
#line 6290
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6287
            .ability = ABILITY_POISON_HEAL,
#line 6288
            .lvl = 70,
#line 6289
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6291
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6296
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6296
            .heldItem = ITEM_ASSAULT_VEST,
#line 6300
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6297
            .ability = ABILITY_CLEAR_BODY,
#line 6298
            .lvl = 70,
#line 6299
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6301
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6306
            .species = SPECIES_HONCHKROW,
#line 6306
            .gender = TRAINER_MON_MALE,
#line 6306
            .heldItem = ITEM_FOCUS_SASH,
#line 6310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6307
            .ability = ABILITY_MOXIE,
#line 6308
            .lvl = 70,
#line 6309
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6310
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_FOUL_PLAY,
            },
            },
            {
#line 6315
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6315
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6316
            .ability = ABILITY_INFILTRATOR,
#line 6317
            .lvl = 70,
#line 6318
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6319
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6324
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103] =
    {
#line 6325
        .trainerName = _("SAMUEL"),
#line 6326
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6327
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6329
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6330
        .doubleBattle = FALSE,
#line 6331
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6333
            .species = SPECIES_SLOWPOKE,
#line 6333
            .gender = TRAINER_MON_MALE,
#line 6337
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6334
            .ability = ABILITY_REGENERATOR,
#line 6335
            .lvl = 5,
#line 6336
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6338
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6342
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6343
        .trainerName = _("SAMUEL"),
#line 6344
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6345
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6347
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6348
        .doubleBattle = FALSE,
#line 6349
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6351
            .species = SPECIES_SLOWPOKE,
#line 6351
            .gender = TRAINER_MON_MALE,
#line 6351
            .heldItem = ITEM_LIFE_ORB,
#line 6355
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6352
            .ability = ABILITY_REGENERATOR,
#line 6353
            .lvl = 49,
#line 6354
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6356
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6361
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6361
            .heldItem = ITEM_ROCKY_HELMET,
#line 6365
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6362
            .ability = ABILITY_REGENERATOR,
#line 6363
            .lvl = 49,
#line 6364
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6365
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6370
            .species = SPECIES_GLIGAR,
#line 6370
            .gender = TRAINER_MON_FEMALE,
#line 6370
            .heldItem = ITEM_RAZOR_FANG,
#line 6374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6371
            .ability = ABILITY_HYPER_CUTTER,
#line 6372
            .lvl = 49,
#line 6373
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6375
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6380
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6380
            .heldItem = ITEM_ASSAULT_VEST,
#line 6384
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6381
            .ability = ABILITY_CLEAR_BODY,
#line 6382
            .lvl = 49,
#line 6383
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6384
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6389
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6389
            .heldItem = ITEM_FOCUS_SASH,
#line 6393
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6390
            .ability = ABILITY_PRANKSTER,
#line 6391
            .lvl = 49,
#line 6392
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6393
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6398
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6399
        .trainerName = _("SAMUEL"),
#line 6400
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6401
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6403
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6404
        .doubleBattle = FALSE,
#line 6405
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6407
            .species = SPECIES_SLOWPOKE,
#line 6407
            .gender = TRAINER_MON_MALE,
#line 6407
            .heldItem = ITEM_SITRUS_BERRY,
#line 6411
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6408
            .ability = ABILITY_REGENERATOR,
#line 6409
            .lvl = 24,
#line 6410
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6412
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6417
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6417
            .heldItem = ITEM_LUM_BERRY,
#line 6421
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6418
            .ability = ABILITY_REGENERATOR,
#line 6419
            .lvl = 24,
#line 6420
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6422
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6427
            .species = SPECIES_GLIGAR,
#line 6427
            .gender = TRAINER_MON_FEMALE,
#line 6427
            .heldItem = ITEM_RAZOR_FANG,
#line 6431
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6428
            .ability = ABILITY_HYPER_CUTTER,
#line 6429
            .lvl = 24,
#line 6430
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6432
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6437
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6437
            .heldItem = ITEM_METAL_COAT,
#line 6441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6438
            .ability = ABILITY_CLEAR_BODY,
#line 6439
            .lvl = 24,
#line 6440
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6441
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_HONE_CLAWS,
            },
            },
        },
    },
#line 6446
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6447
        .trainerName = _("ISAAC"),
#line 6448
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6449
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6451
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6452
        .doubleBattle = FALSE,
#line 6453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6455
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6456
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6459
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6460
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6463
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6464
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6467
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6468
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6471
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6472
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6475
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6476
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6479
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6480
        .trainerName = _("DAVIS"),
#line 6481
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6482
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6484
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6485
        .doubleBattle = FALSE,
#line 6486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6488
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6489
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6492
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6493
        .trainerName = _("MITCHELL"),
#line 6494
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6495
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6497
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6498
        .doubleBattle = FALSE,
#line 6499
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6501
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6502
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6505
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6506
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6509
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6510
        .trainerName = _("LYDIA"),
#line 6511
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6512
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6513
F_TRAINER_FEMALE | 
#line 6514
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6515
        .doubleBattle = FALSE,
#line 6516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6518
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6519
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6522
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6523
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6526
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6527
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6530
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6531
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6534
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6535
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6538
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6539
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6542
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6543
        .trainerName = _("HALLE"),
#line 6544
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6545
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6546
F_TRAINER_FEMALE | 
#line 6547
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6548
        .items = { ITEM_FULL_RESTORE },
#line 6549
        .doubleBattle = FALSE,
#line 6550
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6552
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6553
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6556
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6557
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6560
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6561
        .trainerName = _("GARRISON"),
#line 6562
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6563
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6565
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6566
        .doubleBattle = FALSE,
#line 6567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6569
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6570
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6573
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6574
        .trainerName = _("JACKSON"),
#line 6575
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6576
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6578
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6579
        .items = { ITEM_FULL_RESTORE },
#line 6580
        .doubleBattle = FALSE,
#line 6581
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6583
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6584
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6587
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6588
        .trainerName = _("LORENZO"),
#line 6589
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6590
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6592
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6593
        .items = { ITEM_FULL_RESTORE },
#line 6594
        .doubleBattle = FALSE,
#line 6595
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6597
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6599
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6598
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6601
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6603
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6602
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6605
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6607
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6606
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6609
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6610
        .trainerName = _("SEBASTIAN"),
#line 6611
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6612
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6614
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6615
        .items = { ITEM_FULL_RESTORE },
#line 6616
        .doubleBattle = FALSE,
#line 6617
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6619
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6621
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6620
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6623
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6624
        .trainerName = _("CATHERINE"),
#line 6625
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6626
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6627
F_TRAINER_FEMALE | 
#line 6628
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6629
        .items = { ITEM_FULL_RESTORE },
#line 6630
        .doubleBattle = FALSE,
#line 6631
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6633
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6635
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6634
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6637
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6639
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6638
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6641
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6642
        .trainerName = _("JENNA"),
#line 6643
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6644
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6645
F_TRAINER_FEMALE | 
#line 6646
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6647
        .items = { ITEM_FULL_RESTORE },
#line 6648
        .doubleBattle = FALSE,
#line 6649
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6651
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6653
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6652
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6655
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6656
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6659
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6660
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6663
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6664
        .trainerName = _("SOPHIA"),
#line 6665
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6666
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6667
F_TRAINER_FEMALE | 
#line 6668
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6669
        .items = { ITEM_FULL_RESTORE },
#line 6670
        .doubleBattle = FALSE,
#line 6671
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6673
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6675
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6674
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6677
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6679
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6678
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6681
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6682
        .trainerName = _("JULIO"),
#line 6683
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6684
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6686
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6687
        .doubleBattle = FALSE,
#line 6688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6690
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6691
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6694
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6695
        .trainerName = _("GRUNT"),
#line 6696
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6697
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6699
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6700
        .doubleBattle = FALSE,
#line 6701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6703
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6705
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6704
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6707
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6709
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6708
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6711
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6712
        .trainerName = _("GRUNT"),
#line 6713
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6714
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6715
F_TRAINER_FEMALE | 
#line 6716
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6717
        .doubleBattle = FALSE,
#line 6718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6720
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6721
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6724
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6725
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6728
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6729
        .trainerName = _("GRUNT"),
#line 6730
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6731
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6733
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6734
        .doubleBattle = FALSE,
#line 6735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6737
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6739
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6738
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6741
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6743
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6742
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6745
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6746
        .trainerName = _("MARC"),
#line 6747
        .trainerClass = TRAINER_CLASS_GAMER,
#line 6748
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6750
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6751
        .doubleBattle = FALSE,
#line 6752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6754
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6755
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6758
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6760
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6759
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6762
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6763
        .trainerName = _("BRENDEN"),
#line 6764
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6765
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6767
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6768
        .doubleBattle = FALSE,
#line 6769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6771
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6773
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6772
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6775
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 6776
        .trainerName = _("LILITH"),
#line 6777
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6778
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6779
F_TRAINER_FEMALE | 
#line 6780
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6781
        .doubleBattle = FALSE,
#line 6782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6784
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6786
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6785
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6788
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 6789
        .trainerName = _("CRISTIAN"),
#line 6790
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6791
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6793
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6794
        .doubleBattle = FALSE,
#line 6795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6797
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6799
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6798
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6801
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 6802
        .trainerName = _("SYLVIA"),
#line 6803
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6804
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6805
F_TRAINER_FEMALE | 
#line 6806
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6807
        .doubleBattle = FALSE,
#line 6808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6810
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6812
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6811
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6814
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 6815
        .trainerName = _("LEONARDO"),
#line 6816
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6817
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6819
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6820
        .doubleBattle = FALSE,
#line 6821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6823
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6824
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6827
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 6828
        .trainerName = _("ATHENA"),
#line 6829
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6830
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6831
F_TRAINER_FEMALE | 
#line 6832
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6833
        .items = { ITEM_HYPER_POTION },
#line 6834
        .doubleBattle = FALSE,
#line 6835
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6837
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6839
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6838
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6841
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6843
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6842
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6846
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 6847
        .trainerName = _("HARRISON"),
#line 6848
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6849
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6851
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6852
        .doubleBattle = FALSE,
#line 6853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6856
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6859
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 6860
        .trainerName = _("GRUNT"),
#line 6861
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6862
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6864
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6865
        .doubleBattle = FALSE,
#line 6866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6868
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6869
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6872
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 6873
        .trainerName = _("CLARENCE"),
#line 6874
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6875
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6877
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6878
        .doubleBattle = FALSE,
#line 6879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6881
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6882
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6885
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 6886
        .trainerName = _("TERRY"),
#line 6887
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6888
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6889
F_TRAINER_FEMALE | 
#line 6890
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6891
        .doubleBattle = FALSE,
#line 6892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6894
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6895
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6898
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 6899
        .trainerName = _("NATE"),
#line 6900
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6901
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 6903
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6904
        .doubleBattle = FALSE,
#line 6905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6907
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6908
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6911
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 6912
        .trainerName = _("KATHLEEN"),
#line 6913
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6914
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6915
F_TRAINER_FEMALE | 
#line 6916
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6917
        .doubleBattle = FALSE,
#line 6918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6920
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6921
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6924
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 6925
        .trainerName = _("CLIFFORD"),
#line 6926
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6927
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 6929
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6930
        .doubleBattle = FALSE,
#line 6931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6933
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6934
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6937
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 6938
        .trainerName = _("NICHOLAS"),
#line 6939
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6940
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6942
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6943
        .doubleBattle = FALSE,
#line 6944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6946
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6947
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6950
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 6951
        .trainerName = _("GRUNT"),
#line 6952
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6953
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6954
F_TRAINER_FEMALE | 
#line 6955
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6956
        .doubleBattle = FALSE,
#line 6957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6959
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6960
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6963
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6964
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6967
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 6968
        .trainerName = _("GRUNT"),
#line 6969
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6970
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6972
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6973
        .doubleBattle = FALSE,
#line 6974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6976
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6977
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6980
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 6981
        .trainerName = _("GRUNT"),
#line 6982
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6983
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6985
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6986
        .doubleBattle = FALSE,
#line 6987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6989
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6990
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6993
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 6994
        .trainerName = _("GRUNT"),
#line 6995
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6996
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6998
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6999
        .doubleBattle = FALSE,
#line 7000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7002
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7003
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7006
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7007
        .trainerName = _("GRUNT"),
#line 7008
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7009
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7011
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7012
        .doubleBattle = FALSE,
#line 7013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7015
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7016
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7019
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7020
        .trainerName = _("MACEY"),
#line 7021
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7022
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7023
F_TRAINER_FEMALE | 
#line 7024
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7025
        .doubleBattle = FALSE,
#line 7026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7028
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7029
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7032
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7033
        .trainerName = _("SAMUEL"),
#line 7034
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7035
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7037
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7038
        .doubleBattle = FALSE,
#line 7039
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7041
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7041
            .heldItem = ITEM_RAZOR_FANG,
#line 7045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7042
            .ability = ABILITY_HYPER_CUTTER,
#line 7043
            .lvl = 16,
#line 7044
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7045
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7050
            .species = SPECIES_SLOWPOKE,
#line 7050
            .gender = TRAINER_MON_MALE,
#line 7050
            .heldItem = ITEM_SITRUS_BERRY,
#line 7054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7051
            .ability = ABILITY_REGENERATOR,
#line 7052
            .lvl = 16,
#line 7053
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7054
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7059
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7060
            .ability = ABILITY_REGENERATOR,
#line 7061
            .lvl = 16,
#line 7062
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7063
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 7068
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7068
            .heldItem = ITEM_SITRUS_BERRY,
#line 7072
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7069
            .ability = ABILITY_CLEAR_BODY,
#line 7070
            .lvl = 16,
#line 7071
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7072
                MOVE_TACKLE,
                MOVE_METAL_CLAW,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 7076
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7077
        .trainerName = _("PAXTON"),
#line 7078
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7079
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7081
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7082
        .doubleBattle = FALSE,
#line 7083
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7085
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7086
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7089
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7090
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7093
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7094
        .trainerName = _("ISABELLA"),
#line 7095
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7096
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7097
F_TRAINER_FEMALE | 
#line 7098
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7099
        .doubleBattle = FALSE,
#line 7100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7102
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7103
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7106
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7107
        .trainerName = _("GRUNT"),
#line 7108
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7109
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7110
F_TRAINER_FEMALE | 
#line 7111
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7112
        .doubleBattle = FALSE,
#line 7113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7115
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7116
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7119
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7120
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7123
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7124
        .trainerName = _("TABITHA"),
#line 7125
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7126
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7128
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7129
        .doubleBattle = FALSE,
#line 7130
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7132
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7132
            .heldItem = ITEM_SITRUS_BERRY,
#line 7135
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7133
            .ability = ABILITY_DROUGHT,
#line 7134
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7136
                MOVE_RAPID_SPIN,
                MOVE_LAVA_PLUME,
                MOVE_IRON_DEFENSE,
                MOVE_BODY_SLAM,
            },
            },
            {
#line 7141
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7141
            .heldItem = ITEM_LUM_BERRY,
#line 7144
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7142
            .ability = ABILITY_LEVITATE,
#line 7143
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7145
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
                MOVE_TOXIC,
            },
            },
            {
#line 7150
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7150
            .heldItem = ITEM_SITRUS_BERRY,
#line 7153
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7151
            .ability = ABILITY_LEVITATE,
#line 7152
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7154
                MOVE_SCORCHING_SANDS,
                MOVE_EXTRASENSORY,
                MOVE_COSMIC_POWER,
                MOVE_IMPRISON,
            },
            },
            {
#line 7159
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7159
            .heldItem = ITEM_LUM_BERRY,
#line 7162
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7160
            .ability = ABILITY_OWN_TEMPO,
#line 7161
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7163
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
                MOVE_TAKE_DOWN,
            },
            },
        },
    },
#line 7168
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7169
        .trainerName = _("JONATHAN"),
#line 7170
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7171
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7173
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7174
        .items = { ITEM_HYPER_POTION },
#line 7175
        .doubleBattle = FALSE,
#line 7176
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7178
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7179
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7182
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7183
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7187
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7188
        .trainerName = _("MAXIE"),
#line 7189
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7190
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7192
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7193
        .doubleBattle = FALSE,
#line 7194
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7196
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7196
            .heldItem = ITEM_IRON_BALL,
#line 7199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7197
            .ability = ABILITY_HEAVY_METAL,
#line 7198
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7199
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_DRAGON_RUSH,
                MOVE_BULK_UP,
            },
            },
            {
#line 7204
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .heldItem = ITEM_SHARP_BEAK,
#line 7207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7205
            .ability = ABILITY_INNER_FOCUS,
#line 7206
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7207
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7212
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .heldItem = ITEM_MUSCLE_BAND,
#line 7215
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7213
            .ability = ABILITY_IMMUNITY,
#line 7214
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7215
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7220
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7220
            .heldItem = ITEM_EXPERT_BELT,
#line 7223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7221
            .ability = ABILITY_UNNERVE,
#line 7222
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7223
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7228
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7228
            .heldItem = ITEM_ROCKY_HELMET,
#line 7231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7229
            .ability = ABILITY_ROCK_HEAD,
#line 7230
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7231
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7236
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7237
        .trainerName = _("MAXIE"),
#line 7238
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7239
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7241
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7242
        .doubleBattle = FALSE,
#line 7243
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7245
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7245
            .heldItem = ITEM_MUSCLE_BAND,
#line 7248
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7246
            .ability = ABILITY_HEAVY_METAL,
#line 7247
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7249
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7254
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7254
            .heldItem = ITEM_LUM_BERRY,
#line 7257
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7255
            .ability = ABILITY_IMMUNITY,
#line 7256
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7258
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_HONE_CLAWS,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7263
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7263
            .heldItem = ITEM_LUM_BERRY,
#line 7266
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7264
            .ability = ABILITY_UNNERVE,
#line 7265
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7267
                MOVE_FIRE_SPIN,
                MOVE_TORMENT,
                MOVE_SNARL,
                MOVE_HOWL,
            },
            },
            {
#line 7272
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7272
            .heldItem = ITEM_ROCKY_HELMET,
#line 7275
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7273
            .ability = ABILITY_ROCK_HEAD,
#line 7274
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7276
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7281
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7281
            .heldItem = ITEM_SHARP_BEAK,
#line 7284
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7282
            .ability = ABILITY_INNER_FOCUS,
#line 7283
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7285
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_BITE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7290
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7291
        .trainerName = _("TIANA"),
#line 7292
        .trainerClass = TRAINER_CLASS_LASS,
#line 7293
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7294
F_TRAINER_FEMALE | 
#line 7295
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7296
        .doubleBattle = FALSE,
#line 7297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7299
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7300
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7303
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7304
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7307
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7308
        .trainerName = _("HALEY"),
#line 7309
        .trainerClass = TRAINER_CLASS_LASS,
#line 7310
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7311
F_TRAINER_FEMALE | 
#line 7312
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7313
        .doubleBattle = FALSE,
#line 7314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7316
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7317
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7320
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7321
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7324
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7325
        .trainerName = _("JANICE"),
#line 7326
        .trainerClass = TRAINER_CLASS_LASS,
#line 7327
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7328
F_TRAINER_FEMALE | 
#line 7329
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7330
        .doubleBattle = FALSE,
#line 7331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7333
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7334
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7337
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7338
        .trainerName = _("VIVI"),
#line 7339
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7340
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7341
F_TRAINER_FEMALE | 
#line 7342
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7343
        .doubleBattle = FALSE,
#line 7344
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7346
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7348
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7347
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7350
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7352
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7351
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7354
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7355
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7358
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7359
        .trainerName = _("SALLY"),
#line 7360
        .trainerClass = TRAINER_CLASS_LASS,
#line 7361
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7362
F_TRAINER_FEMALE | 
#line 7363
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7364
        .doubleBattle = FALSE,
#line 7365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7367
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7368
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7371
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7372
        .trainerName = _("ROBIN"),
#line 7373
        .trainerClass = TRAINER_CLASS_LASS,
#line 7374
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7375
F_TRAINER_FEMALE | 
#line 7376
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7377
        .doubleBattle = FALSE,
#line 7378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7380
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7381
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7384
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7385
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7388
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7389
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7393
    [DIFFICULTY_NORMAL][TRAINER_NAMI] =
    {
#line 7394
        .trainerName = _("NAMI"),
#line 7395
        .trainerClass = TRAINER_CLASS_LASS,
#line 7396
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7397
F_TRAINER_FEMALE | 
#line 7398
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7399
        .doubleBattle = FALSE,
#line 7400
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7402
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7403
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7406
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7407
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7410
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7411
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7414
    [DIFFICULTY_NORMAL][TRAINER_KIDDO] =
    {
#line 7415
        .trainerName = _("KIDDO"),
#line 7416
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 7417
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 7419
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7420
        .doubleBattle = FALSE,
#line 7421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7423
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7424
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7426
                MOVE_AFTER_YOU,
                MOVE_PLAY_NICE,
            },
            },
            {
#line 7429
            .species = SPECIES_CHANSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7429
            .heldItem = ITEM_TOXIC_ORB,
#line 7431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7430
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7432
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7435
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7435
            .heldItem = ITEM_FLAME_ORB,
#line 7437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7436
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7438
                MOVE_FLING,
                MOVE_COPYCAT,
            },
            },
            {
#line 7441
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7442
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7444
                MOVE_ENCORE,
                MOVE_AMNESIA,
                MOVE_YAWN,
                MOVE_SLACK_OFF,
            },
            },
        },
    },
#line 7449
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7450
        .trainerName = _("ANDREA"),
#line 7451
        .trainerClass = TRAINER_CLASS_LASS,
#line 7452
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7453
F_TRAINER_FEMALE | 
#line 7454
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7455
        .doubleBattle = FALSE,
#line 7456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7458
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7459
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7462
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7463
        .trainerName = _("CRISSY"),
#line 7464
        .trainerClass = TRAINER_CLASS_LASS,
#line 7465
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7466
F_TRAINER_FEMALE | 
#line 7467
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7468
        .doubleBattle = FALSE,
#line 7469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7471
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7473
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7472
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7475
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7477
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7476
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7479
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7480
        .trainerName = _("RICK"),
#line 7481
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7482
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7484
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7485
        .doubleBattle = FALSE,
#line 7486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7488
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7489
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7492
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7493
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7496
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7497
        .trainerName = _("LYLE"),
#line 7498
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7499
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7501
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7502
        .doubleBattle = FALSE,
#line 7503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7505
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7506
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7509
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7510
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7513
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7514
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7517
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7518
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7521
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7522
        .trainerName = _("JOSIE"),
#line 7523
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7524
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7526
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7527
        .doubleBattle = FALSE,
#line 7528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7530
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7532
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7531
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7534
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7536
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7535
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7538
    [DIFFICULTY_NORMAL][TRAINER_BONNEY] =
    {
#line 7539
        .trainerName = _("BONNEY"),
#line 7540
        .trainerClass = TRAINER_CLASS_LADY,
#line 7541
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 7542
F_TRAINER_FEMALE | 
#line 7543
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7544
        .doubleBattle = TRUE,
#line 7545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7547
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7549
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7548
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7551
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7553
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7552
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7555
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7557
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7556
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7559
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7561
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7560
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7563
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7564
        .trainerName = _("DOUG"),
#line 7565
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7566
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7568
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7569
        .doubleBattle = FALSE,
#line 7570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7572
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7573
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7576
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7577
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7580
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7581
        .trainerName = _("GREG"),
#line 7582
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7583
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7585
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7586
        .doubleBattle = FALSE,
#line 7587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7589
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7590
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7593
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7594
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7597
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7598
        .trainerName = _("KENT"),
#line 7599
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7600
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7602
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7603
        .doubleBattle = FALSE,
#line 7604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7606
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7607
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7610
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7611
        .trainerName = _("JAMES"),
#line 7612
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7613
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7615
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7616
        .doubleBattle = FALSE,
#line 7617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7619
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7620
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7623
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7624
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7627
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7628
        .trainerName = _("BRICE"),
#line 7629
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7630
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7632
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7633
        .doubleBattle = FALSE,
#line 7634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7636
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7637
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7640
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7641
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7644
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7645
        .trainerName = _("TRENT"),
#line 7646
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7647
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7649
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7650
        .doubleBattle = FALSE,
#line 7651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7653
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7654
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7657
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7658
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7661
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7662
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7665
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7666
        .trainerName = _("LENNY"),
#line 7667
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7668
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7670
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7671
        .doubleBattle = FALSE,
#line 7672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7674
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7675
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7678
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7679
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7682
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7683
        .trainerName = _("LUCAS"),
#line 7684
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7685
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7687
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7688
        .doubleBattle = FALSE,
#line 7689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7691
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7692
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7695
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7696
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7699
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7700
        .trainerName = _("ALAN"),
#line 7701
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7702
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7704
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7705
        .doubleBattle = FALSE,
#line 7706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7708
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7709
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7712
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7713
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7716
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7717
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7720
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7721
        .trainerName = _("CLARK"),
#line 7722
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7723
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7725
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7726
        .doubleBattle = FALSE,
#line 7727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7729
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7730
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7733
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7734
        .trainerName = _("ERIC"),
#line 7735
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7736
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7738
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7739
        .doubleBattle = FALSE,
#line 7740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7742
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7743
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7746
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7747
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7750
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7751
        .trainerName = _("MIKE"),
#line 7752
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7753
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7755
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7756
        .doubleBattle = FALSE,
#line 7757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7759
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7760
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7763
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7764
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7767
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7768
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7771
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7772
        .trainerName = _("DEZ & LUKE"),
#line 7773
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7774
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7776
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7777
        .doubleBattle = TRUE,
#line 7778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7780
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7781
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7784
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7785
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7788
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 7789
        .trainerName = _("LEA & JED"),
#line 7790
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7791
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7793
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7794
        .doubleBattle = TRUE,
#line 7795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7797
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7798
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7801
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7802
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7805
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 7806
        .trainerName = _("KIRA & DAN"),
#line 7807
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7808
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7810
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7811
        .doubleBattle = TRUE,
#line 7812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7814
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7815
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7818
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7819
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7822
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 7823
        .trainerName = _("JOHANNA"),
#line 7824
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7825
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 7826
F_TRAINER_FEMALE | 
#line 7827
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7828
        .doubleBattle = FALSE,
#line 7829
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7831
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7832
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7835
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 7836
        .trainerName = _("GERALD"),
#line 7837
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7838
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7840
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7841
        .items = { ITEM_HYPER_POTION },
#line 7842
        .doubleBattle = FALSE,
#line 7843
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7845
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7847
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7846
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7850
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 7851
        .trainerName = _("VIVIAN"),
#line 7852
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7853
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7854
F_TRAINER_FEMALE | 
#line 7855
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7856
        .doubleBattle = FALSE,
#line 7857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7859
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7861
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7860
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7863
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7865
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7864
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7867
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 7868
        .trainerName = _("DANIELLE"),
#line 7869
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7870
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7871
F_TRAINER_FEMALE | 
#line 7872
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7873
        .doubleBattle = FALSE,
#line 7874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7876
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7878
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7877
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7880
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 7881
        .trainerName = _("HIDEO"),
#line 7882
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7883
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7885
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7886
        .doubleBattle = FALSE,
#line 7887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7889
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7890
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7893
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7894
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7897
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 7898
        .trainerName = _("KEIGO"),
#line 7899
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7900
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7902
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7903
        .doubleBattle = FALSE,
#line 7904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7906
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7907
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7910
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7911
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7914
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 7915
        .trainerName = _("RILEY"),
#line 7916
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7917
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7919
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7920
        .doubleBattle = FALSE,
#line 7921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7923
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7924
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7927
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7928
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7931
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 7932
        .trainerName = _("FLINT"),
#line 7933
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7934
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7936
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7937
        .doubleBattle = FALSE,
#line 7938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7940
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7942
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7941
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7944
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7946
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7945
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7948
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 7949
        .trainerName = _("ASHLEY"),
#line 7950
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7951
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7952
F_TRAINER_FEMALE | 
#line 7953
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7954
        .doubleBattle = FALSE,
#line 7955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7957
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7959
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7958
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7961
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7963
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7962
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7965
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7967
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7966
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7969
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 7970
        .trainerName = _("CHAD"),
#line 7971
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7972
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 7974
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7975
        .doubleBattle = TRUE,
#line 7976
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7978
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7979
            .ability = ABILITY_STURDY,
#line 7980
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7981
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 7984
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7985
            .ability = ABILITY_SAND_STREAM,
#line 7986
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7987
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7992
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7993
            .ability = ABILITY_LIGHTNING_ROD,
#line 7994
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7995
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 7999
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8000
            .ability = ABILITY_SAND_VEIL,
#line 8001
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8002
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 8006
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8007
        .trainerName = _("SAMUEL"),
#line 8008
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8009
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8011
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8012
        .doubleBattle = TRUE,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8015
            .species = SPECIES_SLOWKING,
#line 8015
            .gender = TRAINER_MON_MALE,
#line 8015
            .heldItem = ITEM_LIFE_ORB,
#line 8019
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8016
            .ability = ABILITY_REGENERATOR,
#line 8017
            .lvl = 54,
#line 8018
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8020
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8025
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8025
            .heldItem = ITEM_ROCKY_HELMET,
#line 8029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8026
            .ability = ABILITY_REGENERATOR,
#line 8027
            .lvl = 54,
#line 8028
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8029
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8034
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8038
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8035
            .ability = ABILITY_INFILTRATOR,
#line 8036
            .lvl = 54,
#line 8037
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8038
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8043
            .species = SPECIES_GLISCOR,
#line 8043
            .gender = TRAINER_MON_FEMALE,
#line 8043
            .heldItem = ITEM_TOXIC_ORB,
#line 8047
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8044
            .ability = ABILITY_POISON_HEAL,
#line 8045
            .lvl = 54,
#line 8046
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8048
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8053
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .heldItem = ITEM_ASSAULT_VEST,
#line 8057
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8054
            .ability = ABILITY_CLEAR_BODY,
#line 8055
            .lvl = 54,
#line 8056
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8058
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8063
            .species = SPECIES_HONCHKROW,
#line 8063
            .gender = TRAINER_MON_MALE,
#line 8063
            .heldItem = ITEM_FOCUS_SASH,
#line 8067
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8064
            .ability = ABILITY_MOXIE,
#line 8065
            .lvl = 54,
#line 8066
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8068
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8073
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8074
        .trainerName = _("JONAH"),
#line 8075
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8076
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8078
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8079
        .doubleBattle = FALSE,
#line 8080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8082
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8083
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8086
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8087
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8090
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8091
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8094
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8095
        .trainerName = _("HENRY"),
#line 8096
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8097
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8099
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8100
        .doubleBattle = FALSE,
#line 8101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8103
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8104
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8107
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8108
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8111
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8112
        .trainerName = _("ROGER"),
#line 8113
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8114
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8116
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8117
        .doubleBattle = FALSE,
#line 8118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8120
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8121
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8124
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8125
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8128
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8129
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8132
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8133
        .trainerName = _("ALEXA"),
#line 8134
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8135
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8136
F_TRAINER_FEMALE | 
#line 8137
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8138
        .items = { ITEM_FULL_RESTORE },
#line 8139
        .doubleBattle = FALSE,
#line 8140
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8142
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8144
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8143
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8146
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8148
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8147
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8150
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8151
        .trainerName = _("RUBEN"),
#line 8152
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8153
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8155
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8156
        .items = { ITEM_HYPER_POTION },
#line 8157
        .doubleBattle = FALSE,
#line 8158
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8160
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8162
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8161
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8164
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8166
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8165
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8168
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8169
        .trainerName = _("KOJI"),
#line 8170
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8171
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8173
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8174
        .doubleBattle = FALSE,
#line 8175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8177
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8178
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8181
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8182
        .trainerName = _("WAYNE"),
#line 8183
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8184
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8186
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8187
        .doubleBattle = FALSE,
#line 8188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8190
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8191
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8194
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8195
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8198
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8199
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8202
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8203
        .trainerName = _("AIDAN"),
#line 8204
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8205
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8207
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8208
        .doubleBattle = FALSE,
#line 8209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8211
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8212
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8215
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8216
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8219
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8220
        .trainerName = _("REED"),
#line 8221
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8222
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8224
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8225
        .doubleBattle = FALSE,
#line 8226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8228
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8229
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8232
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8233
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8236
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8237
        .trainerName = _("TISHA"),
#line 8238
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8239
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8240
F_TRAINER_FEMALE | 
#line 8241
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8242
        .doubleBattle = FALSE,
#line 8243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8245
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8246
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8249
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8250
        .trainerName = _("TORI & TIA"),
#line 8251
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8252
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8254
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8255
        .doubleBattle = TRUE,
#line 8256
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8258
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8260
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8259
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8262
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8263
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8266
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8267
        .trainerName = _("KIM & IRIS"),
#line 8268
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8269
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8271
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8272
        .doubleBattle = TRUE,
#line 8273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8275
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8276
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8279
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8280
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8283
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8284
        .trainerName = _("TYRA & IVY"),
#line 8285
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8286
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8288
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8289
        .doubleBattle = TRUE,
#line 8290
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8292
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8293
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8296
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8297
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8301
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8302
        .trainerName = _("MEL & PAUL"),
#line 8303
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8304
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8306
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8307
        .doubleBattle = TRUE,
#line 8308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8310
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8311
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8314
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8315
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8318
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8319
        .trainerName = _("JOHN & JAY"),
#line 8320
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8321
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8323
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8324
        .doubleBattle = TRUE,
#line 8325
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8327
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8329
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8328
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8331
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8333
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8332
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8335
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8336
        .trainerName = _("RELI & IAN"),
#line 8337
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8338
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8340
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8341
        .doubleBattle = TRUE,
#line 8342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8344
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8345
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8348
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8349
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8352
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8353
        .trainerName = _("LILA & ROY"),
#line 8354
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8355
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8357
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8358
        .doubleBattle = TRUE,
#line 8359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8361
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8362
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8365
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8366
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8369
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8370
        .trainerName = _("LISA & RAY"),
#line 8371
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8372
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8374
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8375
        .doubleBattle = TRUE,
#line 8376
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8378
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8379
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8382
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8383
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8386
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8387
        .trainerName = _("CHRIS"),
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8395
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8396
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8399
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8400
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8403
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8404
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8407
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8408
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8411
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8412
        .trainerName = _("DAWSON"),
#line 8413
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8414
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8416
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8417
        .doubleBattle = FALSE,
#line 8418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8420
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8420
            .heldItem = ITEM_NUGGET,
#line 8422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8421
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8424
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8425
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8428
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8429
        .trainerName = _("SARAH"),
#line 8430
        .trainerClass = TRAINER_CLASS_LADY,
#line 8431
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8432
F_TRAINER_FEMALE | 
#line 8433
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8434
        .items = { ITEM_FULL_RESTORE },
#line 8435
        .doubleBattle = FALSE,
#line 8436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8438
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8439
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8442
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8442
            .heldItem = ITEM_NUGGET,
#line 8444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8443
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8446
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8447
        .trainerName = _("DARIAN"),
#line 8448
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8449
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8451
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8452
        .doubleBattle = FALSE,
#line 8453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8455
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8456
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8459
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8460
        .trainerName = _("HAILEY"),
#line 8461
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8462
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8463
F_TRAINER_FEMALE | 
#line 8464
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8465
        .doubleBattle = FALSE,
#line 8466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8468
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8469
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8472
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8473
        .trainerName = _("CHANDLER"),
#line 8474
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8475
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8477
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8478
        .doubleBattle = FALSE,
#line 8479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8481
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8482
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8485
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8486
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8489
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8490
        .trainerName = _("KALEB"),
#line 8491
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8492
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8494
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8495
        .doubleBattle = FALSE,
#line 8496
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8498
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8498
            .heldItem = ITEM_ORAN_BERRY,
#line 8500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8499
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8502
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8502
            .heldItem = ITEM_ORAN_BERRY,
#line 8504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8503
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8506
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8507
        .trainerName = _("JOSEPH"),
#line 8508
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8509
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8511
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8512
        .doubleBattle = FALSE,
#line 8513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8515
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8516
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8519
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8520
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8523
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8524
        .trainerName = _("ALYSSA"),
#line 8525
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8526
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8527
F_TRAINER_FEMALE | 
#line 8528
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8529
        .doubleBattle = FALSE,
#line 8530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8532
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8533
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8536
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8537
        .trainerName = _("MARCOS"),
#line 8538
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8539
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8541
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8542
        .doubleBattle = FALSE,
#line 8543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8545
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8547
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8546
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8549
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8550
        .trainerName = _("RHETT"),
#line 8551
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8552
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8554
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8555
        .doubleBattle = FALSE,
#line 8556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8558
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8560
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8559
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8562
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8563
        .trainerName = _("TYRON"),
#line 8564
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8565
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8567
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8568
        .doubleBattle = FALSE,
#line 8569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8571
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8572
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8575
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8576
        .trainerName = _("CELINA"),
#line 8577
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8578
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8579
F_TRAINER_FEMALE | 
#line 8580
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8581
        .doubleBattle = FALSE,
#line 8582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8584
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8585
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8588
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8589
        .trainerName = _("BIANCA"),
#line 8590
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8591
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8592
F_TRAINER_FEMALE | 
#line 8593
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8594
        .doubleBattle = FALSE,
#line 8595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8597
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8598
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8601
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8602
        .trainerName = _("HAYDEN"),
#line 8603
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8604
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8606
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8607
        .doubleBattle = FALSE,
#line 8608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8610
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8611
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8614
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8615
        .trainerName = _("SOPHIE"),
#line 8616
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8617
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8618
F_TRAINER_FEMALE | 
#line 8619
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8620
        .doubleBattle = FALSE,
#line 8621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8623
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8624
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8627
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8628
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8631
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8632
        .trainerName = _("COBY"),
#line 8633
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8634
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8636
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8637
        .doubleBattle = FALSE,
#line 8638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8640
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8641
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8644
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8645
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8648
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8649
        .trainerName = _("LAWRENCE"),
#line 8650
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8651
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8653
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8654
        .doubleBattle = FALSE,
#line 8655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8657
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8658
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8661
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8662
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8665
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8666
        .trainerName = _("WYATT"),
#line 8667
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8668
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8670
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8671
        .doubleBattle = FALSE,
#line 8672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8674
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8675
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8678
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8679
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8682
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8683
        .trainerName = _("ANGELINA"),
#line 8684
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8685
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8686
F_TRAINER_FEMALE | 
#line 8687
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8688
        .doubleBattle = FALSE,
#line 8689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8691
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8692
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8695
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8696
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8699
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8700
        .trainerName = _("KAI"),
#line 8701
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8702
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8704
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8705
        .doubleBattle = FALSE,
#line 8706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8708
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8709
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8712
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 8713
        .trainerName = _("CHARLOTTE"),
#line 8714
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8715
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8716
F_TRAINER_FEMALE | 
#line 8717
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8718
        .doubleBattle = FALSE,
#line 8719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8721
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8722
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8725
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 8726
        .trainerName = _("DEANDRE"),
#line 8727
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 8728
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 8730
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8731
        .doubleBattle = FALSE,
#line 8732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8734
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8735
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8738
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8739
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8742
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8743
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8746
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 8747
        .trainerName = _("GRUNT"),
#line 8748
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8749
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8751
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8752
        .doubleBattle = FALSE,
#line 8753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8755
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8756
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8759
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 8760
        .trainerName = _("GRUNT"),
#line 8761
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8762
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8764
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8765
        .doubleBattle = FALSE,
#line 8766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8768
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8769
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8772
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 8773
        .trainerName = _("GRUNT"),
#line 8774
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8775
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8777
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8778
        .doubleBattle = FALSE,
#line 8779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8781
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8782
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8785
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 8786
        .trainerName = _("GRUNT"),
#line 8787
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8788
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8790
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8791
        .doubleBattle = FALSE,
#line 8792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8794
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8795
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8798
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8799
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8802
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 8803
        .trainerName = _("GRUNT"),
#line 8804
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8805
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8807
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8808
        .doubleBattle = FALSE,
#line 8809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8811
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8812
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8815
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8816
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8819
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 8820
        .trainerName = _("GRUNT"),
#line 8821
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8822
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8824
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8825
        .doubleBattle = FALSE,
#line 8826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8828
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8829
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8832
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 8833
        .trainerName = _("GRUNT"),
#line 8834
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8835
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8837
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8838
        .doubleBattle = FALSE,
#line 8839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8841
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8842
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8845
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 8846
        .trainerName = _("GRUNT"),
#line 8847
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8848
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8850
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8851
        .doubleBattle = FALSE,
#line 8852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8854
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8855
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8858
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 8859
        .trainerName = _("GRUNT"),
#line 8860
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8861
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8863
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8864
        .doubleBattle = FALSE,
#line 8865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8867
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8868
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8871
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 8872
        .trainerName = _("GRUNT"),
#line 8873
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8874
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8876
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8877
        .doubleBattle = FALSE,
#line 8878
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8880
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8881
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8884
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 8885
        .trainerName = _("GRUNT"),
#line 8886
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8887
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8889
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8890
        .doubleBattle = FALSE,
#line 8891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8893
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8894
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8897
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 8898
        .trainerName = _("GRUNT"),
#line 8899
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8900
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8902
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8903
        .doubleBattle = FALSE,
#line 8904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8906
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8907
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8910
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 8911
        .trainerName = _("GRUNT"),
#line 8912
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8913
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8915
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8916
        .doubleBattle = FALSE,
#line 8917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8919
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8920
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8923
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 8924
        .trainerName = _("GRUNT"),
#line 8925
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8926
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8927
F_TRAINER_FEMALE | 
#line 8928
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8929
        .doubleBattle = FALSE,
#line 8930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8932
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8933
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8936
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 8937
        .trainerName = _("GRUNT"),
#line 8938
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8939
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8940
F_TRAINER_FEMALE | 
#line 8941
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8942
        .doubleBattle = FALSE,
#line 8943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8945
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8946
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8949
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 8950
        .trainerName = _("GRUNT"),
#line 8951
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8952
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8953
F_TRAINER_FEMALE | 
#line 8954
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8955
        .doubleBattle = FALSE,
#line 8956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8958
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8959
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8962
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 8963
        .trainerName = _("TABITHA"),
#line 8964
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8965
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 8967
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8968
        .doubleBattle = FALSE,
#line 8969
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8971
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8971
            .heldItem = ITEM_SITRUS_BERRY,
#line 8974
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8972
            .ability = ABILITY_DROUGHT,
#line 8973
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8975
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 8980
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8980
            .heldItem = ITEM_POISON_BARB,
#line 8983
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8981
            .ability = ABILITY_LEVITATE,
#line 8982
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8984
                MOVE_HEAT_WAVE,
                MOVE_SLUDGE_WAVE,
                MOVE_STRANGE_STEAM,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 8989
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8989
            .heldItem = ITEM_LIFE_ORB,
#line 8992
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8990
            .ability = ABILITY_LEVITATE,
#line 8991
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8993
                MOVE_EARTH_POWER,
                MOVE_EXPANDING_FORCE,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 8998
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8998
            .heldItem = ITEM_FOCUS_SASH,
#line 9001
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8999
            .ability = ABILITY_OWN_TEMPO,
#line 9000
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9002
                MOVE_EARTHQUAKE,
                MOVE_ERUPTION,
                MOVE_YAWN,
                MOVE_FISSURE,
            },
            },
        },
    },
#line 9007
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9008
        .trainerName = _("DARCY"),
#line 9009
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9010
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9011
F_TRAINER_FEMALE | 
#line 9012
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9013
        .items = { ITEM_HYPER_POTION },
#line 9014
        .doubleBattle = FALSE,
#line 9015
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9017
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9018
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9021
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9022
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9025
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9026
        .trainerName = _("MAXIE"),
#line 9027
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9028
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9030
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9031
        .doubleBattle = FALSE,
#line 9032
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9034
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9034
            .heldItem = ITEM_ROCKY_HELMET,
#line 9037
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9035
            .ability = ABILITY_ROCK_HEAD,
#line 9036
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9037
                MOVE_EARTHQUAKE,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BREAKING_SWIPE,
            },
            },
            {
#line 9042
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9042
            .heldItem = ITEM_AIR_BALLOON,
#line 9045
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9043
            .ability = ABILITY_HEAVY_METAL,
#line 9044
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9045
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9050
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .heldItem = ITEM_SHARP_BEAK,
#line 9053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9051
            .ability = ABILITY_INNER_FOCUS,
#line 9052
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9053
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9058
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9059
        .trainerName = _("PETE"),
#line 9060
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9061
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9063
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9064
        .doubleBattle = FALSE,
#line 9065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9067
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9068
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9071
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9072
        .trainerName = _("ISABELLE"),
#line 9073
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9074
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9075
F_TRAINER_FEMALE | 
#line 9076
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9077
        .doubleBattle = FALSE,
#line 9078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9080
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9081
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9084
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9085
        .trainerName = _("ANDRES"),
#line 9086
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9087
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9089
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9090
        .doubleBattle = FALSE,
#line 9091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9093
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9095
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9094
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9097
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9099
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9098
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9101
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9102
        .trainerName = _("JOSUE"),
#line 9103
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9104
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9106
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9107
        .doubleBattle = FALSE,
#line 9108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9110
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9112
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9111
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9114
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9115
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9118
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9119
        .trainerName = _("CAMRON"),
#line 9120
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9121
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9123
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9124
        .doubleBattle = FALSE,
#line 9125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9127
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9128
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9131
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9132
        .trainerName = _("CORY"),
#line 9133
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9134
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9136
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9137
        .doubleBattle = FALSE,
#line 9138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9140
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9141
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9144
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9145
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9148
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9149
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9152
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9153
        .trainerName = _("CAROLINA"),
#line 9154
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9155
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9156
F_TRAINER_FEMALE | 
#line 9157
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9158
        .items = { ITEM_HYPER_POTION },
#line 9159
        .doubleBattle = FALSE,
#line 9160
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9162
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9164
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9163
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9166
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9167
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9170
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9172
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9171
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9174
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9175
        .trainerName = _("ELIJAH"),
#line 9176
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9177
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9179
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9180
        .doubleBattle = FALSE,
#line 9181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9183
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9184
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9187
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9188
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9191
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9192
        .trainerName = _("CELIA"),
#line 9193
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9194
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9195
F_TRAINER_FEMALE | 
#line 9196
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9197
        .doubleBattle = FALSE,
#line 9198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9200
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9201
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9204
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9205
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9208
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9209
        .trainerName = _("BRYAN"),
#line 9210
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9211
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9213
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9214
        .doubleBattle = FALSE,
#line 9215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9217
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9218
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9221
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9222
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9225
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9226
        .trainerName = _("BRANDEN"),
#line 9227
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9228
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9230
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9231
        .doubleBattle = FALSE,
#line 9232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9234
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9235
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9238
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9239
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9242
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9243
        .trainerName = _("BRYANT"),
#line 9244
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9245
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9247
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9248
        .doubleBattle = FALSE,
#line 9249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9251
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9252
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9255
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9256
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9259
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9260
        .trainerName = _("SHAYLA"),
#line 9261
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9262
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9263
F_TRAINER_FEMALE | 
#line 9264
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9265
        .doubleBattle = FALSE,
#line 9266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9268
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9269
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9272
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9273
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9276
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9277
        .trainerName = _("KYRA"),
#line 9278
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9279
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9280
F_TRAINER_FEMALE | 
#line 9281
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9282
        .doubleBattle = FALSE,
#line 9283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9285
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9286
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9289
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9290
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9293
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9294
        .trainerName = _("JAIDEN"),
#line 9295
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9296
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9298
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9299
        .doubleBattle = FALSE,
#line 9300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9302
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9303
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9306
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9307
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9310
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9311
        .trainerName = _("ALIX"),
#line 9312
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9313
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9314
F_TRAINER_FEMALE | 
#line 9315
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9316
        .doubleBattle = FALSE,
#line 9317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9319
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9320
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9323
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9324
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9327
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9328
        .trainerName = _("HELENE"),
#line 9329
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9330
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9331
F_TRAINER_FEMALE | 
#line 9332
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9333
        .doubleBattle = FALSE,
#line 9334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9336
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9337
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9340
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9341
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9344
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9345
        .trainerName = _("MARLENE"),
#line 9346
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9347
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9348
F_TRAINER_FEMALE | 
#line 9349
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9350
        .doubleBattle = FALSE,
#line 9351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9353
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9354
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9357
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9358
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9361
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9362
        .trainerName = _("DEVAN"),
#line 9363
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9364
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9366
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9367
        .doubleBattle = FALSE,
#line 9368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9370
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9371
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9374
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9375
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9378
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9379
        .trainerName = _("JOHNSON"),
#line 9380
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9381
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9383
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9384
        .doubleBattle = FALSE,
#line 9385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9387
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9388
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9391
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9392
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9395
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9396
        .trainerName = _("MELINA"),
#line 9397
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9398
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9399
F_TRAINER_FEMALE | 
#line 9400
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9401
        .doubleBattle = FALSE,
#line 9402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9404
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9405
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9408
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9409
        .trainerName = _("MELISSA"),
#line 9410
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9411
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9412
F_TRAINER_FEMALE | 
#line 9413
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9414
        .doubleBattle = FALSE,
#line 9415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9417
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9418
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9421
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9422
        .trainerName = _("BRANDI"),
#line 9423
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9424
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9425
F_TRAINER_FEMALE | 
#line 9426
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9427
        .doubleBattle = FALSE,
#line 9428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9430
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9431
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9434
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9435
        .trainerName = _("AISHA"),
#line 9436
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9437
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9438
F_TRAINER_FEMALE | 
#line 9439
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9440
        .doubleBattle = FALSE,
#line 9441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9443
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9444
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9447
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9448
        .trainerName = _("MAKAYLA"),
#line 9449
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9450
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9451
F_TRAINER_FEMALE | 
#line 9452
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9453
        .items = { ITEM_HYPER_POTION },
#line 9454
        .doubleBattle = FALSE,
#line 9455
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9457
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9458
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9461
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9462
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9465
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9466
        .trainerName = _("FABIAN"),
#line 9467
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9468
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9470
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9471
        .doubleBattle = FALSE,
#line 9472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9475
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9478
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9479
        .trainerName = _("DAYTON"),
#line 9480
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9481
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9483
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9484
        .doubleBattle = FALSE,
#line 9485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9487
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9488
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9491
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9492
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9495
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9496
        .trainerName = _("RACHEL"),
#line 9497
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9498
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9499
F_TRAINER_FEMALE | 
#line 9500
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9501
        .doubleBattle = FALSE,
#line 9502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9504
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9505
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9508
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9509
        .trainerName = _("LEONEL"),
#line 9510
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9511
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9513
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9514
        .items = { ITEM_HYPER_POTION },
#line 9515
        .doubleBattle = FALSE,
#line 9516
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9518
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9520
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9519
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9522
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9523
        .trainerName = _("CALLIE"),
#line 9524
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9525
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9526
F_TRAINER_FEMALE | 
#line 9527
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9528
        .doubleBattle = FALSE,
#line 9529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9531
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9532
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9535
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9536
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9539
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9540
        .trainerName = _("CALE"),
#line 9541
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9542
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9544
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9545
        .doubleBattle = FALSE,
#line 9546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9548
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9549
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9552
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9553
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9556
    [DIFFICULTY_NORMAL][TRAINER_SONDHEIM] =
    {
#line 9557
        .trainerName = _("SONDHEIM"),
#line 9558
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9559
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9561
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9562
        .doubleBattle = FALSE,
#line 9563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9565
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9566
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9569
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9570
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9573
    [DIFFICULTY_NORMAL][TRAINER_ASHER] =
    {
#line 9574
        .trainerName = _("ASHER"),
#line 9575
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9576
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9578
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9579
        .doubleBattle = FALSE,
#line 9580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9582
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9583
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9586
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9587
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9591
    [DIFFICULTY_NORMAL][TRAINER_BRIDGETTE] =
    {
#line 9592
        .trainerName = _("BRIDGETTE"),
#line 9593
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9594
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9595
F_TRAINER_FEMALE | 
#line 9596
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9597
        .doubleBattle = FALSE,
#line 9598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9600
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9601
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9604
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9605
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9608
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9609
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9612
    [DIFFICULTY_NORMAL][TRAINER_FLAVIA] =
    {
#line 9613
        .trainerName = _("FLAVIA"),
#line 9614
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9615
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9616
F_TRAINER_FEMALE | 
#line 9617
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9618
        .doubleBattle = FALSE,
#line 9619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9621
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9622
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9625
    [DIFFICULTY_NORMAL][TRAINER_OLIVE] =
    {
#line 9626
        .trainerName = _("OLIVE"),
#line 9627
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9628
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9629
F_TRAINER_FEMALE | 
#line 9630
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9631
        .doubleBattle = FALSE,
#line 9632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9634
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9635
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9638
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9639
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9642
    [DIFFICULTY_NORMAL][TRAINER_VIOLA] =
    {
#line 9643
        .trainerName = _("VIOLA"),
#line 9644
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9645
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9646
F_TRAINER_FEMALE | 
#line 9647
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9648
        .doubleBattle = FALSE,
#line 9649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9651
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9652
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9655
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9656
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9660
    [DIFFICULTY_NORMAL][TRAINER_REIJU] =
    {
#line 9661
        .trainerName = _("VIOLA"),
#line 9662
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9663
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9664
F_TRAINER_FEMALE | 
#line 9665
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9666
        .doubleBattle = FALSE,
#line 9667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9669
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9670
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9673
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9674
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9677
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9678
        .trainerName = _("MYLES"),
#line 9679
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9680
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9682
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9683
        .doubleBattle = FALSE,
#line 9684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9686
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9688
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9687
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9690
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9692
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9691
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9694
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9696
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9695
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9698
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9699
        .trainerName = _("PAT"),
#line 9700
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9701
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9702
F_TRAINER_FEMALE | 
#line 9703
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9704
        .doubleBattle = FALSE,
#line 9705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9707
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9709
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9708
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9711
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9713
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9712
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9715
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9717
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9716
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9720
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 9721
        .trainerName = _("CRISTIN"),
#line 9722
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9723
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9724
F_TRAINER_FEMALE | 
#line 9725
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9726
        .items = { ITEM_HYPER_POTION },
#line 9727
        .doubleBattle = FALSE,
#line 9728
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9730
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9732
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9731
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9734
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9736
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9735
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9738
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 9739
        .trainerName = _("GRUNT"),
#line 9740
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9741
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9743
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9744
        .doubleBattle = FALSE,
#line 9745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9747
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9747
            .heldItem = ITEM_EVIOLITE,
#line 9749
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9748
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9750
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 9751
        .trainerName = _("GRUNT"),
#line 9752
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9753
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9755
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9756
        .doubleBattle = FALSE,
#line 9757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9759
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9761
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9760
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9762
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 9763
        .trainerName = _("GRUNT"),
#line 9764
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9765
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9767
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9768
        .doubleBattle = FALSE,
#line 9769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9771
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9772
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9774
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 9775
        .trainerName = _("GRUNT"),
#line 9776
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9777
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9779
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9780
        .doubleBattle = FALSE,
#line 9781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9783
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9784
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9786
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 9787
        .trainerName = _("GRUNT"),
#line 9788
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9789
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9791
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9792
        .doubleBattle = FALSE,
#line 9793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9795
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9797
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9796
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9798
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9800
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9799
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9801
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_1] =
    {
#line 9802
        .trainerName = _("GRUNT"),
#line 9803
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9804
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9806
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9807
        .doubleBattle = FALSE,
#line 9808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9810
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9812
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9811
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9814
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_2] =
    {
#line 9815
        .trainerName = _("GRUNT"),
#line 9816
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9817
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9819
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9820
        .doubleBattle = FALSE,
#line 9821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9823
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9824
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9826
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_3] =
    {
#line 9827
        .trainerName = _("GRUNT"),
#line 9828
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9829
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9831
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9832
        .doubleBattle = FALSE,
#line 9833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9835
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9837
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9836
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9838
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_4] =
    {
#line 9839
        .trainerName = _("GRUNT"),
#line 9840
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9841
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9843
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9844
        .doubleBattle = FALSE,
#line 9845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9847
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9849
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9848
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9850
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9851
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9853
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_5] =
    {
#line 9854
        .trainerName = _("GRUNT"),
#line 9855
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9856
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9858
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9859
        .doubleBattle = FALSE,
#line 9860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9862
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9864
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9863
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9865
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_6] =
    {
#line 9866
        .trainerName = _("GRUNT"),
#line 9867
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9868
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9870
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9871
        .doubleBattle = FALSE,
#line 9872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9874
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9876
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9875
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9877
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9878
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9880
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_7] =
    {
#line 9881
        .trainerName = _("GRUNT"),
#line 9882
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9883
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9885
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9886
        .doubleBattle = FALSE,
#line 9887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9889
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9891
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9890
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9892
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9894
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9893
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9895
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 9896
        .trainerName = _("ANGELO"),
#line 9897
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9898
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9900
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9901
        .doubleBattle = FALSE,
#line 9902
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9904
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9906
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9905
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9908
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9909
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9912
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 9913
        .trainerName = _("DARIUS"),
#line 9914
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9915
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9917
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9918
        .doubleBattle = FALSE,
#line 9919
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9921
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9922
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9925
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 9926
        .trainerName = _("STEVEN"),
#line 9927
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9928
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 9930
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9931
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9932
        .doubleBattle = FALSE,
#line 9933
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9935
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9937
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9936
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9938
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9943
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9944
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9946
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9951
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9953
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9952
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9954
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 9959
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9961
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9960
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9962
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 9967
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9969
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9968
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9970
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 9975
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9975
            .heldItem = ITEM_SITRUS_BERRY,
#line 9977
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9976
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9978
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 9983
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS] =
    {
#line 9984
        .trainerName = _("GHOSTESS"),
#line 9985
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 9986
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 9987
F_TRAINER_FEMALE | 
#line 9988
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9989
        .doubleBattle = FALSE,
#line 9990
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9992
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .heldItem = ITEM_TWISTED_SPOON,
#line 9995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9993
            .ability = ABILITY_THICK_FAT,
#line 9994
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9995
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10000
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10000
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10003
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10001
            .ability = ABILITY_WONDER_SKIN,
#line 10002
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10003
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_PAYBACK,
            },
            },
            {
#line 10008
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10008
            .heldItem = ITEM_METRONOME,
#line 10011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10009
            .ability = ABILITY_ROCK_HEAD,
#line 10010
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10011
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ZEN_HEADBUTT,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10016
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10016
            .heldItem = ITEM_ASSAULT_VEST,
#line 10019
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10017
            .ability = ABILITY_CURSED_BODY,
#line 10018
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10019
                MOVE_SUCKER_PUNCH,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10024
    [DIFFICULTY_NORMAL][TRAINER_JORDAN] =
    {
#line 10025
        .trainerName = _("JORDAN"),
#line 10026
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10027
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10029
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10030
        .doubleBattle = FALSE,
#line 10031
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10033
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10034
            .ability = ABILITY_CHLOROPHYLL,
#line 10035
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10036
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 10041
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10041
            .heldItem = ITEM_EVIOLITE,
#line 10044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10042
            .ability = ABILITY_PRESSURE,
#line 10043
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10044
                MOVE_ZEN_HEADBUTT,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10049
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10049
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10050
            .ability = ABILITY_LIQUID_OOZE,
#line 10051
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10052
                MOVE_GUNK_SHOT,
                MOVE_BULLDOZE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10057
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10057
            .heldItem = ITEM_QUICK_CLAW,
#line 10060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10058
            .ability = ABILITY_OBLIVIOUS,
#line 10059
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10060
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 10065
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10065
            .heldItem = ITEM_SHARP_BEAK,
#line 10068
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10066
            .ability = ABILITY_INNER_FOCUS,
#line 10067
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10068
                MOVE_AERIAL_ACE,
                MOVE_CROSS_POISON,
                MOVE_KNOCK_OFF,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10073
    [DIFFICULTY_NORMAL][TRAINER_JORDAN2] =
    {
#line 10074
        .trainerName = _("JORDAN"),
#line 10075
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10076
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10078
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10079
        .doubleBattle = FALSE,
#line 10080
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10082
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10082
            .heldItem = ITEM_WIDE_LENS,
#line 10085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10083
            .ability = ABILITY_CHLOROPHYLL,
#line 10084
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10085
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10090
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10090
            .heldItem = ITEM_LIFE_ORB,
#line 10093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10091
            .ability = ABILITY_PRESSURE,
#line 10092
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10093
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10098
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10098
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10099
            .ability = ABILITY_LIQUID_OOZE,
#line 10100
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10101
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10106
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10106
            .heldItem = ITEM_CHOICE_SPECS,
#line 10109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10107
            .ability = ABILITY_OBLIVIOUS,
#line 10108
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10109
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 10114
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10114
            .heldItem = ITEM_SHARP_BEAK,
#line 10117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10115
            .ability = ABILITY_INNER_FOCUS,
#line 10116
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10117
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10122
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10122
            .heldItem = ITEM_ASSAULT_VEST,
#line 10125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10123
            .ability = ABILITY_AIR_LOCK,
#line 10124
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10125
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10130
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS2] =
    {
#line 10131
        .trainerName = _("GHOSTESS"),
#line 10132
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10133
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10134
F_TRAINER_FEMALE | 
#line 10135
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10136
        .doubleBattle = FALSE,
#line 10137
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10139
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10139
            .heldItem = ITEM_EXPERT_BELT,
#line 10142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10140
            .ability = ABILITY_THICK_FAT,
#line 10141
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10142
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10147
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .heldItem = ITEM_MUSCLE_BAND,
#line 10150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10148
            .ability = ABILITY_WONDER_SKIN,
#line 10149
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10150
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10155
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10155
            .heldItem = ITEM_WIDE_LENS,
#line 10158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10156
            .ability = ABILITY_INTIMIDATE,
#line 10157
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10158
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10163
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .heldItem = ITEM_ASSAULT_VEST,
#line 10166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10164
            .ability = ABILITY_CURSED_BODY,
#line 10165
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10166
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10171
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_8] =
    {
#line 10172
        .trainerName = _("GRUNT"),
#line 10173
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10174
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10176
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10177
        .doubleBattle = FALSE,
#line 10178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10180
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10181
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10183
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_9] =
    {
#line 10184
        .trainerName = _("GRUNT"),
#line 10185
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10186
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10188
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10189
        .doubleBattle = FALSE,
#line 10190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10192
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10193
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10195
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_10] =
    {
#line 10196
        .trainerName = _("GRUNT"),
#line 10197
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10198
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10200
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10201
        .doubleBattle = FALSE,
#line 10202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10204
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10206
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10205
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10207
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_11] =
    {
#line 10208
        .trainerName = _("GRUNT"),
#line 10209
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10210
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10212
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10213
        .doubleBattle = FALSE,
#line 10214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10216
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10217
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10220
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10221
        .trainerName = _("MARIELA"),
#line 10222
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10223
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10224
F_TRAINER_FEMALE | 
#line 10225
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10226
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10228
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10229
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10232
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10233
        .trainerName = _("ALVARO"),
#line 10234
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10235
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10237
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10238
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10240
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10241
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10244
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10245
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10248
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10249
        .trainerName = _("EVERETT"),
#line 10250
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10251
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10253
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10254
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10256
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10257
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10260
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10261
        .trainerName = _("RED"),
#line 10262
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10263
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10265
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10266
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10268
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10269
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10272
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10273
        .trainerName = _("LEAF"),
#line 10274
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10275
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10276
F_TRAINER_FEMALE | 
#line 10277
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10278
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10280
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10281
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10284
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10285
        .trainerName = _("SAMUEL"),
#line 10286
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10287
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10289
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10290
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10292
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10293
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10296
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10297
        .trainerName = _("MAY"),
#line 10298
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10299
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10300
F_TRAINER_FEMALE | 
#line 10301
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10302
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10304
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10305
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
