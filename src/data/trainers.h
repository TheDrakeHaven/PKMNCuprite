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
        .partySize = 3,
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
        },
    },
#line 555
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 556
        .trainerName = _("ZANDER"),
#line 557
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 558
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 560
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 561
        .doubleBattle = FALSE,
#line 562
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 564
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 565
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 568
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 569
        .trainerName = _("SHELLY"),
#line 570
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 571
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 572
F_TRAINER_FEMALE | 
#line 573
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 574
        .doubleBattle = FALSE,
#line 575
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 577
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 577
            .heldItem = ITEM_ROCKY_HELMET,
#line 580
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 578
            .ability = ABILITY_SPEED_BOOST,
#line 579
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 581
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 586
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 586
            .heldItem = ITEM_DAMP_ROCK,
#line 589
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 587
            .ability = ABILITY_STATIC,
#line 588
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 590
                MOVE_THUNDERBOLT,
                MOVE_QUICK_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 595
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 598
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 596
            .ability = ABILITY_ADAPTABILITY,
#line 597
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 599
                MOVE_RAZOR_SHELL,
                MOVE_CRUNCH,
            },
            },
            {
#line 602
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 602
            .heldItem = ITEM_BLACK_SLUDGE,
#line 605
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 603
            .ability = ABILITY_STICKY_HOLD,
#line 604
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 606
                MOVE_GUNK_SHOT,
                MOVE_DISABLE,
                MOVE_MINIMIZE,
            },
            },
        },
    },
#line 610
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 611
        .trainerName = _("SHELLY"),
#line 612
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 613
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 614
F_TRAINER_FEMALE | 
#line 615
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 616
        .doubleBattle = FALSE,
#line 617
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 619
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 619
            .heldItem = ITEM_ROCKY_HELMET,
#line 622
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 620
            .ability = ABILITY_SPEED_BOOST,
#line 621
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 623
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 628
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 628
            .heldItem = ITEM_DAMP_ROCK,
#line 631
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 629
            .ability = ABILITY_STATIC,
#line 630
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 632
                MOVE_THUNDER_WAVE,
                MOVE_VOLT_SWITCH,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 637
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 637
            .heldItem = ITEM_FOCUS_BAND,
#line 640
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 638
            .ability = ABILITY_ADAPTABILITY,
#line 639
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 641
                MOVE_CRABHAMMER,
                MOVE_CRUNCH,
            },
            },
            {
#line 644
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 644
            .heldItem = ITEM_BLACK_SLUDGE,
#line 647
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 645
            .ability = ABILITY_STICKY_HOLD,
#line 646
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 648
                MOVE_GUNK_SHOT,
                MOVE_TOXIC,
                MOVE_MINIMIZE,
                MOVE_GIGA_DRAIN,
            },
            },
        },
    },
#line 653
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 654
        .trainerName = _("ARCHIE"),
#line 655
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 656
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 658
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 659
        .doubleBattle = FALSE,
#line 660
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 662
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 662
            .heldItem = ITEM_DAMP_ROCK,
#line 665
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 663
            .ability = ABILITY_WATER_ABSORB,
#line 664
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 666
                MOVE_ENERGY_BALL,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 671
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 671
            .heldItem = ITEM_MUSCLE_BAND,
#line 674
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 672
            .ability = ABILITY_SPEED_BOOST,
#line 673
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 675
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_EARTHQUAKE,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 680
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 680
            .heldItem = ITEM_STICKY_BARB,
#line 683
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 681
            .ability = ABILITY_SHED_SKIN,
#line 682
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 684
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 689
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 689
            .heldItem = ITEM_CHOICE_SPECS,
#line 692
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 690
            .ability = ABILITY_VOLT_ABSORB,
#line 691
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 693
                MOVE_HYDRO_PUMP,
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 699
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 699
            .heldItem = ITEM_LEFTOVERS,
#line 702
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 700
            .ability = ABILITY_OBLIVIOUS,
#line 701
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 703
                MOVE_BLIZZARD,
                MOVE_SURF,
                MOVE_YAWN,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 708
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 709
        .trainerName = _("LEAH"),
#line 710
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 711
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 712
F_TRAINER_FEMALE | 
#line 713
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 714
        .doubleBattle = FALSE,
#line 715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 717
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 718
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 721
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 722
        .trainerName = _("DAISY"),
#line 723
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 724
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 725
F_TRAINER_FEMALE | 
#line 726
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 727
        .doubleBattle = FALSE,
#line 728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 730
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 731
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 734
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 735
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 738
    [DIFFICULTY_NORMAL][TRAINER_ROSE] =
    {
#line 739
        .trainerName = _("ROSE"),
#line 740
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 741
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 742
F_TRAINER_FEMALE | 
#line 743
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 744
        .doubleBattle = FALSE,
#line 745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 747
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 748
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 751
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 752
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 755
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 756
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 761
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 762
        .trainerName = _("FELIX"),
#line 763
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 764
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 766
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 767
        .items = { ITEM_FULL_RESTORE },
#line 768
        .doubleBattle = FALSE,
#line 769
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 771
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 772
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 775
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 776
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 780
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 781
        .trainerName = _("VIOLET"),
#line 782
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 783
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 784
F_TRAINER_FEMALE | 
#line 785
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 786
        .doubleBattle = FALSE,
#line 787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 789
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 790
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 793
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 794
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 797
    [DIFFICULTY_NORMAL][TRAINER_DUSTY] =
    {
#line 798
        .trainerName = _("DUSTY"),
#line 799
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 800
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 802
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 803
        .doubleBattle = FALSE,
#line 804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 806
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 808
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 807
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 810
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 811
        .trainerName = _("CHIP"),
#line 812
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 813
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 815
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 816
        .doubleBattle = FALSE,
#line 817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 819
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 821
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 820
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 823
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 825
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 824
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 827
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 829
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 828
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 831
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 832
        .trainerName = _("FOSTER"),
#line 833
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 834
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 836
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 837
        .doubleBattle = FALSE,
#line 838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 840
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 842
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 841
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 844
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 846
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 845
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 848
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY] =
    {
#line 849
        .trainerName = _("GABBY & TY"),
#line 850
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 851
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 853
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 854
        .doubleBattle = TRUE,
#line 855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 857
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 859
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 858
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 861
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 863
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 862
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 865
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_6] =
    {
#line 866
        .trainerName = _("GABBY & TY"),
#line 867
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 868
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 870
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 871
        .doubleBattle = TRUE,
#line 872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 874
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 876
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 875
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 878
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 880
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 879
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 883
    [DIFFICULTY_NORMAL][TRAINER_LOLA] =
    {
#line 884
        .trainerName = _("LOLA"),
#line 885
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 886
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 887
F_TRAINER_FEMALE | 
#line 888
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 889
        .doubleBattle = FALSE,
#line 890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 892
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 894
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 893
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 896
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 898
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 897
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 900
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 901
        .trainerName = _("AUSTINA"),
#line 902
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 903
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 904
F_TRAINER_FEMALE | 
#line 905
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 906
        .doubleBattle = FALSE,
#line 907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 909
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 910
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 913
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 914
        .trainerName = _("GWEN"),
#line 915
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 916
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 917
F_TRAINER_FEMALE | 
#line 918
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 919
        .doubleBattle = FALSE,
#line 920
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 922
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 923
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 926
    [DIFFICULTY_NORMAL][TRAINER_RICKY] =
    {
#line 927
        .trainerName = _("RICKY"),
#line 928
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 929
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 931
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 932
        .doubleBattle = FALSE,
#line 933
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 935
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 937
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 936
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 939
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 940
        .trainerName = _("SIMON"),
#line 941
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 942
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 944
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 945
        .doubleBattle = FALSE,
#line 946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 948
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 949
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 952
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 953
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 956
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 957
        .trainerName = _("CHARLIE"),
#line 958
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 959
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 961
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 962
        .doubleBattle = FALSE,
#line 963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 965
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 966
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 969
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 970
        .trainerName = _("RANDALL"),
#line 971
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 972
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 974
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 975
        .items = { ITEM_HYPER_POTION },
#line 976
        .doubleBattle = FALSE,
#line 977
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 979
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 981
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 980
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 983
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 984
        .trainerName = _("PARKER"),
#line 985
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 986
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 988
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 989
        .items = { ITEM_HYPER_POTION },
#line 990
        .doubleBattle = FALSE,
#line 991
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 993
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 995
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 994
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 997
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 998
        .trainerName = _("GEORGE"),
#line 999
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1000
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1002
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1003
        .items = { ITEM_HYPER_POTION },
#line 1004
        .doubleBattle = FALSE,
#line 1005
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1007
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1007
            .heldItem = ITEM_SITRUS_BERRY,
#line 1009
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1008
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1011
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 1012
        .trainerName = _("BERKE"),
#line 1013
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1014
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1016
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1017
        .items = { ITEM_HYPER_POTION },
#line 1018
        .doubleBattle = FALSE,
#line 1019
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1021
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1022
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1025
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1026
        .trainerName = _("BRAXTON"),
#line 1027
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1028
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1030
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1031
        .items = { ITEM_HYPER_POTION },
#line 1032
        .doubleBattle = FALSE,
#line 1033
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1035
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1037
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1036
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1039
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1041
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1040
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1043
            .species = SPECIES_GLACEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1045
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1044
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1047
            .species = SPECIES_SAWSBUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1049
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1048
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1051
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1053
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1052
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1055
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1056
        .trainerName = _("VINCENT"),
#line 1057
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1058
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1060
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1061
        .items = { ITEM_FULL_RESTORE },
#line 1062
        .doubleBattle = FALSE,
#line 1063
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1065
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1067
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1066
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1069
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1071
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1070
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1073
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1075
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1074
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1077
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1078
        .trainerName = _("LEROY"),
#line 1079
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1080
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1082
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1083
        .items = { ITEM_FULL_RESTORE },
#line 1084
        .doubleBattle = FALSE,
#line 1085
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1087
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1089
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1088
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1091
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1093
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1092
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1095
    [DIFFICULTY_NORMAL][TRAINER_WILTON] =
    {
#line 1096
        .trainerName = _("WILTON"),
#line 1097
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1098
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1100
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1101
        .items = { ITEM_SUPER_POTION },
#line 1102
        .doubleBattle = FALSE,
#line 1103
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1105
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1107
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1106
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1109
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1111
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1110
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1113
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1115
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1114
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1117
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1118
        .trainerName = _("EDGAR"),
#line 1119
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1120
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1122
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1123
        .items = { ITEM_FULL_RESTORE },
#line 1124
        .doubleBattle = FALSE,
#line 1125
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1127
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1129
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1128
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1131
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1132
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1135
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1136
        .trainerName = _("ALBERT"),
#line 1137
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1138
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1140
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1141
        .items = { ITEM_FULL_RESTORE },
#line 1142
        .doubleBattle = FALSE,
#line 1143
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1145
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1147
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1146
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1149
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1151
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1150
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1153
    [DIFFICULTY_NORMAL][TRAINER_SAMMY] =
    {
#line 1154
        .trainerName = _("SAMMY"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1163
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1165
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1164
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1167
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1169
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1168
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1171
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1173
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1172
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1175
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1176
        .trainerName = _("VITO"),
#line 1177
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1178
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1180
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1181
        .items = { ITEM_FULL_RESTORE },
#line 1182
        .doubleBattle = FALSE,
#line 1183
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1185
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1187
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1186
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1189
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1191
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1190
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1193
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1195
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1194
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1197
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1199
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1198
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1201
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1202
        .trainerName = _("OWEN"),
#line 1203
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1204
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1206
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1207
        .items = { ITEM_FULL_RESTORE },
#line 1208
        .doubleBattle = FALSE,
#line 1209
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1211
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1213
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1212
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1215
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1217
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1216
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1219
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1221
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1220
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1223
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1224
        .trainerName = _("WARREN"),
#line 1225
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1226
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1228
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1229
        .items = { ITEM_FULL_RESTORE },
#line 1230
        .doubleBattle = FALSE,
#line 1231
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1233
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1235
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1234
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1237
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1239
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1238
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1241
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1242
        .trainerName = _("MARY"),
#line 1243
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1244
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1245
F_TRAINER_FEMALE | 
#line 1246
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1247
        .items = { ITEM_HYPER_POTION },
#line 1248
        .doubleBattle = FALSE,
#line 1249
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1251
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1252
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1256
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1257
        .trainerName = _("ALEXIA"),
#line 1258
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1259
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1260
F_TRAINER_FEMALE | 
#line 1261
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1262
        .items = { ITEM_HYPER_POTION },
#line 1263
        .doubleBattle = FALSE,
#line 1264
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1266
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1267
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1270
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1271
        .trainerName = _("JODY"),
#line 1272
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1273
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1274
F_TRAINER_FEMALE | 
#line 1275
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1276
        .items = { ITEM_HYPER_POTION },
#line 1277
        .doubleBattle = FALSE,
#line 1278
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1280
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1281
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1283
                MOVE_SWORDS_DANCE,
                MOVE_DRAIN_PUNCH,
            },
            },
        },
    },
#line 1286
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1287
        .trainerName = _("WENDY"),
#line 1288
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1289
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1290
F_TRAINER_FEMALE | 
#line 1291
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1292
        .items = { ITEM_FULL_RESTORE },
#line 1293
        .doubleBattle = FALSE,
#line 1294
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1296
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1298
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1297
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1300
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1301
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1304
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1306
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1305
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1308
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1309
        .trainerName = _("KEIRA"),
#line 1310
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1311
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1312
F_TRAINER_FEMALE | 
#line 1313
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1314
        .items = { ITEM_FULL_RESTORE },
#line 1315
        .doubleBattle = FALSE,
#line 1316
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1318
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1320
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1319
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1322
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1324
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1323
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1326
    [DIFFICULTY_NORMAL][TRAINER_BROOKE] =
    {
#line 1327
        .trainerName = _("BROOKE"),
#line 1328
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1329
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1330
F_TRAINER_FEMALE | 
#line 1331
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1332
        .items = { ITEM_SUPER_POTION },
#line 1333
        .doubleBattle = FALSE,
#line 1334
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1336
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1338
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1337
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1340
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1342
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1341
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1344
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1346
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1345
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1348
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1349
        .trainerName = _("JENNIFER"),
#line 1350
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1351
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1352
F_TRAINER_FEMALE | 
#line 1353
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1354
        .items = { ITEM_FULL_RESTORE },
#line 1355
        .doubleBattle = FALSE,
#line 1356
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1358
            .species = SPECIES_DUOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1360
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1359
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1362
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1363
        .trainerName = _("HOPE"),
#line 1364
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1365
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1366
F_TRAINER_FEMALE | 
#line 1367
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1368
        .items = { ITEM_FULL_RESTORE },
#line 1369
        .doubleBattle = FALSE,
#line 1370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1372
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1373
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1376
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1377
        .trainerName = _("SHANNON"),
#line 1378
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1379
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1380
F_TRAINER_FEMALE | 
#line 1381
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1382
        .items = { ITEM_FULL_RESTORE },
#line 1383
        .doubleBattle = FALSE,
#line 1384
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1386
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1388
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1387
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1390
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1391
        .trainerName = _("MICHELLE"),
#line 1392
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1393
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1394
F_TRAINER_FEMALE | 
#line 1395
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1396
        .items = { ITEM_FULL_RESTORE },
#line 1397
        .doubleBattle = FALSE,
#line 1398
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1400
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1402
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1401
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1404
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1406
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1405
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1408
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1410
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1409
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1412
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1413
        .trainerName = _("CAROLINE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1422
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1424
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1423
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1426
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1428
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1427
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1430
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1431
        .trainerName = _("JULIE"),
#line 1432
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1433
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1434
F_TRAINER_FEMALE | 
#line 1435
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1436
        .items = { ITEM_FULL_RESTORE },
#line 1437
        .doubleBattle = FALSE,
#line 1438
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1440
            .species = SPECIES_GIGALITH,
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
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1446
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1445
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1448
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1450
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1449
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1452
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1453
        .trainerName = _("PATRICIA"),
#line 1454
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1455
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1456
F_TRAINER_FEMALE | 
#line 1457
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1458
        .doubleBattle = FALSE,
#line 1459
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1461
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1462
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1465
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1466
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1469
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1470
        .trainerName = _("KINDRA"),
#line 1471
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1472
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1473
F_TRAINER_FEMALE | 
#line 1474
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1475
        .doubleBattle = FALSE,
#line 1476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1478
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1479
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1482
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1483
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1486
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1487
        .trainerName = _("TAMMY"),
#line 1488
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1489
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1490
F_TRAINER_FEMALE | 
#line 1491
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1492
        .doubleBattle = FALSE,
#line 1493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1495
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1496
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1499
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1500
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1503
    [DIFFICULTY_NORMAL][TRAINER_VALERIE] =
    {
#line 1504
        .trainerName = _("VALERIE"),
#line 1505
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1506
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1507
F_TRAINER_FEMALE | 
#line 1508
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1509
        .doubleBattle = FALSE,
#line 1510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1512
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1513
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1516
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1517
        .trainerName = _("TASHA"),
#line 1518
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1519
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1520
F_TRAINER_FEMALE | 
#line 1521
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1522
        .doubleBattle = FALSE,
#line 1523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1525
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1527
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1526
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1529
    [DIFFICULTY_NORMAL][TRAINER_CINDY] =
    {
#line 1530
        .trainerName = _("CINDY"),
#line 1531
        .trainerClass = TRAINER_CLASS_LADY,
#line 1532
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1533
F_TRAINER_FEMALE | 
#line 1534
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1535
        .items = { ITEM_FULL_RESTORE },
#line 1536
        .doubleBattle = FALSE,
#line 1537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1539
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1539
            .heldItem = ITEM_NUGGET,
#line 1541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1540
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1543
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1544
        .trainerName = _("DAPHNE"),
#line 1545
        .trainerClass = TRAINER_CLASS_LADY,
#line 1546
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1547
F_TRAINER_FEMALE | 
#line 1548
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1549
        .items = { ITEM_FULL_RESTORE },
#line 1550
        .doubleBattle = FALSE,
#line 1551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1553
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1553
            .heldItem = ITEM_FOCUS_SASH,
#line 1555
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1554
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1557
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1557
            .heldItem = ITEM_FOCUS_SASH,
#line 1559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1558
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1561
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1562
        .trainerName = _("GRUNT"),
#line 1563
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1564
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1566
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1567
        .doubleBattle = FALSE,
#line 1568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1570
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1571
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1574
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1575
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1578
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1579
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1582
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1583
        .trainerName = _("SHEILA"),
#line 1584
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1585
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1586
F_TRAINER_FEMALE | 
#line 1587
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1588
        .doubleBattle = FALSE,
#line 1589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1591
            .species = SPECIES_ZEBSTRIKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1592
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1595
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1596
        .trainerName = _("SHIRLEY"),
#line 1597
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1598
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1599
F_TRAINER_FEMALE | 
#line 1600
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1601
        .doubleBattle = FALSE,
#line 1602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1604
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1605
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1608
    [DIFFICULTY_NORMAL][TRAINER_JESSICA] =
    {
#line 1609
        .trainerName = _("JESSICA"),
#line 1610
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1611
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1612
F_TRAINER_FEMALE | 
#line 1613
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1614
        .doubleBattle = FALSE,
#line 1615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1617
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1618
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1621
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1622
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1626
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1627
        .trainerName = _("CONNIE"),
#line 1628
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1629
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1630
F_TRAINER_FEMALE | 
#line 1631
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1632
        .doubleBattle = FALSE,
#line 1633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1635
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1637
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1636
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1639
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1640
        .trainerName = _("BRIDGET"),
#line 1641
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1642
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1643
F_TRAINER_FEMALE | 
#line 1644
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1645
        .doubleBattle = FALSE,
#line 1646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1648
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1650
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1649
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1652
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1653
        .trainerName = _("OLIVIA"),
#line 1654
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1655
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1656
F_TRAINER_FEMALE | 
#line 1657
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1658
        .doubleBattle = FALSE,
#line 1659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1661
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1663
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1662
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1665
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1667
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1666
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1669
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1671
            .iv = TRAINER_PARTY_IVS(12, 31, 12, 12, 12, 12),
#line 1670
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1673
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1674
        .trainerName = _("TIFFANY"),
#line 1675
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1676
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1677
F_TRAINER_FEMALE | 
#line 1678
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1679
        .doubleBattle = FALSE,
#line 1680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1682
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1684
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1683
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1686
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1688
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1687
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1690
    [DIFFICULTY_NORMAL][TRAINER_WINSTON] =
    {
#line 1691
        .trainerName = _("WINSTON"),
#line 1692
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1693
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1695
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1696
        .items = { ITEM_FULL_RESTORE },
#line 1697
        .doubleBattle = FALSE,
#line 1698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1700
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1700
            .heldItem = ITEM_NUGGET,
#line 1702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1701
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1704
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1705
        .trainerName = _("MOLLIE"),
#line 1706
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1707
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1708
F_TRAINER_FEMALE | 
#line 1709
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1710
        .doubleBattle = FALSE,
#line 1711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1713
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1714
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1717
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1719
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1718
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1721
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1722
        .trainerName = _("GARRET"),
#line 1723
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1724
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1726
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1727
        .items = { ITEM_FULL_RESTORE },
#line 1728
        .doubleBattle = FALSE,
#line 1729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1731
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1731
            .heldItem = ITEM_NUGGET,
#line 1733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1732
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1735
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1736
        .trainerName = _("STEVE"),
#line 1737
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1738
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1740
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1741
        .doubleBattle = FALSE,
#line 1742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1744
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1745
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1748
    [DIFFICULTY_NORMAL][TRAINER_THALIA] =
    {
#line 1749
        .trainerName = _("THALIA"),
#line 1750
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1751
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1752
F_TRAINER_FEMALE | 
#line 1753
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1754
        .doubleBattle = FALSE,
#line 1755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1757
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1758
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1761
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1762
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1765
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 1766
        .trainerName = _("MARCUS"),
#line 1767
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1768
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1770
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1771
        .doubleBattle = FALSE,
#line 1772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1774
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1775
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1778
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1779
        .trainerName = _("GRUNT"),
#line 1780
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1781
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1782
F_TRAINER_FEMALE | 
#line 1783
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1784
        .doubleBattle = FALSE,
#line 1785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1787
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1788
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1791
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1792
        .trainerName = _("LUIS"),
#line 1793
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1794
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1796
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1797
        .doubleBattle = FALSE,
#line 1798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1800
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1801
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1804
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1805
        .trainerName = _("DOMINIK"),
#line 1806
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1807
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1809
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1810
        .doubleBattle = FALSE,
#line 1811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1813
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1814
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1817
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1818
        .trainerName = _("DOUGLAS"),
#line 1819
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1820
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1822
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1823
        .doubleBattle = FALSE,
#line 1824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1826
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1828
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1827
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1830
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1832
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1831
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1834
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1835
        .trainerName = _("DARRIN"),
#line 1836
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1837
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1839
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1840
        .doubleBattle = FALSE,
#line 1841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1843
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1845
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1844
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1847
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1849
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1848
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1851
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1853
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1852
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1855
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 1856
        .trainerName = _("TONY"),
#line 1857
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1858
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1860
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1861
        .doubleBattle = FALSE,
#line 1862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1864
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1865
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1868
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1869
        .trainerName = _("JEROME"),
#line 1870
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1871
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1873
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1874
        .doubleBattle = FALSE,
#line 1875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1877
            .species = SPECIES_HERDIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1878
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1881
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 1882
        .trainerName = _("MATTI"),
#line 1883
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1884
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1886
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1887
        .doubleBattle = FALSE,
#line 1888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1890
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1891
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1894
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 1895
        .trainerName = _("DAVID"),
#line 1896
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1897
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1899
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1900
        .doubleBattle = FALSE,
#line 1901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1903
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1904
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1907
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1908
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1911
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 1912
        .trainerName = _("SPENCER"),
#line 1913
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1914
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1916
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1917
        .doubleBattle = FALSE,
#line 1918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1920
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1921
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1924
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1925
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1928
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 1929
        .trainerName = _("ROLAND"),
#line 1930
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1931
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1933
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1934
        .doubleBattle = FALSE,
#line 1935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1937
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1938
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1941
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 1942
        .trainerName = _("NOLEN"),
#line 1943
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1944
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1946
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1947
        .doubleBattle = FALSE,
#line 1948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1950
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1951
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1954
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 1955
        .trainerName = _("STAN"),
#line 1956
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1957
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1959
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1960
        .doubleBattle = FALSE,
#line 1961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1963
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1964
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1967
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 1968
        .trainerName = _("BARRY"),
#line 1969
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1970
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1972
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1973
        .doubleBattle = FALSE,
#line 1974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1976
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1977
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1980
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 1981
        .trainerName = _("DEAN"),
#line 1982
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1983
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1985
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1986
        .doubleBattle = FALSE,
#line 1987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1989
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1990
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1993
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1994
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1997
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1998
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2001
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2002
        .trainerName = _("RODNEY"),
#line 2003
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2004
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2006
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2007
        .doubleBattle = FALSE,
#line 2008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2010
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2011
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2014
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2015
        .trainerName = _("RICHARD"),
#line 2016
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2017
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2019
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2020
        .doubleBattle = FALSE,
#line 2021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2023
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2024
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2027
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2028
        .trainerName = _("HERMAN"),
#line 2029
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2030
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2032
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2033
        .doubleBattle = FALSE,
#line 2034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2036
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2037
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2040
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2041
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2044
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2045
        .trainerName = _("SANTIAGO"),
#line 2046
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2047
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2049
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2050
        .doubleBattle = FALSE,
#line 2051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2053
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2054
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2057
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2058
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2061
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2062
        .trainerName = _("GILBERT"),
#line 2063
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2064
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2066
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2067
        .doubleBattle = FALSE,
#line 2068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2070
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2071
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2074
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2075
        .trainerName = _("FRANKLIN"),
#line 2076
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2077
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2079
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2080
        .doubleBattle = FALSE,
#line 2081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2083
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2084
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2087
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2088
        .trainerName = _("KEVIN"),
#line 2089
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2090
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2092
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2093
        .doubleBattle = FALSE,
#line 2094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2096
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2097
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2100
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2101
        .trainerName = _("JACK"),
#line 2102
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2103
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2105
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2106
        .doubleBattle = FALSE,
#line 2107
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2109
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2111
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2110
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2113
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2114
        .trainerName = _("DUDLEY"),
#line 2115
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2116
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2118
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2119
        .doubleBattle = FALSE,
#line 2120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2122
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2123
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2126
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2127
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2130
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2131
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2134
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2135
        .trainerName = _("CHAD"),
#line 2136
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2137
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2139
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2140
        .doubleBattle = FALSE,
#line 2141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2143
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2144
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2147
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2148
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2151
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2152
        .trainerName = _("TAKAO"),
#line 2153
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2154
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2156
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2157
        .doubleBattle = FALSE,
#line 2158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2160
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2162
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2161
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2164
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2165
        .trainerName = _("HITOSHI"),
#line 2166
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2167
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2169
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2170
        .doubleBattle = FALSE,
#line 2171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2173
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2175
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2174
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2177
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2179
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2178
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2181
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2182
        .trainerName = _("KIYO"),
#line 2183
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2184
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2186
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2187
        .doubleBattle = FALSE,
#line 2188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2190
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2192
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2191
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2194
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2195
        .trainerName = _("KOICHI"),
#line 2196
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2197
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2199
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2200
        .doubleBattle = FALSE,
#line 2201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2203
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2205
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2204
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2207
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2209
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2208
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2211
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 2212
        .trainerName = _("NOB"),
#line 2213
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2214
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2216
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2217
        .doubleBattle = FALSE,
#line 2218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2220
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2222
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2221
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2224
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2225
        .trainerName = _("YUJI"),
#line 2226
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2227
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2229
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2230
        .doubleBattle = FALSE,
#line 2231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2233
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2235
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2234
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2237
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2239
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2238
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2241
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2242
        .trainerName = _("DAISUKE"),
#line 2243
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2244
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2246
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2247
        .doubleBattle = FALSE,
#line 2248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2250
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2252
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2251
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2254
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2255
        .trainerName = _("ATSUSHI"),
#line 2256
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2257
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2259
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2260
        .doubleBattle = FALSE,
#line 2261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2263
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2265
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2264
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2267
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2268
        .trainerName = _("KIRK"),
#line 2269
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2270
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2272
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2273
        .doubleBattle = FALSE,
#line 2274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2276
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2278
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2277
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2280
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2282
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2281
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2284
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2285
        .trainerName = _("GRUNT"),
#line 2286
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2287
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2288
F_TRAINER_FEMALE | 
#line 2289
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2290
        .doubleBattle = FALSE,
#line 2291
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2293
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2294
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2297
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2298
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2301
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2302
        .trainerName = _("GRUNT"),
#line 2303
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2304
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2306
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2307
        .doubleBattle = FALSE,
#line 2308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2310
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2311
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2314
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2315
        .trainerName = _("SHAWN"),
#line 2316
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2317
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2319
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2320
        .doubleBattle = FALSE,
#line 2321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2323
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2325
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2324
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2327
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2329
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2328
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2331
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO] =
    {
#line 2332
        .trainerName = _("FERNANDO"),
#line 2333
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2334
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2336
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2337
        .doubleBattle = FALSE,
#line 2338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2340
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2341
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2344
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2345
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2348
    [DIFFICULTY_NORMAL][TRAINER_DALTON] =
    {
#line 2349
        .trainerName = _("DALTON"),
#line 2350
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2351
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2353
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2354
        .doubleBattle = FALSE,
#line 2355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2357
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2358
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2361
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2362
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2365
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2366
        .trainerName = _("COLE"),
#line 2367
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2368
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2370
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2371
        .doubleBattle = FALSE,
#line 2372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2374
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2376
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2375
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2378
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2379
        .trainerName = _("JEFF"),
#line 2380
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2381
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2383
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2384
        .doubleBattle = FALSE,
#line 2385
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2387
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2389
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2388
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2391
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2393
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2392
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2395
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2396
        .trainerName = _("AXLE"),
#line 2397
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2398
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2400
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2401
        .doubleBattle = FALSE,
#line 2402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2404
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2406
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2405
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2407
                MOVE_DRAGON_PULSE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2411
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2412
        .trainerName = _("JACE"),
#line 2413
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2414
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2416
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2417
        .doubleBattle = FALSE,
#line 2418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2420
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2422
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2421
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2424
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2425
        .trainerName = _("KEEGAN"),
#line 2426
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2427
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2429
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2430
        .doubleBattle = FALSE,
#line 2431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2433
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2435
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2434
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2436
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_BREATH,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 2440
    [DIFFICULTY_NORMAL][TRAINER_BERNIE] =
    {
#line 2441
        .trainerName = _("BERNIE"),
#line 2442
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2443
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2445
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2446
        .doubleBattle = FALSE,
#line 2447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2449
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2450
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2453
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2454
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2457
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2458
        .trainerName = _("DREW"),
#line 2459
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2460
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2462
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2463
        .doubleBattle = FALSE,
#line 2464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2466
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2467
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2470
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2471
        .trainerName = _("BEAU"),
#line 2472
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2473
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2475
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2476
        .doubleBattle = FALSE,
#line 2477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2479
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2480
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2483
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2484
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2487
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2488
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2492
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2493
        .trainerName = _("LARRY"),
#line 2494
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2495
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2497
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2498
        .doubleBattle = FALSE,
#line 2499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2501
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2502
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2505
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2506
        .trainerName = _("SHANE"),
#line 2507
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2508
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2510
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2511
        .doubleBattle = FALSE,
#line 2512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2514
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2515
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2518
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2519
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2522
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2523
        .trainerName = _("JUSTIN"),
#line 2524
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2525
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2527
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2528
        .doubleBattle = FALSE,
#line 2529
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2531
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2532
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2535
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2536
        .trainerName = _("ETHAN"),
#line 2537
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2538
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2540
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2541
        .doubleBattle = FALSE,
#line 2542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2544
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2545
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2548
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2549
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2552
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2553
        .trainerName = _("AUTUMN"),
#line 2554
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2555
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2556
F_TRAINER_FEMALE | 
#line 2557
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2558
        .doubleBattle = FALSE,
#line 2559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2561
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2562
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2565
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2566
        .trainerName = _("TRAVIS"),
#line 2567
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2568
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2571
        .doubleBattle = FALSE,
#line 2572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2574
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2575
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2578
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2579
        .trainerName = _("BRENT"),
#line 2580
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2581
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2583
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2584
        .doubleBattle = FALSE,
#line 2585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2587
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2589
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2588
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2591
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2592
        .trainerName = _("DONALD"),
#line 2593
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2594
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2596
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2597
        .doubleBattle = FALSE,
#line 2598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2600
            .species = SPECIES_WATCHOG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2602
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2601
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2604
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2606
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2605
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2608
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2610
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2609
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2612
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2613
        .trainerName = _("TAYLOR"),
#line 2614
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2615
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2617
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2618
        .doubleBattle = FALSE,
#line 2619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2621
            .species = SPECIES_CRUSTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2623
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2622
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2625
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2627
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2626
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2629
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2631
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2630
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2633
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 2634
        .trainerName = _("JEFFREY"),
#line 2635
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2636
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2638
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2639
        .doubleBattle = FALSE,
#line 2640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2642
            .species = SPECIES_BEHEEYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2643
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2646
            .species = SPECIES_VESPIQUEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2647
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2650
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2651
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2654
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2655
        .trainerName = _("DEREK"),
#line 2656
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2657
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2659
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2660
        .doubleBattle = FALSE,
#line 2661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2663
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2665
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2664
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2667
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2669
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2668
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2671
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2672
        .trainerName = _("EDWARD"),
#line 2673
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2674
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2676
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2677
        .doubleBattle = FALSE,
#line 2678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2680
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2681
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2684
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2685
        .trainerName = _("PRESTON"),
#line 2686
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2687
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2689
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2690
        .doubleBattle = FALSE,
#line 2691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2693
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2695
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2694
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2697
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2698
        .trainerName = _("VIRGIL"),
#line 2699
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2700
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2702
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2703
        .doubleBattle = FALSE,
#line 2704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2706
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2708
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2707
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2710
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2711
        .trainerName = _("BLAKE"),
#line 2712
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2713
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2715
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2716
        .doubleBattle = FALSE,
#line 2717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2719
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2721
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2720
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2723
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2724
        .trainerName = _("WILLIAM"),
#line 2725
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2726
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2728
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2729
        .doubleBattle = FALSE,
#line 2730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2732
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2733
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2736
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2737
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2740
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2741
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2744
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2745
        .trainerName = _("JOSHUA"),
#line 2746
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2747
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2749
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2750
        .doubleBattle = FALSE,
#line 2751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2753
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2754
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2757
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2758
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2761
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 2762
        .trainerName = _("CAMERON"),
#line 2763
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2764
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2766
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2767
        .doubleBattle = FALSE,
#line 2768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2770
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2771
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2774
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2775
        .trainerName = _("JACLYN"),
#line 2776
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2777
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2778
F_TRAINER_FEMALE | 
#line 2779
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2780
        .doubleBattle = FALSE,
#line 2781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2783
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2784
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2787
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2788
        .trainerName = _("HANNAH"),
#line 2789
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2790
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2791
F_TRAINER_FEMALE | 
#line 2792
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2793
        .doubleBattle = FALSE,
#line 2794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2796
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2798
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2797
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2800
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2801
        .trainerName = _("SAMANTHA"),
#line 2802
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2803
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2804
F_TRAINER_FEMALE | 
#line 2805
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2806
        .doubleBattle = FALSE,
#line 2807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2809
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2811
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2810
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2813
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2814
        .trainerName = _("MAURA"),
#line 2815
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2816
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2817
F_TRAINER_FEMALE | 
#line 2818
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2819
        .doubleBattle = FALSE,
#line 2820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2822
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2824
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2823
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2826
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2827
        .trainerName = _("KAYLA"),
#line 2828
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2829
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2830
F_TRAINER_FEMALE | 
#line 2831
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2832
        .doubleBattle = FALSE,
#line 2833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2835
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2836
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2839
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2840
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2843
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2844
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2847
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2848
        .trainerName = _("ALEXIS"),
#line 2849
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2850
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2851
F_TRAINER_FEMALE | 
#line 2852
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2853
        .doubleBattle = FALSE,
#line 2854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2856
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2857
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2860
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2861
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2864
    [DIFFICULTY_NORMAL][TRAINER_JACKI] =
    {
#line 2865
        .trainerName = _("JACKI"),
#line 2866
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2867
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2868
F_TRAINER_FEMALE | 
#line 2869
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2870
        .doubleBattle = FALSE,
#line 2871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2873
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2874
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2877
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2878
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2881
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 2882
        .trainerName = _("WALTER"),
#line 2883
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2884
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2886
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2887
        .doubleBattle = FALSE,
#line 2888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2890
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2891
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2894
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 2895
        .trainerName = _("MICAH"),
#line 2896
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2897
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2899
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2900
        .doubleBattle = FALSE,
#line 2901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2903
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2904
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2907
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2908
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2911
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 2912
        .trainerName = _("THOMAS"),
#line 2913
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2914
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2916
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2917
        .doubleBattle = FALSE,
#line 2918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2920
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2921
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2924
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 2925
        .trainerName = _("MATT"),
#line 2926
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2927
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 2929
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2930
        .doubleBattle = FALSE,
#line 2931
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2932
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2934
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2934
            .heldItem = ITEM_CHOICE_SPECS,
#line 2938
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2935
            .ability = ABILITY_SCRAPPY,
#line 2936
            .lvl = 69,
#line 2937
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2938
                MOVE_BOOMBURST,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 2943
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2943
            .heldItem = ITEM_CHOICE_BAND,
#line 2947
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2944
            .ability = ABILITY_KEEN_EYE,
#line 2945
            .lvl = 69,
#line 2946
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2947
                MOVE_BRICK_BREAK,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 2952
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2952
            .heldItem = ITEM_THROAT_SPRAY,
#line 2956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2953
            .ability = ABILITY_BIG_PECKS,
#line 2954
            .lvl = 69,
#line 2955
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2956
                MOVE_SING,
                MOVE_PARTING_SHOT,
                MOVE_BOOMBURST,
                MOVE_ROOST,
            },
            },
            {
#line 2961
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2961
            .heldItem = ITEM_BRIGHT_POWDER,
#line 2965
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2962
            .ability = ABILITY_REGENERATOR,
#line 2963
            .lvl = 69,
#line 2964
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2965
                MOVE_WISH,
                MOVE_PROTECT,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2970
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2970
            .heldItem = ITEM_LEFTOVERS,
#line 2974
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2971
            .ability = ABILITY_SERENE_GRACE,
#line 2972
            .lvl = 69,
#line 2973
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2974
                MOVE_SUBSTITUTE,
                MOVE_CALM_MIND,
                MOVE_PSYSHOCK,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 2979
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2979
            .heldItem = ITEM_ROCKY_HELMET,
#line 2983
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2980
            .ability = ABILITY_CUTE_CHARM,
#line 2981
            .lvl = 69,
#line 2982
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2983
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_WAVE,
                MOVE_FLAMETHROWER,
                MOVE_ALLURING_VOICE,
            },
            },
        },
    },
#line 2989
    [DIFFICULTY_NORMAL][TRAINER_OZ] =
    {
#line 2990
        .trainerName = _("OZ"),
#line 2991
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2992
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 2994
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2995
        .doubleBattle = FALSE,
#line 2996
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2997
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2999
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2999
            .heldItem = ITEM_SCOPE_LENS,
#line 3004
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3000
            .ability = ABILITY_SNIPER,
#line 3001
            .lvl = 70,
#line 3003
            .nature = NATURE_JOLLY,
#line 3002
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3004
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 3009
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3009
            .heldItem = ITEM_CHARTI_BERRY,
#line 3014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3010
            .ability = ABILITY_FLAME_BODY,
#line 3011
            .lvl = 70,
#line 3013
            .nature = NATURE_TIMID,
#line 3012
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3014
                MOVE_QUIVER_DANCE,
                MOVE_FLAMETHROWER,
                MOVE_MORNING_SUN,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 3019
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3019
            .heldItem = ITEM_CHOICE_SPECS,
#line 3024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3020
            .ability = ABILITY_TINTED_LENS,
#line 3021
            .lvl = 70,
#line 3023
            .nature = NATURE_MODEST,
#line 3022
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3024
                MOVE_BUG_BUZZ,
                MOVE_AIR_SLASH,
                MOVE_HIDDEN_POWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3029
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3029
            .heldItem = ITEM_CHOICE_BAND,
#line 3034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3030
            .ability = ABILITY_TECHNICIAN,
#line 3031
            .lvl = 70,
#line 3033
            .nature = NATURE_ADAMANT,
#line 3032
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3034
                MOVE_CLOSE_COMBAT,
                MOVE_BULLET_PUNCH,
                MOVE_U_TURN,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3039
            .species = SPECIES_GENESECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .heldItem = ITEM_DOUSE_DRIVE,
#line 3044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3040
            .ability = ABILITY_DOWNLOAD,
#line 3041
            .lvl = 70,
#line 3043
            .nature = NATURE_HASTY,
#line 3042
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3044
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
                MOVE_TECHNO_BLAST,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3049
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3049
            .heldItem = ITEM_FOCUS_SASH,
#line 3054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3050
            .ability = ABILITY_CHLOROPHYLL,
#line 3051
            .lvl = 70,
#line 3053
            .nature = NATURE_NAUGHTY,
#line 3052
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3054
                MOVE_STRUGGLE_BUG,
                MOVE_LEAF_STORM,
                MOVE_ELECTROWEB,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3059
    [DIFFICULTY_NORMAL][TRAINER_DIEGO] =
    {
#line 3060
        .trainerName = _("DIEGO"),
#line 3061
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3062
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3064
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3065
        .doubleBattle = FALSE,
#line 3066
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3067
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3069
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3069
            .heldItem = ITEM_LEFTOVERS,
#line 3073
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3070
            .ability = ABILITY_DROUGHT,
#line 3071
            .lvl = 71,
#line 3072
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3073
                MOVE_SPIKES,
                MOVE_EARTHQUAKE,
                MOVE_STEALTH_ROCK,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 3078
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3078
            .heldItem = ITEM_MUSCLE_BAND,
#line 3082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3079
            .ability = ABILITY_FLAME_BODY,
#line 3080
            .lvl = 71,
#line 3081
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3082
                MOVE_PLAY_ROUGH,
                MOVE_MEGAHORN,
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
            },
            },
            {
#line 3087
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3087
            .heldItem = ITEM_LIFE_ORB,
#line 3091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3088
            .ability = ABILITY_SPEED_BOOST,
#line 3089
            .lvl = 71,
#line 3090
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3091
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3097
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3097
            .heldItem = ITEM_ASSAULT_VEST,
#line 3101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3098
            .ability = ABILITY_BLAZE,
#line 3099
            .lvl = 71,
#line 3100
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3101
                MOVE_SCORCHING_SANDS,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 3107
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3107
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3111
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3108
            .ability = ABILITY_LEVITATE,
#line 3109
            .lvl = 71,
#line 3110
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3111
                MOVE_OVERHEAT,
                MOVE_VOLT_SWITCH,
                MOVE_TOXIC,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 3117
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3117
            .heldItem = ITEM_CHOICE_SPECS,
#line 3121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3118
            .ability = ABILITY_INFILTRATOR,
#line 3119
            .lvl = 71,
#line 3120
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3121
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_TRICK,
            },
            },
        },
    },
#line 3127
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3128
        .trainerName = _("DRAKE"),
#line 3129
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3130
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3132
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3133
        .doubleBattle = FALSE,
#line 3134
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3135
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3137
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3137
            .heldItem = ITEM_ASSAULT_VEST,
#line 3141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3138
            .ability = ABILITY_SAND_STREAM,
#line 3139
            .lvl = 72,
#line 3140
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3141
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3146
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3146
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3147
            .ability = ABILITY_PRANKSTER,
#line 3148
            .lvl = 72,
#line 3149
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3150
                MOVE_ENCORE,
                MOVE_FOUL_PLAY,
                MOVE_WILL_O_WISP,
                MOVE_TAUNT,
            },
            },
            {
#line 3155
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3155
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3156
            .ability = ABILITY_PICKPOCKET,
#line 3157
            .lvl = 72,
#line 3158
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3159
                MOVE_AERIAL_ACE,
                MOVE_ICE_SHARD,
                MOVE_TRIPLE_AXEL,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3164
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3164
            .heldItem = ITEM_CHOICE_SPECS,
#line 3168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3165
            .ability = ABILITY_LEVITATE,
#line 3166
            .lvl = 72,
#line 3167
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3168
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3173
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3173
            .heldItem = ITEM_ROCKY_HELMET,
#line 3177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3174
            .ability = ABILITY_INTIMIDATE,
#line 3175
            .lvl = 72,
#line 3176
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3177
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3182
            .species = SPECIES_JIRACHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3182
            .heldItem = ITEM_LEFTOVERS,
#line 3186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3183
            .ability = ABILITY_SERENE_GRACE,
#line 3184
            .lvl = 73,
#line 3185
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3186
                MOVE_PSYCHIC,
                MOVE_IRON_HEAD,
                MOVE_WISH,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 3191
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE] =
    {
#line 3192
        .trainerName = _("ALEC"),
#line 3193
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3194
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3196
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3197
        .doubleBattle = FALSE,
#line 3198
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3200
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3204
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3201
            .ability = ABILITY_STURDY,
#line 3202
            .lvl = 15,
#line 3203
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3205
                MOVE_STEALTH_ROCK,
                MOVE_COPYCAT,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3210
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3214
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3211
            .ability = ABILITY_LEVITATE,
#line 3212
            .lvl = 15,
#line 3213
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3215
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3220
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3220
            .heldItem = ITEM_SALAC_BERRY,
#line 3224
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3221
            .ability = ABILITY_UNNERVE,
#line 3222
            .lvl = 16,
#line 3223
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3225
                MOVE_ROCK_SLIDE,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3230
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY] =
    {
#line 3231
        .trainerName = _("GARRETT"),
#line 3232
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3233
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3235
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3236
        .doubleBattle = FALSE,
#line 3237
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3239
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3243
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3240
            .ability = ABILITY_MARVEL_SCALE,
#line 3241
            .lvl = 21,
#line 3242
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3244
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3249
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3253
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3250
            .ability = ABILITY_TORRENT,
#line 3251
            .lvl = 22,
#line 3252
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3254
                MOVE_BUBBLEBEAM,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3259
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3260
            .ability = ABILITY_SKILL_LINK,
#line 3261
            .lvl = 22,
#line 3262
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3264
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3269
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3269
            .heldItem = ITEM_WIDE_LENS,
#line 3273
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3270
            .ability = ABILITY_TORRENT,
#line 3271
            .lvl = 22,
#line 3272
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3274
                MOVE_SAND_TOMB,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3279
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3280
        .trainerName = _("SAM"),
#line 3281
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3282
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3285
        .doubleBattle = FALSE,
#line 3286
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3288
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3292
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3289
            .ability = ABILITY_MAGNET_PULL,
#line 3290
            .lvl = 31,
#line 3291
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3293
                MOVE_MAGNET_RISE,
                MOVE_THUNDER_SHOCK,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3298
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3302
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3299
            .ability = ABILITY_DOWNLOAD,
#line 3300
            .lvl = 31,
#line 3301
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3303
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3308
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3312
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3309
            .ability = ABILITY_VITAL_SPIRIT,
#line 3311
            .lvl = 31,
#line 3310
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3313
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_SCREECH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3318
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .heldItem = ITEM_MAGNET,
#line 3322
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3319
            .ability = ABILITY_STATIC,
#line 3320
            .lvl = 32,
#line 3321
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3323
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3328
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY] =
    {
#line 3329
        .trainerName = _("JOSE"),
#line 3330
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3331
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3333
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3334
        .doubleBattle = FALSE,
#line 3335
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3337
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3337
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3341
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3338
            .ability = ABILITY_NATURAL_CURE,
#line 3339
            .lvl = 40,
#line 3340
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3342
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3347
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3347
            .heldItem = ITEM_CHARCOAL,
#line 3351
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3348
            .ability = ABILITY_BLAZE,
#line 3349
            .lvl = 40,
#line 3350
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3352
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3357
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3357
            .heldItem = ITEM_ASSAULT_VEST,
#line 3361
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3358
            .ability = ABILITY_LEVITATE,
#line 3359
            .lvl = 40,
#line 3360
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3362
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3367
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .heldItem = ITEM_ROCKY_HELMET,
#line 3371
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3368
            .ability = ABILITY_MARVEL_SCALE,
#line 3369
            .lvl = 40,
#line 3370
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3372
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3377
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3377
            .heldItem = ITEM_DRAGON_FANG,
#line 3381
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3378
            .ability = ABILITY_SNIPER,
#line 3379
            .lvl = 40,
#line 3380
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3382
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
                MOVE_YAWN,
            },
            },
        },
    },
#line 3387
    [DIFFICULTY_NORMAL][TRAINER_NORMAN] =
    {
#line 3388
        .trainerName = _("GRAYSON"),
#line 3389
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3390
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3392
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3393
        .doubleBattle = FALSE,
#line 3394
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3396
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3396
            .heldItem = ITEM_MUSCLE_BAND,
#line 3400
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3397
            .ability = ABILITY_IRON_FIST,
#line 3398
            .lvl = 43,
#line 3399
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3400
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3406
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .heldItem = ITEM_BLACK_BELT,
#line 3410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3407
            .ability = ABILITY_GUTS,
#line 3408
            .lvl = 43,
#line 3409
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3410
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3415
            .species = SPECIES_LOPUNNY,
#line 3415
            .gender = TRAINER_MON_FEMALE,
#line 3415
            .heldItem = ITEM_ROCKY_HELMET,
#line 3419
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3416
            .ability = ABILITY_CUTE_CHARM,
#line 3417
            .lvl = 43,
#line 3418
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3419
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3424
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3424
            .heldItem = ITEM_FOCUS_BAND,
#line 3428
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3425
            .ability = ABILITY_STURDY,
#line 3426
            .lvl = 43,
#line 3427
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3428
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3434
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3434
            .heldItem = ITEM_EXPERT_BELT,
#line 3438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3435
            .ability = ABILITY_STURDY,
#line 3436
            .lvl = 43,
#line 3437
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3438
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 3444
    [DIFFICULTY_NORMAL][TRAINER_WINONA] =
    {
#line 3445
        .trainerName = _("MATTHEW"),
#line 3446
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3447
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3449
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3450
        .doubleBattle = FALSE,
#line 3451
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3453
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3453
            .heldItem = ITEM_AIR_BALLOON,
#line 3457
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3454
            .ability = ABILITY_STURDY,
#line 3455
            .lvl = 51,
#line 3456
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3457
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3462
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3462
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3466
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3463
            .ability = ABILITY_WEAK_ARMOR,
#line 3464
            .lvl = 51,
#line 3465
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3466
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3471
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3471
            .heldItem = ITEM_ASSAULT_VEST,
#line 3475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3472
            .ability = ABILITY_CLEAR_BODY,
#line 3473
            .lvl = 51,
#line 3474
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3475
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3480
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .heldItem = ITEM_CHOICE_BAND,
#line 3484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3481
            .ability = ABILITY_TECHNICIAN,
#line 3482
            .lvl = 51,
#line 3483
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3484
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3489
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3489
            .heldItem = ITEM_ROCKY_HELMET,
#line 3493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3490
            .ability = ABILITY_IRON_BARBS,
#line 3491
            .lvl = 51,
#line 3492
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3493
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3498
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA] =
    {
#line 3499
        .trainerName = _("MARK"),
#line 3500
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3501
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
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
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3507
            .heldItem = ITEM_ROCKY_HELMET,
#line 3511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3508
            .ability = ABILITY_FLASH_FIRE,
#line 3509
            .lvl = 55,
#line 3510
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3511
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3516
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .heldItem = ITEM_CHOICE_SPECS,
#line 3520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3517
            .ability = ABILITY_PIXILATE,
#line 3518
            .lvl = 55,
#line 3519
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3525
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3525
            .heldItem = ITEM_CHOICE_BAND,
#line 3528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3526
            .ability = ABILITY_HUGE_POWER,
#line 3527
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3528
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3533
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3533
            .heldItem = ITEM_CHOICE_SCARF,
#line 3537
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3534
            .ability = ABILITY_SERENE_GRACE,
#line 3535
            .lvl = 55,
#line 3536
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3537
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3542
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3542
            .heldItem = ITEM_LEFTOVERS,
#line 3546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3543
            .ability = ABILITY_MAGIC_GUARD,
#line 3544
            .lvl = 55,
#line 3545
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3546
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3552
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3552
            .heldItem = ITEM_OCCA_BERRY,
#line 3555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3553
            .ability = ABILITY_INTIMIDATE,
#line 3554
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3555
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3561
    [DIFFICULTY_NORMAL][TRAINER_JUAN] =
    {
#line 3562
        .trainerName = _("XANDER"),
#line 3563
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3564
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3566
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3567
        .doubleBattle = TRUE,
#line 3568
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3570
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .heldItem = ITEM_LEFTOVERS,
#line 3574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .ability = ABILITY_SHADOW_TAG,
#line 3572
            .lvl = 61,
#line 3573
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3574
                MOVE_TRICK_ROOM,
                MOVE_PROTECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3579
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3579
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3583
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3580
            .ability = ABILITY_CURSED_BODY,
#line 3581
            .lvl = 61,
#line 3582
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3583
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3588
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3588
            .heldItem = ITEM_CHOICE_SPECS,
#line 3592
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3589
            .ability = ABILITY_FLASH_FIRE,
#line 3590
            .lvl = 61,
#line 3591
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3592
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3597
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3597
            .heldItem = ITEM_SITRUS_BERRY,
#line 3601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3598
            .ability = ABILITY_LEVITATE,
#line 3599
            .lvl = 61,
#line 3600
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3601
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3606
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .heldItem = ITEM_LEFTOVERS,
#line 3610
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3607
            .ability = ABILITY_NO_GUARD,
#line 3608
            .lvl = 61,
#line 3609
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3610
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3615
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3615
            .heldItem = ITEM_SITRUS_BERRY,
#line 3619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3616
            .ability = ABILITY_MUMMY,
#line 3617
            .lvl = 61,
#line 3618
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3619
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3624
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3625
        .trainerName = _("JERRY"),
#line 3626
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3627
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3630
        .doubleBattle = FALSE,
#line 3631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3633
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3635
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3634
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3637
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3638
        .trainerName = _("TED"),
#line 3639
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3640
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3642
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3643
        .doubleBattle = FALSE,
#line 3644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3646
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3648
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3647
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3650
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3651
        .trainerName = _("PAUL"),
#line 3652
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3653
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3655
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3656
        .doubleBattle = FALSE,
#line 3657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3659
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3661
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3660
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3663
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3665
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3664
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3667
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3668
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3671
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3672
        .trainerName = _("KAREN"),
#line 3673
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3674
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3675
F_TRAINER_FEMALE | 
#line 3676
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3677
        .doubleBattle = FALSE,
#line 3678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3680
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3682
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3681
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3684
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3685
        .trainerName = _("GEORGIA"),
#line 3686
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3687
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3688
F_TRAINER_FEMALE | 
#line 3689
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3690
        .doubleBattle = FALSE,
#line 3691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3693
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3695
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3694
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3697
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3698
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3701
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3702
        .trainerName = _("KATE & JOY"),
#line 3703
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3704
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3706
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3707
        .doubleBattle = TRUE,
#line 3708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3710
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3711
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3714
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3715
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3719
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3720
        .trainerName = _("ANNA & MEG"),
#line 3721
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3722
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3724
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3725
        .doubleBattle = TRUE,
#line 3726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3728
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3729
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3732
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3733
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3736
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3737
        .trainerName = _("VICTOR"),
#line 3738
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3739
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3741
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3742
        .doubleBattle = FALSE,
#line 3743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3745
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3745
            .heldItem = ITEM_ORAN_BERRY,
#line 3747
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3746
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3749
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3749
            .heldItem = ITEM_ORAN_BERRY,
#line 3751
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3750
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3753
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3754
        .trainerName = _("MIGUEL"),
#line 3755
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3756
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3758
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3759
        .doubleBattle = FALSE,
#line 3760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3762
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .heldItem = ITEM_ORAN_BERRY,
#line 3764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3763
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3766
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3767
        .trainerName = _("COLTON"),
#line 3768
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3769
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3771
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3772
        .doubleBattle = FALSE,
#line 3773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3775
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .heldItem = ITEM_ORAN_BERRY,
#line 3777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3776
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3778
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3783
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3783
            .heldItem = ITEM_ORAN_BERRY,
#line 3785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3784
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3786
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3791
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3791
            .heldItem = ITEM_ORAN_BERRY,
#line 3793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3792
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3794
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3799
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3799
            .heldItem = ITEM_ORAN_BERRY,
#line 3801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3800
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3802
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3807
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3807
            .heldItem = ITEM_ORAN_BERRY,
#line 3809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3808
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3810
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3815
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3815
            .heldItem = ITEM_ORAN_BERRY,
#line 3817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3816
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3818
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3823
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3824
        .trainerName = _("VICTORIA"),
#line 3825
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3826
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3827
F_TRAINER_FEMALE | 
#line 3828
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3829
        .doubleBattle = FALSE,
#line 3830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3832
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3832
            .heldItem = ITEM_ORAN_BERRY,
#line 3834
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3833
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3836
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3837
        .trainerName = _("VANESSA"),
#line 3838
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3839
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3840
F_TRAINER_FEMALE | 
#line 3841
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3842
        .doubleBattle = FALSE,
#line 3843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3845
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .heldItem = ITEM_ORAN_BERRY,
#line 3847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3846
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3849
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3850
        .trainerName = _("BETHANY"),
#line 3851
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3852
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3853
F_TRAINER_FEMALE | 
#line 3854
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3855
        .doubleBattle = FALSE,
#line 3856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3858
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3858
            .heldItem = ITEM_ORAN_BERRY,
#line 3860
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3859
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3862
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3862
            .heldItem = ITEM_ORAN_BERRY,
#line 3864
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3863
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3866
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3866
            .heldItem = ITEM_ORAN_BERRY,
#line 3868
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3867
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3870
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3871
        .trainerName = _("ISABEL"),
#line 3872
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3873
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3874
F_TRAINER_FEMALE | 
#line 3875
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3876
        .doubleBattle = FALSE,
#line 3877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3879
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3879
            .heldItem = ITEM_ORAN_BERRY,
#line 3881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3880
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3883
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3883
            .heldItem = ITEM_ORAN_BERRY,
#line 3885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3884
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3887
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3888
        .trainerName = _("TIMOTHY"),
#line 3889
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3890
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3892
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3893
        .doubleBattle = FALSE,
#line 3894
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3896
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3898
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3897
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3900
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3901
        .trainerName = _("VICKY"),
#line 3902
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3903
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3904
F_TRAINER_FEMALE | 
#line 3905
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3906
        .doubleBattle = FALSE,
#line 3907
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3909
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3911
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3910
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3913
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 3914
        .trainerName = _("SHELBY"),
#line 3915
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3916
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3917
F_TRAINER_FEMALE | 
#line 3918
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3919
        .doubleBattle = FALSE,
#line 3920
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3922
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3924
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3923
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3926
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3928
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3927
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3930
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 3931
        .trainerName = _("CALVIN"),
#line 3932
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3933
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3935
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3936
        .doubleBattle = FALSE,
#line 3937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3939
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3940
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3943
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 3944
        .trainerName = _("BILLY"),
#line 3945
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3946
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3948
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3949
        .doubleBattle = FALSE,
#line 3950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3952
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3953
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3956
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3957
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3960
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 3961
        .trainerName = _("JOSH"),
#line 3962
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3963
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3965
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3966
        .doubleBattle = FALSE,
#line 3967
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3969
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3971
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3970
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3972
                MOVE_TACKLE,
            },
            },
        },
    },
#line 3974
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 3975
        .trainerName = _("TOMMY"),
#line 3976
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3977
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3979
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3980
        .doubleBattle = FALSE,
#line 3981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3983
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3985
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 3984
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3987
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3989
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3988
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3991
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 3992
        .trainerName = _("JOEY"),
#line 3993
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3994
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3996
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3997
        .doubleBattle = FALSE,
#line 3998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4000
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4001
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4004
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4005
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4008
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4009
        .trainerName = _("BEN"),
#line 4010
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4011
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4013
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4014
        .doubleBattle = FALSE,
#line 4015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4017
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4019
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4018
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4022
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4024
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4023
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4027
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4028
        .trainerName = _("QUINCY"),
#line 4029
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4030
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4032
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4033
        .items = { ITEM_FULL_RESTORE },
#line 4034
        .doubleBattle = FALSE,
#line 4035
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4037
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4039
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4038
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4041
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4043
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4042
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4045
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4046
        .trainerName = _("KATELYNN"),
#line 4047
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4048
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4049
F_TRAINER_FEMALE | 
#line 4050
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4051
        .items = { ITEM_FULL_RESTORE },
#line 4052
        .doubleBattle = FALSE,
#line 4053
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4055
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4057
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4056
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4058
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4063
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4065
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4064
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4066
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4071
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4072
        .trainerName = _("JAYLEN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4080
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4081
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4084
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4085
        .trainerName = _("DILLON"),
#line 4086
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4087
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4089
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4090
        .doubleBattle = FALSE,
#line 4091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4093
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4094
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4097
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4098
        .trainerName = _("EDDIE"),
#line 4099
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4100
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4102
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4103
        .doubleBattle = FALSE,
#line 4104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4106
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4107
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4110
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4111
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4114
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4115
        .trainerName = _("ALLEN"),
#line 4116
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4117
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4119
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4120
        .doubleBattle = FALSE,
#line 4121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4123
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4124
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4127
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4128
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4131
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4132
        .trainerName = _("TIMMY"),
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
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4141
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4144
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4145
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4148
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4149
        .trainerName = _("FATTY"),
#line 4150
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4151
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4154
        .doubleBattle = FALSE,
#line 4155
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4156
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4158
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .heldItem = ITEM_LEFTOVERS,
#line 4162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4159
            .ability = ABILITY_THICK_FAT,
#line 4160
            .lvl = 75,
#line 4161
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4162
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 4167
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4167
            .heldItem = ITEM_CHOICE_BAND,
#line 4171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4168
            .ability = ABILITY_INTIMIDATE,
#line 4169
            .lvl = 75,
#line 4170
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4171
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4176
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4176
            .heldItem = ITEM_LIFE_ORB,
#line 4180
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4177
            .ability = ABILITY_OVERGROW,
#line 4178
            .lvl = 75,
#line 4179
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4180
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 4185
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4185
            .heldItem = ITEM_FOCUS_SASH,
#line 4189
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4186
            .ability = ABILITY_MAGIC_GUARD,
#line 4187
            .lvl = 75,
#line 4188
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4189
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4194
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4194
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 4198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4195
            .ability = ABILITY_STATIC,
#line 4196
            .lvl = 75,
#line 4197
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4198
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4203
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .heldItem = ITEM_EVIOLITE,
#line 4207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4204
            .ability = ABILITY_SWIFT_SWIM,
#line 4205
            .lvl = 78,
#line 4206
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4207
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4212
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4213
        .trainerName = _("ANDREW"),
#line 4214
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4215
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4217
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4218
        .doubleBattle = FALSE,
#line 4219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4221
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4222
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4225
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4227
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4226
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4229
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4230
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4233
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4234
        .trainerName = _("IVAN"),
#line 4235
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4236
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4238
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4239
        .doubleBattle = FALSE,
#line 4240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4242
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4243
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4246
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4247
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4250
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4251
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4254
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4255
        .trainerName = _("CLAUDE"),
#line 4256
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4257
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4259
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4260
        .doubleBattle = FALSE,
#line 4261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4263
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4264
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4267
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4268
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4271
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4272
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4275
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4276
        .trainerName = _("ELLIOT"),
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
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4286
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4285
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4288
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4289
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4292
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4294
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4293
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4296
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4297
        .trainerName = _("NED"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4305
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4306
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4309
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4310
        .trainerName = _("DALE"),
#line 4311
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4312
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4314
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4315
        .doubleBattle = FALSE,
#line 4316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4318
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4319
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4322
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4323
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4326
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4327
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4330
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4331
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4334
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4335
        .trainerName = _("NOLAN"),
#line 4336
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4337
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4339
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4340
        .doubleBattle = FALSE,
#line 4341
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4343
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4344
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4347
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4348
        .trainerName = _("BARNY"),
#line 4349
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4350
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4352
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4353
        .doubleBattle = FALSE,
#line 4354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4356
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4357
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4360
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4361
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4364
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4365
        .trainerName = _("WADE"),
#line 4366
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4367
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4369
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4370
        .doubleBattle = FALSE,
#line 4371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4373
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4375
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4374
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4376
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4377
        .trainerName = _("ABIGAL"),
#line 4378
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4379
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4380
F_TRAINER_FEMALE | 
#line 4381
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4382
        .doubleBattle = FALSE,
#line 4383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4385
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4387
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4386
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4388
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4389
        .trainerName = _("CARTER"),
#line 4390
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4391
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4393
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4394
        .doubleBattle = FALSE,
#line 4395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4397
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4398
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4401
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4402
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4405
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4406
        .trainerName = _("RONALD"),
#line 4407
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4408
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4410
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4411
        .doubleBattle = FALSE,
#line 4412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4414
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4415
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4419
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4420
        .trainerName = _("JACOB"),
#line 4421
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4422
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4424
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4425
        .doubleBattle = FALSE,
#line 4426
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4428
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4430
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4429
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4432
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4434
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4433
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4436
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4437
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4440
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4441
        .trainerName = _("ANTHONY"),
#line 4442
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4443
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4445
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4446
        .doubleBattle = FALSE,
#line 4447
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4449
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4450
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4453
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4454
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4457
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4458
        .trainerName = _("BENJAMIN"),
#line 4459
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4460
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4462
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4463
        .doubleBattle = FALSE,
#line 4464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4466
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4467
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4470
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4471
        .trainerName = _("JASMINE"),
#line 4472
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4473
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4474
F_TRAINER_FEMALE | 
#line 4475
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4476
        .doubleBattle = FALSE,
#line 4477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4479
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4481
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4480
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4483
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4485
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4484
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4487
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4488
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4491
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4492
        .trainerName = _("DYLAN"),
#line 4493
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4494
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4496
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4497
        .doubleBattle = FALSE,
#line 4498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4500
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4501
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4504
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4505
        .trainerName = _("MARIA"),
#line 4506
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4507
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4508
F_TRAINER_FEMALE | 
#line 4509
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4510
        .doubleBattle = FALSE,
#line 4511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4513
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4514
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4517
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4518
        .trainerName = _("CAMDEN"),
#line 4519
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4520
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4522
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4523
        .doubleBattle = FALSE,
#line 4524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4526
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4527
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4530
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4531
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4534
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4535
        .trainerName = _("DEMETRIUS"),
#line 4536
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4537
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4539
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4540
        .doubleBattle = FALSE,
#line 4541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4543
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4544
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4547
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4548
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4551
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4552
        .trainerName = _("ISAIAH"),
#line 4553
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4554
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4556
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4557
        .doubleBattle = FALSE,
#line 4558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4560
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4561
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4564
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4565
        .trainerName = _("PABLO"),
#line 4566
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4567
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4569
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4570
        .doubleBattle = FALSE,
#line 4571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4573
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4574
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4577
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4578
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4581
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4582
        .trainerName = _("CHASE"),
#line 4583
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4584
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4586
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4587
        .doubleBattle = FALSE,
#line 4588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4590
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4591
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4594
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4596
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4595
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4598
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4599
        .trainerName = _("ISOBEL"),
#line 4600
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4601
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4602
F_TRAINER_FEMALE | 
#line 4603
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4604
        .doubleBattle = FALSE,
#line 4605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4607
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4608
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4611
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4612
        .trainerName = _("DONNY"),
#line 4613
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4614
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4615
F_TRAINER_FEMALE | 
#line 4616
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4617
        .doubleBattle = FALSE,
#line 4618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4620
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4621
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4624
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4626
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4625
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4628
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4629
        .trainerName = _("TALIA"),
#line 4630
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4631
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4632
F_TRAINER_FEMALE | 
#line 4633
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4634
        .doubleBattle = FALSE,
#line 4635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4637
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4638
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4641
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4642
        .trainerName = _("KATELYN"),
#line 4643
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4644
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4645
F_TRAINER_FEMALE | 
#line 4646
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4647
        .doubleBattle = FALSE,
#line 4648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4650
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4651
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4654
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4655
        .trainerName = _("ALLISON"),
#line 4656
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4657
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4658
F_TRAINER_FEMALE | 
#line 4659
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4660
        .doubleBattle = FALSE,
#line 4661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4663
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4664
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4667
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4669
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4668
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4671
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4672
        .trainerName = _("NICOLAS"),
#line 4673
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4674
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4676
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4677
        .doubleBattle = FALSE,
#line 4678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4680
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4682
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4681
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4684
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4685
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4688
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4689
        .trainerName = _("AARON"),
#line 4690
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4691
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4693
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4694
        .doubleBattle = FALSE,
#line 4695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4697
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4698
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4701
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4702
        .trainerName = _("PERRY"),
#line 4703
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4704
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4706
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4707
        .doubleBattle = FALSE,
#line 4708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4710
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4711
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4714
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4715
        .trainerName = _("HUGH"),
#line 4716
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4717
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4719
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4720
        .doubleBattle = FALSE,
#line 4721
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4723
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4724
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4727
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4728
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4731
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4732
        .trainerName = _("PHIL"),
#line 4733
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4734
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4736
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4737
        .doubleBattle = FALSE,
#line 4738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4740
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4741
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4744
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4745
        .trainerName = _("JARED"),
#line 4746
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4747
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4749
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4750
        .doubleBattle = FALSE,
#line 4751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4754
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4757
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4758
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4761
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4763
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4762
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4765
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4766
        .trainerName = _("HUMBERTO"),
#line 4767
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4768
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4770
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4771
        .doubleBattle = FALSE,
#line 4772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4774
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4775
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4778
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4779
        .trainerName = _("PRESLEY"),
#line 4780
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4781
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4783
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4784
        .doubleBattle = FALSE,
#line 4785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4787
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4788
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4791
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4792
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4795
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4796
        .trainerName = _("EDWARDO"),
#line 4797
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4798
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4800
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4801
        .doubleBattle = FALSE,
#line 4802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4804
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4805
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4808
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4810
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4809
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4812
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4813
        .trainerName = _("COLIN"),
#line 4814
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4815
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4817
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4818
        .doubleBattle = FALSE,
#line 4819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4821
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4822
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4825
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4826
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4829
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4830
        .trainerName = _("ROBERT"),
#line 4831
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4832
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4834
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4835
        .doubleBattle = FALSE,
#line 4836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4838
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4839
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4842
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4843
        .trainerName = _("BENNY"),
#line 4844
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4845
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4847
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4848
        .doubleBattle = FALSE,
#line 4849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4851
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4852
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4855
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4856
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4859
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4860
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4863
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4864
        .trainerName = _("CHESTER"),
#line 4865
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4866
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4868
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4869
        .doubleBattle = FALSE,
#line 4870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4872
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4873
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4876
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4877
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4880
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4881
        .trainerName = _("ALEX"),
#line 4882
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4883
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4885
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4886
        .doubleBattle = FALSE,
#line 4887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4889
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4891
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4890
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4893
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4895
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4894
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4897
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4898
        .trainerName = _("BECK"),
#line 4899
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4900
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4902
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4903
        .doubleBattle = FALSE,
#line 4904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4906
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4907
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4910
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4911
        .trainerName = _("YASU"),
#line 4912
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4913
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4915
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4916
        .doubleBattle = FALSE,
#line 4917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4919
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4920
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4923
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4924
        .trainerName = _("TAKASHI"),
#line 4925
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4926
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4928
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4929
        .doubleBattle = FALSE,
#line 4930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4932
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4933
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4936
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4937
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4940
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 4941
        .trainerName = _("DIANNE"),
#line 4942
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4943
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4944
F_TRAINER_FEMALE | 
#line 4945
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4946
        .items = { ITEM_FULL_RESTORE },
#line 4947
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4949
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4950
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4952
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4955
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4956
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4958
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 4961
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 4962
        .trainerName = _("JANI"),
#line 4963
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 4964
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 4965
F_TRAINER_FEMALE | 
#line 4966
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4967
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4969
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4970
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4973
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 4974
        .trainerName = _("LAO"),
#line 4975
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4976
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4978
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4979
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4981
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4982
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4985
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4986
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4989
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4990
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4993
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 4994
        .trainerName = _("LUNG"),
#line 4995
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4996
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4998
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4999
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5001
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5002
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5005
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5006
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5009
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5010
        .trainerName = _("JOCELYN"),
#line 5011
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5012
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5013
F_TRAINER_FEMALE | 
#line 5014
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5015
        .doubleBattle = FALSE,
#line 5016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5018
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5020
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5019
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5022
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5023
        .trainerName = _("LAURA"),
#line 5024
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5025
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5026
F_TRAINER_FEMALE | 
#line 5027
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5028
        .doubleBattle = FALSE,
#line 5029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5031
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5033
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5032
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5035
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5036
        .trainerName = _("CYNDY"),
#line 5037
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5038
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5039
F_TRAINER_FEMALE | 
#line 5040
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5041
        .doubleBattle = FALSE,
#line 5042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5044
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5046
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5045
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5048
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5049
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5052
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5053
        .trainerName = _("CORA"),
#line 5054
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5055
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5056
F_TRAINER_FEMALE | 
#line 5057
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5058
        .doubleBattle = FALSE,
#line 5059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5061
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5062
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5065
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5066
        .trainerName = _("PAULA"),
#line 5067
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5068
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5069
F_TRAINER_FEMALE | 
#line 5070
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5071
        .doubleBattle = FALSE,
#line 5072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5074
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5076
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5075
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5078
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5079
        .trainerName = _("MADELINE"),
#line 5080
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5081
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5082
F_TRAINER_FEMALE | 
#line 5083
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5084
        .doubleBattle = FALSE,
#line 5085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5087
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5088
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5091
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5092
        .trainerName = _("CLARISSA"),
#line 5093
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5094
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5095
F_TRAINER_FEMALE | 
#line 5096
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5097
        .doubleBattle = FALSE,
#line 5098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5100
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5101
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5104
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5105
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5108
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5109
        .trainerName = _("ANGELICA"),
#line 5110
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5111
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5112
F_TRAINER_FEMALE | 
#line 5113
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5114
        .doubleBattle = FALSE,
#line 5115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5117
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5119
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5118
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5121
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5122
        .trainerName = _("BEVERLY"),
#line 5123
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5124
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5125
F_TRAINER_FEMALE | 
#line 5126
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5127
        .doubleBattle = FALSE,
#line 5128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5130
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5131
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5134
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5135
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5138
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5139
        .trainerName = _("IMANI"),
#line 5140
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5141
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5142
F_TRAINER_FEMALE | 
#line 5143
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5144
        .doubleBattle = FALSE,
#line 5145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5147
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5148
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5151
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5152
        .trainerName = _("KYLA"),
#line 5153
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5154
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5155
F_TRAINER_FEMALE | 
#line 5156
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5157
        .doubleBattle = FALSE,
#line 5158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5160
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5161
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5164
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5165
        .trainerName = _("DENISE"),
#line 5166
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5167
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5168
F_TRAINER_FEMALE | 
#line 5169
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5170
        .doubleBattle = FALSE,
#line 5171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5173
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5174
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5177
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5178
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5181
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5182
        .trainerName = _("BETH"),
#line 5183
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5184
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5185
F_TRAINER_FEMALE | 
#line 5186
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5187
        .doubleBattle = FALSE,
#line 5188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5190
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5191
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5194
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5195
        .trainerName = _("TARA"),
#line 5196
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5197
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5198
F_TRAINER_FEMALE | 
#line 5199
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5200
        .doubleBattle = FALSE,
#line 5201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5203
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5204
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5207
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5208
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5211
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5212
        .trainerName = _("MISSY"),
#line 5213
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5214
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5215
F_TRAINER_FEMALE | 
#line 5216
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5217
        .doubleBattle = FALSE,
#line 5218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5220
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5221
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5224
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5225
        .trainerName = _("ALICE"),
#line 5226
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5227
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5228
F_TRAINER_FEMALE | 
#line 5229
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5230
        .doubleBattle = FALSE,
#line 5231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5233
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5234
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5237
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5238
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5241
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5243
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5242
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5245
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5246
        .trainerName = _("JENNY"),
#line 5247
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5248
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5249
F_TRAINER_FEMALE | 
#line 5250
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5251
        .doubleBattle = FALSE,
#line 5252
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5254
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5256
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5255
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5258
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5259
        .trainerName = _("GRACE"),
#line 5260
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5261
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5262
F_TRAINER_FEMALE | 
#line 5263
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5264
        .doubleBattle = FALSE,
#line 5265
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5267
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5268
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5271
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5272
        .trainerName = _("TANYA"),
#line 5273
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5274
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5275
F_TRAINER_FEMALE | 
#line 5276
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5277
        .doubleBattle = FALSE,
#line 5278
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5280
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5281
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5284
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5285
        .trainerName = _("SHARON"),
#line 5286
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5287
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5288
F_TRAINER_FEMALE | 
#line 5289
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5290
        .doubleBattle = FALSE,
#line 5291
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5293
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5294
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5297
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5298
        .trainerName = _("NIKKI"),
#line 5299
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5300
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5301
F_TRAINER_FEMALE | 
#line 5302
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5303
        .doubleBattle = FALSE,
#line 5304
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5306
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5307
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5310
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5311
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5314
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5315
        .trainerName = _("BRENDA"),
#line 5316
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5317
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5318
F_TRAINER_FEMALE | 
#line 5319
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5320
        .doubleBattle = FALSE,
#line 5321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5323
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5324
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5327
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5328
        .trainerName = _("KATIE"),
#line 5329
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5330
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5331
F_TRAINER_FEMALE | 
#line 5332
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5333
        .doubleBattle = FALSE,
#line 5334
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5336
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5337
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5340
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5341
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5344
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5345
        .trainerName = _("SUSIE"),
#line 5346
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5347
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5348
F_TRAINER_FEMALE | 
#line 5349
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5350
        .doubleBattle = FALSE,
#line 5351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5353
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5354
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5357
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5358
        .trainerName = _("KARA"),
#line 5359
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5360
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5361
F_TRAINER_FEMALE | 
#line 5362
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5363
        .doubleBattle = FALSE,
#line 5364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5366
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5367
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5370
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5371
        .trainerName = _("DANA"),
#line 5372
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5373
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5374
F_TRAINER_FEMALE | 
#line 5375
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5376
        .doubleBattle = FALSE,
#line 5377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5379
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5380
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5383
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5384
        .trainerName = _("SIENNA"),
#line 5385
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5386
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5387
F_TRAINER_FEMALE | 
#line 5388
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5389
        .doubleBattle = FALSE,
#line 5390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5392
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5393
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5396
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5397
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5400
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5401
        .trainerName = _("DEBRA"),
#line 5402
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5403
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5404
F_TRAINER_FEMALE | 
#line 5405
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5406
        .doubleBattle = FALSE,
#line 5407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5409
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5410
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5413
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5414
        .trainerName = _("LINDA"),
#line 5415
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5416
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5417
F_TRAINER_FEMALE | 
#line 5418
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5419
        .doubleBattle = FALSE,
#line 5420
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5422
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5423
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5426
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5427
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5430
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5431
        .trainerName = _("KAYLEE"),
#line 5432
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5433
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5434
F_TRAINER_FEMALE | 
#line 5435
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5436
        .doubleBattle = FALSE,
#line 5437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5439
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5440
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5443
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5444
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5447
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5448
        .trainerName = _("LAUREL"),
#line 5449
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5450
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5451
F_TRAINER_FEMALE | 
#line 5452
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5453
        .doubleBattle = FALSE,
#line 5454
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5456
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5457
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5460
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5461
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5464
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5465
        .trainerName = _("CARLEE"),
#line 5466
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5467
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5468
F_TRAINER_FEMALE | 
#line 5469
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5470
        .doubleBattle = FALSE,
#line 5471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5473
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5474
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5477
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5478
        .trainerName = _("HEIDI"),
#line 5479
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5480
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5481
F_TRAINER_FEMALE | 
#line 5482
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5483
        .doubleBattle = FALSE,
#line 5484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5486
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5487
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5490
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5491
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5495
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5496
        .trainerName = _("BECKY"),
#line 5497
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5498
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5499
F_TRAINER_FEMALE | 
#line 5500
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5501
        .doubleBattle = TRUE,
#line 5502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5504
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .heldItem = ITEM_FOCUS_SASH,
#line 5506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5505
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5507
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5510
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5510
            .heldItem = ITEM_WIDE_LENS,
#line 5513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5511
            .ability = ABILITY_MOODY,
#line 5512
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5514
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5519
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5520
        .trainerName = _("CAROL"),
#line 5521
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5522
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5523
F_TRAINER_FEMALE | 
#line 5524
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5525
        .doubleBattle = FALSE,
#line 5526
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5528
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5529
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5532
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5533
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5536
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5537
        .trainerName = _("NANCY"),
#line 5538
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5539
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5540
F_TRAINER_FEMALE | 
#line 5541
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5542
        .doubleBattle = FALSE,
#line 5543
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5545
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5546
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5549
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5550
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5553
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5554
        .trainerName = _("MARTHA"),
#line 5555
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5556
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5557
F_TRAINER_FEMALE | 
#line 5558
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5559
        .doubleBattle = FALSE,
#line 5560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5562
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5563
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5566
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5567
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5570
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5571
        .trainerName = _("DIANA"),
#line 5572
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5573
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5574
F_TRAINER_FEMALE | 
#line 5575
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5576
        .doubleBattle = FALSE,
#line 5577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5579
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5580
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5583
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5584
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5587
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5588
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5591
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5592
        .trainerName = _("CEDRIC"),
#line 5593
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5594
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5596
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5597
        .doubleBattle = FALSE,
#line 5598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5600
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5601
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5604
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5605
        .trainerName = _("IRENE"),
#line 5606
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5607
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5608
F_TRAINER_FEMALE | 
#line 5609
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5610
        .doubleBattle = FALSE,
#line 5611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5613
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5614
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5617
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5618
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5621
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5622
        .trainerName = _("AMY & LIV"),
#line 5623
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5624
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5626
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5627
        .doubleBattle = TRUE,
#line 5628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5630
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5631
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5634
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5635
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5639
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5640
        .trainerName = _("GINA & MIA"),
#line 5641
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5642
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5644
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5645
        .doubleBattle = TRUE,
#line 5646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5648
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5649
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5652
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5653
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5656
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5657
        .trainerName = _("MIU & YUKI"),
#line 5658
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5659
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5661
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5662
        .doubleBattle = TRUE,
#line 5663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5665
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5666
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5669
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5670
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5674
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5675
        .trainerName = _("HUEY"),
#line 5676
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5677
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5679
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5680
        .doubleBattle = FALSE,
#line 5681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5683
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5684
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5687
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5689
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5688
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5691
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5692
        .trainerName = _("EDMOND"),
#line 5693
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5694
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5696
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5697
        .doubleBattle = FALSE,
#line 5698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5700
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5701
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5704
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5705
        .trainerName = _("ERNEST"),
#line 5706
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5707
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5709
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5710
        .doubleBattle = FALSE,
#line 5711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5713
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5714
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5717
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5718
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5721
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5722
        .trainerName = _("DWAYNE"),
#line 5723
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5724
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5726
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5727
        .doubleBattle = FALSE,
#line 5728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5730
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5731
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5734
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5735
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5738
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5739
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5742
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5743
        .trainerName = _("PHILLIP"),
#line 5744
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5745
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5747
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5748
        .doubleBattle = FALSE,
#line 5749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5751
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5752
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5755
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5756
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5759
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5760
        .trainerName = _("LEONARD"),
#line 5761
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5762
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5764
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5765
        .doubleBattle = FALSE,
#line 5766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5768
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5769
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5772
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5773
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5776
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5777
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5780
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5781
        .trainerName = _("DUNCAN"),
#line 5782
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5783
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5785
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5786
        .doubleBattle = FALSE,
#line 5787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5789
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5790
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5793
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5794
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5797
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5798
        .trainerName = _("ELI"),
#line 5799
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5800
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5802
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5803
        .doubleBattle = FALSE,
#line 5804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5806
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5808
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5807
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5810
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5811
        .trainerName = _("ANNIKA"),
#line 5812
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5813
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5814
F_TRAINER_FEMALE | 
#line 5815
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5816
        .doubleBattle = FALSE,
#line 5817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5819
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5819
            .heldItem = ITEM_FOCUS_SASH,
#line 5821
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5820
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5823
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5823
            .heldItem = ITEM_FOCUS_SASH,
#line 5825
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5824
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5827
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5828
        .trainerName = _("JAZMYN"),
#line 5829
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5830
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5831
F_TRAINER_FEMALE | 
#line 5832
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5833
        .items = { ITEM_HYPER_POTION },
#line 5834
        .doubleBattle = FALSE,
#line 5835
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5837
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5838
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5841
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5842
        .trainerName = _("JONAS"),
#line 5843
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5844
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5846
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5847
        .doubleBattle = FALSE,
#line 5848
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5850
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5851
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5854
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5855
        .trainerName = _("KAYLEY"),
#line 5856
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5857
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5858
F_TRAINER_FEMALE | 
#line 5859
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5860
        .doubleBattle = FALSE,
#line 5861
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5863
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5865
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5864
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5867
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5868
        .trainerName = _("AURON"),
#line 5869
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5870
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5872
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5873
        .doubleBattle = FALSE,
#line 5874
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5876
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5877
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5880
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5882
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5881
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5884
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5885
        .trainerName = _("KELVIN"),
#line 5886
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5887
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5889
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5890
        .doubleBattle = FALSE,
#line 5891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5893
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5895
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5894
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5897
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5899
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5898
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5901
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5902
        .trainerName = _("MARLEY"),
#line 5903
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5904
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5905
F_TRAINER_FEMALE | 
#line 5906
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5907
        .items = { ITEM_HYPER_POTION },
#line 5908
        .doubleBattle = FALSE,
#line 5909
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5911
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5913
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5912
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5915
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5916
        .trainerName = _("REYNA"),
#line 5917
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5918
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5919
F_TRAINER_FEMALE | 
#line 5920
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5921
        .doubleBattle = FALSE,
#line 5922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5924
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5926
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5925
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5928
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5930
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5929
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5932
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 5933
        .trainerName = _("HUDSON"),
#line 5934
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5935
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5937
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5938
        .doubleBattle = FALSE,
#line 5939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5941
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5942
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5945
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 5946
        .trainerName = _("CONOR"),
#line 5947
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5948
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5950
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5951
        .doubleBattle = FALSE,
#line 5952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5954
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5955
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5958
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5960
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5959
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5962
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 5963
        .trainerName = _("EDWIN"),
#line 5964
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 5965
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 5967
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5968
        .doubleBattle = FALSE,
#line 5969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5971
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5972
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5975
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5976
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5979
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 5980
        .trainerName = _("HECTOR"),
#line 5981
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 5982
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 5984
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5985
        .doubleBattle = FALSE,
#line 5986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5988
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5989
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5992
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5993
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5996
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 5997
        .trainerName = _("TABITHA"),
#line 5998
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 5999
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6001
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6002
        .doubleBattle = FALSE,
#line 6003
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6005
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6005
            .heldItem = ITEM_HEAT_ROCK,
#line 6008
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6006
            .ability = ABILITY_DROUGHT,
#line 6007
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6009
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6014
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6014
            .heldItem = ITEM_POISON_BARB,
#line 6017
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6015
            .ability = ABILITY_LEVITATE,
#line 6016
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6018
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6023
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6023
            .heldItem = ITEM_LIFE_ORB,
#line 6026
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6025
            .ability = ABILITY_LEVITATE,
#line 6024
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6027
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6032
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6033
        .trainerName = _("SAMUEL"),
#line 6034
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6035
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6037
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6038
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6039
        .doubleBattle = TRUE,
#line 6040
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6042
            .species = SPECIES_SLOWKING,
#line 6042
            .gender = TRAINER_MON_MALE,
#line 6042
            .heldItem = ITEM_LIFE_ORB,
#line 6046
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6043
            .ability = ABILITY_REGENERATOR,
#line 6044
            .lvl = 67,
#line 6045
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6047
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6052
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .heldItem = ITEM_ROCKY_HELMET,
#line 6056
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6053
            .ability = ABILITY_REGENERATOR,
#line 6054
            .lvl = 67,
#line 6055
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6056
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6061
            .species = SPECIES_GLISCOR,
#line 6061
            .gender = TRAINER_MON_FEMALE,
#line 6061
            .heldItem = ITEM_TOXIC_ORB,
#line 6065
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6062
            .ability = ABILITY_POISON_HEAL,
#line 6063
            .lvl = 67,
#line 6064
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6066
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6071
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6071
            .heldItem = ITEM_ASSAULT_VEST,
#line 6075
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6072
            .ability = ABILITY_CLEAR_BODY,
#line 6073
            .lvl = 67,
#line 6074
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6076
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6081
            .species = SPECIES_HONCHKROW,
#line 6081
            .gender = TRAINER_MON_MALE,
#line 6081
            .heldItem = ITEM_FOCUS_SASH,
#line 6085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6082
            .ability = ABILITY_MOXIE,
#line 6083
            .lvl = 67,
#line 6084
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6085
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6090
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6090
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6091
            .ability = ABILITY_INFILTRATOR,
#line 6092
            .lvl = 67,
#line 6093
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6094
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6099
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6100
        .trainerName = _("SAMUEL"),
#line 6101
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6102
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6104
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6105
        .doubleBattle = FALSE,
#line 6106
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6108
            .species = SPECIES_SLOWPOKE,
#line 6108
            .gender = TRAINER_MON_MALE,
#line 6112
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6109
            .ability = ABILITY_REGENERATOR,
#line 6110
            .lvl = 5,
#line 6111
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6113
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6117
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6118
        .trainerName = _("SAMUEL"),
#line 6119
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6120
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6122
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6123
        .doubleBattle = FALSE,
#line 6124
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6126
            .species = SPECIES_SLOWPOKE,
#line 6126
            .gender = TRAINER_MON_MALE,
#line 6126
            .heldItem = ITEM_FIGY_BERRY,
#line 6130
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6127
            .ability = ABILITY_REGENERATOR,
#line 6128
            .lvl = 24,
#line 6129
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6131
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6136
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6136
            .heldItem = ITEM_LUM_BERRY,
#line 6140
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6137
            .ability = ABILITY_REGENERATOR,
#line 6138
            .lvl = 24,
#line 6139
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6141
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6146
            .species = SPECIES_GLIGAR,
#line 6146
            .gender = TRAINER_MON_FEMALE,
#line 6146
            .heldItem = ITEM_RAZOR_FANG,
#line 6150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6147
            .ability = ABILITY_HYPER_CUTTER,
#line 6148
            .lvl = 24,
#line 6149
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6151
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6156
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6160
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6157
            .ability = ABILITY_CLEAR_BODY,
#line 6158
            .lvl = 24,
#line 6159
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6160
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6165
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6166
        .trainerName = _("SAMUEL"),
#line 6167
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6168
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6171
        .doubleBattle = FALSE,
#line 6172
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6174
            .species = SPECIES_SLOWPOKE,
#line 6174
            .gender = TRAINER_MON_MALE,
#line 6174
            .heldItem = ITEM_LIFE_ORB,
#line 6178
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6175
            .ability = ABILITY_REGENERATOR,
#line 6176
            .lvl = 47,
#line 6177
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6179
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6184
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6184
            .heldItem = ITEM_ROCKY_HELMET,
#line 6188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6185
            .ability = ABILITY_REGENERATOR,
#line 6186
            .lvl = 47,
#line 6187
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6188
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6193
            .species = SPECIES_GLIGAR,
#line 6193
            .gender = TRAINER_MON_FEMALE,
#line 6193
            .heldItem = ITEM_RAZOR_FANG,
#line 6197
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6194
            .ability = ABILITY_HYPER_CUTTER,
#line 6195
            .lvl = 47,
#line 6196
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6198
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6203
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6203
            .heldItem = ITEM_ASSAULT_VEST,
#line 6207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6204
            .ability = ABILITY_CLEAR_BODY,
#line 6205
            .lvl = 47,
#line 6206
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6207
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6212
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6212
            .heldItem = ITEM_FOCUS_SASH,
#line 6216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6213
            .ability = ABILITY_PRANKSTER,
#line 6214
            .lvl = 47,
#line 6215
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6216
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6221
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6222
        .trainerName = _("SAMUEL"),
#line 6223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6224
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6226
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6227
        .doubleBattle = FALSE,
#line 6228
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6230
            .species = SPECIES_SLOWPOKE,
#line 6230
            .gender = TRAINER_MON_MALE,
#line 6234
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6231
            .ability = ABILITY_REGENERATOR,
#line 6232
            .lvl = 5,
#line 6233
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6235
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6239
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6240
        .trainerName = _("SAMUEL"),
#line 6241
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6242
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6244
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6245
        .doubleBattle = FALSE,
#line 6246
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6248
            .species = SPECIES_SLOWPOKE,
#line 6248
            .gender = TRAINER_MON_MALE,
#line 6248
            .heldItem = ITEM_FIGY_BERRY,
#line 6252
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6249
            .ability = ABILITY_REGENERATOR,
#line 6250
            .lvl = 25,
#line 6251
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6253
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6258
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6258
            .heldItem = ITEM_LUM_BERRY,
#line 6262
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6259
            .ability = ABILITY_REGENERATOR,
#line 6260
            .lvl = 25,
#line 6261
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6263
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6268
            .species = SPECIES_GLIGAR,
#line 6268
            .gender = TRAINER_MON_FEMALE,
#line 6268
            .heldItem = ITEM_RAZOR_FANG,
#line 6272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6269
            .ability = ABILITY_HYPER_CUTTER,
#line 6270
            .lvl = 25,
#line 6271
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6273
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6278
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6278
            .heldItem = ITEM_METAL_COAT,
#line 6282
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6279
            .ability = ABILITY_CLEAR_BODY,
#line 6280
            .lvl = 25,
#line 6281
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6282
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6288
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6289
        .trainerName = _("SAMUEL"),
#line 6290
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6291
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6293
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6294
        .doubleBattle = FALSE,
#line 6295
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6297
            .species = SPECIES_SLOWPOKE,
#line 6297
            .gender = TRAINER_MON_MALE,
#line 6297
            .heldItem = ITEM_LIFE_ORB,
#line 6301
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6298
            .ability = ABILITY_REGENERATOR,
#line 6299
            .lvl = 44,
#line 6300
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6302
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6307
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6307
            .heldItem = ITEM_ROCKY_HELMET,
#line 6310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6308
            .ability = ABILITY_REGENERATOR,
#line 6310
            .lvl = 100,
#line 6309
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6310
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6315
            .species = SPECIES_GLIGAR,
#line 6315
            .gender = TRAINER_MON_FEMALE,
#line 6315
            .heldItem = ITEM_RAZOR_FANG,
#line 6319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6316
            .ability = ABILITY_HYPER_CUTTER,
#line 6317
            .lvl = 44,
#line 6318
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6320
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6325
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6325
            .heldItem = ITEM_ASSAULT_VEST,
#line 6329
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6326
            .ability = ABILITY_CLEAR_BODY,
#line 6327
            .lvl = 44,
#line 6328
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6329
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6334
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6335
        .trainerName = _("SAMUEL"),
#line 6336
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6337
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6339
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6340
        .doubleBattle = FALSE,
#line 6341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6343
            .species = SPECIES_SLOWPOKE,
#line 6343
            .gender = TRAINER_MON_MALE,
#line 6347
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6344
            .ability = ABILITY_REGENERATOR,
#line 6345
            .lvl = 5,
#line 6346
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6348
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6352
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6353
        .trainerName = _("SAMUEL"),
#line 6354
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6355
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6357
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6358
        .doubleBattle = FALSE,
#line 6359
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6361
            .species = SPECIES_SLOWPOKE,
#line 6361
            .gender = TRAINER_MON_MALE,
#line 6361
            .heldItem = ITEM_FIGY_BERRY,
#line 6365
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6362
            .ability = ABILITY_REGENERATOR,
#line 6363
            .lvl = 24,
#line 6364
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6366
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6371
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6371
            .heldItem = ITEM_LUM_BERRY,
#line 6375
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6372
            .ability = ABILITY_REGENERATOR,
#line 6373
            .lvl = 24,
#line 6374
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6376
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6381
            .species = SPECIES_GLIGAR,
#line 6381
            .gender = TRAINER_MON_FEMALE,
#line 6381
            .heldItem = ITEM_RAZOR_FANG,
#line 6385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6382
            .ability = ABILITY_HYPER_CUTTER,
#line 6383
            .lvl = 24,
#line 6384
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6386
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6392
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6393
        .trainerName = _("SAMUEL"),
#line 6394
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6395
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6397
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6398
        .doubleBattle = FALSE,
#line 6399
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6401
            .species = SPECIES_SLOWPOKE,
#line 6401
            .gender = TRAINER_MON_MALE,
#line 6401
            .heldItem = ITEM_LIFE_ORB,
#line 6405
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6402
            .ability = ABILITY_REGENERATOR,
#line 6403
            .lvl = 44,
#line 6404
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6406
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6411
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6411
            .heldItem = ITEM_ROCKY_HELMET,
#line 6414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6412
            .ability = ABILITY_REGENERATOR,
#line 6414
            .lvl = 100,
#line 6413
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6414
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6419
            .species = SPECIES_GLIGAR,
#line 6419
            .gender = TRAINER_MON_FEMALE,
#line 6419
            .heldItem = ITEM_RAZOR_FANG,
#line 6423
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6420
            .ability = ABILITY_HYPER_CUTTER,
#line 6421
            .lvl = 44,
#line 6422
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6424
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6429
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6429
            .heldItem = ITEM_ASSAULT_VEST,
#line 6433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6430
            .ability = ABILITY_CLEAR_BODY,
#line 6431
            .lvl = 44,
#line 6432
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6433
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6438
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6439
        .trainerName = _("MAY"),
#line 6440
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6441
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6442
F_TRAINER_FEMALE | 
#line 6443
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6444
        .doubleBattle = FALSE,
#line 6445
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6447
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6448
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6451
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6452
        .trainerName = _("MAY"),
#line 6453
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6454
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6455
F_TRAINER_FEMALE | 
#line 6456
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6457
        .doubleBattle = FALSE,
#line 6458
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6460
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6462
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6461
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6464
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6466
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6465
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6468
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6470
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6469
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6472
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6473
        .trainerName = _("MAY"),
#line 6474
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6475
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6476
F_TRAINER_FEMALE | 
#line 6477
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6478
        .doubleBattle = FALSE,
#line 6479
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6481
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6483
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6482
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6485
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6487
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6486
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6489
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6491
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6490
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6493
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6494
        .trainerName = _("MAY"),
#line 6495
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6496
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6497
F_TRAINER_FEMALE | 
#line 6498
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6499
        .doubleBattle = FALSE,
#line 6500
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6502
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6503
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6506
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6507
        .trainerName = _("MAY"),
#line 6508
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6509
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6510
F_TRAINER_FEMALE | 
#line 6511
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6512
        .doubleBattle = FALSE,
#line 6513
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6515
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6517
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6516
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6519
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6521
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6520
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6523
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6525
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6524
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6527
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6528
        .trainerName = _("MAY"),
#line 6529
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6530
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6531
F_TRAINER_FEMALE | 
#line 6532
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6533
        .doubleBattle = FALSE,
#line 6534
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6536
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6537
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6540
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6542
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6541
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6544
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6546
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6545
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6548
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6549
        .trainerName = _("MAY"),
#line 6550
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6551
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6552
F_TRAINER_FEMALE | 
#line 6553
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6554
        .doubleBattle = FALSE,
#line 6555
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6557
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6558
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6561
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6562
        .trainerName = _("MAY"),
#line 6563
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6564
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6565
F_TRAINER_FEMALE | 
#line 6566
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6567
        .doubleBattle = FALSE,
#line 6568
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6570
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6572
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6571
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6574
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6576
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6575
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6578
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6580
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6579
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6582
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6583
        .trainerName = _("MAY"),
#line 6584
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6585
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6586
F_TRAINER_FEMALE | 
#line 6587
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6588
        .doubleBattle = FALSE,
#line 6589
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6591
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6593
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6592
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6595
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6597
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6596
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6599
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6601
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6600
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6603
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6604
        .trainerName = _("ISAAC"),
#line 6605
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6606
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6608
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6609
        .doubleBattle = FALSE,
#line 6610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6612
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6613
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6616
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6617
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6620
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6621
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6624
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6625
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6628
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6629
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6632
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6633
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6636
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6637
        .trainerName = _("DAVIS"),
#line 6638
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6639
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6641
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6642
        .doubleBattle = FALSE,
#line 6643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6645
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6646
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6649
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6650
        .trainerName = _("MITCHELL"),
#line 6651
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6654
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6655
        .doubleBattle = FALSE,
#line 6656
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6658
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6659
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6662
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6663
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6666
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6667
        .trainerName = _("LYDIA"),
#line 6668
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6669
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6670
F_TRAINER_FEMALE | 
#line 6671
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6672
        .doubleBattle = FALSE,
#line 6673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6675
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6676
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6679
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6680
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6683
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6684
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6687
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6688
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6691
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6692
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6695
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6696
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6699
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6700
        .trainerName = _("HALLE"),
#line 6701
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6702
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6703
F_TRAINER_FEMALE | 
#line 6704
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6705
        .items = { ITEM_FULL_RESTORE },
#line 6706
        .doubleBattle = FALSE,
#line 6707
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6709
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6710
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6713
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6714
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6717
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6718
        .trainerName = _("GARRISON"),
#line 6719
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6720
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6722
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6723
        .doubleBattle = FALSE,
#line 6724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6726
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6727
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6730
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6731
        .trainerName = _("JACKSON"),
#line 6732
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6733
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6735
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6736
        .items = { ITEM_FULL_RESTORE },
#line 6737
        .doubleBattle = FALSE,
#line 6738
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6740
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6742
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6741
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6744
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6745
        .trainerName = _("LORENZO"),
#line 6746
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6747
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6749
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6750
        .items = { ITEM_FULL_RESTORE },
#line 6751
        .doubleBattle = FALSE,
#line 6752
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6754
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6755
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6758
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6760
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6759
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6762
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6763
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6766
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6767
        .trainerName = _("SEBASTIAN"),
#line 6768
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6769
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6771
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6772
        .items = { ITEM_FULL_RESTORE },
#line 6773
        .doubleBattle = FALSE,
#line 6774
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6776
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6778
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6777
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6780
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6781
        .trainerName = _("CATHERINE"),
#line 6782
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6783
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6784
F_TRAINER_FEMALE | 
#line 6785
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6786
        .items = { ITEM_FULL_RESTORE },
#line 6787
        .doubleBattle = FALSE,
#line 6788
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6790
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6792
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6791
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6794
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6796
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6795
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6798
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6799
        .trainerName = _("JENNA"),
#line 6800
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6801
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6802
F_TRAINER_FEMALE | 
#line 6803
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6804
        .items = { ITEM_FULL_RESTORE },
#line 6805
        .doubleBattle = FALSE,
#line 6806
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6808
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6810
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6809
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6812
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6814
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6813
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6816
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6818
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6817
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6820
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6821
        .trainerName = _("SOPHIA"),
#line 6822
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6823
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6824
F_TRAINER_FEMALE | 
#line 6825
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6826
        .items = { ITEM_FULL_RESTORE },
#line 6827
        .doubleBattle = FALSE,
#line 6828
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6830
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6832
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6831
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6834
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6836
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6835
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6838
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6839
        .trainerName = _("JULIO"),
#line 6840
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6841
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6843
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6844
        .doubleBattle = FALSE,
#line 6845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6847
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6848
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6851
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6852
        .trainerName = _("GRUNT"),
#line 6853
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6854
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6856
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6857
        .doubleBattle = FALSE,
#line 6858
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6860
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6862
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6861
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6864
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6866
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6865
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6868
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6869
        .trainerName = _("GRUNT"),
#line 6870
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6871
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6872
F_TRAINER_FEMALE | 
#line 6873
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6874
        .doubleBattle = FALSE,
#line 6875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6877
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6878
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6881
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6882
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6885
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6886
        .trainerName = _("GRUNT"),
#line 6887
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6888
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6889
F_TRAINER_FEMALE | 
#line 6890
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6891
        .doubleBattle = FALSE,
#line 6892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6894
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6895
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6898
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6899
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6902
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6903
        .trainerName = _("GRUNT"),
#line 6904
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6905
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6907
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6908
        .doubleBattle = FALSE,
#line 6909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6911
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6913
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6912
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6915
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6917
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6916
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6919
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6920
        .trainerName = _("MARC"),
#line 6921
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6922
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6924
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6925
        .doubleBattle = FALSE,
#line 6926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6928
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6930
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6929
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6932
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6934
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6933
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6936
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6937
        .trainerName = _("BRENDEN"),
#line 6938
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6939
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6941
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6942
        .doubleBattle = FALSE,
#line 6943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6945
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6947
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6946
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 6950
        .trainerName = _("LILITH"),
#line 6951
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6952
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6953
F_TRAINER_FEMALE | 
#line 6954
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6955
        .doubleBattle = FALSE,
#line 6956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6958
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6959
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 6963
        .trainerName = _("CRISTIAN"),
#line 6964
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6965
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6967
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6968
        .doubleBattle = FALSE,
#line 6969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6971
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6972
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6975
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 6976
        .trainerName = _("SYLVIA"),
#line 6977
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6978
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6979
F_TRAINER_FEMALE | 
#line 6980
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6981
        .doubleBattle = FALSE,
#line 6982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6984
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6986
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6985
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6988
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 6989
        .trainerName = _("LEONARDO"),
#line 6990
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6991
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6993
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6994
        .doubleBattle = FALSE,
#line 6995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6997
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6998
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7001
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7002
        .trainerName = _("ATHENA"),
#line 7003
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7004
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7005
F_TRAINER_FEMALE | 
#line 7006
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7007
        .items = { ITEM_HYPER_POTION },
#line 7008
        .doubleBattle = FALSE,
#line 7009
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7011
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7012
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7015
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7017
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7016
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7020
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7021
        .trainerName = _("HARRISON"),
#line 7022
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7023
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7025
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7026
        .doubleBattle = FALSE,
#line 7027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7029
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7030
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7033
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7034
        .trainerName = _("GRUNT"),
#line 7035
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7036
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7038
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7039
        .doubleBattle = FALSE,
#line 7040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7042
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7043
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7046
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7047
        .trainerName = _("CLARENCE"),
#line 7048
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7049
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7051
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7052
        .doubleBattle = FALSE,
#line 7053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7055
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7056
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7059
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7060
        .trainerName = _("TERRY"),
#line 7061
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7062
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7063
F_TRAINER_FEMALE | 
#line 7064
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7065
        .doubleBattle = FALSE,
#line 7066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7068
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7069
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7072
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7073
        .trainerName = _("NATE"),
#line 7074
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7075
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7077
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7078
        .doubleBattle = FALSE,
#line 7079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7081
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7083
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7082
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7085
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7086
        .trainerName = _("KATHLEEN"),
#line 7087
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7088
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7089
F_TRAINER_FEMALE | 
#line 7090
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7091
        .doubleBattle = FALSE,
#line 7092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7094
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7096
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7095
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7098
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7099
        .trainerName = _("CLIFFORD"),
#line 7100
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7101
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7103
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7104
        .doubleBattle = FALSE,
#line 7105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7107
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7108
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7111
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7112
        .trainerName = _("NICHOLAS"),
#line 7113
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7114
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7116
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7117
        .doubleBattle = FALSE,
#line 7118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7120
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7121
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7124
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7125
        .trainerName = _("GRUNT"),
#line 7126
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7127
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7128
F_TRAINER_FEMALE | 
#line 7129
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7130
        .doubleBattle = FALSE,
#line 7131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7133
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7134
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7137
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7138
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7141
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7142
        .trainerName = _("GRUNT"),
#line 7143
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7144
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7146
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7147
        .doubleBattle = FALSE,
#line 7148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7150
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7151
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7154
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7155
        .trainerName = _("GRUNT"),
#line 7156
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7157
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7159
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7160
        .doubleBattle = FALSE,
#line 7161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7163
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7165
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7164
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7167
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7168
        .trainerName = _("GRUNT"),
#line 7169
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7170
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7172
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7173
        .doubleBattle = FALSE,
#line 7174
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7176
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7177
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7180
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7181
        .trainerName = _("GRUNT"),
#line 7182
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7183
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7185
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7186
        .doubleBattle = FALSE,
#line 7187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7189
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7190
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7193
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7194
        .trainerName = _("MACEY"),
#line 7195
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7196
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7197
F_TRAINER_FEMALE | 
#line 7198
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7199
        .doubleBattle = FALSE,
#line 7200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7202
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7203
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7206
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7207
        .trainerName = _("SAMUEL"),
#line 7208
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7209
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7211
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7212
        .doubleBattle = FALSE,
#line 7213
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7215
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7215
            .heldItem = ITEM_RAZOR_FANG,
#line 7219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7216
            .ability = ABILITY_HYPER_CUTTER,
#line 7217
            .lvl = 16,
#line 7218
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7219
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7224
            .species = SPECIES_SLOWPOKE,
#line 7224
            .gender = TRAINER_MON_MALE,
#line 7228
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7225
            .ability = ABILITY_REGENERATOR,
#line 7226
            .lvl = 16,
#line 7227
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7228
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7233
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7234
            .ability = ABILITY_REGENERATOR,
#line 7235
            .lvl = 16,
#line 7236
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7237
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7242
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7243
        .trainerName = _("SAMUEL"),
#line 7244
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7245
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7247
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7248
        .doubleBattle = FALSE,
#line 7249
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7251
            .species = SPECIES_SLOWPOKE,
#line 7251
            .gender = TRAINER_MON_MALE,
#line 7255
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7252
            .ability = ABILITY_REGENERATOR,
#line 7253
            .lvl = 16,
#line 7254
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7256
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7261
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7262
            .ability = ABILITY_REGENERATOR,
#line 7263
            .lvl = 16,
#line 7264
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7265
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7272
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7273
        .trainerName = _("PAXTON"),
#line 7274
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7275
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7277
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7278
        .doubleBattle = FALSE,
#line 7279
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7281
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7282
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7285
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7286
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7289
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7290
        .trainerName = _("ISABELLA"),
#line 7291
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7292
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7293
F_TRAINER_FEMALE | 
#line 7294
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7295
        .doubleBattle = FALSE,
#line 7296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7298
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7299
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7302
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7303
        .trainerName = _("GRUNT"),
#line 7304
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7305
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7306
F_TRAINER_FEMALE | 
#line 7307
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7308
        .doubleBattle = FALSE,
#line 7309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7311
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7312
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7315
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7316
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7319
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7320
        .trainerName = _("TABITHA"),
#line 7321
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7322
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7324
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7325
        .doubleBattle = FALSE,
#line 7326
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7328
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7331
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7329
            .ability = ABILITY_DROUGHT,
#line 7330
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7332
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7337
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7337
            .heldItem = ITEM_LUM_BERRY,
#line 7340
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7338
            .ability = ABILITY_LEVITATE,
#line 7339
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7341
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7345
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7345
            .heldItem = ITEM_SITRUS_BERRY,
#line 7348
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7346
            .ability = ABILITY_LEVITATE,
#line 7347
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7349
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7353
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7353
            .heldItem = ITEM_LUM_BERRY,
#line 7356
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7354
            .ability = ABILITY_OWN_TEMPO,
#line 7355
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7357
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7362
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7363
        .trainerName = _("JONATHAN"),
#line 7364
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7365
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7367
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7368
        .items = { ITEM_HYPER_POTION },
#line 7369
        .doubleBattle = FALSE,
#line 7370
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7372
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7373
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7376
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7377
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7380
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7381
        .trainerName = _("SAMUEL"),
#line 7382
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7383
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7385
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7386
        .doubleBattle = FALSE,
#line 7387
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7389
            .species = SPECIES_SLOWPOKE,
#line 7389
            .gender = TRAINER_MON_MALE,
#line 7393
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7390
            .ability = ABILITY_REGENERATOR,
#line 7391
            .lvl = 16,
#line 7392
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7394
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7399
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7403
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7400
            .ability = ABILITY_REGENERATOR,
#line 7401
            .lvl = 16,
#line 7402
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7403
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7410
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7411
        .trainerName = _("MAY"),
#line 7412
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7413
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7414
F_TRAINER_FEMALE | 
#line 7415
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7416
        .doubleBattle = FALSE,
#line 7417
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7419
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7421
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7420
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7423
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7425
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7424
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7427
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7428
        .trainerName = _("MAXIE"),
#line 7429
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7430
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7432
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7433
        .doubleBattle = FALSE,
#line 7434
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7436
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7436
            .heldItem = ITEM_IRON_BALL,
#line 7439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7437
            .ability = ABILITY_HEAVY_METAL,
#line 7438
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7439
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7444
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7444
            .heldItem = ITEM_SHARP_BEAK,
#line 7447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7445
            .ability = ABILITY_INNER_FOCUS,
#line 7446
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7447
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7452
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7452
            .heldItem = ITEM_MUSCLE_BAND,
#line 7455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7453
            .ability = ABILITY_IMMUNITY,
#line 7454
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7455
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7460
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7460
            .heldItem = ITEM_EXPERT_BELT,
#line 7463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7461
            .ability = ABILITY_UNNERVE,
#line 7462
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7463
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7468
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7468
            .heldItem = ITEM_ROCKY_HELMET,
#line 7471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7469
            .ability = ABILITY_ROCK_HEAD,
#line 7470
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7471
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7476
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7477
        .trainerName = _("MAXIE"),
#line 7478
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7479
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7481
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7482
        .doubleBattle = FALSE,
#line 7483
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7485
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7485
            .heldItem = ITEM_MUSCLE_BAND,
#line 7488
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7486
            .ability = ABILITY_HEAVY_METAL,
#line 7487
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7489
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7494
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7494
            .heldItem = ITEM_LUM_BERRY,
#line 7497
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7495
            .ability = ABILITY_IMMUNITY,
#line 7496
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7498
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7503
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7503
            .heldItem = ITEM_LUM_BERRY,
#line 7506
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7504
            .ability = ABILITY_UNNERVE,
#line 7505
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7507
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7512
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7512
            .heldItem = ITEM_ROCKY_HELMET,
#line 7515
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7513
            .ability = ABILITY_ROCK_HEAD,
#line 7514
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7516
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7521
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7521
            .heldItem = ITEM_SHARP_BEAK,
#line 7524
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7522
            .ability = ABILITY_INNER_FOCUS,
#line 7523
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7525
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7530
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7531
        .trainerName = _("TIANA"),
#line 7532
        .trainerClass = TRAINER_CLASS_LASS,
#line 7533
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7534
F_TRAINER_FEMALE | 
#line 7535
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7536
        .doubleBattle = FALSE,
#line 7537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7539
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7540
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7543
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7544
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7547
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7548
        .trainerName = _("HALEY"),
#line 7549
        .trainerClass = TRAINER_CLASS_LASS,
#line 7550
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7551
F_TRAINER_FEMALE | 
#line 7552
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7553
        .doubleBattle = FALSE,
#line 7554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7556
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7557
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7560
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7561
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7564
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7565
        .trainerName = _("JANICE"),
#line 7566
        .trainerClass = TRAINER_CLASS_LASS,
#line 7567
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7568
F_TRAINER_FEMALE | 
#line 7569
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7570
        .doubleBattle = FALSE,
#line 7571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7573
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7574
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7577
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7578
        .trainerName = _("VIVI"),
#line 7579
        .trainerClass = TRAINER_CLASS_WINSTRATE,
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
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7586
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7588
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7587
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7590
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7592
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7591
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7594
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7596
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7595
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7598
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7599
        .trainerName = _("SALLY"),
#line 7600
        .trainerClass = TRAINER_CLASS_LASS,
#line 7601
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7602
F_TRAINER_FEMALE | 
#line 7603
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7604
        .doubleBattle = FALSE,
#line 7605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7607
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7608
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7611
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7612
        .trainerName = _("ROBIN"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7620
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7621
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7624
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7625
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7628
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7629
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7632
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7633
        .trainerName = _("ANDREA"),
#line 7634
        .trainerClass = TRAINER_CLASS_LASS,
#line 7635
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7636
F_TRAINER_FEMALE | 
#line 7637
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7638
        .doubleBattle = FALSE,
#line 7639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7641
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7643
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7642
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7645
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7646
        .trainerName = _("CRISSY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7654
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7656
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7655
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7658
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7660
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7659
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7662
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7663
        .trainerName = _("RICK"),
#line 7664
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7665
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7667
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7668
        .doubleBattle = FALSE,
#line 7669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7671
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7672
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7675
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7676
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7679
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7680
        .trainerName = _("LYLE"),
#line 7681
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7682
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7684
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7685
        .doubleBattle = FALSE,
#line 7686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7688
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7689
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7692
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7693
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7696
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7697
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7700
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7701
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7704
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 7705
        .trainerName = _("JOSE"),
#line 7706
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7707
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7709
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7710
        .doubleBattle = FALSE,
#line 7711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7713
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7715
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7714
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7717
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7719
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7718
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7721
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7722
        .trainerName = _("DOUG"),
#line 7723
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7724
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7726
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7727
        .doubleBattle = FALSE,
#line 7728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7730
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7731
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7734
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7735
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7738
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7739
        .trainerName = _("GREG"),
#line 7740
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7741
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7743
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7744
        .doubleBattle = FALSE,
#line 7745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7747
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7748
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7751
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7752
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7755
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7756
        .trainerName = _("KENT"),
#line 7757
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7758
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7760
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7761
        .doubleBattle = FALSE,
#line 7762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7764
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7765
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7768
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7769
        .trainerName = _("JAMES"),
#line 7770
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7771
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7773
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7774
        .doubleBattle = FALSE,
#line 7775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7777
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7778
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7781
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7782
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7785
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7786
        .trainerName = _("BRICE"),
#line 7787
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7788
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7790
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7791
        .doubleBattle = FALSE,
#line 7792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7794
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7795
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7798
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7799
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7802
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7803
        .trainerName = _("TRENT"),
#line 7804
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7805
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7807
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7808
        .doubleBattle = FALSE,
#line 7809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7811
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7812
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7815
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7816
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7819
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7820
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7823
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7824
        .trainerName = _("LENNY"),
#line 7825
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7826
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7828
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7829
        .doubleBattle = FALSE,
#line 7830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7832
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7833
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7836
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7837
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7840
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7841
        .trainerName = _("LUCAS"),
#line 7842
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7843
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7845
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7846
        .doubleBattle = FALSE,
#line 7847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7849
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7850
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7853
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7854
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7857
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7858
        .trainerName = _("ALAN"),
#line 7859
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7860
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7862
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7863
        .doubleBattle = FALSE,
#line 7864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7866
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7867
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7870
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7871
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7874
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7875
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7878
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7879
        .trainerName = _("CLARK"),
#line 7880
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7881
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7883
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7884
        .doubleBattle = FALSE,
#line 7885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7887
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7888
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7891
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7892
        .trainerName = _("ERIC"),
#line 7893
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7894
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7896
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7897
        .doubleBattle = FALSE,
#line 7898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7900
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7901
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7904
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7905
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7908
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7909
        .trainerName = _("MIKE"),
#line 7910
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7911
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7913
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7914
        .doubleBattle = FALSE,
#line 7915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7917
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7918
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7921
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7922
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7925
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7926
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7929
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7930
        .trainerName = _("DEZ & LUKE"),
#line 7931
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7932
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7934
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7935
        .doubleBattle = TRUE,
#line 7936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7938
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7939
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7942
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7943
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 7947
        .trainerName = _("LEA & JED"),
#line 7948
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7949
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7951
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7952
        .doubleBattle = TRUE,
#line 7953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7955
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7956
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7959
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7960
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7963
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 7964
        .trainerName = _("KIRA & DAN"),
#line 7965
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7966
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7968
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7969
        .doubleBattle = TRUE,
#line 7970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7972
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7973
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7976
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7977
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7980
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 7981
        .trainerName = _("JOHANNA"),
#line 7982
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7983
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 7984
F_TRAINER_FEMALE | 
#line 7985
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7986
        .doubleBattle = FALSE,
#line 7987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7989
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7990
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7993
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 7994
        .trainerName = _("GERALD"),
#line 7995
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7996
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7998
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7999
        .items = { ITEM_HYPER_POTION },
#line 8000
        .doubleBattle = FALSE,
#line 8001
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8003
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8005
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8004
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8008
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8009
        .trainerName = _("VIVIAN"),
#line 8010
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8011
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8012
F_TRAINER_FEMALE | 
#line 8013
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8014
        .doubleBattle = FALSE,
#line 8015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8017
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8018
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8021
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8023
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8022
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8025
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8026
        .trainerName = _("DANIELLE"),
#line 8027
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8028
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8029
F_TRAINER_FEMALE | 
#line 8030
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8031
        .doubleBattle = FALSE,
#line 8032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8034
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8036
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8035
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8038
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8039
        .trainerName = _("HIDEO"),
#line 8040
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8041
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8043
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8044
        .doubleBattle = FALSE,
#line 8045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8047
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8049
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8048
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8051
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8052
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8055
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8056
        .trainerName = _("KEIGO"),
#line 8057
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8058
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8060
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8061
        .doubleBattle = FALSE,
#line 8062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8064
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8065
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8068
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8069
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8072
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8073
        .trainerName = _("RILEY"),
#line 8074
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8075
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8077
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8078
        .doubleBattle = FALSE,
#line 8079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8081
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8082
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8085
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8086
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8089
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8090
        .trainerName = _("FLINT"),
#line 8091
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8092
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8094
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8095
        .doubleBattle = FALSE,
#line 8096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8098
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8100
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8099
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8102
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8104
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8103
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8106
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8107
        .trainerName = _("ASHLEY"),
#line 8108
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8109
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8110
F_TRAINER_FEMALE | 
#line 8111
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8112
        .doubleBattle = FALSE,
#line 8113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8115
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8117
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8116
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8119
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8121
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8120
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8123
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8124
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8127
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8128
        .trainerName = _("WALLY"),
#line 8129
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8130
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8132
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8133
        .doubleBattle = FALSE,
#line 8134
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8136
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8139
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8137
            .ability = ABILITY_SAND_STREAM,
#line 8138
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8139
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8141
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8141
            .heldItem = ITEM_SHELL_BELL,
#line 8145
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8142
            .ability = ABILITY_STURDY,
#line 8143
            .lvl = 1,
#line 8144
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8146
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8148
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8149
        .trainerName = _("SAMUEL"),
#line 8150
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8151
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8153
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8154
        .doubleBattle = TRUE,
#line 8155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8157
            .species = SPECIES_SLOWKING,
#line 8157
            .gender = TRAINER_MON_MALE,
#line 8157
            .heldItem = ITEM_LIFE_ORB,
#line 8161
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8158
            .ability = ABILITY_REGENERATOR,
#line 8159
            .lvl = 54,
#line 8160
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8162
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8167
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8167
            .heldItem = ITEM_ROCKY_HELMET,
#line 8171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8168
            .ability = ABILITY_REGENERATOR,
#line 8169
            .lvl = 54,
#line 8170
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8171
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8176
            .species = SPECIES_GLISCOR,
#line 8176
            .gender = TRAINER_MON_FEMALE,
#line 8176
            .heldItem = ITEM_TOXIC_ORB,
#line 8180
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8177
            .ability = ABILITY_POISON_HEAL,
#line 8178
            .lvl = 54,
#line 8179
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8181
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8186
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8186
            .heldItem = ITEM_ASSAULT_VEST,
#line 8190
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8187
            .ability = ABILITY_CLEAR_BODY,
#line 8188
            .lvl = 54,
#line 8189
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8191
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8196
            .species = SPECIES_HONCHKROW,
#line 8196
            .gender = TRAINER_MON_MALE,
#line 8196
            .heldItem = ITEM_FOCUS_SASH,
#line 8200
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8197
            .ability = ABILITY_MOXIE,
#line 8198
            .lvl = 54,
#line 8199
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8201
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8207
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8208
        .trainerName = _("SAMUEL"),
#line 8209
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8210
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8212
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8213
        .doubleBattle = FALSE,
#line 8214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8216
            .species = SPECIES_SLOWKING,
#line 8216
            .gender = TRAINER_MON_MALE,
#line 8216
            .heldItem = ITEM_LIFE_ORB,
#line 8220
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8217
            .ability = ABILITY_REGENERATOR,
#line 8218
            .lvl = 54,
#line 8219
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8221
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8226
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8226
            .heldItem = ITEM_ROCKY_HELMET,
#line 8230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8227
            .ability = ABILITY_REGENERATOR,
#line 8228
            .lvl = 54,
#line 8229
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8230
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8235
            .species = SPECIES_GLISCOR,
#line 8235
            .gender = TRAINER_MON_FEMALE,
#line 8235
            .heldItem = ITEM_TOXIC_ORB,
#line 8239
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8236
            .ability = ABILITY_POISON_HEAL,
#line 8237
            .lvl = 54,
#line 8238
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8240
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8245
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8245
            .heldItem = ITEM_ASSAULT_VEST,
#line 8249
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8246
            .ability = ABILITY_CLEAR_BODY,
#line 8247
            .lvl = 54,
#line 8248
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8250
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8255
            .species = SPECIES_HONCHKROW,
#line 8255
            .gender = TRAINER_MON_MALE,
#line 8255
            .heldItem = ITEM_FOCUS_SASH,
#line 8259
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8256
            .ability = ABILITY_MOXIE,
#line 8257
            .lvl = 54,
#line 8258
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8260
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8266
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8267
        .trainerName = _("SAMUEL"),
#line 8268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8269
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8271
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8272
        .doubleBattle = FALSE,
#line 8273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8275
            .species = SPECIES_SLOWKING,
#line 8275
            .gender = TRAINER_MON_MALE,
#line 8275
            .heldItem = ITEM_LIFE_ORB,
#line 8279
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8276
            .ability = ABILITY_REGENERATOR,
#line 8277
            .lvl = 54,
#line 8278
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8280
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8285
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8285
            .heldItem = ITEM_ROCKY_HELMET,
#line 8289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8286
            .ability = ABILITY_REGENERATOR,
#line 8287
            .lvl = 54,
#line 8288
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8289
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8294
            .species = SPECIES_GLISCOR,
#line 8294
            .gender = TRAINER_MON_FEMALE,
#line 8294
            .heldItem = ITEM_TOXIC_ORB,
#line 8298
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8295
            .ability = ABILITY_POISON_HEAL,
#line 8296
            .lvl = 54,
#line 8297
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8299
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8304
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8304
            .heldItem = ITEM_ASSAULT_VEST,
#line 8308
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8305
            .ability = ABILITY_CLEAR_BODY,
#line 8306
            .lvl = 54,
#line 8307
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8309
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8314
            .species = SPECIES_HONCHKROW,
#line 8314
            .gender = TRAINER_MON_MALE,
#line 8314
            .heldItem = ITEM_FOCUS_SASH,
#line 8318
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8315
            .ability = ABILITY_MOXIE,
#line 8316
            .lvl = 54,
#line 8317
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8319
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8325
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8326
        .trainerName = _("MAY"),
#line 8327
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8328
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8329
F_TRAINER_FEMALE | 
#line 8330
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8331
        .doubleBattle = FALSE,
#line 8332
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8334
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8336
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8335
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8338
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8340
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8339
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8342
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8344
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8343
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8346
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8347
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8350
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8351
        .trainerName = _("MAY"),
#line 8352
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8353
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8354
F_TRAINER_FEMALE | 
#line 8355
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8356
        .doubleBattle = FALSE,
#line 8357
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8359
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8361
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8360
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8363
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8365
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8364
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8367
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8369
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8368
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8371
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8373
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8372
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8375
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8376
        .trainerName = _("MAY"),
#line 8377
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8378
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8379
F_TRAINER_FEMALE | 
#line 8380
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8381
        .doubleBattle = FALSE,
#line 8382
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8384
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8386
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8385
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8388
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8390
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8389
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8392
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8394
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8393
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8396
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8398
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8397
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8400
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8401
        .trainerName = _("JONAH"),
#line 8402
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8403
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8405
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8406
        .doubleBattle = FALSE,
#line 8407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8409
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8410
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8413
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8414
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8417
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8418
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8421
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8422
        .trainerName = _("HENRY"),
#line 8423
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8424
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8426
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8427
        .doubleBattle = FALSE,
#line 8428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8430
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8431
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8434
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8435
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8438
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8439
        .trainerName = _("ROGER"),
#line 8440
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8441
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8443
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8444
        .doubleBattle = FALSE,
#line 8445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8447
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8448
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8451
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8452
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8455
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8456
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8459
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8460
        .trainerName = _("ALEXA"),
#line 8461
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8462
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8463
F_TRAINER_FEMALE | 
#line 8464
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8465
        .items = { ITEM_FULL_RESTORE },
#line 8466
        .doubleBattle = FALSE,
#line 8467
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8469
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8471
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8470
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8473
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8475
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8474
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8477
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8478
        .trainerName = _("RUBEN"),
#line 8479
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8480
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8482
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8483
        .items = { ITEM_HYPER_POTION },
#line 8484
        .doubleBattle = FALSE,
#line 8485
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8487
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8489
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8488
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8491
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8493
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8492
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8495
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8496
        .trainerName = _("KOJI"),
#line 8497
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8498
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8500
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8501
        .doubleBattle = FALSE,
#line 8502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8504
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8505
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8508
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8509
        .trainerName = _("WAYNE"),
#line 8510
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8511
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8513
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8514
        .doubleBattle = FALSE,
#line 8515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8517
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8518
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8521
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8522
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8525
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8526
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8529
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8530
        .trainerName = _("AIDAN"),
#line 8531
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8532
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8534
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8535
        .doubleBattle = FALSE,
#line 8536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8538
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8539
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8542
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8543
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8546
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8547
        .trainerName = _("REED"),
#line 8548
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8549
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8551
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8552
        .doubleBattle = FALSE,
#line 8553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8555
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8556
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8559
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8560
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8563
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8564
        .trainerName = _("TISHA"),
#line 8565
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8566
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8567
F_TRAINER_FEMALE | 
#line 8568
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8569
        .doubleBattle = FALSE,
#line 8570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8572
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8573
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8576
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8577
        .trainerName = _("TORI & TIA"),
#line 8578
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8579
        .trainerPic = TRAINER_PIC_TWINS,
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
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8586
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8589
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8593
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8594
        .trainerName = _("KIM & IRIS"),
#line 8595
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8596
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8598
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8599
        .doubleBattle = TRUE,
#line 8600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8602
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8603
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8606
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8607
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8610
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8611
        .trainerName = _("TYRA & IVY"),
#line 8612
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8613
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8615
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8616
        .doubleBattle = TRUE,
#line 8617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8619
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8620
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8623
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8624
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8628
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8629
        .trainerName = _("MEL & PAUL"),
#line 8630
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8631
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8633
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8634
        .doubleBattle = TRUE,
#line 8635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8637
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8638
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8641
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8642
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8646
        .trainerName = _("JOHN & JAY"),
#line 8647
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8648
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8650
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8651
        .doubleBattle = TRUE,
#line 8652
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8654
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8655
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8658
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8660
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8659
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8662
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8663
        .trainerName = _("RELI & IAN"),
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
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8672
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8675
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8676
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8679
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8680
        .trainerName = _("LILA & ROY"),
#line 8681
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8682
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8684
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8685
        .doubleBattle = TRUE,
#line 8686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8688
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8689
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8692
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8693
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8696
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8697
        .trainerName = _("LISA & RAY"),
#line 8698
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8699
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8701
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8702
        .doubleBattle = TRUE,
#line 8703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8705
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8706
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8709
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8710
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8713
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8714
        .trainerName = _("CHRIS"),
#line 8715
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8716
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8718
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8719
        .doubleBattle = FALSE,
#line 8720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8722
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8723
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8726
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8727
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8730
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8731
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8734
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8735
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8738
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8739
        .trainerName = _("DAWSON"),
#line 8740
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8741
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8743
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8744
        .doubleBattle = FALSE,
#line 8745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8747
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8747
            .heldItem = ITEM_NUGGET,
#line 8749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8748
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8751
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8752
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8755
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8756
        .trainerName = _("SARAH"),
#line 8757
        .trainerClass = TRAINER_CLASS_LADY,
#line 8758
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8759
F_TRAINER_FEMALE | 
#line 8760
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8761
        .items = { ITEM_FULL_RESTORE },
#line 8762
        .doubleBattle = FALSE,
#line 8763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8765
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8766
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8769
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8769
            .heldItem = ITEM_NUGGET,
#line 8771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8770
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8773
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8774
        .trainerName = _("DARIAN"),
#line 8775
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8776
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8778
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8779
        .doubleBattle = FALSE,
#line 8780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8782
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8783
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8786
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8787
        .trainerName = _("HAILEY"),
#line 8788
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8789
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8790
F_TRAINER_FEMALE | 
#line 8791
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8792
        .doubleBattle = FALSE,
#line 8793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8795
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8796
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8799
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8800
        .trainerName = _("CHANDLER"),
#line 8801
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8802
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8804
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8805
        .doubleBattle = FALSE,
#line 8806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8808
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8809
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8812
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8813
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8816
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8817
        .trainerName = _("KALEB"),
#line 8818
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8819
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8821
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8822
        .doubleBattle = FALSE,
#line 8823
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8825
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8825
            .heldItem = ITEM_ORAN_BERRY,
#line 8827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8826
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8829
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8829
            .heldItem = ITEM_ORAN_BERRY,
#line 8831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8830
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8833
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8834
        .trainerName = _("JOSEPH"),
#line 8835
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8836
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8838
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8839
        .doubleBattle = FALSE,
#line 8840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8842
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8843
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8846
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8847
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8850
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8851
        .trainerName = _("ALYSSA"),
#line 8852
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8853
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8854
F_TRAINER_FEMALE | 
#line 8855
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8856
        .doubleBattle = FALSE,
#line 8857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8859
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8860
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8863
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8864
        .trainerName = _("MARCOS"),
#line 8865
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8866
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8868
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8869
        .doubleBattle = FALSE,
#line 8870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8872
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8874
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8873
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8876
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8877
        .trainerName = _("RHETT"),
#line 8878
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8879
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8881
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8882
        .doubleBattle = FALSE,
#line 8883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8885
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8887
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8886
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8889
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8890
        .trainerName = _("TYRON"),
#line 8891
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8892
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8894
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8895
        .doubleBattle = FALSE,
#line 8896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8898
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8899
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8902
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8903
        .trainerName = _("CELINA"),
#line 8904
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8905
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8906
F_TRAINER_FEMALE | 
#line 8907
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8908
        .doubleBattle = FALSE,
#line 8909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8911
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8912
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8916
        .trainerName = _("BIANCA"),
#line 8917
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8918
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8919
F_TRAINER_FEMALE | 
#line 8920
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8921
        .doubleBattle = FALSE,
#line 8922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8924
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8925
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8928
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8929
        .trainerName = _("HAYDEN"),
#line 8930
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8931
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8933
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8934
        .doubleBattle = FALSE,
#line 8935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8937
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8938
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8941
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8942
        .trainerName = _("SOPHIE"),
#line 8943
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8944
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8945
F_TRAINER_FEMALE | 
#line 8946
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8947
        .doubleBattle = FALSE,
#line 8948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8950
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8951
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8954
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8955
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8958
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8959
        .trainerName = _("COBY"),
#line 8960
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8961
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8963
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8964
        .doubleBattle = FALSE,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8967
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8968
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8971
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8972
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8975
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8976
        .trainerName = _("LAWRENCE"),
#line 8977
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8978
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8980
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8981
        .doubleBattle = FALSE,
#line 8982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8984
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8985
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8988
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8989
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8992
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8993
        .trainerName = _("WYATT"),
#line 8994
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8995
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8997
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8998
        .doubleBattle = FALSE,
#line 8999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9001
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9002
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9005
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9006
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9009
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9010
        .trainerName = _("ANGELINA"),
#line 9011
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9012
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9013
F_TRAINER_FEMALE | 
#line 9014
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9015
        .doubleBattle = FALSE,
#line 9016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9018
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9019
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9022
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9023
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9026
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9027
        .trainerName = _("KAI"),
#line 9028
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9029
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9031
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9032
        .doubleBattle = FALSE,
#line 9033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9035
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9036
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9039
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9040
        .trainerName = _("CHARLOTTE"),
#line 9041
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9042
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9043
F_TRAINER_FEMALE | 
#line 9044
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9045
        .doubleBattle = FALSE,
#line 9046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9048
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9049
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9052
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9053
        .trainerName = _("DEANDRE"),
#line 9054
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9055
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9057
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9058
        .doubleBattle = FALSE,
#line 9059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9061
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9062
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9065
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9066
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9069
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9070
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9073
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9074
        .trainerName = _("GRUNT"),
#line 9075
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9076
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9078
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9079
        .doubleBattle = FALSE,
#line 9080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9082
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9083
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9086
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9087
        .trainerName = _("GRUNT"),
#line 9088
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9089
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9091
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9092
        .doubleBattle = FALSE,
#line 9093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9095
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9096
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9099
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9100
        .trainerName = _("GRUNT"),
#line 9101
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9102
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9104
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9105
        .doubleBattle = FALSE,
#line 9106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9108
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9109
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9112
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9121
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9122
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9125
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9126
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9129
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9130
        .trainerName = _("GRUNT"),
#line 9131
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9132
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9134
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9135
        .doubleBattle = FALSE,
#line 9136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9138
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9139
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9142
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9143
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9146
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9147
        .trainerName = _("GRUNT"),
#line 9148
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9149
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9151
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9152
        .doubleBattle = FALSE,
#line 9153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9155
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9156
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9159
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9160
        .trainerName = _("GRUNT"),
#line 9161
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9162
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9164
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9165
        .doubleBattle = FALSE,
#line 9166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9168
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9169
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9172
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9173
        .trainerName = _("GRUNT"),
#line 9174
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9175
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9177
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9178
        .doubleBattle = FALSE,
#line 9179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9181
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9182
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9185
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9186
        .trainerName = _("GRUNT"),
#line 9187
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9188
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9190
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9191
        .doubleBattle = FALSE,
#line 9192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9194
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9195
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9198
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9199
        .trainerName = _("GRUNT"),
#line 9200
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9201
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9203
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9204
        .doubleBattle = FALSE,
#line 9205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9207
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9208
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9211
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9212
        .trainerName = _("GRUNT"),
#line 9213
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9214
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9216
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9217
        .doubleBattle = FALSE,
#line 9218
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9220
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9221
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9224
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9225
        .trainerName = _("GRUNT"),
#line 9226
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9227
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9229
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9230
        .doubleBattle = FALSE,
#line 9231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9233
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9234
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9237
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9238
        .trainerName = _("GRUNT"),
#line 9239
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9240
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9242
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9243
        .doubleBattle = FALSE,
#line 9244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9246
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9247
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9250
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9251
        .trainerName = _("GRUNT"),
#line 9252
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9253
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9254
F_TRAINER_FEMALE | 
#line 9255
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9256
        .doubleBattle = FALSE,
#line 9257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9259
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9260
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9263
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9264
        .trainerName = _("GRUNT"),
#line 9265
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9266
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9267
F_TRAINER_FEMALE | 
#line 9268
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9269
        .doubleBattle = FALSE,
#line 9270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9272
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9273
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9276
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9277
        .trainerName = _("GRUNT"),
#line 9278
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9279
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9280
F_TRAINER_FEMALE | 
#line 9281
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9282
        .doubleBattle = FALSE,
#line 9283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9285
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9287
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9286
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9289
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9290
        .trainerName = _("TABITHA"),
#line 9291
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9292
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9294
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9295
        .doubleBattle = FALSE,
#line 9296
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9298
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9301
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9299
            .ability = ABILITY_DROUGHT,
#line 9300
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9302
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9307
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9307
            .heldItem = ITEM_POISON_BARB,
#line 9310
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9308
            .ability = ABILITY_LEVITATE,
#line 9309
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9311
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9316
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .heldItem = ITEM_LIFE_ORB,
#line 9319
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9317
            .ability = ABILITY_LEVITATE,
#line 9318
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9320
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9325
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9325
            .heldItem = ITEM_FOCUS_SASH,
#line 9328
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9326
            .ability = ABILITY_OWN_TEMPO,
#line 9327
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9329
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9334
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9335
        .trainerName = _("DARCY"),
#line 9336
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9337
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9338
F_TRAINER_FEMALE | 
#line 9339
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9340
        .items = { ITEM_HYPER_POTION },
#line 9341
        .doubleBattle = FALSE,
#line 9342
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9344
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9345
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9348
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9349
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9352
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9353
        .trainerName = _("MAXIE"),
#line 9354
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9355
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9357
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9358
        .doubleBattle = FALSE,
#line 9359
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9361
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9361
            .heldItem = ITEM_ROCKY_HELMET,
#line 9364
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9362
            .ability = ABILITY_ROCK_HEAD,
#line 9363
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9364
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9369
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .heldItem = ITEM_AIR_BALLOON,
#line 9372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9370
            .ability = ABILITY_HEAVY_METAL,
#line 9371
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9372
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9377
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9377
            .heldItem = ITEM_SHARP_BEAK,
#line 9380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9378
            .ability = ABILITY_INNER_FOCUS,
#line 9379
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9380
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9385
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9386
        .trainerName = _("PETE"),
#line 9387
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9388
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9390
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9391
        .doubleBattle = FALSE,
#line 9392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9394
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9395
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9398
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9399
        .trainerName = _("ISABELLE"),
#line 9400
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9401
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9402
F_TRAINER_FEMALE | 
#line 9403
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9404
        .doubleBattle = FALSE,
#line 9405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9407
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9408
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9411
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9412
        .trainerName = _("ANDRES"),
#line 9413
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9414
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9416
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9417
        .doubleBattle = FALSE,
#line 9418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9420
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9422
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9421
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9424
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9426
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9425
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9428
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9429
        .trainerName = _("JOSUE"),
#line 9430
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9431
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9433
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9434
        .doubleBattle = FALSE,
#line 9435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9437
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9439
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9438
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9441
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9443
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9442
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9445
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9446
        .trainerName = _("CAMRON"),
#line 9447
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9448
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9450
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9451
        .doubleBattle = FALSE,
#line 9452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9454
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9455
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9458
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9459
        .trainerName = _("CORY"),
#line 9460
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9461
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9463
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9464
        .doubleBattle = FALSE,
#line 9465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9467
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9468
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9471
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9472
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9475
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9476
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9479
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9480
        .trainerName = _("CAROLINA"),
#line 9481
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9482
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9483
F_TRAINER_FEMALE | 
#line 9484
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9485
        .items = { ITEM_HYPER_POTION },
#line 9486
        .doubleBattle = FALSE,
#line 9487
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9489
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9491
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9490
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9493
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9495
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9494
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9497
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9499
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9498
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9501
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9502
        .trainerName = _("ELIJAH"),
#line 9503
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9504
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9506
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9507
        .doubleBattle = FALSE,
#line 9508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9510
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9511
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9514
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9515
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9518
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9519
        .trainerName = _("CELIA"),
#line 9520
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9521
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9522
F_TRAINER_FEMALE | 
#line 9523
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9524
        .doubleBattle = FALSE,
#line 9525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9527
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9528
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9531
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9533
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9532
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9535
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9536
        .trainerName = _("BRYAN"),
#line 9537
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9538
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9540
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9541
        .doubleBattle = FALSE,
#line 9542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9544
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9545
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9548
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9549
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9552
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9553
        .trainerName = _("BRANDEN"),
#line 9554
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9555
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9557
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9558
        .doubleBattle = FALSE,
#line 9559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9561
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9562
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9565
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9566
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9569
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9570
        .trainerName = _("BRYANT"),
#line 9571
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9572
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9574
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9575
        .doubleBattle = FALSE,
#line 9576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9578
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9579
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9582
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9583
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9586
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9587
        .trainerName = _("SHAYLA"),
#line 9588
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9589
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9590
F_TRAINER_FEMALE | 
#line 9591
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9592
        .doubleBattle = FALSE,
#line 9593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9595
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9596
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9599
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9600
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9603
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9604
        .trainerName = _("KYRA"),
#line 9605
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9606
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9607
F_TRAINER_FEMALE | 
#line 9608
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9609
        .doubleBattle = FALSE,
#line 9610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9612
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9613
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9616
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9617
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9620
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9621
        .trainerName = _("JAIDEN"),
#line 9622
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9623
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9625
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9626
        .doubleBattle = FALSE,
#line 9627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9629
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9630
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9633
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9634
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9637
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9638
        .trainerName = _("ALIX"),
#line 9639
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9640
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9641
F_TRAINER_FEMALE | 
#line 9642
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9643
        .doubleBattle = FALSE,
#line 9644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9646
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9647
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9650
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9651
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9654
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9655
        .trainerName = _("HELENE"),
#line 9656
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9657
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9658
F_TRAINER_FEMALE | 
#line 9659
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9660
        .doubleBattle = FALSE,
#line 9661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9663
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9664
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9667
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9668
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9671
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9672
        .trainerName = _("MARLENE"),
#line 9673
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9674
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9675
F_TRAINER_FEMALE | 
#line 9676
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9677
        .doubleBattle = FALSE,
#line 9678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9680
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9681
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9684
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9685
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9688
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9689
        .trainerName = _("DEVAN"),
#line 9690
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9691
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9693
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9694
        .doubleBattle = FALSE,
#line 9695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9697
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9698
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9701
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9702
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9705
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9706
        .trainerName = _("JOHNSON"),
#line 9707
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9708
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9710
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9711
        .doubleBattle = FALSE,
#line 9712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9714
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9715
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9718
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9719
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9722
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9723
        .trainerName = _("MELINA"),
#line 9724
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9725
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9726
F_TRAINER_FEMALE | 
#line 9727
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9728
        .doubleBattle = FALSE,
#line 9729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9731
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9732
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9735
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9736
        .trainerName = _("BRANDI"),
#line 9737
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9738
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9739
F_TRAINER_FEMALE | 
#line 9740
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9741
        .doubleBattle = FALSE,
#line 9742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9744
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9745
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9748
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9749
        .trainerName = _("AISHA"),
#line 9750
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9751
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9752
F_TRAINER_FEMALE | 
#line 9753
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9754
        .doubleBattle = FALSE,
#line 9755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9757
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9758
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9761
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9762
        .trainerName = _("MAKAYLA"),
#line 9763
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9764
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9765
F_TRAINER_FEMALE | 
#line 9766
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9767
        .items = { ITEM_HYPER_POTION },
#line 9768
        .doubleBattle = FALSE,
#line 9769
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9771
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9772
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9775
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9776
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9779
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9780
        .trainerName = _("FABIAN"),
#line 9781
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9782
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9784
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9785
        .doubleBattle = FALSE,
#line 9786
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9788
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9789
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9792
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9793
        .trainerName = _("DAYTON"),
#line 9794
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9795
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9797
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9798
        .doubleBattle = FALSE,
#line 9799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9801
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9802
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9805
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9806
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9809
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9810
        .trainerName = _("RACHEL"),
#line 9811
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9812
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9813
F_TRAINER_FEMALE | 
#line 9814
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9815
        .doubleBattle = FALSE,
#line 9816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9818
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9819
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9822
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9823
        .trainerName = _("LEONEL"),
#line 9824
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9825
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9827
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9828
        .items = { ITEM_HYPER_POTION },
#line 9829
        .doubleBattle = FALSE,
#line 9830
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9832
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9834
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9833
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9837
        .trainerName = _("CALLIE"),
#line 9838
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9839
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9840
F_TRAINER_FEMALE | 
#line 9841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9842
        .doubleBattle = FALSE,
#line 9843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9845
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9846
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9849
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9850
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9853
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9854
        .trainerName = _("CALE"),
#line 9855
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9856
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9858
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9859
        .doubleBattle = FALSE,
#line 9860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9862
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9863
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9866
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9867
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9870
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9871
        .trainerName = _("MYLES"),
#line 9872
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9873
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9875
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9876
        .doubleBattle = FALSE,
#line 9877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9879
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9881
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9880
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9883
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9885
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9884
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9887
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9889
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9888
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9891
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9892
        .trainerName = _("PAT"),
#line 9893
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9894
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9895
F_TRAINER_FEMALE | 
#line 9896
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9897
        .doubleBattle = FALSE,
#line 9898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9900
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9902
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9901
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9904
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9906
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9905
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9908
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9909
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9913
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 9914
        .trainerName = _("CRISTIN"),
#line 9915
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9916
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9917
F_TRAINER_FEMALE | 
#line 9918
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9919
        .items = { ITEM_HYPER_POTION },
#line 9920
        .doubleBattle = FALSE,
#line 9921
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9923
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9925
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9924
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9927
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9929
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9928
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9931
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9932
        .trainerName = _("MAY"),
#line 9933
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9934
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9935
F_TRAINER_FEMALE | 
#line 9936
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9937
        .doubleBattle = FALSE,
#line 9938
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9940
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9942
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9941
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9944
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9946
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9945
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9948
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9949
        .trainerName = _("MAY"),
#line 9950
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9951
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9952
F_TRAINER_FEMALE | 
#line 9953
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9954
        .doubleBattle = FALSE,
#line 9955
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9957
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9958
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9961
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9962
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9965
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 9966
        .trainerName = _("GRUNT"),
#line 9967
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9968
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9970
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9971
        .doubleBattle = FALSE,
#line 9972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9974
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9974
            .heldItem = ITEM_EVIOLITE,
#line 9976
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9975
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9977
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 9978
        .trainerName = _("GRUNT"),
#line 9979
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9980
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9982
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9983
        .doubleBattle = FALSE,
#line 9984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9986
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9987
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9989
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 9990
        .trainerName = _("GRUNT"),
#line 9991
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9992
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9994
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9995
        .doubleBattle = FALSE,
#line 9996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9998
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9999
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10001
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10002
        .trainerName = _("GRUNT"),
#line 10003
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10004
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10006
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10007
        .doubleBattle = FALSE,
#line 10008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10010
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10011
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10013
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10014
        .trainerName = _("GRUNT"),
#line 10015
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10016
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10018
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10019
        .doubleBattle = FALSE,
#line 10020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10022
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10024
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10023
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10025
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10027
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10026
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10028
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10029
        .trainerName = _("GRUNT"),
#line 10030
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10031
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10033
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10034
        .doubleBattle = FALSE,
#line 10035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10037
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10039
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10038
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10041
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10042
        .trainerName = _("GRUNT"),
#line 10043
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10044
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10046
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10047
        .doubleBattle = FALSE,
#line 10048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10050
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10052
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10051
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10053
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10054
        .trainerName = _("GRUNT"),
#line 10055
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10056
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10058
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10059
        .doubleBattle = FALSE,
#line 10060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10062
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10063
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10065
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 10066
        .trainerName = _("GRUNT"),
#line 10067
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10068
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10070
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10071
        .doubleBattle = FALSE,
#line 10072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10074
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10076
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10075
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10077
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10079
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10078
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10080
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10081
        .trainerName = _("GRUNT"),
#line 10082
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10083
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10085
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10086
        .doubleBattle = FALSE,
#line 10087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10089
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10090
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10092
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10093
        .trainerName = _("GRUNT"),
#line 10094
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10095
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10097
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10098
        .doubleBattle = FALSE,
#line 10099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10101
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10103
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10102
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10104
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10105
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10107
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10108
        .trainerName = _("GRUNT"),
#line 10109
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10110
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10112
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10113
        .doubleBattle = FALSE,
#line 10114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10116
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10117
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10119
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10120
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10122
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10123
        .trainerName = _("TATE&LIZA"),
#line 10124
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10125
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10127
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10128
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10129
        .doubleBattle = TRUE,
#line 10130
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10132
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10133
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10135
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10140
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10142
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10141
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10143
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10148
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10150
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10149
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10151
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10156
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10156
            .heldItem = ITEM_CHESTO_BERRY,
#line 10158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10157
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10159
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10164
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10164
            .heldItem = ITEM_CHESTO_BERRY,
#line 10166
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10165
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10167
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10172
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10172
            .heldItem = ITEM_SITRUS_BERRY,
#line 10174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10173
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10175
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10180
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10181
        .trainerName = _("ANGELO"),
#line 10182
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10183
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10185
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10186
        .doubleBattle = FALSE,
#line 10187
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10189
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10191
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10190
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10193
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10195
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10194
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10197
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10198
        .trainerName = _("DARIUS"),
#line 10199
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10200
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10202
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10203
        .doubleBattle = FALSE,
#line 10204
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10206
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10208
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10207
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10210
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10211
        .trainerName = _("STEVEN"),
#line 10212
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10213
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10215
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10216
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10217
        .doubleBattle = FALSE,
#line 10218
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10220
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10221
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10223
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10228
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10230
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10229
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10231
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10236
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10237
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10239
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10244
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10246
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10245
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10247
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10252
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10253
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10255
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10260
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10260
            .heldItem = ITEM_SITRUS_BERRY,
#line 10262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10261
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10263
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10268
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10269
        .trainerName = _("ANABEL"),
#line 10270
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10271
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10272
F_TRAINER_FEMALE | 
#line 10273
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10274
        .doubleBattle = FALSE,
#line 10275
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10277
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10278
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10281
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10282
        .trainerName = _("TUCKER"),
#line 10283
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10284
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10286
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10287
        .doubleBattle = FALSE,
#line 10288
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10290
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10291
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10294
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10295
        .trainerName = _("SPENSER"),
#line 10296
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10297
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10299
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10300
        .doubleBattle = FALSE,
#line 10301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10303
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10304
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10307
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10308
        .trainerName = _("GRETA"),
#line 10309
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10310
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10311
F_TRAINER_FEMALE | 
#line 10312
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10313
        .doubleBattle = FALSE,
#line 10314
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10316
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10317
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10320
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10321
        .trainerName = _("GRUNT"),
#line 10322
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10323
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10325
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10326
        .doubleBattle = FALSE,
#line 10327
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10329
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10330
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10333
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10334
        .trainerName = _("GHOSTESS"),
#line 10335
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10336
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10337
F_TRAINER_FEMALE | 
#line 10338
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10339
        .doubleBattle = FALSE,
#line 10340
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10342
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10342
            .heldItem = ITEM_TWISTED_SPOON,
#line 10345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10343
            .ability = ABILITY_THICK_FAT,
#line 10344
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10345
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10350
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10350
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10353
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10351
            .ability = ABILITY_WONDER_SKIN,
#line 10352
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10353
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10358
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10358
            .heldItem = ITEM_METRONOME,
#line 10361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10359
            .ability = ABILITY_ROCK_HEAD,
#line 10360
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10361
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10366
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10366
            .heldItem = ITEM_ASSAULT_VEST,
#line 10369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10367
            .ability = ABILITY_CURSED_BODY,
#line 10368
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10369
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10374
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10375
        .trainerName = _("JORDAN"),
#line 10376
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10377
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10379
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10380
        .doubleBattle = FALSE,
#line 10381
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10383
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10384
            .ability = ABILITY_CHLOROPHYLL,
#line 10385
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10386
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10391
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10391
            .heldItem = ITEM_EVIOLITE,
#line 10394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10392
            .ability = ABILITY_PRESSURE,
#line 10393
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10394
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10399
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10399
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10400
            .ability = ABILITY_LIQUID_OOZE,
#line 10401
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10402
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10407
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10407
            .heldItem = ITEM_QUICK_CLAW,
#line 10410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10408
            .ability = ABILITY_OBLIVIOUS,
#line 10409
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10410
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10415
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10416
        .trainerName = _("JORDAN"),
#line 10417
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10418
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10420
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10421
        .doubleBattle = FALSE,
#line 10422
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10424
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10424
            .heldItem = ITEM_WIDE_LENS,
#line 10427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10425
            .ability = ABILITY_CHLOROPHYLL,
#line 10426
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10427
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10432
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .heldItem = ITEM_LIFE_ORB,
#line 10435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10433
            .ability = ABILITY_PRESSURE,
#line 10434
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10435
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10440
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10440
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10441
            .ability = ABILITY_LIQUID_OOZE,
#line 10442
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10443
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10448
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10448
            .heldItem = ITEM_CHOICE_SPECS,
#line 10451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10449
            .ability = ABILITY_OBLIVIOUS,
#line 10450
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10451
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10456
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10456
            .heldItem = ITEM_ASSAULT_VEST,
#line 10459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10457
            .ability = ABILITY_AIR_LOCK,
#line 10458
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10459
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10464
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10465
        .trainerName = _("GHOSTESS"),
#line 10466
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10467
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10468
F_TRAINER_FEMALE | 
#line 10469
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10470
        .doubleBattle = FALSE,
#line 10471
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10473
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10473
            .heldItem = ITEM_EXPERT_BELT,
#line 10476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10474
            .ability = ABILITY_THICK_FAT,
#line 10475
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10476
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10481
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10481
            .heldItem = ITEM_MUSCLE_BAND,
#line 10484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10482
            .ability = ABILITY_WONDER_SKIN,
#line 10483
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10484
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10489
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10489
            .heldItem = ITEM_WIDE_LENS,
#line 10492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10490
            .ability = ABILITY_INTIMIDATE,
#line 10491
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10492
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10497
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10497
            .heldItem = ITEM_ASSAULT_VEST,
#line 10500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10498
            .ability = ABILITY_CURSED_BODY,
#line 10499
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10500
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10505
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10506
        .trainerName = _("GRUNT"),
#line 10507
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10508
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10510
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10511
        .doubleBattle = FALSE,
#line 10512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10514
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10515
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10517
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10518
        .trainerName = _("GRUNT"),
#line 10519
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10520
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10522
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10523
        .doubleBattle = FALSE,
#line 10524
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10526
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10527
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10529
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10530
        .trainerName = _("GRUNT"),
#line 10531
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10532
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10534
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10535
        .doubleBattle = FALSE,
#line 10536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10538
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10540
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10539
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10541
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10542
        .trainerName = _("GRUNT"),
#line 10543
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10544
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10546
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10547
        .doubleBattle = FALSE,
#line 10548
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10550
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10551
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10553
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10554
        .trainerName = _("CORY"),
#line 10555
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10556
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10558
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10559
        .doubleBattle = FALSE,
#line 10560
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10562
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10564
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10563
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10566
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10568
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10567
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10570
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10572
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10571
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10574
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10575
        .trainerName = _("CORY"),
#line 10576
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10577
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10579
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10580
        .doubleBattle = FALSE,
#line 10581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10583
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10585
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10584
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10587
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10589
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10588
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10591
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10593
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10592
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10595
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10596
        .trainerName = _("MARIELA"),
#line 10597
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10598
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10599
F_TRAINER_FEMALE | 
#line 10600
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10601
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10603
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10604
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10607
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10608
        .trainerName = _("ALVARO"),
#line 10609
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10610
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10612
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10613
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10615
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10616
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10619
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10620
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10623
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10624
        .trainerName = _("EVERETT"),
#line 10625
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10626
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10628
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10629
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10631
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10632
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10635
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10636
        .trainerName = _("RED"),
#line 10637
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10638
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10640
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10641
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10643
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10644
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10647
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10648
        .trainerName = _("LEAF"),
#line 10649
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10650
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10651
F_TRAINER_FEMALE | 
#line 10652
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10653
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10655
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10656
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10659
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10660
        .trainerName = _("SAMUEL"),
#line 10661
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10662
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10664
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10665
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10667
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10668
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10671
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10672
        .trainerName = _("MAY"),
#line 10673
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10674
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10675
F_TRAINER_FEMALE | 
#line 10676
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10677
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10679
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10680
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
