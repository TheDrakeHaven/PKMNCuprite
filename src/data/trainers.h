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
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
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
                MOVE_THUNDERBOLT,
                MOVE_QUICK_ATTACK,
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
            .ability = ABILITY_ADAPTABILITY,
#line 615
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 617
                MOVE_RAZOR_SHELL,
                MOVE_CRUNCH,
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
                MOVE_GUNK_SHOT,
                MOVE_DISABLE,
                MOVE_MINIMIZE,
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
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
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
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3032
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_WAVE,
                MOVE_FLAMETHROWER,
                MOVE_ALLURING_VOICE,
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
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 3058
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3058
            .heldItem = ITEM_CHARTI_BERRY,
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
                MOVE_FLAMETHROWER,
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
            .heldItem = ITEM_LEFTOVERS,
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
                MOVE_TOXIC,
                MOVE_BODY_PRESS,
                MOVE_ROCK_TOMB,
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
                MOVE_EARTHQUAKE,
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
                MOVE_TOXIC,
                MOVE_PAIN_SPLIT,
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
                MOVE_ICE_SHARD,
                MOVE_TRIPLE_AXEL,
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
                MOVE_U_TURN,
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
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
    {
#line 3241
        .trainerName = _("ALEC"),
#line 3242
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3243
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3245
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3246
        .doubleBattle = FALSE,
#line 3247
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3249
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3253
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3250
            .ability = ABILITY_STURDY,
#line 3251
            .lvl = 16,
#line 3252
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3254
                MOVE_STEALTH_ROCK,
                MOVE_COPYCAT,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3259
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3263
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3260
            .ability = ABILITY_LEVITATE,
#line 3261
            .lvl = 16,
#line 3262
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3264
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3269
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3269
            .heldItem = ITEM_SALAC_BERRY,
#line 3273
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3270
            .ability = ABILITY_SUCTION_CUPS,
#line 3271
            .lvl = 16,
#line 3272
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3274
                MOVE_ANCIENT_POWER,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 3279
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3279
            .heldItem = ITEM_SALAC_BERRY,
#line 3283
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3280
            .ability = ABILITY_UNNERVE,
#line 3281
            .lvl = 16,
#line 3282
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3284
                MOVE_ROCK_SLIDE,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3289
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3290
        .trainerName = _("GARRETT"),
#line 3291
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3292
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3294
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3295
        .doubleBattle = FALSE,
#line 3296
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3298
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3302
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3299
            .ability = ABILITY_MARVEL_SCALE,
#line 3300
            .lvl = 22,
#line 3301
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3303
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3308
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3312
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3309
            .ability = ABILITY_TORRENT,
#line 3310
            .lvl = 22,
#line 3311
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3313
                MOVE_BUBBLEBEAM,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3318
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3318
            .heldItem = ITEM_SCOPE_LENS,
#line 3322
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3319
            .ability = ABILITY_SKILL_LINK,
#line 3320
            .lvl = 22,
#line 3321
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3323
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3328
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3328
            .heldItem = ITEM_WIDE_LENS,
#line 3332
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3329
            .ability = ABILITY_TORRENT,
#line 3330
            .lvl = 22,
#line 3331
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3333
                MOVE_SAND_TOMB,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3338
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3339
        .trainerName = _("SAM"),
#line 3340
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3341
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3343
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3344
        .doubleBattle = FALSE,
#line 3345
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3347
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3347
            .heldItem = ITEM_METAL_COAT,
#line 3351
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3348
            .ability = ABILITY_MAGNET_PULL,
#line 3349
            .lvl = 32,
#line 3350
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3352
                MOVE_MAGNET_RISE,
                MOVE_THUNDER_SHOCK,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3357
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3357
            .heldItem = ITEM_SILK_SCARF,
#line 3361
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3358
            .ability = ABILITY_DOWNLOAD,
#line 3359
            .lvl = 32,
#line 3360
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3362
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3367
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .heldItem = ITEM_SITRUS_BERRY,
#line 3371
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3368
            .ability = ABILITY_VITAL_SPIRIT,
#line 3370
            .lvl = 32,
#line 3369
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3372
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_SCREECH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3377
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3377
            .heldItem = ITEM_SITRUS_BERRY,
#line 3381
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3378
            .ability = ABILITY_INTIMIDATE,
#line 3380
            .lvl = 32,
#line 3379
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3381
                MOVE_BITE,
                MOVE_VOLT_SWITCH,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3386
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3386
            .heldItem = ITEM_MAGNET,
#line 3390
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3387
            .ability = ABILITY_STATIC,
#line 3388
            .lvl = 32,
#line 3389
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3391
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3396
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3397
        .trainerName = _("JOSE"),
#line 3398
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3399
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3401
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3402
        .doubleBattle = FALSE,
#line 3403
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3405
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3405
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3409
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3406
            .ability = ABILITY_NATURAL_CURE,
#line 3407
            .lvl = 38,
#line 3408
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3410
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3415
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3415
            .heldItem = ITEM_CHARCOAL,
#line 3419
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3416
            .ability = ABILITY_BLAZE,
#line 3417
            .lvl = 38,
#line 3418
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3420
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3425
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3425
            .heldItem = ITEM_ASSAULT_VEST,
#line 3429
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3426
            .ability = ABILITY_LEVITATE,
#line 3427
            .lvl = 38,
#line 3428
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3430
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3435
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3435
            .heldItem = ITEM_ROCKY_HELMET,
#line 3439
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3436
            .ability = ABILITY_MARVEL_SCALE,
#line 3437
            .lvl = 38,
#line 3438
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3440
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3445
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3445
            .heldItem = ITEM_DRAGON_FANG,
#line 3449
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3446
            .ability = ABILITY_SNIPER,
#line 3447
            .lvl = 38,
#line 3448
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3450
                MOVE_SCALE_SHOT,
                MOVE_FLIP_TURN,
                MOVE_DRAGON_DANCE,
                MOVE_YAWN,
            },
            },
            {
#line 3455
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3455
            .heldItem = ITEM_LIFE_ORB,
#line 3459
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3456
            .ability = ABILITY_ROUGH_SKIN,
#line 3457
            .lvl = 38,
#line 3458
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3460
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3465
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3466
        .trainerName = _("GRAYSON"),
#line 3467
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3468
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3470
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3471
        .doubleBattle = FALSE,
#line 3472
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3474
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3474
            .heldItem = ITEM_MUSCLE_BAND,
#line 3478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3475
            .ability = ABILITY_IRON_FIST,
#line 3476
            .lvl = 43,
#line 3477
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3478
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3484
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3484
            .heldItem = ITEM_BLACK_BELT,
#line 3488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3485
            .ability = ABILITY_GUTS,
#line 3486
            .lvl = 43,
#line 3487
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3488
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3493
            .species = SPECIES_LOPUNNY,
#line 3493
            .gender = TRAINER_MON_FEMALE,
#line 3493
            .heldItem = ITEM_ROCKY_HELMET,
#line 3497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3494
            .ability = ABILITY_CUTE_CHARM,
#line 3495
            .lvl = 43,
#line 3496
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3497
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3502
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .heldItem = ITEM_FOCUS_BAND,
#line 3506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3503
            .ability = ABILITY_MOXIE,
#line 3504
            .lvl = 43,
#line 3505
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3506
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3512
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .heldItem = ITEM_EXPERT_BELT,
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .ability = ABILITY_INNER_FOCUS,
#line 3514
            .lvl = 43,
#line 3515
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3521
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3521
            .heldItem = ITEM_FOCUS_BAND,
#line 3525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3522
            .ability = ABILITY_POISON_TOUCH,
#line 3523
            .lvl = 43,
#line 3524
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3525
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3530
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3531
        .trainerName = _("MATTHEW"),
#line 3532
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3533
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3535
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3536
        .doubleBattle = FALSE,
#line 3537
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3539
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3539
            .heldItem = ITEM_AIR_BALLOON,
#line 3543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3540
            .ability = ABILITY_STURDY,
#line 3541
            .lvl = 51,
#line 3542
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3543
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3548
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3549
            .ability = ABILITY_WEAK_ARMOR,
#line 3550
            .lvl = 51,
#line 3551
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3552
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3557
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3557
            .heldItem = ITEM_ASSAULT_VEST,
#line 3561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3558
            .ability = ABILITY_CLEAR_BODY,
#line 3559
            .lvl = 51,
#line 3560
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3561
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3566
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .heldItem = ITEM_CHOICE_SPECS,
#line 3570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3567
            .ability = ABILITY_COMPETITIVE,
#line 3568
            .lvl = 51,
#line 3569
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3570
                MOVE_BRINE,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_ROOST,
            },
            },
            {
#line 3575
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3575
            .heldItem = ITEM_CHOICE_BAND,
#line 3579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3576
            .ability = ABILITY_TECHNICIAN,
#line 3577
            .lvl = 51,
#line 3578
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3579
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3584
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3584
            .heldItem = ITEM_ROCKY_HELMET,
#line 3588
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3585
            .ability = ABILITY_IRON_BARBS,
#line 3586
            .lvl = 51,
#line 3587
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3588
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3593
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3594
        .trainerName = _("MARK"),
#line 3595
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3596
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3598
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3599
        .doubleBattle = FALSE,
#line 3600
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3602
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .heldItem = ITEM_ROCKY_HELMET,
#line 3606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3603
            .ability = ABILITY_FLASH_FIRE,
#line 3604
            .lvl = 61,
#line 3605
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3606
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3611
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3611
            .heldItem = ITEM_CHOICE_SPECS,
#line 3615
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3612
            .ability = ABILITY_PIXILATE,
#line 3613
            .lvl = 61,
#line 3614
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3615
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3620
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3620
            .heldItem = ITEM_CHOICE_BAND,
#line 3623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3621
            .ability = ABILITY_HUGE_POWER,
#line 3622
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3623
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3628
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3628
            .heldItem = ITEM_CHOICE_SCARF,
#line 3632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3629
            .ability = ABILITY_SERENE_GRACE,
#line 3630
            .lvl = 61,
#line 3631
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3632
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3637
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .heldItem = ITEM_LEFTOVERS,
#line 3641
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3638
            .ability = ABILITY_MAGIC_GUARD,
#line 3639
            .lvl = 61,
#line 3640
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3641
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3646
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3646
            .heldItem = ITEM_OCCA_BERRY,
#line 3649
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3647
            .ability = ABILITY_INTIMIDATE,
#line 3648
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3649
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3654
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 3655
        .trainerName = _("XANDER"),
#line 3656
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3657
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3659
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3660
        .doubleBattle = TRUE,
#line 3661
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3663
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3663
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3664
            .ability = ABILITY_CURSED_BODY,
#line 3665
            .lvl = 67,
#line 3666
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3667
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3672
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .heldItem = ITEM_SITRUS_BERRY,
#line 3676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3673
            .ability = ABILITY_MUMMY,
#line 3674
            .lvl = 67,
#line 3675
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3676
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
            {
#line 3681
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3681
            .heldItem = ITEM_CHOICE_SPECS,
#line 3685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3682
            .ability = ABILITY_FLASH_FIRE,
#line 3683
            .lvl = 67,
#line 3684
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3690
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3690
            .heldItem = ITEM_SITRUS_BERRY,
#line 3694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3691
            .ability = ABILITY_LEVITATE,
#line 3692
            .lvl = 67,
#line 3693
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3694
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3699
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .heldItem = ITEM_CHOICE_BAND,
#line 3703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3700
            .ability = ABILITY_NO_GUARD,
#line 3701
            .lvl = 67,
#line 3702
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3708
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3708
            .heldItem = ITEM_LEFTOVERS,
#line 3712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3709
            .ability = ABILITY_PRESSURE,
#line 3710
            .lvl = 67,
#line 3711
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3712
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 3717
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3718
        .trainerName = _("JERRY"),
#line 3719
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3720
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3722
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3723
        .doubleBattle = FALSE,
#line 3724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3726
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3728
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3727
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3730
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3731
        .trainerName = _("TED"),
#line 3732
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3733
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3735
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3736
        .doubleBattle = FALSE,
#line 3737
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3739
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3741
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3740
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3743
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3744
        .trainerName = _("PAUL"),
#line 3745
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3746
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3748
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3749
        .doubleBattle = FALSE,
#line 3750
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3752
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3754
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3753
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3756
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3758
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3757
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3760
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3762
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3761
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3764
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3765
        .trainerName = _("KAREN"),
#line 3766
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3767
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3768
F_TRAINER_FEMALE | 
#line 3769
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3770
        .doubleBattle = FALSE,
#line 3771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3773
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3774
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3777
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3778
        .trainerName = _("GEORGIA"),
#line 3779
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3780
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3781
F_TRAINER_FEMALE | 
#line 3782
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3783
        .doubleBattle = FALSE,
#line 3784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3786
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3788
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3787
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3790
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3792
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3791
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3794
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3795
        .trainerName = _("KATE & JOY"),
#line 3796
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3797
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3799
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3800
        .doubleBattle = TRUE,
#line 3801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3803
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3804
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3807
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3808
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3812
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3813
        .trainerName = _("ANNA & MEG"),
#line 3814
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3815
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3817
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3818
        .doubleBattle = TRUE,
#line 3819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3821
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3822
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3825
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3826
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3829
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3830
        .trainerName = _("VICTOR"),
#line 3831
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3832
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3834
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3835
        .doubleBattle = FALSE,
#line 3836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3838
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .heldItem = ITEM_ORAN_BERRY,
#line 3840
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3839
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3842
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3842
            .heldItem = ITEM_ORAN_BERRY,
#line 3844
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3843
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3846
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3847
        .trainerName = _("MIGUEL"),
#line 3848
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3849
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3851
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3852
        .doubleBattle = FALSE,
#line 3853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3855
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .heldItem = ITEM_ORAN_BERRY,
#line 3857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3856
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3859
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3860
        .trainerName = _("COLTON"),
#line 3861
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3862
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3864
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3865
        .doubleBattle = FALSE,
#line 3866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3868
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3868
            .heldItem = ITEM_ORAN_BERRY,
#line 3870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3869
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3871
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3876
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3876
            .heldItem = ITEM_ORAN_BERRY,
#line 3878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3877
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3879
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3884
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3884
            .heldItem = ITEM_ORAN_BERRY,
#line 3886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3885
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3887
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3892
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3892
            .heldItem = ITEM_ORAN_BERRY,
#line 3894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3893
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3895
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3900
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3900
            .heldItem = ITEM_ORAN_BERRY,
#line 3902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3901
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3903
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3908
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3908
            .heldItem = ITEM_ORAN_BERRY,
#line 3910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3909
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3911
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3916
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3917
        .trainerName = _("VICTORIA"),
#line 3918
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3919
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3920
F_TRAINER_FEMALE | 
#line 3921
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3922
        .doubleBattle = FALSE,
#line 3923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3925
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3925
            .heldItem = ITEM_ORAN_BERRY,
#line 3927
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3926
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3929
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3930
        .trainerName = _("VANESSA"),
#line 3931
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3932
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3933
F_TRAINER_FEMALE | 
#line 3934
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3935
        .doubleBattle = FALSE,
#line 3936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3938
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3938
            .heldItem = ITEM_ORAN_BERRY,
#line 3940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3939
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3942
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3943
        .trainerName = _("BETHANY"),
#line 3944
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3945
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3946
F_TRAINER_FEMALE | 
#line 3947
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3948
        .doubleBattle = FALSE,
#line 3949
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3951
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3951
            .heldItem = ITEM_ORAN_BERRY,
#line 3953
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3952
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3955
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3955
            .heldItem = ITEM_ORAN_BERRY,
#line 3957
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3956
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3959
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3959
            .heldItem = ITEM_ORAN_BERRY,
#line 3961
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3960
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3963
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3964
        .trainerName = _("ISABEL"),
#line 3965
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3966
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3967
F_TRAINER_FEMALE | 
#line 3968
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3969
        .doubleBattle = FALSE,
#line 3970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3972
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .heldItem = ITEM_ORAN_BERRY,
#line 3974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3973
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3976
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3976
            .heldItem = ITEM_ORAN_BERRY,
#line 3978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3977
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3980
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3981
        .trainerName = _("TIMOTHY"),
#line 3982
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3983
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3985
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3986
        .doubleBattle = FALSE,
#line 3987
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3989
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3991
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3990
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3993
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3994
        .trainerName = _("VICKY"),
#line 3995
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3996
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3997
F_TRAINER_FEMALE | 
#line 3998
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3999
        .doubleBattle = FALSE,
#line 4000
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4002
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4004
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4003
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4006
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 4007
        .trainerName = _("SHELBY"),
#line 4008
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4009
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4010
F_TRAINER_FEMALE | 
#line 4011
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4012
        .doubleBattle = FALSE,
#line 4013
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4015
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4017
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4016
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4019
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4021
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4020
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4023
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4024
        .trainerName = _("CALVIN"),
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
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4033
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4036
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4037
        .trainerName = _("BILLY"),
#line 4038
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4039
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4041
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4042
        .doubleBattle = FALSE,
#line 4043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4045
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4046
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4049
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4050
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4053
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4054
        .trainerName = _("JOSH"),
#line 4055
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4056
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4058
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4059
        .doubleBattle = FALSE,
#line 4060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4062
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4064
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4063
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4065
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4067
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4068
        .trainerName = _("TOMMY"),
#line 4069
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4070
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4072
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4073
        .doubleBattle = FALSE,
#line 4074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4076
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4078
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4077
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4080
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4082
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4081
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4084
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4085
        .trainerName = _("JOEY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4093
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4094
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4097
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4098
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4101
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4102
        .trainerName = _("BEN"),
#line 4103
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4104
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4106
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4107
        .doubleBattle = FALSE,
#line 4108
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4110
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4112
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4111
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4115
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4117
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4116
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4120
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4121
        .trainerName = _("QUINCY"),
#line 4122
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4123
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4125
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4126
        .items = { ITEM_FULL_RESTORE },
#line 4127
        .doubleBattle = FALSE,
#line 4128
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4130
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4132
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4131
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4134
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4136
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4135
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4138
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4139
        .trainerName = _("KATELYNN"),
#line 4140
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4141
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4142
F_TRAINER_FEMALE | 
#line 4143
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4144
        .items = { ITEM_FULL_RESTORE },
#line 4145
        .doubleBattle = FALSE,
#line 4146
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4148
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4149
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4151
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4156
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4158
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4157
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4159
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4164
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4165
        .trainerName = _("JAYLEN"),
#line 4166
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4167
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4169
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4170
        .doubleBattle = FALSE,
#line 4171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4173
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4174
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4177
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4178
        .trainerName = _("DILLON"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4186
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4187
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4190
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4191
        .trainerName = _("EDDIE"),
#line 4192
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4193
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4196
        .doubleBattle = FALSE,
#line 4197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4199
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4200
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4203
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4204
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4207
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4208
        .trainerName = _("ALLEN"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4216
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4217
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4220
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4221
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4224
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4225
        .trainerName = _("TIMMY"),
#line 4226
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4227
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4230
        .doubleBattle = FALSE,
#line 4231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4233
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4234
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4237
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4238
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4241
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4242
        .trainerName = _("FATTY"),
#line 4243
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4244
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4246
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4247
        .doubleBattle = FALSE,
#line 4248
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4249
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4251
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4251
            .heldItem = ITEM_LIFE_ORB,
#line 4255
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4252
            .ability = ABILITY_THICK_FAT,
#line 4253
            .lvl = 78,
#line 4254
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4256
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4261
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4261
            .heldItem = ITEM_CHOICE_BAND,
#line 4265
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4262
            .ability = ABILITY_INTIMIDATE,
#line 4263
            .lvl = 78,
#line 4264
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4266
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4271
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4271
            .heldItem = ITEM_LEFTOVERS,
#line 4275
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4272
            .ability = ABILITY_CHLOROPHYLL,
#line 4273
            .lvl = 78,
#line 4274
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4276
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4281
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4281
            .heldItem = ITEM_FOCUS_SASH,
#line 4285
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4282
            .ability = ABILITY_MAGIC_GUARD,
#line 4283
            .lvl = 78,
#line 4284
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4286
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4291
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4291
            .heldItem = ITEM_WIDE_LENS,
#line 4295
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4292
            .ability = ABILITY_STATIC,
#line 4293
            .lvl = 78,
#line 4294
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4296
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4301
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4301
            .heldItem = ITEM_EVIOLITE,
#line 4305
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4306
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4302
            .ability = ABILITY_SWIFT_SWIM,
#line 4303
            .lvl = 78,
#line 4304
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4306
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4311
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4312
        .trainerName = _("ANDREW"),
#line 4313
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4314
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4316
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4317
        .doubleBattle = FALSE,
#line 4318
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4320
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4321
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4324
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4325
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4328
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4329
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4332
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4333
        .trainerName = _("IVAN"),
#line 4334
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4335
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4337
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4338
        .doubleBattle = FALSE,
#line 4339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4341
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4342
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4345
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4346
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4349
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4350
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4353
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4354
        .trainerName = _("CLAUDE"),
#line 4355
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4356
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4358
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4359
        .doubleBattle = FALSE,
#line 4360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4362
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4363
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4366
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4367
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4370
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4371
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4374
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4375
        .trainerName = _("ELLIOT"),
#line 4376
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4377
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4379
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4380
        .doubleBattle = FALSE,
#line 4381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4383
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4384
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4387
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4388
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4391
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4392
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4395
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4396
        .trainerName = _("NED"),
#line 4397
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4398
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4400
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4401
        .doubleBattle = FALSE,
#line 4402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4404
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4405
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4408
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4409
        .trainerName = _("DALE"),
#line 4410
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4411
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4413
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4414
        .doubleBattle = FALSE,
#line 4415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4417
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4418
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4421
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4422
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4425
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4426
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4429
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4430
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4433
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4434
        .trainerName = _("NOLAN"),
#line 4435
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4436
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4438
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4439
        .doubleBattle = FALSE,
#line 4440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4442
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4443
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4446
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4447
        .trainerName = _("BARNY"),
#line 4448
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4449
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4451
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4452
        .doubleBattle = FALSE,
#line 4453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4455
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4456
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4459
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4460
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4463
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4464
        .trainerName = _("WADE"),
#line 4465
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4466
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4468
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4469
        .doubleBattle = FALSE,
#line 4470
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4472
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4473
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4475
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4476
        .trainerName = _("ABIGAL"),
#line 4477
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4478
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4479
F_TRAINER_FEMALE | 
#line 4480
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4481
        .doubleBattle = FALSE,
#line 4482
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4484
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4486
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4485
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4487
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4488
        .trainerName = _("CARTER"),
#line 4489
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4490
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4492
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4493
        .doubleBattle = FALSE,
#line 4494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4496
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4498
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4497
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4500
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4502
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4501
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4504
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4505
        .trainerName = _("RONALD"),
#line 4506
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4507
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4509
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4510
        .doubleBattle = FALSE,
#line 4511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4513
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4514
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4518
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4519
        .trainerName = _("JACOB"),
#line 4520
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4521
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4523
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4524
        .doubleBattle = FALSE,
#line 4525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4527
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4529
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4528
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4531
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4533
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4532
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4535
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4537
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4536
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4539
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4540
        .trainerName = _("ANTHONY"),
#line 4541
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4542
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4544
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4545
        .doubleBattle = FALSE,
#line 4546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4548
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4549
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4552
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4553
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4556
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4557
        .trainerName = _("BENJAMIN"),
#line 4558
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4559
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4561
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4562
        .doubleBattle = FALSE,
#line 4563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4565
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4566
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4569
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4570
        .trainerName = _("JASMINE"),
#line 4571
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4572
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4573
F_TRAINER_FEMALE | 
#line 4574
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4575
        .doubleBattle = FALSE,
#line 4576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4578
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4580
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4579
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4582
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4584
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4583
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4586
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4587
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4590
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4591
        .trainerName = _("DYLAN"),
#line 4592
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4593
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
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
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4600
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4603
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4604
        .trainerName = _("MARIA"),
#line 4605
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4606
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4607
F_TRAINER_FEMALE | 
#line 4608
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4609
        .doubleBattle = FALSE,
#line 4610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4612
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4613
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4616
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4617
        .trainerName = _("CAMDEN"),
#line 4618
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4619
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4621
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4622
        .doubleBattle = FALSE,
#line 4623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4625
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4626
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4629
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4630
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4633
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4634
        .trainerName = _("DEMETRIUS"),
#line 4635
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4636
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4638
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4639
        .doubleBattle = FALSE,
#line 4640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4642
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4643
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4646
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4647
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4650
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4651
        .trainerName = _("ISAIAH"),
#line 4652
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4653
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4655
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4656
        .doubleBattle = FALSE,
#line 4657
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4659
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4661
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4660
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4663
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4664
        .trainerName = _("PABLO"),
#line 4665
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4666
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4668
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4669
        .doubleBattle = FALSE,
#line 4670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4672
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4673
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4676
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4677
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4680
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4681
        .trainerName = _("CHASE"),
#line 4682
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4683
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4685
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4686
        .doubleBattle = FALSE,
#line 4687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4689
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4690
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4693
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4694
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4697
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4698
        .trainerName = _("ISOBEL"),
#line 4699
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4700
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4701
F_TRAINER_FEMALE | 
#line 4702
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4703
        .doubleBattle = FALSE,
#line 4704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4706
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4707
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4710
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4711
        .trainerName = _("DONNY"),
#line 4712
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4713
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4714
F_TRAINER_FEMALE | 
#line 4715
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4716
        .doubleBattle = FALSE,
#line 4717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4719
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4720
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4723
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4724
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4727
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4728
        .trainerName = _("TALIA"),
#line 4729
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4730
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4731
F_TRAINER_FEMALE | 
#line 4732
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4733
        .doubleBattle = FALSE,
#line 4734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4736
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4737
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4740
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4741
        .trainerName = _("KATELYN"),
#line 4742
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4743
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4744
F_TRAINER_FEMALE | 
#line 4745
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4746
        .doubleBattle = FALSE,
#line 4747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4749
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4750
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4753
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4754
        .trainerName = _("ALLISON"),
#line 4755
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4756
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4757
F_TRAINER_FEMALE | 
#line 4758
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4759
        .doubleBattle = FALSE,
#line 4760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4762
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4763
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4766
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4768
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4767
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4770
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4771
        .trainerName = _("NICOLAS"),
#line 4772
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4773
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4775
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4776
        .doubleBattle = FALSE,
#line 4777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4779
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4781
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4780
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4783
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4785
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4784
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4787
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4788
        .trainerName = _("AARON"),
#line 4789
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4790
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4792
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4793
        .doubleBattle = FALSE,
#line 4794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4796
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4798
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4797
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4800
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4801
        .trainerName = _("PERRY"),
#line 4802
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4803
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4805
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4806
        .doubleBattle = FALSE,
#line 4807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4809
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4810
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4813
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4814
        .trainerName = _("HUGH"),
#line 4815
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4816
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4818
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4819
        .doubleBattle = FALSE,
#line 4820
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4822
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4823
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4826
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4827
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4830
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4831
        .trainerName = _("PHIL"),
#line 4832
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4833
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4835
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4836
        .doubleBattle = FALSE,
#line 4837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4839
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4840
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4843
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4844
        .trainerName = _("JARED"),
#line 4845
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4846
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4848
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4849
        .doubleBattle = FALSE,
#line 4850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4852
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4854
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4853
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4856
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4858
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4857
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4860
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4862
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4861
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4864
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4865
        .trainerName = _("HUMBERTO"),
#line 4866
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4867
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4869
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4870
        .doubleBattle = FALSE,
#line 4871
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4873
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4875
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4874
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4877
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4878
        .trainerName = _("PRESLEY"),
#line 4879
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4880
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4882
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4883
        .doubleBattle = FALSE,
#line 4884
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4886
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4887
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4890
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4891
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4894
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4895
        .trainerName = _("EDWARDO"),
#line 4896
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4897
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4899
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4900
        .doubleBattle = FALSE,
#line 4901
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4903
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4905
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4904
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4907
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4909
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4908
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4911
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4912
        .trainerName = _("COLIN"),
#line 4913
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4914
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4916
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4917
        .doubleBattle = FALSE,
#line 4918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4920
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4921
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4924
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4925
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4928
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4929
        .trainerName = _("ROBERT"),
#line 4930
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4931
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4933
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4934
        .doubleBattle = FALSE,
#line 4935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4937
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4938
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4941
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4942
        .trainerName = _("BENNY"),
#line 4943
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4944
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4946
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4947
        .doubleBattle = FALSE,
#line 4948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4950
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4951
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4954
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4955
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4958
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4959
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4962
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4963
        .trainerName = _("CHESTER"),
#line 4964
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4965
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4967
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4968
        .doubleBattle = FALSE,
#line 4969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4971
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4972
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4975
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4976
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4979
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4980
        .trainerName = _("ALEX"),
#line 4981
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4982
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4984
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4985
        .doubleBattle = FALSE,
#line 4986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4988
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4990
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4989
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4992
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4994
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4993
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4996
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4997
        .trainerName = _("BECK"),
#line 4998
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4999
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 5001
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5002
        .doubleBattle = FALSE,
#line 5003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5005
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5006
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5009
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5010
        .trainerName = _("YASU"),
#line 5011
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5012
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5014
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5015
        .doubleBattle = FALSE,
#line 5016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5018
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5019
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5022
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5023
        .trainerName = _("TAKASHI"),
#line 5024
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5025
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5027
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5028
        .doubleBattle = FALSE,
#line 5029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5031
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5032
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5035
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5036
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5039
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5040
        .trainerName = _("DIANNE"),
#line 5041
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5042
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5043
F_TRAINER_FEMALE | 
#line 5044
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5045
        .items = { ITEM_FULL_RESTORE },
#line 5046
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5048
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5049
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5051
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5054
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5055
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5057
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5060
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5061
        .trainerName = _("JANI"),
#line 5062
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5063
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5064
F_TRAINER_FEMALE | 
#line 5065
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5066
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5068
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5069
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5072
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5073
        .trainerName = _("LAO"),
#line 5074
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5075
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5077
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5078
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5080
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5081
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5084
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5085
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5088
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5089
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5092
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5093
        .trainerName = _("LUNG"),
#line 5094
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5095
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5097
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5098
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5100
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5101
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5104
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5105
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5108
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5109
        .trainerName = _("JOCELYN"),
#line 5110
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5111
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5112
F_TRAINER_FEMALE | 
#line 5113
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5114
        .doubleBattle = FALSE,
#line 5115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5117
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5119
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5118
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5121
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5122
        .trainerName = _("LAURA"),
#line 5123
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5124
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5125
F_TRAINER_FEMALE | 
#line 5126
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5127
        .doubleBattle = FALSE,
#line 5128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5130
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5132
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5131
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5134
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5135
        .trainerName = _("CYNDY"),
#line 5136
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5137
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5138
F_TRAINER_FEMALE | 
#line 5139
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5140
        .doubleBattle = FALSE,
#line 5141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5143
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5145
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5144
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5147
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5149
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5148
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5151
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5152
        .trainerName = _("CORA"),
#line 5153
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5154
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5155
F_TRAINER_FEMALE | 
#line 5156
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5157
        .doubleBattle = FALSE,
#line 5158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5160
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5162
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5161
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5164
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5165
        .trainerName = _("PAULA"),
#line 5166
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5167
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5168
F_TRAINER_FEMALE | 
#line 5169
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5170
        .doubleBattle = FALSE,
#line 5171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5173
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5175
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5174
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5177
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5178
        .trainerName = _("MADELINE"),
#line 5179
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5180
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5181
F_TRAINER_FEMALE | 
#line 5182
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5183
        .doubleBattle = FALSE,
#line 5184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5186
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5187
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5190
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5191
        .trainerName = _("CLARISSA"),
#line 5192
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5193
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5194
F_TRAINER_FEMALE | 
#line 5195
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5196
        .doubleBattle = FALSE,
#line 5197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5199
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5200
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5203
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5204
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5207
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5208
        .trainerName = _("ANGELICA"),
#line 5209
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5210
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5211
F_TRAINER_FEMALE | 
#line 5212
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5213
        .doubleBattle = FALSE,
#line 5214
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5216
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5218
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5217
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5220
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5221
        .trainerName = _("BEVERLY"),
#line 5222
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5223
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5224
F_TRAINER_FEMALE | 
#line 5225
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5226
        .doubleBattle = FALSE,
#line 5227
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5229
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5230
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5233
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5234
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5237
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5238
        .trainerName = _("IMANI"),
#line 5239
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5240
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5241
F_TRAINER_FEMALE | 
#line 5242
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5243
        .doubleBattle = FALSE,
#line 5244
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5246
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5247
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5250
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5251
        .trainerName = _("KYLA"),
#line 5252
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5253
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5254
F_TRAINER_FEMALE | 
#line 5255
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5256
        .doubleBattle = FALSE,
#line 5257
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5259
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5260
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5263
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5264
        .trainerName = _("DENISE"),
#line 5265
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5266
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5267
F_TRAINER_FEMALE | 
#line 5268
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5269
        .doubleBattle = FALSE,
#line 5270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5272
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5273
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5276
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5277
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5280
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5281
        .trainerName = _("BETH"),
#line 5282
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5283
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5284
F_TRAINER_FEMALE | 
#line 5285
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5286
        .doubleBattle = FALSE,
#line 5287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5289
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5290
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5293
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5294
        .trainerName = _("TARA"),
#line 5295
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5296
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5297
F_TRAINER_FEMALE | 
#line 5298
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5299
        .doubleBattle = FALSE,
#line 5300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5302
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5303
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5306
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5307
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5310
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5311
        .trainerName = _("MISSY"),
#line 5312
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5313
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5314
F_TRAINER_FEMALE | 
#line 5315
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5316
        .doubleBattle = FALSE,
#line 5317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5319
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5320
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5323
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5324
        .trainerName = _("ALICE"),
#line 5325
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5326
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5327
F_TRAINER_FEMALE | 
#line 5328
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5329
        .doubleBattle = FALSE,
#line 5330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5332
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5333
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5336
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5337
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5340
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5341
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5344
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5345
        .trainerName = _("JENNY"),
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
            .species = SPECIES_LAPRAS,
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
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5358
        .trainerName = _("GRACE"),
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
            .species = SPECIES_OCTILLERY,
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
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5371
        .trainerName = _("TANYA"),
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
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5380
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5383
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5384
        .trainerName = _("SHARON"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5392
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5393
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5396
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5397
        .trainerName = _("NIKKI"),
#line 5398
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5399
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5400
F_TRAINER_FEMALE | 
#line 5401
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5402
        .doubleBattle = FALSE,
#line 5403
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5405
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5406
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5409
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5410
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5413
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5414
        .trainerName = _("BRENDA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5422
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5423
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5426
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5427
        .trainerName = _("KATIE"),
#line 5428
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5429
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5430
F_TRAINER_FEMALE | 
#line 5431
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5432
        .doubleBattle = FALSE,
#line 5433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5435
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5436
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5439
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5440
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5443
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5444
        .trainerName = _("SUSIE"),
#line 5445
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5446
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5447
F_TRAINER_FEMALE | 
#line 5448
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5449
        .doubleBattle = FALSE,
#line 5450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5452
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5453
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5456
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5457
        .trainerName = _("KARA"),
#line 5458
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5459
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5460
F_TRAINER_FEMALE | 
#line 5461
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5462
        .doubleBattle = FALSE,
#line 5463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5465
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5466
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5469
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5470
        .trainerName = _("DANA"),
#line 5471
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5472
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5473
F_TRAINER_FEMALE | 
#line 5474
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5475
        .doubleBattle = FALSE,
#line 5476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5478
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5479
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5482
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5483
        .trainerName = _("SIENNA"),
#line 5484
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5485
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5486
F_TRAINER_FEMALE | 
#line 5487
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5488
        .doubleBattle = FALSE,
#line 5489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5491
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5492
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5495
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5496
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5499
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5500
        .trainerName = _("DEBRA"),
#line 5501
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5502
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5503
F_TRAINER_FEMALE | 
#line 5504
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5505
        .doubleBattle = FALSE,
#line 5506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5508
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5509
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5512
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5513
        .trainerName = _("LINDA"),
#line 5514
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5515
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5516
F_TRAINER_FEMALE | 
#line 5517
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5518
        .doubleBattle = FALSE,
#line 5519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5521
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5522
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5525
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5526
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5529
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5530
        .trainerName = _("KAYLEE"),
#line 5531
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5532
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5533
F_TRAINER_FEMALE | 
#line 5534
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5535
        .doubleBattle = FALSE,
#line 5536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5538
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5539
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5542
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5543
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5546
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5547
        .trainerName = _("LAUREL"),
#line 5548
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5549
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5550
F_TRAINER_FEMALE | 
#line 5551
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5552
        .doubleBattle = FALSE,
#line 5553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5555
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5556
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5559
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5560
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5563
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5564
        .trainerName = _("CARLEE"),
#line 5565
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5566
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5567
F_TRAINER_FEMALE | 
#line 5568
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5569
        .doubleBattle = FALSE,
#line 5570
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5572
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5574
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5573
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5576
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5577
        .trainerName = _("HEIDI"),
#line 5578
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5579
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5580
F_TRAINER_FEMALE | 
#line 5581
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5582
        .doubleBattle = FALSE,
#line 5583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5585
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5586
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5589
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5590
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5594
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5595
        .trainerName = _("BECKY"),
#line 5596
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5597
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5598
F_TRAINER_FEMALE | 
#line 5599
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5600
        .doubleBattle = TRUE,
#line 5601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5603
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .heldItem = ITEM_FOCUS_SASH,
#line 5605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5604
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5606
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5609
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5609
            .heldItem = ITEM_WIDE_LENS,
#line 5612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5610
            .ability = ABILITY_MOODY,
#line 5611
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5612
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5617
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5618
        .trainerName = _("CAROL"),
#line 5619
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5620
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5621
F_TRAINER_FEMALE | 
#line 5622
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5623
        .doubleBattle = FALSE,
#line 5624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5626
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5627
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5630
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5631
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5634
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5635
        .trainerName = _("NANCY"),
#line 5636
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5637
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5638
F_TRAINER_FEMALE | 
#line 5639
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5640
        .doubleBattle = FALSE,
#line 5641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5643
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5644
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5647
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5648
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5651
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5652
        .trainerName = _("MARTHA"),
#line 5653
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5654
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5655
F_TRAINER_FEMALE | 
#line 5656
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5657
        .doubleBattle = FALSE,
#line 5658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5664
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5665
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5668
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5669
        .trainerName = _("DIANA"),
#line 5670
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5671
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5672
F_TRAINER_FEMALE | 
#line 5673
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5674
        .doubleBattle = FALSE,
#line 5675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5677
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5678
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5681
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5682
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5685
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5686
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5689
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5690
        .trainerName = _("CEDRIC"),
#line 5691
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5692
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5694
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5695
        .doubleBattle = FALSE,
#line 5696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5698
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5699
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5702
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5703
        .trainerName = _("IRENE"),
#line 5704
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5705
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5706
F_TRAINER_FEMALE | 
#line 5707
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5708
        .doubleBattle = FALSE,
#line 5709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5711
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5712
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5715
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5716
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5719
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5720
        .trainerName = _("AMY & LIV"),
#line 5721
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5722
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5724
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5725
        .doubleBattle = TRUE,
#line 5726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5728
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5729
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5732
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5733
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5737
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5738
        .trainerName = _("GINA & MIA"),
#line 5739
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5740
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5742
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5743
        .doubleBattle = TRUE,
#line 5744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5746
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5747
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5750
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5751
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5754
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5755
        .trainerName = _("MIU & YUKI"),
#line 5756
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5757
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5759
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5760
        .doubleBattle = TRUE,
#line 5761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5763
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5764
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5767
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5768
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5772
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5773
        .trainerName = _("HUEY"),
#line 5774
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5775
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5777
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5778
        .doubleBattle = FALSE,
#line 5779
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5781
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5783
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5782
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5785
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5787
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5786
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5789
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5790
        .trainerName = _("EDMOND"),
#line 5791
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5792
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5794
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5795
        .doubleBattle = FALSE,
#line 5796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5798
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5799
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5802
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5803
        .trainerName = _("ERNEST"),
#line 5804
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5805
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5807
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5808
        .doubleBattle = FALSE,
#line 5809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5811
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5812
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5815
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5816
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5819
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5820
        .trainerName = _("DWAYNE"),
#line 5821
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5822
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5824
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5825
        .doubleBattle = FALSE,
#line 5826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5828
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5829
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5832
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5833
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5836
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5837
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5840
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5841
        .trainerName = _("PHILLIP"),
#line 5842
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5843
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5845
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5846
        .doubleBattle = FALSE,
#line 5847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5849
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5850
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5853
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5854
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5857
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5858
        .trainerName = _("LEONARD"),
#line 5859
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5860
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5862
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5863
        .doubleBattle = FALSE,
#line 5864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5866
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5867
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5870
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5871
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5874
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5875
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5878
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5879
        .trainerName = _("DUNCAN"),
#line 5880
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5881
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5883
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5884
        .doubleBattle = FALSE,
#line 5885
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5887
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5888
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5891
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5892
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5895
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5896
        .trainerName = _("ELI"),
#line 5897
        .trainerClass = TRAINER_CLASS_GAMER,
#line 5898
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 5900
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5901
        .doubleBattle = FALSE,
#line 5902
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5904
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5906
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5905
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5908
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5909
        .trainerName = _("ANNIKA"),
#line 5910
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5911
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5912
F_TRAINER_FEMALE | 
#line 5913
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5914
        .doubleBattle = FALSE,
#line 5915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5917
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5917
            .heldItem = ITEM_FOCUS_SASH,
#line 5919
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5918
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5921
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5921
            .heldItem = ITEM_FOCUS_SASH,
#line 5923
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5922
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5925
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5926
        .trainerName = _("JAZMYN"),
#line 5927
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5928
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5929
F_TRAINER_FEMALE | 
#line 5930
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5931
        .items = { ITEM_HYPER_POTION },
#line 5932
        .doubleBattle = FALSE,
#line 5933
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5935
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5936
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5939
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5940
        .trainerName = _("JONAS"),
#line 5941
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5942
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5944
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5945
        .doubleBattle = FALSE,
#line 5946
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5948
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5949
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5952
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5953
        .trainerName = _("KAYLEY"),
#line 5954
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5955
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5956
F_TRAINER_FEMALE | 
#line 5957
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5958
        .doubleBattle = FALSE,
#line 5959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5961
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5962
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5965
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5966
        .trainerName = _("AURON"),
#line 5967
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5968
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5970
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5971
        .doubleBattle = FALSE,
#line 5972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5974
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5976
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5975
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5978
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5980
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5979
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5982
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5983
        .trainerName = _("KELVIN"),
#line 5984
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5985
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5987
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5988
        .doubleBattle = FALSE,
#line 5989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5991
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5993
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5992
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5995
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5997
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5996
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5999
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 6000
        .trainerName = _("MARLEY"),
#line 6001
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6002
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6003
F_TRAINER_FEMALE | 
#line 6004
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6005
        .items = { ITEM_HYPER_POTION },
#line 6006
        .doubleBattle = FALSE,
#line 6007
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6009
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6011
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6010
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6013
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6014
        .trainerName = _("REYNA"),
#line 6015
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6016
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6017
F_TRAINER_FEMALE | 
#line 6018
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6019
        .doubleBattle = FALSE,
#line 6020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6022
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6024
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6023
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6026
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6028
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6027
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6030
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6031
        .trainerName = _("HUDSON"),
#line 6032
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6033
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6035
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6036
        .doubleBattle = FALSE,
#line 6037
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6039
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6040
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6043
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6044
        .trainerName = _("CONOR"),
#line 6045
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6046
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6048
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6049
        .doubleBattle = FALSE,
#line 6050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6052
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6053
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6056
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6058
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6057
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6060
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6061
        .trainerName = _("EDWIN"),
#line 6062
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6063
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6065
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6066
        .doubleBattle = FALSE,
#line 6067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6069
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6070
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6073
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6074
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6077
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6078
        .trainerName = _("HECTOR"),
#line 6079
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6080
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6082
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6083
        .doubleBattle = FALSE,
#line 6084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6086
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6087
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6090
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6091
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6094
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6095
        .trainerName = _("TABITHA"),
#line 6096
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6097
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6099
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6100
        .doubleBattle = FALSE,
#line 6101
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6103
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6103
            .heldItem = ITEM_SITRUS_BERRY,
#line 6106
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6104
            .ability = ABILITY_DROUGHT,
#line 6105
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6107
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6112
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .heldItem = ITEM_POISON_BARB,
#line 6115
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6113
            .ability = ABILITY_LEVITATE,
#line 6114
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6116
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6121
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6121
            .heldItem = ITEM_LIFE_ORB,
#line 6124
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6123
            .ability = ABILITY_LEVITATE,
#line 6122
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6125
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6130
    [DIFFICULTY_NORMAL][TRAINER_SAMUEL_VR] =
    {
#line 6131
        .trainerName = _("SAMUEL"),
#line 6132
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6133
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6135
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6136
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6137
        .doubleBattle = TRUE,
#line 6138
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6140
            .species = SPECIES_SLOWKING,
#line 6140
            .gender = TRAINER_MON_MALE,
#line 6140
            .heldItem = ITEM_LIFE_ORB,
#line 6144
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6141
            .ability = ABILITY_REGENERATOR,
#line 6142
            .lvl = 70,
#line 6143
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6145
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6150
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .heldItem = ITEM_ROCKY_HELMET,
#line 6154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6151
            .ability = ABILITY_REGENERATOR,
#line 6152
            .lvl = 70,
#line 6153
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6154
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6159
            .species = SPECIES_GLISCOR,
#line 6159
            .gender = TRAINER_MON_FEMALE,
#line 6159
            .heldItem = ITEM_TOXIC_ORB,
#line 6163
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6160
            .ability = ABILITY_POISON_HEAL,
#line 6161
            .lvl = 70,
#line 6162
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6164
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6169
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .heldItem = ITEM_ASSAULT_VEST,
#line 6173
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6170
            .ability = ABILITY_CLEAR_BODY,
#line 6171
            .lvl = 70,
#line 6172
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6174
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6179
            .species = SPECIES_HONCHKROW,
#line 6179
            .gender = TRAINER_MON_MALE,
#line 6179
            .heldItem = ITEM_FOCUS_SASH,
#line 6183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6180
            .ability = ABILITY_MOXIE,
#line 6181
            .lvl = 70,
#line 6182
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6183
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6188
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6188
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6189
            .ability = ABILITY_INFILTRATOR,
#line 6190
            .lvl = 70,
#line 6191
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6192
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6197
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103] =
    {
#line 6198
        .trainerName = _("SAMUEL"),
#line 6199
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6200
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6202
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6203
        .doubleBattle = FALSE,
#line 6204
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6206
            .species = SPECIES_SLOWPOKE,
#line 6206
            .gender = TRAINER_MON_MALE,
#line 6210
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6207
            .ability = ABILITY_REGENERATOR,
#line 6208
            .lvl = 5,
#line 6209
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6211
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6215
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6216
        .trainerName = _("SAMUEL"),
#line 6217
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6218
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6220
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6221
        .doubleBattle = FALSE,
#line 6222
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6224
            .species = SPECIES_SLOWPOKE,
#line 6224
            .gender = TRAINER_MON_MALE,
#line 6224
            .heldItem = ITEM_LIFE_ORB,
#line 6228
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6225
            .ability = ABILITY_REGENERATOR,
#line 6226
            .lvl = 49,
#line 6227
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6229
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6234
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6234
            .heldItem = ITEM_ROCKY_HELMET,
#line 6238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6235
            .ability = ABILITY_REGENERATOR,
#line 6236
            .lvl = 49,
#line 6237
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6238
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6243
            .species = SPECIES_GLIGAR,
#line 6243
            .gender = TRAINER_MON_FEMALE,
#line 6243
            .heldItem = ITEM_RAZOR_FANG,
#line 6247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6244
            .ability = ABILITY_HYPER_CUTTER,
#line 6245
            .lvl = 49,
#line 6246
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6248
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6253
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6253
            .heldItem = ITEM_ASSAULT_VEST,
#line 6257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6254
            .ability = ABILITY_CLEAR_BODY,
#line 6255
            .lvl = 49,
#line 6256
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6257
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6262
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6262
            .heldItem = ITEM_FOCUS_SASH,
#line 6266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6263
            .ability = ABILITY_PRANKSTER,
#line 6264
            .lvl = 49,
#line 6265
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6266
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6271
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6272
        .trainerName = _("SAMUEL"),
#line 6273
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6274
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6276
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6277
        .doubleBattle = FALSE,
#line 6278
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6280
            .species = SPECIES_SLOWPOKE,
#line 6280
            .gender = TRAINER_MON_MALE,
#line 6280
            .heldItem = ITEM_SITRUS_BERRY,
#line 6284
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6281
            .ability = ABILITY_REGENERATOR,
#line 6282
            .lvl = 24,
#line 6283
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6285
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6290
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6290
            .heldItem = ITEM_LUM_BERRY,
#line 6294
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6291
            .ability = ABILITY_REGENERATOR,
#line 6292
            .lvl = 24,
#line 6293
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6295
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6300
            .species = SPECIES_GLIGAR,
#line 6300
            .gender = TRAINER_MON_FEMALE,
#line 6300
            .heldItem = ITEM_RAZOR_FANG,
#line 6304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6301
            .ability = ABILITY_HYPER_CUTTER,
#line 6302
            .lvl = 24,
#line 6303
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6305
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6310
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6310
            .heldItem = ITEM_METAL_COAT,
#line 6314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6311
            .ability = ABILITY_CLEAR_BODY,
#line 6312
            .lvl = 24,
#line 6313
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6314
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6319
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6320
        .trainerName = _("ISAAC"),
#line 6321
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6322
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6325
        .doubleBattle = FALSE,
#line 6326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6328
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6329
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6332
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6333
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6336
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6337
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6340
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6341
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6344
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6345
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6348
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6349
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6352
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6353
        .trainerName = _("DAVIS"),
#line 6354
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6355
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6357
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6358
        .doubleBattle = FALSE,
#line 6359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6361
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6362
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6365
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6366
        .trainerName = _("MITCHELL"),
#line 6367
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6368
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6370
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6371
        .doubleBattle = FALSE,
#line 6372
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6374
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6375
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6378
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6379
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6382
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6383
        .trainerName = _("LYDIA"),
#line 6384
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6385
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6386
F_TRAINER_FEMALE | 
#line 6387
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6388
        .doubleBattle = FALSE,
#line 6389
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6391
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6392
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6395
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6396
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6399
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6400
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6403
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6404
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6407
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6408
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6411
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6412
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6415
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6416
        .trainerName = _("HALLE"),
#line 6417
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6418
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6419
F_TRAINER_FEMALE | 
#line 6420
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6421
        .items = { ITEM_FULL_RESTORE },
#line 6422
        .doubleBattle = FALSE,
#line 6423
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6425
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6426
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6429
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6430
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6433
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6434
        .trainerName = _("GARRISON"),
#line 6435
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6436
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6438
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6439
        .doubleBattle = FALSE,
#line 6440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6442
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6443
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6446
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6447
        .trainerName = _("JACKSON"),
#line 6448
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6449
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6451
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6452
        .items = { ITEM_FULL_RESTORE },
#line 6453
        .doubleBattle = FALSE,
#line 6454
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6456
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6458
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6457
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6460
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6461
        .trainerName = _("LORENZO"),
#line 6462
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6463
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6465
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6466
        .items = { ITEM_FULL_RESTORE },
#line 6467
        .doubleBattle = FALSE,
#line 6468
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6470
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6472
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6471
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6474
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6476
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6475
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6478
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6480
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6479
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6482
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6483
        .trainerName = _("SEBASTIAN"),
#line 6484
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6485
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6487
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6488
        .items = { ITEM_FULL_RESTORE },
#line 6489
        .doubleBattle = FALSE,
#line 6490
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6492
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6494
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6493
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6496
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6497
        .trainerName = _("CATHERINE"),
#line 6498
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6499
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6500
F_TRAINER_FEMALE | 
#line 6501
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6502
        .items = { ITEM_FULL_RESTORE },
#line 6503
        .doubleBattle = FALSE,
#line 6504
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6506
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6507
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6510
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6512
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6511
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6514
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6515
        .trainerName = _("JENNA"),
#line 6516
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6517
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6518
F_TRAINER_FEMALE | 
#line 6519
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6520
        .items = { ITEM_FULL_RESTORE },
#line 6521
        .doubleBattle = FALSE,
#line 6522
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6524
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6525
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6528
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6530
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6529
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6532
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6534
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6533
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6536
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6537
        .trainerName = _("SOPHIA"),
#line 6538
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6539
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6540
F_TRAINER_FEMALE | 
#line 6541
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6542
        .items = { ITEM_FULL_RESTORE },
#line 6543
        .doubleBattle = FALSE,
#line 6544
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6546
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6548
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6547
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6550
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6552
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6551
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6554
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6555
        .trainerName = _("JULIO"),
#line 6556
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6557
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6559
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6560
        .doubleBattle = FALSE,
#line 6561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6563
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6564
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6567
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6568
        .trainerName = _("GRUNT"),
#line 6569
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6570
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6572
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6573
        .doubleBattle = FALSE,
#line 6574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6576
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6578
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6577
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6580
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6582
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6581
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6584
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6585
        .trainerName = _("GRUNT"),
#line 6586
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6587
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6588
F_TRAINER_FEMALE | 
#line 6589
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6590
        .doubleBattle = FALSE,
#line 6591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6593
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6594
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6597
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6598
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6601
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6602
        .trainerName = _("GRUNT"),
#line 6603
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6604
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6606
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6607
        .doubleBattle = FALSE,
#line 6608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6610
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6612
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6611
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6614
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6616
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6615
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6618
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6619
        .trainerName = _("MARC"),
#line 6620
        .trainerClass = TRAINER_CLASS_GAMER,
#line 6621
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 6623
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6624
        .doubleBattle = FALSE,
#line 6625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6627
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6629
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6628
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6631
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6633
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6632
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6635
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6636
        .trainerName = _("BRENDEN"),
#line 6637
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6638
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6640
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6641
        .doubleBattle = FALSE,
#line 6642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6644
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6645
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6648
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 6649
        .trainerName = _("LILITH"),
#line 6650
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6651
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6652
F_TRAINER_FEMALE | 
#line 6653
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6654
        .doubleBattle = FALSE,
#line 6655
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6657
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6659
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6658
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6661
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 6662
        .trainerName = _("CRISTIAN"),
#line 6663
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6664
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6666
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6667
        .doubleBattle = FALSE,
#line 6668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6670
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6672
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6671
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6674
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 6675
        .trainerName = _("SYLVIA"),
#line 6676
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6677
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6678
F_TRAINER_FEMALE | 
#line 6679
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6680
        .doubleBattle = FALSE,
#line 6681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6683
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6685
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6684
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6687
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 6688
        .trainerName = _("LEONARDO"),
#line 6689
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6690
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6692
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6693
        .doubleBattle = FALSE,
#line 6694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6696
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6697
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6700
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 6701
        .trainerName = _("ATHENA"),
#line 6702
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6703
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6704
F_TRAINER_FEMALE | 
#line 6705
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6706
        .items = { ITEM_HYPER_POTION },
#line 6707
        .doubleBattle = FALSE,
#line 6708
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6710
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6712
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6711
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6714
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6715
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6719
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 6720
        .trainerName = _("HARRISON"),
#line 6721
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6722
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6724
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6725
        .doubleBattle = FALSE,
#line 6726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6728
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6729
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6732
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 6733
        .trainerName = _("GRUNT"),
#line 6734
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6735
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6737
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6738
        .doubleBattle = FALSE,
#line 6739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6741
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6742
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6745
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 6746
        .trainerName = _("CLARENCE"),
#line 6747
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6748
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6750
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6751
        .doubleBattle = FALSE,
#line 6752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6754
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6755
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6758
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 6759
        .trainerName = _("TERRY"),
#line 6760
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6761
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6762
F_TRAINER_FEMALE | 
#line 6763
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6764
        .doubleBattle = FALSE,
#line 6765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6767
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6768
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6771
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 6772
        .trainerName = _("NATE"),
#line 6773
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6774
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 6776
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6777
        .doubleBattle = FALSE,
#line 6778
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6780
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6782
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6781
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6784
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 6785
        .trainerName = _("KATHLEEN"),
#line 6786
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6787
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6788
F_TRAINER_FEMALE | 
#line 6789
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6790
        .doubleBattle = FALSE,
#line 6791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6793
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6795
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6794
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 6798
        .trainerName = _("CLIFFORD"),
#line 6799
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 6800
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 6802
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 6803
        .doubleBattle = FALSE,
#line 6804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6806
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6807
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6810
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 6811
        .trainerName = _("NICHOLAS"),
#line 6812
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6813
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 6815
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6816
        .doubleBattle = FALSE,
#line 6817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6819
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6820
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6823
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 6824
        .trainerName = _("GRUNT"),
#line 6825
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6826
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 6827
F_TRAINER_FEMALE | 
#line 6828
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6829
        .doubleBattle = FALSE,
#line 6830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6832
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6833
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6836
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6837
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6840
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 6841
        .trainerName = _("GRUNT"),
#line 6842
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6843
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6845
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6846
        .doubleBattle = FALSE,
#line 6847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6849
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6850
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6853
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 6854
        .trainerName = _("GRUNT"),
#line 6855
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6856
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6858
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6859
        .doubleBattle = FALSE,
#line 6860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6862
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6863
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6866
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 6867
        .trainerName = _("GRUNT"),
#line 6868
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6869
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6871
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6872
        .doubleBattle = FALSE,
#line 6873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6875
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6876
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6879
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 6880
        .trainerName = _("GRUNT"),
#line 6881
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6882
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6884
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6885
        .doubleBattle = FALSE,
#line 6886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6888
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6889
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6892
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 6893
        .trainerName = _("MACEY"),
#line 6894
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 6895
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 6896
F_TRAINER_FEMALE | 
#line 6897
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6898
        .doubleBattle = FALSE,
#line 6899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6901
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6902
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6905
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 6906
        .trainerName = _("SAMUEL"),
#line 6907
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6908
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6910
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6911
        .doubleBattle = FALSE,
#line 6912
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6914
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6914
            .heldItem = ITEM_RAZOR_FANG,
#line 6918
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6915
            .ability = ABILITY_HYPER_CUTTER,
#line 6916
            .lvl = 16,
#line 6917
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6918
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 6923
            .species = SPECIES_SLOWPOKE,
#line 6923
            .gender = TRAINER_MON_MALE,
#line 6923
            .heldItem = ITEM_SITRUS_BERRY,
#line 6927
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6924
            .ability = ABILITY_REGENERATOR,
#line 6925
            .lvl = 16,
#line 6926
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6927
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6932
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6933
            .ability = ABILITY_REGENERATOR,
#line 6934
            .lvl = 16,
#line 6935
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6936
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 6941
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6941
            .heldItem = ITEM_SITRUS_BERRY,
#line 6945
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6942
            .ability = ABILITY_CLEAR_BODY,
#line 6943
            .lvl = 16,
#line 6944
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6945
                MOVE_TACKLE,
                MOVE_ZEN_HEADBUTT,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 6950
        .trainerName = _("PAXTON"),
#line 6951
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6952
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6954
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6955
        .doubleBattle = FALSE,
#line 6956
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6958
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6959
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6962
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6963
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6966
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 6967
        .trainerName = _("ISABELLA"),
#line 6968
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6969
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 6970
F_TRAINER_FEMALE | 
#line 6971
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6972
        .doubleBattle = FALSE,
#line 6973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6975
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6976
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6979
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 6980
        .trainerName = _("GRUNT"),
#line 6981
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6982
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6983
F_TRAINER_FEMALE | 
#line 6984
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6985
        .doubleBattle = FALSE,
#line 6986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6988
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6990
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6989
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6992
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6993
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6996
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 6997
        .trainerName = _("TABITHA"),
#line 6998
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6999
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7001
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7002
        .doubleBattle = FALSE,
#line 7003
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7005
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7005
            .heldItem = ITEM_SITRUS_BERRY,
#line 7008
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7006
            .ability = ABILITY_DROUGHT,
#line 7007
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7009
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7014
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7014
            .heldItem = ITEM_LUM_BERRY,
#line 7017
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7015
            .ability = ABILITY_LEVITATE,
#line 7016
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7018
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7022
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7022
            .heldItem = ITEM_SITRUS_BERRY,
#line 7025
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7023
            .ability = ABILITY_LEVITATE,
#line 7024
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7026
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7030
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7030
            .heldItem = ITEM_LUM_BERRY,
#line 7033
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7031
            .ability = ABILITY_OWN_TEMPO,
#line 7032
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7034
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7039
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7040
        .trainerName = _("JONATHAN"),
#line 7041
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7042
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7044
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7045
        .items = { ITEM_HYPER_POTION },
#line 7046
        .doubleBattle = FALSE,
#line 7047
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7049
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7050
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7053
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7054
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7058
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7059
        .trainerName = _("MAXIE"),
#line 7060
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7061
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7063
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7064
        .doubleBattle = FALSE,
#line 7065
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7067
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7067
            .heldItem = ITEM_IRON_BALL,
#line 7070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7068
            .ability = ABILITY_HEAVY_METAL,
#line 7069
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7070
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7075
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7075
            .heldItem = ITEM_SHARP_BEAK,
#line 7078
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7076
            .ability = ABILITY_INNER_FOCUS,
#line 7077
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7078
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7083
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7083
            .heldItem = ITEM_MUSCLE_BAND,
#line 7086
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7084
            .ability = ABILITY_IMMUNITY,
#line 7085
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7086
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7091
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .heldItem = ITEM_EXPERT_BELT,
#line 7094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7092
            .ability = ABILITY_UNNERVE,
#line 7093
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7094
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7099
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7099
            .heldItem = ITEM_ROCKY_HELMET,
#line 7102
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7100
            .ability = ABILITY_ROCK_HEAD,
#line 7101
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7102
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7107
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7108
        .trainerName = _("MAXIE"),
#line 7109
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7110
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7112
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7113
        .doubleBattle = FALSE,
#line 7114
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7116
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7116
            .heldItem = ITEM_MUSCLE_BAND,
#line 7119
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7117
            .ability = ABILITY_HEAVY_METAL,
#line 7118
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7120
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7125
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7125
            .heldItem = ITEM_LUM_BERRY,
#line 7128
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7126
            .ability = ABILITY_IMMUNITY,
#line 7127
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7129
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7134
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7134
            .heldItem = ITEM_LUM_BERRY,
#line 7137
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7135
            .ability = ABILITY_UNNERVE,
#line 7136
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7138
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7143
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .heldItem = ITEM_ROCKY_HELMET,
#line 7146
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7144
            .ability = ABILITY_ROCK_HEAD,
#line 7145
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7147
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7152
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7152
            .heldItem = ITEM_SHARP_BEAK,
#line 7155
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7153
            .ability = ABILITY_INNER_FOCUS,
#line 7154
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7156
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7161
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7162
        .trainerName = _("TIANA"),
#line 7163
        .trainerClass = TRAINER_CLASS_LASS,
#line 7164
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7165
F_TRAINER_FEMALE | 
#line 7166
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7167
        .doubleBattle = FALSE,
#line 7168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7170
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7171
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7174
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7175
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7178
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7179
        .trainerName = _("HALEY"),
#line 7180
        .trainerClass = TRAINER_CLASS_LASS,
#line 7181
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7182
F_TRAINER_FEMALE | 
#line 7183
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7184
        .doubleBattle = FALSE,
#line 7185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7187
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7188
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7191
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7192
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7195
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7196
        .trainerName = _("JANICE"),
#line 7197
        .trainerClass = TRAINER_CLASS_LASS,
#line 7198
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7199
F_TRAINER_FEMALE | 
#line 7200
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7201
        .doubleBattle = FALSE,
#line 7202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7204
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7205
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7208
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7209
        .trainerName = _("VIVI"),
#line 7210
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7211
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7212
F_TRAINER_FEMALE | 
#line 7213
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7214
        .doubleBattle = FALSE,
#line 7215
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7217
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7219
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7218
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7221
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7223
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7222
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7225
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7227
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7226
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7229
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7230
        .trainerName = _("SALLY"),
#line 7231
        .trainerClass = TRAINER_CLASS_LASS,
#line 7232
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7233
F_TRAINER_FEMALE | 
#line 7234
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7235
        .doubleBattle = FALSE,
#line 7236
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7238
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7239
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7242
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7243
        .trainerName = _("ROBIN"),
#line 7244
        .trainerClass = TRAINER_CLASS_LASS,
#line 7245
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7246
F_TRAINER_FEMALE | 
#line 7247
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7248
        .doubleBattle = FALSE,
#line 7249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7251
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7252
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7255
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7256
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7259
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7260
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7263
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7264
        .trainerName = _("ANDREA"),
#line 7265
        .trainerClass = TRAINER_CLASS_LASS,
#line 7266
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7267
F_TRAINER_FEMALE | 
#line 7268
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7269
        .doubleBattle = FALSE,
#line 7270
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7272
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7274
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7273
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7276
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7277
        .trainerName = _("CRISSY"),
#line 7278
        .trainerClass = TRAINER_CLASS_LASS,
#line 7279
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7280
F_TRAINER_FEMALE | 
#line 7281
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7282
        .doubleBattle = FALSE,
#line 7283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7285
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7287
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7286
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7289
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7291
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7290
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7293
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7294
        .trainerName = _("RICK"),
#line 7295
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7296
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7298
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7299
        .doubleBattle = FALSE,
#line 7300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7302
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7303
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7306
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7307
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7310
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7311
        .trainerName = _("LYLE"),
#line 7312
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7313
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7315
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7316
        .doubleBattle = FALSE,
#line 7317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7319
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7320
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7323
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7324
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7327
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7328
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7331
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7332
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7335
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7336
        .trainerName = _("JOSIE"),
#line 7337
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7338
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7340
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7341
        .doubleBattle = FALSE,
#line 7342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7344
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7346
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7345
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7348
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7350
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7349
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7352
    [DIFFICULTY_NORMAL][TRAINER_BONNEY] =
    {
#line 7353
        .trainerName = _("BONNEY"),
#line 7354
        .trainerClass = TRAINER_CLASS_LADY,
#line 7355
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 7356
F_TRAINER_FEMALE | 
#line 7357
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7358
        .doubleBattle = TRUE,
#line 7359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7361
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7363
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7362
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7365
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7367
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7366
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7369
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7371
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7370
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7373
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7375
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7374
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7377
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7378
        .trainerName = _("DOUG"),
#line 7379
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7380
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7382
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7383
        .doubleBattle = FALSE,
#line 7384
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7386
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7387
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7390
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7391
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7394
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7395
        .trainerName = _("GREG"),
#line 7396
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7397
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7399
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7400
        .doubleBattle = FALSE,
#line 7401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7403
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7404
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7407
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7409
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7408
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7411
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7412
        .trainerName = _("KENT"),
#line 7413
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7414
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7416
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7417
        .doubleBattle = FALSE,
#line 7418
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7420
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7421
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7424
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7425
        .trainerName = _("JAMES"),
#line 7426
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7427
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7429
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7430
        .doubleBattle = FALSE,
#line 7431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7433
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7434
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7437
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7438
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7441
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7442
        .trainerName = _("BRICE"),
#line 7443
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7444
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7446
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7447
        .doubleBattle = FALSE,
#line 7448
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7450
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7451
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7454
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7455
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7458
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7459
        .trainerName = _("TRENT"),
#line 7460
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7461
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7463
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7464
        .doubleBattle = FALSE,
#line 7465
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7467
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7469
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7468
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7471
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7472
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7475
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7476
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7479
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7480
        .trainerName = _("LENNY"),
#line 7481
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7482
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7484
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7485
        .doubleBattle = FALSE,
#line 7486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7488
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7489
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7492
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7493
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7496
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7497
        .trainerName = _("LUCAS"),
#line 7498
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7499
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7501
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7502
        .doubleBattle = FALSE,
#line 7503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7505
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7506
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7509
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7510
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7513
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7514
        .trainerName = _("ALAN"),
#line 7515
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7516
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7518
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7519
        .doubleBattle = FALSE,
#line 7520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7522
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7523
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7526
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7527
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7530
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7531
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7534
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7535
        .trainerName = _("CLARK"),
#line 7536
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7537
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7539
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7540
        .doubleBattle = FALSE,
#line 7541
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7543
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7544
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7547
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7548
        .trainerName = _("ERIC"),
#line 7549
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7550
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7552
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7553
        .doubleBattle = FALSE,
#line 7554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7556
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7557
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7560
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7561
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7564
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7565
        .trainerName = _("MIKE"),
#line 7566
        .trainerClass = TRAINER_CLASS_GAMER,
#line 7567
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 7569
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7570
        .doubleBattle = FALSE,
#line 7571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7573
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7574
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7577
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7578
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7581
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7582
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7585
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7586
        .trainerName = _("DEZ & LUKE"),
#line 7587
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7588
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7590
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7591
        .doubleBattle = TRUE,
#line 7592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7594
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7595
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7598
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7599
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7602
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 7603
        .trainerName = _("LEA & JED"),
#line 7604
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7605
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7607
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7608
        .doubleBattle = TRUE,
#line 7609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7611
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7612
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7615
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7616
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7619
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 7620
        .trainerName = _("KIRA & DAN"),
#line 7621
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7622
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7624
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7625
        .doubleBattle = TRUE,
#line 7626
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7628
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7629
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7632
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7633
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7636
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 7637
        .trainerName = _("JOHANNA"),
#line 7638
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7639
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 7640
F_TRAINER_FEMALE | 
#line 7641
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7642
        .doubleBattle = FALSE,
#line 7643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7645
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7646
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7649
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 7650
        .trainerName = _("GERALD"),
#line 7651
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7652
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7654
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7655
        .items = { ITEM_HYPER_POTION },
#line 7656
        .doubleBattle = FALSE,
#line 7657
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7659
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7661
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7660
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7664
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 7665
        .trainerName = _("VIVIAN"),
#line 7666
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7667
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7668
F_TRAINER_FEMALE | 
#line 7669
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7670
        .doubleBattle = FALSE,
#line 7671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7673
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7675
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7674
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7677
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7679
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7678
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7681
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 7682
        .trainerName = _("DANIELLE"),
#line 7683
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7684
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7685
F_TRAINER_FEMALE | 
#line 7686
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7687
        .doubleBattle = FALSE,
#line 7688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7690
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7692
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7691
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7694
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 7695
        .trainerName = _("HIDEO"),
#line 7696
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7697
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7699
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7700
        .doubleBattle = FALSE,
#line 7701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7703
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7704
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7707
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7708
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7711
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 7712
        .trainerName = _("KEIGO"),
#line 7713
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7714
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7716
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7717
        .doubleBattle = FALSE,
#line 7718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7720
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7721
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7724
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7725
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7728
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 7729
        .trainerName = _("RILEY"),
#line 7730
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7731
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7733
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7734
        .doubleBattle = FALSE,
#line 7735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7737
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7738
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7741
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7742
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7745
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 7746
        .trainerName = _("FLINT"),
#line 7747
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 7748
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 7750
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7751
        .doubleBattle = FALSE,
#line 7752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7754
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7756
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7755
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7758
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7760
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7759
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7762
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 7763
        .trainerName = _("ASHLEY"),
#line 7764
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 7765
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 7766
F_TRAINER_FEMALE | 
#line 7767
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7768
        .doubleBattle = FALSE,
#line 7769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7771
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7773
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7772
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7775
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7777
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7776
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7779
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7781
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7780
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7783
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 7784
        .trainerName = _("CHAD"),
#line 7785
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7786
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 7788
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7789
        .doubleBattle = TRUE,
#line 7790
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7792
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7795
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7793
            .ability = ABILITY_STURDY,
#line 7794
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7795
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 7798
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7801
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7799
            .ability = ABILITY_SAND_STREAM,
#line 7800
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7801
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7806
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7807
            .ability = ABILITY_LIGHTNING_ROD,
#line 7808
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7809
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 7813
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7816
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7814
            .ability = ABILITY_SAND_VEIL,
#line 7815
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7816
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 7820
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 7821
        .trainerName = _("SAMUEL"),
#line 7822
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7823
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7825
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7826
        .doubleBattle = TRUE,
#line 7827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 7829
            .species = SPECIES_SLOWKING,
#line 7829
            .gender = TRAINER_MON_MALE,
#line 7829
            .heldItem = ITEM_LIFE_ORB,
#line 7833
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7830
            .ability = ABILITY_REGENERATOR,
#line 7831
            .lvl = 54,
#line 7832
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7834
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 7839
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .heldItem = ITEM_ROCKY_HELMET,
#line 7843
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7840
            .ability = ABILITY_REGENERATOR,
#line 7841
            .lvl = 54,
#line 7842
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7843
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 7848
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7848
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 7852
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7849
            .ability = ABILITY_INFILTRATOR,
#line 7850
            .lvl = 54,
#line 7851
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7852
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 7857
            .species = SPECIES_GLISCOR,
#line 7857
            .gender = TRAINER_MON_FEMALE,
#line 7857
            .heldItem = ITEM_TOXIC_ORB,
#line 7861
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7858
            .ability = ABILITY_POISON_HEAL,
#line 7859
            .lvl = 54,
#line 7860
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7862
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 7867
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7867
            .heldItem = ITEM_ASSAULT_VEST,
#line 7871
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7868
            .ability = ABILITY_CLEAR_BODY,
#line 7869
            .lvl = 54,
#line 7870
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7872
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 7877
            .species = SPECIES_HONCHKROW,
#line 7877
            .gender = TRAINER_MON_MALE,
#line 7877
            .heldItem = ITEM_FOCUS_SASH,
#line 7881
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7878
            .ability = ABILITY_MOXIE,
#line 7879
            .lvl = 54,
#line 7880
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7882
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 7887
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 7888
        .trainerName = _("JONAH"),
#line 7889
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 7890
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 7892
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7893
        .doubleBattle = FALSE,
#line 7894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7896
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7897
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7900
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7901
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7904
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7905
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7908
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 7909
        .trainerName = _("HENRY"),
#line 7910
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 7911
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 7913
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7914
        .doubleBattle = FALSE,
#line 7915
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7917
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7918
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7921
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7922
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7925
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 7926
        .trainerName = _("ROGER"),
#line 7927
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 7928
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 7930
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7931
        .doubleBattle = FALSE,
#line 7932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7934
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7935
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7938
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7939
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7942
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7943
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 7947
        .trainerName = _("ALEXA"),
#line 7948
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7949
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7950
F_TRAINER_FEMALE | 
#line 7951
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7952
        .items = { ITEM_FULL_RESTORE },
#line 7953
        .doubleBattle = FALSE,
#line 7954
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7956
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7958
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7957
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7960
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7961
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7964
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 7965
        .trainerName = _("RUBEN"),
#line 7966
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7967
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7969
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7970
        .items = { ITEM_HYPER_POTION },
#line 7971
        .doubleBattle = FALSE,
#line 7972
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7974
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7976
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7975
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7978
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7980
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7979
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7982
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 7983
        .trainerName = _("KOJI"),
#line 7984
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7985
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7987
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7988
        .doubleBattle = FALSE,
#line 7989
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7991
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7993
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7992
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7995
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 7996
        .trainerName = _("WAYNE"),
#line 7997
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 7998
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8000
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8001
        .doubleBattle = FALSE,
#line 8002
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8004
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8005
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8008
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8009
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8012
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8013
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8016
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8017
        .trainerName = _("AIDAN"),
#line 8018
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8019
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8021
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8022
        .doubleBattle = FALSE,
#line 8023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8025
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8026
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8029
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8030
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8033
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8034
        .trainerName = _("REED"),
#line 8035
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8036
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8038
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8039
        .doubleBattle = FALSE,
#line 8040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8042
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8043
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8046
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8047
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8050
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8051
        .trainerName = _("TISHA"),
#line 8052
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8053
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8054
F_TRAINER_FEMALE | 
#line 8055
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8056
        .doubleBattle = FALSE,
#line 8057
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8059
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8060
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8063
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8064
        .trainerName = _("TORI & TIA"),
#line 8065
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8066
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8068
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8069
        .doubleBattle = TRUE,
#line 8070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8072
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8073
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8076
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8077
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8080
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8081
        .trainerName = _("KIM & IRIS"),
#line 8082
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8083
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8085
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8086
        .doubleBattle = TRUE,
#line 8087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8089
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8090
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8093
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8094
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8097
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8098
        .trainerName = _("TYRA & IVY"),
#line 8099
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8100
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8102
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8103
        .doubleBattle = TRUE,
#line 8104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8106
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8107
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8110
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8111
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8115
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8116
        .trainerName = _("MEL & PAUL"),
#line 8117
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8118
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8120
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8121
        .doubleBattle = TRUE,
#line 8122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8124
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8125
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8128
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8129
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8132
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8133
        .trainerName = _("JOHN & JAY"),
#line 8134
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8135
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8137
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8138
        .doubleBattle = TRUE,
#line 8139
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8141
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8143
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8142
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8145
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8147
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8146
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8149
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8150
        .trainerName = _("RELI & IAN"),
#line 8151
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8152
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8154
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8155
        .doubleBattle = TRUE,
#line 8156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8158
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8159
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8162
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8163
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8166
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8167
        .trainerName = _("LILA & ROY"),
#line 8168
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8169
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8171
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8172
        .doubleBattle = TRUE,
#line 8173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8175
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8177
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8176
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8179
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8180
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8183
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8184
        .trainerName = _("LISA & RAY"),
#line 8185
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8186
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8188
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8189
        .doubleBattle = TRUE,
#line 8190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8192
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8193
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8196
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8197
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8200
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8201
        .trainerName = _("CHRIS"),
#line 8202
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8203
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8205
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8206
        .doubleBattle = FALSE,
#line 8207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8209
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8210
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8213
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8214
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8217
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8219
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8218
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8221
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8222
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8225
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8226
        .trainerName = _("DAWSON"),
#line 8227
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8228
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8230
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8231
        .doubleBattle = FALSE,
#line 8232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8234
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8234
            .heldItem = ITEM_NUGGET,
#line 8236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8235
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8238
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8239
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8242
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8243
        .trainerName = _("SARAH"),
#line 8244
        .trainerClass = TRAINER_CLASS_LADY,
#line 8245
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8246
F_TRAINER_FEMALE | 
#line 8247
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8248
        .items = { ITEM_FULL_RESTORE },
#line 8249
        .doubleBattle = FALSE,
#line 8250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8252
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8253
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8256
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8256
            .heldItem = ITEM_NUGGET,
#line 8258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8257
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8260
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8261
        .trainerName = _("DARIAN"),
#line 8262
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8263
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8265
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8266
        .doubleBattle = FALSE,
#line 8267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8269
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8270
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8273
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8274
        .trainerName = _("HAILEY"),
#line 8275
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8276
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8277
F_TRAINER_FEMALE | 
#line 8278
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8279
        .doubleBattle = FALSE,
#line 8280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8282
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8283
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8286
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8287
        .trainerName = _("CHANDLER"),
#line 8288
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8289
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8291
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8292
        .doubleBattle = FALSE,
#line 8293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8295
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8296
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8299
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8300
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8303
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8304
        .trainerName = _("KALEB"),
#line 8305
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8306
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8308
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8309
        .doubleBattle = FALSE,
#line 8310
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8312
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .heldItem = ITEM_ORAN_BERRY,
#line 8314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8313
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8316
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8316
            .heldItem = ITEM_ORAN_BERRY,
#line 8318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8317
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8320
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8321
        .trainerName = _("JOSEPH"),
#line 8322
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8323
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8325
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8326
        .doubleBattle = FALSE,
#line 8327
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8329
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8331
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8330
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8333
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8334
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8337
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8338
        .trainerName = _("ALYSSA"),
#line 8339
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8340
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8341
F_TRAINER_FEMALE | 
#line 8342
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8343
        .doubleBattle = FALSE,
#line 8344
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8346
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8348
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8347
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8350
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8351
        .trainerName = _("MARCOS"),
#line 8352
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8353
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8355
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8356
        .doubleBattle = FALSE,
#line 8357
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8359
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8361
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8360
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8363
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8364
        .trainerName = _("RHETT"),
#line 8365
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8366
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8368
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8369
        .doubleBattle = FALSE,
#line 8370
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8372
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8374
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8373
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8376
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8377
        .trainerName = _("TYRON"),
#line 8378
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8379
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8381
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8382
        .doubleBattle = FALSE,
#line 8383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8385
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8386
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8389
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8390
        .trainerName = _("CELINA"),
#line 8391
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8392
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8393
F_TRAINER_FEMALE | 
#line 8394
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8395
        .doubleBattle = FALSE,
#line 8396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8398
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8399
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8402
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8403
        .trainerName = _("BIANCA"),
#line 8404
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8405
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8406
F_TRAINER_FEMALE | 
#line 8407
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8408
        .doubleBattle = FALSE,
#line 8409
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8411
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8412
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8415
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8416
        .trainerName = _("HAYDEN"),
#line 8417
        .trainerClass = TRAINER_CLASS_GAMER,
#line 8418
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8420
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8421
        .doubleBattle = FALSE,
#line 8422
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8424
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8425
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8428
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8429
        .trainerName = _("SOPHIE"),
#line 8430
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8431
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8432
F_TRAINER_FEMALE | 
#line 8433
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8434
        .doubleBattle = FALSE,
#line 8435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8437
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8438
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8441
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8442
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8445
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8446
        .trainerName = _("COBY"),
#line 8447
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8448
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8450
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8451
        .doubleBattle = FALSE,
#line 8452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8454
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8455
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8458
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8459
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8462
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8463
        .trainerName = _("LAWRENCE"),
#line 8464
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8465
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8467
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8468
        .doubleBattle = FALSE,
#line 8469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8471
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8472
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8475
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8476
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8479
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8480
        .trainerName = _("WYATT"),
#line 8481
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8482
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8484
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8485
        .doubleBattle = FALSE,
#line 8486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8488
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8489
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8492
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8493
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8496
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8497
        .trainerName = _("ANGELINA"),
#line 8498
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8499
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8500
F_TRAINER_FEMALE | 
#line 8501
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8502
        .doubleBattle = FALSE,
#line 8503
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8505
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8506
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8509
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8510
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8513
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8514
        .trainerName = _("KAI"),
#line 8515
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8516
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8518
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8519
        .doubleBattle = FALSE,
#line 8520
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8522
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8523
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8526
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 8527
        .trainerName = _("CHARLOTTE"),
#line 8528
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8529
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8530
F_TRAINER_FEMALE | 
#line 8531
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8532
        .doubleBattle = FALSE,
#line 8533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8535
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8536
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8539
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 8540
        .trainerName = _("DEANDRE"),
#line 8541
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 8542
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 8544
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8545
        .doubleBattle = FALSE,
#line 8546
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8548
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8549
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8552
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8553
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8556
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8557
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8560
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 8561
        .trainerName = _("GRUNT"),
#line 8562
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8563
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8565
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8566
        .doubleBattle = FALSE,
#line 8567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8569
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8570
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8573
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 8574
        .trainerName = _("GRUNT"),
#line 8575
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8576
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8578
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8579
        .doubleBattle = FALSE,
#line 8580
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8582
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8583
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8586
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 8587
        .trainerName = _("GRUNT"),
#line 8588
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8589
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8591
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8592
        .doubleBattle = FALSE,
#line 8593
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8595
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8597
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8596
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8599
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 8600
        .trainerName = _("GRUNT"),
#line 8601
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8602
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8604
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8605
        .doubleBattle = FALSE,
#line 8606
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8608
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8609
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8612
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8613
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8616
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 8617
        .trainerName = _("GRUNT"),
#line 8618
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8619
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8621
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8622
        .doubleBattle = FALSE,
#line 8623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8625
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8627
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8626
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8629
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8630
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8633
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 8634
        .trainerName = _("GRUNT"),
#line 8635
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8636
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8638
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8639
        .doubleBattle = FALSE,
#line 8640
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8642
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8644
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8643
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8646
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 8647
        .trainerName = _("GRUNT"),
#line 8648
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8649
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8651
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8652
        .doubleBattle = FALSE,
#line 8653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8655
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8656
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8659
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 8660
        .trainerName = _("GRUNT"),
#line 8661
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8662
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8664
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8665
        .doubleBattle = FALSE,
#line 8666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8668
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8669
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8672
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 8673
        .trainerName = _("GRUNT"),
#line 8674
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8675
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8677
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8678
        .doubleBattle = FALSE,
#line 8679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8681
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8682
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8685
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 8686
        .trainerName = _("GRUNT"),
#line 8687
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8688
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8690
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8691
        .doubleBattle = FALSE,
#line 8692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8694
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8695
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 8699
        .trainerName = _("GRUNT"),
#line 8700
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8701
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8703
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8704
        .doubleBattle = FALSE,
#line 8705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8708
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8711
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 8712
        .trainerName = _("GRUNT"),
#line 8713
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8714
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8716
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8717
        .doubleBattle = FALSE,
#line 8718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8720
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8721
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8724
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 8725
        .trainerName = _("GRUNT"),
#line 8726
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8727
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 8729
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8730
        .doubleBattle = FALSE,
#line 8731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8733
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8734
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8737
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 8738
        .trainerName = _("GRUNT"),
#line 8739
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8740
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8741
F_TRAINER_FEMALE | 
#line 8742
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8743
        .doubleBattle = FALSE,
#line 8744
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8746
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8747
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8750
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 8751
        .trainerName = _("GRUNT"),
#line 8752
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8753
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8754
F_TRAINER_FEMALE | 
#line 8755
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8756
        .doubleBattle = FALSE,
#line 8757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8759
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8760
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8763
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 8764
        .trainerName = _("GRUNT"),
#line 8765
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 8766
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 8767
F_TRAINER_FEMALE | 
#line 8768
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8769
        .doubleBattle = FALSE,
#line 8770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8772
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8773
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8776
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 8777
        .trainerName = _("TABITHA"),
#line 8778
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 8779
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 8781
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8782
        .doubleBattle = FALSE,
#line 8783
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8785
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8785
            .heldItem = ITEM_SITRUS_BERRY,
#line 8788
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8786
            .ability = ABILITY_DROUGHT,
#line 8787
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8789
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 8794
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8794
            .heldItem = ITEM_POISON_BARB,
#line 8797
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8795
            .ability = ABILITY_LEVITATE,
#line 8796
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8798
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 8803
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8803
            .heldItem = ITEM_LIFE_ORB,
#line 8806
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8804
            .ability = ABILITY_LEVITATE,
#line 8805
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8807
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 8812
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8812
            .heldItem = ITEM_FOCUS_SASH,
#line 8815
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 8813
            .ability = ABILITY_OWN_TEMPO,
#line 8814
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8816
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 8821
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 8822
        .trainerName = _("DARCY"),
#line 8823
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8824
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8825
F_TRAINER_FEMALE | 
#line 8826
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8827
        .items = { ITEM_HYPER_POTION },
#line 8828
        .doubleBattle = FALSE,
#line 8829
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8831
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8832
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8835
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8836
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8839
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 8840
        .trainerName = _("MAXIE"),
#line 8841
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 8842
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 8844
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 8845
        .doubleBattle = FALSE,
#line 8846
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8848
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8848
            .heldItem = ITEM_ROCKY_HELMET,
#line 8851
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8849
            .ability = ABILITY_ROCK_HEAD,
#line 8850
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8851
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 8856
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8856
            .heldItem = ITEM_AIR_BALLOON,
#line 8859
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8857
            .ability = ABILITY_HEAVY_METAL,
#line 8858
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8859
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 8864
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8864
            .heldItem = ITEM_SHARP_BEAK,
#line 8867
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8865
            .ability = ABILITY_INNER_FOCUS,
#line 8866
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8867
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 8872
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 8873
        .trainerName = _("PETE"),
#line 8874
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8875
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8877
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8878
        .doubleBattle = FALSE,
#line 8879
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8881
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8882
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8885
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 8886
        .trainerName = _("ISABELLE"),
#line 8887
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8888
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8889
F_TRAINER_FEMALE | 
#line 8890
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8891
        .doubleBattle = FALSE,
#line 8892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8894
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8895
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8898
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 8899
        .trainerName = _("ANDRES"),
#line 8900
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 8901
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 8903
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8904
        .doubleBattle = FALSE,
#line 8905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8907
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8909
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8908
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8911
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8912
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 8916
        .trainerName = _("JOSUE"),
#line 8917
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8918
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8920
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8921
        .doubleBattle = FALSE,
#line 8922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8924
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8926
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8925
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8928
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8930
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8929
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8932
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 8933
        .trainerName = _("CAMRON"),
#line 8934
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8935
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 8937
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8938
        .doubleBattle = FALSE,
#line 8939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8941
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8942
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8945
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 8946
        .trainerName = _("CORY"),
#line 8947
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 8948
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 8950
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8951
        .doubleBattle = FALSE,
#line 8952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8954
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8955
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8958
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8959
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8962
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8963
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8966
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 8967
        .trainerName = _("CAROLINA"),
#line 8968
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8969
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8970
F_TRAINER_FEMALE | 
#line 8971
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8972
        .items = { ITEM_HYPER_POTION },
#line 8973
        .doubleBattle = FALSE,
#line 8974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8976
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8978
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8977
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8980
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8981
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8984
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8986
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 8985
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8988
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 8989
        .trainerName = _("ELIJAH"),
#line 8990
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8991
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8993
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8994
        .doubleBattle = FALSE,
#line 8995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8997
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8998
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9001
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9002
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9005
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9006
        .trainerName = _("CELIA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9014
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9015
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9018
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9019
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9022
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9023
        .trainerName = _("BRYAN"),
#line 9024
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9025
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9027
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9028
        .doubleBattle = FALSE,
#line 9029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9031
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9032
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9035
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9036
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9039
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9040
        .trainerName = _("BRANDEN"),
#line 9041
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9042
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9044
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9045
        .doubleBattle = FALSE,
#line 9046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9048
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9049
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9052
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9053
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9056
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9057
        .trainerName = _("BRYANT"),
#line 9058
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9059
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9061
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9062
        .doubleBattle = FALSE,
#line 9063
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9065
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9066
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9069
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9070
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9073
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9074
        .trainerName = _("SHAYLA"),
#line 9075
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9076
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9077
F_TRAINER_FEMALE | 
#line 9078
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9079
        .doubleBattle = FALSE,
#line 9080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9082
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9083
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9086
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9087
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9090
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9091
        .trainerName = _("KYRA"),
#line 9092
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9093
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9094
F_TRAINER_FEMALE | 
#line 9095
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9096
        .doubleBattle = FALSE,
#line 9097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9099
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9101
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9100
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9103
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9104
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9107
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9108
        .trainerName = _("JAIDEN"),
#line 9109
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9110
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9112
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9113
        .doubleBattle = FALSE,
#line 9114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9116
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9117
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9120
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9121
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9124
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9125
        .trainerName = _("ALIX"),
#line 9126
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9127
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9128
F_TRAINER_FEMALE | 
#line 9129
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9130
        .doubleBattle = FALSE,
#line 9131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9133
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9134
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9137
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9138
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9141
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9142
        .trainerName = _("HELENE"),
#line 9143
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9144
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9145
F_TRAINER_FEMALE | 
#line 9146
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9147
        .doubleBattle = FALSE,
#line 9148
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9150
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9152
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9151
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9154
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9155
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9158
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9159
        .trainerName = _("MARLENE"),
#line 9160
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9161
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9162
F_TRAINER_FEMALE | 
#line 9163
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9164
        .doubleBattle = FALSE,
#line 9165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9167
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9168
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9171
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9172
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9175
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9176
        .trainerName = _("DEVAN"),
#line 9177
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9178
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9180
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9181
        .doubleBattle = FALSE,
#line 9182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9184
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9185
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9188
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9189
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9192
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9193
        .trainerName = _("JOHNSON"),
#line 9194
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9195
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9198
        .doubleBattle = FALSE,
#line 9199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9201
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9202
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9205
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9206
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9209
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9210
        .trainerName = _("MELINA"),
#line 9211
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9212
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9213
F_TRAINER_FEMALE | 
#line 9214
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9215
        .doubleBattle = FALSE,
#line 9216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9218
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9219
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9222
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9223
        .trainerName = _("MELISSA"),
#line 9224
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9225
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9226
F_TRAINER_FEMALE | 
#line 9227
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9228
        .doubleBattle = FALSE,
#line 9229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9231
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9232
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9235
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9236
        .trainerName = _("BRANDI"),
#line 9237
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9238
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9239
F_TRAINER_FEMALE | 
#line 9240
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9241
        .doubleBattle = FALSE,
#line 9242
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9244
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9246
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9245
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9248
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9249
        .trainerName = _("AISHA"),
#line 9250
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9251
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9252
F_TRAINER_FEMALE | 
#line 9253
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9254
        .doubleBattle = FALSE,
#line 9255
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9257
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9258
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9261
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9262
        .trainerName = _("MAKAYLA"),
#line 9263
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9264
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9265
F_TRAINER_FEMALE | 
#line 9266
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9267
        .items = { ITEM_HYPER_POTION },
#line 9268
        .doubleBattle = FALSE,
#line 9269
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9271
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9273
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9272
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9275
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9276
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9279
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9280
        .trainerName = _("FABIAN"),
#line 9281
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9282
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9284
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9285
        .doubleBattle = FALSE,
#line 9286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9288
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9289
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9292
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9293
        .trainerName = _("DAYTON"),
#line 9294
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9295
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9297
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9298
        .doubleBattle = FALSE,
#line 9299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9301
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9302
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9305
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9306
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9309
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9310
        .trainerName = _("RACHEL"),
#line 9311
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9312
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9313
F_TRAINER_FEMALE | 
#line 9314
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9315
        .doubleBattle = FALSE,
#line 9316
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9318
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9320
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9319
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9322
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9323
        .trainerName = _("LEONEL"),
#line 9324
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9325
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9327
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9328
        .items = { ITEM_HYPER_POTION },
#line 9329
        .doubleBattle = FALSE,
#line 9330
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9332
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9334
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9333
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9336
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9337
        .trainerName = _("CALLIE"),
#line 9338
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9339
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9340
F_TRAINER_FEMALE | 
#line 9341
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9342
        .doubleBattle = FALSE,
#line 9343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9345
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9346
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9349
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9350
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9353
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9354
        .trainerName = _("CALE"),
#line 9355
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9356
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9358
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9359
        .doubleBattle = FALSE,
#line 9360
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9362
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9363
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9366
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9367
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [DIFFICULTY_NORMAL][TRAINER_SONDHEIM] =
    {
#line 9371
        .trainerName = _("SONDHEIM"),
#line 9372
        .trainerClass = TRAINER_CLASS_KINDLER,
#line 9373
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 9375
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9376
        .doubleBattle = FALSE,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9380
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9383
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9384
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9387
    [DIFFICULTY_NORMAL][TRAINER_ASHER] =
    {
#line 9388
        .trainerName = _("ASHER"),
#line 9389
        .trainerClass = TRAINER_CLASS_GAMER,
#line 9390
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9392
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9393
        .doubleBattle = FALSE,
#line 9394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9396
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9397
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9400
            .species = SPECIES_STEELIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9401
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9405
    [DIFFICULTY_NORMAL][TRAINER_BRIDGETTE] =
    {
#line 9406
        .trainerName = _("BRIDGETTE"),
#line 9407
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9408
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9409
F_TRAINER_FEMALE | 
#line 9410
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9411
        .doubleBattle = FALSE,
#line 9412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9414
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9415
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9418
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9419
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9422
            .species = SPECIES_DRILBUR,
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
    [DIFFICULTY_NORMAL][TRAINER_FLAVIA] =
    {
#line 9427
        .trainerName = _("FLAVIA"),
#line 9428
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9429
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9430
F_TRAINER_FEMALE | 
#line 9431
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9432
        .doubleBattle = FALSE,
#line 9433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9435
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9437
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9436
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9439
    [DIFFICULTY_NORMAL][TRAINER_OLIVE] =
    {
#line 9440
        .trainerName = _("OLIVE"),
#line 9441
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9442
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9443
F_TRAINER_FEMALE | 
#line 9444
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9445
        .doubleBattle = FALSE,
#line 9446
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9448
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9450
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9449
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9452
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9453
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9456
    [DIFFICULTY_NORMAL][TRAINER_VIOLA] =
    {
#line 9457
        .trainerName = _("VIOLA"),
#line 9458
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9459
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9460
F_TRAINER_FEMALE | 
#line 9461
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9462
        .doubleBattle = FALSE,
#line 9463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9465
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9466
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9469
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9470
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9474
    [DIFFICULTY_NORMAL][TRAINER_REIJU] =
    {
#line 9475
        .trainerName = _("VIOLA"),
#line 9476
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9477
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9478
F_TRAINER_FEMALE | 
#line 9479
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9480
        .doubleBattle = FALSE,
#line 9481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9483
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9484
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9487
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9488
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9491
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9492
        .trainerName = _("MYLES"),
#line 9493
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9494
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9496
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9497
        .doubleBattle = FALSE,
#line 9498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9500
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9502
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9501
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9504
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9506
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9505
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9508
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9509
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9512
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9513
        .trainerName = _("PAT"),
#line 9514
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9515
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9516
F_TRAINER_FEMALE | 
#line 9517
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9518
        .doubleBattle = FALSE,
#line 9519
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9521
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9523
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9522
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9525
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9526
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9529
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9530
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9534
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 9535
        .trainerName = _("CRISTIN"),
#line 9536
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9537
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9538
F_TRAINER_FEMALE | 
#line 9539
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9540
        .items = { ITEM_HYPER_POTION },
#line 9541
        .doubleBattle = FALSE,
#line 9542
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9544
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9546
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9545
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9548
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9550
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9549
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9552
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 9553
        .trainerName = _("GRUNT"),
#line 9554
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9555
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9557
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9558
        .doubleBattle = FALSE,
#line 9559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9561
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .heldItem = ITEM_EVIOLITE,
#line 9563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9562
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9564
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 9565
        .trainerName = _("GRUNT"),
#line 9566
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9567
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9569
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9570
        .doubleBattle = FALSE,
#line 9571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9573
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9575
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9574
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9576
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 9577
        .trainerName = _("GRUNT"),
#line 9578
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9579
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9581
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9582
        .doubleBattle = FALSE,
#line 9583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9585
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9586
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9588
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 9589
        .trainerName = _("GRUNT"),
#line 9590
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9591
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9593
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9594
        .doubleBattle = FALSE,
#line 9595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9597
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9598
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9600
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 9601
        .trainerName = _("GRUNT"),
#line 9602
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9603
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9605
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9606
        .doubleBattle = FALSE,
#line 9607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9609
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9610
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9612
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9613
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9615
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_1] =
    {
#line 9616
        .trainerName = _("GRUNT"),
#line 9617
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9618
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9620
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9621
        .doubleBattle = FALSE,
#line 9622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9624
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9625
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9628
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_2] =
    {
#line 9629
        .trainerName = _("GRUNT"),
#line 9630
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9631
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9633
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9634
        .doubleBattle = FALSE,
#line 9635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9637
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9638
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9640
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_3] =
    {
#line 9641
        .trainerName = _("GRUNT"),
#line 9642
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9643
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9645
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9646
        .doubleBattle = FALSE,
#line 9647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9649
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9650
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9652
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_4] =
    {
#line 9653
        .trainerName = _("GRUNT"),
#line 9654
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9655
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9657
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9658
        .doubleBattle = FALSE,
#line 9659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9661
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9662
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9664
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9665
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9667
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_5] =
    {
#line 9668
        .trainerName = _("GRUNT"),
#line 9669
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9670
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9672
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9673
        .doubleBattle = FALSE,
#line 9674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9676
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9678
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9677
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9679
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_6] =
    {
#line 9680
        .trainerName = _("GRUNT"),
#line 9681
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9682
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9684
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9685
        .doubleBattle = FALSE,
#line 9686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9688
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9690
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9689
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9691
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9692
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9694
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_7] =
    {
#line 9695
        .trainerName = _("GRUNT"),
#line 9696
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9697
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9699
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9700
        .doubleBattle = FALSE,
#line 9701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9703
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9705
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9704
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9706
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9708
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9707
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9709
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 9710
        .trainerName = _("ANGELO"),
#line 9711
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9712
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9714
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9715
        .doubleBattle = FALSE,
#line 9716
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9718
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9720
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9719
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9722
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9724
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9723
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9726
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 9727
        .trainerName = _("DARIUS"),
#line 9728
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9729
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9731
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9732
        .doubleBattle = FALSE,
#line 9733
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9735
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9737
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 9736
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9739
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 9740
        .trainerName = _("STEVEN"),
#line 9741
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9742
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 9744
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9745
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 9746
        .doubleBattle = FALSE,
#line 9747
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9749
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9750
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9752
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 9757
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9759
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9758
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9760
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 9765
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9767
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9766
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9768
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 9773
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9775
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9774
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9776
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 9781
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9783
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9782
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9784
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 9789
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9789
            .heldItem = ITEM_SITRUS_BERRY,
#line 9791
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9790
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9792
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 9797
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS] =
    {
#line 9798
        .trainerName = _("GHOSTESS"),
#line 9799
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 9800
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 9801
F_TRAINER_FEMALE | 
#line 9802
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9803
        .doubleBattle = FALSE,
#line 9804
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9806
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9806
            .heldItem = ITEM_TWISTED_SPOON,
#line 9809
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9807
            .ability = ABILITY_THICK_FAT,
#line 9808
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9809
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 9814
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9814
            .heldItem = ITEM_BRIGHT_POWDER,
#line 9817
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9815
            .ability = ABILITY_WONDER_SKIN,
#line 9816
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9817
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 9822
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9822
            .heldItem = ITEM_METRONOME,
#line 9825
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9823
            .ability = ABILITY_ROCK_HEAD,
#line 9824
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9825
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 9830
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9830
            .heldItem = ITEM_ASSAULT_VEST,
#line 9833
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9831
            .ability = ABILITY_CURSED_BODY,
#line 9832
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9833
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 9838
    [DIFFICULTY_NORMAL][TRAINER_JORDAN] =
    {
#line 9839
        .trainerName = _("JORDAN"),
#line 9840
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 9841
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 9843
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9844
        .doubleBattle = FALSE,
#line 9845
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 9847
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9850
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9848
            .ability = ABILITY_CHLOROPHYLL,
#line 9849
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9850
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 9855
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9855
            .heldItem = ITEM_EVIOLITE,
#line 9858
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9856
            .ability = ABILITY_PRESSURE,
#line 9857
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9858
                MOVE_ZEN_HEADBUTT,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9863
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9863
            .heldItem = ITEM_BLACK_SLUDGE,
#line 9866
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9864
            .ability = ABILITY_LIQUID_OOZE,
#line 9865
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9866
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9871
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9871
            .heldItem = ITEM_QUICK_CLAW,
#line 9874
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9872
            .ability = ABILITY_OBLIVIOUS,
#line 9873
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9874
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 9879
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9879
            .heldItem = ITEM_SHARP_BEAK,
#line 9882
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9880
            .ability = ABILITY_INNER_FOCUS,
#line 9881
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9882
                MOVE_AERIAL_ACE,
                MOVE_CROSS_POISON,
                MOVE_KNOCK_OFF,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 9887
    [DIFFICULTY_NORMAL][TRAINER_JORDAN2] =
    {
#line 9888
        .trainerName = _("JORDAN"),
#line 9889
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 9890
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 9892
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9893
        .doubleBattle = FALSE,
#line 9894
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 9896
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9896
            .heldItem = ITEM_WIDE_LENS,
#line 9899
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9897
            .ability = ABILITY_CHLOROPHYLL,
#line 9898
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9899
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 9904
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9904
            .heldItem = ITEM_LIFE_ORB,
#line 9907
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9905
            .ability = ABILITY_PRESSURE,
#line 9906
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9907
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9912
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9912
            .heldItem = ITEM_BLACK_SLUDGE,
#line 9915
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9913
            .ability = ABILITY_LIQUID_OOZE,
#line 9914
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9915
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9920
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9920
            .heldItem = ITEM_CHOICE_SPECS,
#line 9923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9921
            .ability = ABILITY_OBLIVIOUS,
#line 9922
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9923
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 9928
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9928
            .heldItem = ITEM_SHARP_BEAK,
#line 9931
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9929
            .ability = ABILITY_INNER_FOCUS,
#line 9930
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9931
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 9936
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9936
            .heldItem = ITEM_ASSAULT_VEST,
#line 9939
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9937
            .ability = ABILITY_AIR_LOCK,
#line 9938
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9939
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 9944
    [DIFFICULTY_NORMAL][TRAINER_GHOSTESS2] =
    {
#line 9945
        .trainerName = _("GHOSTESS"),
#line 9946
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 9947
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 9948
F_TRAINER_FEMALE | 
#line 9949
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9950
        .doubleBattle = FALSE,
#line 9951
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9953
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9953
            .heldItem = ITEM_EXPERT_BELT,
#line 9956
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9954
            .ability = ABILITY_THICK_FAT,
#line 9955
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9956
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 9961
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9961
            .heldItem = ITEM_MUSCLE_BAND,
#line 9964
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9962
            .ability = ABILITY_WONDER_SKIN,
#line 9963
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9964
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 9969
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9969
            .heldItem = ITEM_WIDE_LENS,
#line 9972
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9970
            .ability = ABILITY_INTIMIDATE,
#line 9971
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9972
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 9977
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9977
            .heldItem = ITEM_ASSAULT_VEST,
#line 9980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9978
            .ability = ABILITY_CURSED_BODY,
#line 9979
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9980
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 9985
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_8] =
    {
#line 9986
        .trainerName = _("GRUNT"),
#line 9987
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9988
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9990
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9991
        .doubleBattle = FALSE,
#line 9992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9994
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9995
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9997
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_9] =
    {
#line 9998
        .trainerName = _("GRUNT"),
#line 9999
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10000
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10002
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10003
        .doubleBattle = FALSE,
#line 10004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10006
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10008
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10007
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10009
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_10] =
    {
#line 10010
        .trainerName = _("GRUNT"),
#line 10011
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10012
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10014
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10015
        .doubleBattle = FALSE,
#line 10016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10018
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10019
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10021
    [DIFFICULTY_NORMAL][TRAINER_AEROGRUNT_11] =
    {
#line 10022
        .trainerName = _("GRUNT"),
#line 10023
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10024
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10026
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10027
        .doubleBattle = FALSE,
#line 10028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10030
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10032
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10031
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10034
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10035
        .trainerName = _("MARIELA"),
#line 10036
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10037
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10038
F_TRAINER_FEMALE | 
#line 10039
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10040
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10042
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10043
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10046
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10047
        .trainerName = _("ALVARO"),
#line 10048
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10049
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10051
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10052
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10054
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10055
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10058
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10060
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10059
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10062
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10063
        .trainerName = _("EVERETT"),
#line 10064
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10065
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10067
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10068
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10070
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10071
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10074
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10075
        .trainerName = _("RED"),
#line 10076
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10077
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10079
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10080
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10082
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10083
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10086
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10087
        .trainerName = _("LEAF"),
#line 10088
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10089
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10090
F_TRAINER_FEMALE | 
#line 10091
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10092
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10094
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10095
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10098
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10099
        .trainerName = _("SAMUEL"),
#line 10100
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10101
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10103
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10104
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10106
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10107
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10110
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10111
        .trainerName = _("MAY"),
#line 10112
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10113
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10114
F_TRAINER_FEMALE | 
#line 10115
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10116
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10118
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10119
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
