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
            .lvl = 26,
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
            .lvl = 26,
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
            .lvl = 29,
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
            .lvl = 34,
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
            .lvl = 35,
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
            .lvl = 35,
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
            .lvl = 34,
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
            .lvl = 34,
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
            .lvl = 27,
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
        .partySize = 4,
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
            .lvl = 31,
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
            .lvl = 31,
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
            .lvl = 31,
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
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3345
            .heldItem = ITEM_MAGNET,
#line 3349
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3346
            .ability = ABILITY_STATIC,
#line 3347
            .lvl = 32,
#line 3348
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3350
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3355
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY] =
    {
#line 3356
        .trainerName = _("JOSE"),
#line 3357
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3358
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3360
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3361
        .doubleBattle = FALSE,
#line 3362
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3364
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3364
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3368
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3365
            .ability = ABILITY_NATURAL_CURE,
#line 3366
            .lvl = 40,
#line 3367
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3369
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3374
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3374
            .heldItem = ITEM_CHARCOAL,
#line 3378
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3375
            .ability = ABILITY_BLAZE,
#line 3376
            .lvl = 40,
#line 3377
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3379
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3384
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3384
            .heldItem = ITEM_ASSAULT_VEST,
#line 3388
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3385
            .ability = ABILITY_LEVITATE,
#line 3386
            .lvl = 40,
#line 3387
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3389
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3394
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3394
            .heldItem = ITEM_ROCKY_HELMET,
#line 3398
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3395
            .ability = ABILITY_MARVEL_SCALE,
#line 3396
            .lvl = 40,
#line 3397
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3399
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3404
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3404
            .heldItem = ITEM_DRAGON_FANG,
#line 3408
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3405
            .ability = ABILITY_SNIPER,
#line 3406
            .lvl = 40,
#line 3407
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3409
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
                MOVE_YAWN,
            },
            },
            {
#line 3414
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3414
            .heldItem = ITEM_LIFE_ORB,
#line 3418
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3415
            .ability = ABILITY_ROUGH_SKIN,
#line 3416
            .lvl = 40,
#line 3417
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3419
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3424
    [DIFFICULTY_NORMAL][TRAINER_NORMAN] =
    {
#line 3425
        .trainerName = _("GRAYSON"),
#line 3426
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3427
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3429
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3430
        .doubleBattle = FALSE,
#line 3431
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3433
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3433
            .heldItem = ITEM_MUSCLE_BAND,
#line 3437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3434
            .ability = ABILITY_IRON_FIST,
#line 3435
            .lvl = 43,
#line 3436
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3437
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3443
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3443
            .heldItem = ITEM_BLACK_BELT,
#line 3447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3444
            .ability = ABILITY_GUTS,
#line 3445
            .lvl = 43,
#line 3446
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3447
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3452
            .species = SPECIES_LOPUNNY,
#line 3452
            .gender = TRAINER_MON_FEMALE,
#line 3452
            .heldItem = ITEM_ROCKY_HELMET,
#line 3456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3453
            .ability = ABILITY_CUTE_CHARM,
#line 3454
            .lvl = 43,
#line 3455
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3456
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3461
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3461
            .heldItem = ITEM_FOCUS_BAND,
#line 3465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3462
            .ability = ABILITY_MOXIE,
#line 3463
            .lvl = 43,
#line 3464
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3465
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3471
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3471
            .heldItem = ITEM_EXPERT_BELT,
#line 3475
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3472
            .ability = ABILITY_INNER_FOCUS,
#line 3473
            .lvl = 43,
#line 3474
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3475
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3480
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3480
            .heldItem = ITEM_FOCUS_BAND,
#line 3484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3481
            .ability = ABILITY_POISON_TOUCH,
#line 3482
            .lvl = 43,
#line 3483
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3484
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3489
    [DIFFICULTY_NORMAL][TRAINER_WINONA] =
    {
#line 3490
        .trainerName = _("MATTHEW"),
#line 3491
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3492
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3494
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3495
        .doubleBattle = FALSE,
#line 3496
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3498
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3498
            .heldItem = ITEM_AIR_BALLOON,
#line 3502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3499
            .ability = ABILITY_STURDY,
#line 3500
            .lvl = 51,
#line 3501
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3502
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3507
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3507
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3508
            .ability = ABILITY_WEAK_ARMOR,
#line 3509
            .lvl = 51,
#line 3510
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3511
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3516
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3516
            .heldItem = ITEM_ASSAULT_VEST,
#line 3520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3517
            .ability = ABILITY_CLEAR_BODY,
#line 3518
            .lvl = 51,
#line 3519
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3520
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3525
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3525
            .heldItem = ITEM_CHOICE_SPECS,
#line 3529
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3526
            .ability = ABILITY_COMPETITIVE,
#line 3527
            .lvl = 51,
#line 3528
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3529
                MOVE_BRINE,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_ROOST,
            },
            },
            {
#line 3534
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3534
            .heldItem = ITEM_CHOICE_BAND,
#line 3538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3535
            .ability = ABILITY_TECHNICIAN,
#line 3536
            .lvl = 51,
#line 3537
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3538
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3543
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3543
            .heldItem = ITEM_ROCKY_HELMET,
#line 3547
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3544
            .ability = ABILITY_IRON_BARBS,
#line 3545
            .lvl = 51,
#line 3546
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3547
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3552
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA] =
    {
#line 3553
        .trainerName = _("MARK"),
#line 3554
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3555
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3557
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3558
        .doubleBattle = FALSE,
#line 3559
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3561
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3561
            .heldItem = ITEM_ROCKY_HELMET,
#line 3565
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3562
            .ability = ABILITY_FLASH_FIRE,
#line 3563
            .lvl = 55,
#line 3564
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3565
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3570
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3570
            .heldItem = ITEM_CHOICE_SPECS,
#line 3574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3571
            .ability = ABILITY_PIXILATE,
#line 3572
            .lvl = 55,
#line 3573
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3574
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3579
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3579
            .heldItem = ITEM_CHOICE_BAND,
#line 3582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3580
            .ability = ABILITY_HUGE_POWER,
#line 3581
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3582
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3587
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3587
            .heldItem = ITEM_CHOICE_SCARF,
#line 3591
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3588
            .ability = ABILITY_SERENE_GRACE,
#line 3589
            .lvl = 55,
#line 3590
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3591
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3596
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3596
            .heldItem = ITEM_LEFTOVERS,
#line 3600
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3597
            .ability = ABILITY_MAGIC_GUARD,
#line 3598
            .lvl = 55,
#line 3599
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3600
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3606
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3606
            .heldItem = ITEM_OCCA_BERRY,
#line 3609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3607
            .ability = ABILITY_INTIMIDATE,
#line 3608
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3609
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3615
    [DIFFICULTY_NORMAL][TRAINER_JUAN] =
    {
#line 3616
        .trainerName = _("XANDER"),
#line 3617
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3618
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3620
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3621
        .doubleBattle = TRUE,
#line 3622
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3624
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3624
            .heldItem = ITEM_LEFTOVERS,
#line 3628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3625
            .ability = ABILITY_SHADOW_TAG,
#line 3626
            .lvl = 61,
#line 3627
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3628
                MOVE_TRICK_ROOM,
                MOVE_PROTECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3633
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3633
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3637
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3634
            .ability = ABILITY_CURSED_BODY,
#line 3635
            .lvl = 61,
#line 3636
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3637
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3642
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3642
            .heldItem = ITEM_CHOICE_SPECS,
#line 3646
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3643
            .ability = ABILITY_FLASH_FIRE,
#line 3644
            .lvl = 61,
#line 3645
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3646
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3651
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3651
            .heldItem = ITEM_SITRUS_BERRY,
#line 3655
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3652
            .ability = ABILITY_LEVITATE,
#line 3653
            .lvl = 61,
#line 3654
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3655
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3660
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3660
            .heldItem = ITEM_LEFTOVERS,
#line 3664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3661
            .ability = ABILITY_NO_GUARD,
#line 3662
            .lvl = 61,
#line 3663
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3664
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3669
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3669
            .heldItem = ITEM_SITRUS_BERRY,
#line 3673
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3670
            .ability = ABILITY_MUMMY,
#line 3671
            .lvl = 61,
#line 3672
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3673
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3678
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3679
        .trainerName = _("JERRY"),
#line 3680
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3681
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3683
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3684
        .doubleBattle = FALSE,
#line 3685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3687
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3688
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3691
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3692
        .trainerName = _("TED"),
#line 3693
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3694
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3696
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3697
        .doubleBattle = FALSE,
#line 3698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3700
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3702
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3701
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3704
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3705
        .trainerName = _("PAUL"),
#line 3706
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3707
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3709
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3710
        .doubleBattle = FALSE,
#line 3711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3713
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3715
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3714
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3717
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3718
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3721
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3723
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3722
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3725
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3726
        .trainerName = _("KAREN"),
#line 3727
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3728
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3729
F_TRAINER_FEMALE | 
#line 3730
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3731
        .doubleBattle = FALSE,
#line 3732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3734
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3736
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3735
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3738
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3739
        .trainerName = _("GEORGIA"),
#line 3740
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3741
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3742
F_TRAINER_FEMALE | 
#line 3743
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3744
        .doubleBattle = FALSE,
#line 3745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3747
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3749
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3748
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3751
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3752
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3755
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3756
        .trainerName = _("KATE & JOY"),
#line 3757
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3758
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3760
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3761
        .doubleBattle = TRUE,
#line 3762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3764
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3765
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3768
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3769
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3773
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3774
        .trainerName = _("ANNA & MEG"),
#line 3775
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3776
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3778
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3779
        .doubleBattle = TRUE,
#line 3780
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3782
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3783
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3786
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3787
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3790
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3791
        .trainerName = _("VICTOR"),
#line 3792
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3793
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3795
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3796
        .doubleBattle = FALSE,
#line 3797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3799
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3799
            .heldItem = ITEM_ORAN_BERRY,
#line 3801
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3800
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3803
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3803
            .heldItem = ITEM_ORAN_BERRY,
#line 3805
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3804
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3807
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3808
        .trainerName = _("MIGUEL"),
#line 3809
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3810
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3812
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3813
        .doubleBattle = FALSE,
#line 3814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3816
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3816
            .heldItem = ITEM_ORAN_BERRY,
#line 3818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3817
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3820
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3821
        .trainerName = _("COLTON"),
#line 3822
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3823
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3825
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3826
        .doubleBattle = FALSE,
#line 3827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3829
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3829
            .heldItem = ITEM_ORAN_BERRY,
#line 3831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3830
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3832
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3837
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3837
            .heldItem = ITEM_ORAN_BERRY,
#line 3839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3838
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3840
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3845
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3845
            .heldItem = ITEM_ORAN_BERRY,
#line 3847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3846
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3848
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3853
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3853
            .heldItem = ITEM_ORAN_BERRY,
#line 3855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3854
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3856
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3861
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3861
            .heldItem = ITEM_ORAN_BERRY,
#line 3863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3862
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3864
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3869
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3869
            .heldItem = ITEM_ORAN_BERRY,
#line 3871
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3870
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3872
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3877
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3878
        .trainerName = _("VICTORIA"),
#line 3879
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3880
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3881
F_TRAINER_FEMALE | 
#line 3882
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3883
        .doubleBattle = FALSE,
#line 3884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3886
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3886
            .heldItem = ITEM_ORAN_BERRY,
#line 3888
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3887
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3890
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3891
        .trainerName = _("VANESSA"),
#line 3892
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3893
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3894
F_TRAINER_FEMALE | 
#line 3895
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3896
        .doubleBattle = FALSE,
#line 3897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3899
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3899
            .heldItem = ITEM_ORAN_BERRY,
#line 3901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3900
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3903
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3904
        .trainerName = _("BETHANY"),
#line 3905
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3906
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3907
F_TRAINER_FEMALE | 
#line 3908
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3909
        .doubleBattle = FALSE,
#line 3910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3912
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3912
            .heldItem = ITEM_ORAN_BERRY,
#line 3914
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3913
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3916
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .heldItem = ITEM_ORAN_BERRY,
#line 3918
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3917
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3920
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3920
            .heldItem = ITEM_ORAN_BERRY,
#line 3922
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3921
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3924
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3925
        .trainerName = _("ISABEL"),
#line 3926
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3927
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3928
F_TRAINER_FEMALE | 
#line 3929
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3930
        .doubleBattle = FALSE,
#line 3931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3933
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3933
            .heldItem = ITEM_ORAN_BERRY,
#line 3935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3934
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3937
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3937
            .heldItem = ITEM_ORAN_BERRY,
#line 3939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3938
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3941
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3942
        .trainerName = _("TIMOTHY"),
#line 3943
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3944
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3946
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3947
        .doubleBattle = FALSE,
#line 3948
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3950
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3952
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3951
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3954
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3955
        .trainerName = _("VICKY"),
#line 3956
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3957
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3958
F_TRAINER_FEMALE | 
#line 3959
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3960
        .doubleBattle = FALSE,
#line 3961
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3963
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3965
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3964
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3967
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 3968
        .trainerName = _("SHELBY"),
#line 3969
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3970
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3971
F_TRAINER_FEMALE | 
#line 3972
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3973
        .doubleBattle = FALSE,
#line 3974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3977
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3980
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3981
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3984
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 3985
        .trainerName = _("CALVIN"),
#line 3986
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3987
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3989
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3990
        .doubleBattle = FALSE,
#line 3991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3993
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3994
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3997
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 3998
        .trainerName = _("BILLY"),
#line 3999
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4000
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4002
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4003
        .doubleBattle = FALSE,
#line 4004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4006
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4007
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4010
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4011
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4014
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4015
        .trainerName = _("JOSH"),
#line 4016
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4017
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4019
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4020
        .doubleBattle = FALSE,
#line 4021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4023
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4024
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4026
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4028
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4029
        .trainerName = _("TOMMY"),
#line 4030
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4031
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4033
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4034
        .doubleBattle = FALSE,
#line 4035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4037
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4039
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4038
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4041
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4043
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4042
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4045
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4046
        .trainerName = _("JOEY"),
#line 4047
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4048
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4050
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4051
        .doubleBattle = FALSE,
#line 4052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4054
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4055
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4058
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4059
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4062
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4063
        .trainerName = _("BEN"),
#line 4064
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4065
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4067
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4068
        .doubleBattle = FALSE,
#line 4069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4071
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4073
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4072
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4076
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4077
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4081
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4082
        .trainerName = _("QUINCY"),
#line 4083
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4084
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4086
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4087
        .items = { ITEM_FULL_RESTORE },
#line 4088
        .doubleBattle = FALSE,
#line 4089
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4091
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4092
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4095
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4097
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4096
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4099
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4100
        .trainerName = _("KATELYNN"),
#line 4101
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4102
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4103
F_TRAINER_FEMALE | 
#line 4104
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4105
        .items = { ITEM_FULL_RESTORE },
#line 4106
        .doubleBattle = FALSE,
#line 4107
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4109
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4111
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4110
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4112
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4117
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4119
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4118
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4120
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4125
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4126
        .trainerName = _("JAYLEN"),
#line 4127
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4128
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4130
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4131
        .doubleBattle = FALSE,
#line 4132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4134
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4135
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4138
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4139
        .trainerName = _("DILLON"),
#line 4140
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4141
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4143
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4144
        .doubleBattle = FALSE,
#line 4145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4147
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4148
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4151
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4152
        .trainerName = _("EDDIE"),
#line 4153
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4154
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4156
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4157
        .doubleBattle = FALSE,
#line 4158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4160
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4161
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4164
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4165
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4168
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4169
        .trainerName = _("ALLEN"),
#line 4170
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4171
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4173
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4174
        .doubleBattle = FALSE,
#line 4175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4178
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4181
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4183
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4182
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4185
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4186
        .trainerName = _("TIMMY"),
#line 4187
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4188
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4190
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4191
        .doubleBattle = FALSE,
#line 4192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4194
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4195
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4198
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4200
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4199
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4202
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4203
        .trainerName = _("FATTY"),
#line 4204
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4205
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4207
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4208
        .doubleBattle = FALSE,
#line 4209
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4210
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4212
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4212
            .heldItem = ITEM_LEFTOVERS,
#line 4216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4213
            .ability = ABILITY_THICK_FAT,
#line 4214
            .lvl = 75,
#line 4215
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4216
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 4221
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4221
            .heldItem = ITEM_CHOICE_BAND,
#line 4225
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4222
            .ability = ABILITY_INTIMIDATE,
#line 4223
            .lvl = 75,
#line 4224
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4225
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4230
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .heldItem = ITEM_LIFE_ORB,
#line 4234
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4231
            .ability = ABILITY_OVERGROW,
#line 4232
            .lvl = 75,
#line 4233
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4234
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 4239
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .heldItem = ITEM_FOCUS_SASH,
#line 4243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4240
            .ability = ABILITY_MAGIC_GUARD,
#line 4241
            .lvl = 75,
#line 4242
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4243
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4248
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4248
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 4252
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4249
            .ability = ABILITY_STATIC,
#line 4250
            .lvl = 75,
#line 4251
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4252
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4257
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4257
            .heldItem = ITEM_EVIOLITE,
#line 4261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4258
            .ability = ABILITY_SWIFT_SWIM,
#line 4259
            .lvl = 78,
#line 4260
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4261
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4266
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4267
        .trainerName = _("ANDREW"),
#line 4268
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4269
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4271
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4272
        .doubleBattle = FALSE,
#line 4273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4275
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4276
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4279
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4281
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4280
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4283
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4284
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4287
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4288
        .trainerName = _("IVAN"),
#line 4289
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4290
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4292
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4293
        .doubleBattle = FALSE,
#line 4294
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4296
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4298
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4297
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4300
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4301
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4304
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4306
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4305
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4308
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4309
        .trainerName = _("CLAUDE"),
#line 4310
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4311
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4313
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4314
        .doubleBattle = FALSE,
#line 4315
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4317
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4318
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4321
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4322
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4325
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4326
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4329
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4330
        .trainerName = _("ELLIOT"),
#line 4331
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4332
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4334
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4335
        .doubleBattle = FALSE,
#line 4336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4338
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4339
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4342
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4344
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4343
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4346
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4347
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4350
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4351
        .trainerName = _("NED"),
#line 4352
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4353
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4355
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4356
        .doubleBattle = FALSE,
#line 4357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4359
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4361
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4360
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4363
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4364
        .trainerName = _("DALE"),
#line 4365
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4366
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4368
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4369
        .doubleBattle = FALSE,
#line 4370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4372
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4373
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4376
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4378
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4377
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4380
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4381
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4384
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4385
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4388
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4389
        .trainerName = _("NOLAN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4397
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4398
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4401
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4402
        .trainerName = _("BARNY"),
#line 4403
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4404
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4406
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4407
        .doubleBattle = FALSE,
#line 4408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4410
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4411
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4414
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4415
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4418
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4419
        .trainerName = _("WADE"),
#line 4420
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4421
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4423
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4424
        .doubleBattle = FALSE,
#line 4425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4427
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4429
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4428
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4430
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4431
        .trainerName = _("ABIGAL"),
#line 4432
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4433
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4434
F_TRAINER_FEMALE | 
#line 4435
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4436
        .doubleBattle = FALSE,
#line 4437
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4439
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4440
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4442
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4443
        .trainerName = _("CARTER"),
#line 4444
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4445
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4447
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4448
        .doubleBattle = FALSE,
#line 4449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4451
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4453
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4452
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4455
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4457
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4456
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4459
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4460
        .trainerName = _("RONALD"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4468
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4469
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4473
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4474
        .trainerName = _("JACOB"),
#line 4475
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4476
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
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
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4484
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4483
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4486
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4488
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4487
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4490
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4492
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4491
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4494
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4495
        .trainerName = _("ANTHONY"),
#line 4496
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4497
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4499
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4500
        .doubleBattle = FALSE,
#line 4501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4503
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4504
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4507
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4508
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4511
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4512
        .trainerName = _("BENJAMIN"),
#line 4513
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4514
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4516
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4517
        .doubleBattle = FALSE,
#line 4518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4520
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4521
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4524
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4525
        .trainerName = _("JASMINE"),
#line 4526
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4527
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4528
F_TRAINER_FEMALE | 
#line 4529
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4530
        .doubleBattle = FALSE,
#line 4531
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4533
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4535
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4534
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4537
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4539
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4538
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4541
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4542
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4545
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4546
        .trainerName = _("DYLAN"),
#line 4547
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4548
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4550
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4551
        .doubleBattle = FALSE,
#line 4552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4554
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4555
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4558
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4559
        .trainerName = _("MARIA"),
#line 4560
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4561
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4562
F_TRAINER_FEMALE | 
#line 4563
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4564
        .doubleBattle = FALSE,
#line 4565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4567
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4568
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4571
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4572
        .trainerName = _("CAMDEN"),
#line 4573
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4574
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4576
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4577
        .doubleBattle = FALSE,
#line 4578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4580
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4581
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4584
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4585
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4588
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4589
        .trainerName = _("DEMETRIUS"),
#line 4590
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4591
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4593
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4594
        .doubleBattle = FALSE,
#line 4595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4597
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4598
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4601
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4602
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4605
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4606
        .trainerName = _("ISAIAH"),
#line 4607
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4608
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4610
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4611
        .doubleBattle = FALSE,
#line 4612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4614
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4615
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4618
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4619
        .trainerName = _("PABLO"),
#line 4620
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4621
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4623
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4624
        .doubleBattle = FALSE,
#line 4625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4627
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4628
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4631
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4632
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4635
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4636
        .trainerName = _("CHASE"),
#line 4637
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4638
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4640
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4641
        .doubleBattle = FALSE,
#line 4642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4644
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4645
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4648
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4650
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4649
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4652
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4653
        .trainerName = _("ISOBEL"),
#line 4654
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4655
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4656
F_TRAINER_FEMALE | 
#line 4657
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4658
        .doubleBattle = FALSE,
#line 4659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4661
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4662
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4665
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4666
        .trainerName = _("DONNY"),
#line 4667
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4668
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4669
F_TRAINER_FEMALE | 
#line 4670
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4671
        .doubleBattle = FALSE,
#line 4672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4674
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4675
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4678
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4680
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4679
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4682
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4683
        .trainerName = _("TALIA"),
#line 4684
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4685
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4686
F_TRAINER_FEMALE | 
#line 4687
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4688
        .doubleBattle = FALSE,
#line 4689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4691
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4692
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4695
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4696
        .trainerName = _("KATELYN"),
#line 4697
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4698
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4699
F_TRAINER_FEMALE | 
#line 4700
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4701
        .doubleBattle = FALSE,
#line 4702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4704
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4705
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4708
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4709
        .trainerName = _("ALLISON"),
#line 4710
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4711
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4712
F_TRAINER_FEMALE | 
#line 4713
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4714
        .doubleBattle = FALSE,
#line 4715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4717
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4718
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4721
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4723
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4722
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4725
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4726
        .trainerName = _("NICOLAS"),
#line 4727
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4728
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4730
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4731
        .doubleBattle = FALSE,
#line 4732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4734
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4736
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4735
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4738
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4740
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4739
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4742
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4743
        .trainerName = _("AARON"),
#line 4744
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4745
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4747
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4748
        .doubleBattle = FALSE,
#line 4749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4751
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4753
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4752
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4755
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4756
        .trainerName = _("PERRY"),
#line 4757
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4758
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4760
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4761
        .doubleBattle = FALSE,
#line 4762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4764
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4765
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4768
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4769
        .trainerName = _("HUGH"),
#line 4770
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4771
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4773
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4774
        .doubleBattle = FALSE,
#line 4775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4777
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4778
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4781
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4782
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4785
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4786
        .trainerName = _("PHIL"),
#line 4787
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4788
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4790
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4791
        .doubleBattle = FALSE,
#line 4792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4794
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4795
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4798
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4799
        .trainerName = _("JARED"),
#line 4800
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4801
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4803
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4804
        .doubleBattle = FALSE,
#line 4805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4807
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4809
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4808
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4811
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4813
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4812
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4815
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4817
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4816
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4819
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4820
        .trainerName = _("HUMBERTO"),
#line 4821
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4822
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4824
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4825
        .doubleBattle = FALSE,
#line 4826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4828
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4830
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4829
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4832
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4833
        .trainerName = _("PRESLEY"),
#line 4834
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4835
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4837
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4838
        .doubleBattle = FALSE,
#line 4839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4841
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4842
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4845
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4846
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4849
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4850
        .trainerName = _("EDWARDO"),
#line 4851
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4852
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4854
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4855
        .doubleBattle = FALSE,
#line 4856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4858
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4860
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4859
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4862
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4864
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4863
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4866
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4867
        .trainerName = _("COLIN"),
#line 4868
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4869
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4871
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4872
        .doubleBattle = FALSE,
#line 4873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4875
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4876
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4879
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4880
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4883
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4884
        .trainerName = _("ROBERT"),
#line 4885
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4886
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4888
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4889
        .doubleBattle = FALSE,
#line 4890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4892
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4893
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4896
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4897
        .trainerName = _("BENNY"),
#line 4898
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4899
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4901
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4902
        .doubleBattle = FALSE,
#line 4903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4905
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4906
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4909
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4910
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4913
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4914
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4917
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4918
        .trainerName = _("CHESTER"),
#line 4919
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4920
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4922
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4923
        .doubleBattle = FALSE,
#line 4924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4926
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4927
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4930
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4931
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4934
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4935
        .trainerName = _("ALEX"),
#line 4936
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4937
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4939
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4940
        .doubleBattle = FALSE,
#line 4941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4943
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4945
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4944
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4947
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4949
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4948
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4951
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4952
        .trainerName = _("BECK"),
#line 4953
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4954
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4956
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4957
        .doubleBattle = FALSE,
#line 4958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4960
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4961
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4964
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4965
        .trainerName = _("YASU"),
#line 4966
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4967
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4969
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4970
        .doubleBattle = FALSE,
#line 4971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4973
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4974
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4977
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4978
        .trainerName = _("TAKASHI"),
#line 4979
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4980
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4982
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4983
        .doubleBattle = FALSE,
#line 4984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4986
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4987
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4990
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4991
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4994
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 4995
        .trainerName = _("DIANNE"),
#line 4996
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4997
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4998
F_TRAINER_FEMALE | 
#line 4999
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5000
        .items = { ITEM_FULL_RESTORE },
#line 5001
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5003
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5004
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5006
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5009
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5010
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5012
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5015
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5016
        .trainerName = _("JANI"),
#line 5017
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5018
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5019
F_TRAINER_FEMALE | 
#line 5020
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5021
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5023
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5024
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5027
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5028
        .trainerName = _("LAO"),
#line 5029
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5030
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5032
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5033
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5035
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5036
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5039
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5040
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5043
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5044
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5047
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5048
        .trainerName = _("LUNG"),
#line 5049
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5050
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5052
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5053
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5055
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5056
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5059
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5060
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5063
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5064
        .trainerName = _("JOCELYN"),
#line 5065
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5066
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5067
F_TRAINER_FEMALE | 
#line 5068
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5069
        .doubleBattle = FALSE,
#line 5070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5072
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5074
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5073
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5076
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5077
        .trainerName = _("LAURA"),
#line 5078
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5079
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5080
F_TRAINER_FEMALE | 
#line 5081
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5082
        .doubleBattle = FALSE,
#line 5083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5085
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5086
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5089
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5090
        .trainerName = _("CYNDY"),
#line 5091
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5092
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5093
F_TRAINER_FEMALE | 
#line 5094
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5095
        .doubleBattle = FALSE,
#line 5096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5098
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5100
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5099
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5102
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5104
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5103
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5106
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5107
        .trainerName = _("CORA"),
#line 5108
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5109
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5110
F_TRAINER_FEMALE | 
#line 5111
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5112
        .doubleBattle = FALSE,
#line 5113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5115
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5117
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5116
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5119
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5120
        .trainerName = _("PAULA"),
#line 5121
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5122
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5123
F_TRAINER_FEMALE | 
#line 5124
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5125
        .doubleBattle = FALSE,
#line 5126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5128
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5129
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5132
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5133
        .trainerName = _("MADELINE"),
#line 5134
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5135
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5136
F_TRAINER_FEMALE | 
#line 5137
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5138
        .doubleBattle = FALSE,
#line 5139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5141
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5142
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5145
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5146
        .trainerName = _("CLARISSA"),
#line 5147
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5148
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5149
F_TRAINER_FEMALE | 
#line 5150
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5151
        .doubleBattle = FALSE,
#line 5152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5154
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5155
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5158
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5159
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5162
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5163
        .trainerName = _("ANGELICA"),
#line 5164
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5165
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5166
F_TRAINER_FEMALE | 
#line 5167
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5168
        .doubleBattle = FALSE,
#line 5169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5171
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5173
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5172
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5175
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5176
        .trainerName = _("BEVERLY"),
#line 5177
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5178
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5179
F_TRAINER_FEMALE | 
#line 5180
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5181
        .doubleBattle = FALSE,
#line 5182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5184
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5185
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5188
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5189
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5192
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5193
        .trainerName = _("IMANI"),
#line 5194
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5195
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5196
F_TRAINER_FEMALE | 
#line 5197
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5198
        .doubleBattle = FALSE,
#line 5199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5201
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5202
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5205
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5206
        .trainerName = _("KYLA"),
#line 5207
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5208
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5209
F_TRAINER_FEMALE | 
#line 5210
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5211
        .doubleBattle = FALSE,
#line 5212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5214
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5215
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5218
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5219
        .trainerName = _("DENISE"),
#line 5220
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5221
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5222
F_TRAINER_FEMALE | 
#line 5223
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5224
        .doubleBattle = FALSE,
#line 5225
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5227
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5228
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5231
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5232
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5235
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5236
        .trainerName = _("BETH"),
#line 5237
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5238
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5239
F_TRAINER_FEMALE | 
#line 5240
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5241
        .doubleBattle = FALSE,
#line 5242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5244
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5245
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5248
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5249
        .trainerName = _("TARA"),
#line 5250
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5251
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5252
F_TRAINER_FEMALE | 
#line 5253
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5254
        .doubleBattle = FALSE,
#line 5255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5257
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5258
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5261
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5262
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5265
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5266
        .trainerName = _("MISSY"),
#line 5267
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5268
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5269
F_TRAINER_FEMALE | 
#line 5270
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5271
        .doubleBattle = FALSE,
#line 5272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5274
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5275
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5278
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5279
        .trainerName = _("ALICE"),
#line 5280
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5281
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5282
F_TRAINER_FEMALE | 
#line 5283
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5284
        .doubleBattle = FALSE,
#line 5285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5287
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5288
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5291
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5292
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5295
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5296
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5299
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5300
        .trainerName = _("JENNY"),
#line 5301
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5302
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5303
F_TRAINER_FEMALE | 
#line 5304
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5305
        .doubleBattle = FALSE,
#line 5306
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5308
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5309
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5312
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5313
        .trainerName = _("GRACE"),
#line 5314
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5315
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5316
F_TRAINER_FEMALE | 
#line 5317
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5318
        .doubleBattle = FALSE,
#line 5319
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5321
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5322
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5326
        .trainerName = _("TANYA"),
#line 5327
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5328
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5329
F_TRAINER_FEMALE | 
#line 5330
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5331
        .doubleBattle = FALSE,
#line 5332
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5334
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5335
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5338
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5339
        .trainerName = _("SHARON"),
#line 5340
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5341
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5342
F_TRAINER_FEMALE | 
#line 5343
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5344
        .doubleBattle = FALSE,
#line 5345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5347
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5348
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5351
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5352
        .trainerName = _("NIKKI"),
#line 5353
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5354
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5355
F_TRAINER_FEMALE | 
#line 5356
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5357
        .doubleBattle = FALSE,
#line 5358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5360
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5361
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5364
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5365
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5368
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5369
        .trainerName = _("BRENDA"),
#line 5370
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5371
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5372
F_TRAINER_FEMALE | 
#line 5373
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5374
        .doubleBattle = FALSE,
#line 5375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5377
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5378
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5381
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5382
        .trainerName = _("KATIE"),
#line 5383
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5384
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5385
F_TRAINER_FEMALE | 
#line 5386
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5387
        .doubleBattle = FALSE,
#line 5388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5390
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5391
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5394
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5395
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5398
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5399
        .trainerName = _("SUSIE"),
#line 5400
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5401
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5402
F_TRAINER_FEMALE | 
#line 5403
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5404
        .doubleBattle = FALSE,
#line 5405
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5407
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5408
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5411
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5412
        .trainerName = _("KARA"),
#line 5413
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5414
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5415
F_TRAINER_FEMALE | 
#line 5416
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5417
        .doubleBattle = FALSE,
#line 5418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5420
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5421
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5424
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5425
        .trainerName = _("DANA"),
#line 5426
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5427
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5428
F_TRAINER_FEMALE | 
#line 5429
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5430
        .doubleBattle = FALSE,
#line 5431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5433
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5434
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5437
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5438
        .trainerName = _("SIENNA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5446
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5447
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5450
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5451
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5454
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5455
        .trainerName = _("DEBRA"),
#line 5456
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5457
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5458
F_TRAINER_FEMALE | 
#line 5459
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5460
        .doubleBattle = FALSE,
#line 5461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5463
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5464
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5467
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5468
        .trainerName = _("LINDA"),
#line 5469
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5470
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5471
F_TRAINER_FEMALE | 
#line 5472
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5473
        .doubleBattle = FALSE,
#line 5474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5476
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5477
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5480
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5482
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5481
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5484
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5485
        .trainerName = _("KAYLEE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5493
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5494
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5497
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5498
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5501
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5502
        .trainerName = _("LAUREL"),
#line 5503
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5504
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5505
F_TRAINER_FEMALE | 
#line 5506
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5507
        .doubleBattle = FALSE,
#line 5508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5510
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5511
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5514
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5515
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5518
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5519
        .trainerName = _("CARLEE"),
#line 5520
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5521
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5522
F_TRAINER_FEMALE | 
#line 5523
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5524
        .doubleBattle = FALSE,
#line 5525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5527
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5528
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5531
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5532
        .trainerName = _("HEIDI"),
#line 5533
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5534
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5535
F_TRAINER_FEMALE | 
#line 5536
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5537
        .doubleBattle = FALSE,
#line 5538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5540
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5541
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5544
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5545
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5549
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5550
        .trainerName = _("BECKY"),
#line 5551
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5552
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5553
F_TRAINER_FEMALE | 
#line 5554
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5555
        .doubleBattle = TRUE,
#line 5556
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5558
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5558
            .heldItem = ITEM_FOCUS_SASH,
#line 5560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5559
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5561
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5564
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5564
            .heldItem = ITEM_WIDE_LENS,
#line 5567
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5565
            .ability = ABILITY_MOODY,
#line 5566
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5567
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5572
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5573
        .trainerName = _("CAROL"),
#line 5574
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5575
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5576
F_TRAINER_FEMALE | 
#line 5577
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5578
        .doubleBattle = FALSE,
#line 5579
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5581
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5582
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5585
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5586
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5589
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5590
        .trainerName = _("NANCY"),
#line 5591
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5592
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5593
F_TRAINER_FEMALE | 
#line 5594
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5595
        .doubleBattle = FALSE,
#line 5596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5598
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5599
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5602
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5603
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5606
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5607
        .trainerName = _("MARTHA"),
#line 5608
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5609
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5610
F_TRAINER_FEMALE | 
#line 5611
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5612
        .doubleBattle = FALSE,
#line 5613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5615
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5616
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5619
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5620
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5623
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5624
        .trainerName = _("DIANA"),
#line 5625
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5626
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5627
F_TRAINER_FEMALE | 
#line 5628
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5629
        .doubleBattle = FALSE,
#line 5630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5632
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5633
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5636
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5637
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5640
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5641
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5644
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5645
        .trainerName = _("CEDRIC"),
#line 5646
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5647
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5649
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5650
        .doubleBattle = FALSE,
#line 5651
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5653
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5654
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5657
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5658
        .trainerName = _("IRENE"),
#line 5659
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5660
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5661
F_TRAINER_FEMALE | 
#line 5662
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5663
        .doubleBattle = FALSE,
#line 5664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5666
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5667
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5670
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5671
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5674
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5675
        .trainerName = _("AMY & LIV"),
#line 5676
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5677
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5679
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5680
        .doubleBattle = TRUE,
#line 5681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5683
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5684
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5687
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5688
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5692
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5693
        .trainerName = _("GINA & MIA"),
#line 5694
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5695
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5697
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5698
        .doubleBattle = TRUE,
#line 5699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5701
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5702
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5705
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5706
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5709
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5710
        .trainerName = _("MIU & YUKI"),
#line 5711
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5712
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5714
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5715
        .doubleBattle = TRUE,
#line 5716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5718
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5719
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5722
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5723
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5727
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5728
        .trainerName = _("HUEY"),
#line 5729
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5730
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5732
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5733
        .doubleBattle = FALSE,
#line 5734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5736
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5738
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5737
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5740
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5742
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5741
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5744
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5745
        .trainerName = _("EDMOND"),
#line 5746
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5747
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5749
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5750
        .doubleBattle = FALSE,
#line 5751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5753
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5754
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5757
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5758
        .trainerName = _("ERNEST"),
#line 5759
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5760
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5762
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5763
        .doubleBattle = FALSE,
#line 5764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5766
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5767
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5770
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5771
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5774
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5775
        .trainerName = _("DWAYNE"),
#line 5776
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5777
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5779
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5780
        .doubleBattle = FALSE,
#line 5781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5783
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5784
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5787
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5788
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5791
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5792
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5795
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5796
        .trainerName = _("PHILLIP"),
#line 5797
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5798
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5800
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5801
        .doubleBattle = FALSE,
#line 5802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5804
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5805
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5808
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5809
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5812
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5813
        .trainerName = _("LEONARD"),
#line 5814
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5815
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5817
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5818
        .doubleBattle = FALSE,
#line 5819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5821
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5822
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5825
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5826
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5829
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5830
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5833
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5834
        .trainerName = _("DUNCAN"),
#line 5835
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5836
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5838
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5839
        .doubleBattle = FALSE,
#line 5840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5842
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5843
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5846
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5847
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5850
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5851
        .trainerName = _("ELI"),
#line 5852
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5853
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5855
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5856
        .doubleBattle = FALSE,
#line 5857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5859
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5861
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5860
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5863
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5864
        .trainerName = _("ANNIKA"),
#line 5865
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5866
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5867
F_TRAINER_FEMALE | 
#line 5868
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5869
        .doubleBattle = FALSE,
#line 5870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5872
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5872
            .heldItem = ITEM_FOCUS_SASH,
#line 5874
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5873
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5876
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5876
            .heldItem = ITEM_FOCUS_SASH,
#line 5878
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5877
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5880
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5881
        .trainerName = _("JAZMYN"),
#line 5882
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5883
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5884
F_TRAINER_FEMALE | 
#line 5885
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5886
        .items = { ITEM_HYPER_POTION },
#line 5887
        .doubleBattle = FALSE,
#line 5888
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5890
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5891
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5894
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5895
        .trainerName = _("JONAS"),
#line 5896
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5897
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5899
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5900
        .doubleBattle = FALSE,
#line 5901
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5903
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5905
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5904
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5907
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5908
        .trainerName = _("KAYLEY"),
#line 5909
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5910
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5911
F_TRAINER_FEMALE | 
#line 5912
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5913
        .doubleBattle = FALSE,
#line 5914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5916
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5917
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5920
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5921
        .trainerName = _("AURON"),
#line 5922
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5923
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5925
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5926
        .doubleBattle = FALSE,
#line 5927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5929
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5930
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5933
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5934
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5937
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5938
        .trainerName = _("KELVIN"),
#line 5939
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5940
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5942
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5943
        .doubleBattle = FALSE,
#line 5944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5946
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5948
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5947
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5950
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5952
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5951
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5954
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5955
        .trainerName = _("MARLEY"),
#line 5956
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5957
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5958
F_TRAINER_FEMALE | 
#line 5959
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5960
        .items = { ITEM_HYPER_POTION },
#line 5961
        .doubleBattle = FALSE,
#line 5962
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5964
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5966
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5965
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5968
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5969
        .trainerName = _("REYNA"),
#line 5970
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5971
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5972
F_TRAINER_FEMALE | 
#line 5973
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5974
        .doubleBattle = FALSE,
#line 5975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5977
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5979
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5978
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5981
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5983
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5982
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5985
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 5986
        .trainerName = _("HUDSON"),
#line 5987
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5988
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5990
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5991
        .doubleBattle = FALSE,
#line 5992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5994
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5995
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5998
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 5999
        .trainerName = _("CONOR"),
#line 6000
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6001
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6003
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6004
        .doubleBattle = FALSE,
#line 6005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6007
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6008
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6011
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6013
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6012
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6015
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6016
        .trainerName = _("EDWIN"),
#line 6017
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6018
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6020
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6021
        .doubleBattle = FALSE,
#line 6022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6024
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6025
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6028
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6029
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6032
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6033
        .trainerName = _("HECTOR"),
#line 6034
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6035
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6037
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6038
        .doubleBattle = FALSE,
#line 6039
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6041
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6042
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6045
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6046
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6049
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6050
        .trainerName = _("TABITHA"),
#line 6051
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6052
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6054
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6055
        .doubleBattle = FALSE,
#line 6056
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6058
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6058
            .heldItem = ITEM_HEAT_ROCK,
#line 6061
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6059
            .ability = ABILITY_DROUGHT,
#line 6060
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6062
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6067
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .heldItem = ITEM_POISON_BARB,
#line 6070
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6068
            .ability = ABILITY_LEVITATE,
#line 6069
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6071
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6076
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6076
            .heldItem = ITEM_LIFE_ORB,
#line 6079
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6078
            .ability = ABILITY_LEVITATE,
#line 6077
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6080
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6085
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6086
        .trainerName = _("SAMUEL"),
#line 6087
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6088
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6090
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6091
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6092
        .doubleBattle = TRUE,
#line 6093
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6095
            .species = SPECIES_SLOWKING,
#line 6095
            .gender = TRAINER_MON_MALE,
#line 6095
            .heldItem = ITEM_LIFE_ORB,
#line 6099
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6096
            .ability = ABILITY_REGENERATOR,
#line 6097
            .lvl = 67,
#line 6098
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6100
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6105
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6105
            .heldItem = ITEM_ROCKY_HELMET,
#line 6109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6106
            .ability = ABILITY_REGENERATOR,
#line 6107
            .lvl = 67,
#line 6108
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6109
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6114
            .species = SPECIES_GLISCOR,
#line 6114
            .gender = TRAINER_MON_FEMALE,
#line 6114
            .heldItem = ITEM_TOXIC_ORB,
#line 6118
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6115
            .ability = ABILITY_POISON_HEAL,
#line 6116
            .lvl = 67,
#line 6117
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6119
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6124
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6124
            .heldItem = ITEM_ASSAULT_VEST,
#line 6128
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6125
            .ability = ABILITY_CLEAR_BODY,
#line 6126
            .lvl = 67,
#line 6127
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6129
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6134
            .species = SPECIES_HONCHKROW,
#line 6134
            .gender = TRAINER_MON_MALE,
#line 6134
            .heldItem = ITEM_FOCUS_SASH,
#line 6138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6135
            .ability = ABILITY_MOXIE,
#line 6136
            .lvl = 67,
#line 6137
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6138
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6143
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6143
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6144
            .ability = ABILITY_INFILTRATOR,
#line 6145
            .lvl = 67,
#line 6146
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6147
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6152
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6153
        .trainerName = _("SAMUEL"),
#line 6154
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6155
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6157
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6158
        .doubleBattle = FALSE,
#line 6159
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6161
            .species = SPECIES_SLOWPOKE,
#line 6161
            .gender = TRAINER_MON_MALE,
#line 6165
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6162
            .ability = ABILITY_REGENERATOR,
#line 6163
            .lvl = 5,
#line 6164
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6166
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6170
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6171
        .trainerName = _("SAMUEL"),
#line 6172
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6173
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6175
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6176
        .doubleBattle = FALSE,
#line 6177
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6179
            .species = SPECIES_SLOWPOKE,
#line 6179
            .gender = TRAINER_MON_MALE,
#line 6179
            .heldItem = ITEM_FIGY_BERRY,
#line 6183
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6180
            .ability = ABILITY_REGENERATOR,
#line 6181
            .lvl = 24,
#line 6182
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6184
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6189
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6189
            .heldItem = ITEM_LUM_BERRY,
#line 6193
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6190
            .ability = ABILITY_REGENERATOR,
#line 6191
            .lvl = 24,
#line 6192
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6194
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6199
            .species = SPECIES_GLIGAR,
#line 6199
            .gender = TRAINER_MON_FEMALE,
#line 6199
            .heldItem = ITEM_RAZOR_FANG,
#line 6203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6200
            .ability = ABILITY_HYPER_CUTTER,
#line 6201
            .lvl = 24,
#line 6202
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6204
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6209
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6210
            .ability = ABILITY_CLEAR_BODY,
#line 6211
            .lvl = 24,
#line 6212
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6213
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6218
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6219
        .trainerName = _("SAMUEL"),
#line 6220
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6221
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6223
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6224
        .doubleBattle = FALSE,
#line 6225
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6227
            .species = SPECIES_SLOWPOKE,
#line 6227
            .gender = TRAINER_MON_MALE,
#line 6227
            .heldItem = ITEM_LIFE_ORB,
#line 6231
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6228
            .ability = ABILITY_REGENERATOR,
#line 6229
            .lvl = 47,
#line 6230
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6232
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6237
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6237
            .heldItem = ITEM_ROCKY_HELMET,
#line 6241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6238
            .ability = ABILITY_REGENERATOR,
#line 6239
            .lvl = 47,
#line 6240
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6241
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6246
            .species = SPECIES_GLIGAR,
#line 6246
            .gender = TRAINER_MON_FEMALE,
#line 6246
            .heldItem = ITEM_RAZOR_FANG,
#line 6250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6247
            .ability = ABILITY_HYPER_CUTTER,
#line 6248
            .lvl = 47,
#line 6249
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6251
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6256
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6256
            .heldItem = ITEM_ASSAULT_VEST,
#line 6260
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6257
            .ability = ABILITY_CLEAR_BODY,
#line 6258
            .lvl = 47,
#line 6259
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6260
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6265
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6265
            .heldItem = ITEM_FOCUS_SASH,
#line 6269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6266
            .ability = ABILITY_PRANKSTER,
#line 6267
            .lvl = 47,
#line 6268
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6269
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6274
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6275
        .trainerName = _("SAMUEL"),
#line 6276
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6277
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6279
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6280
        .doubleBattle = FALSE,
#line 6281
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6283
            .species = SPECIES_SLOWPOKE,
#line 6283
            .gender = TRAINER_MON_MALE,
#line 6287
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6284
            .ability = ABILITY_REGENERATOR,
#line 6285
            .lvl = 5,
#line 6286
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6288
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6292
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6293
        .trainerName = _("SAMUEL"),
#line 6294
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6295
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6297
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6298
        .doubleBattle = FALSE,
#line 6299
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6301
            .species = SPECIES_SLOWPOKE,
#line 6301
            .gender = TRAINER_MON_MALE,
#line 6301
            .heldItem = ITEM_FIGY_BERRY,
#line 6305
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6302
            .ability = ABILITY_REGENERATOR,
#line 6303
            .lvl = 25,
#line 6304
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6306
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6311
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6311
            .heldItem = ITEM_LUM_BERRY,
#line 6315
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6312
            .ability = ABILITY_REGENERATOR,
#line 6313
            .lvl = 25,
#line 6314
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6316
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6321
            .species = SPECIES_GLIGAR,
#line 6321
            .gender = TRAINER_MON_FEMALE,
#line 6321
            .heldItem = ITEM_RAZOR_FANG,
#line 6325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6322
            .ability = ABILITY_HYPER_CUTTER,
#line 6323
            .lvl = 25,
#line 6324
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6326
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6331
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .heldItem = ITEM_METAL_COAT,
#line 6335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6332
            .ability = ABILITY_CLEAR_BODY,
#line 6333
            .lvl = 25,
#line 6334
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6335
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6341
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6342
        .trainerName = _("SAMUEL"),
#line 6343
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6344
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6346
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6347
        .doubleBattle = FALSE,
#line 6348
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6350
            .species = SPECIES_SLOWPOKE,
#line 6350
            .gender = TRAINER_MON_MALE,
#line 6350
            .heldItem = ITEM_LIFE_ORB,
#line 6354
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6351
            .ability = ABILITY_REGENERATOR,
#line 6352
            .lvl = 44,
#line 6353
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6355
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6360
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6360
            .heldItem = ITEM_ROCKY_HELMET,
#line 6363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6361
            .ability = ABILITY_REGENERATOR,
#line 6363
            .lvl = 100,
#line 6362
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6363
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6368
            .species = SPECIES_GLIGAR,
#line 6368
            .gender = TRAINER_MON_FEMALE,
#line 6368
            .heldItem = ITEM_RAZOR_FANG,
#line 6372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6369
            .ability = ABILITY_HYPER_CUTTER,
#line 6370
            .lvl = 44,
#line 6371
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6373
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6378
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6378
            .heldItem = ITEM_ASSAULT_VEST,
#line 6382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6379
            .ability = ABILITY_CLEAR_BODY,
#line 6380
            .lvl = 44,
#line 6381
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6382
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6387
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6388
        .trainerName = _("SAMUEL"),
#line 6389
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6390
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6392
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6393
        .doubleBattle = FALSE,
#line 6394
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6396
            .species = SPECIES_SLOWPOKE,
#line 6396
            .gender = TRAINER_MON_MALE,
#line 6400
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6397
            .ability = ABILITY_REGENERATOR,
#line 6398
            .lvl = 5,
#line 6399
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6401
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6405
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6406
        .trainerName = _("SAMUEL"),
#line 6407
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6408
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6410
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6411
        .doubleBattle = FALSE,
#line 6412
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6414
            .species = SPECIES_SLOWPOKE,
#line 6414
            .gender = TRAINER_MON_MALE,
#line 6414
            .heldItem = ITEM_FIGY_BERRY,
#line 6418
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6415
            .ability = ABILITY_REGENERATOR,
#line 6416
            .lvl = 24,
#line 6417
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6419
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6424
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6424
            .heldItem = ITEM_LUM_BERRY,
#line 6428
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6425
            .ability = ABILITY_REGENERATOR,
#line 6426
            .lvl = 24,
#line 6427
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6429
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6434
            .species = SPECIES_GLIGAR,
#line 6434
            .gender = TRAINER_MON_FEMALE,
#line 6434
            .heldItem = ITEM_RAZOR_FANG,
#line 6438
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6435
            .ability = ABILITY_HYPER_CUTTER,
#line 6436
            .lvl = 24,
#line 6437
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6439
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6445
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6446
        .trainerName = _("SAMUEL"),
#line 6447
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6448
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6450
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6451
        .doubleBattle = FALSE,
#line 6452
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6454
            .species = SPECIES_SLOWPOKE,
#line 6454
            .gender = TRAINER_MON_MALE,
#line 6454
            .heldItem = ITEM_LIFE_ORB,
#line 6458
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6455
            .ability = ABILITY_REGENERATOR,
#line 6456
            .lvl = 44,
#line 6457
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6459
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6464
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6464
            .heldItem = ITEM_ROCKY_HELMET,
#line 6467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6465
            .ability = ABILITY_REGENERATOR,
#line 6467
            .lvl = 100,
#line 6466
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6467
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6472
            .species = SPECIES_GLIGAR,
#line 6472
            .gender = TRAINER_MON_FEMALE,
#line 6472
            .heldItem = ITEM_RAZOR_FANG,
#line 6476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6473
            .ability = ABILITY_HYPER_CUTTER,
#line 6474
            .lvl = 44,
#line 6475
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6477
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6482
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6482
            .heldItem = ITEM_ASSAULT_VEST,
#line 6486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6483
            .ability = ABILITY_CLEAR_BODY,
#line 6484
            .lvl = 44,
#line 6485
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6486
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6491
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6492
        .trainerName = _("MAY"),
#line 6493
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6494
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6495
F_TRAINER_FEMALE | 
#line 6496
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6497
        .doubleBattle = FALSE,
#line 6498
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6500
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6501
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6504
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6505
        .trainerName = _("MAY"),
#line 6506
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6507
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6508
F_TRAINER_FEMALE | 
#line 6509
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6510
        .doubleBattle = FALSE,
#line 6511
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6513
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6515
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6514
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6517
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6519
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6518
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6521
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6523
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6522
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6525
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6526
        .trainerName = _("MAY"),
#line 6527
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6528
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6529
F_TRAINER_FEMALE | 
#line 6530
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6531
        .doubleBattle = FALSE,
#line 6532
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6534
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6536
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6535
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6538
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6540
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6539
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6542
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6544
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6543
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6546
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6547
        .trainerName = _("MAY"),
#line 6548
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6549
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6550
F_TRAINER_FEMALE | 
#line 6551
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6552
        .doubleBattle = FALSE,
#line 6553
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6555
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6556
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6559
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6560
        .trainerName = _("MAY"),
#line 6561
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6562
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6563
F_TRAINER_FEMALE | 
#line 6564
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6565
        .doubleBattle = FALSE,
#line 6566
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6568
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6570
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6569
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6572
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6574
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6573
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6576
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6577
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6580
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6581
        .trainerName = _("MAY"),
#line 6582
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6583
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6584
F_TRAINER_FEMALE | 
#line 6585
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6586
        .doubleBattle = FALSE,
#line 6587
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6589
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6591
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6590
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6593
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6595
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6594
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6597
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6599
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6598
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6601
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6602
        .trainerName = _("MAY"),
#line 6603
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6604
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6605
F_TRAINER_FEMALE | 
#line 6606
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6607
        .doubleBattle = FALSE,
#line 6608
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6610
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6611
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6614
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6615
        .trainerName = _("MAY"),
#line 6616
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6617
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6618
F_TRAINER_FEMALE | 
#line 6619
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6620
        .doubleBattle = FALSE,
#line 6621
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6623
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6625
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6624
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6627
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6629
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6628
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6631
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6633
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6632
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6635
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6636
        .trainerName = _("MAY"),
#line 6637
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6638
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6639
F_TRAINER_FEMALE | 
#line 6640
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6641
        .doubleBattle = FALSE,
#line 6642
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6644
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6645
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6648
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6649
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6652
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6654
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6653
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6656
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6657
        .trainerName = _("ISAAC"),
#line 6658
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6659
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6661
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6662
        .doubleBattle = FALSE,
#line 6663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6665
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6666
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6669
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6670
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6673
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6674
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6677
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6678
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6681
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6682
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6685
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6686
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6689
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6690
        .trainerName = _("DAVIS"),
#line 6691
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6692
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6694
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6695
        .doubleBattle = FALSE,
#line 6696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6698
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6699
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6702
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6703
        .trainerName = _("MITCHELL"),
#line 6704
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6705
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6707
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6708
        .doubleBattle = FALSE,
#line 6709
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6711
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6712
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6715
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6716
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6719
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6720
        .trainerName = _("LYDIA"),
#line 6721
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6722
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6723
F_TRAINER_FEMALE | 
#line 6724
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6725
        .doubleBattle = FALSE,
#line 6726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6728
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6729
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6732
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6733
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6736
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6737
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6740
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6741
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6744
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6745
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6748
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6749
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6752
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6753
        .trainerName = _("HALLE"),
#line 6754
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6755
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6756
F_TRAINER_FEMALE | 
#line 6757
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6758
        .items = { ITEM_FULL_RESTORE },
#line 6759
        .doubleBattle = FALSE,
#line 6760
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6762
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6763
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6766
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6767
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6770
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6771
        .trainerName = _("GARRISON"),
#line 6772
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6773
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6775
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6776
        .doubleBattle = FALSE,
#line 6777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6779
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6780
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6783
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6784
        .trainerName = _("JACKSON"),
#line 6785
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6786
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6788
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6789
        .items = { ITEM_FULL_RESTORE },
#line 6790
        .doubleBattle = FALSE,
#line 6791
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6793
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6795
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6794
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6798
        .trainerName = _("LORENZO"),
#line 6799
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6800
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6802
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6803
        .items = { ITEM_FULL_RESTORE },
#line 6804
        .doubleBattle = FALSE,
#line 6805
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6807
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6809
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6808
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6811
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6813
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6812
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6815
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6816
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6819
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6820
        .trainerName = _("SEBASTIAN"),
#line 6821
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6822
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6824
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6825
        .items = { ITEM_FULL_RESTORE },
#line 6826
        .doubleBattle = FALSE,
#line 6827
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6829
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6831
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6830
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6833
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6834
        .trainerName = _("CATHERINE"),
#line 6835
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6836
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6837
F_TRAINER_FEMALE | 
#line 6838
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6839
        .items = { ITEM_FULL_RESTORE },
#line 6840
        .doubleBattle = FALSE,
#line 6841
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6843
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6845
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6844
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6847
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6849
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6848
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6851
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6852
        .trainerName = _("JENNA"),
#line 6853
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6854
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6855
F_TRAINER_FEMALE | 
#line 6856
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6857
        .items = { ITEM_FULL_RESTORE },
#line 6858
        .doubleBattle = FALSE,
#line 6859
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6861
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6863
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6862
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6865
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6867
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6866
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6869
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6871
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6870
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6873
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6874
        .trainerName = _("SOPHIA"),
#line 6875
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6876
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6877
F_TRAINER_FEMALE | 
#line 6878
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6879
        .items = { ITEM_FULL_RESTORE },
#line 6880
        .doubleBattle = FALSE,
#line 6881
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6883
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6885
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6884
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6887
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6889
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6888
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6891
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6892
        .trainerName = _("JULIO"),
#line 6893
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6894
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6896
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6897
        .doubleBattle = FALSE,
#line 6898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6900
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6901
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6904
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6905
        .trainerName = _("GRUNT"),
#line 6906
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6907
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6909
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6910
        .doubleBattle = FALSE,
#line 6911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6913
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6914
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6917
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6919
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6918
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6921
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6922
        .trainerName = _("GRUNT"),
#line 6923
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6924
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6925
F_TRAINER_FEMALE | 
#line 6926
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6927
        .doubleBattle = FALSE,
#line 6928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6930
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6931
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6934
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6935
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6938
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6939
        .trainerName = _("GRUNT"),
#line 6940
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6941
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6942
F_TRAINER_FEMALE | 
#line 6943
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6944
        .doubleBattle = FALSE,
#line 6945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6947
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6948
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6951
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6952
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6955
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6956
        .trainerName = _("GRUNT"),
#line 6957
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6958
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6960
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6961
        .doubleBattle = FALSE,
#line 6962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6964
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6966
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6965
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6968
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6970
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6969
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6972
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6973
        .trainerName = _("MARC"),
#line 6974
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6975
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6977
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6978
        .doubleBattle = FALSE,
#line 6979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6981
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6983
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6982
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6985
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6987
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6986
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6989
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6990
        .trainerName = _("BRENDEN"),
#line 6991
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6992
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6994
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6995
        .doubleBattle = FALSE,
#line 6996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6998
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7000
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6999
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7002
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7003
        .trainerName = _("LILITH"),
#line 7004
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7005
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7006
F_TRAINER_FEMALE | 
#line 7007
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7008
        .doubleBattle = FALSE,
#line 7009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7011
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7012
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7015
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7016
        .trainerName = _("CRISTIAN"),
#line 7017
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7018
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7020
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7021
        .doubleBattle = FALSE,
#line 7022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7024
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7025
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7028
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7029
        .trainerName = _("SYLVIA"),
#line 7030
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7031
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7032
F_TRAINER_FEMALE | 
#line 7033
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7034
        .doubleBattle = FALSE,
#line 7035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7037
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7039
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7038
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7041
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7042
        .trainerName = _("LEONARDO"),
#line 7043
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7044
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7046
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7047
        .doubleBattle = FALSE,
#line 7048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7050
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7051
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7054
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7055
        .trainerName = _("ATHENA"),
#line 7056
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7057
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7058
F_TRAINER_FEMALE | 
#line 7059
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7060
        .items = { ITEM_HYPER_POTION },
#line 7061
        .doubleBattle = FALSE,
#line 7062
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7064
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7066
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7065
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7068
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7070
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7069
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7073
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7074
        .trainerName = _("HARRISON"),
#line 7075
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7076
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7078
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7079
        .doubleBattle = FALSE,
#line 7080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7082
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7083
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7086
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7087
        .trainerName = _("GRUNT"),
#line 7088
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7089
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7091
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7092
        .doubleBattle = FALSE,
#line 7093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7095
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7096
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7099
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7100
        .trainerName = _("CLARENCE"),
#line 7101
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7102
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7104
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7105
        .doubleBattle = FALSE,
#line 7106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7108
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7109
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7112
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7113
        .trainerName = _("TERRY"),
#line 7114
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7115
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7116
F_TRAINER_FEMALE | 
#line 7117
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7118
        .doubleBattle = FALSE,
#line 7119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7121
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7122
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7125
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7126
        .trainerName = _("NATE"),
#line 7127
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7128
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7130
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7131
        .doubleBattle = FALSE,
#line 7132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7134
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7136
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7135
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7138
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7139
        .trainerName = _("KATHLEEN"),
#line 7140
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7141
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7142
F_TRAINER_FEMALE | 
#line 7143
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7144
        .doubleBattle = FALSE,
#line 7145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7147
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7149
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7148
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7151
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7152
        .trainerName = _("CLIFFORD"),
#line 7153
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7154
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7156
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7157
        .doubleBattle = FALSE,
#line 7158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7160
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7161
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7164
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7165
        .trainerName = _("NICHOLAS"),
#line 7166
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7167
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7169
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7170
        .doubleBattle = FALSE,
#line 7171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7173
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7174
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7177
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7178
        .trainerName = _("GRUNT"),
#line 7179
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7180
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7181
F_TRAINER_FEMALE | 
#line 7182
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7183
        .doubleBattle = FALSE,
#line 7184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7186
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7187
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7190
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7191
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7194
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7195
        .trainerName = _("GRUNT"),
#line 7196
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7197
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7199
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7200
        .doubleBattle = FALSE,
#line 7201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7203
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7204
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7207
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7208
        .trainerName = _("GRUNT"),
#line 7209
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7210
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7212
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7213
        .doubleBattle = FALSE,
#line 7214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7216
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7217
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7220
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7221
        .trainerName = _("GRUNT"),
#line 7222
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7223
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7225
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7226
        .doubleBattle = FALSE,
#line 7227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7229
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7230
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7233
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7234
        .trainerName = _("GRUNT"),
#line 7235
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7236
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7238
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7239
        .doubleBattle = FALSE,
#line 7240
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7242
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7243
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7246
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7247
        .trainerName = _("MACEY"),
#line 7248
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7249
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7250
F_TRAINER_FEMALE | 
#line 7251
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7252
        .doubleBattle = FALSE,
#line 7253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7255
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7256
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7259
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7260
        .trainerName = _("SAMUEL"),
#line 7261
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7262
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7264
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7265
        .doubleBattle = FALSE,
#line 7266
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7268
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7268
            .heldItem = ITEM_RAZOR_FANG,
#line 7272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7269
            .ability = ABILITY_HYPER_CUTTER,
#line 7270
            .lvl = 16,
#line 7271
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7272
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7277
            .species = SPECIES_SLOWPOKE,
#line 7277
            .gender = TRAINER_MON_MALE,
#line 7281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7278
            .ability = ABILITY_REGENERATOR,
#line 7279
            .lvl = 16,
#line 7280
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7281
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7286
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7290
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7287
            .ability = ABILITY_REGENERATOR,
#line 7288
            .lvl = 16,
#line 7289
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7290
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7295
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7296
        .trainerName = _("SAMUEL"),
#line 7297
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7298
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7300
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7301
        .doubleBattle = FALSE,
#line 7302
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7304
            .species = SPECIES_SLOWPOKE,
#line 7304
            .gender = TRAINER_MON_MALE,
#line 7308
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7305
            .ability = ABILITY_REGENERATOR,
#line 7306
            .lvl = 16,
#line 7307
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7309
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7314
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7315
            .ability = ABILITY_REGENERATOR,
#line 7316
            .lvl = 16,
#line 7317
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7318
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7325
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7326
        .trainerName = _("PAXTON"),
#line 7327
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7328
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7330
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7331
        .doubleBattle = FALSE,
#line 7332
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7334
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7335
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7338
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7339
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7342
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7343
        .trainerName = _("ISABELLA"),
#line 7344
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7345
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7346
F_TRAINER_FEMALE | 
#line 7347
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7348
        .doubleBattle = FALSE,
#line 7349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7351
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7352
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7355
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7356
        .trainerName = _("GRUNT"),
#line 7357
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7358
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7359
F_TRAINER_FEMALE | 
#line 7360
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7361
        .doubleBattle = FALSE,
#line 7362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7364
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7365
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7368
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7369
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7372
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7373
        .trainerName = _("TABITHA"),
#line 7374
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7375
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7377
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7378
        .doubleBattle = FALSE,
#line 7379
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7381
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7384
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7382
            .ability = ABILITY_DROUGHT,
#line 7383
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7385
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7390
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .heldItem = ITEM_LUM_BERRY,
#line 7393
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7391
            .ability = ABILITY_LEVITATE,
#line 7392
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7394
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7398
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7398
            .heldItem = ITEM_SITRUS_BERRY,
#line 7401
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7399
            .ability = ABILITY_LEVITATE,
#line 7400
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7402
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7406
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7406
            .heldItem = ITEM_LUM_BERRY,
#line 7409
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7407
            .ability = ABILITY_OWN_TEMPO,
#line 7408
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7410
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7415
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7416
        .trainerName = _("JONATHAN"),
#line 7417
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7418
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7420
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7421
        .items = { ITEM_HYPER_POTION },
#line 7422
        .doubleBattle = FALSE,
#line 7423
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7425
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7426
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7429
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7430
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7433
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7434
        .trainerName = _("SAMUEL"),
#line 7435
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7436
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7438
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7439
        .doubleBattle = FALSE,
#line 7440
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7442
            .species = SPECIES_SLOWPOKE,
#line 7442
            .gender = TRAINER_MON_MALE,
#line 7446
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7443
            .ability = ABILITY_REGENERATOR,
#line 7444
            .lvl = 16,
#line 7445
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7447
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7452
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7453
            .ability = ABILITY_REGENERATOR,
#line 7454
            .lvl = 16,
#line 7455
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7456
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7463
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7464
        .trainerName = _("MAY"),
#line 7465
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7466
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7467
F_TRAINER_FEMALE | 
#line 7468
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7469
        .doubleBattle = FALSE,
#line 7470
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7472
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7474
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7473
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7476
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7478
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7477
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7480
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7481
        .trainerName = _("MAXIE"),
#line 7482
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7483
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7485
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7486
        .doubleBattle = FALSE,
#line 7487
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7489
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7489
            .heldItem = ITEM_IRON_BALL,
#line 7492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7490
            .ability = ABILITY_HEAVY_METAL,
#line 7491
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7492
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7497
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7497
            .heldItem = ITEM_SHARP_BEAK,
#line 7500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7498
            .ability = ABILITY_INNER_FOCUS,
#line 7499
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7500
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7505
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7505
            .heldItem = ITEM_MUSCLE_BAND,
#line 7508
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7506
            .ability = ABILITY_IMMUNITY,
#line 7507
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7508
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7513
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7513
            .heldItem = ITEM_EXPERT_BELT,
#line 7516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7514
            .ability = ABILITY_UNNERVE,
#line 7515
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7516
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7521
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7521
            .heldItem = ITEM_ROCKY_HELMET,
#line 7524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7522
            .ability = ABILITY_ROCK_HEAD,
#line 7523
            .lvl = 50,
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
                MOVE_LEER,
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
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
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
                MOVE_ABSORB,
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
#line 7685
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7686
        .trainerName = _("ANDREA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7694
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7696
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7695
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7698
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7699
        .trainerName = _("CRISSY"),
#line 7700
        .trainerClass = TRAINER_CLASS_LASS,
#line 7701
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7702
F_TRAINER_FEMALE | 
#line 7703
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7704
        .doubleBattle = FALSE,
#line 7705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7707
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7708
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7711
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7713
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7712
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7715
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7716
        .trainerName = _("RICK"),
#line 7717
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7718
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7720
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7721
        .doubleBattle = FALSE,
#line 7722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7724
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7725
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7728
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7729
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7732
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7733
        .trainerName = _("LYLE"),
#line 7734
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7735
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7737
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7738
        .doubleBattle = FALSE,
#line 7739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7741
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7742
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7745
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7746
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7749
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7750
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7753
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7754
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7757
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 7758
        .trainerName = _("JOSE"),
#line 7759
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7760
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7762
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7763
        .doubleBattle = FALSE,
#line 7764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7766
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7767
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7770
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7772
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7771
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7774
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7775
        .trainerName = _("DOUG"),
#line 7776
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7777
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7779
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7780
        .doubleBattle = FALSE,
#line 7781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7783
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7784
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7787
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7788
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7791
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7792
        .trainerName = _("GREG"),
#line 7793
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7794
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7796
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7797
        .doubleBattle = FALSE,
#line 7798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7800
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7801
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7804
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7805
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7808
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7809
        .trainerName = _("KENT"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7817
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7818
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7821
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7822
        .trainerName = _("JAMES"),
#line 7823
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7824
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7826
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7827
        .doubleBattle = FALSE,
#line 7828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7830
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7831
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7834
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7835
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7838
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7839
        .trainerName = _("BRICE"),
#line 7840
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7841
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7843
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7844
        .doubleBattle = FALSE,
#line 7845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7847
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7848
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7851
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7852
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7855
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7856
        .trainerName = _("TRENT"),
#line 7857
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7858
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7860
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7861
        .doubleBattle = FALSE,
#line 7862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7864
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7865
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7868
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7869
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7872
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7873
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7876
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7877
        .trainerName = _("LENNY"),
#line 7878
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7879
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7881
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7882
        .doubleBattle = FALSE,
#line 7883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7885
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7886
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7889
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7890
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7893
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7894
        .trainerName = _("LUCAS"),
#line 7895
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7896
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7898
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7899
        .doubleBattle = FALSE,
#line 7900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7902
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7903
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7906
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7907
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7910
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7911
        .trainerName = _("ALAN"),
#line 7912
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7913
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7915
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7916
        .doubleBattle = FALSE,
#line 7917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7919
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7920
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7923
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7924
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7927
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7928
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7931
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7932
        .trainerName = _("CLARK"),
#line 7933
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7934
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7936
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7937
        .doubleBattle = FALSE,
#line 7938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7940
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7941
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7944
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7945
        .trainerName = _("ERIC"),
#line 7946
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7947
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7949
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7950
        .doubleBattle = FALSE,
#line 7951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7953
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7954
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7957
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7958
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7961
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7962
        .trainerName = _("MIKE"),
#line 7963
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7964
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7966
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7967
        .doubleBattle = FALSE,
#line 7968
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7970
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7971
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7974
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7975
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7978
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7979
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7982
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7983
        .trainerName = _("DEZ & LUKE"),
#line 7984
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7985
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7987
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7988
        .doubleBattle = TRUE,
#line 7989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7991
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7993
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7992
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7995
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7996
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7999
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8000
        .trainerName = _("LEA & JED"),
#line 8001
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8002
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8004
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8005
        .doubleBattle = TRUE,
#line 8006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8008
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8009
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8012
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8013
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8016
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8017
        .trainerName = _("KIRA & DAN"),
#line 8018
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8019
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8021
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8022
        .doubleBattle = TRUE,
#line 8023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8025
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8026
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8029
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8030
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8033
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8034
        .trainerName = _("JOHANNA"),
#line 8035
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8036
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8037
F_TRAINER_FEMALE | 
#line 8038
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8039
        .doubleBattle = FALSE,
#line 8040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8042
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8043
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8046
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8047
        .trainerName = _("GERALD"),
#line 8048
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8049
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8051
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8052
        .items = { ITEM_HYPER_POTION },
#line 8053
        .doubleBattle = FALSE,
#line 8054
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8056
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8057
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8061
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8062
        .trainerName = _("VIVIAN"),
#line 8063
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8064
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8065
F_TRAINER_FEMALE | 
#line 8066
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8067
        .doubleBattle = FALSE,
#line 8068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8070
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8071
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8074
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8076
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8075
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8078
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8079
        .trainerName = _("DANIELLE"),
#line 8080
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8081
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8082
F_TRAINER_FEMALE | 
#line 8083
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8084
        .doubleBattle = FALSE,
#line 8085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8087
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8089
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8088
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8091
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8092
        .trainerName = _("HIDEO"),
#line 8093
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8094
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8096
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8097
        .doubleBattle = FALSE,
#line 8098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8100
            .species = SPECIES_LUCARIO,
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
            .species = SPECIES_GOTHORITA,
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
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8109
        .trainerName = _("KEIGO"),
#line 8110
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8111
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8113
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8114
        .doubleBattle = FALSE,
#line 8115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8117
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8118
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8121
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8122
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8125
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8126
        .trainerName = _("RILEY"),
#line 8127
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8128
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8130
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8131
        .doubleBattle = FALSE,
#line 8132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8134
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8135
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8138
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8139
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8142
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8143
        .trainerName = _("FLINT"),
#line 8144
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8145
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8147
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8148
        .doubleBattle = FALSE,
#line 8149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8151
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8153
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8152
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8155
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8157
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8156
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8159
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8160
        .trainerName = _("ASHLEY"),
#line 8161
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8162
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8163
F_TRAINER_FEMALE | 
#line 8164
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8165
        .doubleBattle = FALSE,
#line 8166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8168
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8170
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8169
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8172
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8174
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8173
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8176
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8178
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8177
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8180
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8181
        .trainerName = _("WALLY"),
#line 8182
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8183
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8185
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8186
        .doubleBattle = FALSE,
#line 8187
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8189
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8190
            .ability = ABILITY_SAND_STREAM,
#line 8191
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8192
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8194
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8194
            .heldItem = ITEM_SHELL_BELL,
#line 8198
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8195
            .ability = ABILITY_STURDY,
#line 8196
            .lvl = 1,
#line 8197
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8199
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8201
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8202
        .trainerName = _("SAMUEL"),
#line 8203
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8204
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8206
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8207
        .doubleBattle = TRUE,
#line 8208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8210
            .species = SPECIES_SLOWKING,
#line 8210
            .gender = TRAINER_MON_MALE,
#line 8210
            .heldItem = ITEM_LIFE_ORB,
#line 8214
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8211
            .ability = ABILITY_REGENERATOR,
#line 8212
            .lvl = 54,
#line 8213
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8215
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8220
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8220
            .heldItem = ITEM_ROCKY_HELMET,
#line 8224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8221
            .ability = ABILITY_REGENERATOR,
#line 8222
            .lvl = 54,
#line 8223
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8224
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8229
            .species = SPECIES_GLISCOR,
#line 8229
            .gender = TRAINER_MON_FEMALE,
#line 8229
            .heldItem = ITEM_TOXIC_ORB,
#line 8233
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8230
            .ability = ABILITY_POISON_HEAL,
#line 8231
            .lvl = 54,
#line 8232
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8234
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8239
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8239
            .heldItem = ITEM_ASSAULT_VEST,
#line 8243
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8240
            .ability = ABILITY_CLEAR_BODY,
#line 8241
            .lvl = 54,
#line 8242
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8244
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8249
            .species = SPECIES_HONCHKROW,
#line 8249
            .gender = TRAINER_MON_MALE,
#line 8249
            .heldItem = ITEM_FOCUS_SASH,
#line 8253
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8250
            .ability = ABILITY_MOXIE,
#line 8251
            .lvl = 54,
#line 8252
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8254
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8260
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8261
        .trainerName = _("SAMUEL"),
#line 8262
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8263
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8265
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8266
        .doubleBattle = FALSE,
#line 8267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8269
            .species = SPECIES_SLOWKING,
#line 8269
            .gender = TRAINER_MON_MALE,
#line 8269
            .heldItem = ITEM_LIFE_ORB,
#line 8273
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8270
            .ability = ABILITY_REGENERATOR,
#line 8271
            .lvl = 54,
#line 8272
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8274
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8279
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8279
            .heldItem = ITEM_ROCKY_HELMET,
#line 8283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8280
            .ability = ABILITY_REGENERATOR,
#line 8281
            .lvl = 54,
#line 8282
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8283
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8288
            .species = SPECIES_GLISCOR,
#line 8288
            .gender = TRAINER_MON_FEMALE,
#line 8288
            .heldItem = ITEM_TOXIC_ORB,
#line 8292
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8289
            .ability = ABILITY_POISON_HEAL,
#line 8290
            .lvl = 54,
#line 8291
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8293
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8298
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8298
            .heldItem = ITEM_ASSAULT_VEST,
#line 8302
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8299
            .ability = ABILITY_CLEAR_BODY,
#line 8300
            .lvl = 54,
#line 8301
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8303
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8308
            .species = SPECIES_HONCHKROW,
#line 8308
            .gender = TRAINER_MON_MALE,
#line 8308
            .heldItem = ITEM_FOCUS_SASH,
#line 8312
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8309
            .ability = ABILITY_MOXIE,
#line 8310
            .lvl = 54,
#line 8311
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8313
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8319
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8320
        .trainerName = _("SAMUEL"),
#line 8321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8322
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8325
        .doubleBattle = FALSE,
#line 8326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8328
            .species = SPECIES_SLOWKING,
#line 8328
            .gender = TRAINER_MON_MALE,
#line 8328
            .heldItem = ITEM_LIFE_ORB,
#line 8332
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8329
            .ability = ABILITY_REGENERATOR,
#line 8330
            .lvl = 54,
#line 8331
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8333
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8338
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8338
            .heldItem = ITEM_ROCKY_HELMET,
#line 8342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8339
            .ability = ABILITY_REGENERATOR,
#line 8340
            .lvl = 54,
#line 8341
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8342
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8347
            .species = SPECIES_GLISCOR,
#line 8347
            .gender = TRAINER_MON_FEMALE,
#line 8347
            .heldItem = ITEM_TOXIC_ORB,
#line 8351
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8348
            .ability = ABILITY_POISON_HEAL,
#line 8349
            .lvl = 54,
#line 8350
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8352
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8357
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8357
            .heldItem = ITEM_ASSAULT_VEST,
#line 8361
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8358
            .ability = ABILITY_CLEAR_BODY,
#line 8359
            .lvl = 54,
#line 8360
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8362
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8367
            .species = SPECIES_HONCHKROW,
#line 8367
            .gender = TRAINER_MON_MALE,
#line 8367
            .heldItem = ITEM_FOCUS_SASH,
#line 8371
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8368
            .ability = ABILITY_MOXIE,
#line 8369
            .lvl = 54,
#line 8370
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8372
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8378
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8379
        .trainerName = _("MAY"),
#line 8380
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8381
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8382
F_TRAINER_FEMALE | 
#line 8383
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8384
        .doubleBattle = FALSE,
#line 8385
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8387
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8389
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8388
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8391
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8393
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8392
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8395
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8397
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8396
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8399
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8401
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8400
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8403
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8404
        .trainerName = _("MAY"),
#line 8405
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8406
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8407
F_TRAINER_FEMALE | 
#line 8408
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8409
        .doubleBattle = FALSE,
#line 8410
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8412
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8414
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8413
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8416
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8417
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8420
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8422
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8421
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8424
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8425
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8428
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8429
        .trainerName = _("MAY"),
#line 8430
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8431
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8432
F_TRAINER_FEMALE | 
#line 8433
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8434
        .doubleBattle = FALSE,
#line 8435
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8437
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8439
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8438
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8441
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8443
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8442
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8445
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8447
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8446
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8449
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8451
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8450
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8453
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8454
        .trainerName = _("JONAH"),
#line 8455
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8456
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8458
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8459
        .doubleBattle = FALSE,
#line 8460
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8462
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8464
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8463
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8466
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8467
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8470
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8471
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8474
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8475
        .trainerName = _("HENRY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8483
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8484
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8487
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8488
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8491
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8492
        .trainerName = _("ROGER"),
#line 8493
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8494
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8496
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8497
        .doubleBattle = FALSE,
#line 8498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8500
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8501
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8504
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8505
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8508
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8509
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8512
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8513
        .trainerName = _("ALEXA"),
#line 8514
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8515
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8516
F_TRAINER_FEMALE | 
#line 8517
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8518
        .items = { ITEM_FULL_RESTORE },
#line 8519
        .doubleBattle = FALSE,
#line 8520
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8522
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8523
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8526
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8528
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8527
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8530
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8531
        .trainerName = _("RUBEN"),
#line 8532
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8533
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8535
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8536
        .items = { ITEM_HYPER_POTION },
#line 8537
        .doubleBattle = FALSE,
#line 8538
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8540
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8542
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8541
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8544
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8545
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8548
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8549
        .trainerName = _("KOJI"),
#line 8550
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8551
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8553
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8554
        .doubleBattle = FALSE,
#line 8555
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8557
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8558
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8561
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8562
        .trainerName = _("WAYNE"),
#line 8563
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8564
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8566
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8567
        .doubleBattle = FALSE,
#line 8568
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8570
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8571
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8574
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8575
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8578
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8579
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8582
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8583
        .trainerName = _("AIDAN"),
#line 8584
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8585
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8587
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8588
        .doubleBattle = FALSE,
#line 8589
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8591
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8592
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8595
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8596
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8599
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8600
        .trainerName = _("REED"),
#line 8601
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8602
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8604
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8605
        .doubleBattle = FALSE,
#line 8606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8608
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8609
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8612
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8613
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8616
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8617
        .trainerName = _("TISHA"),
#line 8618
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8619
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8620
F_TRAINER_FEMALE | 
#line 8621
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8622
        .doubleBattle = FALSE,
#line 8623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8625
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8626
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8629
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8630
        .trainerName = _("TORI & TIA"),
#line 8631
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8632
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8634
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8635
        .doubleBattle = TRUE,
#line 8636
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8638
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8639
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8642
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8643
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8646
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8647
        .trainerName = _("KIM & IRIS"),
#line 8648
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8649
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8651
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8652
        .doubleBattle = TRUE,
#line 8653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8655
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8656
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8659
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8660
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8663
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8664
        .trainerName = _("TYRA & IVY"),
#line 8665
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8666
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8668
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8669
        .doubleBattle = TRUE,
#line 8670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8672
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8673
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8676
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8677
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8681
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8682
        .trainerName = _("MEL & PAUL"),
#line 8683
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8684
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8686
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8687
        .doubleBattle = TRUE,
#line 8688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8690
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8691
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8694
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8695
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8699
        .trainerName = _("JOHN & JAY"),
#line 8700
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8701
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8703
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8704
        .doubleBattle = TRUE,
#line 8705
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8709
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8708
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8711
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8713
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8712
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8715
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8716
        .trainerName = _("RELI & IAN"),
#line 8717
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8718
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8720
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8721
        .doubleBattle = TRUE,
#line 8722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8724
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8725
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8728
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8729
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8732
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8733
        .trainerName = _("LILA & ROY"),
#line 8734
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8735
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8737
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8738
        .doubleBattle = TRUE,
#line 8739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8741
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8742
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8745
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8746
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8749
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8750
        .trainerName = _("LISA & RAY"),
#line 8751
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8752
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8754
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8755
        .doubleBattle = TRUE,
#line 8756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8758
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8759
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8762
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8763
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8766
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8767
        .trainerName = _("CHRIS"),
#line 8768
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8769
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8771
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8772
        .doubleBattle = FALSE,
#line 8773
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8775
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8776
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8779
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8780
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8783
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8784
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8787
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8788
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8791
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8792
        .trainerName = _("DAWSON"),
#line 8793
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8794
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8796
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8797
        .doubleBattle = FALSE,
#line 8798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8800
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8800
            .heldItem = ITEM_NUGGET,
#line 8802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8801
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8804
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8805
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8808
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8809
        .trainerName = _("SARAH"),
#line 8810
        .trainerClass = TRAINER_CLASS_LADY,
#line 8811
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8812
F_TRAINER_FEMALE | 
#line 8813
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8814
        .items = { ITEM_FULL_RESTORE },
#line 8815
        .doubleBattle = FALSE,
#line 8816
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8818
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8819
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8822
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8822
            .heldItem = ITEM_NUGGET,
#line 8824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8823
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8826
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8827
        .trainerName = _("DARIAN"),
#line 8828
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8829
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8831
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8832
        .doubleBattle = FALSE,
#line 8833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8835
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8836
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8839
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8840
        .trainerName = _("HAILEY"),
#line 8841
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8842
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8843
F_TRAINER_FEMALE | 
#line 8844
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8845
        .doubleBattle = FALSE,
#line 8846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8848
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8849
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8852
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8853
        .trainerName = _("CHANDLER"),
#line 8854
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8855
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8857
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8858
        .doubleBattle = FALSE,
#line 8859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8861
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8862
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8865
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8866
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8869
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8870
        .trainerName = _("KALEB"),
#line 8871
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8872
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8874
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8875
        .doubleBattle = FALSE,
#line 8876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8878
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8878
            .heldItem = ITEM_ORAN_BERRY,
#line 8880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8879
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8882
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8882
            .heldItem = ITEM_ORAN_BERRY,
#line 8884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8883
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8886
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8887
        .trainerName = _("JOSEPH"),
#line 8888
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8889
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8891
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8892
        .doubleBattle = FALSE,
#line 8893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8895
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8896
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8899
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8900
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8903
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8904
        .trainerName = _("ALYSSA"),
#line 8905
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8906
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8907
F_TRAINER_FEMALE | 
#line 8908
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8909
        .doubleBattle = FALSE,
#line 8910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8912
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8913
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8916
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8917
        .trainerName = _("MARCOS"),
#line 8918
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8919
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8921
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8922
        .doubleBattle = FALSE,
#line 8923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8925
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8927
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8926
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8929
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8930
        .trainerName = _("RHETT"),
#line 8931
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8932
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8934
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8935
        .doubleBattle = FALSE,
#line 8936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8938
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8940
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8939
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8942
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8943
        .trainerName = _("TYRON"),
#line 8944
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8945
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8947
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8948
        .doubleBattle = FALSE,
#line 8949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8951
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8952
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8955
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8956
        .trainerName = _("CELINA"),
#line 8957
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8958
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8959
F_TRAINER_FEMALE | 
#line 8960
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8961
        .doubleBattle = FALSE,
#line 8962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8964
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8965
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8968
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8969
        .trainerName = _("BIANCA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8977
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8978
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8981
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8982
        .trainerName = _("HAYDEN"),
#line 8983
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8984
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8986
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8987
        .doubleBattle = FALSE,
#line 8988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8990
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8991
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8994
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8995
        .trainerName = _("SOPHIE"),
#line 8996
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8997
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8998
F_TRAINER_FEMALE | 
#line 8999
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9000
        .doubleBattle = FALSE,
#line 9001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9003
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9004
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9007
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9009
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9008
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9011
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9012
        .trainerName = _("COBY"),
#line 9013
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9014
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9016
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9017
        .doubleBattle = FALSE,
#line 9018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9020
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9021
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9024
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9026
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9025
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9028
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9029
        .trainerName = _("LAWRENCE"),
#line 9030
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9031
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9033
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9034
        .doubleBattle = FALSE,
#line 9035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9037
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9038
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9041
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9043
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9042
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9045
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9046
        .trainerName = _("WYATT"),
#line 9047
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9048
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9050
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9051
        .doubleBattle = FALSE,
#line 9052
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9054
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9055
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9058
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9059
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9062
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9063
        .trainerName = _("ANGELINA"),
#line 9064
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9065
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9066
F_TRAINER_FEMALE | 
#line 9067
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9068
        .doubleBattle = FALSE,
#line 9069
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9071
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9072
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9075
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9076
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9079
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9080
        .trainerName = _("KAI"),
#line 9081
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9082
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9084
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9085
        .doubleBattle = FALSE,
#line 9086
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9088
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9089
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9092
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9093
        .trainerName = _("CHARLOTTE"),
#line 9094
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9095
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9096
F_TRAINER_FEMALE | 
#line 9097
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9098
        .doubleBattle = FALSE,
#line 9099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9101
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9103
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9102
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9105
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9106
        .trainerName = _("DEANDRE"),
#line 9107
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9108
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9110
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9111
        .doubleBattle = FALSE,
#line 9112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9114
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9116
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9115
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9118
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9119
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9122
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9124
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9123
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9126
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9127
        .trainerName = _("GRUNT"),
#line 9128
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9129
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9131
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9132
        .doubleBattle = FALSE,
#line 9133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9135
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9137
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9136
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9139
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9140
        .trainerName = _("GRUNT"),
#line 9141
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9142
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9144
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9145
        .doubleBattle = FALSE,
#line 9146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9148
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9149
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9152
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9153
        .trainerName = _("GRUNT"),
#line 9154
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9155
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9157
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9158
        .doubleBattle = FALSE,
#line 9159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9161
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9162
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9165
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9166
        .trainerName = _("GRUNT"),
#line 9167
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9168
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9170
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9171
        .doubleBattle = FALSE,
#line 9172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9174
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9175
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9178
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9179
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9182
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9183
        .trainerName = _("GRUNT"),
#line 9184
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9185
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9187
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9188
        .doubleBattle = FALSE,
#line 9189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9191
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9192
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9195
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9196
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9199
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9200
        .trainerName = _("GRUNT"),
#line 9201
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9202
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9204
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9205
        .doubleBattle = FALSE,
#line 9206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9208
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9209
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9212
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9213
        .trainerName = _("GRUNT"),
#line 9214
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9215
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9217
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9218
        .doubleBattle = FALSE,
#line 9219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9221
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9222
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9225
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9226
        .trainerName = _("GRUNT"),
#line 9227
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9228
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9230
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9231
        .doubleBattle = FALSE,
#line 9232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9234
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9235
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9238
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9239
        .trainerName = _("GRUNT"),
#line 9240
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9241
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9243
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9244
        .doubleBattle = FALSE,
#line 9245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9247
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9248
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9251
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9252
        .trainerName = _("GRUNT"),
#line 9253
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9254
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9256
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9257
        .doubleBattle = FALSE,
#line 9258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9260
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9261
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9264
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9265
        .trainerName = _("GRUNT"),
#line 9266
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9267
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9269
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9270
        .doubleBattle = FALSE,
#line 9271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9273
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9274
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9277
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9278
        .trainerName = _("GRUNT"),
#line 9279
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9280
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9282
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9283
        .doubleBattle = FALSE,
#line 9284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9286
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9287
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9290
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9291
        .trainerName = _("GRUNT"),
#line 9292
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9293
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9295
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9296
        .doubleBattle = FALSE,
#line 9297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9299
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9300
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9303
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9304
        .trainerName = _("GRUNT"),
#line 9305
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9306
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9307
F_TRAINER_FEMALE | 
#line 9308
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9309
        .doubleBattle = FALSE,
#line 9310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9312
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9313
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9316
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9317
        .trainerName = _("GRUNT"),
#line 9318
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9319
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9320
F_TRAINER_FEMALE | 
#line 9321
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9322
        .doubleBattle = FALSE,
#line 9323
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9325
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9326
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9329
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9330
        .trainerName = _("GRUNT"),
#line 9331
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9332
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9333
F_TRAINER_FEMALE | 
#line 9334
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9335
        .doubleBattle = FALSE,
#line 9336
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9338
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9339
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9342
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9343
        .trainerName = _("TABITHA"),
#line 9344
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9345
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9347
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9348
        .doubleBattle = FALSE,
#line 9349
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9351
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9354
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9352
            .ability = ABILITY_DROUGHT,
#line 9353
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9355
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9360
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9360
            .heldItem = ITEM_POISON_BARB,
#line 9363
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9361
            .ability = ABILITY_LEVITATE,
#line 9362
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9364
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9369
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .heldItem = ITEM_LIFE_ORB,
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
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9378
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9378
            .heldItem = ITEM_FOCUS_SASH,
#line 9381
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9379
            .ability = ABILITY_OWN_TEMPO,
#line 9380
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9382
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9387
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9388
        .trainerName = _("DARCY"),
#line 9389
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9390
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9391
F_TRAINER_FEMALE | 
#line 9392
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9393
        .items = { ITEM_HYPER_POTION },
#line 9394
        .doubleBattle = FALSE,
#line 9395
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9397
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9398
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9401
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9402
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9405
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9406
        .trainerName = _("MAXIE"),
#line 9407
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9408
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9410
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9411
        .doubleBattle = FALSE,
#line 9412
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9414
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9414
            .heldItem = ITEM_ROCKY_HELMET,
#line 9417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9415
            .ability = ABILITY_ROCK_HEAD,
#line 9416
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9417
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9422
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9422
            .heldItem = ITEM_AIR_BALLOON,
#line 9425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9423
            .ability = ABILITY_HEAVY_METAL,
#line 9424
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9425
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9430
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9430
            .heldItem = ITEM_SHARP_BEAK,
#line 9433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9431
            .ability = ABILITY_INNER_FOCUS,
#line 9432
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9433
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9438
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9439
        .trainerName = _("PETE"),
#line 9440
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9441
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9443
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9444
        .doubleBattle = FALSE,
#line 9445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9447
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9448
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9451
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9452
        .trainerName = _("ISABELLE"),
#line 9453
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9454
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9455
F_TRAINER_FEMALE | 
#line 9456
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9457
        .doubleBattle = FALSE,
#line 9458
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9460
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9461
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9464
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9465
        .trainerName = _("ANDRES"),
#line 9466
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9467
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9469
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9470
        .doubleBattle = FALSE,
#line 9471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9473
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9475
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9474
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9477
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9479
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9478
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9481
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9482
        .trainerName = _("JOSUE"),
#line 9483
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9484
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9486
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9487
        .doubleBattle = FALSE,
#line 9488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9490
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9491
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9494
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9496
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9495
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9498
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9499
        .trainerName = _("CAMRON"),
#line 9500
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9501
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9503
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9504
        .doubleBattle = FALSE,
#line 9505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9507
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9508
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9511
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9512
        .trainerName = _("CORY"),
#line 9513
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9514
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9516
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9517
        .doubleBattle = FALSE,
#line 9518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9520
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9521
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9524
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9525
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9528
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9529
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9532
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9533
        .trainerName = _("CAROLINA"),
#line 9534
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9535
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9536
F_TRAINER_FEMALE | 
#line 9537
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9538
        .items = { ITEM_HYPER_POTION },
#line 9539
        .doubleBattle = FALSE,
#line 9540
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9542
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9543
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9546
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9547
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9550
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9552
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9551
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9554
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9555
        .trainerName = _("ELIJAH"),
#line 9556
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9557
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9559
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9560
        .doubleBattle = FALSE,
#line 9561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9563
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9567
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9568
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9571
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9572
        .trainerName = _("CELIA"),
#line 9573
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9574
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9575
F_TRAINER_FEMALE | 
#line 9576
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9577
        .doubleBattle = FALSE,
#line 9578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9580
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9584
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9585
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9589
        .trainerName = _("BRYAN"),
#line 9590
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9591
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9593
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9594
        .doubleBattle = FALSE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9598
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9601
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9602
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9605
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9606
        .trainerName = _("BRANDEN"),
#line 9607
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9608
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9610
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9611
        .doubleBattle = FALSE,
#line 9612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9614
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9615
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9618
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9619
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9622
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9623
        .trainerName = _("BRYANT"),
#line 9624
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9625
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9627
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9628
        .doubleBattle = FALSE,
#line 9629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9631
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9632
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9635
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9636
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9639
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9640
        .trainerName = _("SHAYLA"),
#line 9641
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9642
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9643
F_TRAINER_FEMALE | 
#line 9644
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9645
        .doubleBattle = FALSE,
#line 9646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9648
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9649
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9652
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9653
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9656
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9657
        .trainerName = _("KYRA"),
#line 9658
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9659
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9660
F_TRAINER_FEMALE | 
#line 9661
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9662
        .doubleBattle = FALSE,
#line 9663
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9665
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9666
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9669
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9670
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9673
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9674
        .trainerName = _("JAIDEN"),
#line 9675
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9676
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9678
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9679
        .doubleBattle = FALSE,
#line 9680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9682
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9683
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9686
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9687
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9690
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9691
        .trainerName = _("ALIX"),
#line 9692
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9693
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9694
F_TRAINER_FEMALE | 
#line 9695
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9696
        .doubleBattle = FALSE,
#line 9697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9699
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9700
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9703
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9704
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9707
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9708
        .trainerName = _("HELENE"),
#line 9709
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9710
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9711
F_TRAINER_FEMALE | 
#line 9712
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9713
        .doubleBattle = FALSE,
#line 9714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9716
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9717
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9720
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9721
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9724
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9725
        .trainerName = _("MARLENE"),
#line 9726
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9727
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9728
F_TRAINER_FEMALE | 
#line 9729
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9730
        .doubleBattle = FALSE,
#line 9731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9733
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9734
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9737
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9738
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9741
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9742
        .trainerName = _("DEVAN"),
#line 9743
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9744
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9746
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9747
        .doubleBattle = FALSE,
#line 9748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9750
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9751
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9754
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9755
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9758
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9759
        .trainerName = _("JOHNSON"),
#line 9760
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9761
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9763
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9764
        .doubleBattle = FALSE,
#line 9765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9767
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9768
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9771
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9772
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9775
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9776
        .trainerName = _("MELINA"),
#line 9777
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9778
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9779
F_TRAINER_FEMALE | 
#line 9780
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9781
        .doubleBattle = FALSE,
#line 9782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9784
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9785
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9788
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9789
        .trainerName = _("BRANDI"),
#line 9790
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9791
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9792
F_TRAINER_FEMALE | 
#line 9793
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9794
        .doubleBattle = FALSE,
#line 9795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9797
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9798
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9801
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9802
        .trainerName = _("AISHA"),
#line 9803
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9804
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9805
F_TRAINER_FEMALE | 
#line 9806
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9807
        .doubleBattle = FALSE,
#line 9808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9810
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9811
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9814
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9815
        .trainerName = _("MAKAYLA"),
#line 9816
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9817
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9818
F_TRAINER_FEMALE | 
#line 9819
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9820
        .items = { ITEM_HYPER_POTION },
#line 9821
        .doubleBattle = FALSE,
#line 9822
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9824
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9825
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9828
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9829
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9832
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9833
        .trainerName = _("FABIAN"),
#line 9834
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9835
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9837
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9838
        .doubleBattle = FALSE,
#line 9839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9841
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9842
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9845
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9846
        .trainerName = _("DAYTON"),
#line 9847
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9848
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9850
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9851
        .doubleBattle = FALSE,
#line 9852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9854
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9855
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9858
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9859
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9862
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9863
        .trainerName = _("RACHEL"),
#line 9864
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9865
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9866
F_TRAINER_FEMALE | 
#line 9867
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9868
        .doubleBattle = FALSE,
#line 9869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9871
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9872
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9875
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9876
        .trainerName = _("LEONEL"),
#line 9877
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9878
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9880
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9881
        .items = { ITEM_HYPER_POTION },
#line 9882
        .doubleBattle = FALSE,
#line 9883
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9885
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9887
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9886
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9889
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9890
        .trainerName = _("CALLIE"),
#line 9891
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9892
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9893
F_TRAINER_FEMALE | 
#line 9894
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9895
        .doubleBattle = FALSE,
#line 9896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9898
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9899
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9902
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9903
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9906
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9907
        .trainerName = _("CALE"),
#line 9908
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9909
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9911
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9912
        .doubleBattle = FALSE,
#line 9913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9915
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9916
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9919
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9920
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9923
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9924
        .trainerName = _("MYLES"),
#line 9925
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9926
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9928
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9929
        .doubleBattle = FALSE,
#line 9930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9932
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9934
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9933
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9936
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9938
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9937
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9940
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9942
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9941
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9944
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9945
        .trainerName = _("PAT"),
#line 9946
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9947
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9948
F_TRAINER_FEMALE | 
#line 9949
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9950
        .doubleBattle = FALSE,
#line 9951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9953
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9955
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9954
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9957
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9958
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9961
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9962
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9966
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 9967
        .trainerName = _("CRISTIN"),
#line 9968
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9969
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9970
F_TRAINER_FEMALE | 
#line 9971
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9972
        .items = { ITEM_HYPER_POTION },
#line 9973
        .doubleBattle = FALSE,
#line 9974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9976
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9978
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9977
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9980
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9982
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9981
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9984
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9985
        .trainerName = _("MAY"),
#line 9986
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9987
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9988
F_TRAINER_FEMALE | 
#line 9989
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9990
        .doubleBattle = FALSE,
#line 9991
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9993
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9995
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9994
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9997
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9999
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9998
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10001
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10002
        .trainerName = _("MAY"),
#line 10003
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10004
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10005
F_TRAINER_FEMALE | 
#line 10006
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10007
        .doubleBattle = FALSE,
#line 10008
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10010
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10011
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10014
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10016
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10015
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10018
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10019
        .trainerName = _("GRUNT"),
#line 10020
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10021
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10023
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10024
        .doubleBattle = FALSE,
#line 10025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10027
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10027
            .heldItem = ITEM_EVIOLITE,
#line 10029
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10028
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10030
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10031
        .trainerName = _("GRUNT"),
#line 10032
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10033
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10035
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10036
        .doubleBattle = FALSE,
#line 10037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10039
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10041
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10040
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10042
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10043
        .trainerName = _("GRUNT"),
#line 10044
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10045
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10047
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10048
        .doubleBattle = FALSE,
#line 10049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10051
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10053
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10052
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10054
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10055
        .trainerName = _("GRUNT"),
#line 10056
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10057
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10059
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10060
        .doubleBattle = FALSE,
#line 10061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10063
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10065
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10064
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10066
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10067
        .trainerName = _("GRUNT"),
#line 10068
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10069
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10071
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10072
        .doubleBattle = FALSE,
#line 10073
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10075
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10076
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10078
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10080
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10079
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10081
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10090
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10092
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10091
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10094
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10095
        .trainerName = _("GRUNT"),
#line 10096
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10097
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10099
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10100
        .doubleBattle = FALSE,
#line 10101
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10103
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10105
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10104
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10106
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10107
        .trainerName = _("GRUNT"),
#line 10108
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10109
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10111
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10112
        .doubleBattle = FALSE,
#line 10113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10115
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10116
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10118
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 10119
        .trainerName = _("GRUNT"),
#line 10120
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10121
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10123
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10124
        .doubleBattle = FALSE,
#line 10125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10127
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10128
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10130
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10131
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10133
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10142
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10143
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10145
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10146
        .trainerName = _("GRUNT"),
#line 10147
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10148
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10150
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10151
        .doubleBattle = FALSE,
#line 10152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10154
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10155
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10157
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10159
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10158
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10160
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
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
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10170
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10172
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10173
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10175
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10176
        .trainerName = _("TATE&LIZA"),
#line 10177
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10178
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10180
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10181
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10182
        .doubleBattle = TRUE,
#line 10183
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10185
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10187
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10186
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10188
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10193
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10195
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10194
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10196
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10201
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10202
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10204
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10209
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10209
            .heldItem = ITEM_CHESTO_BERRY,
#line 10211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10210
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10212
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10217
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10217
            .heldItem = ITEM_CHESTO_BERRY,
#line 10219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10218
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10220
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10225
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10225
            .heldItem = ITEM_SITRUS_BERRY,
#line 10227
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10226
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10228
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10233
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10234
        .trainerName = _("ANGELO"),
#line 10235
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10236
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10238
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10239
        .doubleBattle = FALSE,
#line 10240
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10242
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10244
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10243
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10246
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10248
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10247
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10250
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10251
        .trainerName = _("DARIUS"),
#line 10252
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10253
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10255
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10256
        .doubleBattle = FALSE,
#line 10257
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10259
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10261
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10260
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10263
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10264
        .trainerName = _("STEVEN"),
#line 10265
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10266
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10268
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10269
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10270
        .doubleBattle = FALSE,
#line 10271
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10273
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10274
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10276
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10281
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10283
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10282
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10284
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10289
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10291
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10290
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10292
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10297
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10298
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10300
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10305
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10306
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10308
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10313
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10313
            .heldItem = ITEM_SITRUS_BERRY,
#line 10315
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10314
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10316
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10321
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10322
        .trainerName = _("ANABEL"),
#line 10323
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10324
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10325
F_TRAINER_FEMALE | 
#line 10326
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10327
        .doubleBattle = FALSE,
#line 10328
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10330
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10331
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10334
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10335
        .trainerName = _("TUCKER"),
#line 10336
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10337
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10339
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10340
        .doubleBattle = FALSE,
#line 10341
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10343
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10344
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10347
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10348
        .trainerName = _("SPENSER"),
#line 10349
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10350
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10352
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10353
        .doubleBattle = FALSE,
#line 10354
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10356
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10357
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10360
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10361
        .trainerName = _("GRETA"),
#line 10362
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10363
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10364
F_TRAINER_FEMALE | 
#line 10365
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10366
        .doubleBattle = FALSE,
#line 10367
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10369
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10370
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10373
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10374
        .trainerName = _("GRUNT"),
#line 10375
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10376
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10378
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10379
        .doubleBattle = FALSE,
#line 10380
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10382
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10383
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10386
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10387
        .trainerName = _("GHOSTESS"),
#line 10388
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10389
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10390
F_TRAINER_FEMALE | 
#line 10391
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10392
        .doubleBattle = FALSE,
#line 10393
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10395
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10395
            .heldItem = ITEM_TWISTED_SPOON,
#line 10398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10396
            .ability = ABILITY_THICK_FAT,
#line 10397
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10398
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10403
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10403
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10404
            .ability = ABILITY_WONDER_SKIN,
#line 10405
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10406
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10411
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10411
            .heldItem = ITEM_METRONOME,
#line 10414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10412
            .ability = ABILITY_ROCK_HEAD,
#line 10413
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10414
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10419
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10419
            .heldItem = ITEM_ASSAULT_VEST,
#line 10422
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10420
            .ability = ABILITY_CURSED_BODY,
#line 10421
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10422
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10427
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10428
        .trainerName = _("JORDAN"),
#line 10429
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10430
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10432
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10433
        .doubleBattle = FALSE,
#line 10434
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10436
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10439
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10437
            .ability = ABILITY_CHLOROPHYLL,
#line 10438
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10439
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10444
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10444
            .heldItem = ITEM_EVIOLITE,
#line 10447
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10445
            .ability = ABILITY_PRESSURE,
#line 10446
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10447
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10452
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10452
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10453
            .ability = ABILITY_LIQUID_OOZE,
#line 10454
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10455
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10460
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10460
            .heldItem = ITEM_QUICK_CLAW,
#line 10463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10461
            .ability = ABILITY_OBLIVIOUS,
#line 10462
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10463
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10468
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10468
            .heldItem = ITEM_SHARP_BEAK,
#line 10471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10469
            .ability = ABILITY_INNER_FOCUS,
#line 10470
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10471
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10476
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10477
        .trainerName = _("JORDAN"),
#line 10478
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10479
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10481
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10482
        .doubleBattle = FALSE,
#line 10483
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10485
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10485
            .heldItem = ITEM_WIDE_LENS,
#line 10488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10486
            .ability = ABILITY_CHLOROPHYLL,
#line 10487
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10488
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10493
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10493
            .heldItem = ITEM_LIFE_ORB,
#line 10496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10494
            .ability = ABILITY_PRESSURE,
#line 10495
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10496
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10501
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10501
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10502
            .ability = ABILITY_LIQUID_OOZE,
#line 10503
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10504
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10509
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10509
            .heldItem = ITEM_CHOICE_SPECS,
#line 10512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10510
            .ability = ABILITY_OBLIVIOUS,
#line 10511
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10512
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10517
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10517
            .heldItem = ITEM_SHARP_BEAK,
#line 10520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10518
            .ability = ABILITY_INNER_FOCUS,
#line 10519
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10520
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10525
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10525
            .heldItem = ITEM_ASSAULT_VEST,
#line 10528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10526
            .ability = ABILITY_AIR_LOCK,
#line 10527
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10528
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10533
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10534
        .trainerName = _("GHOSTESS"),
#line 10535
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10536
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10537
F_TRAINER_FEMALE | 
#line 10538
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10539
        .doubleBattle = FALSE,
#line 10540
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10542
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10542
            .heldItem = ITEM_EXPERT_BELT,
#line 10545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10543
            .ability = ABILITY_THICK_FAT,
#line 10544
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10545
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10550
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10550
            .heldItem = ITEM_MUSCLE_BAND,
#line 10553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10551
            .ability = ABILITY_WONDER_SKIN,
#line 10552
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10553
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10558
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10558
            .heldItem = ITEM_WIDE_LENS,
#line 10561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10559
            .ability = ABILITY_INTIMIDATE,
#line 10560
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10561
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10566
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10566
            .heldItem = ITEM_ASSAULT_VEST,
#line 10569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10567
            .ability = ABILITY_CURSED_BODY,
#line 10568
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10569
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10574
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10575
        .trainerName = _("GRUNT"),
#line 10576
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10577
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10579
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10580
        .doubleBattle = FALSE,
#line 10581
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10583
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10585
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10584
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10586
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10587
        .trainerName = _("GRUNT"),
#line 10588
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10589
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10591
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10592
        .doubleBattle = FALSE,
#line 10593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10595
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10596
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10598
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10599
        .trainerName = _("GRUNT"),
#line 10600
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10601
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10603
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10604
        .doubleBattle = FALSE,
#line 10605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10607
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10608
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10610
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10611
        .trainerName = _("GRUNT"),
#line 10612
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10613
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10615
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10616
        .doubleBattle = FALSE,
#line 10617
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10619
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10621
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10620
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10622
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10623
        .trainerName = _("CORY"),
#line 10624
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10625
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10627
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10628
        .doubleBattle = FALSE,
#line 10629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10631
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10632
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10635
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10637
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10636
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10639
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10641
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10640
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10643
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10644
        .trainerName = _("CORY"),
#line 10645
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10646
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10648
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10649
        .doubleBattle = FALSE,
#line 10650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10652
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10654
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10653
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10656
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10658
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10657
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10660
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10662
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10661
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10664
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10665
        .trainerName = _("MARIELA"),
#line 10666
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10667
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10668
F_TRAINER_FEMALE | 
#line 10669
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10670
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10672
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10673
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10676
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10677
        .trainerName = _("ALVARO"),
#line 10678
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10679
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10681
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10682
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10684
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10685
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10688
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10689
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10692
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10693
        .trainerName = _("EVERETT"),
#line 10694
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10695
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10697
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10698
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10700
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10701
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10704
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10705
        .trainerName = _("RED"),
#line 10706
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10707
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10709
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10710
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10712
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10713
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10716
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10717
        .trainerName = _("LEAF"),
#line 10718
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10719
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10720
F_TRAINER_FEMALE | 
#line 10721
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10722
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10724
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10725
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10728
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10729
        .trainerName = _("SAMUEL"),
#line 10730
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10731
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10733
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10734
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10736
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10737
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10740
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10741
        .trainerName = _("MAY"),
#line 10742
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10743
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10744
F_TRAINER_FEMALE | 
#line 10745
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10746
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10748
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10749
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
