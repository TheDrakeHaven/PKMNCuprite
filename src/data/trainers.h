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
            .lvl = 39,
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
            .lvl = 59,
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
            .lvl = 59,
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
            .lvl = 59,
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
            .lvl = 59,
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
            .lvl = 64,
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
            .lvl = 64,
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
            .lvl = 64,
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
            .lvl = 64,
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
            .lvl = 64,
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
            .lvl = 66,
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
            .lvl = 66,
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
            .lvl = 66,
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
            .lvl = 66,
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
            .lvl = 66,
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
            .lvl = 46,
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
            .lvl = 46,
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
            .lvl = 37,
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
            .lvl = 49,
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
            .lvl = 49,
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
            .lvl = 49,
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
            .lvl = 59,
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
            .lvl = 59,
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
        .trainerClass = TRAINER_CLASS_BEAUTY,
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
            .lvl = 48,
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
            .lvl = 63,
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
            .lvl = 63,
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
            .lvl = 60,
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
            .lvl = 60,
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
            .lvl = 60,
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 63,
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
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1679
    [DIFFICULTY_NORMAL][TRAINER_BRIANNA] =
    {
#line 1680
        .trainerName = _("BRIANNA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1688
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1690
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1689
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1692
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1693
        .trainerName = _("OLIVIA"),
#line 1694
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1695
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1696
F_TRAINER_FEMALE | 
#line 1697
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1698
        .doubleBattle = FALSE,
#line 1699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1701
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1703
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1702
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1705
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1707
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1706
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1709
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1711
            .iv = TRAINER_PARTY_IVS(12, 31, 12, 12, 12, 12),
#line 1710
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1713
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1714
        .trainerName = _("TIFFANY"),
#line 1715
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1716
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1717
F_TRAINER_FEMALE | 
#line 1718
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1719
        .doubleBattle = FALSE,
#line 1720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1722
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1724
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1723
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1726
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1728
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1727
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1730
    [DIFFICULTY_NORMAL][TRAINER_WINSTON] =
    {
#line 1731
        .trainerName = _("WINSTON"),
#line 1732
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1733
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1735
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1736
        .items = { ITEM_FULL_RESTORE },
#line 1737
        .doubleBattle = FALSE,
#line 1738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1740
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1740
            .heldItem = ITEM_NUGGET,
#line 1742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1741
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1744
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1745
        .trainerName = _("MOLLIE"),
#line 1746
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1747
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1748
F_TRAINER_FEMALE | 
#line 1749
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1750
        .doubleBattle = FALSE,
#line 1751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1753
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1754
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1757
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1759
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1758
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1761
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1762
        .trainerName = _("GARRET"),
#line 1763
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1764
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1766
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1767
        .items = { ITEM_FULL_RESTORE },
#line 1768
        .doubleBattle = FALSE,
#line 1769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1771
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1771
            .heldItem = ITEM_NUGGET,
#line 1773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1772
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1775
    [DIFFICULTY_NORMAL][TRAINER_STEVE] =
    {
#line 1776
        .trainerName = _("STEVE"),
#line 1777
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1778
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1780
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1781
        .doubleBattle = FALSE,
#line 1782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1784
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1785
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1788
    [DIFFICULTY_NORMAL][TRAINER_THALIA] =
    {
#line 1789
        .trainerName = _("THALIA"),
#line 1790
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1791
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1792
F_TRAINER_FEMALE | 
#line 1793
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1794
        .doubleBattle = FALSE,
#line 1795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1797
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1798
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1801
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1802
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1805
    [DIFFICULTY_NORMAL][TRAINER_MARCUS] =
    {
#line 1806
        .trainerName = _("MARCUS"),
#line 1807
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1808
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1810
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1811
        .doubleBattle = FALSE,
#line 1812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1814
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1815
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1818
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1819
        .trainerName = _("GRUNT"),
#line 1820
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1821
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1822
F_TRAINER_FEMALE | 
#line 1823
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1824
        .doubleBattle = FALSE,
#line 1825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1827
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1828
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1831
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1832
        .trainerName = _("LUIS"),
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
            .species = SPECIES_JYNX,
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
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1845
        .trainerName = _("DOMINIK"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1853
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1854
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1857
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1858
        .trainerName = _("DOUGLAS"),
#line 1859
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1860
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1862
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1863
        .doubleBattle = FALSE,
#line 1864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1866
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1868
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1867
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1870
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1872
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1871
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1874
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1875
        .trainerName = _("DARRIN"),
#line 1876
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1877
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1879
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1880
        .doubleBattle = FALSE,
#line 1881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1883
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1885
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1884
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1887
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1889
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1888
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1891
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1893
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1892
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1895
    [DIFFICULTY_NORMAL][TRAINER_TONY] =
    {
#line 1896
        .trainerName = _("TONY"),
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
            .species = SPECIES_RAMPARDOS,
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
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1909
        .trainerName = _("JEROME"),
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
            .species = SPECIES_HERDIER,
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
    [DIFFICULTY_NORMAL][TRAINER_MATTI] =
    {
#line 1922
        .trainerName = _("MATTI"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1930
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1931
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1934
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 1935
        .trainerName = _("DAVID"),
#line 1936
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1937
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1939
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1940
        .doubleBattle = FALSE,
#line 1941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1943
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1944
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1947
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1948
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1951
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 1952
        .trainerName = _("SPENCER"),
#line 1953
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1954
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1956
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1957
        .doubleBattle = FALSE,
#line 1958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1960
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1961
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1964
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1965
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1968
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 1969
        .trainerName = _("ROLAND"),
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
            .species = SPECIES_WARTORTLE,
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
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 1982
        .trainerName = _("NOLEN"),
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
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1991
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1994
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 1995
        .trainerName = _("STAN"),
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
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2005
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2004
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2007
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 2008
        .trainerName = _("BARRY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2016
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2017
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2020
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 2021
        .trainerName = _("DEAN"),
#line 2022
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2023
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2025
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2026
        .doubleBattle = FALSE,
#line 2027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2029
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2030
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2033
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2034
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2037
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2039
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2038
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2041
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 2042
        .trainerName = _("RODNEY"),
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
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2051
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2054
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 2055
        .trainerName = _("RICHARD"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2063
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2064
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2067
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2068
        .trainerName = _("HERMAN"),
#line 2069
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2070
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2072
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2073
        .doubleBattle = FALSE,
#line 2074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2076
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2077
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2080
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2082
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2081
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2084
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2085
        .trainerName = _("SANTIAGO"),
#line 2086
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2087
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2089
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2090
        .doubleBattle = FALSE,
#line 2091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2093
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2094
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2097
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2099
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2098
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2101
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2102
        .trainerName = _("GILBERT"),
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
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2111
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2114
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2115
        .trainerName = _("FRANKLIN"),
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
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2124
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2127
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2128
        .trainerName = _("KEVIN"),
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
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2137
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2140
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2141
        .trainerName = _("JACK"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2149
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2150
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2153
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2154
        .trainerName = _("DUDLEY"),
#line 2155
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2156
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2158
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2159
        .doubleBattle = FALSE,
#line 2160
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2162
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2164
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2163
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2166
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2167
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2170
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2171
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2174
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2175
        .trainerName = _("CHAD"),
#line 2176
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2177
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2179
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2180
        .doubleBattle = FALSE,
#line 2181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2183
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2184
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2187
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2188
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2191
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2192
        .trainerName = _("TAKAO"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2200
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2202
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2201
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2204
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2205
        .trainerName = _("HITOSHI"),
#line 2206
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2207
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2209
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2210
        .doubleBattle = FALSE,
#line 2211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2213
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2215
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2214
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2217
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2219
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2218
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2221
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2222
        .trainerName = _("KIYO"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2230
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2232
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2231
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2234
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2235
        .trainerName = _("KOICHI"),
#line 2236
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2237
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2239
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2240
        .doubleBattle = FALSE,
#line 2241
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2243
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2245
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2244
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2247
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2249
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2248
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2251
    [DIFFICULTY_NORMAL][TRAINER_NOB] =
    {
#line 2252
        .trainerName = _("NOB"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2260
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2262
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2261
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2264
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2265
        .trainerName = _("YUJI"),
#line 2266
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2267
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2269
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2270
        .doubleBattle = FALSE,
#line 2271
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2273
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2275
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2274
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2277
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2279
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2278
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2281
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2282
        .trainerName = _("DAISUKE"),
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
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2292
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2291
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2294
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2295
        .trainerName = _("ATSUSHI"),
#line 2296
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2297
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2299
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2300
        .doubleBattle = FALSE,
#line 2301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2303
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2305
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2304
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2307
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2308
        .trainerName = _("KIRK"),
#line 2309
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2310
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2312
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2313
        .doubleBattle = FALSE,
#line 2314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2316
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2318
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2317
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2320
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2322
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2321
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2324
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2325
        .trainerName = _("GRUNT"),
#line 2326
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2327
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2328
F_TRAINER_FEMALE | 
#line 2329
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2330
        .doubleBattle = FALSE,
#line 2331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2333
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2334
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2337
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2338
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2341
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2342
        .trainerName = _("GRUNT"),
#line 2343
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2344
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2346
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2347
        .doubleBattle = FALSE,
#line 2348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2350
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2352
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2351
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2354
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2355
        .trainerName = _("SHAWN"),
#line 2356
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2357
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2359
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2360
        .doubleBattle = FALSE,
#line 2361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2363
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2365
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2364
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2367
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2369
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2368
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2371
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO] =
    {
#line 2372
        .trainerName = _("FERNANDO"),
#line 2373
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2374
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2376
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2377
        .doubleBattle = FALSE,
#line 2378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2380
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2381
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2384
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2385
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2388
    [DIFFICULTY_NORMAL][TRAINER_DALTON] =
    {
#line 2389
        .trainerName = _("DALTON"),
#line 2390
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2391
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2393
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2394
        .doubleBattle = FALSE,
#line 2395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2397
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2398
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2401
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2402
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2405
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2406
        .trainerName = _("COLE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2414
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2416
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2415
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2418
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2419
        .trainerName = _("JEFF"),
#line 2420
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2421
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2423
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2424
        .doubleBattle = FALSE,
#line 2425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2427
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2429
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2428
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2431
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2433
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2432
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2435
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2436
        .trainerName = _("AXLE"),
#line 2437
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2438
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2440
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2441
        .doubleBattle = FALSE,
#line 2442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2444
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2446
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2445
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2447
                MOVE_DRAGON_PULSE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2451
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2452
        .trainerName = _("JACE"),
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
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2462
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2461
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2464
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2465
        .trainerName = _("KEEGAN"),
#line 2466
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2467
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2469
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2470
        .doubleBattle = FALSE,
#line 2471
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2473
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2475
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2474
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2476
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_BREATH,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 2480
    [DIFFICULTY_NORMAL][TRAINER_BERNIE] =
    {
#line 2481
        .trainerName = _("BERNIE"),
#line 2482
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2483
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2485
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2486
        .doubleBattle = FALSE,
#line 2487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2489
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2490
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2493
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2495
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2494
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2497
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2498
        .trainerName = _("DREW"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2506
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2507
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2510
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2511
        .trainerName = _("BEAU"),
#line 2512
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2513
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2515
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2516
        .doubleBattle = FALSE,
#line 2517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2519
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2520
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2523
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2524
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2527
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2528
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2532
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2533
        .trainerName = _("LARRY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2541
            .species = SPECIES_ELGYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2542
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2545
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2546
        .trainerName = _("SHANE"),
#line 2547
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2548
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2550
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2551
        .doubleBattle = FALSE,
#line 2552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2554
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2555
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2558
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2559
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2562
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2563
        .trainerName = _("JUSTIN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2571
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2572
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2575
    [DIFFICULTY_NORMAL][TRAINER_ETHAN] =
    {
#line 2576
        .trainerName = _("ETHAN"),
#line 2577
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2578
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2580
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2581
        .doubleBattle = FALSE,
#line 2582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2584
            .species = SPECIES_BRONZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2585
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2588
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2589
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2592
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2593
        .trainerName = _("AUTUMN"),
#line 2594
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2595
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2596
F_TRAINER_FEMALE | 
#line 2597
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2598
        .doubleBattle = FALSE,
#line 2599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2601
            .species = SPECIES_NIDORAN_F,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2602
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2605
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2606
        .trainerName = _("TRAVIS"),
#line 2607
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2608
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2610
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2611
        .doubleBattle = FALSE,
#line 2612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2614
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2615
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2618
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2619
        .trainerName = _("BRENT"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2627
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2629
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2628
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2631
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2632
        .trainerName = _("DONALD"),
#line 2633
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2634
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2636
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2637
        .doubleBattle = FALSE,
#line 2638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2640
            .species = SPECIES_WATCHOG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2642
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2641
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2644
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2646
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2645
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2648
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2650
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2649
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2652
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2653
        .trainerName = _("TAYLOR"),
#line 2654
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2655
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2657
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2658
        .doubleBattle = FALSE,
#line 2659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2661
            .species = SPECIES_CRUSTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2663
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2662
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2665
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2667
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2666
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2669
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2670
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2673
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY] =
    {
#line 2674
        .trainerName = _("JEFFREY"),
#line 2675
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2676
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2678
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2679
        .doubleBattle = FALSE,
#line 2680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2682
            .species = SPECIES_BEHEEYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2684
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2683
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2686
            .species = SPECIES_VESPIQUEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2687
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2690
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2691
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2694
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2695
        .trainerName = _("DEREK"),
#line 2696
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2697
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2699
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2700
        .doubleBattle = FALSE,
#line 2701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2703
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2705
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2704
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2707
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2709
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2708
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2711
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2712
        .trainerName = _("EDWARD"),
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
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2721
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2724
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2725
        .trainerName = _("PRESTON"),
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
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2734
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2737
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2738
        .trainerName = _("VIRGIL"),
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
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2747
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2750
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2751
        .trainerName = _("BLAKE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2759
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2760
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2763
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2764
        .trainerName = _("WILLIAM"),
#line 2765
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2766
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2768
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2769
        .doubleBattle = FALSE,
#line 2770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2772
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2773
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2776
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2777
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2780
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2781
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2784
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2785
        .trainerName = _("JOSHUA"),
#line 2786
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2787
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2789
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2790
        .doubleBattle = FALSE,
#line 2791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2793
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2794
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2797
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2798
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2801
    [DIFFICULTY_NORMAL][TRAINER_CAMERON] =
    {
#line 2802
        .trainerName = _("CAMERON"),
#line 2803
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2804
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
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
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2811
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2814
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2815
        .trainerName = _("JACLYN"),
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
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2824
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2827
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2828
        .trainerName = _("HANNAH"),
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
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2837
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2840
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2841
        .trainerName = _("SAMANTHA"),
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
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2851
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2850
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2853
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2854
        .trainerName = _("MAURA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2862
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2864
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2863
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2866
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2867
        .trainerName = _("KAYLA"),
#line 2868
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2869
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2870
F_TRAINER_FEMALE | 
#line 2871
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2872
        .doubleBattle = FALSE,
#line 2873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2875
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2876
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2879
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2880
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2883
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2884
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2887
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2888
        .trainerName = _("ALEXIS"),
#line 2889
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2890
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2891
F_TRAINER_FEMALE | 
#line 2892
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2893
        .doubleBattle = FALSE,
#line 2894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2896
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2897
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2900
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2901
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2904
    [DIFFICULTY_NORMAL][TRAINER_JACKI] =
    {
#line 2905
        .trainerName = _("JACKI"),
#line 2906
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2907
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2908
F_TRAINER_FEMALE | 
#line 2909
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2910
        .doubleBattle = FALSE,
#line 2911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2913
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2914
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2917
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2918
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2921
    [DIFFICULTY_NORMAL][TRAINER_WALTER] =
    {
#line 2922
        .trainerName = _("WALTER"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2930
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2931
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2934
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 2935
        .trainerName = _("MICAH"),
#line 2936
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2937
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2939
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2940
        .doubleBattle = FALSE,
#line 2941
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2943
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2944
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2947
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2948
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2951
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 2952
        .trainerName = _("THOMAS"),
#line 2953
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2954
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2956
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2957
        .doubleBattle = FALSE,
#line 2958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2960
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2961
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2964
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 2965
        .trainerName = _("MATT"),
#line 2966
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2967
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 2969
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2970
        .doubleBattle = FALSE,
#line 2971
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2972
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2974
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2974
            .heldItem = ITEM_CHOICE_SPECS,
#line 2978
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2975
            .ability = ABILITY_SCRAPPY,
#line 2976
            .lvl = 75,
#line 2977
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2978
                MOVE_BOOMBURST,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 2983
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2983
            .heldItem = ITEM_CHOICE_BAND,
#line 2987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2984
            .ability = ABILITY_KEEN_EYE,
#line 2985
            .lvl = 75,
#line 2986
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2987
                MOVE_BRICK_BREAK,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 2992
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2992
            .heldItem = ITEM_THROAT_SPRAY,
#line 2996
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2993
            .ability = ABILITY_BIG_PECKS,
#line 2994
            .lvl = 75,
#line 2995
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2996
                MOVE_SING,
                MOVE_PARTING_SHOT,
                MOVE_BOOMBURST,
                MOVE_ROOST,
            },
            },
            {
#line 3001
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3001
            .heldItem = ITEM_CHOICE_SCARF,
#line 3005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3002
            .ability = ABILITY_SHARPNESS,
#line 3003
            .lvl = 75,
#line 3004
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3005
                MOVE_SACRED_SWORD,
                MOVE_PSYCHO_CUT,
                MOVE_KNOCK_OFF,
                MOVE_LEAF_BLADE,
            },
            },
            {
#line 3010
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3010
            .heldItem = ITEM_LEFTOVERS,
#line 3014
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3011
            .ability = ABILITY_SERENE_GRACE,
#line 3012
            .lvl = 75,
#line 3013
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3014
                MOVE_RELIC_SONG,
                MOVE_CALM_MIND,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 3019
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3019
            .heldItem = ITEM_ROCKY_HELMET,
#line 3023
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3020
            .ability = ABILITY_CUTE_CHARM,
#line 3021
            .lvl = 75,
#line 3022
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3023
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_WAVE,
                MOVE_FLAMETHROWER,
                MOVE_ALLURING_VOICE,
            },
            },
        },
    },
#line 3029
    [DIFFICULTY_NORMAL][TRAINER_OZ] =
    {
#line 3030
        .trainerName = _("OZ"),
#line 3031
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3032
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 3034
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3035
        .doubleBattle = FALSE,
#line 3036
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3037
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3039
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3039
            .heldItem = ITEM_SCOPE_LENS,
#line 3044
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3040
            .ability = ABILITY_SNIPER,
#line 3041
            .lvl = 75,
#line 3043
            .nature = NATURE_JOLLY,
#line 3042
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3044
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 3049
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3049
            .heldItem = ITEM_CHARTI_BERRY,
#line 3054
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3050
            .ability = ABILITY_FLAME_BODY,
#line 3051
            .lvl = 75,
#line 3053
            .nature = NATURE_TIMID,
#line 3052
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3054
                MOVE_QUIVER_DANCE,
                MOVE_FLAMETHROWER,
                MOVE_MORNING_SUN,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 3059
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3059
            .heldItem = ITEM_CHOICE_SPECS,
#line 3064
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3060
            .ability = ABILITY_TINTED_LENS,
#line 3061
            .lvl = 75,
#line 3063
            .nature = NATURE_MODEST,
#line 3062
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3064
                MOVE_BUG_BUZZ,
                MOVE_AIR_SLASH,
                MOVE_HIDDEN_POWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3069
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3069
            .heldItem = ITEM_CHOICE_BAND,
#line 3074
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3070
            .ability = ABILITY_TECHNICIAN,
#line 3071
            .lvl = 75,
#line 3073
            .nature = NATURE_ADAMANT,
#line 3072
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3074
                MOVE_CLOSE_COMBAT,
                MOVE_BULLET_PUNCH,
                MOVE_U_TURN,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3079
            .species = SPECIES_GENESECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3079
            .heldItem = ITEM_DOUSE_DRIVE,
#line 3084
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3080
            .ability = ABILITY_DOWNLOAD,
#line 3081
            .lvl = 75,
#line 3083
            .nature = NATURE_HASTY,
#line 3082
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3084
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
                MOVE_TECHNO_BLAST,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3089
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3089
            .heldItem = ITEM_ASSAULT_VEST,
#line 3094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3090
            .ability = ABILITY_OVERCOAT,
#line 3091
            .lvl = 75,
#line 3093
            .nature = NATURE_ADAMANT,
#line 3092
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3094
                MOVE_X_SCISSOR,
                MOVE_LEAF_STORM,
                MOVE_TRIPLE_AXEL,
                MOVE_LOW_KICK,
            },
            },
        },
    },
#line 3099
    [DIFFICULTY_NORMAL][TRAINER_DIEGO] =
    {
#line 3100
        .trainerName = _("DIEGO"),
#line 3101
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3102
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3104
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3105
        .doubleBattle = FALSE,
#line 3106
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3107
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3109
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3109
            .heldItem = ITEM_LEFTOVERS,
#line 3113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3110
            .ability = ABILITY_DROUGHT,
#line 3111
            .lvl = 75,
#line 3112
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3113
                MOVE_SPIKES,
                MOVE_EARTHQUAKE,
                MOVE_STEALTH_ROCK,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 3118
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3118
            .heldItem = ITEM_MUSCLE_BAND,
#line 3122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3119
            .ability = ABILITY_FLAME_BODY,
#line 3120
            .lvl = 75,
#line 3121
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3122
                MOVE_PLAY_ROUGH,
                MOVE_MEGAHORN,
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
            },
            },
            {
#line 3127
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3127
            .heldItem = ITEM_LIFE_ORB,
#line 3131
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3128
            .ability = ABILITY_SPEED_BOOST,
#line 3129
            .lvl = 75,
#line 3130
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3131
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3137
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3137
            .heldItem = ITEM_ASSAULT_VEST,
#line 3141
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3138
            .ability = ABILITY_BLAZE,
#line 3139
            .lvl = 75,
#line 3140
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3141
                MOVE_SCORCHING_SANDS,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 3147
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3147
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3151
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3148
            .ability = ABILITY_LEVITATE,
#line 3149
            .lvl = 75,
#line 3150
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3151
                MOVE_OVERHEAT,
                MOVE_VOLT_SWITCH,
                MOVE_TOXIC,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 3157
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3157
            .heldItem = ITEM_CHOICE_SPECS,
#line 3161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3158
            .ability = ABILITY_INFILTRATOR,
#line 3159
            .lvl = 75,
#line 3160
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3161
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_TRICK,
            },
            },
        },
    },
#line 3167
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3168
        .trainerName = _("DRAKE"),
#line 3169
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3170
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3172
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3173
        .doubleBattle = FALSE,
#line 3174
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3175
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3177
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3177
            .heldItem = ITEM_LIFE_ORB,
#line 3181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3178
            .ability = ABILITY_SHEER_FORCE,
#line 3179
            .lvl = 75,
#line 3180
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3181
                MOVE_CRUNCH,
                MOVE_LIQUIDATION,
                MOVE_ICE_PUNCH,
                MOVE_IRON_TAIL,
            },
            },
            {
#line 3186
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3186
            .heldItem = ITEM_ASSAULT_VEST,
#line 3190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3187
            .ability = ABILITY_UNNERVE,
#line 3188
            .lvl = 75,
#line 3189
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3190
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3195
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .heldItem = ITEM_CHOICE_BAND,
#line 3199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3196
            .ability = ABILITY_PRESSURE,
#line 3197
            .lvl = 75,
#line 3198
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3199
                MOVE_AERIAL_ACE,
                MOVE_ICE_SHARD,
                MOVE_TRIPLE_AXEL,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3204
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3204
            .heldItem = ITEM_CHOICE_SPECS,
#line 3208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3205
            .ability = ABILITY_LEVITATE,
#line 3206
            .lvl = 75,
#line 3207
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3208
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3213
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3213
            .heldItem = ITEM_ROCKY_HELMET,
#line 3217
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3214
            .ability = ABILITY_INTIMIDATE,
#line 3215
            .lvl = 75,
#line 3216
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3217
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_FANG,
                MOVE_GUNK_SHOT,
            },
            },
            {
#line 3222
            .species = SPECIES_GIRATINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .heldItem = ITEM_LEFTOVERS,
#line 3226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3223
            .ability = ABILITY_PRESSURE,
#line 3224
            .lvl = 75,
#line 3225
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3226
                MOVE_POLTERGEIST,
                MOVE_OUTRAGE,
                MOVE_IRON_HEAD,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 3231
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
    {
#line 3232
        .trainerName = _("ALEC"),
#line 3233
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3234
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3236
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3237
        .doubleBattle = FALSE,
#line 3238
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3240
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3244
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3241
            .ability = ABILITY_STURDY,
#line 3242
            .lvl = 16,
#line 3243
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3245
                MOVE_STEALTH_ROCK,
                MOVE_COPYCAT,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3250
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3254
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3251
            .ability = ABILITY_LEVITATE,
#line 3252
            .lvl = 16,
#line 3253
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3255
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3260
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .heldItem = ITEM_SALAC_BERRY,
#line 3264
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3261
            .ability = ABILITY_SUCTION_CUPS,
#line 3262
            .lvl = 16,
#line 3263
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3265
                MOVE_ANCIENT_POWER,
                MOVE_CONFUSE_RAY,
                MOVE_INGRAIN,
                MOVE_MEGA_DRAIN,
            },
            },
            {
#line 3270
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3270
            .heldItem = ITEM_SALAC_BERRY,
#line 3274
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3271
            .ability = ABILITY_UNNERVE,
#line 3272
            .lvl = 16,
#line 3273
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3275
                MOVE_ROCK_SLIDE,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3280
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3281
        .trainerName = _("GARRETT"),
#line 3282
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3283
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3285
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3286
        .doubleBattle = FALSE,
#line 3287
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3289
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3290
            .ability = ABILITY_MARVEL_SCALE,
#line 3291
            .lvl = 22,
#line 3292
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3294
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3299
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3300
            .ability = ABILITY_TORRENT,
#line 3301
            .lvl = 22,
#line 3302
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3304
                MOVE_BUBBLEBEAM,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3309
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3309
            .heldItem = ITEM_SCOPE_LENS,
#line 3313
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3310
            .ability = ABILITY_SKILL_LINK,
#line 3311
            .lvl = 22,
#line 3312
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3314
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3319
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3319
            .heldItem = ITEM_WIDE_LENS,
#line 3323
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3320
            .ability = ABILITY_TORRENT,
#line 3321
            .lvl = 22,
#line 3322
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3324
                MOVE_SAND_TOMB,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3329
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3330
        .trainerName = _("SAM"),
#line 3331
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3332
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3334
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3335
        .doubleBattle = FALSE,
#line 3336
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3338
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3338
            .heldItem = ITEM_METAL_COAT,
#line 3342
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3339
            .ability = ABILITY_MAGNET_PULL,
#line 3340
            .lvl = 32,
#line 3341
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3343
                MOVE_MAGNET_RISE,
                MOVE_THUNDER_SHOCK,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3348
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .heldItem = ITEM_SILK_SCARF,
#line 3352
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3349
            .ability = ABILITY_DOWNLOAD,
#line 3350
            .lvl = 32,
#line 3351
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3353
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3358
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3358
            .heldItem = ITEM_SITRUS_BERRY,
#line 3362
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3359
            .ability = ABILITY_VITAL_SPIRIT,
#line 3361
            .lvl = 32,
#line 3360
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3363
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_SCREECH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3368
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3368
            .heldItem = ITEM_SITRUS_BERRY,
#line 3372
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3369
            .ability = ABILITY_INTIMIDATE,
#line 3371
            .lvl = 32,
#line 3370
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3372
                MOVE_BITE,
                MOVE_VOLT_SWITCH,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3377
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3377
            .heldItem = ITEM_MAGNET,
#line 3381
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3378
            .ability = ABILITY_STATIC,
#line 3379
            .lvl = 32,
#line 3380
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3382
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3387
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3388
        .trainerName = _("JOSE"),
#line 3389
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3390
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 3392
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3393
        .doubleBattle = FALSE,
#line 3394
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3396
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3396
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3400
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3397
            .ability = ABILITY_NATURAL_CURE,
#line 3398
            .lvl = 39,
#line 3399
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3401
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3406
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .heldItem = ITEM_CHARCOAL,
#line 3410
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3407
            .ability = ABILITY_BLAZE,
#line 3408
            .lvl = 39,
#line 3409
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3411
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3416
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3416
            .heldItem = ITEM_ASSAULT_VEST,
#line 3420
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3417
            .ability = ABILITY_LEVITATE,
#line 3418
            .lvl = 39,
#line 3419
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3421
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3426
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3426
            .heldItem = ITEM_ROCKY_HELMET,
#line 3430
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3427
            .ability = ABILITY_MARVEL_SCALE,
#line 3428
            .lvl = 39,
#line 3429
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3431
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3436
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .heldItem = ITEM_DRAGON_FANG,
#line 3440
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3437
            .ability = ABILITY_SNIPER,
#line 3438
            .lvl = 39,
#line 3439
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3441
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
                MOVE_YAWN,
            },
            },
            {
#line 3446
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3446
            .heldItem = ITEM_LIFE_ORB,
#line 3450
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3447
            .ability = ABILITY_ROUGH_SKIN,
#line 3448
            .lvl = 39,
#line 3449
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3456
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3457
        .trainerName = _("GRAYSON"),
#line 3458
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3459
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3461
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3462
        .doubleBattle = FALSE,
#line 3463
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3465
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3465
            .heldItem = ITEM_MUSCLE_BAND,
#line 3469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3466
            .ability = ABILITY_IRON_FIST,
#line 3467
            .lvl = 43,
#line 3468
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3469
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3475
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3475
            .heldItem = ITEM_BLACK_BELT,
#line 3479
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3476
            .ability = ABILITY_GUTS,
#line 3477
            .lvl = 43,
#line 3478
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3479
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3484
            .species = SPECIES_LOPUNNY,
#line 3484
            .gender = TRAINER_MON_FEMALE,
#line 3484
            .heldItem = ITEM_ROCKY_HELMET,
#line 3488
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3485
            .ability = ABILITY_CUTE_CHARM,
#line 3486
            .lvl = 43,
#line 3487
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3488
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3493
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3493
            .heldItem = ITEM_FOCUS_BAND,
#line 3497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3494
            .ability = ABILITY_MOXIE,
#line 3495
            .lvl = 43,
#line 3496
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3497
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3503
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3503
            .heldItem = ITEM_EXPERT_BELT,
#line 3507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3504
            .ability = ABILITY_INNER_FOCUS,
#line 3505
            .lvl = 43,
#line 3506
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3507
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3512
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3512
            .heldItem = ITEM_FOCUS_BAND,
#line 3516
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3513
            .ability = ABILITY_POISON_TOUCH,
#line 3514
            .lvl = 43,
#line 3515
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3516
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3521
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3522
        .trainerName = _("MATTHEW"),
#line 3523
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3524
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3526
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3527
        .doubleBattle = FALSE,
#line 3528
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3530
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3530
            .heldItem = ITEM_AIR_BALLOON,
#line 3534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3531
            .ability = ABILITY_STURDY,
#line 3532
            .lvl = 51,
#line 3533
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3534
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3539
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3539
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3543
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3540
            .ability = ABILITY_WEAK_ARMOR,
#line 3541
            .lvl = 51,
#line 3542
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3543
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3548
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3548
            .heldItem = ITEM_ASSAULT_VEST,
#line 3552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3549
            .ability = ABILITY_CLEAR_BODY,
#line 3550
            .lvl = 51,
#line 3551
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3552
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3557
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3557
            .heldItem = ITEM_CHOICE_SPECS,
#line 3561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3558
            .ability = ABILITY_COMPETITIVE,
#line 3559
            .lvl = 51,
#line 3560
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3561
                MOVE_BRINE,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_ROOST,
            },
            },
            {
#line 3566
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3566
            .heldItem = ITEM_CHOICE_BAND,
#line 3570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3567
            .ability = ABILITY_TECHNICIAN,
#line 3568
            .lvl = 51,
#line 3569
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3570
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3575
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3575
            .heldItem = ITEM_ROCKY_HELMET,
#line 3579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3576
            .ability = ABILITY_IRON_BARBS,
#line 3577
            .lvl = 51,
#line 3578
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3579
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3584
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3585
        .trainerName = _("MARK"),
#line 3586
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3587
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3589
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3590
        .doubleBattle = FALSE,
#line 3591
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3593
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3593
            .heldItem = ITEM_ROCKY_HELMET,
#line 3597
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3594
            .ability = ABILITY_FLASH_FIRE,
#line 3595
            .lvl = 61,
#line 3596
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3597
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3602
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3602
            .heldItem = ITEM_CHOICE_SPECS,
#line 3606
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3603
            .ability = ABILITY_PIXILATE,
#line 3604
            .lvl = 61,
#line 3605
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3606
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3611
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3611
            .heldItem = ITEM_CHOICE_BAND,
#line 3614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3612
            .ability = ABILITY_HUGE_POWER,
#line 3613
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3614
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3619
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3619
            .heldItem = ITEM_CHOICE_SCARF,
#line 3623
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3620
            .ability = ABILITY_SERENE_GRACE,
#line 3621
            .lvl = 61,
#line 3622
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3623
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3628
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3628
            .heldItem = ITEM_LEFTOVERS,
#line 3632
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3629
            .ability = ABILITY_MAGIC_GUARD,
#line 3630
            .lvl = 61,
#line 3631
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3632
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3637
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .heldItem = ITEM_OCCA_BERRY,
#line 3640
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3638
            .ability = ABILITY_INTIMIDATE,
#line 3639
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3640
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3645
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 3646
        .trainerName = _("XANDER"),
#line 3647
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3648
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3650
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3651
        .doubleBattle = TRUE,
#line 3652
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3654
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3654
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3658
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3655
            .ability = ABILITY_CURSED_BODY,
#line 3656
            .lvl = 67,
#line 3657
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3658
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3663
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3663
            .heldItem = ITEM_SITRUS_BERRY,
#line 3667
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3664
            .ability = ABILITY_MUMMY,
#line 3665
            .lvl = 67,
#line 3666
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3667
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
            {
#line 3672
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3672
            .heldItem = ITEM_CHOICE_SPECS,
#line 3676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3673
            .ability = ABILITY_FLASH_FIRE,
#line 3674
            .lvl = 67,
#line 3675
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3676
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3681
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3681
            .heldItem = ITEM_SITRUS_BERRY,
#line 3685
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3682
            .ability = ABILITY_LEVITATE,
#line 3683
            .lvl = 67,
#line 3684
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3685
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3690
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3690
            .heldItem = ITEM_CHOICE_BAND,
#line 3694
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3691
            .ability = ABILITY_NO_GUARD,
#line 3692
            .lvl = 67,
#line 3693
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3694
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3699
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3699
            .heldItem = ITEM_LEFTOVERS,
#line 3703
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3700
            .ability = ABILITY_PRESSURE,
#line 3701
            .lvl = 67,
#line 3702
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3703
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 3708
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3709
        .trainerName = _("JERRY"),
#line 3710
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3711
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3713
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3714
        .doubleBattle = FALSE,
#line 3715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3717
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3719
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3718
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3721
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3722
        .trainerName = _("TED"),
#line 3723
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3724
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3726
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3727
        .doubleBattle = FALSE,
#line 3728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3730
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3732
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3731
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3734
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3735
        .trainerName = _("PAUL"),
#line 3736
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3737
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3740
        .doubleBattle = FALSE,
#line 3741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3743
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3745
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3744
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3747
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3749
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3748
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3751
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3753
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3752
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3755
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3756
        .trainerName = _("KAREN"),
#line 3757
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3758
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3759
F_TRAINER_FEMALE | 
#line 3760
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3761
        .doubleBattle = FALSE,
#line 3762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3764
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3766
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3765
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3768
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3769
        .trainerName = _("GEORGIA"),
#line 3770
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3771
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3772
F_TRAINER_FEMALE | 
#line 3773
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3774
        .doubleBattle = FALSE,
#line 3775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3777
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3779
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3778
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3781
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3783
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3782
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3785
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3786
        .trainerName = _("KATE & JOY"),
#line 3787
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3788
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3790
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3791
        .doubleBattle = TRUE,
#line 3792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3794
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3795
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3798
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3799
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3803
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3804
        .trainerName = _("ANNA & MEG"),
#line 3805
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3806
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3808
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3809
        .doubleBattle = TRUE,
#line 3810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3812
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3813
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3816
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3817
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3820
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3821
        .trainerName = _("VICTOR"),
#line 3822
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3823
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3825
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3826
        .doubleBattle = FALSE,
#line 3827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3829
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3829
            .heldItem = ITEM_ORAN_BERRY,
#line 3831
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3830
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3833
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3833
            .heldItem = ITEM_ORAN_BERRY,
#line 3835
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3834
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3837
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3838
        .trainerName = _("MIGUEL"),
#line 3839
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3840
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3842
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3843
        .doubleBattle = FALSE,
#line 3844
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3846
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3846
            .heldItem = ITEM_ORAN_BERRY,
#line 3848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3847
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3850
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3851
        .trainerName = _("COLTON"),
#line 3852
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3853
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3855
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3856
        .doubleBattle = FALSE,
#line 3857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3859
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3859
            .heldItem = ITEM_ORAN_BERRY,
#line 3861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3860
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3862
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3867
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3867
            .heldItem = ITEM_ORAN_BERRY,
#line 3869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3868
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3870
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3875
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3875
            .heldItem = ITEM_ORAN_BERRY,
#line 3877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3876
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3878
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3883
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3883
            .heldItem = ITEM_ORAN_BERRY,
#line 3885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3884
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3886
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3891
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3891
            .heldItem = ITEM_ORAN_BERRY,
#line 3893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3892
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3894
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3899
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3899
            .heldItem = ITEM_ORAN_BERRY,
#line 3901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3900
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3902
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3907
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3908
        .trainerName = _("VICTORIA"),
#line 3909
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3910
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3911
F_TRAINER_FEMALE | 
#line 3912
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3913
        .doubleBattle = FALSE,
#line 3914
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3916
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3916
            .heldItem = ITEM_ORAN_BERRY,
#line 3918
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3917
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3920
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3921
        .trainerName = _("VANESSA"),
#line 3922
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3923
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3924
F_TRAINER_FEMALE | 
#line 3925
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3926
        .doubleBattle = FALSE,
#line 3927
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3929
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3929
            .heldItem = ITEM_ORAN_BERRY,
#line 3931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3930
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3933
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3934
        .trainerName = _("BETHANY"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3942
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3942
            .heldItem = ITEM_ORAN_BERRY,
#line 3944
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3943
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3946
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3946
            .heldItem = ITEM_ORAN_BERRY,
#line 3948
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3947
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3950
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3950
            .heldItem = ITEM_ORAN_BERRY,
#line 3952
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3951
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3954
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3955
        .trainerName = _("ISABEL"),
#line 3956
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3957
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3958
F_TRAINER_FEMALE | 
#line 3959
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3960
        .doubleBattle = FALSE,
#line 3961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3963
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3963
            .heldItem = ITEM_ORAN_BERRY,
#line 3965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3964
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3967
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3967
            .heldItem = ITEM_ORAN_BERRY,
#line 3969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3968
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3971
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3972
        .trainerName = _("TIMOTHY"),
#line 3973
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3974
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3976
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3977
        .doubleBattle = FALSE,
#line 3978
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3980
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3981
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3984
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3985
        .trainerName = _("VICKY"),
#line 3986
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3987
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3988
F_TRAINER_FEMALE | 
#line 3989
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3990
        .doubleBattle = FALSE,
#line 3991
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3993
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3994
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3997
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 3998
        .trainerName = _("SHELBY"),
#line 3999
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 4000
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 4001
F_TRAINER_FEMALE | 
#line 4002
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4003
        .doubleBattle = FALSE,
#line 4004
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4006
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4008
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4007
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4010
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4012
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4011
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4014
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4015
        .trainerName = _("CALVIN"),
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
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4024
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4027
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4028
        .trainerName = _("BILLY"),
#line 4029
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4030
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4032
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4033
        .doubleBattle = FALSE,
#line 4034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4036
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4037
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4040
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4041
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4044
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4045
        .trainerName = _("JOSH"),
#line 4046
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4047
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4049
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4050
        .doubleBattle = FALSE,
#line 4051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4053
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4055
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4054
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4056
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4058
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4059
        .trainerName = _("TOMMY"),
#line 4060
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4061
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4063
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4064
        .doubleBattle = FALSE,
#line 4065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4067
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4069
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4068
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4071
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4073
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4072
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4075
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4076
        .trainerName = _("JOEY"),
#line 4077
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4078
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4080
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4081
        .doubleBattle = FALSE,
#line 4082
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4084
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4086
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4085
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4088
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4090
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4089
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4092
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4093
        .trainerName = _("BEN"),
#line 4094
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4095
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4097
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4098
        .doubleBattle = FALSE,
#line 4099
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4101
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4103
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4102
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4106
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4108
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4107
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4111
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4112
        .trainerName = _("QUINCY"),
#line 4113
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4114
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4116
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4117
        .items = { ITEM_FULL_RESTORE },
#line 4118
        .doubleBattle = FALSE,
#line 4119
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4121
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4123
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4122
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4125
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4127
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4126
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4129
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4130
        .trainerName = _("KATELYNN"),
#line 4131
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4132
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4133
F_TRAINER_FEMALE | 
#line 4134
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4135
        .items = { ITEM_FULL_RESTORE },
#line 4136
        .doubleBattle = FALSE,
#line 4137
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4139
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4141
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4140
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4142
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4147
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4149
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4148
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4150
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4155
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4156
        .trainerName = _("JAYLEN"),
#line 4157
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4158
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4160
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4161
        .doubleBattle = FALSE,
#line 4162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4164
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4165
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4168
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4169
        .trainerName = _("DILLON"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4177
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4178
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4181
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4182
        .trainerName = _("EDDIE"),
#line 4183
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4184
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4186
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4187
        .doubleBattle = FALSE,
#line 4188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4190
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4191
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4194
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4195
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4198
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4199
        .trainerName = _("ALLEN"),
#line 4200
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4201
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4203
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4204
        .doubleBattle = FALSE,
#line 4205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4207
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4208
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4211
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4212
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4215
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4216
        .trainerName = _("TIMMY"),
#line 4217
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4218
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4220
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4221
        .doubleBattle = FALSE,
#line 4222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4224
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4225
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4228
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4229
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4232
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4233
        .trainerName = _("FATTY"),
#line 4234
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4235
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4237
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4238
        .doubleBattle = FALSE,
#line 4239
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4240
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4242
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4242
            .heldItem = ITEM_LIFE_ORB,
#line 4246
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4243
            .ability = ABILITY_THICK_FAT,
#line 4244
            .lvl = 78,
#line 4245
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4247
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4252
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .heldItem = ITEM_CHOICE_BAND,
#line 4256
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4253
            .ability = ABILITY_INTIMIDATE,
#line 4254
            .lvl = 78,
#line 4255
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4257
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4262
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .heldItem = ITEM_LEFTOVERS,
#line 4266
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 4, 252, 252),
#line 4267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4263
            .ability = ABILITY_CHLOROPHYLL,
#line 4264
            .lvl = 78,
#line 4265
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4267
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4272
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4272
            .heldItem = ITEM_FOCUS_SASH,
#line 4276
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4273
            .ability = ABILITY_MAGIC_GUARD,
#line 4274
            .lvl = 78,
#line 4275
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4277
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4282
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4282
            .heldItem = ITEM_WIDE_LENS,
#line 4286
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4283
            .ability = ABILITY_STATIC,
#line 4284
            .lvl = 78,
#line 4285
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4287
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4292
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4292
            .heldItem = ITEM_EVIOLITE,
#line 4296
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4293
            .ability = ABILITY_SWIFT_SWIM,
#line 4294
            .lvl = 78,
#line 4295
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4297
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4302
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4303
        .trainerName = _("ANDREW"),
#line 4304
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4305
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4307
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4308
        .doubleBattle = FALSE,
#line 4309
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4311
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4312
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4315
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4316
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4319
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4320
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4323
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4324
        .trainerName = _("IVAN"),
#line 4325
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4326
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4328
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4329
        .doubleBattle = FALSE,
#line 4330
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4332
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4333
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4336
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4337
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4340
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4341
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4344
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4345
        .trainerName = _("CLAUDE"),
#line 4346
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4347
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4349
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4350
        .doubleBattle = FALSE,
#line 4351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4353
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4354
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4357
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4358
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4361
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4362
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4365
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4366
        .trainerName = _("ELLIOT"),
#line 4367
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4368
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4370
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4371
        .doubleBattle = FALSE,
#line 4372
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4374
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4376
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4375
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4378
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4379
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4382
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4383
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4386
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4387
        .trainerName = _("NED"),
#line 4388
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4389
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4391
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4392
        .doubleBattle = FALSE,
#line 4393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4395
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4397
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4396
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4399
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4400
        .trainerName = _("DALE"),
#line 4401
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4402
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4404
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4405
        .doubleBattle = FALSE,
#line 4406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4408
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4409
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4412
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4413
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4416
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4417
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4420
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4421
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4424
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4425
        .trainerName = _("NOLAN"),
#line 4426
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4427
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4429
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4430
        .doubleBattle = FALSE,
#line 4431
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4433
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4434
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4437
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4438
        .trainerName = _("BARNY"),
#line 4439
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4440
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4442
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4443
        .doubleBattle = FALSE,
#line 4444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4446
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4447
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4450
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4452
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4451
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4454
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4455
        .trainerName = _("WADE"),
#line 4456
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4457
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4459
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4460
        .doubleBattle = FALSE,
#line 4461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4463
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4464
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4466
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4467
        .trainerName = _("ABIGAL"),
#line 4468
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4469
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4470
F_TRAINER_FEMALE | 
#line 4471
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4472
        .doubleBattle = FALSE,
#line 4473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4475
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4476
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4478
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4479
        .trainerName = _("CARTER"),
#line 4480
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4481
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4483
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4484
        .doubleBattle = FALSE,
#line 4485
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4487
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4489
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4488
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4491
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4493
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4492
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4495
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4496
        .trainerName = _("RONALD"),
#line 4497
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4498
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4500
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4501
        .doubleBattle = FALSE,
#line 4502
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4504
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4505
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4509
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4510
        .trainerName = _("JACOB"),
#line 4511
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4512
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4514
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4515
        .doubleBattle = FALSE,
#line 4516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4518
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4520
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4519
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4522
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4524
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4523
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4526
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4528
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4527
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4530
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4531
        .trainerName = _("ANTHONY"),
#line 4532
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4533
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4535
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4536
        .doubleBattle = FALSE,
#line 4537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4539
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4540
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4543
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4544
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4547
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4548
        .trainerName = _("BENJAMIN"),
#line 4549
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4550
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4552
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4553
        .doubleBattle = FALSE,
#line 4554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4556
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4557
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4560
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4561
        .trainerName = _("JASMINE"),
#line 4562
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4563
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4564
F_TRAINER_FEMALE | 
#line 4565
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4566
        .doubleBattle = FALSE,
#line 4567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4569
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4571
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4570
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4573
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4574
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4577
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4578
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4581
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4582
        .trainerName = _("DYLAN"),
#line 4583
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4584
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4586
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4587
        .doubleBattle = FALSE,
#line 4588
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4590
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4591
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4594
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4595
        .trainerName = _("MARIA"),
#line 4596
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4597
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4598
F_TRAINER_FEMALE | 
#line 4599
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4600
        .doubleBattle = FALSE,
#line 4601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4603
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4604
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4607
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4608
        .trainerName = _("CAMDEN"),
#line 4609
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4610
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4612
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4613
        .doubleBattle = FALSE,
#line 4614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4616
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4617
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4620
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4621
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4624
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4625
        .trainerName = _("DEMETRIUS"),
#line 4626
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4627
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4629
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4630
        .doubleBattle = FALSE,
#line 4631
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4633
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4634
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4637
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4638
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4641
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4642
        .trainerName = _("ISAIAH"),
#line 4643
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4644
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
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
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4651
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4654
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4655
        .trainerName = _("PABLO"),
#line 4656
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4657
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
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
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4664
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4667
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4668
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4671
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4672
        .trainerName = _("CHASE"),
#line 4673
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4674
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4676
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4677
        .doubleBattle = FALSE,
#line 4678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4680
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4681
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4684
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4686
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4685
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4688
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4689
        .trainerName = _("ISOBEL"),
#line 4690
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4691
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4692
F_TRAINER_FEMALE | 
#line 4693
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4694
        .doubleBattle = FALSE,
#line 4695
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4697
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4698
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4701
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4702
        .trainerName = _("DONNY"),
#line 4703
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4704
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4705
F_TRAINER_FEMALE | 
#line 4706
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4707
        .doubleBattle = FALSE,
#line 4708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4710
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4711
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4714
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4716
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4715
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4718
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4719
        .trainerName = _("TALIA"),
#line 4720
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4721
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4722
F_TRAINER_FEMALE | 
#line 4723
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4724
        .doubleBattle = FALSE,
#line 4725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4727
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4728
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4731
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4732
        .trainerName = _("KATELYN"),
#line 4733
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4734
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4735
F_TRAINER_FEMALE | 
#line 4736
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4737
        .doubleBattle = FALSE,
#line 4738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4740
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4741
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4744
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4745
        .trainerName = _("ALLISON"),
#line 4746
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4747
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4748
F_TRAINER_FEMALE | 
#line 4749
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4750
        .doubleBattle = FALSE,
#line 4751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4754
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4757
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4758
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4761
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4762
        .trainerName = _("NICOLAS"),
#line 4763
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4764
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4766
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4767
        .doubleBattle = FALSE,
#line 4768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4770
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4772
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4771
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4774
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4775
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4778
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4779
        .trainerName = _("AARON"),
#line 4780
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4781
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4783
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4784
        .doubleBattle = FALSE,
#line 4785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4787
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4788
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4791
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4792
        .trainerName = _("PERRY"),
#line 4793
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4794
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4796
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4797
        .doubleBattle = FALSE,
#line 4798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4800
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4801
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4804
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4805
        .trainerName = _("HUGH"),
#line 4806
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4807
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4809
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4810
        .doubleBattle = FALSE,
#line 4811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4813
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4814
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4817
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4818
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4821
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4822
        .trainerName = _("PHIL"),
#line 4823
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4824
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4826
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4827
        .doubleBattle = FALSE,
#line 4828
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4830
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4831
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4834
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4835
        .trainerName = _("JARED"),
#line 4836
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4837
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4839
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4840
        .doubleBattle = FALSE,
#line 4841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4843
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4845
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4844
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4847
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4849
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4848
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4851
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4853
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4852
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4855
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4856
        .trainerName = _("HUMBERTO"),
#line 4857
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4858
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4860
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4861
        .doubleBattle = FALSE,
#line 4862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4864
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4866
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4865
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4868
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4869
        .trainerName = _("PRESLEY"),
#line 4870
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4871
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4873
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4874
        .doubleBattle = FALSE,
#line 4875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4877
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4878
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4881
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4882
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4885
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4886
        .trainerName = _("EDWARDO"),
#line 4887
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4888
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4890
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4891
        .doubleBattle = FALSE,
#line 4892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4894
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4896
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4895
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4898
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4900
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4899
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4902
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4903
        .trainerName = _("COLIN"),
#line 4904
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4905
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4907
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4908
        .doubleBattle = FALSE,
#line 4909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4911
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4912
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4915
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4916
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4919
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4920
        .trainerName = _("ROBERT"),
#line 4921
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4922
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4924
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4925
        .doubleBattle = FALSE,
#line 4926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4928
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4929
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4932
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4933
        .trainerName = _("BENNY"),
#line 4934
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4935
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4937
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4938
        .doubleBattle = FALSE,
#line 4939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4941
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4942
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4945
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4946
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4949
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4950
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4953
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4954
        .trainerName = _("CHESTER"),
#line 4955
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4956
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4958
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4959
        .doubleBattle = FALSE,
#line 4960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4962
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4963
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4966
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4967
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4970
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4971
        .trainerName = _("ALEX"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4979
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4981
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4980
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4983
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4985
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4984
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4987
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4988
        .trainerName = _("BECK"),
#line 4989
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4990
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4992
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4993
        .doubleBattle = FALSE,
#line 4994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4996
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4997
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5000
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 5001
        .trainerName = _("YASU"),
#line 5002
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5003
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5005
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5006
        .doubleBattle = FALSE,
#line 5007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5009
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5011
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5010
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5013
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5014
        .trainerName = _("TAKASHI"),
#line 5015
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5016
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5018
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5019
        .doubleBattle = FALSE,
#line 5020
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5022
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5023
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5026
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5027
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5030
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5031
        .trainerName = _("DIANNE"),
#line 5032
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5033
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5034
F_TRAINER_FEMALE | 
#line 5035
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5036
        .items = { ITEM_FULL_RESTORE },
#line 5037
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5039
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5040
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5042
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5045
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5046
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5048
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5051
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5052
        .trainerName = _("JANI"),
#line 5053
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5054
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5055
F_TRAINER_FEMALE | 
#line 5056
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5057
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5059
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5060
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5063
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5064
        .trainerName = _("LAO"),
#line 5065
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5066
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5068
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5069
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5071
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5072
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5075
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5076
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5079
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5080
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5083
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5084
        .trainerName = _("LUNG"),
#line 5085
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5086
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5088
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5089
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5091
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5092
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5095
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5096
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5099
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5100
        .trainerName = _("JOCELYN"),
#line 5101
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5102
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5103
F_TRAINER_FEMALE | 
#line 5104
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5105
        .doubleBattle = FALSE,
#line 5106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5108
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5110
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5109
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5112
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5113
        .trainerName = _("LAURA"),
#line 5114
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5115
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5116
F_TRAINER_FEMALE | 
#line 5117
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5118
        .doubleBattle = FALSE,
#line 5119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5121
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5123
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5122
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5125
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5126
        .trainerName = _("CYNDY"),
#line 5127
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5128
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5129
F_TRAINER_FEMALE | 
#line 5130
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5131
        .doubleBattle = FALSE,
#line 5132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5134
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5136
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5135
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5138
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5140
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5139
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5142
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5143
        .trainerName = _("CORA"),
#line 5144
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5145
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5146
F_TRAINER_FEMALE | 
#line 5147
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5148
        .doubleBattle = FALSE,
#line 5149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5151
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5153
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5152
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5155
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5156
        .trainerName = _("PAULA"),
#line 5157
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5158
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5159
F_TRAINER_FEMALE | 
#line 5160
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5161
        .doubleBattle = FALSE,
#line 5162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5164
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5166
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5165
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5168
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5169
        .trainerName = _("MADELINE"),
#line 5170
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5171
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5172
F_TRAINER_FEMALE | 
#line 5173
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5174
        .doubleBattle = FALSE,
#line 5175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5177
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5178
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5181
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5182
        .trainerName = _("CLARISSA"),
#line 5183
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5184
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5185
F_TRAINER_FEMALE | 
#line 5186
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5187
        .doubleBattle = FALSE,
#line 5188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5190
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5191
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5194
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5195
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5198
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5199
        .trainerName = _("ANGELICA"),
#line 5200
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5201
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5202
F_TRAINER_FEMALE | 
#line 5203
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5204
        .doubleBattle = FALSE,
#line 5205
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5207
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5209
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5208
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5211
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5212
        .trainerName = _("BEVERLY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5220
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5221
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5224
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5225
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5228
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5229
        .trainerName = _("IMANI"),
#line 5230
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5231
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5232
F_TRAINER_FEMALE | 
#line 5233
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5234
        .doubleBattle = FALSE,
#line 5235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5237
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5238
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5241
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5242
        .trainerName = _("KYLA"),
#line 5243
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5244
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5245
F_TRAINER_FEMALE | 
#line 5246
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5247
        .doubleBattle = FALSE,
#line 5248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5250
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5251
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5254
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5255
        .trainerName = _("DENISE"),
#line 5256
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5257
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5258
F_TRAINER_FEMALE | 
#line 5259
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5260
        .doubleBattle = FALSE,
#line 5261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5263
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5264
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5267
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5269
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5268
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5271
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5272
        .trainerName = _("BETH"),
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
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5282
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5281
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5284
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5285
        .trainerName = _("TARA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5293
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5295
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5294
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5297
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5299
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5298
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5301
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5302
        .trainerName = _("MISSY"),
#line 5303
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5304
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5305
F_TRAINER_FEMALE | 
#line 5306
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5307
        .doubleBattle = FALSE,
#line 5308
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5310
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5312
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5311
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5314
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5315
        .trainerName = _("ALICE"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5323
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5325
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5324
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5327
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5328
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5331
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5332
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5335
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5336
        .trainerName = _("JENNY"),
#line 5337
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5338
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5339
F_TRAINER_FEMALE | 
#line 5340
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5341
        .doubleBattle = FALSE,
#line 5342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5344
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5345
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5348
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5349
        .trainerName = _("GRACE"),
#line 5350
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5351
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5352
F_TRAINER_FEMALE | 
#line 5353
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5354
        .doubleBattle = FALSE,
#line 5355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5357
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5359
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5358
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5361
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5362
        .trainerName = _("TANYA"),
#line 5363
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5364
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5365
F_TRAINER_FEMALE | 
#line 5366
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5367
        .doubleBattle = FALSE,
#line 5368
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5370
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5372
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5371
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5374
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5375
        .trainerName = _("SHARON"),
#line 5376
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5377
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5378
F_TRAINER_FEMALE | 
#line 5379
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5380
        .doubleBattle = FALSE,
#line 5381
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5383
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5384
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5387
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5388
        .trainerName = _("NIKKI"),
#line 5389
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5390
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5391
F_TRAINER_FEMALE | 
#line 5392
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5393
        .doubleBattle = FALSE,
#line 5394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5396
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5397
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5400
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5401
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5404
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5405
        .trainerName = _("BRENDA"),
#line 5406
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5407
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5408
F_TRAINER_FEMALE | 
#line 5409
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5410
        .doubleBattle = FALSE,
#line 5411
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5413
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5414
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5417
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5418
        .trainerName = _("KATIE"),
#line 5419
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5420
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5421
F_TRAINER_FEMALE | 
#line 5422
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5423
        .doubleBattle = FALSE,
#line 5424
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5426
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5427
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5430
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5431
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5434
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5435
        .trainerName = _("SUSIE"),
#line 5436
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5437
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5438
F_TRAINER_FEMALE | 
#line 5439
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5440
        .doubleBattle = FALSE,
#line 5441
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5443
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5445
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5444
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5447
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5448
        .trainerName = _("KARA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5456
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5457
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5460
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5461
        .trainerName = _("DANA"),
#line 5462
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5463
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5464
F_TRAINER_FEMALE | 
#line 5465
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5466
        .doubleBattle = FALSE,
#line 5467
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5469
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5470
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5473
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5474
        .trainerName = _("SIENNA"),
#line 5475
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5476
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5477
F_TRAINER_FEMALE | 
#line 5478
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5479
        .doubleBattle = FALSE,
#line 5480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5482
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5483
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5486
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5487
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5490
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5491
        .trainerName = _("DEBRA"),
#line 5492
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5493
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5494
F_TRAINER_FEMALE | 
#line 5495
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5496
        .doubleBattle = FALSE,
#line 5497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5499
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5500
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5503
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5504
        .trainerName = _("LINDA"),
#line 5505
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5506
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5507
F_TRAINER_FEMALE | 
#line 5508
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5509
        .doubleBattle = FALSE,
#line 5510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5512
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5513
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5516
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5517
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5520
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5521
        .trainerName = _("KAYLEE"),
#line 5522
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5523
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5524
F_TRAINER_FEMALE | 
#line 5525
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5526
        .doubleBattle = FALSE,
#line 5527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5529
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5530
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5533
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5534
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5537
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5538
        .trainerName = _("LAUREL"),
#line 5539
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5540
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5541
F_TRAINER_FEMALE | 
#line 5542
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5543
        .doubleBattle = FALSE,
#line 5544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5546
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5547
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5550
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5551
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5554
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5555
        .trainerName = _("CARLEE"),
#line 5556
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5557
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5558
F_TRAINER_FEMALE | 
#line 5559
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5560
        .doubleBattle = FALSE,
#line 5561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5563
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5564
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5567
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5568
        .trainerName = _("HEIDI"),
#line 5569
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5570
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5571
F_TRAINER_FEMALE | 
#line 5572
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5573
        .doubleBattle = FALSE,
#line 5574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5576
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5577
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5580
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5581
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5585
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5586
        .trainerName = _("BECKY"),
#line 5587
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5588
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5589
F_TRAINER_FEMALE | 
#line 5590
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5591
        .doubleBattle = TRUE,
#line 5592
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5594
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .heldItem = ITEM_FOCUS_SASH,
#line 5596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5595
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5597
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5600
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5600
            .heldItem = ITEM_WIDE_LENS,
#line 5603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5601
            .ability = ABILITY_MOODY,
#line 5602
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5603
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5608
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5609
        .trainerName = _("CAROL"),
#line 5610
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5611
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5612
F_TRAINER_FEMALE | 
#line 5613
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5614
        .doubleBattle = FALSE,
#line 5615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5617
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5618
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5621
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5622
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5625
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5626
        .trainerName = _("NANCY"),
#line 5627
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5628
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5629
F_TRAINER_FEMALE | 
#line 5630
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5631
        .doubleBattle = FALSE,
#line 5632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5634
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5635
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5638
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5639
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5642
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5643
        .trainerName = _("MARTHA"),
#line 5644
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5645
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5646
F_TRAINER_FEMALE | 
#line 5647
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5648
        .doubleBattle = FALSE,
#line 5649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5651
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5652
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5655
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5656
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5659
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5660
        .trainerName = _("DIANA"),
#line 5661
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5662
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5663
F_TRAINER_FEMALE | 
#line 5664
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5665
        .doubleBattle = FALSE,
#line 5666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5668
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5669
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5672
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5673
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5676
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5677
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5680
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5681
        .trainerName = _("CEDRIC"),
#line 5682
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5683
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5685
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5686
        .doubleBattle = FALSE,
#line 5687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5689
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5690
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5693
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5694
        .trainerName = _("IRENE"),
#line 5695
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5696
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5697
F_TRAINER_FEMALE | 
#line 5698
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5699
        .doubleBattle = FALSE,
#line 5700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5702
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5703
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5706
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5707
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5710
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5711
        .trainerName = _("AMY & LIV"),
#line 5712
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5713
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5715
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5716
        .doubleBattle = TRUE,
#line 5717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5719
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5720
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5723
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5724
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5728
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5729
        .trainerName = _("GINA & MIA"),
#line 5730
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5731
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5733
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5734
        .doubleBattle = TRUE,
#line 5735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5737
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5738
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5741
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5742
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5745
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5746
        .trainerName = _("MIU & YUKI"),
#line 5747
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5748
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5750
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5751
        .doubleBattle = TRUE,
#line 5752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5754
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5755
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5758
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5759
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5763
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5764
        .trainerName = _("HUEY"),
#line 5765
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5766
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5768
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5769
        .doubleBattle = FALSE,
#line 5770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5772
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5773
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5776
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5778
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5777
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5780
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5781
        .trainerName = _("EDMOND"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5789
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5790
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5793
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5794
        .trainerName = _("ERNEST"),
#line 5795
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5796
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5798
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5799
        .doubleBattle = FALSE,
#line 5800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5802
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5803
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5806
            .species = SPECIES_SHELGON,
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
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5811
        .trainerName = _("DWAYNE"),
#line 5812
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5813
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5815
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5816
        .doubleBattle = FALSE,
#line 5817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5819
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5820
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5823
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5824
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5827
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5828
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5831
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5832
        .trainerName = _("PHILLIP"),
#line 5833
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5834
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5836
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5837
        .doubleBattle = FALSE,
#line 5838
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5840
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5841
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5844
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5845
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5848
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5849
        .trainerName = _("LEONARD"),
#line 5850
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5851
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5853
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5854
        .doubleBattle = FALSE,
#line 5855
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5857
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5858
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5861
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5862
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5865
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5866
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5869
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5870
        .trainerName = _("DUNCAN"),
#line 5871
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5872
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5874
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5875
        .doubleBattle = FALSE,
#line 5876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5878
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5879
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5882
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5883
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5886
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5887
        .trainerName = _("ELI"),
#line 5888
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5889
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5891
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5892
        .doubleBattle = FALSE,
#line 5893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5895
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5897
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5896
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5899
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5900
        .trainerName = _("ANNIKA"),
#line 5901
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5902
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5903
F_TRAINER_FEMALE | 
#line 5904
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5905
        .doubleBattle = FALSE,
#line 5906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5908
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5908
            .heldItem = ITEM_FOCUS_SASH,
#line 5910
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5909
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5912
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .heldItem = ITEM_FOCUS_SASH,
#line 5914
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5913
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5916
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5917
        .trainerName = _("JAZMYN"),
#line 5918
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5919
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5920
F_TRAINER_FEMALE | 
#line 5921
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5922
        .items = { ITEM_HYPER_POTION },
#line 5923
        .doubleBattle = FALSE,
#line 5924
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5926
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5927
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5930
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5931
        .trainerName = _("JONAS"),
#line 5932
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5933
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5935
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5936
        .doubleBattle = FALSE,
#line 5937
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5939
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5940
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5943
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5944
        .trainerName = _("KAYLEY"),
#line 5945
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5946
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5947
F_TRAINER_FEMALE | 
#line 5948
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5949
        .doubleBattle = FALSE,
#line 5950
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5952
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5953
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5956
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5957
        .trainerName = _("AURON"),
#line 5958
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5959
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5961
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5962
        .doubleBattle = FALSE,
#line 5963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5965
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5966
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5969
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5970
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5973
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5974
        .trainerName = _("KELVIN"),
#line 5975
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5976
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5978
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5979
        .doubleBattle = FALSE,
#line 5980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5982
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5984
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5983
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5986
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5988
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5987
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5990
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5991
        .trainerName = _("MARLEY"),
#line 5992
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5993
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5994
F_TRAINER_FEMALE | 
#line 5995
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5996
        .items = { ITEM_HYPER_POTION },
#line 5997
        .doubleBattle = FALSE,
#line 5998
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6000
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6001
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6004
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 6005
        .trainerName = _("REYNA"),
#line 6006
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6007
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6008
F_TRAINER_FEMALE | 
#line 6009
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6010
        .doubleBattle = FALSE,
#line 6011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6013
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6015
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6014
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6017
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6019
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6018
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6021
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6022
        .trainerName = _("HUDSON"),
#line 6023
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6024
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6026
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6027
        .doubleBattle = FALSE,
#line 6028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6030
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6031
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6034
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6035
        .trainerName = _("CONOR"),
#line 6036
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6037
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6039
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6040
        .doubleBattle = FALSE,
#line 6041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6043
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6044
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6047
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6049
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6048
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6051
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6052
        .trainerName = _("EDWIN"),
#line 6053
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6054
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6056
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6057
        .doubleBattle = FALSE,
#line 6058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6060
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6062
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6061
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6064
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6065
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6068
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6069
        .trainerName = _("HECTOR"),
#line 6070
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6071
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6073
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6074
        .doubleBattle = FALSE,
#line 6075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6077
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6078
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6081
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6082
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6085
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6086
        .trainerName = _("TABITHA"),
#line 6087
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6088
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6090
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6091
        .doubleBattle = FALSE,
#line 6092
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6094
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6094
            .heldItem = ITEM_HEAT_ROCK,
#line 6097
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6095
            .ability = ABILITY_DROUGHT,
#line 6096
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6098
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6103
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6103
            .heldItem = ITEM_POISON_BARB,
#line 6106
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6104
            .ability = ABILITY_LEVITATE,
#line 6105
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6107
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6112
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .heldItem = ITEM_LIFE_ORB,
#line 6115
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6114
            .ability = ABILITY_LEVITATE,
#line 6113
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6116
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6121
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6122
        .trainerName = _("SAMUEL"),
#line 6123
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6124
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6126
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6127
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6128
        .doubleBattle = TRUE,
#line 6129
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6131
            .species = SPECIES_SLOWKING,
#line 6131
            .gender = TRAINER_MON_MALE,
#line 6131
            .heldItem = ITEM_LIFE_ORB,
#line 6135
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6132
            .ability = ABILITY_REGENERATOR,
#line 6133
            .lvl = 70,
#line 6134
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6136
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6141
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6141
            .heldItem = ITEM_ROCKY_HELMET,
#line 6145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6142
            .ability = ABILITY_REGENERATOR,
#line 6143
            .lvl = 70,
#line 6144
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6145
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6150
            .species = SPECIES_GLISCOR,
#line 6150
            .gender = TRAINER_MON_FEMALE,
#line 6150
            .heldItem = ITEM_TOXIC_ORB,
#line 6154
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6151
            .ability = ABILITY_POISON_HEAL,
#line 6152
            .lvl = 70,
#line 6153
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6155
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6160
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6160
            .heldItem = ITEM_ASSAULT_VEST,
#line 6164
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6161
            .ability = ABILITY_CLEAR_BODY,
#line 6162
            .lvl = 70,
#line 6163
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6165
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6170
            .species = SPECIES_HONCHKROW,
#line 6170
            .gender = TRAINER_MON_MALE,
#line 6170
            .heldItem = ITEM_FOCUS_SASH,
#line 6174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6171
            .ability = ABILITY_MOXIE,
#line 6172
            .lvl = 70,
#line 6173
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6174
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6179
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6179
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6180
            .ability = ABILITY_INFILTRATOR,
#line 6181
            .lvl = 70,
#line 6182
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6183
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6188
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6189
        .trainerName = _("SAMUEL"),
#line 6190
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6191
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6193
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6194
        .doubleBattle = FALSE,
#line 6195
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6197
            .species = SPECIES_SLOWPOKE,
#line 6197
            .gender = TRAINER_MON_MALE,
#line 6201
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6198
            .ability = ABILITY_REGENERATOR,
#line 6199
            .lvl = 5,
#line 6200
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6202
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6206
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6207
        .trainerName = _("SAMUEL"),
#line 6208
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6209
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6211
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6212
        .doubleBattle = FALSE,
#line 6213
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6215
            .species = SPECIES_SLOWPOKE,
#line 6215
            .gender = TRAINER_MON_MALE,
#line 6215
            .heldItem = ITEM_SITRUS_BERRY,
#line 6219
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6216
            .ability = ABILITY_REGENERATOR,
#line 6217
            .lvl = 24,
#line 6218
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6220
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6225
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6225
            .heldItem = ITEM_LUM_BERRY,
#line 6229
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6226
            .ability = ABILITY_REGENERATOR,
#line 6227
            .lvl = 24,
#line 6228
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6230
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6235
            .species = SPECIES_GLIGAR,
#line 6235
            .gender = TRAINER_MON_FEMALE,
#line 6235
            .heldItem = ITEM_RAZOR_FANG,
#line 6239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6236
            .ability = ABILITY_HYPER_CUTTER,
#line 6237
            .lvl = 24,
#line 6238
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6240
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6245
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6249
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6246
            .ability = ABILITY_CLEAR_BODY,
#line 6247
            .lvl = 24,
#line 6248
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6249
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6254
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6255
        .trainerName = _("SAMUEL"),
#line 6256
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6257
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6259
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6260
        .doubleBattle = FALSE,
#line 6261
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6263
            .species = SPECIES_SLOWPOKE,
#line 6263
            .gender = TRAINER_MON_MALE,
#line 6263
            .heldItem = ITEM_LIFE_ORB,
#line 6267
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6264
            .ability = ABILITY_REGENERATOR,
#line 6265
            .lvl = 49,
#line 6266
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6268
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6273
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6273
            .heldItem = ITEM_ROCKY_HELMET,
#line 6277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6274
            .ability = ABILITY_REGENERATOR,
#line 6275
            .lvl = 49,
#line 6276
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6277
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6282
            .species = SPECIES_GLIGAR,
#line 6282
            .gender = TRAINER_MON_FEMALE,
#line 6282
            .heldItem = ITEM_RAZOR_FANG,
#line 6286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6283
            .ability = ABILITY_HYPER_CUTTER,
#line 6284
            .lvl = 49,
#line 6285
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6287
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6292
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6292
            .heldItem = ITEM_ASSAULT_VEST,
#line 6296
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6293
            .ability = ABILITY_CLEAR_BODY,
#line 6294
            .lvl = 49,
#line 6295
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6296
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6301
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6301
            .heldItem = ITEM_FOCUS_SASH,
#line 6305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6302
            .ability = ABILITY_PRANKSTER,
#line 6303
            .lvl = 49,
#line 6304
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6305
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6310
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6311
        .trainerName = _("SAMUEL"),
#line 6312
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6313
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6315
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6316
        .doubleBattle = FALSE,
#line 6317
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6319
            .species = SPECIES_SLOWPOKE,
#line 6319
            .gender = TRAINER_MON_MALE,
#line 6323
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6320
            .ability = ABILITY_REGENERATOR,
#line 6321
            .lvl = 5,
#line 6322
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6324
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6328
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6329
        .trainerName = _("SAMUEL"),
#line 6330
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6331
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6333
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6334
        .doubleBattle = FALSE,
#line 6335
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6337
            .species = SPECIES_SLOWPOKE,
#line 6337
            .gender = TRAINER_MON_MALE,
#line 6337
            .heldItem = ITEM_SITRUS_BERRY,
#line 6341
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6338
            .ability = ABILITY_REGENERATOR,
#line 6339
            .lvl = 24,
#line 6340
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6342
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6347
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6347
            .heldItem = ITEM_LUM_BERRY,
#line 6351
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6348
            .ability = ABILITY_REGENERATOR,
#line 6349
            .lvl = 24,
#line 6350
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6352
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6357
            .species = SPECIES_GLIGAR,
#line 6357
            .gender = TRAINER_MON_FEMALE,
#line 6357
            .heldItem = ITEM_RAZOR_FANG,
#line 6361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6358
            .ability = ABILITY_HYPER_CUTTER,
#line 6359
            .lvl = 24,
#line 6360
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6362
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6367
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6367
            .heldItem = ITEM_METAL_COAT,
#line 6371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6368
            .ability = ABILITY_CLEAR_BODY,
#line 6369
            .lvl = 24,
#line 6370
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6371
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6377
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6378
        .trainerName = _("SAMUEL"),
#line 6379
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6380
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6382
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6383
        .doubleBattle = FALSE,
#line 6384
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6386
            .species = SPECIES_SLOWPOKE,
#line 6386
            .gender = TRAINER_MON_MALE,
#line 6386
            .heldItem = ITEM_LIFE_ORB,
#line 6390
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6387
            .ability = ABILITY_REGENERATOR,
#line 6388
            .lvl = 44,
#line 6389
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6391
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6396
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6396
            .heldItem = ITEM_ROCKY_HELMET,
#line 6399
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6397
            .ability = ABILITY_REGENERATOR,
#line 6399
            .lvl = 100,
#line 6398
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6399
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6404
            .species = SPECIES_GLIGAR,
#line 6404
            .gender = TRAINER_MON_FEMALE,
#line 6404
            .heldItem = ITEM_RAZOR_FANG,
#line 6408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6405
            .ability = ABILITY_HYPER_CUTTER,
#line 6406
            .lvl = 44,
#line 6407
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6409
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6414
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6414
            .heldItem = ITEM_ASSAULT_VEST,
#line 6418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6415
            .ability = ABILITY_CLEAR_BODY,
#line 6416
            .lvl = 44,
#line 6417
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6418
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6423
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6424
        .trainerName = _("SAMUEL"),
#line 6425
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6426
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6428
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6429
        .doubleBattle = FALSE,
#line 6430
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6432
            .species = SPECIES_SLOWPOKE,
#line 6432
            .gender = TRAINER_MON_MALE,
#line 6436
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6433
            .ability = ABILITY_REGENERATOR,
#line 6434
            .lvl = 5,
#line 6435
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6437
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6441
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6442
        .trainerName = _("SAMUEL"),
#line 6443
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6444
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6446
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6447
        .doubleBattle = FALSE,
#line 6448
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6450
            .species = SPECIES_SLOWPOKE,
#line 6450
            .gender = TRAINER_MON_MALE,
#line 6450
            .heldItem = ITEM_SITRUS_BERRY,
#line 6454
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6451
            .ability = ABILITY_REGENERATOR,
#line 6452
            .lvl = 24,
#line 6453
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6455
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6460
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6460
            .heldItem = ITEM_LUM_BERRY,
#line 6464
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6461
            .ability = ABILITY_REGENERATOR,
#line 6462
            .lvl = 24,
#line 6463
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6465
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6470
            .species = SPECIES_GLIGAR,
#line 6470
            .gender = TRAINER_MON_FEMALE,
#line 6470
            .heldItem = ITEM_RAZOR_FANG,
#line 6474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6471
            .ability = ABILITY_HYPER_CUTTER,
#line 6472
            .lvl = 24,
#line 6473
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6475
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6481
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6482
        .trainerName = _("SAMUEL"),
#line 6483
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6484
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6486
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6487
        .doubleBattle = FALSE,
#line 6488
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6490
            .species = SPECIES_SLOWPOKE,
#line 6490
            .gender = TRAINER_MON_MALE,
#line 6490
            .heldItem = ITEM_LIFE_ORB,
#line 6494
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6491
            .ability = ABILITY_REGENERATOR,
#line 6492
            .lvl = 44,
#line 6493
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6495
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6500
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6500
            .heldItem = ITEM_ROCKY_HELMET,
#line 6503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6501
            .ability = ABILITY_REGENERATOR,
#line 6503
            .lvl = 100,
#line 6502
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6503
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6508
            .species = SPECIES_GLIGAR,
#line 6508
            .gender = TRAINER_MON_FEMALE,
#line 6508
            .heldItem = ITEM_RAZOR_FANG,
#line 6512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6509
            .ability = ABILITY_HYPER_CUTTER,
#line 6510
            .lvl = 44,
#line 6511
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6513
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6518
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6518
            .heldItem = ITEM_ASSAULT_VEST,
#line 6522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6519
            .ability = ABILITY_CLEAR_BODY,
#line 6520
            .lvl = 44,
#line 6521
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6522
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6527
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6536
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6537
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6540
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6541
        .trainerName = _("MAY"),
#line 6542
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6543
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6544
F_TRAINER_FEMALE | 
#line 6545
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6546
        .doubleBattle = FALSE,
#line 6547
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6549
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6551
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6550
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6553
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6555
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6554
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6557
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6558
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6561
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
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
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6572
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6571
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6574
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6576
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6575
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6578
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6580
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6579
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6582
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6591
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6592
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6595
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6596
        .trainerName = _("MAY"),
#line 6597
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6598
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6599
F_TRAINER_FEMALE | 
#line 6600
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6601
        .doubleBattle = FALSE,
#line 6602
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6604
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6606
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6605
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6608
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6610
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6609
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6612
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6614
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6613
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6616
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6617
        .trainerName = _("MAY"),
#line 6618
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6619
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6620
F_TRAINER_FEMALE | 
#line 6621
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6622
        .doubleBattle = FALSE,
#line 6623
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6625
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6627
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6626
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6629
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6631
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6630
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6633
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6635
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6634
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6637
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6638
        .trainerName = _("MAY"),
#line 6639
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6640
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6641
F_TRAINER_FEMALE | 
#line 6642
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6643
        .doubleBattle = FALSE,
#line 6644
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6646
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6647
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6650
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6651
        .trainerName = _("MAY"),
#line 6652
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6653
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6654
F_TRAINER_FEMALE | 
#line 6655
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6656
        .doubleBattle = FALSE,
#line 6657
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6659
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6660
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6663
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6665
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6664
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6667
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6669
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6668
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6671
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6672
        .trainerName = _("MAY"),
#line 6673
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6674
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6675
F_TRAINER_FEMALE | 
#line 6676
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6677
        .doubleBattle = FALSE,
#line 6678
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6680
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6682
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6681
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6684
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6686
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6685
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6688
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6690
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6689
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6692
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6693
        .trainerName = _("ISAAC"),
#line 6694
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6695
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6697
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6698
        .doubleBattle = FALSE,
#line 6699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6701
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6702
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6705
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6706
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6709
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6710
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6713
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6714
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6717
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6718
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6721
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6722
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6725
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6726
        .trainerName = _("DAVIS"),
#line 6727
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6728
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6730
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6731
        .doubleBattle = FALSE,
#line 6732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6734
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6735
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6738
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6739
        .trainerName = _("MITCHELL"),
#line 6740
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6741
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6743
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6744
        .doubleBattle = FALSE,
#line 6745
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6747
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6748
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6751
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6752
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6755
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6756
        .trainerName = _("LYDIA"),
#line 6757
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6758
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6759
F_TRAINER_FEMALE | 
#line 6760
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6761
        .doubleBattle = FALSE,
#line 6762
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6764
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6765
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6768
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6769
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6772
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6773
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6776
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6777
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6780
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6781
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6784
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6785
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6788
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6789
        .trainerName = _("HALLE"),
#line 6790
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6791
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6792
F_TRAINER_FEMALE | 
#line 6793
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6794
        .items = { ITEM_FULL_RESTORE },
#line 6795
        .doubleBattle = FALSE,
#line 6796
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6798
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6799
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6802
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6803
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6806
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6807
        .trainerName = _("GARRISON"),
#line 6808
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6809
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6811
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6812
        .doubleBattle = FALSE,
#line 6813
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6815
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6816
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6819
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6820
        .trainerName = _("JACKSON"),
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
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6831
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6830
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6833
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6834
        .trainerName = _("LORENZO"),
#line 6835
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6836
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6838
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6839
        .items = { ITEM_FULL_RESTORE },
#line 6840
        .doubleBattle = FALSE,
#line 6841
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6843
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6845
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6844
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6847
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6849
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6848
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6851
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6853
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6852
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6855
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6856
        .trainerName = _("SEBASTIAN"),
#line 6857
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6858
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6860
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6861
        .items = { ITEM_FULL_RESTORE },
#line 6862
        .doubleBattle = FALSE,
#line 6863
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6865
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6867
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6866
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6869
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6870
        .trainerName = _("CATHERINE"),
#line 6871
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6872
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6873
F_TRAINER_FEMALE | 
#line 6874
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6875
        .items = { ITEM_FULL_RESTORE },
#line 6876
        .doubleBattle = FALSE,
#line 6877
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6879
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6881
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6880
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6883
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6885
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6884
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6887
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6888
        .trainerName = _("JENNA"),
#line 6889
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6890
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6891
F_TRAINER_FEMALE | 
#line 6892
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6893
        .items = { ITEM_FULL_RESTORE },
#line 6894
        .doubleBattle = FALSE,
#line 6895
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6897
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6899
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6898
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6901
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6903
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6902
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6905
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6907
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6906
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6909
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6910
        .trainerName = _("SOPHIA"),
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
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6919
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6921
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6920
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6923
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6925
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6924
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6927
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6928
        .trainerName = _("JULIO"),
#line 6929
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6930
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6932
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6933
        .doubleBattle = FALSE,
#line 6934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6936
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6937
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6940
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6941
        .trainerName = _("GRUNT"),
#line 6942
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6943
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6945
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6946
        .doubleBattle = FALSE,
#line 6947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6949
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6951
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6950
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6953
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6955
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6954
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6957
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6958
        .trainerName = _("GRUNT"),
#line 6959
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6960
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6961
F_TRAINER_FEMALE | 
#line 6962
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6963
        .doubleBattle = FALSE,
#line 6964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6966
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6967
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6970
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6972
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6971
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6974
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6975
        .trainerName = _("GRUNT"),
#line 6976
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6977
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6978
F_TRAINER_FEMALE | 
#line 6979
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6980
        .doubleBattle = FALSE,
#line 6981
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6983
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6984
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6987
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6989
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6988
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6991
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6992
        .trainerName = _("GRUNT"),
#line 6993
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6994
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6996
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6997
        .doubleBattle = FALSE,
#line 6998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7000
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7002
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7001
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7004
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7006
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7005
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7008
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7009
        .trainerName = _("MARC"),
#line 7010
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7011
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7013
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7014
        .doubleBattle = FALSE,
#line 7015
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7017
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7019
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7018
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7021
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7023
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7022
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7025
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7026
        .trainerName = _("BRENDEN"),
#line 7027
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7028
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7030
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7031
        .doubleBattle = FALSE,
#line 7032
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7034
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7036
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7035
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7038
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7039
        .trainerName = _("LILITH"),
#line 7040
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7041
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7042
F_TRAINER_FEMALE | 
#line 7043
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7044
        .doubleBattle = FALSE,
#line 7045
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7047
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7049
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7048
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7051
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7052
        .trainerName = _("CRISTIAN"),
#line 7053
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7054
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7056
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7057
        .doubleBattle = FALSE,
#line 7058
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7060
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7062
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7061
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7064
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7065
        .trainerName = _("SYLVIA"),
#line 7066
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7067
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7068
F_TRAINER_FEMALE | 
#line 7069
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7070
        .doubleBattle = FALSE,
#line 7071
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7073
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7075
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7074
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7077
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7078
        .trainerName = _("LEONARDO"),
#line 7079
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7080
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7082
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7083
        .doubleBattle = FALSE,
#line 7084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7086
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7087
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7090
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7091
        .trainerName = _("ATHENA"),
#line 7092
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7093
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7094
F_TRAINER_FEMALE | 
#line 7095
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7096
        .items = { ITEM_HYPER_POTION },
#line 7097
        .doubleBattle = FALSE,
#line 7098
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7100
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7101
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7104
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7106
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7105
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7109
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7110
        .trainerName = _("HARRISON"),
#line 7111
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7112
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7114
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7115
        .doubleBattle = FALSE,
#line 7116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7118
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7120
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7119
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7122
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7123
        .trainerName = _("GRUNT"),
#line 7124
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7125
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7127
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7128
        .doubleBattle = FALSE,
#line 7129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7131
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7133
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7132
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7135
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7136
        .trainerName = _("CLARENCE"),
#line 7137
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7138
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7140
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7141
        .doubleBattle = FALSE,
#line 7142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7144
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7145
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7148
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7149
        .trainerName = _("TERRY"),
#line 7150
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7151
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7152
F_TRAINER_FEMALE | 
#line 7153
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7154
        .doubleBattle = FALSE,
#line 7155
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7157
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7158
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7161
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7162
        .trainerName = _("NATE"),
#line 7163
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7164
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7166
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7167
        .doubleBattle = FALSE,
#line 7168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7170
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7172
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7171
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7174
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7175
        .trainerName = _("KATHLEEN"),
#line 7176
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7177
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7178
F_TRAINER_FEMALE | 
#line 7179
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7180
        .doubleBattle = FALSE,
#line 7181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7183
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7185
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7184
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7187
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7188
        .trainerName = _("CLIFFORD"),
#line 7189
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7190
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7192
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7193
        .doubleBattle = FALSE,
#line 7194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7196
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7197
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7200
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7201
        .trainerName = _("NICHOLAS"),
#line 7202
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7203
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7205
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7206
        .doubleBattle = FALSE,
#line 7207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7209
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7210
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7213
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7214
        .trainerName = _("GRUNT"),
#line 7215
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7216
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7217
F_TRAINER_FEMALE | 
#line 7218
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7219
        .doubleBattle = FALSE,
#line 7220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7222
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7223
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7226
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7227
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7230
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7231
        .trainerName = _("GRUNT"),
#line 7232
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7233
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7235
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7236
        .doubleBattle = FALSE,
#line 7237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7239
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7240
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7243
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7244
        .trainerName = _("GRUNT"),
#line 7245
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7246
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7248
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7249
        .doubleBattle = FALSE,
#line 7250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7252
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7253
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7256
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7257
        .trainerName = _("GRUNT"),
#line 7258
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7259
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7261
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7262
        .doubleBattle = FALSE,
#line 7263
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7265
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7267
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7266
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7269
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7270
        .trainerName = _("GRUNT"),
#line 7271
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7272
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7274
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7275
        .doubleBattle = FALSE,
#line 7276
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7278
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7280
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7279
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7282
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7283
        .trainerName = _("MACEY"),
#line 7284
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7285
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7286
F_TRAINER_FEMALE | 
#line 7287
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7288
        .doubleBattle = FALSE,
#line 7289
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7291
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7292
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7295
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7304
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7304
            .heldItem = ITEM_RAZOR_FANG,
#line 7308
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7305
            .ability = ABILITY_HYPER_CUTTER,
#line 7306
            .lvl = 16,
#line 7307
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7308
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7313
            .species = SPECIES_SLOWPOKE,
#line 7313
            .gender = TRAINER_MON_MALE,
#line 7313
            .heldItem = ITEM_SITRUS_BERRY,
#line 7317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7314
            .ability = ABILITY_REGENERATOR,
#line 7315
            .lvl = 16,
#line 7316
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7317
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7322
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7323
            .ability = ABILITY_REGENERATOR,
#line 7324
            .lvl = 16,
#line 7325
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7326
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 7331
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7331
            .heldItem = ITEM_SITRUS_BERRY,
#line 7335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7332
            .ability = ABILITY_CLEAR_BODY,
#line 7333
            .lvl = 16,
#line 7334
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7335
                MOVE_TACKLE,
                MOVE_ZEN_HEADBUTT,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 7339
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7340
        .trainerName = _("SAMUEL"),
#line 7341
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7342
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7344
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7345
        .doubleBattle = FALSE,
#line 7346
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7348
            .species = SPECIES_SLOWPOKE,
#line 7348
            .gender = TRAINER_MON_MALE,
#line 7352
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7349
            .ability = ABILITY_REGENERATOR,
#line 7350
            .lvl = 16,
#line 7351
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7353
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7358
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7359
            .ability = ABILITY_REGENERATOR,
#line 7360
            .lvl = 16,
#line 7361
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7362
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7369
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7370
        .trainerName = _("PAXTON"),
#line 7371
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7372
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7374
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7375
        .doubleBattle = FALSE,
#line 7376
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7378
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7379
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7382
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7383
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7386
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7387
        .trainerName = _("ISABELLA"),
#line 7388
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7389
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7390
F_TRAINER_FEMALE | 
#line 7391
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7392
        .doubleBattle = FALSE,
#line 7393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7395
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7396
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7399
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7400
        .trainerName = _("GRUNT"),
#line 7401
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7402
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7403
F_TRAINER_FEMALE | 
#line 7404
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7405
        .doubleBattle = FALSE,
#line 7406
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7408
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7410
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7409
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7412
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7413
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7416
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7417
        .trainerName = _("TABITHA"),
#line 7418
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7419
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7421
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7422
        .doubleBattle = FALSE,
#line 7423
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7425
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7428
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7426
            .ability = ABILITY_DROUGHT,
#line 7427
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7429
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7434
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7434
            .heldItem = ITEM_LUM_BERRY,
#line 7437
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7435
            .ability = ABILITY_LEVITATE,
#line 7436
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7438
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7442
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7442
            .heldItem = ITEM_SITRUS_BERRY,
#line 7445
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7443
            .ability = ABILITY_LEVITATE,
#line 7444
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7446
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7450
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7450
            .heldItem = ITEM_LUM_BERRY,
#line 7453
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7451
            .ability = ABILITY_OWN_TEMPO,
#line 7452
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7454
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7459
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7460
        .trainerName = _("JONATHAN"),
#line 7461
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7462
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7464
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7465
        .items = { ITEM_HYPER_POTION },
#line 7466
        .doubleBattle = FALSE,
#line 7467
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7469
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7471
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7470
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7473
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7474
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7477
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7478
        .trainerName = _("SAMUEL"),
#line 7479
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7480
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7482
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7483
        .doubleBattle = FALSE,
#line 7484
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7486
            .species = SPECIES_SLOWPOKE,
#line 7486
            .gender = TRAINER_MON_MALE,
#line 7490
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7487
            .ability = ABILITY_REGENERATOR,
#line 7488
            .lvl = 16,
#line 7489
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7491
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7496
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7497
            .ability = ABILITY_REGENERATOR,
#line 7498
            .lvl = 16,
#line 7499
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7500
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7507
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7508
        .trainerName = _("MAY"),
#line 7509
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7510
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7511
F_TRAINER_FEMALE | 
#line 7512
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7513
        .doubleBattle = FALSE,
#line 7514
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7516
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7518
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7517
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7520
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7521
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7524
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7525
        .trainerName = _("MAXIE"),
#line 7526
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7527
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7529
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7530
        .doubleBattle = FALSE,
#line 7531
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7533
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7533
            .heldItem = ITEM_IRON_BALL,
#line 7536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7534
            .ability = ABILITY_HEAVY_METAL,
#line 7535
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7536
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7541
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .heldItem = ITEM_SHARP_BEAK,
#line 7544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7542
            .ability = ABILITY_INNER_FOCUS,
#line 7543
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7544
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7549
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7549
            .heldItem = ITEM_MUSCLE_BAND,
#line 7552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7550
            .ability = ABILITY_IMMUNITY,
#line 7551
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7552
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7557
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7557
            .heldItem = ITEM_EXPERT_BELT,
#line 7560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7558
            .ability = ABILITY_UNNERVE,
#line 7559
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7560
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7565
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7565
            .heldItem = ITEM_ROCKY_HELMET,
#line 7568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7566
            .ability = ABILITY_ROCK_HEAD,
#line 7567
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7568
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7573
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7574
        .trainerName = _("MAXIE"),
#line 7575
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7576
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7578
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7579
        .doubleBattle = FALSE,
#line 7580
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7582
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7582
            .heldItem = ITEM_MUSCLE_BAND,
#line 7585
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7583
            .ability = ABILITY_HEAVY_METAL,
#line 7584
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7586
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7591
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .heldItem = ITEM_LUM_BERRY,
#line 7594
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7592
            .ability = ABILITY_IMMUNITY,
#line 7593
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7595
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7600
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7600
            .heldItem = ITEM_LUM_BERRY,
#line 7603
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7601
            .ability = ABILITY_UNNERVE,
#line 7602
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7604
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7609
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .heldItem = ITEM_ROCKY_HELMET,
#line 7612
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7610
            .ability = ABILITY_ROCK_HEAD,
#line 7611
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7613
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7618
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7618
            .heldItem = ITEM_SHARP_BEAK,
#line 7621
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7619
            .ability = ABILITY_INNER_FOCUS,
#line 7620
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7622
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7627
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7628
        .trainerName = _("TIANA"),
#line 7629
        .trainerClass = TRAINER_CLASS_LASS,
#line 7630
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7631
F_TRAINER_FEMALE | 
#line 7632
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7633
        .doubleBattle = FALSE,
#line 7634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7636
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7637
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7640
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7641
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7644
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7645
        .trainerName = _("HALEY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7653
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7654
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7657
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7658
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7661
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7662
        .trainerName = _("JANICE"),
#line 7663
        .trainerClass = TRAINER_CLASS_LASS,
#line 7664
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7665
F_TRAINER_FEMALE | 
#line 7666
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7667
        .doubleBattle = FALSE,
#line 7668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7670
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7671
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7674
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7675
        .trainerName = _("VIVI"),
#line 7676
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7677
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7678
F_TRAINER_FEMALE | 
#line 7679
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7680
        .doubleBattle = FALSE,
#line 7681
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7683
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7685
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7684
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7687
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7689
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7688
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7691
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7693
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7692
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7695
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7696
        .trainerName = _("SALLY"),
#line 7697
        .trainerClass = TRAINER_CLASS_LASS,
#line 7698
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7699
F_TRAINER_FEMALE | 
#line 7700
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7701
        .doubleBattle = FALSE,
#line 7702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7704
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7705
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7708
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7709
        .trainerName = _("ROBIN"),
#line 7710
        .trainerClass = TRAINER_CLASS_LASS,
#line 7711
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7712
F_TRAINER_FEMALE | 
#line 7713
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7714
        .doubleBattle = FALSE,
#line 7715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7717
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7718
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7721
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7722
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7725
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7726
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7729
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7730
        .trainerName = _("ANDREA"),
#line 7731
        .trainerClass = TRAINER_CLASS_LASS,
#line 7732
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7733
F_TRAINER_FEMALE | 
#line 7734
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7735
        .doubleBattle = FALSE,
#line 7736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7738
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7740
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7739
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7742
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7743
        .trainerName = _("CRISSY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7751
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7753
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7752
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7755
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7757
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7756
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7759
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7760
        .trainerName = _("RICK"),
#line 7761
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7762
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7764
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7765
        .doubleBattle = FALSE,
#line 7766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7768
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7769
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7772
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7773
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7776
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7777
        .trainerName = _("LYLE"),
#line 7778
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7779
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7782
        .doubleBattle = FALSE,
#line 7783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7785
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7786
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7789
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7790
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7793
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7794
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7797
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7798
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7801
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7802
        .trainerName = _("JOSIE"),
#line 7803
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7804
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7806
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7807
        .doubleBattle = FALSE,
#line 7808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7810
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7812
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7811
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7814
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7816
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7815
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7818
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7819
        .trainerName = _("DOUG"),
#line 7820
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7821
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7823
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7824
        .doubleBattle = FALSE,
#line 7825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7827
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7828
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7831
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7833
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7832
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7835
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7836
        .trainerName = _("GREG"),
#line 7837
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7838
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7840
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7841
        .doubleBattle = FALSE,
#line 7842
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7844
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7845
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7848
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7849
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7852
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7853
        .trainerName = _("KENT"),
#line 7854
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7855
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7857
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7858
        .doubleBattle = FALSE,
#line 7859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7861
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7862
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7865
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7866
        .trainerName = _("JAMES"),
#line 7867
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7868
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7870
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7871
        .doubleBattle = FALSE,
#line 7872
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7874
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7876
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7875
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7878
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7879
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7882
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7883
        .trainerName = _("BRICE"),
#line 7884
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7885
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7887
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7888
        .doubleBattle = FALSE,
#line 7889
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7891
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7892
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7895
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7896
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7899
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7900
        .trainerName = _("TRENT"),
#line 7901
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7902
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7904
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7905
        .doubleBattle = FALSE,
#line 7906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7908
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7909
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7912
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7913
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7916
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7917
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7920
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7921
        .trainerName = _("LENNY"),
#line 7922
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7923
        .trainerPic = TRAINER_PIC_HIKER,
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
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7930
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7933
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7934
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7937
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7938
        .trainerName = _("LUCAS"),
#line 7939
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7940
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7942
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7943
        .doubleBattle = FALSE,
#line 7944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7946
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7947
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7950
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7951
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7954
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7955
        .trainerName = _("ALAN"),
#line 7956
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7957
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7959
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7960
        .doubleBattle = FALSE,
#line 7961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7963
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7964
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7967
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7968
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7971
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7972
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7975
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7976
        .trainerName = _("CLARK"),
#line 7977
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7978
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7980
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7981
        .doubleBattle = FALSE,
#line 7982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7984
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7986
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7985
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7988
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7989
        .trainerName = _("ERIC"),
#line 7990
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7991
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7993
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7994
        .doubleBattle = FALSE,
#line 7995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7997
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7998
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8001
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8002
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8005
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 8006
        .trainerName = _("MIKE"),
#line 8007
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8008
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8010
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8011
        .doubleBattle = FALSE,
#line 8012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8014
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8015
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8018
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8019
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8022
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8024
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8023
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8026
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8027
        .trainerName = _("DEZ & LUKE"),
#line 8028
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8029
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8031
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8032
        .doubleBattle = TRUE,
#line 8033
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8035
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8036
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8039
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8041
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8040
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8043
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8044
        .trainerName = _("LEA & JED"),
#line 8045
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8046
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8048
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8049
        .doubleBattle = TRUE,
#line 8050
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8052
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8053
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8056
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8057
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8060
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8061
        .trainerName = _("KIRA & DAN"),
#line 8062
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8063
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8065
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8066
        .doubleBattle = TRUE,
#line 8067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8069
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8070
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8073
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8075
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8074
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8077
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8078
        .trainerName = _("JOHANNA"),
#line 8079
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8080
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8081
F_TRAINER_FEMALE | 
#line 8082
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8083
        .doubleBattle = FALSE,
#line 8084
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8086
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8087
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8090
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8091
        .trainerName = _("GERALD"),
#line 8092
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8093
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8095
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8096
        .items = { ITEM_HYPER_POTION },
#line 8097
        .doubleBattle = FALSE,
#line 8098
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8100
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8101
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8105
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8106
        .trainerName = _("VIVIAN"),
#line 8107
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8108
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8109
F_TRAINER_FEMALE | 
#line 8110
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8111
        .doubleBattle = FALSE,
#line 8112
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8114
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8116
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8115
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8118
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8119
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8122
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8123
        .trainerName = _("DANIELLE"),
#line 8124
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8125
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8126
F_TRAINER_FEMALE | 
#line 8127
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8128
        .doubleBattle = FALSE,
#line 8129
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8131
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8133
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8132
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8135
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8136
        .trainerName = _("HIDEO"),
#line 8137
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8138
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8140
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8141
        .doubleBattle = FALSE,
#line 8142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8144
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8146
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8145
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8148
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8149
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8152
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8153
        .trainerName = _("KEIGO"),
#line 8154
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8155
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8157
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8158
        .doubleBattle = FALSE,
#line 8159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8161
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8162
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8165
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8166
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8169
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8170
        .trainerName = _("RILEY"),
#line 8171
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8172
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8174
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8175
        .doubleBattle = FALSE,
#line 8176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8178
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8179
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8182
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8184
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8183
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8186
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8187
        .trainerName = _("FLINT"),
#line 8188
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8189
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8191
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8192
        .doubleBattle = FALSE,
#line 8193
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8195
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8197
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8196
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8199
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8201
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8200
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8203
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8204
        .trainerName = _("ASHLEY"),
#line 8205
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8206
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8207
F_TRAINER_FEMALE | 
#line 8208
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8209
        .doubleBattle = FALSE,
#line 8210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8212
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8214
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8213
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8216
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8218
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8217
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8220
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8222
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8221
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8224
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8225
        .trainerName = _("WALLY"),
#line 8226
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8227
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8229
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8230
        .doubleBattle = FALSE,
#line 8231
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8233
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8234
            .ability = ABILITY_SAND_STREAM,
#line 8235
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8236
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8238
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8238
            .heldItem = ITEM_SHELL_BELL,
#line 8242
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8239
            .ability = ABILITY_STURDY,
#line 8240
            .lvl = 1,
#line 8241
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8243
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
        },
    },
#line 8246
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8247
        .trainerName = _("SAMUEL"),
#line 8248
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8249
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8251
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8252
        .doubleBattle = TRUE,
#line 8253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8255
            .species = SPECIES_SLOWKING,
#line 8255
            .gender = TRAINER_MON_MALE,
#line 8255
            .heldItem = ITEM_LIFE_ORB,
#line 8259
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8256
            .ability = ABILITY_REGENERATOR,
#line 8257
            .lvl = 54,
#line 8258
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8260
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8265
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8265
            .heldItem = ITEM_ROCKY_HELMET,
#line 8269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8266
            .ability = ABILITY_REGENERATOR,
#line 8267
            .lvl = 54,
#line 8268
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8269
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8274
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8274
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8275
            .ability = ABILITY_INFILTRATOR,
#line 8276
            .lvl = 54,
#line 8277
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8278
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8283
            .species = SPECIES_GLISCOR,
#line 8283
            .gender = TRAINER_MON_FEMALE,
#line 8283
            .heldItem = ITEM_TOXIC_ORB,
#line 8287
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8284
            .ability = ABILITY_POISON_HEAL,
#line 8285
            .lvl = 54,
#line 8286
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8288
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8293
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8293
            .heldItem = ITEM_ASSAULT_VEST,
#line 8297
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8294
            .ability = ABILITY_CLEAR_BODY,
#line 8295
            .lvl = 54,
#line 8296
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8298
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8303
            .species = SPECIES_HONCHKROW,
#line 8303
            .gender = TRAINER_MON_MALE,
#line 8303
            .heldItem = ITEM_FOCUS_SASH,
#line 8307
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8304
            .ability = ABILITY_MOXIE,
#line 8305
            .lvl = 54,
#line 8306
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8308
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8314
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8315
        .trainerName = _("SAMUEL"),
#line 8316
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8317
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8319
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8320
        .doubleBattle = FALSE,
#line 8321
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8323
            .species = SPECIES_SLOWKING,
#line 8323
            .gender = TRAINER_MON_MALE,
#line 8323
            .heldItem = ITEM_LIFE_ORB,
#line 8327
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8324
            .ability = ABILITY_REGENERATOR,
#line 8325
            .lvl = 54,
#line 8326
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8328
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8333
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8333
            .heldItem = ITEM_ROCKY_HELMET,
#line 8337
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8334
            .ability = ABILITY_REGENERATOR,
#line 8335
            .lvl = 54,
#line 8336
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8337
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8342
            .species = SPECIES_GLISCOR,
#line 8342
            .gender = TRAINER_MON_FEMALE,
#line 8342
            .heldItem = ITEM_TOXIC_ORB,
#line 8346
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8343
            .ability = ABILITY_POISON_HEAL,
#line 8344
            .lvl = 54,
#line 8345
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8347
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8352
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8352
            .heldItem = ITEM_ASSAULT_VEST,
#line 8356
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8353
            .ability = ABILITY_CLEAR_BODY,
#line 8354
            .lvl = 54,
#line 8355
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8357
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8362
            .species = SPECIES_HONCHKROW,
#line 8362
            .gender = TRAINER_MON_MALE,
#line 8362
            .heldItem = ITEM_FOCUS_SASH,
#line 8366
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8363
            .ability = ABILITY_MOXIE,
#line 8364
            .lvl = 54,
#line 8365
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8367
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8373
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8374
        .trainerName = _("SAMUEL"),
#line 8375
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8376
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8378
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8379
        .doubleBattle = FALSE,
#line 8380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8382
            .species = SPECIES_SLOWKING,
#line 8382
            .gender = TRAINER_MON_MALE,
#line 8382
            .heldItem = ITEM_LIFE_ORB,
#line 8386
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8383
            .ability = ABILITY_REGENERATOR,
#line 8384
            .lvl = 54,
#line 8385
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8387
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8392
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8392
            .heldItem = ITEM_ROCKY_HELMET,
#line 8396
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8393
            .ability = ABILITY_REGENERATOR,
#line 8394
            .lvl = 54,
#line 8395
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8396
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8401
            .species = SPECIES_GLISCOR,
#line 8401
            .gender = TRAINER_MON_FEMALE,
#line 8401
            .heldItem = ITEM_TOXIC_ORB,
#line 8405
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8402
            .ability = ABILITY_POISON_HEAL,
#line 8403
            .lvl = 54,
#line 8404
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8406
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8411
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8411
            .heldItem = ITEM_ASSAULT_VEST,
#line 8415
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8412
            .ability = ABILITY_CLEAR_BODY,
#line 8413
            .lvl = 54,
#line 8414
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8416
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8421
            .species = SPECIES_HONCHKROW,
#line 8421
            .gender = TRAINER_MON_MALE,
#line 8421
            .heldItem = ITEM_FOCUS_SASH,
#line 8425
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8422
            .ability = ABILITY_MOXIE,
#line 8423
            .lvl = 54,
#line 8424
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8426
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8432
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8433
        .trainerName = _("MAY"),
#line 8434
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8435
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8436
F_TRAINER_FEMALE | 
#line 8437
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8438
        .doubleBattle = FALSE,
#line 8439
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8441
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8443
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8442
            .lvl = 31,
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
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8451
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8450
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8453
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8455
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8454
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8457
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8458
        .trainerName = _("MAY"),
#line 8459
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8460
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8461
F_TRAINER_FEMALE | 
#line 8462
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8463
        .doubleBattle = FALSE,
#line 8464
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8466
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8468
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8467
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8470
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8472
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8471
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8474
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8476
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8475
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8478
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8480
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8479
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8482
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8483
        .trainerName = _("MAY"),
#line 8484
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8485
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8486
F_TRAINER_FEMALE | 
#line 8487
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8488
        .doubleBattle = FALSE,
#line 8489
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8491
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8493
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8492
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8495
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8497
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8496
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8499
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8501
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8500
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8503
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8504
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8507
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8508
        .trainerName = _("JONAH"),
#line 8509
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8510
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8512
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8513
        .doubleBattle = FALSE,
#line 8514
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8516
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8517
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8520
            .species = SPECIES_AZUMARILL,
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
            .species = SPECIES_CLEFABLE,
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
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8529
        .trainerName = _("HENRY"),
#line 8530
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8531
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8533
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8534
        .doubleBattle = FALSE,
#line 8535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8537
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8538
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8541
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8543
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8542
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8545
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8546
        .trainerName = _("ROGER"),
#line 8547
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8548
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8550
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8551
        .doubleBattle = FALSE,
#line 8552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8554
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8555
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8558
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8560
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8559
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8562
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8563
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8566
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8567
        .trainerName = _("ALEXA"),
#line 8568
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8569
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8570
F_TRAINER_FEMALE | 
#line 8571
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8572
        .items = { ITEM_FULL_RESTORE },
#line 8573
        .doubleBattle = FALSE,
#line 8574
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8576
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8577
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8580
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8581
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8584
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8585
        .trainerName = _("RUBEN"),
#line 8586
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8587
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8589
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8590
        .items = { ITEM_HYPER_POTION },
#line 8591
        .doubleBattle = FALSE,
#line 8592
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8594
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8596
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8595
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8598
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8600
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8599
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8602
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8603
        .trainerName = _("KOJI"),
#line 8604
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8605
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8607
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8608
        .doubleBattle = FALSE,
#line 8609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8611
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8612
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8615
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8616
        .trainerName = _("WAYNE"),
#line 8617
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8618
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8620
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8621
        .doubleBattle = FALSE,
#line 8622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8624
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8625
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8628
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8629
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8632
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8633
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8636
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8637
        .trainerName = _("AIDAN"),
#line 8638
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8639
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8641
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8642
        .doubleBattle = FALSE,
#line 8643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8645
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8646
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8649
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8650
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8653
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8654
        .trainerName = _("REED"),
#line 8655
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8656
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8658
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8659
        .doubleBattle = FALSE,
#line 8660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8662
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8663
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8666
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8667
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8670
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8671
        .trainerName = _("TISHA"),
#line 8672
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8673
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8674
F_TRAINER_FEMALE | 
#line 8675
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8676
        .doubleBattle = FALSE,
#line 8677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8679
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8680
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8683
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8684
        .trainerName = _("TORI & TIA"),
#line 8685
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8686
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8688
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8689
        .doubleBattle = TRUE,
#line 8690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8692
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8693
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8696
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8697
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8700
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8701
        .trainerName = _("KIM & IRIS"),
#line 8702
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8703
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8705
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8706
        .doubleBattle = TRUE,
#line 8707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8709
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8710
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8713
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8714
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8717
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8718
        .trainerName = _("TYRA & IVY"),
#line 8719
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8720
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8722
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8723
        .doubleBattle = TRUE,
#line 8724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8726
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8727
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8730
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8731
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8735
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8736
        .trainerName = _("MEL & PAUL"),
#line 8737
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8738
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8740
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8741
        .doubleBattle = TRUE,
#line 8742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8744
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8745
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8748
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8749
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8752
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8753
        .trainerName = _("JOHN & JAY"),
#line 8754
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8755
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8757
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8758
        .doubleBattle = TRUE,
#line 8759
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8761
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8762
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8765
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8767
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8766
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8769
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8770
        .trainerName = _("RELI & IAN"),
#line 8771
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8772
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8774
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8775
        .doubleBattle = TRUE,
#line 8776
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8778
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8779
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8782
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8783
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8786
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8787
        .trainerName = _("LILA & ROY"),
#line 8788
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8789
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8791
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8792
        .doubleBattle = TRUE,
#line 8793
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8795
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8796
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8799
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8800
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8803
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8804
        .trainerName = _("LISA & RAY"),
#line 8805
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8806
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8808
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8809
        .doubleBattle = TRUE,
#line 8810
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8812
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8813
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8816
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8817
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8820
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8821
        .trainerName = _("CHRIS"),
#line 8822
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8823
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8825
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8826
        .doubleBattle = FALSE,
#line 8827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8829
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8830
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8833
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8834
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8837
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8838
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8841
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8842
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8845
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8846
        .trainerName = _("DAWSON"),
#line 8847
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8848
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8850
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8851
        .doubleBattle = FALSE,
#line 8852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8854
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8854
            .heldItem = ITEM_NUGGET,
#line 8856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8855
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8858
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8859
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8862
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8863
        .trainerName = _("SARAH"),
#line 8864
        .trainerClass = TRAINER_CLASS_LADY,
#line 8865
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8866
F_TRAINER_FEMALE | 
#line 8867
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8868
        .items = { ITEM_FULL_RESTORE },
#line 8869
        .doubleBattle = FALSE,
#line 8870
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8872
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8873
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8876
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8876
            .heldItem = ITEM_NUGGET,
#line 8878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8877
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8880
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8881
        .trainerName = _("DARIAN"),
#line 8882
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8883
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8885
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8886
        .doubleBattle = FALSE,
#line 8887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8889
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8890
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8893
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8894
        .trainerName = _("HAILEY"),
#line 8895
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8896
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8897
F_TRAINER_FEMALE | 
#line 8898
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8899
        .doubleBattle = FALSE,
#line 8900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8902
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8903
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8906
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8907
        .trainerName = _("CHANDLER"),
#line 8908
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8909
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
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
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8916
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8919
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8920
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8923
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8924
        .trainerName = _("KALEB"),
#line 8925
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8926
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8928
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8929
        .doubleBattle = FALSE,
#line 8930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8932
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8932
            .heldItem = ITEM_ORAN_BERRY,
#line 8934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8933
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8936
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8936
            .heldItem = ITEM_ORAN_BERRY,
#line 8938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8937
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8940
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8941
        .trainerName = _("JOSEPH"),
#line 8942
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8943
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8945
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8946
        .doubleBattle = FALSE,
#line 8947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8949
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8950
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8953
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8954
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8957
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8958
        .trainerName = _("ALYSSA"),
#line 8959
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8960
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8961
F_TRAINER_FEMALE | 
#line 8962
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8963
        .doubleBattle = FALSE,
#line 8964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8966
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8967
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8970
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8971
        .trainerName = _("MARCOS"),
#line 8972
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8973
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8975
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8976
        .doubleBattle = FALSE,
#line 8977
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8979
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8981
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8980
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8983
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8984
        .trainerName = _("RHETT"),
#line 8985
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8986
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8988
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8989
        .doubleBattle = FALSE,
#line 8990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8992
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8994
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8993
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8996
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8997
        .trainerName = _("TYRON"),
#line 8998
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8999
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9001
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9002
        .doubleBattle = FALSE,
#line 9003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9005
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9007
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9006
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9009
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 9010
        .trainerName = _("CELINA"),
#line 9011
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9012
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9013
F_TRAINER_FEMALE | 
#line 9014
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9015
        .doubleBattle = FALSE,
#line 9016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9018
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9020
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9019
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9022
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 9023
        .trainerName = _("BIANCA"),
#line 9024
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9025
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9026
F_TRAINER_FEMALE | 
#line 9027
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9028
        .doubleBattle = FALSE,
#line 9029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9031
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9032
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9035
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9036
        .trainerName = _("HAYDEN"),
#line 9037
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9038
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9040
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9041
        .doubleBattle = FALSE,
#line 9042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9044
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9045
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9048
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9049
        .trainerName = _("SOPHIE"),
#line 9050
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9051
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9052
F_TRAINER_FEMALE | 
#line 9053
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9054
        .doubleBattle = FALSE,
#line 9055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9057
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9058
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9061
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9062
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9065
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9066
        .trainerName = _("COBY"),
#line 9067
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9068
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9070
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9071
        .doubleBattle = FALSE,
#line 9072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9074
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9075
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9078
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9079
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9082
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9083
        .trainerName = _("LAWRENCE"),
#line 9084
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9085
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9087
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9088
        .doubleBattle = FALSE,
#line 9089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9091
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9092
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9095
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9096
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9099
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9100
        .trainerName = _("WYATT"),
#line 9101
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9102
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9104
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9105
        .doubleBattle = FALSE,
#line 9106
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9108
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9109
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9112
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9114
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9113
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9116
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9117
        .trainerName = _("ANGELINA"),
#line 9118
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9119
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9120
F_TRAINER_FEMALE | 
#line 9121
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9122
        .doubleBattle = FALSE,
#line 9123
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9125
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9127
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9126
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9129
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9131
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9130
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9133
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9134
        .trainerName = _("KAI"),
#line 9135
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9136
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9138
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9139
        .doubleBattle = FALSE,
#line 9140
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9142
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9144
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9143
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9146
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9147
        .trainerName = _("CHARLOTTE"),
#line 9148
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9149
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9150
F_TRAINER_FEMALE | 
#line 9151
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9152
        .doubleBattle = FALSE,
#line 9153
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9155
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9157
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9156
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9159
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9160
        .trainerName = _("DEANDRE"),
#line 9161
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9162
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9164
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9165
        .doubleBattle = FALSE,
#line 9166
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9168
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9170
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9169
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9172
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9174
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9173
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9176
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9178
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9177
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9180
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9181
        .trainerName = _("GRUNT"),
#line 9182
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9183
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9185
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9186
        .doubleBattle = FALSE,
#line 9187
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9189
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9191
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9190
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9193
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9194
        .trainerName = _("GRUNT"),
#line 9195
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9196
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9198
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9199
        .doubleBattle = FALSE,
#line 9200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9202
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9204
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9203
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9206
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9207
        .trainerName = _("GRUNT"),
#line 9208
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9209
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9211
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9212
        .doubleBattle = FALSE,
#line 9213
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9215
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9217
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9216
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9219
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9220
        .trainerName = _("GRUNT"),
#line 9221
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9222
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9224
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9225
        .doubleBattle = FALSE,
#line 9226
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9228
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9230
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9229
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9232
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9233
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9236
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9237
        .trainerName = _("GRUNT"),
#line 9238
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9239
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9241
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9242
        .doubleBattle = FALSE,
#line 9243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9245
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9247
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9246
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9249
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9250
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9253
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9254
        .trainerName = _("GRUNT"),
#line 9255
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9256
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9258
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9259
        .doubleBattle = FALSE,
#line 9260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9262
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9263
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9266
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9267
        .trainerName = _("GRUNT"),
#line 9268
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9269
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9271
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9272
        .doubleBattle = FALSE,
#line 9273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9275
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9276
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9279
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9280
        .trainerName = _("GRUNT"),
#line 9281
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9282
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9284
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9285
        .doubleBattle = FALSE,
#line 9286
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9288
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9290
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9289
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9292
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9293
        .trainerName = _("GRUNT"),
#line 9294
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9295
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9297
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9298
        .doubleBattle = FALSE,
#line 9299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9301
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9302
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9305
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9306
        .trainerName = _("GRUNT"),
#line 9307
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9308
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9310
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9311
        .doubleBattle = FALSE,
#line 9312
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9314
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9315
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9318
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9319
        .trainerName = _("GRUNT"),
#line 9320
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9321
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9323
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9324
        .doubleBattle = FALSE,
#line 9325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9327
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9328
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9331
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9332
        .trainerName = _("GRUNT"),
#line 9333
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9334
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9336
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9337
        .doubleBattle = FALSE,
#line 9338
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9340
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9342
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9341
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9344
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9345
        .trainerName = _("GRUNT"),
#line 9346
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9347
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9349
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9350
        .doubleBattle = FALSE,
#line 9351
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9353
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9354
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9357
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9358
        .trainerName = _("GRUNT"),
#line 9359
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9360
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9361
F_TRAINER_FEMALE | 
#line 9362
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9363
        .doubleBattle = FALSE,
#line 9364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9366
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9367
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9370
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9371
        .trainerName = _("GRUNT"),
#line 9372
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9373
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9374
F_TRAINER_FEMALE | 
#line 9375
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9376
        .doubleBattle = FALSE,
#line 9377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9379
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9380
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9383
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9384
        .trainerName = _("GRUNT"),
#line 9385
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9386
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9387
F_TRAINER_FEMALE | 
#line 9388
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9389
        .doubleBattle = FALSE,
#line 9390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9392
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9393
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9396
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9397
        .trainerName = _("TABITHA"),
#line 9398
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9399
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9401
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9402
        .doubleBattle = FALSE,
#line 9403
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9405
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9408
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9406
            .ability = ABILITY_DROUGHT,
#line 9407
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9409
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9414
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9414
            .heldItem = ITEM_POISON_BARB,
#line 9417
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9415
            .ability = ABILITY_LEVITATE,
#line 9416
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9418
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9423
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9423
            .heldItem = ITEM_LIFE_ORB,
#line 9426
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9424
            .ability = ABILITY_LEVITATE,
#line 9425
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9427
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9432
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .heldItem = ITEM_FOCUS_SASH,
#line 9435
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9433
            .ability = ABILITY_OWN_TEMPO,
#line 9434
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9436
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9441
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9442
        .trainerName = _("DARCY"),
#line 9443
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9444
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9445
F_TRAINER_FEMALE | 
#line 9446
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9447
        .items = { ITEM_HYPER_POTION },
#line 9448
        .doubleBattle = FALSE,
#line 9449
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9451
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9452
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9455
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9456
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9459
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9460
        .trainerName = _("MAXIE"),
#line 9461
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9462
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9464
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9465
        .doubleBattle = FALSE,
#line 9466
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9468
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9468
            .heldItem = ITEM_ROCKY_HELMET,
#line 9471
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9469
            .ability = ABILITY_ROCK_HEAD,
#line 9470
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9471
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9476
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .heldItem = ITEM_AIR_BALLOON,
#line 9479
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9477
            .ability = ABILITY_HEAVY_METAL,
#line 9478
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9479
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9484
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .heldItem = ITEM_SHARP_BEAK,
#line 9487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9485
            .ability = ABILITY_INNER_FOCUS,
#line 9486
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9487
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9492
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9493
        .trainerName = _("PETE"),
#line 9494
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9495
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9497
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9498
        .doubleBattle = FALSE,
#line 9499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9501
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9502
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9505
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9506
        .trainerName = _("ISABELLE"),
#line 9507
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9508
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9509
F_TRAINER_FEMALE | 
#line 9510
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9511
        .doubleBattle = FALSE,
#line 9512
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9514
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9515
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9518
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9519
        .trainerName = _("ANDRES"),
#line 9520
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9521
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9523
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9524
        .doubleBattle = FALSE,
#line 9525
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9527
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9529
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9528
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9531
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9533
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9532
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9535
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9536
        .trainerName = _("JOSUE"),
#line 9537
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9538
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9540
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9541
        .doubleBattle = FALSE,
#line 9542
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9544
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9546
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9545
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9548
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9550
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9549
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9552
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9553
        .trainerName = _("CAMRON"),
#line 9554
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9555
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9557
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9558
        .doubleBattle = FALSE,
#line 9559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9561
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9562
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9565
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9566
        .trainerName = _("CORY"),
#line 9567
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9568
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9571
        .doubleBattle = FALSE,
#line 9572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9574
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9575
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9578
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9579
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9582
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9583
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9586
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9587
        .trainerName = _("CAROLINA"),
#line 9588
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9589
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9590
F_TRAINER_FEMALE | 
#line 9591
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9592
        .items = { ITEM_HYPER_POTION },
#line 9593
        .doubleBattle = FALSE,
#line 9594
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9596
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9598
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9597
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9600
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9602
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9601
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9604
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9606
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9605
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9608
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9609
        .trainerName = _("ELIJAH"),
#line 9610
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9611
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9613
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9614
        .doubleBattle = FALSE,
#line 9615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9617
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9618
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9621
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9622
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9625
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9626
        .trainerName = _("CELIA"),
#line 9627
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9628
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9629
F_TRAINER_FEMALE | 
#line 9630
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9631
        .doubleBattle = FALSE,
#line 9632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9634
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9635
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9638
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9639
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9642
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9643
        .trainerName = _("BRYAN"),
#line 9644
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9645
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9647
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9648
        .doubleBattle = FALSE,
#line 9649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9651
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9652
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9655
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9656
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9659
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9660
        .trainerName = _("BRANDEN"),
#line 9661
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9662
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9664
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9665
        .doubleBattle = FALSE,
#line 9666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9668
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9669
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9672
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9673
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9676
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9677
        .trainerName = _("BRYANT"),
#line 9678
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9679
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9681
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9682
        .doubleBattle = FALSE,
#line 9683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9685
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9686
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9689
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9690
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9693
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9694
        .trainerName = _("SHAYLA"),
#line 9695
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9696
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9697
F_TRAINER_FEMALE | 
#line 9698
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9699
        .doubleBattle = FALSE,
#line 9700
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9702
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9703
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9706
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9707
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9710
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9711
        .trainerName = _("KYRA"),
#line 9712
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9713
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9714
F_TRAINER_FEMALE | 
#line 9715
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9716
        .doubleBattle = FALSE,
#line 9717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9719
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9720
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9723
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9724
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9727
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9728
        .trainerName = _("JAIDEN"),
#line 9729
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9730
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9732
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9733
        .doubleBattle = FALSE,
#line 9734
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9736
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9737
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9740
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9741
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9744
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9745
        .trainerName = _("ALIX"),
#line 9746
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9747
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9748
F_TRAINER_FEMALE | 
#line 9749
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9750
        .doubleBattle = FALSE,
#line 9751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9753
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9754
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9757
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9758
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9761
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9762
        .trainerName = _("HELENE"),
#line 9763
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9764
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9765
F_TRAINER_FEMALE | 
#line 9766
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9767
        .doubleBattle = FALSE,
#line 9768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9770
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9771
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9774
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9775
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9778
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9779
        .trainerName = _("MARLENE"),
#line 9780
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9781
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9782
F_TRAINER_FEMALE | 
#line 9783
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9784
        .doubleBattle = FALSE,
#line 9785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9787
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9788
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9791
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9792
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9795
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9796
        .trainerName = _("DEVAN"),
#line 9797
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9798
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9800
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9801
        .doubleBattle = FALSE,
#line 9802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9804
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9805
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9808
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9809
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9812
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9813
        .trainerName = _("JOHNSON"),
#line 9814
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9815
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9817
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9818
        .doubleBattle = FALSE,
#line 9819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9821
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9822
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9825
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9826
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9829
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9830
        .trainerName = _("MELINA"),
#line 9831
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9832
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9833
F_TRAINER_FEMALE | 
#line 9834
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9835
        .doubleBattle = FALSE,
#line 9836
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9838
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9839
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9842
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9843
        .trainerName = _("MELISSA"),
#line 9844
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9845
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9846
F_TRAINER_FEMALE | 
#line 9847
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9848
        .doubleBattle = FALSE,
#line 9849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9851
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9852
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9855
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9856
        .trainerName = _("BRANDI"),
#line 9857
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9858
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9859
F_TRAINER_FEMALE | 
#line 9860
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9861
        .doubleBattle = FALSE,
#line 9862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9864
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9865
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9868
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9869
        .trainerName = _("AISHA"),
#line 9870
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9871
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9872
F_TRAINER_FEMALE | 
#line 9873
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9874
        .doubleBattle = FALSE,
#line 9875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9877
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9878
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9881
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9882
        .trainerName = _("MAKAYLA"),
#line 9883
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9884
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9885
F_TRAINER_FEMALE | 
#line 9886
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9887
        .items = { ITEM_HYPER_POTION },
#line 9888
        .doubleBattle = FALSE,
#line 9889
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9891
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9893
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9892
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9895
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9896
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9899
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9900
        .trainerName = _("FABIAN"),
#line 9901
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9902
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9904
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9905
        .doubleBattle = FALSE,
#line 9906
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9908
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9909
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9912
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9913
        .trainerName = _("DAYTON"),
#line 9914
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9915
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9917
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9918
        .doubleBattle = FALSE,
#line 9919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9921
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9922
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9925
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9926
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9929
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9930
        .trainerName = _("RACHEL"),
#line 9931
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9932
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9933
F_TRAINER_FEMALE | 
#line 9934
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9935
        .doubleBattle = FALSE,
#line 9936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9938
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9939
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9942
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9943
        .trainerName = _("LEONEL"),
#line 9944
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9945
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9947
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9948
        .items = { ITEM_HYPER_POTION },
#line 9949
        .doubleBattle = FALSE,
#line 9950
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9952
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9954
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9953
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9956
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9957
        .trainerName = _("CALLIE"),
#line 9958
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9959
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9960
F_TRAINER_FEMALE | 
#line 9961
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9962
        .doubleBattle = FALSE,
#line 9963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9965
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9966
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9969
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9970
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9973
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9974
        .trainerName = _("CALE"),
#line 9975
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9976
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9978
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9979
        .doubleBattle = FALSE,
#line 9980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9982
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9983
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9986
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9987
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9990
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9991
        .trainerName = _("MYLES"),
#line 9992
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9993
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9995
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9996
        .doubleBattle = FALSE,
#line 9997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9999
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10001
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10000
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10003
            .species = SPECIES_EXEGGUTOR,
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
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10009
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10008
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10011
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 10012
        .trainerName = _("PAT"),
#line 10013
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10014
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 10015
F_TRAINER_FEMALE | 
#line 10016
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10017
        .doubleBattle = FALSE,
#line 10018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10020
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10022
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10021
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10024
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10026
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10025
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10028
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10030
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10029
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10033
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10034
        .trainerName = _("CRISTIN"),
#line 10035
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10036
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10037
F_TRAINER_FEMALE | 
#line 10038
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10039
        .items = { ITEM_HYPER_POTION },
#line 10040
        .doubleBattle = FALSE,
#line 10041
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10043
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10045
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10044
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10047
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10049
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10048
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10051
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10052
        .trainerName = _("MAY"),
#line 10053
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10054
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10055
F_TRAINER_FEMALE | 
#line 10056
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10057
        .doubleBattle = FALSE,
#line 10058
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10060
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10062
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10061
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10064
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10066
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10065
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10068
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10069
        .trainerName = _("MAY"),
#line 10070
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10071
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10072
F_TRAINER_FEMALE | 
#line 10073
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10074
        .doubleBattle = FALSE,
#line 10075
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10077
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10079
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10078
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10081
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10082
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10085
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10086
        .trainerName = _("GRUNT"),
#line 10087
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10088
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10090
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10091
        .doubleBattle = FALSE,
#line 10092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10094
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10094
            .heldItem = ITEM_EVIOLITE,
#line 10096
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10095
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10097
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
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
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10108
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10107
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10109
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
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
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10120
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10119
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10121
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
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
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10132
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10131
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10133
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
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
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10143
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10145
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10146
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10148
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
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
            .species = SPECIES_ZUBAT,
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
#line 10161
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10170
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10172
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10171
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10173
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10174
        .trainerName = _("GRUNT"),
#line 10175
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10176
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10178
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10179
        .doubleBattle = FALSE,
#line 10180
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10182
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10184
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10183
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10185
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 10186
        .trainerName = _("GRUNT"),
#line 10187
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10188
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10190
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10191
        .doubleBattle = FALSE,
#line 10192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10194
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10195
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10197
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10198
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10200
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10201
        .trainerName = _("GRUNT"),
#line 10202
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10203
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10205
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10206
        .doubleBattle = FALSE,
#line 10207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10209
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10211
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10210
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10212
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10213
        .trainerName = _("GRUNT"),
#line 10214
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10215
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10217
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10218
        .doubleBattle = FALSE,
#line 10219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10221
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10222
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10224
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10225
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10227
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10228
        .trainerName = _("GRUNT"),
#line 10229
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10230
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10232
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10233
        .doubleBattle = FALSE,
#line 10234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10236
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10237
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10239
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10240
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10242
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10243
        .trainerName = _("TATE&LIZA"),
#line 10244
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10245
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10247
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10248
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10249
        .doubleBattle = TRUE,
#line 10250
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10252
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10253
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10255
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10260
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10261
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10263
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10268
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10269
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10271
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10276
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10276
            .heldItem = ITEM_CHESTO_BERRY,
#line 10278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10277
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10279
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10284
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10284
            .heldItem = ITEM_CHESTO_BERRY,
#line 10286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10285
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10287
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10292
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10292
            .heldItem = ITEM_SITRUS_BERRY,
#line 10294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10293
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10295
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10300
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10301
        .trainerName = _("ANGELO"),
#line 10302
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10303
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10305
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10306
        .doubleBattle = FALSE,
#line 10307
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10309
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10311
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10310
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10313
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10315
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10314
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10317
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10318
        .trainerName = _("DARIUS"),
#line 10319
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10320
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10322
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10323
        .doubleBattle = FALSE,
#line 10324
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10326
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10328
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10327
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10330
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10331
        .trainerName = _("STEVEN"),
#line 10332
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10333
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10335
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10336
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10337
        .doubleBattle = FALSE,
#line 10338
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10340
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10341
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10343
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10348
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10350
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10349
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10351
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10356
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10357
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10359
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10364
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10365
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10367
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10372
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10373
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10375
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10380
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10380
            .heldItem = ITEM_SITRUS_BERRY,
#line 10382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10381
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10383
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10388
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10389
        .trainerName = _("ANABEL"),
#line 10390
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10391
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10392
F_TRAINER_FEMALE | 
#line 10393
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10394
        .doubleBattle = FALSE,
#line 10395
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10397
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10398
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10401
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10402
        .trainerName = _("TUCKER"),
#line 10403
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10404
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10406
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10407
        .doubleBattle = FALSE,
#line 10408
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10410
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10411
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10414
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10415
        .trainerName = _("SPENSER"),
#line 10416
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10417
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10419
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10420
        .doubleBattle = FALSE,
#line 10421
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10423
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10424
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10427
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10428
        .trainerName = _("GRETA"),
#line 10429
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10430
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10431
F_TRAINER_FEMALE | 
#line 10432
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10433
        .doubleBattle = FALSE,
#line 10434
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10436
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10437
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10440
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10441
        .trainerName = _("GRUNT"),
#line 10442
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10443
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10445
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10446
        .doubleBattle = FALSE,
#line 10447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10449
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10450
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10453
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10454
        .trainerName = _("GHOSTESS"),
#line 10455
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10456
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10457
F_TRAINER_FEMALE | 
#line 10458
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10459
        .doubleBattle = FALSE,
#line 10460
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10462
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10462
            .heldItem = ITEM_TWISTED_SPOON,
#line 10465
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10463
            .ability = ABILITY_THICK_FAT,
#line 10464
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10465
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10470
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10470
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10473
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10471
            .ability = ABILITY_WONDER_SKIN,
#line 10472
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10473
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10478
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10478
            .heldItem = ITEM_METRONOME,
#line 10481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10479
            .ability = ABILITY_ROCK_HEAD,
#line 10480
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10481
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10486
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10486
            .heldItem = ITEM_ASSAULT_VEST,
#line 10489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10487
            .ability = ABILITY_CURSED_BODY,
#line 10488
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10489
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10494
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10495
        .trainerName = _("JORDAN"),
#line 10496
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10497
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10499
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10500
        .doubleBattle = FALSE,
#line 10501
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10503
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10504
            .ability = ABILITY_CHLOROPHYLL,
#line 10505
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10506
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10511
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10511
            .heldItem = ITEM_EVIOLITE,
#line 10514
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10512
            .ability = ABILITY_PRESSURE,
#line 10513
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10514
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10519
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10519
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10520
            .ability = ABILITY_LIQUID_OOZE,
#line 10521
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10522
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10527
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10527
            .heldItem = ITEM_QUICK_CLAW,
#line 10530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10528
            .ability = ABILITY_OBLIVIOUS,
#line 10529
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10530
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10535
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10535
            .heldItem = ITEM_SHARP_BEAK,
#line 10538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10536
            .ability = ABILITY_INNER_FOCUS,
#line 10537
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10538
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10543
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10544
        .trainerName = _("JORDAN"),
#line 10545
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10546
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10548
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10549
        .doubleBattle = FALSE,
#line 10550
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10552
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10552
            .heldItem = ITEM_WIDE_LENS,
#line 10555
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10553
            .ability = ABILITY_CHLOROPHYLL,
#line 10554
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10555
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10560
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10560
            .heldItem = ITEM_LIFE_ORB,
#line 10563
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10561
            .ability = ABILITY_PRESSURE,
#line 10562
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10563
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10568
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10568
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10571
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10569
            .ability = ABILITY_LIQUID_OOZE,
#line 10570
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10571
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10576
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10576
            .heldItem = ITEM_CHOICE_SPECS,
#line 10579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10577
            .ability = ABILITY_OBLIVIOUS,
#line 10578
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10579
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10584
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10584
            .heldItem = ITEM_SHARP_BEAK,
#line 10587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10585
            .ability = ABILITY_INNER_FOCUS,
#line 10586
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10587
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10592
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10592
            .heldItem = ITEM_ASSAULT_VEST,
#line 10595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10593
            .ability = ABILITY_AIR_LOCK,
#line 10594
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10595
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10600
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10601
        .trainerName = _("GHOSTESS"),
#line 10602
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10603
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10604
F_TRAINER_FEMALE | 
#line 10605
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10606
        .doubleBattle = FALSE,
#line 10607
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10609
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10609
            .heldItem = ITEM_EXPERT_BELT,
#line 10612
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10610
            .ability = ABILITY_THICK_FAT,
#line 10611
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10612
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10617
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10617
            .heldItem = ITEM_MUSCLE_BAND,
#line 10620
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10618
            .ability = ABILITY_WONDER_SKIN,
#line 10619
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10620
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10625
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10625
            .heldItem = ITEM_WIDE_LENS,
#line 10628
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10626
            .ability = ABILITY_INTIMIDATE,
#line 10627
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10628
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10633
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .heldItem = ITEM_ASSAULT_VEST,
#line 10636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10634
            .ability = ABILITY_CURSED_BODY,
#line 10635
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10636
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10641
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10642
        .trainerName = _("GRUNT"),
#line 10643
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10644
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10646
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10647
        .doubleBattle = FALSE,
#line 10648
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10650
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10651
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10653
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10654
        .trainerName = _("GRUNT"),
#line 10655
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10656
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10658
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10659
        .doubleBattle = FALSE,
#line 10660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10662
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10664
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10663
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10665
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10666
        .trainerName = _("GRUNT"),
#line 10667
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10668
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10670
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10671
        .doubleBattle = FALSE,
#line 10672
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10674
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10676
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10675
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10677
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10678
        .trainerName = _("GRUNT"),
#line 10679
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10680
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10682
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10683
        .doubleBattle = FALSE,
#line 10684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10686
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10688
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10687
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10689
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10690
        .trainerName = _("CORY"),
#line 10691
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10692
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10694
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10695
        .doubleBattle = FALSE,
#line 10696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10698
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10700
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10699
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10702
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10704
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10703
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10706
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10708
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10707
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10710
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10711
        .trainerName = _("CORY"),
#line 10712
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10713
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10715
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10716
        .doubleBattle = FALSE,
#line 10717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10719
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10721
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10720
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10723
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10725
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10724
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10727
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10729
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10728
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10731
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10732
        .trainerName = _("MARIELA"),
#line 10733
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10734
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10735
F_TRAINER_FEMALE | 
#line 10736
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10737
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10739
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10740
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10743
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10744
        .trainerName = _("ALVARO"),
#line 10745
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10746
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10748
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10749
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10751
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10752
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10755
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10756
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10759
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10760
        .trainerName = _("EVERETT"),
#line 10761
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10762
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10764
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10765
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10767
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10768
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10771
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10772
        .trainerName = _("RED"),
#line 10773
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10774
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10776
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10777
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10779
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10780
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10783
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10784
        .trainerName = _("LEAF"),
#line 10785
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10786
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10787
F_TRAINER_FEMALE | 
#line 10788
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10789
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10791
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10792
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10795
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10796
        .trainerName = _("SAMUEL"),
#line 10797
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10798
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10800
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10801
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10803
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10804
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10807
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10808
        .trainerName = _("MAY"),
#line 10809
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10810
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10811
F_TRAINER_FEMALE | 
#line 10812
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10813
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10815
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10816
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
