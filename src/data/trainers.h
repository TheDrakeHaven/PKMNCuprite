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
        .trainerPic = TRAINER_PIC_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
#line 87
        .trainerPic = TRAINER_PIC_HIKER,
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
            .lvl = 32,
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
            .lvl = 48,
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
            .lvl = 49,
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
            .lvl = 49,
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
            .lvl = 50,
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
            .lvl = 50,
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
            .lvl = 53,
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
            .lvl = 53,
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
            .lvl = 53,
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
            .lvl = 26,
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
            .lvl = 26,
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
            .lvl = 26,
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
            .lvl = 53,
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
            .lvl = 50,
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
            .lvl = 38,
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
            .lvl = 38,
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 48,
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
            .lvl = 50,
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 528
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 528
            .heldItem = ITEM_LEFTOVERS,
#line 531
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 529
            .ability = ABILITY_THICK_FAT,
#line 530
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 532
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_FISSURE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 537
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 537
            .heldItem = ITEM_WISE_GLASSES,
#line 540
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 538
            .ability = ABILITY_SHED_SKIN,
#line 539
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 541
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 546
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 546
            .heldItem = ITEM_EXPERT_BELT,
#line 549
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 547
            .ability = ABILITY_INTIMIDATE,
#line 548
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 550
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_TRAILBLAZE,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 555
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 555
            .heldItem = ITEM_MUSCLE_BAND,
#line 558
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 556
            .ability = ABILITY_WATER_ABSORB,
#line 557
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 559
                MOVE_SEED_BOMB,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_PIN_MISSILE,
            },
            },
        },
    },
#line 564
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 565
        .trainerName = _("ZANDER"),
#line 566
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 567
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 569
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 570
        .doubleBattle = FALSE,
#line 571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 573
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 574
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 577
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 578
        .trainerName = _("SHELLY"),
#line 579
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 580
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 581
F_TRAINER_FEMALE | 
#line 582
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 583
        .doubleBattle = FALSE,
#line 584
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 586
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 586
            .heldItem = ITEM_ROCKY_HELMET,
#line 589
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 587
            .ability = ABILITY_SPEED_BOOST,
#line 588
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 590
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 595
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 595
            .heldItem = ITEM_DAMP_ROCK,
#line 598
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 596
            .ability = ABILITY_STATIC,
#line 597
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 599
                MOVE_THUNDERBOLT,
                MOVE_QUICK_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 604
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 604
            .heldItem = ITEM_CHOICE_BAND,
#line 607
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 605
            .ability = ABILITY_ADAPTABILITY,
#line 606
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 608
                MOVE_RAZOR_SHELL,
                MOVE_CRUNCH,
            },
            },
            {
#line 611
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 611
            .heldItem = ITEM_BLACK_SLUDGE,
#line 614
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 612
            .ability = ABILITY_STICKY_HOLD,
#line 613
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 615
                MOVE_GUNK_SHOT,
                MOVE_DISABLE,
                MOVE_MINIMIZE,
            },
            },
            {
#line 619
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .heldItem = ITEM_SHARP_BEAK,
#line 622
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 620
            .ability = ABILITY_INNER_FOCUS,
#line 621
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 623
                MOVE_AIR_CUTTER,
                MOVE_VENOSHOCK,
                MOVE_HAZE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 628
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 629
        .trainerName = _("SHELLY"),
#line 630
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 631
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 632
F_TRAINER_FEMALE | 
#line 633
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 634
        .doubleBattle = FALSE,
#line 635
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 637
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .heldItem = ITEM_ROCKY_HELMET,
#line 640
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 638
            .ability = ABILITY_SPEED_BOOST,
#line 639
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 641
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 646
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 646
            .heldItem = ITEM_DAMP_ROCK,
#line 649
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 647
            .ability = ABILITY_STATIC,
#line 648
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 650
                MOVE_THUNDER_WAVE,
                MOVE_VOLT_SWITCH,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 655
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 655
            .heldItem = ITEM_FOCUS_BAND,
#line 658
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 656
            .ability = ABILITY_ADAPTABILITY,
#line 657
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 659
                MOVE_CRABHAMMER,
                MOVE_CRUNCH,
            },
            },
            {
#line 662
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .heldItem = ITEM_BLACK_SLUDGE,
#line 665
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 663
            .ability = ABILITY_STICKY_HOLD,
#line 664
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 666
                MOVE_GUNK_SHOT,
                MOVE_TOXIC,
                MOVE_MINIMIZE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 671
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .heldItem = ITEM_SHARP_BEAK,
#line 674
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 672
            .ability = ABILITY_INNER_FOCUS,
#line 673
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_AIR_SLASH,
                MOVE_VENOSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_CONFUSE_RAY,
            },
            },
        },
    },
#line 680
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 681
        .trainerName = _("ARCHIE"),
#line 682
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 683
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 685
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 686
        .doubleBattle = FALSE,
#line 687
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 689
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 689
            .heldItem = ITEM_DAMP_ROCK,
#line 692
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 690
            .ability = ABILITY_WATER_ABSORB,
#line 691
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 693
                MOVE_ENERGY_BALL,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 698
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 698
            .heldItem = ITEM_MUSCLE_BAND,
#line 701
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 699
            .ability = ABILITY_SPEED_BOOST,
#line 700
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 702
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_EARTHQUAKE,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 707
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 707
            .heldItem = ITEM_STICKY_BARB,
#line 710
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 708
            .ability = ABILITY_SHED_SKIN,
#line 709
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 711
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 716
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 716
            .heldItem = ITEM_CHOICE_SPECS,
#line 719
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 717
            .ability = ABILITY_VOLT_ABSORB,
#line 718
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 720
                MOVE_HYDRO_PUMP,
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 726
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 726
            .heldItem = ITEM_LEFTOVERS,
#line 729
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 727
            .ability = ABILITY_OBLIVIOUS,
#line 728
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 730
                MOVE_BLIZZARD,
                MOVE_SURF,
                MOVE_YAWN,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 735
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 736
        .trainerName = _("LEAH"),
#line 737
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 738
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 739
F_TRAINER_FEMALE | 
#line 740
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 741
        .doubleBattle = FALSE,
#line 742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 744
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 745
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 748
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 749
        .trainerName = _("DAISY"),
#line 750
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 751
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 752
F_TRAINER_FEMALE | 
#line 753
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 754
        .doubleBattle = FALSE,
#line 755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 757
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 758
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 761
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 762
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 765
    [DIFFICULTY_NORMAL][TRAINER_ROSE] =
    {
#line 766
        .trainerName = _("ROSE"),
#line 767
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 768
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 769
F_TRAINER_FEMALE | 
#line 770
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 771
        .doubleBattle = FALSE,
#line 772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 774
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 775
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 778
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 779
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 782
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 783
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 788
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 789
        .trainerName = _("FELIX"),
#line 790
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 791
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 793
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 794
        .items = { ITEM_FULL_RESTORE },
#line 795
        .doubleBattle = FALSE,
#line 796
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 798
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 799
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 802
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 803
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 807
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 808
        .trainerName = _("VIOLET"),
#line 809
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 810
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 811
F_TRAINER_FEMALE | 
#line 812
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 813
        .doubleBattle = FALSE,
#line 814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 816
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 817
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 820
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 821
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 824
    [DIFFICULTY_NORMAL][TRAINER_DUSTY] =
    {
#line 825
        .trainerName = _("DUSTY"),
#line 826
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 827
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 829
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 830
        .doubleBattle = FALSE,
#line 831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 833
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 835
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 834
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 837
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 838
        .trainerName = _("CHIP"),
#line 839
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 840
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 842
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 843
        .doubleBattle = FALSE,
#line 844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 846
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 848
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 847
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 850
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 852
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 851
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 854
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 856
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 855
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 858
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 859
        .trainerName = _("FOSTER"),
#line 860
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 861
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 863
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 864
        .doubleBattle = FALSE,
#line 865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 867
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 869
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 868
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 871
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 873
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 872
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 875
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY] =
    {
#line 876
        .trainerName = _("GABBY & TY"),
#line 877
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 878
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 880
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 881
        .doubleBattle = TRUE,
#line 882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 884
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 886
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 885
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 888
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 890
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 889
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 892
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 893
        .trainerName = _("GABBY & TY"),
#line 894
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 895
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 897
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 898
        .doubleBattle = TRUE,
#line 899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 901
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 903
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 902
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 905
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 907
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 906
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 910
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 911
        .trainerName = _("LOLA"),
#line 912
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 913
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 914
F_TRAINER_FEMALE | 
#line 915
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 916
        .doubleBattle = FALSE,
#line 917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 919
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 921
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 920
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 923
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 925
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 924
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 927
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 928
        .trainerName = _("AUSTINA"),
#line 929
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 930
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 931
F_TRAINER_FEMALE | 
#line 932
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 933
        .doubleBattle = FALSE,
#line 934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 936
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 937
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 940
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 941
        .trainerName = _("GWEN"),
#line 942
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 943
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 944
F_TRAINER_FEMALE | 
#line 945
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 946
        .doubleBattle = FALSE,
#line 947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 949
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 950
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 953
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 954
        .trainerName = _("RICKY"),
#line 955
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 956
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 958
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 959
        .doubleBattle = FALSE,
#line 960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 962
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 964
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 963
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 966
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 967
        .trainerName = _("SIMON"),
#line 968
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 969
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 971
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 972
        .doubleBattle = FALSE,
#line 973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 975
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 976
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 979
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 980
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 983
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 984
        .trainerName = _("CHARLIE"),
#line 985
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 986
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 988
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 989
        .doubleBattle = FALSE,
#line 990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 992
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 993
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 996
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 997
        .trainerName = _("RANDALL"),
#line 998
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 999
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1001
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1002
        .items = { ITEM_HYPER_POTION },
#line 1003
        .doubleBattle = FALSE,
#line 1004
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1006
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1007
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1010
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 1011
        .trainerName = _("PARKER"),
#line 1012
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1013
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1015
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1016
        .items = { ITEM_HYPER_POTION },
#line 1017
        .doubleBattle = FALSE,
#line 1018
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1020
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1021
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1024
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 1025
        .trainerName = _("GEORGE"),
#line 1026
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1027
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1029
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1030
        .items = { ITEM_HYPER_POTION },
#line 1031
        .doubleBattle = FALSE,
#line 1032
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1034
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1034
            .heldItem = ITEM_SITRUS_BERRY,
#line 1036
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1035
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1038
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1039
        .trainerName = _("BERKE"),
#line 1040
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1041
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1043
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1044
        .items = { ITEM_HYPER_POTION },
#line 1045
        .doubleBattle = FALSE,
#line 1046
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1048
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1049
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1052
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1053
        .trainerName = _("BRAXTON"),
#line 1054
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1055
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1057
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1058
        .items = { ITEM_HYPER_POTION },
#line 1059
        .doubleBattle = FALSE,
#line 1060
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1062
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1064
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1063
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1066
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1068
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1067
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1070
            .species = SPECIES_GLACEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1071
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1074
            .species = SPECIES_SAWSBUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1076
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1075
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1078
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1080
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1079
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1082
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1083
        .trainerName = _("VINCENT"),
#line 1084
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1085
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1087
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1088
        .items = { ITEM_FULL_RESTORE },
#line 1089
        .doubleBattle = FALSE,
#line 1090
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1092
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1094
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1093
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1096
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1098
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1097
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1100
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1101
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1104
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1105
        .trainerName = _("LEROY"),
#line 1106
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1107
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1109
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1110
        .items = { ITEM_FULL_RESTORE },
#line 1111
        .doubleBattle = FALSE,
#line 1112
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1114
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1115
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1118
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1119
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1122
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 1123
        .trainerName = _("WILTON"),
#line 1124
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1125
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1127
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1128
        .items = { ITEM_SUPER_POTION },
#line 1129
        .doubleBattle = FALSE,
#line 1130
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1132
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1134
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1133
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1136
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1138
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1137
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1140
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1142
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1141
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1144
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1145
        .trainerName = _("EDGAR"),
#line 1146
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1147
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1149
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1150
        .items = { ITEM_FULL_RESTORE },
#line 1151
        .doubleBattle = FALSE,
#line 1152
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1154
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1155
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1158
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1160
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1159
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1162
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1163
        .trainerName = _("ALBERT"),
#line 1164
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1165
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1167
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1168
        .items = { ITEM_FULL_RESTORE },
#line 1169
        .doubleBattle = FALSE,
#line 1170
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1172
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1174
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1173
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1176
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1178
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1177
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1180
    [DIFFICULTY_NORMAL][TRAINER_SAMMY] =
    {
#line 1181
        .trainerName = _("SAMMY"),
#line 1182
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1183
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1185
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1186
        .items = { ITEM_FULL_RESTORE },
#line 1187
        .doubleBattle = FALSE,
#line 1188
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1190
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1192
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1191
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1194
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1195
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1198
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1200
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1199
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1202
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1203
        .trainerName = _("VITO"),
#line 1204
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1205
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1207
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1208
        .items = { ITEM_FULL_RESTORE },
#line 1209
        .doubleBattle = FALSE,
#line 1210
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1212
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1214
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1213
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1216
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1218
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1217
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1220
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1222
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1221
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1224
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1226
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1225
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1228
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1229
        .trainerName = _("OWEN"),
#line 1230
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1231
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1233
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1234
        .items = { ITEM_FULL_RESTORE },
#line 1235
        .doubleBattle = FALSE,
#line 1236
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1238
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1240
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1239
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1242
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1244
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1243
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1246
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1248
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1247
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1250
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1251
        .trainerName = _("WARREN"),
#line 1252
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1253
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1255
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1256
        .items = { ITEM_FULL_RESTORE },
#line 1257
        .doubleBattle = FALSE,
#line 1258
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1260
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1262
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1261
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1264
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1266
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1265
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1268
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1269
        .trainerName = _("MARY"),
#line 1270
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1271
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1272
F_TRAINER_FEMALE | 
#line 1273
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1274
        .items = { ITEM_HYPER_POTION },
#line 1275
        .doubleBattle = FALSE,
#line 1276
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1278
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1279
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1283
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1284
        .trainerName = _("ALEXIA"),
#line 1285
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1286
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1287
F_TRAINER_FEMALE | 
#line 1288
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1289
        .items = { ITEM_HYPER_POTION },
#line 1290
        .doubleBattle = FALSE,
#line 1291
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1293
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1294
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1297
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1298
        .trainerName = _("JODY"),
#line 1299
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1300
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1301
F_TRAINER_FEMALE | 
#line 1302
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1303
        .items = { ITEM_HYPER_POTION },
#line 1304
        .doubleBattle = FALSE,
#line 1305
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1307
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1309
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1308
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1310
                MOVE_SWORDS_DANCE,
                MOVE_DRAIN_PUNCH,
            },
            },
        },
    },
#line 1313
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1314
        .trainerName = _("WENDY"),
#line 1315
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1316
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1317
F_TRAINER_FEMALE | 
#line 1318
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1319
        .items = { ITEM_FULL_RESTORE },
#line 1320
        .doubleBattle = FALSE,
#line 1321
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1323
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1325
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1324
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1327
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1329
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1328
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1331
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1333
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1332
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1335
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1336
        .trainerName = _("KEIRA"),
#line 1337
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1338
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1339
F_TRAINER_FEMALE | 
#line 1340
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1341
        .items = { ITEM_FULL_RESTORE },
#line 1342
        .doubleBattle = FALSE,
#line 1343
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1345
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1347
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1346
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1349
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1351
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1350
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1353
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 1354
        .trainerName = _("BROOKE"),
#line 1355
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1356
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1357
F_TRAINER_FEMALE | 
#line 1358
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1359
        .items = { ITEM_SUPER_POTION },
#line 1360
        .doubleBattle = FALSE,
#line 1361
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1363
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1365
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1364
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1367
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1369
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1368
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1371
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1373
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1372
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1375
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1376
        .trainerName = _("JENNIFER"),
#line 1377
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1378
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1379
F_TRAINER_FEMALE | 
#line 1380
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1381
        .items = { ITEM_FULL_RESTORE },
#line 1382
        .doubleBattle = FALSE,
#line 1383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1385
            .species = SPECIES_DUOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1387
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1386
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1389
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1390
        .trainerName = _("HOPE"),
#line 1391
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1392
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1393
F_TRAINER_FEMALE | 
#line 1394
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1395
        .items = { ITEM_FULL_RESTORE },
#line 1396
        .doubleBattle = FALSE,
#line 1397
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1399
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1401
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1400
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1403
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1404
        .trainerName = _("SHANNON"),
#line 1405
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1406
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1407
F_TRAINER_FEMALE | 
#line 1408
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1409
        .items = { ITEM_FULL_RESTORE },
#line 1410
        .doubleBattle = FALSE,
#line 1411
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1413
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1415
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1414
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1417
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1418
        .trainerName = _("MICHELLE"),
#line 1419
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1420
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1421
F_TRAINER_FEMALE | 
#line 1422
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1423
        .items = { ITEM_FULL_RESTORE },
#line 1424
        .doubleBattle = FALSE,
#line 1425
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1427
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1429
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1428
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1431
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1433
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1432
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1435
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1437
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1436
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1439
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1440
        .trainerName = _("CAROLINE"),
#line 1441
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1442
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1443
F_TRAINER_FEMALE | 
#line 1444
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1445
        .items = { ITEM_FULL_RESTORE },
#line 1446
        .doubleBattle = FALSE,
#line 1447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1449
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1451
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1450
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1453
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1455
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1454
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1457
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1458
        .trainerName = _("JULIE"),
#line 1459
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1460
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1461
F_TRAINER_FEMALE | 
#line 1462
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1463
        .items = { ITEM_FULL_RESTORE },
#line 1464
        .doubleBattle = FALSE,
#line 1465
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1467
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1469
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1468
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1471
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1473
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1472
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1475
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1476
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1479
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1480
        .trainerName = _("PATRICIA"),
#line 1481
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1482
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1483
F_TRAINER_FEMALE | 
#line 1484
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1485
        .doubleBattle = FALSE,
#line 1486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1488
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1489
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1492
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1493
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1496
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1497
        .trainerName = _("KINDRA"),
#line 1498
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1499
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1500
F_TRAINER_FEMALE | 
#line 1501
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1502
        .doubleBattle = FALSE,
#line 1503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1505
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1506
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1509
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1510
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1513
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1514
        .trainerName = _("TAMMY"),
#line 1515
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1516
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1517
F_TRAINER_FEMALE | 
#line 1518
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1519
        .doubleBattle = FALSE,
#line 1520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1522
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1523
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1526
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1527
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1530
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 1531
        .trainerName = _("VALERIE"),
#line 1532
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1533
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1534
F_TRAINER_FEMALE | 
#line 1535
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1536
        .doubleBattle = FALSE,
#line 1537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1539
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1540
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1543
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1544
        .trainerName = _("TASHA"),
#line 1545
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1546
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1547
F_TRAINER_FEMALE | 
#line 1548
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1549
        .doubleBattle = FALSE,
#line 1550
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1552
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1554
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1553
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1556
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 1557
        .trainerName = _("CINDY"),
#line 1558
        .trainerClass = TRAINER_CLASS_LADY,
#line 1559
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1560
F_TRAINER_FEMALE | 
#line 1561
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1562
        .items = { ITEM_FULL_RESTORE },
#line 1563
        .doubleBattle = FALSE,
#line 1564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1566
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1566
            .heldItem = ITEM_NUGGET,
#line 1568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1567
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1570
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1571
        .trainerName = _("DAPHNE"),
#line 1572
        .trainerClass = TRAINER_CLASS_LADY,
#line 1573
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1574
F_TRAINER_FEMALE | 
#line 1575
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1576
        .items = { ITEM_FULL_RESTORE },
#line 1577
        .doubleBattle = FALSE,
#line 1578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1580
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1580
            .heldItem = ITEM_FOCUS_SASH,
#line 1582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1581
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1584
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1584
            .heldItem = ITEM_FOCUS_SASH,
#line 1586
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1585
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1588
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1589
        .trainerName = _("GRUNT"),
#line 1590
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1591
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1593
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1594
        .doubleBattle = FALSE,
#line 1595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1597
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1598
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1601
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1602
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1605
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1606
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1609
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1610
        .trainerName = _("SHEILA"),
#line 1611
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1612
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1613
F_TRAINER_FEMALE | 
#line 1614
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1615
        .doubleBattle = FALSE,
#line 1616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1618
            .species = SPECIES_ZEBSTRIKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1619
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1622
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1623
        .trainerName = _("SHIRLEY"),
#line 1624
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1625
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1626
F_TRAINER_FEMALE | 
#line 1627
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1628
        .doubleBattle = FALSE,
#line 1629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1631
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1632
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1635
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 1636
        .trainerName = _("JESSICA"),
#line 1637
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1638
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1639
F_TRAINER_FEMALE | 
#line 1640
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1641
        .doubleBattle = FALSE,
#line 1642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1644
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1645
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1648
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1649
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1653
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1654
        .trainerName = _("CONNIE"),
#line 1655
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1656
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1657
F_TRAINER_FEMALE | 
#line 1658
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1659
        .doubleBattle = FALSE,
#line 1660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1662
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1664
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1663
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1666
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1667
        .trainerName = _("BRIDGET"),
#line 1668
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1669
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1670
F_TRAINER_FEMALE | 
#line 1671
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1672
        .doubleBattle = FALSE,
#line 1673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1675
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1677
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1676
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1679
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1680
        .trainerName = _("OLIVIA"),
#line 1681
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1682
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1683
F_TRAINER_FEMALE | 
#line 1684
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1685
        .doubleBattle = FALSE,
#line 1686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1688
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1690
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1689
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1692
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1694
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1693
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1696
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1698
            .iv = TRAINER_PARTY_IVS(12, 31, 12, 12, 12, 12),
#line 1697
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1700
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1701
        .trainerName = _("TIFFANY"),
#line 1702
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1703
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1704
F_TRAINER_FEMALE | 
#line 1705
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1706
        .doubleBattle = FALSE,
#line 1707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1709
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1711
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1710
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1713
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1715
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1714
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1717
    [DIFFICULTY_NORMAL][TRAINER_WINSTON] =
    {
#line 1718
        .trainerName = _("WINSTON"),
#line 1719
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1720
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1722
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1723
        .items = { ITEM_FULL_RESTORE },
#line 1724
        .doubleBattle = FALSE,
#line 1725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1727
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1727
            .heldItem = ITEM_NUGGET,
#line 1729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1728
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1731
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1732
        .trainerName = _("MOLLIE"),
#line 1733
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1734
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1735
F_TRAINER_FEMALE | 
#line 1736
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1737
        .doubleBattle = FALSE,
#line 1738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1740
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1741
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1744
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1746
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1745
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1748
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1749
        .trainerName = _("GARRET"),
#line 1750
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1751
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1753
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1754
        .items = { ITEM_FULL_RESTORE },
#line 1755
        .doubleBattle = FALSE,
#line 1756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1758
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1758
            .heldItem = ITEM_NUGGET,
#line 1760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1759
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1762
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1763
        .trainerName = _("STEVE"),
#line 1764
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1765
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1767
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1768
        .doubleBattle = FALSE,
#line 1769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1771
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1772
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1775
    [DIFFICULTY_NORMAL][TRAINER_THALIA] =
    {
#line 1776
        .trainerName = _("THALIA"),
#line 1777
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1778
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1779
F_TRAINER_FEMALE | 
#line 1780
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1781
        .doubleBattle = FALSE,
#line 1782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1784
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1785
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1788
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1789
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1792
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 1793
        .trainerName = _("MARCUS"),
#line 1794
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1795
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1797
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1798
        .doubleBattle = FALSE,
#line 1799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1801
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1802
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1805
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1806
        .trainerName = _("GRUNT"),
#line 1807
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1808
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1809
F_TRAINER_FEMALE | 
#line 1810
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1811
        .doubleBattle = FALSE,
#line 1812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1814
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1815
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1818
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1819
        .trainerName = _("LUIS"),
#line 1820
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1821
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1823
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1824
        .doubleBattle = FALSE,
#line 1825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1827
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1828
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1831
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1832
        .trainerName = _("DOMINIK"),
#line 1833
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1834
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1836
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1837
        .doubleBattle = FALSE,
#line 1838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1840
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1841
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1844
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1845
        .trainerName = _("DOUGLAS"),
#line 1846
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1847
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1849
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1850
        .doubleBattle = FALSE,
#line 1851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1853
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1855
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1854
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1857
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1859
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1858
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1861
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1862
        .trainerName = _("DARRIN"),
#line 1863
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1864
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1866
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1867
        .doubleBattle = FALSE,
#line 1868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1870
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1872
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1871
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1874
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1876
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1875
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1878
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1880
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1879
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1882
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 1883
        .trainerName = _("TONY"),
#line 1884
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1885
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1887
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1888
        .doubleBattle = FALSE,
#line 1889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1891
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1892
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1895
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1896
        .trainerName = _("JEROME"),
#line 1897
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1898
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1900
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1901
        .doubleBattle = FALSE,
#line 1902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1904
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1905
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1908
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 1909
        .trainerName = _("MATTI"),
#line 1910
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1911
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1913
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1914
        .doubleBattle = FALSE,
#line 1915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1917
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1918
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1921
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 1922
        .trainerName = _("DAVID"),
#line 1923
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1924
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1926
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1927
        .doubleBattle = FALSE,
#line 1928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1930
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1931
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1934
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1935
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1938
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 1939
        .trainerName = _("SPENCER"),
#line 1940
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1941
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1943
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1944
        .doubleBattle = FALSE,
#line 1945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1947
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1948
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1951
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1952
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1955
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 1956
        .trainerName = _("ROLAND"),
#line 1957
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1958
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1960
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1961
        .doubleBattle = FALSE,
#line 1962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1964
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1965
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1968
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 1969
        .trainerName = _("NOLEN"),
#line 1970
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1971
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1973
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1974
        .doubleBattle = FALSE,
#line 1975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1977
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1978
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1981
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 1982
        .trainerName = _("STAN"),
#line 1983
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1984
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1986
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1987
        .doubleBattle = FALSE,
#line 1988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1990
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1991
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1994
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 1995
        .trainerName = _("BARRY"),
#line 1996
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1997
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1999
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2000
        .doubleBattle = FALSE,
#line 2001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2003
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2004
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2007
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2008
        .trainerName = _("DEAN"),
#line 2009
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2010
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2012
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2013
        .doubleBattle = FALSE,
#line 2014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2016
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2017
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2020
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2021
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2024
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2025
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2028
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2029
        .trainerName = _("RODNEY"),
#line 2030
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2031
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2033
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2034
        .doubleBattle = FALSE,
#line 2035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2037
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2038
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2041
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2042
        .trainerName = _("RICHARD"),
#line 2043
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2044
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2046
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2047
        .doubleBattle = FALSE,
#line 2048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2050
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2051
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2054
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2055
        .trainerName = _("HERMAN"),
#line 2056
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2057
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2059
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2060
        .doubleBattle = FALSE,
#line 2061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2063
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2064
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2067
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2068
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2071
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2072
        .trainerName = _("SANTIAGO"),
#line 2073
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2074
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2076
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2077
        .doubleBattle = FALSE,
#line 2078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2080
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2081
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2084
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2085
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2088
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2089
        .trainerName = _("GILBERT"),
#line 2090
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2091
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2093
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2094
        .doubleBattle = FALSE,
#line 2095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2097
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2098
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2101
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2102
        .trainerName = _("FRANKLIN"),
#line 2103
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2104
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2106
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2107
        .doubleBattle = FALSE,
#line 2108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2110
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2111
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2114
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2115
        .trainerName = _("KEVIN"),
#line 2116
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2117
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2119
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2120
        .doubleBattle = FALSE,
#line 2121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2123
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2124
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2127
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2128
        .trainerName = _("JACK"),
#line 2129
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2130
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2132
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2133
        .doubleBattle = FALSE,
#line 2134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2136
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2137
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2140
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2141
        .trainerName = _("DUDLEY"),
#line 2142
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2143
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2145
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2146
        .doubleBattle = FALSE,
#line 2147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2149
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2150
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2153
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2154
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2157
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2158
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2161
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2162
        .trainerName = _("CHAD"),
#line 2163
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2164
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2166
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2167
        .doubleBattle = FALSE,
#line 2168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2170
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2171
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2174
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2175
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2178
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2179
        .trainerName = _("TAKAO"),
#line 2180
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2181
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2183
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2184
        .doubleBattle = FALSE,
#line 2185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2187
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2189
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2188
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2191
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2192
        .trainerName = _("HITOSHI"),
#line 2193
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2194
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2196
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2197
        .doubleBattle = FALSE,
#line 2198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2200
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2202
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2201
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2204
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2206
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2205
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2208
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2209
        .trainerName = _("KIYO"),
#line 2210
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2211
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2213
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2214
        .doubleBattle = FALSE,
#line 2215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2217
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2219
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2218
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2221
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2222
        .trainerName = _("KOICHI"),
#line 2223
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2224
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2226
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2227
        .doubleBattle = FALSE,
#line 2228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2230
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2231
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2234
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2236
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2235
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2238
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 2239
        .trainerName = _("NOB"),
#line 2240
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2241
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2243
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2244
        .doubleBattle = FALSE,
#line 2245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2247
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2248
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2251
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2252
        .trainerName = _("YUJI"),
#line 2253
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2254
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2256
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2257
        .doubleBattle = FALSE,
#line 2258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2260
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2262
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2261
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2264
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2266
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2265
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2268
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2269
        .trainerName = _("DAISUKE"),
#line 2270
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2271
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2273
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2274
        .doubleBattle = FALSE,
#line 2275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2277
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2279
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2278
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2281
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2282
        .trainerName = _("ATSUSHI"),
#line 2283
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2284
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2286
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2287
        .doubleBattle = FALSE,
#line 2288
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2290
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2292
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2291
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2294
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2295
        .trainerName = _("KIRK"),
#line 2296
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2297
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2299
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2300
        .doubleBattle = FALSE,
#line 2301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2303
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2305
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2304
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2307
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2309
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2308
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2311
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2312
        .trainerName = _("GRUNT"),
#line 2313
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2314
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2315
F_TRAINER_FEMALE | 
#line 2316
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2317
        .doubleBattle = FALSE,
#line 2318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2320
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2321
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2324
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2325
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2328
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2329
        .trainerName = _("GRUNT"),
#line 2330
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2331
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2333
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2334
        .doubleBattle = FALSE,
#line 2335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2337
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2338
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2341
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2342
        .trainerName = _("SHAWN"),
#line 2343
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2344
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2346
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2347
        .doubleBattle = FALSE,
#line 2348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2350
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2352
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2351
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2354
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2356
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2355
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2358
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO] =
    {
#line 2359
        .trainerName = _("FERNANDO"),
#line 2360
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2361
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2363
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2364
        .doubleBattle = FALSE,
#line 2365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2367
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2368
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2371
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2372
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2375
    [DIFFICULTY_NORMAL][TRAINER_DALTON] =
    {
#line 2376
        .trainerName = _("DALTON"),
#line 2377
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2378
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2380
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2381
        .doubleBattle = FALSE,
#line 2382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2384
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2385
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2388
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2389
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2392
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2393
        .trainerName = _("COLE"),
#line 2394
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2395
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2397
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2398
        .doubleBattle = FALSE,
#line 2399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2401
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2403
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2402
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2405
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2406
        .trainerName = _("JEFF"),
#line 2407
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2408
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2410
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2411
        .doubleBattle = FALSE,
#line 2412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2414
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2416
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2415
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2418
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2420
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2419
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2422
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2423
        .trainerName = _("AXLE"),
#line 2424
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2425
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2427
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2428
        .doubleBattle = FALSE,
#line 2429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2431
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2433
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2432
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2434
                MOVE_DRAGON_PULSE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2438
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2439
        .trainerName = _("JACE"),
#line 2440
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2441
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2443
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2444
        .doubleBattle = FALSE,
#line 2445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2447
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2449
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2448
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2451
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2452
        .trainerName = _("KEEGAN"),
#line 2453
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2454
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2456
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2457
        .doubleBattle = FALSE,
#line 2458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2460
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2462
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2461
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2463
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_BREATH,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 2467
    [DIFFICULTY_NORMAL][TRAINER_BERNIE] =
    {
#line 2468
        .trainerName = _("BERNIE"),
#line 2469
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2470
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2472
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2473
        .doubleBattle = FALSE,
#line 2474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2476
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2477
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2480
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2481
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2484
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2485
        .trainerName = _("DREW"),
#line 2486
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2487
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2489
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2490
        .doubleBattle = FALSE,
#line 2491
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2493
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2494
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2497
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2498
        .trainerName = _("BEAU"),
#line 2499
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2500
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2502
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2503
        .doubleBattle = FALSE,
#line 2504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2506
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2507
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2510
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2511
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2514
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2515
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2519
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2520
        .trainerName = _("LARRY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2528
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2529
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2532
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2533
        .trainerName = _("SHANE"),
#line 2534
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2535
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2537
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2538
        .doubleBattle = FALSE,
#line 2539
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2541
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2542
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2545
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2546
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2549
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2550
        .trainerName = _("JUSTIN"),
#line 2551
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2552
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2554
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2555
        .doubleBattle = FALSE,
#line 2556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2558
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2559
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2562
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2563
        .trainerName = _("ETHAN"),
#line 2564
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2565
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2567
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2568
        .doubleBattle = FALSE,
#line 2569
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2571
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2572
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2575
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2576
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2579
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2580
        .trainerName = _("AUTUMN"),
#line 2581
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2582
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2583
F_TRAINER_FEMALE | 
#line 2584
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2585
        .doubleBattle = FALSE,
#line 2586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2588
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2589
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2592
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2593
        .trainerName = _("TRAVIS"),
#line 2594
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2595
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2597
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2598
        .doubleBattle = FALSE,
#line 2599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2601
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2602
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2605
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2606
        .trainerName = _("BRENT"),
#line 2607
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2608
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2610
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2611
        .doubleBattle = FALSE,
#line 2612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2614
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2616
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2615
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2618
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2619
        .trainerName = _("DONALD"),
#line 2620
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2621
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2623
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2624
        .doubleBattle = FALSE,
#line 2625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2627
            .species = SPECIES_WATCHOG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2629
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2628
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2631
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2633
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2632
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2635
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2636
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2639
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2640
        .trainerName = _("TAYLOR"),
#line 2641
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2642
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2644
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2645
        .doubleBattle = FALSE,
#line 2646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2648
            .species = SPECIES_CRUSTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2649
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2652
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2653
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2656
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2658
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2657
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2660
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 2661
        .trainerName = _("JEFFREY"),
#line 2662
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2663
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2665
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2666
        .doubleBattle = FALSE,
#line 2667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2669
            .species = SPECIES_BEHEEYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2670
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2673
            .species = SPECIES_VESPIQUEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2674
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2677
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2678
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2681
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2682
        .trainerName = _("DEREK"),
#line 2683
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2684
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2686
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2687
        .doubleBattle = FALSE,
#line 2688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2690
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2692
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2691
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2694
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2696
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2695
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2698
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2699
        .trainerName = _("EDWARD"),
#line 2700
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2701
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2703
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2704
        .doubleBattle = FALSE,
#line 2705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2707
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2708
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2711
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2712
        .trainerName = _("PRESTON"),
#line 2713
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2714
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2716
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2717
        .doubleBattle = FALSE,
#line 2718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2720
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2722
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2721
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2724
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2725
        .trainerName = _("VIRGIL"),
#line 2726
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2727
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2729
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2730
        .doubleBattle = FALSE,
#line 2731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2733
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2734
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2737
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2738
        .trainerName = _("BLAKE"),
#line 2739
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2740
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2742
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2743
        .doubleBattle = FALSE,
#line 2744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2746
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2747
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2750
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2751
        .trainerName = _("WILLIAM"),
#line 2752
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2753
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2755
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2756
        .doubleBattle = FALSE,
#line 2757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2759
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2760
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2763
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2764
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2767
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2768
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2771
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2772
        .trainerName = _("JOSHUA"),
#line 2773
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2774
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2776
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2777
        .doubleBattle = FALSE,
#line 2778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2780
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2781
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2784
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2785
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2788
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 2789
        .trainerName = _("CAMERON"),
#line 2790
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2791
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2793
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2794
        .doubleBattle = FALSE,
#line 2795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2797
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2798
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2801
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2802
        .trainerName = _("JACLYN"),
#line 2803
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2804
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2805
F_TRAINER_FEMALE | 
#line 2806
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2807
        .doubleBattle = FALSE,
#line 2808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2810
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2811
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2814
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2815
        .trainerName = _("HANNAH"),
#line 2816
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2817
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2818
F_TRAINER_FEMALE | 
#line 2819
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2820
        .doubleBattle = FALSE,
#line 2821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2823
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2825
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2824
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2827
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2828
        .trainerName = _("SAMANTHA"),
#line 2829
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2830
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2831
F_TRAINER_FEMALE | 
#line 2832
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2833
        .doubleBattle = FALSE,
#line 2834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2836
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2837
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2840
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2841
        .trainerName = _("MAURA"),
#line 2842
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2843
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2844
F_TRAINER_FEMALE | 
#line 2845
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2846
        .doubleBattle = FALSE,
#line 2847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2849
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2851
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2850
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2853
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2854
        .trainerName = _("KAYLA"),
#line 2855
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2856
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2857
F_TRAINER_FEMALE | 
#line 2858
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2859
        .doubleBattle = FALSE,
#line 2860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2862
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2863
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2866
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2867
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2870
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2871
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2874
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2875
        .trainerName = _("ALEXIS"),
#line 2876
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2877
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2878
F_TRAINER_FEMALE | 
#line 2879
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2880
        .doubleBattle = FALSE,
#line 2881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2883
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2884
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2887
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2888
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2891
    [DIFFICULTY_NORMAL][TRAINER_JACKI] =
    {
#line 2892
        .trainerName = _("JACKI"),
#line 2893
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2894
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2895
F_TRAINER_FEMALE | 
#line 2896
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2897
        .doubleBattle = FALSE,
#line 2898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2900
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2901
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2904
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2905
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2908
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 2909
        .trainerName = _("WALTER"),
#line 2910
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2911
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2913
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2914
        .doubleBattle = FALSE,
#line 2915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2917
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2918
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2921
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 2922
        .trainerName = _("MICAH"),
#line 2923
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2924
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2926
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2927
        .doubleBattle = FALSE,
#line 2928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2930
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2931
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2934
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2935
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2938
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 2939
        .trainerName = _("THOMAS"),
#line 2940
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2941
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2943
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2944
        .doubleBattle = FALSE,
#line 2945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2947
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2948
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2951
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 2952
        .trainerName = _("MATT"),
#line 2953
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2954
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 2956
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2957
        .doubleBattle = FALSE,
#line 2958
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2959
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2961
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2961
            .heldItem = ITEM_CHOICE_SPECS,
#line 2965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2962
            .ability = ABILITY_SCRAPPY,
#line 2963
            .lvl = 69,
#line 2964
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2965
                MOVE_BOOMBURST,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 2970
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2970
            .heldItem = ITEM_CHOICE_BAND,
#line 2974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2971
            .ability = ABILITY_KEEN_EYE,
#line 2972
            .lvl = 69,
#line 2973
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2974
                MOVE_BRICK_BREAK,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 2979
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2979
            .heldItem = ITEM_THROAT_SPRAY,
#line 2983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2980
            .ability = ABILITY_BIG_PECKS,
#line 2981
            .lvl = 69,
#line 2982
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2983
                MOVE_SING,
                MOVE_PARTING_SHOT,
                MOVE_BOOMBURST,
                MOVE_ROOST,
            },
            },
            {
#line 2988
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2988
            .heldItem = ITEM_BRIGHT_POWDER,
#line 2992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2989
            .ability = ABILITY_REGENERATOR,
#line 2990
            .lvl = 69,
#line 2991
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2992
                MOVE_WISH,
                MOVE_PROTECT,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2997
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2997
            .heldItem = ITEM_LEFTOVERS,
#line 3001
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2998
            .ability = ABILITY_SERENE_GRACE,
#line 2999
            .lvl = 69,
#line 3000
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3001
                MOVE_SUBSTITUTE,
                MOVE_CALM_MIND,
                MOVE_PSYSHOCK,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 3006
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3006
            .heldItem = ITEM_ROCKY_HELMET,
#line 3010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3007
            .ability = ABILITY_CUTE_CHARM,
#line 3008
            .lvl = 69,
#line 3009
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3010
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_WAVE,
                MOVE_FLAMETHROWER,
                MOVE_ALLURING_VOICE,
            },
            },
        },
    },
#line 3016
    [DIFFICULTY_NORMAL][TRAINER_OZ] =
    {
#line 3017
        .trainerName = _("OZ"),
#line 3018
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3019
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3021
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3022
        .doubleBattle = FALSE,
#line 3023
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3024
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3026
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3026
            .heldItem = ITEM_SCOPE_LENS,
#line 3031
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3027
            .ability = ABILITY_SNIPER,
#line 3028
            .lvl = 70,
#line 3030
            .nature = NATURE_JOLLY,
#line 3029
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3031
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 3036
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3036
            .heldItem = ITEM_CHARTI_BERRY,
#line 3041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3037
            .ability = ABILITY_FLAME_BODY,
#line 3038
            .lvl = 70,
#line 3040
            .nature = NATURE_TIMID,
#line 3039
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3041
                MOVE_QUIVER_DANCE,
                MOVE_FLAMETHROWER,
                MOVE_MORNING_SUN,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 3046
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3046
            .heldItem = ITEM_CHOICE_SPECS,
#line 3051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3047
            .ability = ABILITY_TINTED_LENS,
#line 3048
            .lvl = 70,
#line 3050
            .nature = NATURE_MODEST,
#line 3049
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3051
                MOVE_BUG_BUZZ,
                MOVE_AIR_SLASH,
                MOVE_HIDDEN_POWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3056
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3056
            .heldItem = ITEM_CHOICE_BAND,
#line 3061
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3057
            .ability = ABILITY_TECHNICIAN,
#line 3058
            .lvl = 70,
#line 3060
            .nature = NATURE_ADAMANT,
#line 3059
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3061
                MOVE_CLOSE_COMBAT,
                MOVE_BULLET_PUNCH,
                MOVE_U_TURN,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3066
            .species = SPECIES_GENESECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3066
            .heldItem = ITEM_DOUSE_DRIVE,
#line 3071
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3067
            .ability = ABILITY_DOWNLOAD,
#line 3068
            .lvl = 70,
#line 3070
            .nature = NATURE_HASTY,
#line 3069
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3071
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
                MOVE_TECHNO_BLAST,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3076
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3076
            .heldItem = ITEM_FOCUS_SASH,
#line 3081
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3077
            .ability = ABILITY_CHLOROPHYLL,
#line 3078
            .lvl = 70,
#line 3080
            .nature = NATURE_NAUGHTY,
#line 3079
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3081
                MOVE_STRUGGLE_BUG,
                MOVE_LEAF_STORM,
                MOVE_ELECTROWEB,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3086
    [DIFFICULTY_NORMAL][TRAINER_DIEGO] =
    {
#line 3087
        .trainerName = _("DIEGO"),
#line 3088
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3089
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3091
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3092
        .doubleBattle = FALSE,
#line 3093
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3094
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3096
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3096
            .heldItem = ITEM_LEFTOVERS,
#line 3100
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3097
            .ability = ABILITY_DROUGHT,
#line 3098
            .lvl = 71,
#line 3099
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3100
                MOVE_SPIKES,
                MOVE_EARTHQUAKE,
                MOVE_STEALTH_ROCK,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 3105
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3105
            .heldItem = ITEM_MUSCLE_BAND,
#line 3109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3106
            .ability = ABILITY_FLAME_BODY,
#line 3107
            .lvl = 71,
#line 3108
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3109
                MOVE_PLAY_ROUGH,
                MOVE_MEGAHORN,
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
            },
            },
            {
#line 3114
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3114
            .heldItem = ITEM_LIFE_ORB,
#line 3118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3115
            .ability = ABILITY_SPEED_BOOST,
#line 3116
            .lvl = 71,
#line 3117
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3118
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3124
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3124
            .heldItem = ITEM_ASSAULT_VEST,
#line 3128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3125
            .ability = ABILITY_BLAZE,
#line 3126
            .lvl = 71,
#line 3127
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3128
                MOVE_SCORCHING_SANDS,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 3134
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3134
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3135
            .ability = ABILITY_LEVITATE,
#line 3136
            .lvl = 71,
#line 3137
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3138
                MOVE_OVERHEAT,
                MOVE_VOLT_SWITCH,
                MOVE_TOXIC,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 3144
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3144
            .heldItem = ITEM_CHOICE_SPECS,
#line 3148
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3145
            .ability = ABILITY_INFILTRATOR,
#line 3146
            .lvl = 71,
#line 3147
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3148
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_TRICK,
            },
            },
        },
    },
#line 3154
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3155
        .trainerName = _("DRAKE"),
#line 3156
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3157
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3159
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3160
        .doubleBattle = FALSE,
#line 3161
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3162
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3164
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3164
            .heldItem = ITEM_ASSAULT_VEST,
#line 3168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3165
            .ability = ABILITY_SAND_STREAM,
#line 3166
            .lvl = 72,
#line 3167
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3168
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3173
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3173
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3174
            .ability = ABILITY_PRANKSTER,
#line 3175
            .lvl = 72,
#line 3176
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3177
                MOVE_ENCORE,
                MOVE_FOUL_PLAY,
                MOVE_WILL_O_WISP,
                MOVE_TAUNT,
            },
            },
            {
#line 3182
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3183
            .ability = ABILITY_PICKPOCKET,
#line 3184
            .lvl = 72,
#line 3185
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3186
                MOVE_AERIAL_ACE,
                MOVE_ICE_SHARD,
                MOVE_TRIPLE_AXEL,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3191
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3191
            .heldItem = ITEM_CHOICE_SPECS,
#line 3195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3192
            .ability = ABILITY_LEVITATE,
#line 3193
            .lvl = 72,
#line 3194
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3195
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3200
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3200
            .heldItem = ITEM_ROCKY_HELMET,
#line 3204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3201
            .ability = ABILITY_INTIMIDATE,
#line 3202
            .lvl = 72,
#line 3203
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3204
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3209
            .species = SPECIES_JIRACHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3209
            .heldItem = ITEM_LEFTOVERS,
#line 3213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3210
            .ability = ABILITY_SERENE_GRACE,
#line 3211
            .lvl = 73,
#line 3212
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3213
                MOVE_PSYCHIC,
                MOVE_IRON_HEAD,
                MOVE_WISH,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 3218
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE] =
    {
#line 3219
        .trainerName = _("ALEC"),
#line 3220
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3221
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3223
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3224
        .doubleBattle = FALSE,
#line 3225
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3227
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3231
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3228
            .ability = ABILITY_STURDY,
#line 3229
            .lvl = 15,
#line 3230
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3232
                MOVE_STEALTH_ROCK,
                MOVE_COPYCAT,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3237
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3241
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3238
            .ability = ABILITY_LEVITATE,
#line 3239
            .lvl = 15,
#line 3240
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3242
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3247
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3247
            .heldItem = ITEM_SALAC_BERRY,
#line 3251
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3248
            .ability = ABILITY_UNNERVE,
#line 3249
            .lvl = 16,
#line 3250
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3252
                MOVE_ROCK_SLIDE,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3257
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY] =
    {
#line 3258
        .trainerName = _("GARRETT"),
#line 3259
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3260
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3262
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3263
        .doubleBattle = FALSE,
#line 3264
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3266
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3270
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3267
            .ability = ABILITY_MARVEL_SCALE,
#line 3268
            .lvl = 21,
#line 3269
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3271
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3276
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3280
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3277
            .ability = ABILITY_TORRENT,
#line 3278
            .lvl = 22,
#line 3279
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3281
                MOVE_BUBBLEBEAM,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3286
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3290
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3287
            .ability = ABILITY_SKILL_LINK,
#line 3288
            .lvl = 22,
#line 3289
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3291
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3296
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3296
            .heldItem = ITEM_WIDE_LENS,
#line 3300
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3297
            .ability = ABILITY_TORRENT,
#line 3298
            .lvl = 22,
#line 3299
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3301
                MOVE_SAND_TOMB,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3306
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3307
        .trainerName = _("SAM"),
#line 3308
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3309
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3311
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3312
        .doubleBattle = FALSE,
#line 3313
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3315
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3315
            .heldItem = ITEM_METAL_COAT,
#line 3319
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3316
            .ability = ABILITY_MAGNET_PULL,
#line 3317
            .lvl = 32,
#line 3318
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3320
                MOVE_MAGNET_RISE,
                MOVE_THUNDER_SHOCK,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3325
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3325
            .heldItem = ITEM_SILK_SCARF,
#line 3329
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3326
            .ability = ABILITY_DOWNLOAD,
#line 3327
            .lvl = 32,
#line 3328
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3330
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3335
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3335
            .heldItem = ITEM_LUM_BERRY,
#line 3339
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3336
            .ability = ABILITY_VITAL_SPIRIT,
#line 3338
            .lvl = 32,
#line 3337
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3340
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_SCREECH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3345
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3345
            .heldItem = ITEM_LUM_BERRY,
#line 3349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3346
            .ability = ABILITY_INTIMIDATE,
#line 3348
            .lvl = 32,
#line 3347
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3349
                MOVE_BITE,
                MOVE_VOLT_SWITCH,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3354
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3354
            .heldItem = ITEM_MAGNET,
#line 3358
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3355
            .ability = ABILITY_STATIC,
#line 3356
            .lvl = 32,
#line 3357
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3359
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3364
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY] =
    {
#line 3365
        .trainerName = _("JOSE"),
#line 3366
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3367
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3369
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3370
        .doubleBattle = FALSE,
#line 3371
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3373
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3373
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3377
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3374
            .ability = ABILITY_NATURAL_CURE,
#line 3375
            .lvl = 40,
#line 3376
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3378
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3383
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3383
            .heldItem = ITEM_CHARCOAL,
#line 3387
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3384
            .ability = ABILITY_BLAZE,
#line 3385
            .lvl = 40,
#line 3386
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3388
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3393
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3393
            .heldItem = ITEM_ASSAULT_VEST,
#line 3397
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3394
            .ability = ABILITY_LEVITATE,
#line 3395
            .lvl = 40,
#line 3396
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3398
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3403
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3403
            .heldItem = ITEM_ROCKY_HELMET,
#line 3407
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3404
            .ability = ABILITY_MARVEL_SCALE,
#line 3405
            .lvl = 40,
#line 3406
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3408
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3413
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3413
            .heldItem = ITEM_DRAGON_FANG,
#line 3417
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3414
            .ability = ABILITY_SNIPER,
#line 3415
            .lvl = 40,
#line 3416
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3418
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
                MOVE_YAWN,
            },
            },
            {
#line 3423
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3423
            .heldItem = ITEM_LIFE_ORB,
#line 3427
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3424
            .ability = ABILITY_ROUGH_SKIN,
#line 3425
            .lvl = 40,
#line 3426
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3433
    [DIFFICULTY_NORMAL][TRAINER_NORMAN] =
    {
#line 3434
        .trainerName = _("GRAYSON"),
#line 3435
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3436
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3438
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3439
        .doubleBattle = FALSE,
#line 3440
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3442
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3442
            .heldItem = ITEM_MUSCLE_BAND,
#line 3446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3443
            .ability = ABILITY_IRON_FIST,
#line 3444
            .lvl = 43,
#line 3445
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3446
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3452
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3452
            .heldItem = ITEM_BLACK_BELT,
#line 3456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3453
            .ability = ABILITY_GUTS,
#line 3454
            .lvl = 43,
#line 3455
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3456
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3461
            .species = SPECIES_LOPUNNY,
#line 3461
            .gender = TRAINER_MON_FEMALE,
#line 3461
            .heldItem = ITEM_ROCKY_HELMET,
#line 3465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .ability = ABILITY_CUTE_CHARM,
#line 3463
            .lvl = 43,
#line 3464
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3465
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3470
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3470
            .heldItem = ITEM_FOCUS_BAND,
#line 3474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3471
            .ability = ABILITY_MOXIE,
#line 3472
            .lvl = 43,
#line 3473
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3474
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3480
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .heldItem = ITEM_EXPERT_BELT,
#line 3484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3481
            .ability = ABILITY_INNER_FOCUS,
#line 3482
            .lvl = 43,
#line 3483
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3484
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3489
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3489
            .heldItem = ITEM_FOCUS_BAND,
#line 3493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3490
            .ability = ABILITY_POISON_TOUCH,
#line 3491
            .lvl = 43,
#line 3492
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3493
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3498
    [DIFFICULTY_NORMAL][TRAINER_WINONA] =
    {
#line 3499
        .trainerName = _("MATTHEW"),
#line 3500
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3501
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3503
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3504
        .doubleBattle = FALSE,
#line 3505
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3507
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3507
            .heldItem = ITEM_AIR_BALLOON,
#line 3511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3508
            .ability = ABILITY_STURDY,
#line 3509
            .lvl = 51,
#line 3510
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3511
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3516
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3517
            .ability = ABILITY_WEAK_ARMOR,
#line 3518
            .lvl = 51,
#line 3519
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3525
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3525
            .heldItem = ITEM_ASSAULT_VEST,
#line 3529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3526
            .ability = ABILITY_CLEAR_BODY,
#line 3527
            .lvl = 51,
#line 3528
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3529
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3534
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .heldItem = ITEM_CHOICE_SPECS,
#line 3538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3535
            .ability = ABILITY_COMPETITIVE,
#line 3536
            .lvl = 51,
#line 3537
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3538
                MOVE_BRINE,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_ROOST,
            },
            },
            {
#line 3543
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3543
            .heldItem = ITEM_CHOICE_BAND,
#line 3547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3544
            .ability = ABILITY_TECHNICIAN,
#line 3545
            .lvl = 51,
#line 3546
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3547
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3552
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .heldItem = ITEM_ROCKY_HELMET,
#line 3556
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3553
            .ability = ABILITY_IRON_BARBS,
#line 3554
            .lvl = 51,
#line 3555
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3556
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3561
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA] =
    {
#line 3562
        .trainerName = _("MARK"),
#line 3563
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3564
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3566
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3567
        .doubleBattle = FALSE,
#line 3568
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3570
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .heldItem = ITEM_ROCKY_HELMET,
#line 3574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .ability = ABILITY_FLASH_FIRE,
#line 3572
            .lvl = 55,
#line 3573
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3574
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3579
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3579
            .heldItem = ITEM_CHOICE_SPECS,
#line 3583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3580
            .ability = ABILITY_PIXILATE,
#line 3581
            .lvl = 55,
#line 3582
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3583
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3588
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3588
            .heldItem = ITEM_CHOICE_BAND,
#line 3591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3589
            .ability = ABILITY_HUGE_POWER,
#line 3590
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3591
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3596
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_CHOICE_SCARF,
#line 3600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .ability = ABILITY_SERENE_GRACE,
#line 3598
            .lvl = 55,
#line 3599
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3605
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3605
            .heldItem = ITEM_LEFTOVERS,
#line 3609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3606
            .ability = ABILITY_MAGIC_GUARD,
#line 3607
            .lvl = 55,
#line 3608
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3609
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3615
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3615
            .heldItem = ITEM_OCCA_BERRY,
#line 3618
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3616
            .ability = ABILITY_INTIMIDATE,
#line 3617
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3618
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3624
    [DIFFICULTY_NORMAL][TRAINER_JUAN] =
    {
#line 3625
        .trainerName = _("XANDER"),
#line 3626
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3627
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3630
        .doubleBattle = TRUE,
#line 3631
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3633
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .heldItem = ITEM_LEFTOVERS,
#line 3637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3634
            .ability = ABILITY_SHADOW_TAG,
#line 3635
            .lvl = 61,
#line 3636
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3637
                MOVE_TRICK_ROOM,
                MOVE_PROTECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3642
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3643
            .ability = ABILITY_CURSED_BODY,
#line 3644
            .lvl = 61,
#line 3645
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3646
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3651
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .heldItem = ITEM_CHOICE_SPECS,
#line 3655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .ability = ABILITY_FLASH_FIRE,
#line 3653
            .lvl = 61,
#line 3654
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3660
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .heldItem = ITEM_SITRUS_BERRY,
#line 3664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3661
            .ability = ABILITY_LEVITATE,
#line 3662
            .lvl = 61,
#line 3663
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3664
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3669
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .heldItem = ITEM_LEFTOVERS,
#line 3673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3670
            .ability = ABILITY_NO_GUARD,
#line 3671
            .lvl = 61,
#line 3672
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3678
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3678
            .heldItem = ITEM_SITRUS_BERRY,
#line 3682
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3679
            .ability = ABILITY_MUMMY,
#line 3680
            .lvl = 61,
#line 3681
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3682
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3687
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3688
        .trainerName = _("JERRY"),
#line 3689
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3690
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3692
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3693
        .doubleBattle = FALSE,
#line 3694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3696
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3698
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3697
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3700
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3701
        .trainerName = _("TED"),
#line 3702
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3703
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3705
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3706
        .doubleBattle = FALSE,
#line 3707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3709
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3711
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3710
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3713
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3714
        .trainerName = _("PAUL"),
#line 3715
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3716
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3718
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3719
        .doubleBattle = FALSE,
#line 3720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3722
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3724
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3723
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3726
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3728
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3727
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3730
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3732
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3731
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3734
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3735
        .trainerName = _("KAREN"),
#line 3736
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3737
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3738
F_TRAINER_FEMALE | 
#line 3739
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3740
        .doubleBattle = FALSE,
#line 3741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3743
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3745
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3744
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3747
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3748
        .trainerName = _("GEORGIA"),
#line 3749
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3750
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3751
F_TRAINER_FEMALE | 
#line 3752
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3753
        .doubleBattle = FALSE,
#line 3754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3756
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3758
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3757
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3760
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3761
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3764
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3765
        .trainerName = _("KATE & JOY"),
#line 3766
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3767
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3769
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3770
        .doubleBattle = TRUE,
#line 3771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3773
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3774
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3777
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3778
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3782
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3783
        .trainerName = _("ANNA & MEG"),
#line 3784
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3785
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3787
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3788
        .doubleBattle = TRUE,
#line 3789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3791
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3792
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3795
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3796
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3799
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3800
        .trainerName = _("VICTOR"),
#line 3801
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3802
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3804
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3805
        .doubleBattle = FALSE,
#line 3806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3808
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3808
            .heldItem = ITEM_ORAN_BERRY,
#line 3810
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3809
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3812
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3812
            .heldItem = ITEM_ORAN_BERRY,
#line 3814
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3813
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3816
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3817
        .trainerName = _("MIGUEL"),
#line 3818
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3819
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3821
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3822
        .doubleBattle = FALSE,
#line 3823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3825
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3825
            .heldItem = ITEM_ORAN_BERRY,
#line 3827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3826
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3829
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3830
        .trainerName = _("COLTON"),
#line 3831
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3832
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3834
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3835
        .doubleBattle = FALSE,
#line 3836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3838
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .heldItem = ITEM_ORAN_BERRY,
#line 3840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3839
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3841
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3846
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .heldItem = ITEM_ORAN_BERRY,
#line 3848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3847
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3849
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3854
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3854
            .heldItem = ITEM_ORAN_BERRY,
#line 3856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3855
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3857
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3862
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .heldItem = ITEM_ORAN_BERRY,
#line 3864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3863
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3865
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3870
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3870
            .heldItem = ITEM_ORAN_BERRY,
#line 3872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3871
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3873
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3878
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3878
            .heldItem = ITEM_ORAN_BERRY,
#line 3880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3879
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3881
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3886
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3887
        .trainerName = _("VICTORIA"),
#line 3888
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3889
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3890
F_TRAINER_FEMALE | 
#line 3891
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3892
        .doubleBattle = FALSE,
#line 3893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3895
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3895
            .heldItem = ITEM_ORAN_BERRY,
#line 3897
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3896
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3899
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3900
        .trainerName = _("VANESSA"),
#line 3901
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3902
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3903
F_TRAINER_FEMALE | 
#line 3904
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3905
        .doubleBattle = FALSE,
#line 3906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3908
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3908
            .heldItem = ITEM_ORAN_BERRY,
#line 3910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3909
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3912
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3913
        .trainerName = _("BETHANY"),
#line 3914
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3915
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3916
F_TRAINER_FEMALE | 
#line 3917
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3918
        .doubleBattle = FALSE,
#line 3919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3921
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3921
            .heldItem = ITEM_ORAN_BERRY,
#line 3923
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3922
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3925
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3925
            .heldItem = ITEM_ORAN_BERRY,
#line 3927
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3926
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3929
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3929
            .heldItem = ITEM_ORAN_BERRY,
#line 3931
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3930
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3933
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3934
        .trainerName = _("ISABEL"),
#line 3935
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3936
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3937
F_TRAINER_FEMALE | 
#line 3938
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3939
        .doubleBattle = FALSE,
#line 3940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3942
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3942
            .heldItem = ITEM_ORAN_BERRY,
#line 3944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3943
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3946
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3946
            .heldItem = ITEM_ORAN_BERRY,
#line 3948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3947
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3950
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3951
        .trainerName = _("TIMOTHY"),
#line 3952
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3953
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3955
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3956
        .doubleBattle = FALSE,
#line 3957
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3959
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3961
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3960
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3963
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3964
        .trainerName = _("VICKY"),
#line 3965
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3966
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3967
F_TRAINER_FEMALE | 
#line 3968
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3969
        .doubleBattle = FALSE,
#line 3970
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3972
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3974
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3973
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3976
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 3977
        .trainerName = _("SHELBY"),
#line 3978
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3979
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3980
F_TRAINER_FEMALE | 
#line 3981
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3982
        .doubleBattle = FALSE,
#line 3983
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3985
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3987
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3986
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3989
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3991
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3990
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3993
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 3994
        .trainerName = _("CALVIN"),
#line 3995
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3996
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3998
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3999
        .doubleBattle = FALSE,
#line 4000
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4002
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4003
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4006
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4007
        .trainerName = _("BILLY"),
#line 4008
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4009
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4011
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4012
        .doubleBattle = FALSE,
#line 4013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4015
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4016
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4019
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4020
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4023
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4024
        .trainerName = _("JOSH"),
#line 4025
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4026
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4028
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4029
        .doubleBattle = FALSE,
#line 4030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4032
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4034
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4033
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4035
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4037
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4038
        .trainerName = _("TOMMY"),
#line 4039
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4040
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4042
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4043
        .doubleBattle = FALSE,
#line 4044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4046
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4048
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4047
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4050
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4052
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4051
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4054
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4055
        .trainerName = _("JOEY"),
#line 4056
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4057
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4059
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4060
        .doubleBattle = FALSE,
#line 4061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4063
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4064
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4067
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4068
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4071
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4072
        .trainerName = _("BEN"),
#line 4073
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4074
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4076
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4077
        .doubleBattle = FALSE,
#line 4078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4080
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4081
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4085
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4087
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4086
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4090
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4091
        .trainerName = _("QUINCY"),
#line 4092
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4095
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4096
        .items = { ITEM_FULL_RESTORE },
#line 4097
        .doubleBattle = FALSE,
#line 4098
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4100
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4101
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4104
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4106
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4105
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4108
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4109
        .trainerName = _("KATELYNN"),
#line 4110
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4111
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4112
F_TRAINER_FEMALE | 
#line 4113
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4114
        .items = { ITEM_FULL_RESTORE },
#line 4115
        .doubleBattle = FALSE,
#line 4116
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4118
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4119
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4121
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4126
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4128
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4127
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4129
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4134
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4135
        .trainerName = _("JAYLEN"),
#line 4136
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4137
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4139
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4140
        .doubleBattle = FALSE,
#line 4141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4143
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4144
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4147
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4148
        .trainerName = _("DILLON"),
#line 4149
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4150
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4152
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4153
        .doubleBattle = FALSE,
#line 4154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4156
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4157
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4160
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4161
        .trainerName = _("EDDIE"),
#line 4162
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4163
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4165
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4166
        .doubleBattle = FALSE,
#line 4167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4169
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4170
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4173
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4174
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4177
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4178
        .trainerName = _("ALLEN"),
#line 4179
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4180
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4182
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4183
        .doubleBattle = FALSE,
#line 4184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4186
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4187
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4190
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4191
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4194
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4195
        .trainerName = _("TIMMY"),
#line 4196
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4197
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4199
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4200
        .doubleBattle = FALSE,
#line 4201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4203
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4204
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4207
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4208
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4211
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4212
        .trainerName = _("FATTY"),
#line 4213
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4214
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4216
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4217
        .doubleBattle = FALSE,
#line 4218
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4219
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4221
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4221
            .heldItem = ITEM_LEFTOVERS,
#line 4225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4222
            .ability = ABILITY_THICK_FAT,
#line 4223
            .lvl = 75,
#line 4224
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4225
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 4230
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .heldItem = ITEM_CHOICE_BAND,
#line 4234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4231
            .ability = ABILITY_INTIMIDATE,
#line 4232
            .lvl = 75,
#line 4233
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4234
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4239
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .heldItem = ITEM_LIFE_ORB,
#line 4243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4240
            .ability = ABILITY_OVERGROW,
#line 4241
            .lvl = 75,
#line 4242
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4243
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 4248
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4248
            .heldItem = ITEM_FOCUS_SASH,
#line 4252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4249
            .ability = ABILITY_MAGIC_GUARD,
#line 4250
            .lvl = 75,
#line 4251
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4252
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4257
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4257
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 4261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4258
            .ability = ABILITY_STATIC,
#line 4259
            .lvl = 75,
#line 4260
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4261
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4266
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .heldItem = ITEM_EVIOLITE,
#line 4270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4267
            .ability = ABILITY_SWIFT_SWIM,
#line 4268
            .lvl = 78,
#line 4269
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4270
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4275
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4276
        .trainerName = _("ANDREW"),
#line 4277
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4278
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4280
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4281
        .doubleBattle = FALSE,
#line 4282
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4284
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4285
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4288
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4289
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4292
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4296
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4297
        .trainerName = _("IVAN"),
#line 4298
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4299
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4301
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4302
        .doubleBattle = FALSE,
#line 4303
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4305
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4306
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4309
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4310
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4313
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4314
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4317
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4318
        .trainerName = _("CLAUDE"),
#line 4319
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4320
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4322
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4323
        .doubleBattle = FALSE,
#line 4324
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4326
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4327
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4330
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4331
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4334
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4335
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4338
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4339
        .trainerName = _("ELLIOT"),
#line 4340
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4341
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4343
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4344
        .doubleBattle = FALSE,
#line 4345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4347
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4348
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4351
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4352
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4355
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4357
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4356
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4359
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4360
        .trainerName = _("NED"),
#line 4361
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4362
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4364
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4365
        .doubleBattle = FALSE,
#line 4366
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4368
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4369
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4372
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4373
        .trainerName = _("DALE"),
#line 4374
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4375
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4377
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4378
        .doubleBattle = FALSE,
#line 4379
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4381
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4382
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4385
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4386
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4389
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4391
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4390
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4393
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4394
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4397
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4398
        .trainerName = _("NOLAN"),
#line 4399
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4400
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4402
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4403
        .doubleBattle = FALSE,
#line 4404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4406
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4407
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4410
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4411
        .trainerName = _("BARNY"),
#line 4412
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4413
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4415
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4416
        .doubleBattle = FALSE,
#line 4417
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4419
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4421
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4420
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4423
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4424
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4427
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4428
        .trainerName = _("WADE"),
#line 4429
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4430
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4432
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4433
        .doubleBattle = FALSE,
#line 4434
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4436
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4437
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4439
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4440
        .trainerName = _("ABIGAL"),
#line 4441
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4442
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4443
F_TRAINER_FEMALE | 
#line 4444
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4445
        .doubleBattle = FALSE,
#line 4446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4448
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4450
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4449
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4451
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4452
        .trainerName = _("CARTER"),
#line 4453
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4454
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4456
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4457
        .doubleBattle = FALSE,
#line 4458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4460
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4462
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4461
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4464
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4466
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4465
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4468
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4469
        .trainerName = _("RONALD"),
#line 4470
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4471
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4473
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4474
        .doubleBattle = FALSE,
#line 4475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4477
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4478
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4482
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4483
        .trainerName = _("JACOB"),
#line 4484
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4485
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4487
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4488
        .doubleBattle = FALSE,
#line 4489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4491
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4493
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4492
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4495
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4497
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4496
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4499
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4501
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4500
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4503
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4504
        .trainerName = _("ANTHONY"),
#line 4505
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4506
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4508
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4509
        .doubleBattle = FALSE,
#line 4510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4512
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4513
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4516
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4517
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4520
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4521
        .trainerName = _("BENJAMIN"),
#line 4522
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4523
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4525
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4526
        .doubleBattle = FALSE,
#line 4527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4529
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4530
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4533
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4534
        .trainerName = _("JASMINE"),
#line 4535
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4536
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4537
F_TRAINER_FEMALE | 
#line 4538
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4539
        .doubleBattle = FALSE,
#line 4540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4542
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4544
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4543
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4546
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4548
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4547
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4550
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4551
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4554
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4555
        .trainerName = _("DYLAN"),
#line 4556
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4557
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4559
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4560
        .doubleBattle = FALSE,
#line 4561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4563
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4564
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4567
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4568
        .trainerName = _("MARIA"),
#line 4569
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4570
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4571
F_TRAINER_FEMALE | 
#line 4572
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4573
        .doubleBattle = FALSE,
#line 4574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4576
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4577
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4580
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4581
        .trainerName = _("CAMDEN"),
#line 4582
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4583
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4585
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4586
        .doubleBattle = FALSE,
#line 4587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4589
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4590
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4593
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4594
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4597
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4598
        .trainerName = _("DEMETRIUS"),
#line 4599
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4600
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4602
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4603
        .doubleBattle = FALSE,
#line 4604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4606
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4607
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4610
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4611
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4614
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4615
        .trainerName = _("ISAIAH"),
#line 4616
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4617
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4619
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4620
        .doubleBattle = FALSE,
#line 4621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4623
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4624
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4627
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4628
        .trainerName = _("PABLO"),
#line 4629
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4630
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4632
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4633
        .doubleBattle = FALSE,
#line 4634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4636
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4637
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4640
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4641
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4644
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4645
        .trainerName = _("CHASE"),
#line 4646
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4647
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4649
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4650
        .doubleBattle = FALSE,
#line 4651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4653
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4654
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4657
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4659
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4658
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4661
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4662
        .trainerName = _("ISOBEL"),
#line 4663
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4664
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4665
F_TRAINER_FEMALE | 
#line 4666
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4667
        .doubleBattle = FALSE,
#line 4668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4670
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4671
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4674
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4675
        .trainerName = _("DONNY"),
#line 4676
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4677
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4678
F_TRAINER_FEMALE | 
#line 4679
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4680
        .doubleBattle = FALSE,
#line 4681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4683
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4684
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4687
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4689
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4688
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4691
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4692
        .trainerName = _("TALIA"),
#line 4693
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4694
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4695
F_TRAINER_FEMALE | 
#line 4696
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4697
        .doubleBattle = FALSE,
#line 4698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4700
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4701
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4704
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4705
        .trainerName = _("KATELYN"),
#line 4706
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4707
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4708
F_TRAINER_FEMALE | 
#line 4709
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4710
        .doubleBattle = FALSE,
#line 4711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4713
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4714
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4717
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4718
        .trainerName = _("ALLISON"),
#line 4719
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4720
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4721
F_TRAINER_FEMALE | 
#line 4722
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4723
        .doubleBattle = FALSE,
#line 4724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4726
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4727
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4730
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4732
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4731
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4734
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4735
        .trainerName = _("NICOLAS"),
#line 4736
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4737
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4739
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4740
        .doubleBattle = FALSE,
#line 4741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4743
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4745
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4744
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4747
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4749
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4748
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4751
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4752
        .trainerName = _("AARON"),
#line 4753
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4754
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4756
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4757
        .doubleBattle = FALSE,
#line 4758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4760
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4761
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4764
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4765
        .trainerName = _("PERRY"),
#line 4766
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4767
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4769
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4770
        .doubleBattle = FALSE,
#line 4771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4773
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4774
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4777
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4778
        .trainerName = _("HUGH"),
#line 4779
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4780
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4782
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4783
        .doubleBattle = FALSE,
#line 4784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4786
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4787
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4790
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4791
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4794
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4795
        .trainerName = _("PHIL"),
#line 4796
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4797
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4799
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4800
        .doubleBattle = FALSE,
#line 4801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4803
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4804
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4807
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4808
        .trainerName = _("JARED"),
#line 4809
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4810
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4812
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4813
        .doubleBattle = FALSE,
#line 4814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4816
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4818
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4817
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4820
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4821
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4824
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4826
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4825
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4828
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4829
        .trainerName = _("HUMBERTO"),
#line 4830
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4831
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4833
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4834
        .doubleBattle = FALSE,
#line 4835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4837
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4839
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4838
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4841
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4842
        .trainerName = _("PRESLEY"),
#line 4843
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4844
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4846
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4847
        .doubleBattle = FALSE,
#line 4848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4850
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4851
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4854
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4855
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4858
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4859
        .trainerName = _("EDWARDO"),
#line 4860
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4861
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4863
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4864
        .doubleBattle = FALSE,
#line 4865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4867
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4869
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4868
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4871
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4873
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4872
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4875
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4876
        .trainerName = _("COLIN"),
#line 4877
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4878
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4880
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4881
        .doubleBattle = FALSE,
#line 4882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4884
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4885
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4888
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4889
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4892
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4893
        .trainerName = _("ROBERT"),
#line 4894
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4895
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4897
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4898
        .doubleBattle = FALSE,
#line 4899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4901
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4902
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4905
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4906
        .trainerName = _("BENNY"),
#line 4907
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4908
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4910
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4911
        .doubleBattle = FALSE,
#line 4912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4914
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4915
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4918
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4919
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4922
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4923
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4926
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4927
        .trainerName = _("CHESTER"),
#line 4928
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4929
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4931
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4932
        .doubleBattle = FALSE,
#line 4933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4935
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4936
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4939
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4940
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4943
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4944
        .trainerName = _("ALEX"),
#line 4945
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4946
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4948
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4949
        .doubleBattle = FALSE,
#line 4950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4952
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4954
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4953
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4956
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4958
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4957
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4960
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4961
        .trainerName = _("BECK"),
#line 4962
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4963
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4965
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4966
        .doubleBattle = FALSE,
#line 4967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4969
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4970
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4973
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4974
        .trainerName = _("YASU"),
#line 4975
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4976
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4978
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4979
        .doubleBattle = FALSE,
#line 4980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4982
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4983
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4986
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4987
        .trainerName = _("TAKASHI"),
#line 4988
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4989
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4991
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4992
        .doubleBattle = FALSE,
#line 4993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4995
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4996
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4999
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5000
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5003
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5004
        .trainerName = _("DIANNE"),
#line 5005
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5006
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5007
F_TRAINER_FEMALE | 
#line 5008
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5009
        .items = { ITEM_FULL_RESTORE },
#line 5010
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5012
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5013
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5015
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5018
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5019
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5021
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5024
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5025
        .trainerName = _("JANI"),
#line 5026
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5027
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5028
F_TRAINER_FEMALE | 
#line 5029
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5030
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5032
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5033
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5036
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5037
        .trainerName = _("LAO"),
#line 5038
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5039
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5041
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5042
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5044
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5045
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5048
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5049
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5052
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5053
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5056
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5057
        .trainerName = _("LUNG"),
#line 5058
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5059
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5061
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5062
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5064
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5065
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5068
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5069
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5072
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5073
        .trainerName = _("JOCELYN"),
#line 5074
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5075
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5076
F_TRAINER_FEMALE | 
#line 5077
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5078
        .doubleBattle = FALSE,
#line 5079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5081
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5083
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5082
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5085
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5086
        .trainerName = _("LAURA"),
#line 5087
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5088
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5089
F_TRAINER_FEMALE | 
#line 5090
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5091
        .doubleBattle = FALSE,
#line 5092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5094
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5096
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5095
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5098
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5099
        .trainerName = _("CYNDY"),
#line 5100
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5101
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5102
F_TRAINER_FEMALE | 
#line 5103
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5104
        .doubleBattle = FALSE,
#line 5105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5107
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5109
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5108
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5111
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5113
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5112
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5115
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5116
        .trainerName = _("CORA"),
#line 5117
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5118
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5119
F_TRAINER_FEMALE | 
#line 5120
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5121
        .doubleBattle = FALSE,
#line 5122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5124
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5125
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5128
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5129
        .trainerName = _("PAULA"),
#line 5130
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5131
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5132
F_TRAINER_FEMALE | 
#line 5133
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5134
        .doubleBattle = FALSE,
#line 5135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5137
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5138
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5141
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5142
        .trainerName = _("MADELINE"),
#line 5143
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5144
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5145
F_TRAINER_FEMALE | 
#line 5146
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5147
        .doubleBattle = FALSE,
#line 5148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5150
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5151
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5154
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5155
        .trainerName = _("CLARISSA"),
#line 5156
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5157
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5158
F_TRAINER_FEMALE | 
#line 5159
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5160
        .doubleBattle = FALSE,
#line 5161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5163
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5164
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5167
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5168
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5171
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5172
        .trainerName = _("ANGELICA"),
#line 5173
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5174
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5175
F_TRAINER_FEMALE | 
#line 5176
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5177
        .doubleBattle = FALSE,
#line 5178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5180
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5181
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5184
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5185
        .trainerName = _("BEVERLY"),
#line 5186
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5187
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5188
F_TRAINER_FEMALE | 
#line 5189
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5190
        .doubleBattle = FALSE,
#line 5191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5193
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5194
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5197
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5198
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5201
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5202
        .trainerName = _("IMANI"),
#line 5203
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5204
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5205
F_TRAINER_FEMALE | 
#line 5206
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5207
        .doubleBattle = FALSE,
#line 5208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5211
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5214
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5215
        .trainerName = _("KYLA"),
#line 5216
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5217
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5218
F_TRAINER_FEMALE | 
#line 5219
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5220
        .doubleBattle = FALSE,
#line 5221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5223
            .species = SPECIES_CLOYSTER,
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
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5228
        .trainerName = _("DENISE"),
#line 5229
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5230
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5231
F_TRAINER_FEMALE | 
#line 5232
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5233
        .doubleBattle = FALSE,
#line 5234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5236
            .species = SPECIES_MISMAGIUS,
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
            .species = SPECIES_FRAXURE,
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
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5245
        .trainerName = _("BETH"),
#line 5246
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5247
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5248
F_TRAINER_FEMALE | 
#line 5249
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5250
        .doubleBattle = FALSE,
#line 5251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5253
            .species = SPECIES_TOGETIC,
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
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5258
        .trainerName = _("TARA"),
#line 5259
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5260
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5261
F_TRAINER_FEMALE | 
#line 5262
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5263
        .doubleBattle = FALSE,
#line 5264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5266
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5267
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5270
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5271
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5274
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5275
        .trainerName = _("MISSY"),
#line 5276
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5277
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5278
F_TRAINER_FEMALE | 
#line 5279
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5280
        .doubleBattle = FALSE,
#line 5281
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5283
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5284
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5287
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5288
        .trainerName = _("ALICE"),
#line 5289
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5290
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5291
F_TRAINER_FEMALE | 
#line 5292
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5293
        .doubleBattle = FALSE,
#line 5294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5296
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5297
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5300
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5304
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5305
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5308
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5309
        .trainerName = _("JENNY"),
#line 5310
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5311
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5312
F_TRAINER_FEMALE | 
#line 5313
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5314
        .doubleBattle = FALSE,
#line 5315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5317
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5318
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5321
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5322
        .trainerName = _("GRACE"),
#line 5323
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5324
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5325
F_TRAINER_FEMALE | 
#line 5326
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5327
        .doubleBattle = FALSE,
#line 5328
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5330
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5331
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5334
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5335
        .trainerName = _("TANYA"),
#line 5336
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5337
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5338
F_TRAINER_FEMALE | 
#line 5339
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5340
        .doubleBattle = FALSE,
#line 5341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5343
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5344
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5347
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5348
        .trainerName = _("SHARON"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5356
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5357
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5360
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5361
        .trainerName = _("NIKKI"),
#line 5362
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5363
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5364
F_TRAINER_FEMALE | 
#line 5365
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5366
        .doubleBattle = FALSE,
#line 5367
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5369
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5370
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5373
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5374
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5377
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5378
        .trainerName = _("BRENDA"),
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
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5387
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5390
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5391
        .trainerName = _("KATIE"),
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
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5400
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5403
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5404
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5407
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5408
        .trainerName = _("SUSIE"),
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
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5417
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5420
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5421
        .trainerName = _("KARA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5429
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5430
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5433
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5434
        .trainerName = _("DANA"),
#line 5435
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5436
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5437
F_TRAINER_FEMALE | 
#line 5438
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5439
        .doubleBattle = FALSE,
#line 5440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5442
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5443
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5446
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5447
        .trainerName = _("SIENNA"),
#line 5448
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5449
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5450
F_TRAINER_FEMALE | 
#line 5451
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5452
        .doubleBattle = FALSE,
#line 5453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5455
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5456
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5459
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5460
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5463
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5464
        .trainerName = _("DEBRA"),
#line 5465
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5466
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5467
F_TRAINER_FEMALE | 
#line 5468
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5469
        .doubleBattle = FALSE,
#line 5470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5472
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5473
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5476
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5477
        .trainerName = _("LINDA"),
#line 5478
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5479
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5480
F_TRAINER_FEMALE | 
#line 5481
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5482
        .doubleBattle = FALSE,
#line 5483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5485
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5486
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5489
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5490
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5493
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5494
        .trainerName = _("KAYLEE"),
#line 5495
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5496
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5497
F_TRAINER_FEMALE | 
#line 5498
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5499
        .doubleBattle = FALSE,
#line 5500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5502
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5506
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5507
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5510
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5511
        .trainerName = _("LAUREL"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5519
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5520
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5523
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5524
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5527
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5528
        .trainerName = _("CARLEE"),
#line 5529
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5530
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5531
F_TRAINER_FEMALE | 
#line 5532
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5533
        .doubleBattle = FALSE,
#line 5534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5536
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5537
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5540
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5541
        .trainerName = _("HEIDI"),
#line 5542
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5543
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5544
F_TRAINER_FEMALE | 
#line 5545
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5546
        .doubleBattle = FALSE,
#line 5547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5549
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5550
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5553
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5554
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5558
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5559
        .trainerName = _("BECKY"),
#line 5560
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5561
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5562
F_TRAINER_FEMALE | 
#line 5563
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5564
        .doubleBattle = TRUE,
#line 5565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5567
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5567
            .heldItem = ITEM_FOCUS_SASH,
#line 5569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5568
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5570
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5573
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5573
            .heldItem = ITEM_WIDE_LENS,
#line 5576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5574
            .ability = ABILITY_MOODY,
#line 5575
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5576
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5581
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5582
        .trainerName = _("CAROL"),
#line 5583
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5584
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5585
F_TRAINER_FEMALE | 
#line 5586
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5587
        .doubleBattle = FALSE,
#line 5588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5590
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5591
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5594
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5595
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5598
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5599
        .trainerName = _("NANCY"),
#line 5600
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5601
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5602
F_TRAINER_FEMALE | 
#line 5603
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5604
        .doubleBattle = FALSE,
#line 5605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5607
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5608
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5611
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5612
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5615
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5616
        .trainerName = _("MARTHA"),
#line 5617
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5618
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5619
F_TRAINER_FEMALE | 
#line 5620
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5621
        .doubleBattle = FALSE,
#line 5622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5624
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5625
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5628
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5629
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5632
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5633
        .trainerName = _("DIANA"),
#line 5634
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5635
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5636
F_TRAINER_FEMALE | 
#line 5637
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5638
        .doubleBattle = FALSE,
#line 5639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5641
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5642
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5645
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5646
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5649
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5650
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5653
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5654
        .trainerName = _("CEDRIC"),
#line 5655
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5656
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5658
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5659
        .doubleBattle = FALSE,
#line 5660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5662
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5663
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5666
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5667
        .trainerName = _("IRENE"),
#line 5668
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5669
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5670
F_TRAINER_FEMALE | 
#line 5671
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5672
        .doubleBattle = FALSE,
#line 5673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5675
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5676
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5679
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5680
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5683
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5684
        .trainerName = _("AMY & LIV"),
#line 5685
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5686
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5688
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5689
        .doubleBattle = TRUE,
#line 5690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5692
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5693
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5696
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5697
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5701
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5702
        .trainerName = _("GINA & MIA"),
#line 5703
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5704
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5706
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5707
        .doubleBattle = TRUE,
#line 5708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5710
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5711
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5714
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5715
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5718
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5719
        .trainerName = _("MIU & YUKI"),
#line 5720
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5721
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5723
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5724
        .doubleBattle = TRUE,
#line 5725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5727
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5728
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5731
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5732
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5736
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5737
        .trainerName = _("HUEY"),
#line 5738
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5739
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5741
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5742
        .doubleBattle = FALSE,
#line 5743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5745
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5747
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5746
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5749
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5751
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5750
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5753
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5754
        .trainerName = _("EDMOND"),
#line 5755
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5756
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5758
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5759
        .doubleBattle = FALSE,
#line 5760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5762
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5763
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5766
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5767
        .trainerName = _("ERNEST"),
#line 5768
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5769
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5771
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5772
        .doubleBattle = FALSE,
#line 5773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5775
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5776
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5779
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5780
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5783
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5784
        .trainerName = _("DWAYNE"),
#line 5785
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5786
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5788
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5789
        .doubleBattle = FALSE,
#line 5790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5792
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5796
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5797
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5800
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5801
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5804
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5805
        .trainerName = _("PHILLIP"),
#line 5806
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5807
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5809
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5810
        .doubleBattle = FALSE,
#line 5811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5813
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5814
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5817
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5818
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5821
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5822
        .trainerName = _("LEONARD"),
#line 5823
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5824
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5826
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5827
        .doubleBattle = FALSE,
#line 5828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5830
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5831
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5834
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5835
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5838
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5839
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5842
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5843
        .trainerName = _("DUNCAN"),
#line 5844
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5845
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5847
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5848
        .doubleBattle = FALSE,
#line 5849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5851
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5852
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5855
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5856
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5859
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5860
        .trainerName = _("ELI"),
#line 5861
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5862
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5864
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5865
        .doubleBattle = FALSE,
#line 5866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5868
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5870
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5869
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5872
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5873
        .trainerName = _("ANNIKA"),
#line 5874
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5875
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5876
F_TRAINER_FEMALE | 
#line 5877
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5878
        .doubleBattle = FALSE,
#line 5879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5881
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5881
            .heldItem = ITEM_FOCUS_SASH,
#line 5883
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5882
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5885
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5885
            .heldItem = ITEM_FOCUS_SASH,
#line 5887
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5886
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5889
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5890
        .trainerName = _("JAZMYN"),
#line 5891
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5892
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5893
F_TRAINER_FEMALE | 
#line 5894
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5895
        .items = { ITEM_HYPER_POTION },
#line 5896
        .doubleBattle = FALSE,
#line 5897
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5899
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5900
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5903
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5904
        .trainerName = _("JONAS"),
#line 5905
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5906
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5908
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5909
        .doubleBattle = FALSE,
#line 5910
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5912
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5913
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5916
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5917
        .trainerName = _("KAYLEY"),
#line 5918
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5919
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5920
F_TRAINER_FEMALE | 
#line 5921
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5922
        .doubleBattle = FALSE,
#line 5923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5925
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5926
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5929
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5930
        .trainerName = _("AURON"),
#line 5931
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5932
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5934
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5935
        .doubleBattle = FALSE,
#line 5936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5938
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5939
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5942
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5943
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5946
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5947
        .trainerName = _("KELVIN"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5955
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5957
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5956
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5959
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5960
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5963
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5964
        .trainerName = _("MARLEY"),
#line 5965
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5966
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5967
F_TRAINER_FEMALE | 
#line 5968
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5969
        .items = { ITEM_HYPER_POTION },
#line 5970
        .doubleBattle = FALSE,
#line 5971
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5973
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5974
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5977
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5978
        .trainerName = _("REYNA"),
#line 5979
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5980
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5981
F_TRAINER_FEMALE | 
#line 5982
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5983
        .doubleBattle = FALSE,
#line 5984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5986
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5987
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5990
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5992
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5991
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5994
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 5995
        .trainerName = _("HUDSON"),
#line 5996
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5997
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5999
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6000
        .doubleBattle = FALSE,
#line 6001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6003
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6004
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6007
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6008
        .trainerName = _("CONOR"),
#line 6009
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6010
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6012
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6013
        .doubleBattle = FALSE,
#line 6014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6016
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6017
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6020
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6022
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6021
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6024
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6025
        .trainerName = _("EDWIN"),
#line 6026
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6027
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6029
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6030
        .doubleBattle = FALSE,
#line 6031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6033
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6034
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6037
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6038
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6041
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6042
        .trainerName = _("HECTOR"),
#line 6043
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6044
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6046
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6047
        .doubleBattle = FALSE,
#line 6048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6050
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6051
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6054
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6055
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6058
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6059
        .trainerName = _("TABITHA"),
#line 6060
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6061
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6063
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6064
        .doubleBattle = FALSE,
#line 6065
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6067
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .heldItem = ITEM_HEAT_ROCK,
#line 6070
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6068
            .ability = ABILITY_DROUGHT,
#line 6069
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6071
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6076
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6076
            .heldItem = ITEM_POISON_BARB,
#line 6079
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6077
            .ability = ABILITY_LEVITATE,
#line 6078
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6080
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6085
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6085
            .heldItem = ITEM_LIFE_ORB,
#line 6088
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6087
            .ability = ABILITY_LEVITATE,
#line 6086
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6089
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6094
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6095
        .trainerName = _("SAMUEL"),
#line 6096
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6097
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6099
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6100
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6101
        .doubleBattle = TRUE,
#line 6102
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6104
            .species = SPECIES_SLOWKING,
#line 6104
            .gender = TRAINER_MON_MALE,
#line 6104
            .heldItem = ITEM_LIFE_ORB,
#line 6108
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6105
            .ability = ABILITY_REGENERATOR,
#line 6106
            .lvl = 67,
#line 6107
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6109
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6114
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6114
            .heldItem = ITEM_ROCKY_HELMET,
#line 6118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6115
            .ability = ABILITY_REGENERATOR,
#line 6116
            .lvl = 67,
#line 6117
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6118
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6123
            .species = SPECIES_GLISCOR,
#line 6123
            .gender = TRAINER_MON_FEMALE,
#line 6123
            .heldItem = ITEM_TOXIC_ORB,
#line 6127
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6124
            .ability = ABILITY_POISON_HEAL,
#line 6125
            .lvl = 67,
#line 6126
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6128
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6133
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6133
            .heldItem = ITEM_ASSAULT_VEST,
#line 6137
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6134
            .ability = ABILITY_CLEAR_BODY,
#line 6135
            .lvl = 67,
#line 6136
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6138
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6143
            .species = SPECIES_HONCHKROW,
#line 6143
            .gender = TRAINER_MON_MALE,
#line 6143
            .heldItem = ITEM_FOCUS_SASH,
#line 6147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6144
            .ability = ABILITY_MOXIE,
#line 6145
            .lvl = 67,
#line 6146
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6147
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6152
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6152
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6153
            .ability = ABILITY_INFILTRATOR,
#line 6154
            .lvl = 67,
#line 6155
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6156
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6161
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6162
        .trainerName = _("SAMUEL"),
#line 6163
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6164
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6166
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6167
        .doubleBattle = FALSE,
#line 6168
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6170
            .species = SPECIES_SLOWPOKE,
#line 6170
            .gender = TRAINER_MON_MALE,
#line 6174
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6171
            .ability = ABILITY_REGENERATOR,
#line 6172
            .lvl = 5,
#line 6173
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6175
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6179
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6180
        .trainerName = _("SAMUEL"),
#line 6181
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6182
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6184
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6185
        .doubleBattle = FALSE,
#line 6186
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6188
            .species = SPECIES_SLOWPOKE,
#line 6188
            .gender = TRAINER_MON_MALE,
#line 6188
            .heldItem = ITEM_FIGY_BERRY,
#line 6192
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6189
            .ability = ABILITY_REGENERATOR,
#line 6190
            .lvl = 24,
#line 6191
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6193
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6198
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6198
            .heldItem = ITEM_LUM_BERRY,
#line 6202
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6199
            .ability = ABILITY_REGENERATOR,
#line 6200
            .lvl = 24,
#line 6201
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6203
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6208
            .species = SPECIES_GLIGAR,
#line 6208
            .gender = TRAINER_MON_FEMALE,
#line 6208
            .heldItem = ITEM_RAZOR_FANG,
#line 6212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6209
            .ability = ABILITY_HYPER_CUTTER,
#line 6210
            .lvl = 24,
#line 6211
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6213
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6218
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6219
            .ability = ABILITY_CLEAR_BODY,
#line 6220
            .lvl = 24,
#line 6221
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6222
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6227
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6228
        .trainerName = _("SAMUEL"),
#line 6229
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6230
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6232
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6233
        .doubleBattle = FALSE,
#line 6234
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6236
            .species = SPECIES_SLOWPOKE,
#line 6236
            .gender = TRAINER_MON_MALE,
#line 6236
            .heldItem = ITEM_LIFE_ORB,
#line 6240
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6237
            .ability = ABILITY_REGENERATOR,
#line 6238
            .lvl = 47,
#line 6239
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6241
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6246
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6246
            .heldItem = ITEM_ROCKY_HELMET,
#line 6250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6247
            .ability = ABILITY_REGENERATOR,
#line 6248
            .lvl = 47,
#line 6249
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6250
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6255
            .species = SPECIES_GLIGAR,
#line 6255
            .gender = TRAINER_MON_FEMALE,
#line 6255
            .heldItem = ITEM_RAZOR_FANG,
#line 6259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6256
            .ability = ABILITY_HYPER_CUTTER,
#line 6257
            .lvl = 47,
#line 6258
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6260
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6265
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6265
            .heldItem = ITEM_ASSAULT_VEST,
#line 6269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6266
            .ability = ABILITY_CLEAR_BODY,
#line 6267
            .lvl = 47,
#line 6268
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6269
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6274
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6274
            .heldItem = ITEM_FOCUS_SASH,
#line 6278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6275
            .ability = ABILITY_PRANKSTER,
#line 6276
            .lvl = 47,
#line 6277
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6278
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6283
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6284
        .trainerName = _("SAMUEL"),
#line 6285
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6286
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6288
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6289
        .doubleBattle = FALSE,
#line 6290
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6292
            .species = SPECIES_SLOWPOKE,
#line 6292
            .gender = TRAINER_MON_MALE,
#line 6296
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6293
            .ability = ABILITY_REGENERATOR,
#line 6294
            .lvl = 5,
#line 6295
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6297
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6301
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6302
        .trainerName = _("SAMUEL"),
#line 6303
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6304
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6306
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6307
        .doubleBattle = FALSE,
#line 6308
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6310
            .species = SPECIES_SLOWPOKE,
#line 6310
            .gender = TRAINER_MON_MALE,
#line 6310
            .heldItem = ITEM_FIGY_BERRY,
#line 6314
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6311
            .ability = ABILITY_REGENERATOR,
#line 6312
            .lvl = 25,
#line 6313
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6315
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6320
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6320
            .heldItem = ITEM_LUM_BERRY,
#line 6324
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6321
            .ability = ABILITY_REGENERATOR,
#line 6322
            .lvl = 25,
#line 6323
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6325
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6330
            .species = SPECIES_GLIGAR,
#line 6330
            .gender = TRAINER_MON_FEMALE,
#line 6330
            .heldItem = ITEM_RAZOR_FANG,
#line 6334
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6331
            .ability = ABILITY_HYPER_CUTTER,
#line 6332
            .lvl = 25,
#line 6333
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6335
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6340
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6340
            .heldItem = ITEM_METAL_COAT,
#line 6344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6341
            .ability = ABILITY_CLEAR_BODY,
#line 6342
            .lvl = 25,
#line 6343
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6344
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6350
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6351
        .trainerName = _("SAMUEL"),
#line 6352
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6353
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6355
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6356
        .doubleBattle = FALSE,
#line 6357
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6359
            .species = SPECIES_SLOWPOKE,
#line 6359
            .gender = TRAINER_MON_MALE,
#line 6359
            .heldItem = ITEM_LIFE_ORB,
#line 6363
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6360
            .ability = ABILITY_REGENERATOR,
#line 6361
            .lvl = 44,
#line 6362
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6364
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6369
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6369
            .heldItem = ITEM_ROCKY_HELMET,
#line 6372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6370
            .ability = ABILITY_REGENERATOR,
#line 6372
            .lvl = 100,
#line 6371
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6372
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6377
            .species = SPECIES_GLIGAR,
#line 6377
            .gender = TRAINER_MON_FEMALE,
#line 6377
            .heldItem = ITEM_RAZOR_FANG,
#line 6381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6378
            .ability = ABILITY_HYPER_CUTTER,
#line 6379
            .lvl = 44,
#line 6380
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6382
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6387
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6387
            .heldItem = ITEM_ASSAULT_VEST,
#line 6391
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6388
            .ability = ABILITY_CLEAR_BODY,
#line 6389
            .lvl = 44,
#line 6390
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6391
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6396
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6397
        .trainerName = _("SAMUEL"),
#line 6398
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6399
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6401
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6402
        .doubleBattle = FALSE,
#line 6403
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6405
            .species = SPECIES_SLOWPOKE,
#line 6405
            .gender = TRAINER_MON_MALE,
#line 6409
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6406
            .ability = ABILITY_REGENERATOR,
#line 6407
            .lvl = 5,
#line 6408
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6410
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6414
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6415
        .trainerName = _("SAMUEL"),
#line 6416
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6417
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6419
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6420
        .doubleBattle = FALSE,
#line 6421
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6423
            .species = SPECIES_SLOWPOKE,
#line 6423
            .gender = TRAINER_MON_MALE,
#line 6423
            .heldItem = ITEM_FIGY_BERRY,
#line 6427
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6424
            .ability = ABILITY_REGENERATOR,
#line 6425
            .lvl = 24,
#line 6426
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6428
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6433
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6433
            .heldItem = ITEM_LUM_BERRY,
#line 6437
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6434
            .ability = ABILITY_REGENERATOR,
#line 6435
            .lvl = 24,
#line 6436
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6438
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6443
            .species = SPECIES_GLIGAR,
#line 6443
            .gender = TRAINER_MON_FEMALE,
#line 6443
            .heldItem = ITEM_RAZOR_FANG,
#line 6447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6444
            .ability = ABILITY_HYPER_CUTTER,
#line 6445
            .lvl = 24,
#line 6446
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6448
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6454
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6455
        .trainerName = _("SAMUEL"),
#line 6456
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6457
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6459
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6460
        .doubleBattle = FALSE,
#line 6461
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6463
            .species = SPECIES_SLOWPOKE,
#line 6463
            .gender = TRAINER_MON_MALE,
#line 6463
            .heldItem = ITEM_LIFE_ORB,
#line 6467
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6464
            .ability = ABILITY_REGENERATOR,
#line 6465
            .lvl = 44,
#line 6466
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6468
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6473
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6473
            .heldItem = ITEM_ROCKY_HELMET,
#line 6476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6474
            .ability = ABILITY_REGENERATOR,
#line 6476
            .lvl = 100,
#line 6475
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6476
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6481
            .species = SPECIES_GLIGAR,
#line 6481
            .gender = TRAINER_MON_FEMALE,
#line 6481
            .heldItem = ITEM_RAZOR_FANG,
#line 6485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6482
            .ability = ABILITY_HYPER_CUTTER,
#line 6483
            .lvl = 44,
#line 6484
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6486
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6491
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6491
            .heldItem = ITEM_ASSAULT_VEST,
#line 6495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6492
            .ability = ABILITY_CLEAR_BODY,
#line 6493
            .lvl = 44,
#line 6494
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6495
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6500
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6501
        .trainerName = _("MAY"),
#line 6502
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6503
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6504
F_TRAINER_FEMALE | 
#line 6505
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6506
        .doubleBattle = FALSE,
#line 6507
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6509
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6510
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6513
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6514
        .trainerName = _("MAY"),
#line 6515
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6516
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6517
F_TRAINER_FEMALE | 
#line 6518
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6519
        .doubleBattle = FALSE,
#line 6520
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6522
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6524
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6523
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6526
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6528
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6527
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6530
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6532
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6531
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6534
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6535
        .trainerName = _("MAY"),
#line 6536
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6537
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6538
F_TRAINER_FEMALE | 
#line 6539
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6540
        .doubleBattle = FALSE,
#line 6541
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6543
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6545
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6544
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6547
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6549
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6548
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6551
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6553
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6552
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6555
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6556
        .trainerName = _("MAY"),
#line 6557
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6558
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6559
F_TRAINER_FEMALE | 
#line 6560
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6561
        .doubleBattle = FALSE,
#line 6562
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6564
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6565
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6568
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6569
        .trainerName = _("MAY"),
#line 6570
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6571
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6572
F_TRAINER_FEMALE | 
#line 6573
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6574
        .doubleBattle = FALSE,
#line 6575
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6577
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6579
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6578
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6581
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6582
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6585
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6587
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6586
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6589
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6590
        .trainerName = _("MAY"),
#line 6591
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6592
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6593
F_TRAINER_FEMALE | 
#line 6594
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6595
        .doubleBattle = FALSE,
#line 6596
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6598
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6600
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6599
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6602
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6603
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6606
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6608
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6607
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6610
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6611
        .trainerName = _("MAY"),
#line 6612
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6613
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6614
F_TRAINER_FEMALE | 
#line 6615
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6616
        .doubleBattle = FALSE,
#line 6617
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6619
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6620
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6623
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6624
        .trainerName = _("MAY"),
#line 6625
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6626
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6627
F_TRAINER_FEMALE | 
#line 6628
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6629
        .doubleBattle = FALSE,
#line 6630
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6632
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6634
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6633
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6636
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6638
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6637
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6640
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6642
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6641
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6644
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6645
        .trainerName = _("MAY"),
#line 6646
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6647
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6648
F_TRAINER_FEMALE | 
#line 6649
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6650
        .doubleBattle = FALSE,
#line 6651
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6653
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6655
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6654
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6657
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6659
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6658
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6661
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6663
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6662
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6665
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6666
        .trainerName = _("ISAAC"),
#line 6667
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6668
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6670
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6671
        .doubleBattle = FALSE,
#line 6672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6674
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6675
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6678
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6679
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6682
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6683
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6686
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6687
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6690
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6691
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6694
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6695
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6698
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6699
        .trainerName = _("DAVIS"),
#line 6700
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6701
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6703
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6704
        .doubleBattle = FALSE,
#line 6705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6707
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6708
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6711
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6712
        .trainerName = _("MITCHELL"),
#line 6713
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6714
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6716
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6717
        .doubleBattle = FALSE,
#line 6718
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6720
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6721
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6724
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6725
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6728
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6729
        .trainerName = _("LYDIA"),
#line 6730
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6731
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6732
F_TRAINER_FEMALE | 
#line 6733
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6734
        .doubleBattle = FALSE,
#line 6735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6737
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6738
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6741
            .species = SPECIES_SANDSHREW,
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
            .species = SPECIES_RALTS,
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
            .species = SPECIES_LILLIPUP,
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
            .species = SPECIES_SAWK,
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
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6758
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6761
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6762
        .trainerName = _("HALLE"),
#line 6763
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6764
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6765
F_TRAINER_FEMALE | 
#line 6766
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6767
        .items = { ITEM_FULL_RESTORE },
#line 6768
        .doubleBattle = FALSE,
#line 6769
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6771
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6772
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6775
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6776
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6779
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6780
        .trainerName = _("GARRISON"),
#line 6781
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6782
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6784
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6785
        .doubleBattle = FALSE,
#line 6786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6788
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6789
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6792
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6793
        .trainerName = _("JACKSON"),
#line 6794
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6795
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6797
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6798
        .items = { ITEM_FULL_RESTORE },
#line 6799
        .doubleBattle = FALSE,
#line 6800
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6802
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6803
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6806
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6807
        .trainerName = _("LORENZO"),
#line 6808
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6809
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6811
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6812
        .items = { ITEM_FULL_RESTORE },
#line 6813
        .doubleBattle = FALSE,
#line 6814
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6816
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6818
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6817
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6820
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6822
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6821
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6824
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6826
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6825
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6828
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6829
        .trainerName = _("SEBASTIAN"),
#line 6830
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6831
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6833
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6834
        .items = { ITEM_FULL_RESTORE },
#line 6835
        .doubleBattle = FALSE,
#line 6836
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6838
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6839
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6842
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6843
        .trainerName = _("CATHERINE"),
#line 6844
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6845
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6846
F_TRAINER_FEMALE | 
#line 6847
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6848
        .items = { ITEM_FULL_RESTORE },
#line 6849
        .doubleBattle = FALSE,
#line 6850
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6852
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6854
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6853
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6856
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6858
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6857
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6860
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6861
        .trainerName = _("JENNA"),
#line 6862
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6863
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6864
F_TRAINER_FEMALE | 
#line 6865
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6866
        .items = { ITEM_FULL_RESTORE },
#line 6867
        .doubleBattle = FALSE,
#line 6868
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6870
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6872
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6871
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6874
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6875
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6878
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6880
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6879
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6882
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6883
        .trainerName = _("SOPHIA"),
#line 6884
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6885
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6886
F_TRAINER_FEMALE | 
#line 6887
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6888
        .items = { ITEM_FULL_RESTORE },
#line 6889
        .doubleBattle = FALSE,
#line 6890
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6892
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6894
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6893
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6896
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6898
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6897
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6900
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6901
        .trainerName = _("JULIO"),
#line 6902
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6903
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6905
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6906
        .doubleBattle = FALSE,
#line 6907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6909
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6910
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6913
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6914
        .trainerName = _("GRUNT"),
#line 6915
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6916
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6918
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6919
        .doubleBattle = FALSE,
#line 6920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6922
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6924
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6923
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6926
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6928
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6927
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6930
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6931
        .trainerName = _("GRUNT"),
#line 6932
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6933
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6934
F_TRAINER_FEMALE | 
#line 6935
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6936
        .doubleBattle = FALSE,
#line 6937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6939
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6940
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6943
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6944
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6947
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6948
        .trainerName = _("GRUNT"),
#line 6949
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6950
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6951
F_TRAINER_FEMALE | 
#line 6952
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6953
        .doubleBattle = FALSE,
#line 6954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6956
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6957
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6960
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6961
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6964
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6965
        .trainerName = _("GRUNT"),
#line 6966
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6967
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6969
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6970
        .doubleBattle = FALSE,
#line 6971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6973
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6975
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6974
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6977
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6979
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6978
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6981
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6982
        .trainerName = _("MARC"),
#line 6983
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6984
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6986
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6987
        .doubleBattle = FALSE,
#line 6988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6990
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6991
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6994
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6996
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6995
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6998
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6999
        .trainerName = _("BRENDEN"),
#line 7000
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7001
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7003
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7004
        .doubleBattle = FALSE,
#line 7005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7007
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7009
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7008
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7011
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7012
        .trainerName = _("LILITH"),
#line 7013
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7014
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7015
F_TRAINER_FEMALE | 
#line 7016
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7017
        .doubleBattle = FALSE,
#line 7018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7020
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7022
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7021
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7024
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7025
        .trainerName = _("CRISTIAN"),
#line 7026
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7027
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7029
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7030
        .doubleBattle = FALSE,
#line 7031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7033
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7035
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7034
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7037
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7038
        .trainerName = _("SYLVIA"),
#line 7039
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7040
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7041
F_TRAINER_FEMALE | 
#line 7042
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7043
        .doubleBattle = FALSE,
#line 7044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7046
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7048
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7047
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7050
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7051
        .trainerName = _("LEONARDO"),
#line 7052
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7053
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7055
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7056
        .doubleBattle = FALSE,
#line 7057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7059
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7060
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7063
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7064
        .trainerName = _("ATHENA"),
#line 7065
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7066
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7067
F_TRAINER_FEMALE | 
#line 7068
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7069
        .items = { ITEM_HYPER_POTION },
#line 7070
        .doubleBattle = FALSE,
#line 7071
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7073
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7075
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7074
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7077
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7079
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7078
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7082
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7083
        .trainerName = _("HARRISON"),
#line 7084
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7085
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7087
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7088
        .doubleBattle = FALSE,
#line 7089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7091
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7092
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7095
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7096
        .trainerName = _("GRUNT"),
#line 7097
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7098
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7100
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7101
        .doubleBattle = FALSE,
#line 7102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7104
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7105
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7108
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7109
        .trainerName = _("CLARENCE"),
#line 7110
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7111
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7113
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7114
        .doubleBattle = FALSE,
#line 7115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7117
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7118
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7121
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7122
        .trainerName = _("TERRY"),
#line 7123
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7124
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7125
F_TRAINER_FEMALE | 
#line 7126
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7127
        .doubleBattle = FALSE,
#line 7128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7130
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7131
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7134
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7135
        .trainerName = _("NATE"),
#line 7136
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7137
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7139
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7140
        .doubleBattle = FALSE,
#line 7141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7143
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7145
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7144
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7147
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7148
        .trainerName = _("KATHLEEN"),
#line 7149
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7150
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7151
F_TRAINER_FEMALE | 
#line 7152
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7153
        .doubleBattle = FALSE,
#line 7154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7156
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7158
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7157
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7160
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7161
        .trainerName = _("CLIFFORD"),
#line 7162
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7163
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7165
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7166
        .doubleBattle = FALSE,
#line 7167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7169
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7170
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7173
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7174
        .trainerName = _("NICHOLAS"),
#line 7175
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7176
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
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
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7183
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7186
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7187
        .trainerName = _("GRUNT"),
#line 7188
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7189
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7190
F_TRAINER_FEMALE | 
#line 7191
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7192
        .doubleBattle = FALSE,
#line 7193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7195
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7196
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7199
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7200
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7203
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7204
        .trainerName = _("GRUNT"),
#line 7205
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7206
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7208
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7209
        .doubleBattle = FALSE,
#line 7210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7212
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7213
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7216
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7217
        .trainerName = _("GRUNT"),
#line 7218
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7219
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7221
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7222
        .doubleBattle = FALSE,
#line 7223
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7225
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7226
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7229
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7230
        .trainerName = _("GRUNT"),
#line 7231
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7232
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7234
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7235
        .doubleBattle = FALSE,
#line 7236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7238
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7239
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7242
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7243
        .trainerName = _("GRUNT"),
#line 7244
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7245
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7247
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7248
        .doubleBattle = FALSE,
#line 7249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7251
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7252
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7255
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7256
        .trainerName = _("MACEY"),
#line 7257
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7258
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7259
F_TRAINER_FEMALE | 
#line 7260
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7261
        .doubleBattle = FALSE,
#line 7262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7264
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7265
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7268
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7269
        .trainerName = _("SAMUEL"),
#line 7270
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7271
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7273
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7274
        .doubleBattle = FALSE,
#line 7275
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7277
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7277
            .heldItem = ITEM_RAZOR_FANG,
#line 7281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7278
            .ability = ABILITY_HYPER_CUTTER,
#line 7279
            .lvl = 16,
#line 7280
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7281
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7286
            .species = SPECIES_SLOWPOKE,
#line 7286
            .gender = TRAINER_MON_MALE,
#line 7290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7287
            .ability = ABILITY_REGENERATOR,
#line 7288
            .lvl = 16,
#line 7289
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7290
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7295
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7296
            .ability = ABILITY_REGENERATOR,
#line 7297
            .lvl = 16,
#line 7298
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7299
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7304
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7305
        .trainerName = _("SAMUEL"),
#line 7306
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7307
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7309
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7310
        .doubleBattle = FALSE,
#line 7311
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7313
            .species = SPECIES_SLOWPOKE,
#line 7313
            .gender = TRAINER_MON_MALE,
#line 7317
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7314
            .ability = ABILITY_REGENERATOR,
#line 7315
            .lvl = 16,
#line 7316
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7318
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7323
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7324
            .ability = ABILITY_REGENERATOR,
#line 7325
            .lvl = 16,
#line 7326
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7327
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7334
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7335
        .trainerName = _("PAXTON"),
#line 7336
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7337
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7339
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7340
        .doubleBattle = FALSE,
#line 7341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7343
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7344
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7347
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7348
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7351
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7352
        .trainerName = _("ISABELLA"),
#line 7353
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7354
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7355
F_TRAINER_FEMALE | 
#line 7356
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7357
        .doubleBattle = FALSE,
#line 7358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7360
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7361
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7364
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7365
        .trainerName = _("GRUNT"),
#line 7366
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7367
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7368
F_TRAINER_FEMALE | 
#line 7369
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7370
        .doubleBattle = FALSE,
#line 7371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7373
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7374
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7377
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7378
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7381
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7382
        .trainerName = _("TABITHA"),
#line 7383
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7384
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7386
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7387
        .doubleBattle = FALSE,
#line 7388
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7390
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7393
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7391
            .ability = ABILITY_DROUGHT,
#line 7392
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7394
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7399
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7399
            .heldItem = ITEM_LUM_BERRY,
#line 7402
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7400
            .ability = ABILITY_LEVITATE,
#line 7401
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7403
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7407
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7407
            .heldItem = ITEM_SITRUS_BERRY,
#line 7410
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7408
            .ability = ABILITY_LEVITATE,
#line 7409
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7411
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7415
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7415
            .heldItem = ITEM_LUM_BERRY,
#line 7418
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7416
            .ability = ABILITY_OWN_TEMPO,
#line 7417
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7419
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7424
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7425
        .trainerName = _("JONATHAN"),
#line 7426
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7427
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7429
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7430
        .items = { ITEM_HYPER_POTION },
#line 7431
        .doubleBattle = FALSE,
#line 7432
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7434
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7435
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7438
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7439
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7442
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7443
        .trainerName = _("SAMUEL"),
#line 7444
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7445
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7447
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7448
        .doubleBattle = FALSE,
#line 7449
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7451
            .species = SPECIES_SLOWPOKE,
#line 7451
            .gender = TRAINER_MON_MALE,
#line 7455
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7452
            .ability = ABILITY_REGENERATOR,
#line 7453
            .lvl = 16,
#line 7454
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7456
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7461
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7462
            .ability = ABILITY_REGENERATOR,
#line 7463
            .lvl = 16,
#line 7464
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7465
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7472
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7473
        .trainerName = _("MAY"),
#line 7474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7475
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7476
F_TRAINER_FEMALE | 
#line 7477
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7478
        .doubleBattle = FALSE,
#line 7479
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7481
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7483
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7482
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7485
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7487
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7486
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7489
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7490
        .trainerName = _("MAXIE"),
#line 7491
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7492
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7494
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7495
        .doubleBattle = FALSE,
#line 7496
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7498
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7498
            .heldItem = ITEM_IRON_BALL,
#line 7501
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7499
            .ability = ABILITY_HEAVY_METAL,
#line 7500
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7501
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7506
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7506
            .heldItem = ITEM_SHARP_BEAK,
#line 7509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7507
            .ability = ABILITY_INNER_FOCUS,
#line 7508
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7509
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7514
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7514
            .heldItem = ITEM_MUSCLE_BAND,
#line 7517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7515
            .ability = ABILITY_IMMUNITY,
#line 7516
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7517
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7522
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .heldItem = ITEM_EXPERT_BELT,
#line 7525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7523
            .ability = ABILITY_UNNERVE,
#line 7524
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7525
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7530
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7530
            .heldItem = ITEM_ROCKY_HELMET,
#line 7533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7531
            .ability = ABILITY_ROCK_HEAD,
#line 7532
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7533
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7538
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7539
        .trainerName = _("MAXIE"),
#line 7540
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7541
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7543
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7544
        .doubleBattle = FALSE,
#line 7545
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7547
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7547
            .heldItem = ITEM_MUSCLE_BAND,
#line 7550
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7548
            .ability = ABILITY_HEAVY_METAL,
#line 7549
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7551
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7556
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7556
            .heldItem = ITEM_LUM_BERRY,
#line 7559
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7557
            .ability = ABILITY_IMMUNITY,
#line 7558
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7560
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7565
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7565
            .heldItem = ITEM_LUM_BERRY,
#line 7568
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7566
            .ability = ABILITY_UNNERVE,
#line 7567
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7569
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7574
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .heldItem = ITEM_ROCKY_HELMET,
#line 7577
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7575
            .ability = ABILITY_ROCK_HEAD,
#line 7576
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7578
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7583
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7583
            .heldItem = ITEM_SHARP_BEAK,
#line 7586
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7584
            .ability = ABILITY_INNER_FOCUS,
#line 7585
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7587
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7592
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7593
        .trainerName = _("TIANA"),
#line 7594
        .trainerClass = TRAINER_CLASS_LASS,
#line 7595
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7596
F_TRAINER_FEMALE | 
#line 7597
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7598
        .doubleBattle = FALSE,
#line 7599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7601
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7602
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7605
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7606
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7609
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7610
        .trainerName = _("HALEY"),
#line 7611
        .trainerClass = TRAINER_CLASS_LASS,
#line 7612
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7613
F_TRAINER_FEMALE | 
#line 7614
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7615
        .doubleBattle = FALSE,
#line 7616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7618
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7619
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7622
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7623
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7626
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7627
        .trainerName = _("JANICE"),
#line 7628
        .trainerClass = TRAINER_CLASS_LASS,
#line 7629
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7630
F_TRAINER_FEMALE | 
#line 7631
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7632
        .doubleBattle = FALSE,
#line 7633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7635
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7636
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7639
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7640
        .trainerName = _("VIVI"),
#line 7641
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7642
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7643
F_TRAINER_FEMALE | 
#line 7644
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7645
        .doubleBattle = FALSE,
#line 7646
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7648
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7649
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7652
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7654
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7653
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7656
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7658
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7657
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7660
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7661
        .trainerName = _("SALLY"),
#line 7662
        .trainerClass = TRAINER_CLASS_LASS,
#line 7663
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7664
F_TRAINER_FEMALE | 
#line 7665
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7666
        .doubleBattle = FALSE,
#line 7667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7669
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7670
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7673
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7674
        .trainerName = _("ROBIN"),
#line 7675
        .trainerClass = TRAINER_CLASS_LASS,
#line 7676
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7677
F_TRAINER_FEMALE | 
#line 7678
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7679
        .doubleBattle = FALSE,
#line 7680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7682
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7683
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7686
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7687
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7690
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7691
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7694
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7695
        .trainerName = _("ANDREA"),
#line 7696
        .trainerClass = TRAINER_CLASS_LASS,
#line 7697
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7698
F_TRAINER_FEMALE | 
#line 7699
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7700
        .doubleBattle = FALSE,
#line 7701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7703
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7704
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7707
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7708
        .trainerName = _("CRISSY"),
#line 7709
        .trainerClass = TRAINER_CLASS_LASS,
#line 7710
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7711
F_TRAINER_FEMALE | 
#line 7712
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7713
        .doubleBattle = FALSE,
#line 7714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7716
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7718
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7717
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7720
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7721
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7724
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7725
        .trainerName = _("RICK"),
#line 7726
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7727
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7729
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7730
        .doubleBattle = FALSE,
#line 7731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7733
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7734
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7737
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7738
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7741
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7742
        .trainerName = _("LYLE"),
#line 7743
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7744
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7746
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7747
        .doubleBattle = FALSE,
#line 7748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7750
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7751
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7754
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7755
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7758
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7759
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7762
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7763
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7766
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 7767
        .trainerName = _("JOSE"),
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
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7777
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7776
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7779
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7781
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7780
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7783
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7784
        .trainerName = _("DOUG"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7792
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7793
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7796
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7797
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7800
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7801
        .trainerName = _("GREG"),
#line 7802
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7803
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7805
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7806
        .doubleBattle = FALSE,
#line 7807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7809
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7810
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7813
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7814
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7817
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7818
        .trainerName = _("KENT"),
#line 7819
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7820
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7822
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7823
        .doubleBattle = FALSE,
#line 7824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7826
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7827
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7830
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7831
        .trainerName = _("JAMES"),
#line 7832
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7833
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7835
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7836
        .doubleBattle = FALSE,
#line 7837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7839
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7840
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7843
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7844
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7847
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7848
        .trainerName = _("BRICE"),
#line 7849
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7850
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7852
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7853
        .doubleBattle = FALSE,
#line 7854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7856
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7857
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7860
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7861
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7864
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7865
        .trainerName = _("TRENT"),
#line 7866
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7867
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7869
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7870
        .doubleBattle = FALSE,
#line 7871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7873
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7874
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7877
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7878
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7881
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7882
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7885
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7886
        .trainerName = _("LENNY"),
#line 7887
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7888
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7890
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7891
        .doubleBattle = FALSE,
#line 7892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7894
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7895
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7898
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7899
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7902
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7903
        .trainerName = _("LUCAS"),
#line 7904
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7905
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7907
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7908
        .doubleBattle = FALSE,
#line 7909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7911
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7912
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7915
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7916
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7919
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7920
        .trainerName = _("ALAN"),
#line 7921
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7922
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7924
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7925
        .doubleBattle = FALSE,
#line 7926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7928
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7929
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7932
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7933
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7936
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7937
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7940
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7941
        .trainerName = _("CLARK"),
#line 7942
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7943
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7945
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7946
        .doubleBattle = FALSE,
#line 7947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7949
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7950
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7953
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7954
        .trainerName = _("ERIC"),
#line 7955
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7956
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7958
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7959
        .doubleBattle = FALSE,
#line 7960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7962
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7963
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7966
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7967
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7970
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7971
        .trainerName = _("MIKE"),
#line 7972
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7973
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7975
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7976
        .doubleBattle = FALSE,
#line 7977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7979
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7980
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7983
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7984
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7987
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7988
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7991
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7992
        .trainerName = _("DEZ & LUKE"),
#line 7993
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7994
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7996
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7997
        .doubleBattle = TRUE,
#line 7998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8000
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8001
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8004
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8005
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8008
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8009
        .trainerName = _("LEA & JED"),
#line 8010
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8011
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8013
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8014
        .doubleBattle = TRUE,
#line 8015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8017
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8018
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8021
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8022
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8025
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8026
        .trainerName = _("KIRA & DAN"),
#line 8027
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8028
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8030
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8031
        .doubleBattle = TRUE,
#line 8032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8034
            .species = SPECIES_VAPOREON,
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
            .species = SPECIES_SLOWKING,
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
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8043
        .trainerName = _("JOHANNA"),
#line 8044
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8045
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8046
F_TRAINER_FEMALE | 
#line 8047
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8048
        .doubleBattle = FALSE,
#line 8049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8051
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8052
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8055
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8056
        .trainerName = _("GERALD"),
#line 8057
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8058
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8060
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8061
        .items = { ITEM_HYPER_POTION },
#line 8062
        .doubleBattle = FALSE,
#line 8063
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8065
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8067
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8066
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8070
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8071
        .trainerName = _("VIVIAN"),
#line 8072
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8073
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8074
F_TRAINER_FEMALE | 
#line 8075
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8076
        .doubleBattle = FALSE,
#line 8077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8079
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8081
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8080
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8083
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8084
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8087
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8088
        .trainerName = _("DANIELLE"),
#line 8089
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8090
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8091
F_TRAINER_FEMALE | 
#line 8092
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8093
        .doubleBattle = FALSE,
#line 8094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8096
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8097
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8100
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8101
        .trainerName = _("HIDEO"),
#line 8102
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8103
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8105
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8106
        .doubleBattle = FALSE,
#line 8107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8109
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8110
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8113
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8114
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8117
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8118
        .trainerName = _("KEIGO"),
#line 8119
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8120
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8122
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8123
        .doubleBattle = FALSE,
#line 8124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8126
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8127
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8130
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8131
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8134
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8135
        .trainerName = _("RILEY"),
#line 8136
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8137
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8139
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8140
        .doubleBattle = FALSE,
#line 8141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8143
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8144
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8147
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8148
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8151
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8152
        .trainerName = _("FLINT"),
#line 8153
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8154
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8156
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8157
        .doubleBattle = FALSE,
#line 8158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8160
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8162
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8161
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8164
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8166
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8165
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8168
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8169
        .trainerName = _("ASHLEY"),
#line 8170
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8171
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8172
F_TRAINER_FEMALE | 
#line 8173
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8174
        .doubleBattle = FALSE,
#line 8175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8177
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8178
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8181
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8183
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8182
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8185
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8186
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8189
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8190
        .trainerName = _("WALLY"),
#line 8191
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8192
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8194
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8195
        .doubleBattle = FALSE,
#line 8196
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8198
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8199
            .ability = ABILITY_SAND_STREAM,
#line 8200
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8201
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8203
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8203
            .heldItem = ITEM_SHELL_BELL,
#line 8207
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8204
            .ability = ABILITY_STURDY,
#line 8205
            .lvl = 1,
#line 8206
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8208
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8210
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8211
        .trainerName = _("SAMUEL"),
#line 8212
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8213
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8215
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8216
        .doubleBattle = TRUE,
#line 8217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8219
            .species = SPECIES_SLOWKING,
#line 8219
            .gender = TRAINER_MON_MALE,
#line 8219
            .heldItem = ITEM_LIFE_ORB,
#line 8223
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8220
            .ability = ABILITY_REGENERATOR,
#line 8221
            .lvl = 54,
#line 8222
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8224
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8229
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8229
            .heldItem = ITEM_ROCKY_HELMET,
#line 8233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8230
            .ability = ABILITY_REGENERATOR,
#line 8231
            .lvl = 54,
#line 8232
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8233
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8238
            .species = SPECIES_GLISCOR,
#line 8238
            .gender = TRAINER_MON_FEMALE,
#line 8238
            .heldItem = ITEM_TOXIC_ORB,
#line 8242
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8239
            .ability = ABILITY_POISON_HEAL,
#line 8240
            .lvl = 54,
#line 8241
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8243
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8248
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8248
            .heldItem = ITEM_ASSAULT_VEST,
#line 8252
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8249
            .ability = ABILITY_CLEAR_BODY,
#line 8250
            .lvl = 54,
#line 8251
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8253
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8258
            .species = SPECIES_HONCHKROW,
#line 8258
            .gender = TRAINER_MON_MALE,
#line 8258
            .heldItem = ITEM_FOCUS_SASH,
#line 8262
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8259
            .ability = ABILITY_MOXIE,
#line 8260
            .lvl = 54,
#line 8261
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8263
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8269
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8270
        .trainerName = _("SAMUEL"),
#line 8271
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8272
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8274
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8275
        .doubleBattle = FALSE,
#line 8276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8278
            .species = SPECIES_SLOWKING,
#line 8278
            .gender = TRAINER_MON_MALE,
#line 8278
            .heldItem = ITEM_LIFE_ORB,
#line 8282
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8279
            .ability = ABILITY_REGENERATOR,
#line 8280
            .lvl = 54,
#line 8281
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8283
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8288
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8288
            .heldItem = ITEM_ROCKY_HELMET,
#line 8292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8289
            .ability = ABILITY_REGENERATOR,
#line 8290
            .lvl = 54,
#line 8291
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8292
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8297
            .species = SPECIES_GLISCOR,
#line 8297
            .gender = TRAINER_MON_FEMALE,
#line 8297
            .heldItem = ITEM_TOXIC_ORB,
#line 8301
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8298
            .ability = ABILITY_POISON_HEAL,
#line 8299
            .lvl = 54,
#line 8300
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8302
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8307
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8307
            .heldItem = ITEM_ASSAULT_VEST,
#line 8311
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8308
            .ability = ABILITY_CLEAR_BODY,
#line 8309
            .lvl = 54,
#line 8310
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8312
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8317
            .species = SPECIES_HONCHKROW,
#line 8317
            .gender = TRAINER_MON_MALE,
#line 8317
            .heldItem = ITEM_FOCUS_SASH,
#line 8321
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8318
            .ability = ABILITY_MOXIE,
#line 8319
            .lvl = 54,
#line 8320
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8322
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8328
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8329
        .trainerName = _("SAMUEL"),
#line 8330
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8331
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8334
        .doubleBattle = FALSE,
#line 8335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8337
            .species = SPECIES_SLOWKING,
#line 8337
            .gender = TRAINER_MON_MALE,
#line 8337
            .heldItem = ITEM_LIFE_ORB,
#line 8341
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8338
            .ability = ABILITY_REGENERATOR,
#line 8339
            .lvl = 54,
#line 8340
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8342
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8347
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8347
            .heldItem = ITEM_ROCKY_HELMET,
#line 8351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8348
            .ability = ABILITY_REGENERATOR,
#line 8349
            .lvl = 54,
#line 8350
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8351
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8356
            .species = SPECIES_GLISCOR,
#line 8356
            .gender = TRAINER_MON_FEMALE,
#line 8356
            .heldItem = ITEM_TOXIC_ORB,
#line 8360
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8357
            .ability = ABILITY_POISON_HEAL,
#line 8358
            .lvl = 54,
#line 8359
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8361
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8366
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8366
            .heldItem = ITEM_ASSAULT_VEST,
#line 8370
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8367
            .ability = ABILITY_CLEAR_BODY,
#line 8368
            .lvl = 54,
#line 8369
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8371
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8376
            .species = SPECIES_HONCHKROW,
#line 8376
            .gender = TRAINER_MON_MALE,
#line 8376
            .heldItem = ITEM_FOCUS_SASH,
#line 8380
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8377
            .ability = ABILITY_MOXIE,
#line 8378
            .lvl = 54,
#line 8379
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8381
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8387
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8388
        .trainerName = _("MAY"),
#line 8389
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8390
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8391
F_TRAINER_FEMALE | 
#line 8392
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8393
        .doubleBattle = FALSE,
#line 8394
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8396
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8398
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8397
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8400
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8402
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8401
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8404
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8406
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8405
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8408
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8410
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8409
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8412
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8413
        .trainerName = _("MAY"),
#line 8414
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8415
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8416
F_TRAINER_FEMALE | 
#line 8417
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8418
        .doubleBattle = FALSE,
#line 8419
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8421
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8423
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8422
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8425
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8427
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8426
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8429
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8431
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8430
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8433
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8435
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8434
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8437
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8438
        .trainerName = _("MAY"),
#line 8439
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8440
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8441
F_TRAINER_FEMALE | 
#line 8442
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8443
        .doubleBattle = FALSE,
#line 8444
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8446
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8448
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8447
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8450
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8452
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8451
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8454
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8456
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8455
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8458
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8460
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8459
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8462
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8463
        .trainerName = _("JONAH"),
#line 8464
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8465
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8467
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8468
        .doubleBattle = FALSE,
#line 8469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8471
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8472
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8475
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8476
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8479
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8480
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8483
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8484
        .trainerName = _("HENRY"),
#line 8485
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8486
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8488
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8489
        .doubleBattle = FALSE,
#line 8490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8492
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8493
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8496
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8497
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8500
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8501
        .trainerName = _("ROGER"),
#line 8502
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8503
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8505
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8506
        .doubleBattle = FALSE,
#line 8507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8509
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8510
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8513
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8514
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8517
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8518
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8521
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8522
        .trainerName = _("ALEXA"),
#line 8523
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8524
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8525
F_TRAINER_FEMALE | 
#line 8526
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8527
        .items = { ITEM_FULL_RESTORE },
#line 8528
        .doubleBattle = FALSE,
#line 8529
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8531
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8533
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8532
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8535
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8537
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8536
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8539
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8540
        .trainerName = _("RUBEN"),
#line 8541
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8542
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8544
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8545
        .items = { ITEM_HYPER_POTION },
#line 8546
        .doubleBattle = FALSE,
#line 8547
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8549
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8551
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8550
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8553
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8555
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8554
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8557
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8558
        .trainerName = _("KOJI"),
#line 8559
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8560
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8562
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8563
        .doubleBattle = FALSE,
#line 8564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8566
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8567
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8570
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8571
        .trainerName = _("WAYNE"),
#line 8572
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8573
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8575
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8576
        .doubleBattle = FALSE,
#line 8577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8579
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8580
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8583
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8584
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8587
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8588
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8591
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8592
        .trainerName = _("AIDAN"),
#line 8593
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8594
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8596
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8597
        .doubleBattle = FALSE,
#line 8598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8600
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8601
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8604
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8605
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8608
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8609
        .trainerName = _("REED"),
#line 8610
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8611
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8613
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8614
        .doubleBattle = FALSE,
#line 8615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8617
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8618
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8621
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8622
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8625
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8626
        .trainerName = _("TISHA"),
#line 8627
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8628
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8629
F_TRAINER_FEMALE | 
#line 8630
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8631
        .doubleBattle = FALSE,
#line 8632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8634
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8635
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8638
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8639
        .trainerName = _("TORI & TIA"),
#line 8640
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8641
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8643
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8644
        .doubleBattle = TRUE,
#line 8645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8647
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8648
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8651
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8652
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8655
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8656
        .trainerName = _("KIM & IRIS"),
#line 8657
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8658
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8660
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8661
        .doubleBattle = TRUE,
#line 8662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8664
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8665
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8668
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8669
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8672
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8673
        .trainerName = _("TYRA & IVY"),
#line 8674
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8675
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8677
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8678
        .doubleBattle = TRUE,
#line 8679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8681
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8682
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8685
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8686
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8690
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8691
        .trainerName = _("MEL & PAUL"),
#line 8692
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8693
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8695
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8696
        .doubleBattle = TRUE,
#line 8697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8699
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8700
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8703
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8704
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8707
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8708
        .trainerName = _("JOHN & JAY"),
#line 8709
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8710
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8712
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8713
        .doubleBattle = TRUE,
#line 8714
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8716
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8717
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8720
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8721
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8724
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8725
        .trainerName = _("RELI & IAN"),
#line 8726
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8727
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8729
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8730
        .doubleBattle = TRUE,
#line 8731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8733
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8734
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8737
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8738
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8741
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8742
        .trainerName = _("LILA & ROY"),
#line 8743
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8744
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8746
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8747
        .doubleBattle = TRUE,
#line 8748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8750
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8751
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8754
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8755
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8758
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8759
        .trainerName = _("LISA & RAY"),
#line 8760
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8761
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8763
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8764
        .doubleBattle = TRUE,
#line 8765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8767
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8768
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8771
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8772
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8775
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8776
        .trainerName = _("CHRIS"),
#line 8777
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8778
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8780
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8781
        .doubleBattle = FALSE,
#line 8782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8784
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8785
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8788
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8789
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8792
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8793
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8796
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8797
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8800
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8801
        .trainerName = _("DAWSON"),
#line 8802
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8803
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8805
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8806
        .doubleBattle = FALSE,
#line 8807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8809
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8809
            .heldItem = ITEM_NUGGET,
#line 8811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8810
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8813
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8814
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8817
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8818
        .trainerName = _("SARAH"),
#line 8819
        .trainerClass = TRAINER_CLASS_LADY,
#line 8820
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8821
F_TRAINER_FEMALE | 
#line 8822
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8823
        .items = { ITEM_FULL_RESTORE },
#line 8824
        .doubleBattle = FALSE,
#line 8825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8827
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8828
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8831
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8831
            .heldItem = ITEM_NUGGET,
#line 8833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8832
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8835
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8836
        .trainerName = _("DARIAN"),
#line 8837
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8838
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8840
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8841
        .doubleBattle = FALSE,
#line 8842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8844
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8845
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8848
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8849
        .trainerName = _("HAILEY"),
#line 8850
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8851
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8852
F_TRAINER_FEMALE | 
#line 8853
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8854
        .doubleBattle = FALSE,
#line 8855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8857
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8858
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8861
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8862
        .trainerName = _("CHANDLER"),
#line 8863
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8864
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8866
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8867
        .doubleBattle = FALSE,
#line 8868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8870
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8871
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8874
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8875
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8878
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8879
        .trainerName = _("KALEB"),
#line 8880
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8881
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8883
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8884
        .doubleBattle = FALSE,
#line 8885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8887
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8887
            .heldItem = ITEM_ORAN_BERRY,
#line 8889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8888
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8891
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8891
            .heldItem = ITEM_ORAN_BERRY,
#line 8893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8892
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8895
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8896
        .trainerName = _("JOSEPH"),
#line 8897
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8898
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8900
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8901
        .doubleBattle = FALSE,
#line 8902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8904
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8905
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8908
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8909
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8912
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8913
        .trainerName = _("ALYSSA"),
#line 8914
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8915
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8916
F_TRAINER_FEMALE | 
#line 8917
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8918
        .doubleBattle = FALSE,
#line 8919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8921
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8922
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8925
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8926
        .trainerName = _("MARCOS"),
#line 8927
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8928
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8930
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8931
        .doubleBattle = FALSE,
#line 8932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8934
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8936
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8935
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8938
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8939
        .trainerName = _("RHETT"),
#line 8940
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8941
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8943
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8944
        .doubleBattle = FALSE,
#line 8945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8947
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8949
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8948
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8951
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8952
        .trainerName = _("TYRON"),
#line 8953
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8954
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8956
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8957
        .doubleBattle = FALSE,
#line 8958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8960
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8961
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8964
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8965
        .trainerName = _("CELINA"),
#line 8966
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8967
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8968
F_TRAINER_FEMALE | 
#line 8969
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8970
        .doubleBattle = FALSE,
#line 8971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8973
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8974
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8977
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8978
        .trainerName = _("BIANCA"),
#line 8979
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8980
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8981
F_TRAINER_FEMALE | 
#line 8982
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8983
        .doubleBattle = FALSE,
#line 8984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8986
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8987
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8990
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8991
        .trainerName = _("HAYDEN"),
#line 8992
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8993
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8995
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8996
        .doubleBattle = FALSE,
#line 8997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8999
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9000
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9003
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9004
        .trainerName = _("SOPHIE"),
#line 9005
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9006
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9007
F_TRAINER_FEMALE | 
#line 9008
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9009
        .doubleBattle = FALSE,
#line 9010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9012
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9013
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9016
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9017
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9020
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9021
        .trainerName = _("COBY"),
#line 9022
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9023
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9025
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9026
        .doubleBattle = FALSE,
#line 9027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9029
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9030
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9033
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9034
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9037
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9038
        .trainerName = _("LAWRENCE"),
#line 9039
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9040
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9042
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9043
        .doubleBattle = FALSE,
#line 9044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9046
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9047
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9050
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9051
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9054
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9055
        .trainerName = _("WYATT"),
#line 9056
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9057
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9059
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9060
        .doubleBattle = FALSE,
#line 9061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9063
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9064
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9067
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9068
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9071
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9072
        .trainerName = _("ANGELINA"),
#line 9073
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9074
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9075
F_TRAINER_FEMALE | 
#line 9076
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9077
        .doubleBattle = FALSE,
#line 9078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9080
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9081
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9084
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9085
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9088
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9089
        .trainerName = _("KAI"),
#line 9090
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9091
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9093
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9094
        .doubleBattle = FALSE,
#line 9095
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9097
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9098
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9101
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9102
        .trainerName = _("CHARLOTTE"),
#line 9103
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9104
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9105
F_TRAINER_FEMALE | 
#line 9106
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9107
        .doubleBattle = FALSE,
#line 9108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9110
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9111
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9114
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9115
        .trainerName = _("DEANDRE"),
#line 9116
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9117
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9120
        .doubleBattle = FALSE,
#line 9121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9123
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9124
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9127
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9128
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9131
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9132
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9135
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9136
        .trainerName = _("GRUNT"),
#line 9137
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9138
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9140
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9141
        .doubleBattle = FALSE,
#line 9142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9144
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9145
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9148
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9149
        .trainerName = _("GRUNT"),
#line 9150
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9151
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9153
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9154
        .doubleBattle = FALSE,
#line 9155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9157
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9158
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9161
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9162
        .trainerName = _("GRUNT"),
#line 9163
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9164
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9166
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9167
        .doubleBattle = FALSE,
#line 9168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9170
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9171
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9174
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9175
        .trainerName = _("GRUNT"),
#line 9176
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9177
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9179
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9180
        .doubleBattle = FALSE,
#line 9181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9183
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9184
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9187
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9188
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9191
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9192
        .trainerName = _("GRUNT"),
#line 9193
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9194
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9196
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9197
        .doubleBattle = FALSE,
#line 9198
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9200
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9201
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9204
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9205
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9208
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9209
        .trainerName = _("GRUNT"),
#line 9210
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9211
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9213
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9214
        .doubleBattle = FALSE,
#line 9215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9217
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9218
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9221
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9222
        .trainerName = _("GRUNT"),
#line 9223
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9224
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9226
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9227
        .doubleBattle = FALSE,
#line 9228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9230
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9231
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9234
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9235
        .trainerName = _("GRUNT"),
#line 9236
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9237
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9239
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9240
        .doubleBattle = FALSE,
#line 9241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9243
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9244
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9247
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9248
        .trainerName = _("GRUNT"),
#line 9249
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9250
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9252
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9253
        .doubleBattle = FALSE,
#line 9254
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9256
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9257
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9260
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9261
        .trainerName = _("GRUNT"),
#line 9262
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9263
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9265
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9266
        .doubleBattle = FALSE,
#line 9267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9269
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9270
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9273
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9274
        .trainerName = _("GRUNT"),
#line 9275
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9276
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9278
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9279
        .doubleBattle = FALSE,
#line 9280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9282
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9283
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9286
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9287
        .trainerName = _("GRUNT"),
#line 9288
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9289
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9291
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9292
        .doubleBattle = FALSE,
#line 9293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9295
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9296
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9299
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9300
        .trainerName = _("GRUNT"),
#line 9301
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9302
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9304
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9305
        .doubleBattle = FALSE,
#line 9306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9308
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9309
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9312
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9313
        .trainerName = _("GRUNT"),
#line 9314
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9315
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9316
F_TRAINER_FEMALE | 
#line 9317
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9318
        .doubleBattle = FALSE,
#line 9319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9321
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9322
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9325
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9326
        .trainerName = _("GRUNT"),
#line 9327
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9328
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9329
F_TRAINER_FEMALE | 
#line 9330
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9331
        .doubleBattle = FALSE,
#line 9332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9334
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9335
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9338
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9339
        .trainerName = _("GRUNT"),
#line 9340
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9341
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9342
F_TRAINER_FEMALE | 
#line 9343
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9344
        .doubleBattle = FALSE,
#line 9345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9347
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9348
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9351
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9352
        .trainerName = _("TABITHA"),
#line 9353
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9354
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9356
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9357
        .doubleBattle = FALSE,
#line 9358
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9360
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9363
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9361
            .ability = ABILITY_DROUGHT,
#line 9362
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9364
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9369
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .heldItem = ITEM_POISON_BARB,
#line 9372
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9370
            .ability = ABILITY_LEVITATE,
#line 9371
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9373
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9378
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9378
            .heldItem = ITEM_LIFE_ORB,
#line 9381
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9379
            .ability = ABILITY_LEVITATE,
#line 9380
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9382
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9387
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9387
            .heldItem = ITEM_FOCUS_SASH,
#line 9390
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9388
            .ability = ABILITY_OWN_TEMPO,
#line 9389
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9391
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9396
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9397
        .trainerName = _("DARCY"),
#line 9398
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9399
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9400
F_TRAINER_FEMALE | 
#line 9401
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9402
        .items = { ITEM_HYPER_POTION },
#line 9403
        .doubleBattle = FALSE,
#line 9404
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9406
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9407
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9410
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9411
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9414
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9415
        .trainerName = _("MAXIE"),
#line 9416
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9417
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9419
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9420
        .doubleBattle = FALSE,
#line 9421
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9423
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9423
            .heldItem = ITEM_ROCKY_HELMET,
#line 9426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9424
            .ability = ABILITY_ROCK_HEAD,
#line 9425
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9426
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9431
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9431
            .heldItem = ITEM_AIR_BALLOON,
#line 9434
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9432
            .ability = ABILITY_HEAVY_METAL,
#line 9433
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9434
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9439
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9439
            .heldItem = ITEM_SHARP_BEAK,
#line 9442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9440
            .ability = ABILITY_INNER_FOCUS,
#line 9441
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9442
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9447
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9448
        .trainerName = _("PETE"),
#line 9449
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9450
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9452
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9453
        .doubleBattle = FALSE,
#line 9454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9456
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9457
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9460
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9461
        .trainerName = _("ISABELLE"),
#line 9462
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9463
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9464
F_TRAINER_FEMALE | 
#line 9465
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9466
        .doubleBattle = FALSE,
#line 9467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9469
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9470
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9473
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9474
        .trainerName = _("ANDRES"),
#line 9475
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9476
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9478
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9479
        .doubleBattle = FALSE,
#line 9480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9482
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9483
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9486
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9488
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9487
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9490
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9491
        .trainerName = _("JOSUE"),
#line 9492
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9493
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9495
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9496
        .doubleBattle = FALSE,
#line 9497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9499
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9501
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9500
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9503
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9505
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9504
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9507
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9508
        .trainerName = _("CAMRON"),
#line 9509
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9510
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9512
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9513
        .doubleBattle = FALSE,
#line 9514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9516
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9517
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9520
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9521
        .trainerName = _("CORY"),
#line 9522
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9523
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9525
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9526
        .doubleBattle = FALSE,
#line 9527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9529
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9530
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9533
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9534
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9537
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9538
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9541
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9542
        .trainerName = _("CAROLINA"),
#line 9543
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9544
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9545
F_TRAINER_FEMALE | 
#line 9546
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9547
        .items = { ITEM_HYPER_POTION },
#line 9548
        .doubleBattle = FALSE,
#line 9549
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9551
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9553
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9552
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9555
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9556
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9559
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9560
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9563
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9564
        .trainerName = _("ELIJAH"),
#line 9565
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9566
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9568
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9569
        .doubleBattle = FALSE,
#line 9570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9572
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9573
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9576
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9577
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9580
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9581
        .trainerName = _("CELIA"),
#line 9582
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9583
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9584
F_TRAINER_FEMALE | 
#line 9585
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9586
        .doubleBattle = FALSE,
#line 9587
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9589
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9590
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9593
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9594
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9597
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9598
        .trainerName = _("BRYAN"),
#line 9599
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9600
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9602
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9603
        .doubleBattle = FALSE,
#line 9604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9606
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9607
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9610
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9611
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9614
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9615
        .trainerName = _("BRANDEN"),
#line 9616
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9617
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9619
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9620
        .doubleBattle = FALSE,
#line 9621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9623
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9624
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9627
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9628
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9631
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9632
        .trainerName = _("BRYANT"),
#line 9633
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9634
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9636
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9637
        .doubleBattle = FALSE,
#line 9638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9640
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9641
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9644
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9645
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9648
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9649
        .trainerName = _("SHAYLA"),
#line 9650
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9651
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9652
F_TRAINER_FEMALE | 
#line 9653
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9654
        .doubleBattle = FALSE,
#line 9655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9657
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9658
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9661
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9662
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9665
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9666
        .trainerName = _("KYRA"),
#line 9667
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9668
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9669
F_TRAINER_FEMALE | 
#line 9670
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9671
        .doubleBattle = FALSE,
#line 9672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9674
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9675
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9678
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9679
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9682
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9683
        .trainerName = _("JAIDEN"),
#line 9684
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9685
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9687
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9688
        .doubleBattle = FALSE,
#line 9689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9691
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9692
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9695
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9696
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9699
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9700
        .trainerName = _("ALIX"),
#line 9701
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9702
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9703
F_TRAINER_FEMALE | 
#line 9704
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9705
        .doubleBattle = FALSE,
#line 9706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9708
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9709
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9712
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9713
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9716
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9717
        .trainerName = _("HELENE"),
#line 9718
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9719
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9720
F_TRAINER_FEMALE | 
#line 9721
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9722
        .doubleBattle = FALSE,
#line 9723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9725
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9726
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9729
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9730
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9733
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9734
        .trainerName = _("MARLENE"),
#line 9735
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9736
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9737
F_TRAINER_FEMALE | 
#line 9738
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9739
        .doubleBattle = FALSE,
#line 9740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9742
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9743
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9746
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9747
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9750
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9751
        .trainerName = _("DEVAN"),
#line 9752
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9753
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9755
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9756
        .doubleBattle = FALSE,
#line 9757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9759
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9760
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9763
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9764
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9767
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9768
        .trainerName = _("JOHNSON"),
#line 9769
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9770
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9772
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9773
        .doubleBattle = FALSE,
#line 9774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9776
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9777
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9780
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9781
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9784
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9785
        .trainerName = _("MELINA"),
#line 9786
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9787
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9788
F_TRAINER_FEMALE | 
#line 9789
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9790
        .doubleBattle = FALSE,
#line 9791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9793
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9794
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9797
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9798
        .trainerName = _("MELISSA"),
#line 9799
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9800
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9801
F_TRAINER_FEMALE | 
#line 9802
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9803
        .doubleBattle = FALSE,
#line 9804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9806
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9807
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9810
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9811
        .trainerName = _("BRANDI"),
#line 9812
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9813
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9814
F_TRAINER_FEMALE | 
#line 9815
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9816
        .doubleBattle = FALSE,
#line 9817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9819
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9820
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9823
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9824
        .trainerName = _("AISHA"),
#line 9825
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9826
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9827
F_TRAINER_FEMALE | 
#line 9828
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9829
        .doubleBattle = FALSE,
#line 9830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9832
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9833
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9837
        .trainerName = _("MAKAYLA"),
#line 9838
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9839
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9840
F_TRAINER_FEMALE | 
#line 9841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9842
        .items = { ITEM_HYPER_POTION },
#line 9843
        .doubleBattle = FALSE,
#line 9844
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9846
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9847
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9850
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9851
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9854
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9855
        .trainerName = _("FABIAN"),
#line 9856
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9857
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9859
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9860
        .doubleBattle = FALSE,
#line 9861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9863
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9864
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9867
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9868
        .trainerName = _("DAYTON"),
#line 9869
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9870
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9872
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9873
        .doubleBattle = FALSE,
#line 9874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9876
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9877
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9880
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9881
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9884
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9885
        .trainerName = _("RACHEL"),
#line 9886
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9887
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9888
F_TRAINER_FEMALE | 
#line 9889
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9890
        .doubleBattle = FALSE,
#line 9891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9893
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9895
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9894
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9897
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9898
        .trainerName = _("LEONEL"),
#line 9899
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9900
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9902
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9903
        .items = { ITEM_HYPER_POTION },
#line 9904
        .doubleBattle = FALSE,
#line 9905
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9907
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9909
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9908
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9911
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9912
        .trainerName = _("CALLIE"),
#line 9913
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9914
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9915
F_TRAINER_FEMALE | 
#line 9916
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9917
        .doubleBattle = FALSE,
#line 9918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9920
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9921
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9924
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9925
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9928
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9929
        .trainerName = _("CALE"),
#line 9930
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9931
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9933
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9934
        .doubleBattle = FALSE,
#line 9935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9937
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9938
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9941
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9942
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9945
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9946
        .trainerName = _("MYLES"),
#line 9947
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9948
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9950
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9951
        .doubleBattle = FALSE,
#line 9952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9954
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9956
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9955
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9958
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9960
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9959
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9962
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9964
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9963
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9966
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9967
        .trainerName = _("PAT"),
#line 9968
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9969
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9970
F_TRAINER_FEMALE | 
#line 9971
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9972
        .doubleBattle = FALSE,
#line 9973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9975
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9977
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9976
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9979
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9981
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9980
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9983
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9985
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9984
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9988
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 9989
        .trainerName = _("CRISTIN"),
#line 9990
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9991
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9992
F_TRAINER_FEMALE | 
#line 9993
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9994
        .items = { ITEM_HYPER_POTION },
#line 9995
        .doubleBattle = FALSE,
#line 9996
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9998
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10000
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9999
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10002
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10004
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10003
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10006
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10007
        .trainerName = _("MAY"),
#line 10008
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10009
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10010
F_TRAINER_FEMALE | 
#line 10011
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10012
        .doubleBattle = FALSE,
#line 10013
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10015
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10017
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10016
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10019
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10021
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10020
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10023
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10024
        .trainerName = _("MAY"),
#line 10025
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10026
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10027
F_TRAINER_FEMALE | 
#line 10028
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10029
        .doubleBattle = FALSE,
#line 10030
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10032
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10034
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10033
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10036
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10038
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10037
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10040
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10041
        .trainerName = _("GRUNT"),
#line 10042
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10043
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10045
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10046
        .doubleBattle = FALSE,
#line 10047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10049
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10049
            .heldItem = ITEM_EVIOLITE,
#line 10051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10050
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10052
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10053
        .trainerName = _("GRUNT"),
#line 10054
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10055
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10057
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10058
        .doubleBattle = FALSE,
#line 10059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10061
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10063
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10062
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10064
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10065
        .trainerName = _("GRUNT"),
#line 10066
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10067
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10069
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10070
        .doubleBattle = FALSE,
#line 10071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10073
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10074
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10076
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10077
        .trainerName = _("GRUNT"),
#line 10078
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10079
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10081
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10082
        .doubleBattle = FALSE,
#line 10083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10085
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10086
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10088
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10097
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10099
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10098
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10100
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10101
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10103
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10104
        .trainerName = _("GRUNT"),
#line 10105
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10106
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10108
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10109
        .doubleBattle = FALSE,
#line 10110
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10112
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10113
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10116
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10117
        .trainerName = _("GRUNT"),
#line 10118
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10119
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10121
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10122
        .doubleBattle = FALSE,
#line 10123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10125
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10127
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10126
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10128
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10129
        .trainerName = _("GRUNT"),
#line 10130
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10131
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10133
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10134
        .doubleBattle = FALSE,
#line 10135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10137
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10138
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10140
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10149
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10150
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10152
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10153
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10155
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10156
        .trainerName = _("GRUNT"),
#line 10157
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10158
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10160
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10161
        .doubleBattle = FALSE,
#line 10162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10164
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10165
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10167
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
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
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10178
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10177
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10179
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10180
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10182
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10183
        .trainerName = _("GRUNT"),
#line 10184
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10185
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10187
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10188
        .doubleBattle = FALSE,
#line 10189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10191
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10193
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10192
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10194
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10195
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10197
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10198
        .trainerName = _("TATE&LIZA"),
#line 10199
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10200
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10202
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10203
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10204
        .doubleBattle = TRUE,
#line 10205
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10207
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10208
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10210
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10215
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10216
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10218
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10223
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10224
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10226
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10231
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10231
            .heldItem = ITEM_CHESTO_BERRY,
#line 10233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10232
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10234
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10239
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10239
            .heldItem = ITEM_CHESTO_BERRY,
#line 10241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10240
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10242
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10247
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .heldItem = ITEM_SITRUS_BERRY,
#line 10249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10248
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10250
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10255
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10256
        .trainerName = _("ANGELO"),
#line 10257
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10258
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10260
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10261
        .doubleBattle = FALSE,
#line 10262
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10264
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10266
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10265
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10268
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10269
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10272
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10273
        .trainerName = _("DARIUS"),
#line 10274
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10275
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10277
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10278
        .doubleBattle = FALSE,
#line 10279
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10281
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10283
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10282
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10285
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10286
        .trainerName = _("STEVEN"),
#line 10287
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10288
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10290
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10291
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10292
        .doubleBattle = FALSE,
#line 10293
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10295
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10296
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10298
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10303
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10304
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10306
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10311
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10313
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10312
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10314
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10319
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10321
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10320
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10322
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10327
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10328
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10330
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10335
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10335
            .heldItem = ITEM_SITRUS_BERRY,
#line 10337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10336
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10338
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10343
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10344
        .trainerName = _("ANABEL"),
#line 10345
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10346
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10347
F_TRAINER_FEMALE | 
#line 10348
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10349
        .doubleBattle = FALSE,
#line 10350
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10352
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10354
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10353
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10356
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10357
        .trainerName = _("TUCKER"),
#line 10358
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10359
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10361
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10362
        .doubleBattle = FALSE,
#line 10363
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10365
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10367
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10366
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10369
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10370
        .trainerName = _("SPENSER"),
#line 10371
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10372
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10374
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10375
        .doubleBattle = FALSE,
#line 10376
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10378
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10379
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10382
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10383
        .trainerName = _("GRETA"),
#line 10384
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10385
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10386
F_TRAINER_FEMALE | 
#line 10387
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10388
        .doubleBattle = FALSE,
#line 10389
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10391
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10392
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10395
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10396
        .trainerName = _("GRUNT"),
#line 10397
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10398
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10400
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10401
        .doubleBattle = FALSE,
#line 10402
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10404
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10405
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10408
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10409
        .trainerName = _("GHOSTESS"),
#line 10410
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10411
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10412
F_TRAINER_FEMALE | 
#line 10413
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10414
        .doubleBattle = FALSE,
#line 10415
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10417
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10417
            .heldItem = ITEM_TWISTED_SPOON,
#line 10420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10418
            .ability = ABILITY_THICK_FAT,
#line 10419
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10420
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10425
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10425
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10426
            .ability = ABILITY_WONDER_SKIN,
#line 10427
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10428
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10433
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10433
            .heldItem = ITEM_METRONOME,
#line 10436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10434
            .ability = ABILITY_ROCK_HEAD,
#line 10435
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10436
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10441
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10441
            .heldItem = ITEM_ASSAULT_VEST,
#line 10444
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10442
            .ability = ABILITY_CURSED_BODY,
#line 10443
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10444
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10449
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10450
        .trainerName = _("JORDAN"),
#line 10451
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10452
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10454
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10455
        .doubleBattle = FALSE,
#line 10456
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10458
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10459
            .ability = ABILITY_CHLOROPHYLL,
#line 10460
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10461
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10466
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10466
            .heldItem = ITEM_EVIOLITE,
#line 10469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10467
            .ability = ABILITY_PRESSURE,
#line 10468
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10469
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10474
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10474
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10475
            .ability = ABILITY_LIQUID_OOZE,
#line 10476
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10477
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10482
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10482
            .heldItem = ITEM_QUICK_CLAW,
#line 10485
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10483
            .ability = ABILITY_OBLIVIOUS,
#line 10484
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10485
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10490
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10490
            .heldItem = ITEM_SHARP_BEAK,
#line 10493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10491
            .ability = ABILITY_INNER_FOCUS,
#line 10492
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10493
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10498
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10499
        .trainerName = _("JORDAN"),
#line 10500
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10501
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10503
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10504
        .doubleBattle = FALSE,
#line 10505
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10507
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10507
            .heldItem = ITEM_WIDE_LENS,
#line 10510
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10508
            .ability = ABILITY_CHLOROPHYLL,
#line 10509
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10510
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10515
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10515
            .heldItem = ITEM_LIFE_ORB,
#line 10518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10516
            .ability = ABILITY_PRESSURE,
#line 10517
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10518
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10523
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10523
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10524
            .ability = ABILITY_LIQUID_OOZE,
#line 10525
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10526
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10531
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10531
            .heldItem = ITEM_CHOICE_SPECS,
#line 10534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10532
            .ability = ABILITY_OBLIVIOUS,
#line 10533
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10534
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10539
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10539
            .heldItem = ITEM_SHARP_BEAK,
#line 10542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10540
            .ability = ABILITY_INNER_FOCUS,
#line 10541
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10542
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10547
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10547
            .heldItem = ITEM_ASSAULT_VEST,
#line 10550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10548
            .ability = ABILITY_AIR_LOCK,
#line 10549
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10550
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10555
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10556
        .trainerName = _("GHOSTESS"),
#line 10557
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10558
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10559
F_TRAINER_FEMALE | 
#line 10560
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10561
        .doubleBattle = FALSE,
#line 10562
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10564
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10564
            .heldItem = ITEM_EXPERT_BELT,
#line 10567
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10565
            .ability = ABILITY_THICK_FAT,
#line 10566
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10567
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10572
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10572
            .heldItem = ITEM_MUSCLE_BAND,
#line 10575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10573
            .ability = ABILITY_WONDER_SKIN,
#line 10574
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10575
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10580
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10580
            .heldItem = ITEM_WIDE_LENS,
#line 10583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10581
            .ability = ABILITY_INTIMIDATE,
#line 10582
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10583
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10588
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10588
            .heldItem = ITEM_ASSAULT_VEST,
#line 10591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10589
            .ability = ABILITY_CURSED_BODY,
#line 10590
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10591
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10596
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10597
        .trainerName = _("GRUNT"),
#line 10598
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10599
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10601
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10602
        .doubleBattle = FALSE,
#line 10603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10605
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10607
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10606
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10608
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10609
        .trainerName = _("GRUNT"),
#line 10610
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10611
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10613
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10614
        .doubleBattle = FALSE,
#line 10615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10617
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10618
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10620
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10621
        .trainerName = _("GRUNT"),
#line 10622
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10623
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10625
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10626
        .doubleBattle = FALSE,
#line 10627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10629
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10631
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10630
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10632
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10633
        .trainerName = _("GRUNT"),
#line 10634
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10635
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10637
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10638
        .doubleBattle = FALSE,
#line 10639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10641
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10643
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10642
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10644
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10645
        .trainerName = _("CORY"),
#line 10646
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10647
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10649
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10650
        .doubleBattle = FALSE,
#line 10651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10653
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10655
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10654
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10657
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10659
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10658
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10661
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10663
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10662
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10665
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10666
        .trainerName = _("CORY"),
#line 10667
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10668
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10670
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10671
        .doubleBattle = FALSE,
#line 10672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10674
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10676
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10675
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10678
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10680
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10679
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10682
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10684
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10683
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10686
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10687
        .trainerName = _("MARIELA"),
#line 10688
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10689
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10690
F_TRAINER_FEMALE | 
#line 10691
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10692
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10694
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10695
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10698
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10699
        .trainerName = _("ALVARO"),
#line 10700
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10701
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10703
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10704
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10706
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10707
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10710
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10711
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10714
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10715
        .trainerName = _("EVERETT"),
#line 10716
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10717
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10719
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10720
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10722
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10723
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10726
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10727
        .trainerName = _("RED"),
#line 10728
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10729
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10731
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10732
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10734
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10735
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10738
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10739
        .trainerName = _("LEAF"),
#line 10740
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10741
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10742
F_TRAINER_FEMALE | 
#line 10743
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10744
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10746
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10747
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10750
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10751
        .trainerName = _("SAMUEL"),
#line 10752
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10753
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10755
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10756
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10758
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10759
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10762
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10763
        .trainerName = _("MAY"),
#line 10764
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10765
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10766
F_TRAINER_FEMALE | 
#line 10767
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10768
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10770
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10771
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
