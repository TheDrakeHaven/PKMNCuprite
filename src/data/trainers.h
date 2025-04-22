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
            .lvl = 39,
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
            .lvl = 39,
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
        .trainerClass = TRAINER_CLASS_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
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
        .trainerClass = TRAINER_CLASS_HIKER,
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
            .lvl = 39,
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
        .trainerClass = TRAINER_CLASS_HIKER,
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
            .lvl = 37,
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
            .lvl = 37,
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
        .trainerPic = TRAINER_PIC_GENTLEMAN,
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
            .species = SPECIES_GENESECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3088
            .heldItem = ITEM_DOUSE_DRIVE,
#line 3093
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3089
            .ability = ABILITY_DOWNLOAD,
#line 3090
            .lvl = 75,
#line 3092
            .nature = NATURE_HASTY,
#line 3091
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3093
                MOVE_FIRST_IMPRESSION,
                MOVE_IRON_HEAD,
                MOVE_TECHNO_BLAST,
                MOVE_ICE_BEAM,
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 39,
#line 3448
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3450
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 39,
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
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5898
        .trainerPic = TRAINER_PIC_HIKER,
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
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
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
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
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
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6224
            .species = SPECIES_SLOWPOKE,
#line 6224
            .gender = TRAINER_MON_MALE,
#line 6224
            .heldItem = ITEM_SITRUS_BERRY,
#line 6228
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6225
            .ability = ABILITY_REGENERATOR,
#line 6226
            .lvl = 24,
#line 6227
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6229
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6234
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6234
            .heldItem = ITEM_LUM_BERRY,
#line 6238
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6235
            .ability = ABILITY_REGENERATOR,
#line 6236
            .lvl = 24,
#line 6237
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6239
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6244
            .species = SPECIES_GLIGAR,
#line 6244
            .gender = TRAINER_MON_FEMALE,
#line 6244
            .heldItem = ITEM_RAZOR_FANG,
#line 6248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6245
            .ability = ABILITY_HYPER_CUTTER,
#line 6246
            .lvl = 24,
#line 6247
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6249
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6254
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6255
            .ability = ABILITY_CLEAR_BODY,
#line 6256
            .lvl = 24,
#line 6257
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6258
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6263
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6264
        .trainerName = _("SAMUEL"),
#line 6265
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6266
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6268
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6269
        .doubleBattle = FALSE,
#line 6270
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6272
            .species = SPECIES_SLOWPOKE,
#line 6272
            .gender = TRAINER_MON_MALE,
#line 6272
            .heldItem = ITEM_LIFE_ORB,
#line 6276
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6273
            .ability = ABILITY_REGENERATOR,
#line 6274
            .lvl = 49,
#line 6275
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6277
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6282
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .heldItem = ITEM_ROCKY_HELMET,
#line 6286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6283
            .ability = ABILITY_REGENERATOR,
#line 6284
            .lvl = 49,
#line 6285
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6286
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6291
            .species = SPECIES_GLIGAR,
#line 6291
            .gender = TRAINER_MON_FEMALE,
#line 6291
            .heldItem = ITEM_RAZOR_FANG,
#line 6295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6292
            .ability = ABILITY_HYPER_CUTTER,
#line 6293
            .lvl = 49,
#line 6294
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6296
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6301
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6301
            .heldItem = ITEM_ASSAULT_VEST,
#line 6305
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6302
            .ability = ABILITY_CLEAR_BODY,
#line 6303
            .lvl = 49,
#line 6304
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6305
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6310
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6310
            .heldItem = ITEM_FOCUS_SASH,
#line 6314
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6311
            .ability = ABILITY_PRANKSTER,
#line 6312
            .lvl = 49,
#line 6313
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6314
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6319
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6320
        .trainerName = _("SAMUEL"),
#line 6321
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6322
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6325
        .doubleBattle = FALSE,
#line 6326
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6328
            .species = SPECIES_SLOWPOKE,
#line 6328
            .gender = TRAINER_MON_MALE,
#line 6332
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6329
            .ability = ABILITY_REGENERATOR,
#line 6330
            .lvl = 5,
#line 6331
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6333
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6337
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6338
        .trainerName = _("SAMUEL"),
#line 6339
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6340
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6342
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6343
        .doubleBattle = FALSE,
#line 6344
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6346
            .species = SPECIES_SLOWPOKE,
#line 6346
            .gender = TRAINER_MON_MALE,
#line 6346
            .heldItem = ITEM_SITRUS_BERRY,
#line 6350
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6347
            .ability = ABILITY_REGENERATOR,
#line 6348
            .lvl = 24,
#line 6349
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6351
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6356
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6356
            .heldItem = ITEM_LUM_BERRY,
#line 6360
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6357
            .ability = ABILITY_REGENERATOR,
#line 6358
            .lvl = 24,
#line 6359
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6361
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6366
            .species = SPECIES_GLIGAR,
#line 6366
            .gender = TRAINER_MON_FEMALE,
#line 6366
            .heldItem = ITEM_RAZOR_FANG,
#line 6370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6367
            .ability = ABILITY_HYPER_CUTTER,
#line 6368
            .lvl = 24,
#line 6369
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6371
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6376
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6376
            .heldItem = ITEM_METAL_COAT,
#line 6380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6377
            .ability = ABILITY_CLEAR_BODY,
#line 6378
            .lvl = 24,
#line 6379
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6380
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6386
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6387
        .trainerName = _("SAMUEL"),
#line 6388
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6389
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6391
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6392
        .doubleBattle = FALSE,
#line 6393
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6395
            .species = SPECIES_SLOWPOKE,
#line 6395
            .gender = TRAINER_MON_MALE,
#line 6395
            .heldItem = ITEM_LIFE_ORB,
#line 6399
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6396
            .ability = ABILITY_REGENERATOR,
#line 6397
            .lvl = 44,
#line 6398
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6400
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6405
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6405
            .heldItem = ITEM_ROCKY_HELMET,
#line 6408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6406
            .ability = ABILITY_REGENERATOR,
#line 6408
            .lvl = 100,
#line 6407
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6408
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6413
            .species = SPECIES_GLIGAR,
#line 6413
            .gender = TRAINER_MON_FEMALE,
#line 6413
            .heldItem = ITEM_RAZOR_FANG,
#line 6417
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6414
            .ability = ABILITY_HYPER_CUTTER,
#line 6415
            .lvl = 44,
#line 6416
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6418
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6423
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6423
            .heldItem = ITEM_ASSAULT_VEST,
#line 6427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6424
            .ability = ABILITY_CLEAR_BODY,
#line 6425
            .lvl = 44,
#line 6426
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6427
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6432
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6433
        .trainerName = _("SAMUEL"),
#line 6434
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6435
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6437
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6438
        .doubleBattle = FALSE,
#line 6439
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6441
            .species = SPECIES_SLOWPOKE,
#line 6441
            .gender = TRAINER_MON_MALE,
#line 6445
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6442
            .ability = ABILITY_REGENERATOR,
#line 6443
            .lvl = 5,
#line 6444
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6446
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6450
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6451
        .trainerName = _("SAMUEL"),
#line 6452
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6453
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6455
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6456
        .doubleBattle = FALSE,
#line 6457
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6459
            .species = SPECIES_SLOWPOKE,
#line 6459
            .gender = TRAINER_MON_MALE,
#line 6459
            .heldItem = ITEM_SITRUS_BERRY,
#line 6463
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6460
            .ability = ABILITY_REGENERATOR,
#line 6461
            .lvl = 24,
#line 6462
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6464
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6469
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6469
            .heldItem = ITEM_LUM_BERRY,
#line 6473
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6470
            .ability = ABILITY_REGENERATOR,
#line 6471
            .lvl = 24,
#line 6472
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6474
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6479
            .species = SPECIES_GLIGAR,
#line 6479
            .gender = TRAINER_MON_FEMALE,
#line 6479
            .heldItem = ITEM_RAZOR_FANG,
#line 6483
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6480
            .ability = ABILITY_HYPER_CUTTER,
#line 6481
            .lvl = 24,
#line 6482
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6484
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6490
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6491
        .trainerName = _("SAMUEL"),
#line 6492
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6493
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6495
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6496
        .doubleBattle = FALSE,
#line 6497
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6499
            .species = SPECIES_SLOWPOKE,
#line 6499
            .gender = TRAINER_MON_MALE,
#line 6499
            .heldItem = ITEM_LIFE_ORB,
#line 6503
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6500
            .ability = ABILITY_REGENERATOR,
#line 6501
            .lvl = 44,
#line 6502
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6504
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6509
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6509
            .heldItem = ITEM_ROCKY_HELMET,
#line 6512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6510
            .ability = ABILITY_REGENERATOR,
#line 6512
            .lvl = 100,
#line 6511
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6512
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6517
            .species = SPECIES_GLIGAR,
#line 6517
            .gender = TRAINER_MON_FEMALE,
#line 6517
            .heldItem = ITEM_RAZOR_FANG,
#line 6521
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6518
            .ability = ABILITY_HYPER_CUTTER,
#line 6519
            .lvl = 44,
#line 6520
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6522
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6527
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6527
            .heldItem = ITEM_ASSAULT_VEST,
#line 6531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6528
            .ability = ABILITY_CLEAR_BODY,
#line 6529
            .lvl = 44,
#line 6530
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6531
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6536
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6537
        .trainerName = _("MAY"),
#line 6538
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6539
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6540
F_TRAINER_FEMALE | 
#line 6541
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6542
        .doubleBattle = FALSE,
#line 6543
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6545
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6546
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6549
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6550
        .trainerName = _("MAY"),
#line 6551
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6552
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6553
F_TRAINER_FEMALE | 
#line 6554
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6555
        .doubleBattle = FALSE,
#line 6556
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6558
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6560
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6559
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6562
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6563
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6566
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6568
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6567
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6570
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6571
        .trainerName = _("MAY"),
#line 6572
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6573
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6574
F_TRAINER_FEMALE | 
#line 6575
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6576
        .doubleBattle = FALSE,
#line 6577
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6579
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6581
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6580
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6583
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6584
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6587
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6589
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6588
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6591
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6592
        .trainerName = _("MAY"),
#line 6593
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6594
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6595
F_TRAINER_FEMALE | 
#line 6596
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6597
        .doubleBattle = FALSE,
#line 6598
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6600
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6601
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6604
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6605
        .trainerName = _("MAY"),
#line 6606
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6607
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6608
F_TRAINER_FEMALE | 
#line 6609
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6610
        .doubleBattle = FALSE,
#line 6611
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6613
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6615
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6614
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6617
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6619
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6618
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6621
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6623
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6622
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6625
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6626
        .trainerName = _("MAY"),
#line 6627
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6628
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6629
F_TRAINER_FEMALE | 
#line 6630
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6631
        .doubleBattle = FALSE,
#line 6632
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6634
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6636
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6635
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6638
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6639
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6642
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6644
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6643
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6646
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6647
        .trainerName = _("MAY"),
#line 6648
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6649
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6650
F_TRAINER_FEMALE | 
#line 6651
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6652
        .doubleBattle = FALSE,
#line 6653
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6655
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6656
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6659
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6660
        .trainerName = _("MAY"),
#line 6661
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6662
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6663
F_TRAINER_FEMALE | 
#line 6664
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6665
        .doubleBattle = FALSE,
#line 6666
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6668
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6670
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6669
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6672
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6673
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6676
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6677
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6680
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6681
        .trainerName = _("MAY"),
#line 6682
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6683
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6684
F_TRAINER_FEMALE | 
#line 6685
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6686
        .doubleBattle = FALSE,
#line 6687
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6689
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6691
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6690
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6693
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6694
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6697
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6698
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6701
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6702
        .trainerName = _("ISAAC"),
#line 6703
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6704
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6706
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6707
        .doubleBattle = FALSE,
#line 6708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6710
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6711
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6714
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6715
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6718
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6719
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6722
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6723
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6726
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6727
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6730
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6731
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6734
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6735
        .trainerName = _("DAVIS"),
#line 6736
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6737
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6740
        .doubleBattle = FALSE,
#line 6741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6743
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6744
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6747
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6748
        .trainerName = _("MITCHELL"),
#line 6749
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6750
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6752
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6753
        .doubleBattle = FALSE,
#line 6754
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6756
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6757
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6760
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6761
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6764
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6765
        .trainerName = _("LYDIA"),
#line 6766
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6767
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6768
F_TRAINER_FEMALE | 
#line 6769
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6770
        .doubleBattle = FALSE,
#line 6771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6773
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6774
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6777
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6778
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6781
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6782
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6785
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6786
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6789
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6790
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6793
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6794
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6797
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6798
        .trainerName = _("HALLE"),
#line 6799
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6800
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6801
F_TRAINER_FEMALE | 
#line 6802
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6803
        .items = { ITEM_FULL_RESTORE },
#line 6804
        .doubleBattle = FALSE,
#line 6805
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6807
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6808
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6811
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6812
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6815
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6816
        .trainerName = _("GARRISON"),
#line 6817
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6818
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6820
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6821
        .doubleBattle = FALSE,
#line 6822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6824
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6825
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6828
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6829
        .trainerName = _("JACKSON"),
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
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6839
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6842
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6843
        .trainerName = _("LORENZO"),
#line 6844
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6845
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6847
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6848
        .items = { ITEM_FULL_RESTORE },
#line 6849
        .doubleBattle = FALSE,
#line 6850
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6852
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6854
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6853
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6856
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6858
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6857
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6860
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6862
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6861
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6864
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6865
        .trainerName = _("SEBASTIAN"),
#line 6866
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6867
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6869
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6870
        .items = { ITEM_FULL_RESTORE },
#line 6871
        .doubleBattle = FALSE,
#line 6872
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6874
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6876
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6875
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6878
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6879
        .trainerName = _("CATHERINE"),
#line 6880
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6881
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6882
F_TRAINER_FEMALE | 
#line 6883
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6884
        .items = { ITEM_FULL_RESTORE },
#line 6885
        .doubleBattle = FALSE,
#line 6886
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6888
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6890
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6889
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6892
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6894
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6893
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6896
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6897
        .trainerName = _("JENNA"),
#line 6898
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6899
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6900
F_TRAINER_FEMALE | 
#line 6901
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6902
        .items = { ITEM_FULL_RESTORE },
#line 6903
        .doubleBattle = FALSE,
#line 6904
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6906
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6908
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6907
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6910
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6912
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6911
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6914
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6916
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6915
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6918
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6919
        .trainerName = _("SOPHIA"),
#line 6920
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6921
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6922
F_TRAINER_FEMALE | 
#line 6923
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6924
        .items = { ITEM_FULL_RESTORE },
#line 6925
        .doubleBattle = FALSE,
#line 6926
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6928
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6930
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6929
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6932
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6934
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6933
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6936
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6937
        .trainerName = _("JULIO"),
#line 6938
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6939
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
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
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6946
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6949
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6950
        .trainerName = _("GRUNT"),
#line 6951
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6952
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6954
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6955
        .doubleBattle = FALSE,
#line 6956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6958
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6959
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6962
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6964
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6963
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6966
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6967
        .trainerName = _("GRUNT"),
#line 6968
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6969
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6970
F_TRAINER_FEMALE | 
#line 6971
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6972
        .doubleBattle = FALSE,
#line 6973
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6975
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6976
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6979
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6980
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6983
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6984
        .trainerName = _("GRUNT"),
#line 6985
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6986
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6987
F_TRAINER_FEMALE | 
#line 6988
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6989
        .doubleBattle = FALSE,
#line 6990
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6992
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6994
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6993
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6996
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6997
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7000
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 7001
        .trainerName = _("GRUNT"),
#line 7002
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7003
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7005
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7006
        .doubleBattle = FALSE,
#line 7007
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7009
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7011
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7010
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7013
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7015
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7014
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7017
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 7018
        .trainerName = _("MARC"),
#line 7019
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7020
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7022
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7023
        .doubleBattle = FALSE,
#line 7024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7026
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7028
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7027
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7030
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7032
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7031
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7034
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7035
        .trainerName = _("BRENDEN"),
#line 7036
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7037
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7039
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7040
        .doubleBattle = FALSE,
#line 7041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7043
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7045
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7044
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7047
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7048
        .trainerName = _("LILITH"),
#line 7049
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7050
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7051
F_TRAINER_FEMALE | 
#line 7052
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7053
        .doubleBattle = FALSE,
#line 7054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7056
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7058
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7057
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7060
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7061
        .trainerName = _("CRISTIAN"),
#line 7062
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7063
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7065
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7066
        .doubleBattle = FALSE,
#line 7067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7069
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7071
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7070
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7073
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7074
        .trainerName = _("SYLVIA"),
#line 7075
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7076
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7077
F_TRAINER_FEMALE | 
#line 7078
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7079
        .doubleBattle = FALSE,
#line 7080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7082
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7084
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7083
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7086
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7087
        .trainerName = _("LEONARDO"),
#line 7088
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7089
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7091
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7092
        .doubleBattle = FALSE,
#line 7093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7095
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7096
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7099
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7100
        .trainerName = _("ATHENA"),
#line 7101
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7102
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7103
F_TRAINER_FEMALE | 
#line 7104
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7105
        .items = { ITEM_HYPER_POTION },
#line 7106
        .doubleBattle = FALSE,
#line 7107
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7109
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7111
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7110
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7113
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7115
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7114
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7118
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7119
        .trainerName = _("HARRISON"),
#line 7120
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7121
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7123
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7124
        .doubleBattle = FALSE,
#line 7125
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7127
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7129
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7128
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7131
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7132
        .trainerName = _("GRUNT"),
#line 7133
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7134
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7136
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7137
        .doubleBattle = FALSE,
#line 7138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7140
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7142
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7141
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7144
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7145
        .trainerName = _("CLARENCE"),
#line 7146
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7147
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7149
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7150
        .doubleBattle = FALSE,
#line 7151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7153
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7154
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7157
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7158
        .trainerName = _("TERRY"),
#line 7159
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7160
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7161
F_TRAINER_FEMALE | 
#line 7162
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7163
        .doubleBattle = FALSE,
#line 7164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7166
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7167
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7170
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7171
        .trainerName = _("NATE"),
#line 7172
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7173
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7175
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7176
        .doubleBattle = FALSE,
#line 7177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7179
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7181
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7180
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7183
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7184
        .trainerName = _("KATHLEEN"),
#line 7185
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7186
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7187
F_TRAINER_FEMALE | 
#line 7188
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7189
        .doubleBattle = FALSE,
#line 7190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7192
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7194
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7193
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7196
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7197
        .trainerName = _("CLIFFORD"),
#line 7198
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7199
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7201
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7202
        .doubleBattle = FALSE,
#line 7203
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7205
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7206
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7209
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7210
        .trainerName = _("NICHOLAS"),
#line 7211
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7212
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7214
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7215
        .doubleBattle = FALSE,
#line 7216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7218
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7219
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7222
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7223
        .trainerName = _("GRUNT"),
#line 7224
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7225
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7226
F_TRAINER_FEMALE | 
#line 7227
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7228
        .doubleBattle = FALSE,
#line 7229
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7231
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7233
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7232
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7235
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7237
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7236
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7239
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7240
        .trainerName = _("GRUNT"),
#line 7241
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7242
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7244
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7245
        .doubleBattle = FALSE,
#line 7246
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7248
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7250
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7249
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7252
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7253
        .trainerName = _("GRUNT"),
#line 7254
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7255
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7257
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7258
        .doubleBattle = FALSE,
#line 7259
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7261
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7263
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7262
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7265
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7266
        .trainerName = _("GRUNT"),
#line 7267
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7268
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7270
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7271
        .doubleBattle = FALSE,
#line 7272
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7274
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7276
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7275
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7278
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7279
        .trainerName = _("GRUNT"),
#line 7280
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7281
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7283
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7284
        .doubleBattle = FALSE,
#line 7285
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7287
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7288
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7291
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7292
        .trainerName = _("MACEY"),
#line 7293
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7294
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7295
F_TRAINER_FEMALE | 
#line 7296
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7297
        .doubleBattle = FALSE,
#line 7298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7300
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7301
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7304
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
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
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7313
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7313
            .heldItem = ITEM_RAZOR_FANG,
#line 7317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7314
            .ability = ABILITY_HYPER_CUTTER,
#line 7315
            .lvl = 16,
#line 7316
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7317
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7322
            .species = SPECIES_SLOWPOKE,
#line 7322
            .gender = TRAINER_MON_MALE,
#line 7322
            .heldItem = ITEM_SITRUS_BERRY,
#line 7326
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7323
            .ability = ABILITY_REGENERATOR,
#line 7324
            .lvl = 16,
#line 7325
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7326
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7331
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7335
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7332
            .ability = ABILITY_REGENERATOR,
#line 7333
            .lvl = 16,
#line 7334
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7335
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
            {
#line 7340
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7340
            .heldItem = ITEM_SITRUS_BERRY,
#line 7344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7341
            .ability = ABILITY_CLEAR_BODY,
#line 7342
            .lvl = 16,
#line 7343
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7344
                MOVE_TACKLE,
                MOVE_ZEN_HEADBUTT,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 7348
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7349
        .trainerName = _("SAMUEL"),
#line 7350
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7351
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7353
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7354
        .doubleBattle = FALSE,
#line 7355
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7357
            .species = SPECIES_SLOWPOKE,
#line 7357
            .gender = TRAINER_MON_MALE,
#line 7361
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7358
            .ability = ABILITY_REGENERATOR,
#line 7359
            .lvl = 16,
#line 7360
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7362
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7367
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7368
            .ability = ABILITY_REGENERATOR,
#line 7369
            .lvl = 16,
#line 7370
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7371
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7378
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7379
        .trainerName = _("PAXTON"),
#line 7380
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7381
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7383
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7384
        .doubleBattle = FALSE,
#line 7385
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7387
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7388
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7391
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7392
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7395
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7396
        .trainerName = _("ISABELLA"),
#line 7397
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7398
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7399
F_TRAINER_FEMALE | 
#line 7400
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7401
        .doubleBattle = FALSE,
#line 7402
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7404
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7405
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7408
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7409
        .trainerName = _("GRUNT"),
#line 7410
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7411
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7412
F_TRAINER_FEMALE | 
#line 7413
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7414
        .doubleBattle = FALSE,
#line 7415
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7417
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7418
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7421
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7422
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7425
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7426
        .trainerName = _("TABITHA"),
#line 7427
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7428
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7430
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7431
        .doubleBattle = FALSE,
#line 7432
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7434
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7434
            .heldItem = ITEM_SITRUS_BERRY,
#line 7437
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7435
            .ability = ABILITY_DROUGHT,
#line 7436
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7438
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7443
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .heldItem = ITEM_LUM_BERRY,
#line 7446
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7444
            .ability = ABILITY_LEVITATE,
#line 7445
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7447
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7451
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .heldItem = ITEM_SITRUS_BERRY,
#line 7454
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7452
            .ability = ABILITY_LEVITATE,
#line 7453
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7455
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7459
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7459
            .heldItem = ITEM_LUM_BERRY,
#line 7462
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7460
            .ability = ABILITY_OWN_TEMPO,
#line 7461
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7463
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7468
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7469
        .trainerName = _("JONATHAN"),
#line 7470
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7471
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7473
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7474
        .items = { ITEM_HYPER_POTION },
#line 7475
        .doubleBattle = FALSE,
#line 7476
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7478
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7479
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7482
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7483
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7486
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7487
        .trainerName = _("SAMUEL"),
#line 7488
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7489
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7491
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7492
        .doubleBattle = FALSE,
#line 7493
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7495
            .species = SPECIES_SLOWPOKE,
#line 7495
            .gender = TRAINER_MON_MALE,
#line 7499
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7496
            .ability = ABILITY_REGENERATOR,
#line 7497
            .lvl = 16,
#line 7498
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7500
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7505
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7506
            .ability = ABILITY_REGENERATOR,
#line 7507
            .lvl = 16,
#line 7508
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7509
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7516
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7517
        .trainerName = _("MAY"),
#line 7518
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7519
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7520
F_TRAINER_FEMALE | 
#line 7521
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7522
        .doubleBattle = FALSE,
#line 7523
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7525
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7527
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7526
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7529
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7531
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7530
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7533
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7534
        .trainerName = _("MAXIE"),
#line 7535
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7536
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7538
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7539
        .doubleBattle = FALSE,
#line 7540
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7542
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7542
            .heldItem = ITEM_IRON_BALL,
#line 7545
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7543
            .ability = ABILITY_HEAVY_METAL,
#line 7544
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7545
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7550
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7550
            .heldItem = ITEM_SHARP_BEAK,
#line 7553
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7551
            .ability = ABILITY_INNER_FOCUS,
#line 7552
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7553
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7558
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .heldItem = ITEM_MUSCLE_BAND,
#line 7561
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7559
            .ability = ABILITY_IMMUNITY,
#line 7560
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7561
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7566
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7566
            .heldItem = ITEM_EXPERT_BELT,
#line 7569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7567
            .ability = ABILITY_UNNERVE,
#line 7568
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7569
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7574
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7574
            .heldItem = ITEM_ROCKY_HELMET,
#line 7577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7575
            .ability = ABILITY_ROCK_HEAD,
#line 7576
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7577
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7582
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7583
        .trainerName = _("MAXIE"),
#line 7584
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7585
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7587
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7588
        .doubleBattle = FALSE,
#line 7589
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7591
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .heldItem = ITEM_MUSCLE_BAND,
#line 7594
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7592
            .ability = ABILITY_HEAVY_METAL,
#line 7593
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7595
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7600
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7600
            .heldItem = ITEM_LUM_BERRY,
#line 7603
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7601
            .ability = ABILITY_IMMUNITY,
#line 7602
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7604
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7609
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7609
            .heldItem = ITEM_LUM_BERRY,
#line 7612
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7610
            .ability = ABILITY_UNNERVE,
#line 7611
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7613
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7618
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7618
            .heldItem = ITEM_ROCKY_HELMET,
#line 7621
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7619
            .ability = ABILITY_ROCK_HEAD,
#line 7620
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7622
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7627
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7627
            .heldItem = ITEM_SHARP_BEAK,
#line 7630
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7628
            .ability = ABILITY_INNER_FOCUS,
#line 7629
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7631
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7636
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7637
        .trainerName = _("TIANA"),
#line 7638
        .trainerClass = TRAINER_CLASS_LASS,
#line 7639
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7640
F_TRAINER_FEMALE | 
#line 7641
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7642
        .doubleBattle = FALSE,
#line 7643
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7645
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7646
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7649
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7650
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7653
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7654
        .trainerName = _("HALEY"),
#line 7655
        .trainerClass = TRAINER_CLASS_LASS,
#line 7656
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7657
F_TRAINER_FEMALE | 
#line 7658
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7659
        .doubleBattle = FALSE,
#line 7660
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7662
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7663
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7666
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7667
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7670
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7671
        .trainerName = _("JANICE"),
#line 7672
        .trainerClass = TRAINER_CLASS_LASS,
#line 7673
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7674
F_TRAINER_FEMALE | 
#line 7675
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7676
        .doubleBattle = FALSE,
#line 7677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7679
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7680
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7683
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7684
        .trainerName = _("VIVI"),
#line 7685
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7686
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7687
F_TRAINER_FEMALE | 
#line 7688
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7689
        .doubleBattle = FALSE,
#line 7690
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7692
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7694
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7693
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7696
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7698
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7697
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7700
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7702
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7701
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7704
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7705
        .trainerName = _("SALLY"),
#line 7706
        .trainerClass = TRAINER_CLASS_LASS,
#line 7707
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7708
F_TRAINER_FEMALE | 
#line 7709
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7710
        .doubleBattle = FALSE,
#line 7711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7713
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7714
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7717
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7718
        .trainerName = _("ROBIN"),
#line 7719
        .trainerClass = TRAINER_CLASS_LASS,
#line 7720
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7721
F_TRAINER_FEMALE | 
#line 7722
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7723
        .doubleBattle = FALSE,
#line 7724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7726
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7727
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7730
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7731
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7734
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7735
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7738
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7739
        .trainerName = _("ANDREA"),
#line 7740
        .trainerClass = TRAINER_CLASS_LASS,
#line 7741
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7742
F_TRAINER_FEMALE | 
#line 7743
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7744
        .doubleBattle = FALSE,
#line 7745
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7747
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7749
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7748
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7751
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7752
        .trainerName = _("CRISSY"),
#line 7753
        .trainerClass = TRAINER_CLASS_LASS,
#line 7754
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7755
F_TRAINER_FEMALE | 
#line 7756
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7757
        .doubleBattle = FALSE,
#line 7758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7760
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7762
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7761
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7764
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7766
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7765
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7768
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7769
        .trainerName = _("RICK"),
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
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7778
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7781
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7782
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7785
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7786
        .trainerName = _("LYLE"),
#line 7787
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7788
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7790
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7791
        .doubleBattle = FALSE,
#line 7792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7794
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7795
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7798
            .species = SPECIES_EXEGGCUTE,
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
            .species = SPECIES_DUSKULL,
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
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7807
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7810
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7811
        .trainerName = _("JOSIE"),
#line 7812
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7813
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7815
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7816
        .doubleBattle = FALSE,
#line 7817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7819
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7821
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7820
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7823
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7825
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7824
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7827
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7828
        .trainerName = _("DOUG"),
#line 7829
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7830
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7832
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7833
        .doubleBattle = FALSE,
#line 7834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7836
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7837
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7840
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7841
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7844
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7845
        .trainerName = _("GREG"),
#line 7846
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7847
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7849
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7850
        .doubleBattle = FALSE,
#line 7851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7853
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7854
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7857
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7858
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7861
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7862
        .trainerName = _("KENT"),
#line 7863
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7864
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7866
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7867
        .doubleBattle = FALSE,
#line 7868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7870
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7871
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7874
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7875
        .trainerName = _("JAMES"),
#line 7876
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7877
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7879
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7880
        .doubleBattle = FALSE,
#line 7881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7883
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7884
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7887
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7888
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7891
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7892
        .trainerName = _("BRICE"),
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
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7901
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7904
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7905
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7908
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7909
        .trainerName = _("TRENT"),
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
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7918
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7921
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7922
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7925
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7926
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7929
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7930
        .trainerName = _("LENNY"),
#line 7931
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7932
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7934
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7935
        .doubleBattle = FALSE,
#line 7936
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7938
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7940
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7939
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7942
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7943
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7946
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7947
        .trainerName = _("LUCAS"),
#line 7948
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7949
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7951
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7952
        .doubleBattle = FALSE,
#line 7953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7955
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7956
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7959
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7960
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7963
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7964
        .trainerName = _("ALAN"),
#line 7965
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7966
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7968
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7969
        .doubleBattle = FALSE,
#line 7970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7972
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7974
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7973
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7976
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7977
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7980
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7981
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7984
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7985
        .trainerName = _("CLARK"),
#line 7986
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7987
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7989
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7990
        .doubleBattle = FALSE,
#line 7991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7993
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7994
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7997
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7998
        .trainerName = _("ERIC"),
#line 7999
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8000
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8002
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8003
        .doubleBattle = FALSE,
#line 8004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8006
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8007
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8010
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8011
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8014
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 8015
        .trainerName = _("MIKE"),
#line 8016
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8017
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 8019
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8020
        .doubleBattle = FALSE,
#line 8021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8023
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8024
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8027
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8028
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8031
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8032
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8035
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8036
        .trainerName = _("DEZ & LUKE"),
#line 8037
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8038
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8040
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8041
        .doubleBattle = TRUE,
#line 8042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8044
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8045
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8048
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8049
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8052
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8053
        .trainerName = _("LEA & JED"),
#line 8054
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8055
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8057
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8058
        .doubleBattle = TRUE,
#line 8059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8061
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8062
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8065
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8066
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8069
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8070
        .trainerName = _("KIRA & DAN"),
#line 8071
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8072
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8074
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8075
        .doubleBattle = TRUE,
#line 8076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8078
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8079
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8082
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8083
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8086
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8087
        .trainerName = _("JOHANNA"),
#line 8088
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8089
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8090
F_TRAINER_FEMALE | 
#line 8091
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8092
        .doubleBattle = FALSE,
#line 8093
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8095
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8097
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8096
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8099
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8100
        .trainerName = _("GERALD"),
#line 8101
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8102
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8104
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8105
        .items = { ITEM_HYPER_POTION },
#line 8106
        .doubleBattle = FALSE,
#line 8107
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8109
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8111
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8110
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8114
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8115
        .trainerName = _("VIVIAN"),
#line 8116
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8117
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8118
F_TRAINER_FEMALE | 
#line 8119
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8120
        .doubleBattle = FALSE,
#line 8121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8123
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8125
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8124
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8127
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8129
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8128
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8131
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8132
        .trainerName = _("DANIELLE"),
#line 8133
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8134
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8135
F_TRAINER_FEMALE | 
#line 8136
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8137
        .doubleBattle = FALSE,
#line 8138
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8140
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8142
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8141
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8144
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8145
        .trainerName = _("HIDEO"),
#line 8146
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8147
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8149
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8150
        .doubleBattle = FALSE,
#line 8151
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8153
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8154
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8157
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8158
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8161
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8162
        .trainerName = _("KEIGO"),
#line 8163
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8164
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8166
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8167
        .doubleBattle = FALSE,
#line 8168
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8170
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8171
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8174
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8175
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8178
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8179
        .trainerName = _("RILEY"),
#line 8180
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8181
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8183
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8184
        .doubleBattle = FALSE,
#line 8185
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8187
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8188
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8191
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8192
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8195
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8196
        .trainerName = _("FLINT"),
#line 8197
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8198
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8200
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8201
        .doubleBattle = FALSE,
#line 8202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8204
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8206
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8205
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8208
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8210
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8209
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8212
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8213
        .trainerName = _("ASHLEY"),
#line 8214
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8215
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8216
F_TRAINER_FEMALE | 
#line 8217
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8218
        .doubleBattle = FALSE,
#line 8219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8221
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8223
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8222
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8225
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8226
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8229
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8231
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8230
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8233
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8234
        .trainerName = _("CHAD"),
#line 8235
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8236
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8238
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8239
        .doubleBattle = TRUE,
#line 8240
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8242
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8243
            .ability = ABILITY_STURDY,
#line 8244
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8245
                MOVE_ROCK_SLIDE,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 8248
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8249
            .ability = ABILITY_SAND_STREAM,
#line 8250
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8251
                MOVE_PSYCHIC,
                MOVE_BULLDOZE,
                MOVE_ROCK_SLIDE,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 8256
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8257
            .ability = ABILITY_LIGHTNING_ROD,
#line 8258
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8259
                MOVE_STOMPING_TANTRUM,
                MOVE_RETALIATE,
                MOVE_MUD_SLAP,
            },
            },
            {
#line 8263
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8266
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8264
            .ability = ABILITY_SAND_VEIL,
#line 8265
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8266
                MOVE_BULLDOZE,
                MOVE_ASTONISH,
                MOVE_THROAT_CHOP,
            },
            },
        },
    },
#line 8270
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8271
        .trainerName = _("SAMUEL"),
#line 8272
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8273
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8276
        .doubleBattle = TRUE,
#line 8277
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8279
            .species = SPECIES_SLOWKING,
#line 8279
            .gender = TRAINER_MON_MALE,
#line 8279
            .heldItem = ITEM_LIFE_ORB,
#line 8283
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8280
            .ability = ABILITY_REGENERATOR,
#line 8281
            .lvl = 54,
#line 8282
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8284
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8289
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8289
            .heldItem = ITEM_ROCKY_HELMET,
#line 8293
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8290
            .ability = ABILITY_REGENERATOR,
#line 8291
            .lvl = 54,
#line 8292
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8293
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8298
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8298
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8299
            .ability = ABILITY_INFILTRATOR,
#line 8300
            .lvl = 54,
#line 8301
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8302
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8307
            .species = SPECIES_GLISCOR,
#line 8307
            .gender = TRAINER_MON_FEMALE,
#line 8307
            .heldItem = ITEM_TOXIC_ORB,
#line 8311
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8308
            .ability = ABILITY_POISON_HEAL,
#line 8309
            .lvl = 54,
#line 8310
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8312
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8317
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8317
            .heldItem = ITEM_ASSAULT_VEST,
#line 8321
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8318
            .ability = ABILITY_CLEAR_BODY,
#line 8319
            .lvl = 54,
#line 8320
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8322
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8327
            .species = SPECIES_HONCHKROW,
#line 8327
            .gender = TRAINER_MON_MALE,
#line 8327
            .heldItem = ITEM_FOCUS_SASH,
#line 8331
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8328
            .ability = ABILITY_MOXIE,
#line 8329
            .lvl = 54,
#line 8330
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8332
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8338
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8339
        .trainerName = _("SAMUEL"),
#line 8340
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8341
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8343
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8344
        .doubleBattle = FALSE,
#line 8345
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8347
            .species = SPECIES_SLOWKING,
#line 8347
            .gender = TRAINER_MON_MALE,
#line 8347
            .heldItem = ITEM_LIFE_ORB,
#line 8351
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8348
            .ability = ABILITY_REGENERATOR,
#line 8349
            .lvl = 54,
#line 8350
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8352
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8357
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8357
            .heldItem = ITEM_ROCKY_HELMET,
#line 8361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8358
            .ability = ABILITY_REGENERATOR,
#line 8359
            .lvl = 54,
#line 8360
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8361
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8366
            .species = SPECIES_GLISCOR,
#line 8366
            .gender = TRAINER_MON_FEMALE,
#line 8366
            .heldItem = ITEM_TOXIC_ORB,
#line 8370
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8367
            .ability = ABILITY_POISON_HEAL,
#line 8368
            .lvl = 54,
#line 8369
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8371
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8376
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8376
            .heldItem = ITEM_ASSAULT_VEST,
#line 8380
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8377
            .ability = ABILITY_CLEAR_BODY,
#line 8378
            .lvl = 54,
#line 8379
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8381
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8386
            .species = SPECIES_HONCHKROW,
#line 8386
            .gender = TRAINER_MON_MALE,
#line 8386
            .heldItem = ITEM_FOCUS_SASH,
#line 8390
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8387
            .ability = ABILITY_MOXIE,
#line 8388
            .lvl = 54,
#line 8389
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8391
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8397
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8398
        .trainerName = _("SAMUEL"),
#line 8399
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8400
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8402
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8403
        .doubleBattle = FALSE,
#line 8404
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8406
            .species = SPECIES_SLOWKING,
#line 8406
            .gender = TRAINER_MON_MALE,
#line 8406
            .heldItem = ITEM_LIFE_ORB,
#line 8410
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8407
            .ability = ABILITY_REGENERATOR,
#line 8408
            .lvl = 54,
#line 8409
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8411
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8416
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8416
            .heldItem = ITEM_ROCKY_HELMET,
#line 8420
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8417
            .ability = ABILITY_REGENERATOR,
#line 8418
            .lvl = 54,
#line 8419
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8420
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8425
            .species = SPECIES_GLISCOR,
#line 8425
            .gender = TRAINER_MON_FEMALE,
#line 8425
            .heldItem = ITEM_TOXIC_ORB,
#line 8429
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8426
            .ability = ABILITY_POISON_HEAL,
#line 8427
            .lvl = 54,
#line 8428
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8430
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8435
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8435
            .heldItem = ITEM_ASSAULT_VEST,
#line 8439
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8436
            .ability = ABILITY_CLEAR_BODY,
#line 8437
            .lvl = 54,
#line 8438
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8440
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8445
            .species = SPECIES_HONCHKROW,
#line 8445
            .gender = TRAINER_MON_MALE,
#line 8445
            .heldItem = ITEM_FOCUS_SASH,
#line 8449
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8446
            .ability = ABILITY_MOXIE,
#line 8447
            .lvl = 54,
#line 8448
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8450
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8456
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8457
        .trainerName = _("MAY"),
#line 8458
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8459
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8460
F_TRAINER_FEMALE | 
#line 8461
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8462
        .doubleBattle = FALSE,
#line 8463
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8465
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8467
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8466
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8469
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8471
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8470
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8473
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8475
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8474
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8477
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8479
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8478
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8481
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8482
        .trainerName = _("MAY"),
#line 8483
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8484
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8485
F_TRAINER_FEMALE | 
#line 8486
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8487
        .doubleBattle = FALSE,
#line 8488
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8490
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8492
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8491
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8494
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8496
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8495
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8498
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8500
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8499
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8502
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8504
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8503
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8506
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8507
        .trainerName = _("MAY"),
#line 8508
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8509
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8510
F_TRAINER_FEMALE | 
#line 8511
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8512
        .doubleBattle = FALSE,
#line 8513
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8515
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8517
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8516
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8519
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8521
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8520
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8523
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8525
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8524
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8527
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8529
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8528
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8531
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8532
        .trainerName = _("JONAH"),
#line 8533
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8534
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8536
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8537
        .doubleBattle = FALSE,
#line 8538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8540
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8541
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8544
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8545
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8548
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8549
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8552
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8553
        .trainerName = _("HENRY"),
#line 8554
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8555
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8557
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8558
        .doubleBattle = FALSE,
#line 8559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8561
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8562
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8565
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8566
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8569
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8570
        .trainerName = _("ROGER"),
#line 8571
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8572
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8574
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8575
        .doubleBattle = FALSE,
#line 8576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8578
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8579
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8582
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8584
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8583
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8586
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8587
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8590
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8591
        .trainerName = _("ALEXA"),
#line 8592
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8593
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8594
F_TRAINER_FEMALE | 
#line 8595
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8596
        .items = { ITEM_FULL_RESTORE },
#line 8597
        .doubleBattle = FALSE,
#line 8598
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8600
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8602
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8601
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8604
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8606
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8605
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8608
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8609
        .trainerName = _("RUBEN"),
#line 8610
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8611
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8613
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8614
        .items = { ITEM_HYPER_POTION },
#line 8615
        .doubleBattle = FALSE,
#line 8616
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8618
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8619
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8622
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8624
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8623
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8626
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8627
        .trainerName = _("KOJI"),
#line 8628
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8629
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8631
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8632
        .doubleBattle = FALSE,
#line 8633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8635
            .species = SPECIES_DUSTOX,
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
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8640
        .trainerName = _("WAYNE"),
#line 8641
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8642
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8644
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8645
        .doubleBattle = FALSE,
#line 8646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8648
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8649
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8652
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8653
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8656
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8657
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8660
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8661
        .trainerName = _("AIDAN"),
#line 8662
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8663
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8665
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8666
        .doubleBattle = FALSE,
#line 8667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8669
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8670
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8673
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8674
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8677
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8678
        .trainerName = _("REED"),
#line 8679
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8680
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8682
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8683
        .doubleBattle = FALSE,
#line 8684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8686
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8687
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8690
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8691
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8694
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8695
        .trainerName = _("TISHA"),
#line 8696
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8697
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8698
F_TRAINER_FEMALE | 
#line 8699
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8700
        .doubleBattle = FALSE,
#line 8701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8703
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8704
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8707
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8708
        .trainerName = _("TORI & TIA"),
#line 8709
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8710
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8712
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8713
        .doubleBattle = TRUE,
#line 8714
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8716
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8717
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8720
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8721
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8724
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8725
        .trainerName = _("KIM & IRIS"),
#line 8726
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8727
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8729
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8730
        .doubleBattle = TRUE,
#line 8731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8733
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8734
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8737
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8738
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8741
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8742
        .trainerName = _("TYRA & IVY"),
#line 8743
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8744
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8746
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8747
        .doubleBattle = TRUE,
#line 8748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8750
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8751
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8754
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8755
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8759
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8760
        .trainerName = _("MEL & PAUL"),
#line 8761
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8762
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8764
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8765
        .doubleBattle = TRUE,
#line 8766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8768
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8769
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8772
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8773
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8776
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8777
        .trainerName = _("JOHN & JAY"),
#line 8778
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8779
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8781
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8782
        .doubleBattle = TRUE,
#line 8783
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8785
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8787
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8786
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8789
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8791
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8790
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8793
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8794
        .trainerName = _("RELI & IAN"),
#line 8795
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8796
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8798
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8799
        .doubleBattle = TRUE,
#line 8800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8802
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8803
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8806
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8807
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8810
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8811
        .trainerName = _("LILA & ROY"),
#line 8812
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8813
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8815
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8816
        .doubleBattle = TRUE,
#line 8817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8819
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8820
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8823
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8824
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8827
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8828
        .trainerName = _("LISA & RAY"),
#line 8829
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8830
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8832
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8833
        .doubleBattle = TRUE,
#line 8834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8836
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8837
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8840
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8841
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8844
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8845
        .trainerName = _("CHRIS"),
#line 8846
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8847
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8849
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8850
        .doubleBattle = FALSE,
#line 8851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8853
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8854
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8857
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8858
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8861
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8862
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8865
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8866
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8869
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8870
        .trainerName = _("DAWSON"),
#line 8871
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8872
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8874
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8875
        .doubleBattle = FALSE,
#line 8876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8878
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8878
            .heldItem = ITEM_NUGGET,
#line 8880
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8879
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8882
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8883
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8886
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8887
        .trainerName = _("SARAH"),
#line 8888
        .trainerClass = TRAINER_CLASS_LADY,
#line 8889
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8890
F_TRAINER_FEMALE | 
#line 8891
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8892
        .items = { ITEM_FULL_RESTORE },
#line 8893
        .doubleBattle = FALSE,
#line 8894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8896
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8897
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8900
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8900
            .heldItem = ITEM_NUGGET,
#line 8902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8901
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8904
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8905
        .trainerName = _("DARIAN"),
#line 8906
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8907
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8909
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8910
        .doubleBattle = FALSE,
#line 8911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8913
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8914
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8917
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8918
        .trainerName = _("HAILEY"),
#line 8919
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8920
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8921
F_TRAINER_FEMALE | 
#line 8922
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8923
        .doubleBattle = FALSE,
#line 8924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8926
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8927
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8930
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8931
        .trainerName = _("CHANDLER"),
#line 8932
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8933
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8935
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8936
        .doubleBattle = FALSE,
#line 8937
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8939
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8940
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8943
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8944
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8947
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8948
        .trainerName = _("KALEB"),
#line 8949
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8950
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8952
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8953
        .doubleBattle = FALSE,
#line 8954
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8956
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .heldItem = ITEM_ORAN_BERRY,
#line 8958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8957
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8960
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8960
            .heldItem = ITEM_ORAN_BERRY,
#line 8962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8961
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8964
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8965
        .trainerName = _("JOSEPH"),
#line 8966
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8967
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8969
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8970
        .doubleBattle = FALSE,
#line 8971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8973
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8974
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8977
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8978
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8981
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8982
        .trainerName = _("ALYSSA"),
#line 8983
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8984
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8985
F_TRAINER_FEMALE | 
#line 8986
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8987
        .doubleBattle = FALSE,
#line 8988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8990
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8991
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8994
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8995
        .trainerName = _("MARCOS"),
#line 8996
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8997
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8999
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9000
        .doubleBattle = FALSE,
#line 9001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9003
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9005
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9004
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9007
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 9008
        .trainerName = _("RHETT"),
#line 9009
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 9010
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 9012
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9013
        .doubleBattle = FALSE,
#line 9014
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9016
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9018
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9017
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9020
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 9021
        .trainerName = _("TYRON"),
#line 9022
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9023
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9025
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9026
        .doubleBattle = FALSE,
#line 9027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9029
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9030
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9033
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 9034
        .trainerName = _("CELINA"),
#line 9035
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9036
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9037
F_TRAINER_FEMALE | 
#line 9038
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9039
        .doubleBattle = FALSE,
#line 9040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9042
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9043
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9046
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 9047
        .trainerName = _("BIANCA"),
#line 9048
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9049
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9050
F_TRAINER_FEMALE | 
#line 9051
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9052
        .doubleBattle = FALSE,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9055
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9056
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9059
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9060
        .trainerName = _("HAYDEN"),
#line 9061
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9062
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9064
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9065
        .doubleBattle = FALSE,
#line 9066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9068
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9069
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9072
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9073
        .trainerName = _("SOPHIE"),
#line 9074
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9075
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9076
F_TRAINER_FEMALE | 
#line 9077
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9078
        .doubleBattle = FALSE,
#line 9079
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9081
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9082
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9085
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9086
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9089
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9090
        .trainerName = _("COBY"),
#line 9091
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9092
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9094
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9095
        .doubleBattle = FALSE,
#line 9096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9098
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9099
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9102
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9103
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9106
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9107
        .trainerName = _("LAWRENCE"),
#line 9108
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9109
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9111
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9112
        .doubleBattle = FALSE,
#line 9113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9115
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9116
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9119
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9120
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9123
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9124
        .trainerName = _("WYATT"),
#line 9125
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9126
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9128
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9129
        .doubleBattle = FALSE,
#line 9130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9132
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9134
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9133
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9136
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9137
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9140
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9141
        .trainerName = _("ANGELINA"),
#line 9142
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9143
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9144
F_TRAINER_FEMALE | 
#line 9145
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9146
        .doubleBattle = FALSE,
#line 9147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9149
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9150
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9153
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9154
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9157
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9158
        .trainerName = _("KAI"),
#line 9159
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9160
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9162
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9163
        .doubleBattle = FALSE,
#line 9164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9166
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9168
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9167
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9170
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9171
        .trainerName = _("CHARLOTTE"),
#line 9172
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9173
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9174
F_TRAINER_FEMALE | 
#line 9175
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9176
        .doubleBattle = FALSE,
#line 9177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9179
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9181
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9180
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9183
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9184
        .trainerName = _("DEANDRE"),
#line 9185
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9186
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9188
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9189
        .doubleBattle = FALSE,
#line 9190
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9192
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9194
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9193
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9196
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9197
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9200
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9201
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9204
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9205
        .trainerName = _("GRUNT"),
#line 9206
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9207
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9209
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9210
        .doubleBattle = FALSE,
#line 9211
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9213
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9214
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9217
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9218
        .trainerName = _("GRUNT"),
#line 9219
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9220
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9222
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9223
        .doubleBattle = FALSE,
#line 9224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9226
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9227
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9230
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9231
        .trainerName = _("GRUNT"),
#line 9232
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9233
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9235
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9236
        .doubleBattle = FALSE,
#line 9237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9239
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9240
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9243
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9244
        .trainerName = _("GRUNT"),
#line 9245
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9246
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9248
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9249
        .doubleBattle = FALSE,
#line 9250
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9252
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9254
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9253
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9256
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9257
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9260
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9269
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9270
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9273
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9274
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9277
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
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
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9287
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9290
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
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
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9300
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9303
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9304
        .trainerName = _("GRUNT"),
#line 9305
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9306
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9314
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9313
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9316
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9317
        .trainerName = _("GRUNT"),
#line 9318
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9319
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9327
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9326
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9329
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9330
        .trainerName = _("GRUNT"),
#line 9331
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9332
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9340
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9339
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9342
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9343
        .trainerName = _("GRUNT"),
#line 9344
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9345
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9347
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9348
        .doubleBattle = FALSE,
#line 9349
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9351
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9352
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9355
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9356
        .trainerName = _("GRUNT"),
#line 9357
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9358
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9360
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9361
        .doubleBattle = FALSE,
#line 9362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9364
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9365
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9368
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9369
        .trainerName = _("GRUNT"),
#line 9370
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9371
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9373
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9374
        .doubleBattle = FALSE,
#line 9375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9377
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9378
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9381
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9382
        .trainerName = _("GRUNT"),
#line 9383
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9384
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9385
F_TRAINER_FEMALE | 
#line 9386
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9387
        .doubleBattle = FALSE,
#line 9388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9390
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9391
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9394
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9395
        .trainerName = _("GRUNT"),
#line 9396
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9397
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9398
F_TRAINER_FEMALE | 
#line 9399
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9400
        .doubleBattle = FALSE,
#line 9401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9403
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9404
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9407
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9408
        .trainerName = _("GRUNT"),
#line 9409
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9410
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9411
F_TRAINER_FEMALE | 
#line 9412
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9413
        .doubleBattle = FALSE,
#line 9414
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9416
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9417
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9420
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9421
        .trainerName = _("TABITHA"),
#line 9422
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9423
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9425
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9426
        .doubleBattle = FALSE,
#line 9427
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9429
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9429
            .heldItem = ITEM_SITRUS_BERRY,
#line 9432
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9430
            .ability = ABILITY_DROUGHT,
#line 9431
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9433
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9438
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .heldItem = ITEM_POISON_BARB,
#line 9441
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9439
            .ability = ABILITY_LEVITATE,
#line 9440
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9442
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9447
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9447
            .heldItem = ITEM_LIFE_ORB,
#line 9450
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9448
            .ability = ABILITY_LEVITATE,
#line 9449
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9451
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9456
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9456
            .heldItem = ITEM_FOCUS_SASH,
#line 9459
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9457
            .ability = ABILITY_OWN_TEMPO,
#line 9458
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9460
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9465
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9466
        .trainerName = _("DARCY"),
#line 9467
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9468
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9469
F_TRAINER_FEMALE | 
#line 9470
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9471
        .items = { ITEM_HYPER_POTION },
#line 9472
        .doubleBattle = FALSE,
#line 9473
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9475
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9476
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9479
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9480
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9483
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9484
        .trainerName = _("MAXIE"),
#line 9485
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9486
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9488
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9489
        .doubleBattle = FALSE,
#line 9490
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9492
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9492
            .heldItem = ITEM_ROCKY_HELMET,
#line 9495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9493
            .ability = ABILITY_ROCK_HEAD,
#line 9494
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9495
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9500
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9500
            .heldItem = ITEM_AIR_BALLOON,
#line 9503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9501
            .ability = ABILITY_HEAVY_METAL,
#line 9502
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9503
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9508
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9508
            .heldItem = ITEM_SHARP_BEAK,
#line 9511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9509
            .ability = ABILITY_INNER_FOCUS,
#line 9510
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9511
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9516
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9517
        .trainerName = _("PETE"),
#line 9518
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9519
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9521
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9522
        .doubleBattle = FALSE,
#line 9523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9525
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9526
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9529
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9530
        .trainerName = _("ISABELLE"),
#line 9531
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9532
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9533
F_TRAINER_FEMALE | 
#line 9534
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9535
        .doubleBattle = FALSE,
#line 9536
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9538
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9540
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9539
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9542
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9543
        .trainerName = _("ANDRES"),
#line 9544
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9545
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9547
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9548
        .doubleBattle = FALSE,
#line 9549
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9551
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9553
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9552
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9555
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9556
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9559
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9560
        .trainerName = _("JOSUE"),
#line 9561
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9562
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9564
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9565
        .doubleBattle = FALSE,
#line 9566
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9568
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9570
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9569
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9572
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9574
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9573
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9576
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9577
        .trainerName = _("CAMRON"),
#line 9578
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9579
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9581
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9582
        .doubleBattle = FALSE,
#line 9583
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9585
            .species = SPECIES_PURUGLY,
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
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9590
        .trainerName = _("CORY"),
#line 9591
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9592
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9594
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9595
        .doubleBattle = FALSE,
#line 9596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9598
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9599
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9602
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9603
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9606
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9607
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9610
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9611
        .trainerName = _("CAROLINA"),
#line 9612
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9613
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9614
F_TRAINER_FEMALE | 
#line 9615
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9616
        .items = { ITEM_HYPER_POTION },
#line 9617
        .doubleBattle = FALSE,
#line 9618
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9620
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9622
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9621
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9624
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9626
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9625
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9628
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9630
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9629
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9632
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9633
        .trainerName = _("ELIJAH"),
#line 9634
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9635
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9637
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9638
        .doubleBattle = FALSE,
#line 9639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9641
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9642
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9645
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9646
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9649
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9650
        .trainerName = _("CELIA"),
#line 9651
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9652
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9653
F_TRAINER_FEMALE | 
#line 9654
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9655
        .doubleBattle = FALSE,
#line 9656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9658
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9659
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9662
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9663
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9666
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9667
        .trainerName = _("BRYAN"),
#line 9668
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9669
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9671
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9672
        .doubleBattle = FALSE,
#line 9673
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9675
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9676
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9679
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9680
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9683
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9684
        .trainerName = _("BRANDEN"),
#line 9685
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9686
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9688
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9689
        .doubleBattle = FALSE,
#line 9690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9692
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9693
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9696
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9697
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9700
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9701
        .trainerName = _("BRYANT"),
#line 9702
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9703
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9705
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9706
        .doubleBattle = FALSE,
#line 9707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9709
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9710
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9713
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9714
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9717
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9718
        .trainerName = _("SHAYLA"),
#line 9719
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9720
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9721
F_TRAINER_FEMALE | 
#line 9722
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9723
        .doubleBattle = FALSE,
#line 9724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9726
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9727
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9730
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9731
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9734
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9735
        .trainerName = _("KYRA"),
#line 9736
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9737
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9738
F_TRAINER_FEMALE | 
#line 9739
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9740
        .doubleBattle = FALSE,
#line 9741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9743
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9744
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9747
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9748
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9751
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9752
        .trainerName = _("JAIDEN"),
#line 9753
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9754
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9756
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9757
        .doubleBattle = FALSE,
#line 9758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9760
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9761
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9764
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9766
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9765
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9768
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9769
        .trainerName = _("ALIX"),
#line 9770
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9771
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9772
F_TRAINER_FEMALE | 
#line 9773
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9774
        .doubleBattle = FALSE,
#line 9775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9777
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9778
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9781
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9783
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9782
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9785
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9786
        .trainerName = _("HELENE"),
#line 9787
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9788
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9789
F_TRAINER_FEMALE | 
#line 9790
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9791
        .doubleBattle = FALSE,
#line 9792
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9794
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9795
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9798
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9799
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9802
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9803
        .trainerName = _("MARLENE"),
#line 9804
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9805
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9806
F_TRAINER_FEMALE | 
#line 9807
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9808
        .doubleBattle = FALSE,
#line 9809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9811
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9812
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9815
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9816
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9819
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9820
        .trainerName = _("DEVAN"),
#line 9821
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9822
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9824
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9825
        .doubleBattle = FALSE,
#line 9826
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9828
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9829
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9832
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9833
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9837
        .trainerName = _("JOHNSON"),
#line 9838
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9839
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9841
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9842
        .doubleBattle = FALSE,
#line 9843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9845
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9846
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9849
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9850
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9853
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9854
        .trainerName = _("MELINA"),
#line 9855
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9856
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9857
F_TRAINER_FEMALE | 
#line 9858
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9859
        .doubleBattle = FALSE,
#line 9860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9862
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9863
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9866
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9867
        .trainerName = _("MELISSA"),
#line 9868
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9869
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9870
F_TRAINER_FEMALE | 
#line 9871
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9872
        .doubleBattle = FALSE,
#line 9873
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9875
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9876
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9879
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9880
        .trainerName = _("BRANDI"),
#line 9881
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9882
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9883
F_TRAINER_FEMALE | 
#line 9884
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9885
        .doubleBattle = FALSE,
#line 9886
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9888
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9889
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9892
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9893
        .trainerName = _("AISHA"),
#line 9894
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9895
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9896
F_TRAINER_FEMALE | 
#line 9897
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9898
        .doubleBattle = FALSE,
#line 9899
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9901
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9902
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9905
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9906
        .trainerName = _("MAKAYLA"),
#line 9907
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9908
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9909
F_TRAINER_FEMALE | 
#line 9910
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9911
        .items = { ITEM_HYPER_POTION },
#line 9912
        .doubleBattle = FALSE,
#line 9913
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9915
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9916
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9919
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9920
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9923
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9924
        .trainerName = _("FABIAN"),
#line 9925
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9926
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9928
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9929
        .doubleBattle = FALSE,
#line 9930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9932
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9933
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9936
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9937
        .trainerName = _("DAYTON"),
#line 9938
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9939
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9941
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9942
        .doubleBattle = FALSE,
#line 9943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9945
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9946
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9949
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9950
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9953
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9954
        .trainerName = _("RACHEL"),
#line 9955
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9956
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9957
F_TRAINER_FEMALE | 
#line 9958
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9959
        .doubleBattle = FALSE,
#line 9960
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9962
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9964
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9963
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9966
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9967
        .trainerName = _("LEONEL"),
#line 9968
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9969
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9971
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9972
        .items = { ITEM_HYPER_POTION },
#line 9973
        .doubleBattle = FALSE,
#line 9974
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9976
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9978
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9977
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9980
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9981
        .trainerName = _("CALLIE"),
#line 9982
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9983
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9984
F_TRAINER_FEMALE | 
#line 9985
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9986
        .doubleBattle = FALSE,
#line 9987
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9989
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9991
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9990
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9993
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9994
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9997
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9998
        .trainerName = _("CALE"),
#line 9999
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10000
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10002
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10003
        .doubleBattle = FALSE,
#line 10004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10006
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10007
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10010
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10011
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10014
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 10015
        .trainerName = _("MYLES"),
#line 10016
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10017
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 10019
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10020
        .doubleBattle = FALSE,
#line 10021
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10023
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10025
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10024
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10027
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10029
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10028
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10031
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10033
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10032
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10035
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 10036
        .trainerName = _("PAT"),
#line 10037
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 10038
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 10039
F_TRAINER_FEMALE | 
#line 10040
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10041
        .doubleBattle = FALSE,
#line 10042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10044
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10046
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10045
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10048
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10050
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10049
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10052
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10054
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10053
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10057
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10058
        .trainerName = _("CRISTIN"),
#line 10059
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10060
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10061
F_TRAINER_FEMALE | 
#line 10062
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10063
        .items = { ITEM_HYPER_POTION },
#line 10064
        .doubleBattle = FALSE,
#line 10065
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10067
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10069
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10068
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10071
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10073
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10072
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10075
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10076
        .trainerName = _("MAY"),
#line 10077
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10078
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10079
F_TRAINER_FEMALE | 
#line 10080
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10081
        .doubleBattle = FALSE,
#line 10082
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10084
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10086
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10085
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10088
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10090
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10089
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10092
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10093
        .trainerName = _("MAY"),
#line 10094
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10095
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10096
F_TRAINER_FEMALE | 
#line 10097
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10098
        .doubleBattle = FALSE,
#line 10099
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10101
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10103
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10102
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10105
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10106
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10109
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
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
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10118
            .heldItem = ITEM_EVIOLITE,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
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
            .species = SPECIES_SHELGON,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
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
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10143
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10145
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10154
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10155
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10157
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10158
        .trainerName = _("GRUNT"),
#line 10159
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10160
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10162
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10163
        .doubleBattle = FALSE,
#line 10164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10166
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10168
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10167
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10169
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10170
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10172
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10173
        .trainerName = _("GRUNT"),
#line 10174
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10175
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10177
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10178
        .doubleBattle = FALSE,
#line 10179
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10181
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10182
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10185
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10194
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10196
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10195
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10197
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10198
        .trainerName = _("GRUNT"),
#line 10199
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10200
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10202
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10203
        .doubleBattle = FALSE,
#line 10204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10206
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10208
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10207
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10209
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 10210
        .trainerName = _("GRUNT"),
#line 10211
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10212
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10214
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10215
        .doubleBattle = FALSE,
#line 10216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10218
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10219
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10221
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10222
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10224
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10225
        .trainerName = _("GRUNT"),
#line 10226
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10227
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10229
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10230
        .doubleBattle = FALSE,
#line 10231
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10233
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10234
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10236
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10237
        .trainerName = _("GRUNT"),
#line 10238
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10239
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10241
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10242
        .doubleBattle = FALSE,
#line 10243
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10245
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10246
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10248
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10249
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10251
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10252
        .trainerName = _("GRUNT"),
#line 10253
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10254
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10256
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10257
        .doubleBattle = FALSE,
#line 10258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10260
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10262
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10261
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10263
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10264
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10266
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10267
        .trainerName = _("TATE&LIZA"),
#line 10268
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10269
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10271
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10272
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10273
        .doubleBattle = TRUE,
#line 10274
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10276
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10277
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10279
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10284
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10285
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10287
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10292
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10293
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10295
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10300
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10300
            .heldItem = ITEM_CHESTO_BERRY,
#line 10302
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10301
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10303
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10308
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10308
            .heldItem = ITEM_CHESTO_BERRY,
#line 10310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10309
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10311
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10316
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10316
            .heldItem = ITEM_SITRUS_BERRY,
#line 10318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10317
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10319
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10324
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10325
        .trainerName = _("ANGELO"),
#line 10326
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10327
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10329
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10330
        .doubleBattle = FALSE,
#line 10331
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10333
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10335
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10334
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10337
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10339
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10338
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10341
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10342
        .trainerName = _("DARIUS"),
#line 10343
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10344
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10346
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10347
        .doubleBattle = FALSE,
#line 10348
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10350
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10352
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10351
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10354
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10355
        .trainerName = _("STEVEN"),
#line 10356
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10357
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10359
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10360
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10361
        .doubleBattle = FALSE,
#line 10362
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10364
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10366
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10365
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10367
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10372
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10374
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10373
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10375
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10380
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10382
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10381
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10383
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10388
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10389
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10391
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10396
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10397
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10399
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10404
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10404
            .heldItem = ITEM_SITRUS_BERRY,
#line 10406
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10405
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10407
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10412
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10413
        .trainerName = _("ANABEL"),
#line 10414
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10415
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10416
F_TRAINER_FEMALE | 
#line 10417
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10418
        .doubleBattle = FALSE,
#line 10419
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10421
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10422
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10425
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10426
        .trainerName = _("TUCKER"),
#line 10427
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10428
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10430
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10431
        .doubleBattle = FALSE,
#line 10432
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10434
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10435
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10438
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10439
        .trainerName = _("SPENSER"),
#line 10440
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10441
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10443
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10444
        .doubleBattle = FALSE,
#line 10445
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10447
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10448
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10451
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10452
        .trainerName = _("GRETA"),
#line 10453
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10454
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10455
F_TRAINER_FEMALE | 
#line 10456
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10457
        .doubleBattle = FALSE,
#line 10458
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10460
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10462
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10461
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10464
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10465
        .trainerName = _("GRUNT"),
#line 10466
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10467
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10469
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10470
        .doubleBattle = FALSE,
#line 10471
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10473
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10475
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10474
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10477
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10478
        .trainerName = _("GHOSTESS"),
#line 10479
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10480
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10481
F_TRAINER_FEMALE | 
#line 10482
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10483
        .doubleBattle = FALSE,
#line 10484
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10486
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10486
            .heldItem = ITEM_TWISTED_SPOON,
#line 10489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10487
            .ability = ABILITY_THICK_FAT,
#line 10488
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10489
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10494
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10494
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10495
            .ability = ABILITY_WONDER_SKIN,
#line 10496
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10497
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10502
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10502
            .heldItem = ITEM_METRONOME,
#line 10505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10503
            .ability = ABILITY_ROCK_HEAD,
#line 10504
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10505
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10510
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10510
            .heldItem = ITEM_ASSAULT_VEST,
#line 10513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10511
            .ability = ABILITY_CURSED_BODY,
#line 10512
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10513
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10518
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10519
        .trainerName = _("JORDAN"),
#line 10520
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10521
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10523
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10524
        .doubleBattle = FALSE,
#line 10525
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10527
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10528
            .ability = ABILITY_CHLOROPHYLL,
#line 10529
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10530
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10535
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10535
            .heldItem = ITEM_EVIOLITE,
#line 10538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10536
            .ability = ABILITY_PRESSURE,
#line 10537
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10538
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10543
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10543
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10546
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10544
            .ability = ABILITY_LIQUID_OOZE,
#line 10545
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10546
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10551
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10551
            .heldItem = ITEM_QUICK_CLAW,
#line 10554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10552
            .ability = ABILITY_OBLIVIOUS,
#line 10553
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10554
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10559
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10559
            .heldItem = ITEM_SHARP_BEAK,
#line 10562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10560
            .ability = ABILITY_INNER_FOCUS,
#line 10561
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10562
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10567
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10568
        .trainerName = _("JORDAN"),
#line 10569
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10570
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10572
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10573
        .doubleBattle = FALSE,
#line 10574
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10576
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10576
            .heldItem = ITEM_WIDE_LENS,
#line 10579
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10577
            .ability = ABILITY_CHLOROPHYLL,
#line 10578
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10579
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10584
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10584
            .heldItem = ITEM_LIFE_ORB,
#line 10587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10585
            .ability = ABILITY_PRESSURE,
#line 10586
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10587
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10592
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10592
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10593
            .ability = ABILITY_LIQUID_OOZE,
#line 10594
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10595
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10600
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10600
            .heldItem = ITEM_CHOICE_SPECS,
#line 10603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10601
            .ability = ABILITY_OBLIVIOUS,
#line 10602
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10603
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10608
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10608
            .heldItem = ITEM_SHARP_BEAK,
#line 10611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10609
            .ability = ABILITY_INNER_FOCUS,
#line 10610
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10611
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10616
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10616
            .heldItem = ITEM_ASSAULT_VEST,
#line 10619
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10617
            .ability = ABILITY_AIR_LOCK,
#line 10618
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10619
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10624
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10625
        .trainerName = _("GHOSTESS"),
#line 10626
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10627
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10628
F_TRAINER_FEMALE | 
#line 10629
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10630
        .doubleBattle = FALSE,
#line 10631
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10633
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .heldItem = ITEM_EXPERT_BELT,
#line 10636
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10634
            .ability = ABILITY_THICK_FAT,
#line 10635
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10636
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10641
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10641
            .heldItem = ITEM_MUSCLE_BAND,
#line 10644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10642
            .ability = ABILITY_WONDER_SKIN,
#line 10643
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10644
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10649
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10649
            .heldItem = ITEM_WIDE_LENS,
#line 10652
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10650
            .ability = ABILITY_INTIMIDATE,
#line 10651
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10652
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10657
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .heldItem = ITEM_ASSAULT_VEST,
#line 10660
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10658
            .ability = ABILITY_CURSED_BODY,
#line 10659
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10660
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10665
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
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
            .species = SPECIES_GOLBAT,
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
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
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
            .species = SPECIES_DUSCLOPS,
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
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10690
        .trainerName = _("GRUNT"),
#line 10691
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10692
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10694
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10695
        .doubleBattle = FALSE,
#line 10696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10698
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10700
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10699
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10701
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10702
        .trainerName = _("GRUNT"),
#line 10703
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10704
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10706
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10707
        .doubleBattle = FALSE,
#line 10708
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10710
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10712
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10711
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10713
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10714
        .trainerName = _("CORY"),
#line 10715
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10716
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10718
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10719
        .doubleBattle = FALSE,
#line 10720
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10722
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10724
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10723
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10726
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10728
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10727
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10730
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10732
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10731
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10734
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10735
        .trainerName = _("CORY"),
#line 10736
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10737
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10740
        .doubleBattle = FALSE,
#line 10741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10743
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10745
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10744
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10747
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10749
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10748
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10751
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10753
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10752
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10755
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10756
        .trainerName = _("MARIELA"),
#line 10757
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10758
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10759
F_TRAINER_FEMALE | 
#line 10760
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10761
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10763
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10764
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10767
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10768
        .trainerName = _("ALVARO"),
#line 10769
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10770
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10772
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10773
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10775
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10776
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10779
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10780
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10783
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10784
        .trainerName = _("EVERETT"),
#line 10785
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10786
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10788
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10789
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10791
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10792
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10795
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10796
        .trainerName = _("RED"),
#line 10797
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10798
        .trainerPic = TRAINER_PIC_RED,
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
            .species = SPECIES_CHARMANDER,
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
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10808
        .trainerName = _("LEAF"),
#line 10809
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10810
        .trainerPic = TRAINER_PIC_LEAF,
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
            .species = SPECIES_BULBASAUR,
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
#line 10819
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10820
        .trainerName = _("SAMUEL"),
#line 10821
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10822
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10824
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10825
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10827
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10829
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10828
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10831
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10832
        .trainerName = _("MAY"),
#line 10833
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10834
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10835
F_TRAINER_FEMALE | 
#line 10836
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10837
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10839
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10840
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
