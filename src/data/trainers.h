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
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1906
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1905
            .lvl = 26,
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
            .heldItem = ITEM_FOCUS_SASH,
#line 3094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3090
            .ability = ABILITY_CHLOROPHYLL,
#line 3091
            .lvl = 75,
#line 3093
            .nature = NATURE_NAUGHTY,
#line 3092
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3094
                MOVE_STRUGGLE_BUG,
                MOVE_LEAF_STORM,
                MOVE_ELECTROWEB,
                MOVE_SUNNY_DAY,
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
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3177
            .heldItem = ITEM_ASSAULT_VEST,
#line 3181
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3178
            .ability = ABILITY_SAND_STREAM,
#line 3179
            .lvl = 75,
#line 3180
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3181
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_FIRE_PUNCH,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3186
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3186
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3190
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3187
            .ability = ABILITY_PRANKSTER,
#line 3188
            .lvl = 75,
#line 3189
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3190
                MOVE_ENCORE,
                MOVE_FOUL_PLAY,
                MOVE_WILL_O_WISP,
                MOVE_TAUNT,
            },
            },
            {
#line 3195
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3195
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3196
            .ability = ABILITY_PICKPOCKET,
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
            .species = SPECIES_JIRACHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3222
            .heldItem = ITEM_LEFTOVERS,
#line 3226
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3223
            .ability = ABILITY_SERENE_GRACE,
#line 3224
            .lvl = 75,
#line 3225
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3226
                MOVE_PSYCHIC,
                MOVE_IRON_HEAD,
                MOVE_WISH,
                MOVE_BODY_SLAM,
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
        .partySize = 3,
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
            .lvl = 15,
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
            .lvl = 15,
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
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3260
            .heldItem = ITEM_SALAC_BERRY,
#line 3264
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3261
            .ability = ABILITY_UNNERVE,
#line 3262
            .lvl = 16,
#line 3263
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3265
                MOVE_ROCK_SLIDE,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3270
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
    {
#line 3271
        .trainerName = _("GARRETT"),
#line 3272
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3273
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3275
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3276
        .doubleBattle = FALSE,
#line 3277
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3279
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3283
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3280
            .ability = ABILITY_MARVEL_SCALE,
#line 3281
            .lvl = 21,
#line 3282
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3284
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3289
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3293
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3290
            .ability = ABILITY_TORRENT,
#line 3291
            .lvl = 22,
#line 3292
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3294
                MOVE_BUBBLEBEAM,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3299
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3303
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3300
            .ability = ABILITY_SKILL_LINK,
#line 3301
            .lvl = 22,
#line 3302
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3304
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3309
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3309
            .heldItem = ITEM_WIDE_LENS,
#line 3313
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3310
            .ability = ABILITY_TORRENT,
#line 3311
            .lvl = 22,
#line 3312
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3314
                MOVE_SAND_TOMB,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3319
    [DIFFICULTY_NORMAL][TRAINER_SAM] =
    {
#line 3320
        .trainerName = _("SAM"),
#line 3321
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3322
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3324
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3325
        .doubleBattle = FALSE,
#line 3326
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3328
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3328
            .heldItem = ITEM_METAL_COAT,
#line 3332
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3329
            .ability = ABILITY_MAGNET_PULL,
#line 3330
            .lvl = 32,
#line 3331
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3333
                MOVE_MAGNET_RISE,
                MOVE_THUNDER_SHOCK,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3338
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3338
            .heldItem = ITEM_SILK_SCARF,
#line 3342
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3339
            .ability = ABILITY_DOWNLOAD,
#line 3340
            .lvl = 32,
#line 3341
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3343
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3348
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3348
            .heldItem = ITEM_SITRUS_BERRY,
#line 3352
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3349
            .ability = ABILITY_VITAL_SPIRIT,
#line 3351
            .lvl = 32,
#line 3350
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3353
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_SCREECH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3358
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3358
            .heldItem = ITEM_SITRUS_BERRY,
#line 3362
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3359
            .ability = ABILITY_INTIMIDATE,
#line 3361
            .lvl = 32,
#line 3360
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3362
                MOVE_BITE,
                MOVE_VOLT_SWITCH,
                MOVE_THUNDER_FANG,
                MOVE_ICE_FANG,
            },
            },
            {
#line 3367
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3367
            .heldItem = ITEM_MAGNET,
#line 3371
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3368
            .ability = ABILITY_STATIC,
#line 3369
            .lvl = 32,
#line 3370
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3372
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3377
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 3378
        .trainerName = _("JOSE"),
#line 3379
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3380
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3382
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3383
        .doubleBattle = FALSE,
#line 3384
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3386
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3386
            .heldItem = ITEM_FAIRY_FEATHER,
#line 3390
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3387
            .ability = ABILITY_NATURAL_CURE,
#line 3388
            .lvl = 39,
#line 3389
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3391
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3396
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3396
            .heldItem = ITEM_CHARCOAL,
#line 3400
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3397
            .ability = ABILITY_BLAZE,
#line 3398
            .lvl = 39,
#line 3399
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3401
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3406
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3406
            .heldItem = ITEM_ASSAULT_VEST,
#line 3410
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3407
            .ability = ABILITY_LEVITATE,
#line 3408
            .lvl = 39,
#line 3409
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3411
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3416
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3416
            .heldItem = ITEM_ROCKY_HELMET,
#line 3420
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3417
            .ability = ABILITY_MARVEL_SCALE,
#line 3418
            .lvl = 39,
#line 3419
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3421
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3426
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3426
            .heldItem = ITEM_DRAGON_FANG,
#line 3430
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3427
            .ability = ABILITY_SNIPER,
#line 3428
            .lvl = 39,
#line 3429
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3431
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
                MOVE_YAWN,
            },
            },
            {
#line 3436
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3436
            .heldItem = ITEM_LIFE_ORB,
#line 3440
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3437
            .ability = ABILITY_ROUGH_SKIN,
#line 3438
            .lvl = 39,
#line 3439
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3441
                MOVE_DRAGON_CLAW,
                MOVE_BULLDOZE,
                MOVE_METAL_CLAW,
                MOVE_BITE,
            },
            },
        },
    },
#line 3446
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
    {
#line 3447
        .trainerName = _("GRAYSON"),
#line 3448
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3449
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3451
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3452
        .doubleBattle = FALSE,
#line 3453
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3455
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3455
            .heldItem = ITEM_MUSCLE_BAND,
#line 3459
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3456
            .ability = ABILITY_IRON_FIST,
#line 3457
            .lvl = 43,
#line 3458
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3459
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3465
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3465
            .heldItem = ITEM_BLACK_BELT,
#line 3469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3466
            .ability = ABILITY_GUTS,
#line 3467
            .lvl = 43,
#line 3468
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3469
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3474
            .species = SPECIES_LOPUNNY,
#line 3474
            .gender = TRAINER_MON_FEMALE,
#line 3474
            .heldItem = ITEM_ROCKY_HELMET,
#line 3478
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3475
            .ability = ABILITY_CUTE_CHARM,
#line 3476
            .lvl = 43,
#line 3477
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3478
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3483
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3483
            .heldItem = ITEM_FOCUS_BAND,
#line 3487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3484
            .ability = ABILITY_MOXIE,
#line 3485
            .lvl = 43,
#line 3486
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3487
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3493
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3493
            .heldItem = ITEM_EXPERT_BELT,
#line 3497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3494
            .ability = ABILITY_INNER_FOCUS,
#line 3495
            .lvl = 43,
#line 3496
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3497
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3502
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3502
            .heldItem = ITEM_FOCUS_BAND,
#line 3506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3503
            .ability = ABILITY_POISON_TOUCH,
#line 3504
            .lvl = 43,
#line 3505
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3506
                MOVE_GUNK_SHOT,
                MOVE_SUCKER_PUNCH,
                MOVE_DRAIN_PUNCH,
                MOVE_X_SCISSOR,
            },
            },
        },
    },
#line 3511
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 3512
        .trainerName = _("MATTHEW"),
#line 3513
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3514
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3516
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3517
        .doubleBattle = FALSE,
#line 3518
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3520
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3520
            .heldItem = ITEM_AIR_BALLOON,
#line 3524
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3521
            .ability = ABILITY_STURDY,
#line 3522
            .lvl = 51,
#line 3523
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3524
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3529
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3529
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3530
            .ability = ABILITY_WEAK_ARMOR,
#line 3531
            .lvl = 51,
#line 3532
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3533
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3538
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3538
            .heldItem = ITEM_ASSAULT_VEST,
#line 3542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3539
            .ability = ABILITY_CLEAR_BODY,
#line 3540
            .lvl = 51,
#line 3541
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3542
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3547
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3547
            .heldItem = ITEM_CHOICE_SPECS,
#line 3551
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3548
            .ability = ABILITY_COMPETITIVE,
#line 3549
            .lvl = 51,
#line 3550
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3551
                MOVE_BRINE,
                MOVE_FLASH_CANNON,
                MOVE_ICE_BEAM,
                MOVE_ROOST,
            },
            },
            {
#line 3556
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3556
            .heldItem = ITEM_CHOICE_BAND,
#line 3560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3557
            .ability = ABILITY_TECHNICIAN,
#line 3558
            .lvl = 51,
#line 3559
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3560
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3565
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3565
            .heldItem = ITEM_ROCKY_HELMET,
#line 3569
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3566
            .ability = ABILITY_IRON_BARBS,
#line 3567
            .lvl = 51,
#line 3568
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3569
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3574
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 3575
        .trainerName = _("MARK"),
#line 3576
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3577
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3579
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3580
        .doubleBattle = FALSE,
#line 3581
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3583
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3583
            .heldItem = ITEM_ROCKY_HELMET,
#line 3587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3584
            .ability = ABILITY_FLASH_FIRE,
#line 3585
            .lvl = 61,
#line 3586
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3587
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3592
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3592
            .heldItem = ITEM_CHOICE_SPECS,
#line 3596
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3593
            .ability = ABILITY_PIXILATE,
#line 3594
            .lvl = 61,
#line 3595
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3596
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3601
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3601
            .heldItem = ITEM_CHOICE_BAND,
#line 3604
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3602
            .ability = ABILITY_HUGE_POWER,
#line 3603
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3604
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3609
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3609
            .heldItem = ITEM_CHOICE_SCARF,
#line 3613
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3610
            .ability = ABILITY_SERENE_GRACE,
#line 3611
            .lvl = 61,
#line 3612
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3613
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3618
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3618
            .heldItem = ITEM_LEFTOVERS,
#line 3622
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3619
            .ability = ABILITY_MAGIC_GUARD,
#line 3620
            .lvl = 61,
#line 3621
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3622
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3627
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3627
            .heldItem = ITEM_OCCA_BERRY,
#line 3630
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3628
            .ability = ABILITY_INTIMIDATE,
#line 3629
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3630
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3635
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 3636
        .trainerName = _("XANDER"),
#line 3637
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3638
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3640
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3641
        .doubleBattle = TRUE,
#line 3642
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3644
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3644
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3645
            .ability = ABILITY_CURSED_BODY,
#line 3646
            .lvl = 67,
#line 3647
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3648
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3653
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3653
            .heldItem = ITEM_SITRUS_BERRY,
#line 3657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3654
            .ability = ABILITY_MUMMY,
#line 3655
            .lvl = 67,
#line 3656
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3657
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
            {
#line 3662
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3662
            .heldItem = ITEM_CHOICE_SPECS,
#line 3666
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3663
            .ability = ABILITY_FLASH_FIRE,
#line 3664
            .lvl = 67,
#line 3665
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3666
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3671
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .heldItem = ITEM_SITRUS_BERRY,
#line 3675
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3672
            .ability = ABILITY_LEVITATE,
#line 3673
            .lvl = 67,
#line 3674
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3675
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3680
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3680
            .heldItem = ITEM_CHOICE_BAND,
#line 3684
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3681
            .ability = ABILITY_NO_GUARD,
#line 3682
            .lvl = 67,
#line 3683
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3684
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3689
            .species = SPECIES_MEWTWO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .heldItem = ITEM_LEFTOVERS,
#line 3693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3690
            .ability = ABILITY_PRESSURE,
#line 3691
            .lvl = 67,
#line 3692
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_PSYSHOCK,
                MOVE_AURA_SPHERE,
                MOVE_TRICK_ROOM,
                MOVE_NASTY_PLOT,
            },
            },
        },
    },
#line 3698
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3699
        .trainerName = _("JERRY"),
#line 3700
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3701
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3703
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3704
        .doubleBattle = FALSE,
#line 3705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3707
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3709
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3708
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3711
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3712
        .trainerName = _("TED"),
#line 3713
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3714
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3716
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3717
        .doubleBattle = FALSE,
#line 3718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3720
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3722
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3721
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3724
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3725
        .trainerName = _("PAUL"),
#line 3726
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3727
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3729
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3730
        .doubleBattle = FALSE,
#line 3731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3733
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3735
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3734
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3737
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3739
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3738
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3741
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3742
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3745
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3746
        .trainerName = _("KAREN"),
#line 3747
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3748
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3749
F_TRAINER_FEMALE | 
#line 3750
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3751
        .doubleBattle = FALSE,
#line 3752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3754
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3755
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3758
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3759
        .trainerName = _("GEORGIA"),
#line 3760
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3761
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3762
F_TRAINER_FEMALE | 
#line 3763
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3764
        .doubleBattle = FALSE,
#line 3765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3767
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3769
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3768
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3771
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3773
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3772
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3775
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3776
        .trainerName = _("KATE & JOY"),
#line 3777
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3778
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3780
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3781
        .doubleBattle = TRUE,
#line 3782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3784
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3785
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3788
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3789
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3793
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3794
        .trainerName = _("ANNA & MEG"),
#line 3795
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3796
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3798
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3799
        .doubleBattle = TRUE,
#line 3800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3802
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3803
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3806
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3807
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3810
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3811
        .trainerName = _("VICTOR"),
#line 3812
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3813
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3815
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3816
        .doubleBattle = FALSE,
#line 3817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3819
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3819
            .heldItem = ITEM_ORAN_BERRY,
#line 3821
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3820
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3823
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3823
            .heldItem = ITEM_ORAN_BERRY,
#line 3825
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3824
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3827
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3828
        .trainerName = _("MIGUEL"),
#line 3829
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3830
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3832
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3833
        .doubleBattle = FALSE,
#line 3834
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3836
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3836
            .heldItem = ITEM_ORAN_BERRY,
#line 3838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3837
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3840
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3841
        .trainerName = _("COLTON"),
#line 3842
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3843
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3845
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3846
        .doubleBattle = FALSE,
#line 3847
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3849
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3849
            .heldItem = ITEM_ORAN_BERRY,
#line 3851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3850
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3852
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3857
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3857
            .heldItem = ITEM_ORAN_BERRY,
#line 3859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3858
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3860
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3865
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3865
            .heldItem = ITEM_ORAN_BERRY,
#line 3867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3866
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3868
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3873
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3873
            .heldItem = ITEM_ORAN_BERRY,
#line 3875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3874
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3876
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3881
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3881
            .heldItem = ITEM_ORAN_BERRY,
#line 3883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3882
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3884
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3889
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3889
            .heldItem = ITEM_ORAN_BERRY,
#line 3891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3890
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3892
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
        },
    },
#line 3897
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3898
        .trainerName = _("VICTORIA"),
#line 3899
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3900
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3901
F_TRAINER_FEMALE | 
#line 3902
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3903
        .doubleBattle = FALSE,
#line 3904
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3906
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .heldItem = ITEM_ORAN_BERRY,
#line 3908
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3907
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3910
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3911
        .trainerName = _("VANESSA"),
#line 3912
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3913
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3914
F_TRAINER_FEMALE | 
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
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3919
            .heldItem = ITEM_ORAN_BERRY,
#line 3921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3920
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3923
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3924
        .trainerName = _("BETHANY"),
#line 3925
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3926
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3927
F_TRAINER_FEMALE | 
#line 3928
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3929
        .doubleBattle = FALSE,
#line 3930
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3932
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3932
            .heldItem = ITEM_ORAN_BERRY,
#line 3934
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3933
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3936
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3936
            .heldItem = ITEM_ORAN_BERRY,
#line 3938
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3937
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3940
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .heldItem = ITEM_ORAN_BERRY,
#line 3942
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3941
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3944
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3945
        .trainerName = _("ISABEL"),
#line 3946
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3947
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3948
F_TRAINER_FEMALE | 
#line 3949
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3950
        .doubleBattle = FALSE,
#line 3951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3953
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3953
            .heldItem = ITEM_ORAN_BERRY,
#line 3955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3954
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3957
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3957
            .heldItem = ITEM_ORAN_BERRY,
#line 3959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3958
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3961
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3962
        .trainerName = _("TIMOTHY"),
#line 3963
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3964
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3966
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3967
        .doubleBattle = FALSE,
#line 3968
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3970
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3971
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3974
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3975
        .trainerName = _("VICKY"),
#line 3976
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3977
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3978
F_TRAINER_FEMALE | 
#line 3979
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3980
        .doubleBattle = FALSE,
#line 3981
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3983
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3985
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3984
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3987
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 3988
        .trainerName = _("SHELBY"),
#line 3989
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3990
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3991
F_TRAINER_FEMALE | 
#line 3992
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3993
        .doubleBattle = FALSE,
#line 3994
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3996
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3998
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3997
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4000
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4001
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4004
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 4005
        .trainerName = _("CALVIN"),
#line 4006
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4007
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4009
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4010
        .doubleBattle = FALSE,
#line 4011
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4013
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4014
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4017
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4018
        .trainerName = _("BILLY"),
#line 4019
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4020
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4022
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4023
        .doubleBattle = FALSE,
#line 4024
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4026
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4028
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4027
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4030
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4031
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4034
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4035
        .trainerName = _("JOSH"),
#line 4036
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4037
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4039
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4040
        .doubleBattle = FALSE,
#line 4041
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4043
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4045
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4044
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4046
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4048
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4049
        .trainerName = _("TOMMY"),
#line 4050
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4051
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4053
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4054
        .doubleBattle = FALSE,
#line 4055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4057
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4059
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4058
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4061
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4063
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4062
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4065
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4066
        .trainerName = _("JOEY"),
#line 4067
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4068
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4070
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4071
        .doubleBattle = FALSE,
#line 4072
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4074
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4075
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4078
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4080
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4079
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4082
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4083
        .trainerName = _("BEN"),
#line 4084
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4085
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4087
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4088
        .doubleBattle = FALSE,
#line 4089
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4091
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4093
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4092
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4096
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4098
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4097
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4101
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4102
        .trainerName = _("QUINCY"),
#line 4103
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4104
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4106
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4107
        .items = { ITEM_FULL_RESTORE },
#line 4108
        .doubleBattle = FALSE,
#line 4109
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4111
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4113
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4112
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4115
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4117
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4116
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4119
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4120
        .trainerName = _("KATELYNN"),
#line 4121
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4122
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4123
F_TRAINER_FEMALE | 
#line 4124
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4125
        .items = { ITEM_FULL_RESTORE },
#line 4126
        .doubleBattle = FALSE,
#line 4127
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4129
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4131
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4130
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4132
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4137
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4139
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4138
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4140
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4145
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4146
        .trainerName = _("JAYLEN"),
#line 4147
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4148
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4150
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4151
        .doubleBattle = FALSE,
#line 4152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4154
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4155
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4158
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4159
        .trainerName = _("DILLON"),
#line 4160
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4161
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4163
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4164
        .doubleBattle = FALSE,
#line 4165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4167
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4168
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4171
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4172
        .trainerName = _("EDDIE"),
#line 4173
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4174
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4176
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4177
        .doubleBattle = FALSE,
#line 4178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4180
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4181
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4184
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4185
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4188
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4189
        .trainerName = _("ALLEN"),
#line 4190
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4191
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4193
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4194
        .doubleBattle = FALSE,
#line 4195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4197
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4198
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4201
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4202
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4205
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4206
        .trainerName = _("TIMMY"),
#line 4207
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4208
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4210
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4211
        .doubleBattle = FALSE,
#line 4212
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4214
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4215
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4218
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4219
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4222
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4223
        .trainerName = _("FATTY"),
#line 4224
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4225
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4227
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4228
        .doubleBattle = FALSE,
#line 4229
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4230
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4232
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4232
            .heldItem = ITEM_LIFE_ORB,
#line 4236
            .ev = TRAINER_PARTY_EVS(252, 252, 0, 0, 0, 4),
#line 4237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4233
            .ability = ABILITY_THICK_FAT,
#line 4234
            .lvl = 78,
#line 4235
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4237
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 4242
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4242
            .heldItem = ITEM_CHOICE_BAND,
#line 4246
            .ev = TRAINER_PARTY_EVS(0, 252, 0, 252, 0, 4),
#line 4247
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4243
            .ability = ABILITY_INTIMIDATE,
#line 4244
            .lvl = 78,
#line 4245
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4247
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4252
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4252
            .heldItem = ITEM_LEFTOVERS,
#line 4256
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4253
            .ability = ABILITY_CHLOROPHYLL,
#line 4254
            .lvl = 78,
#line 4255
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4257
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_TOXIC,
            },
            },
            {
#line 4262
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .heldItem = ITEM_FOCUS_SASH,
#line 4266
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4263
            .ability = ABILITY_MAGIC_GUARD,
#line 4264
            .lvl = 78,
#line 4265
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4267
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4272
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4272
            .heldItem = ITEM_WIDE_LENS,
#line 4276
            .ev = TRAINER_PARTY_EVS(248, 0, 0, 0, 252, 8),
#line 4277
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4273
            .ability = ABILITY_STATIC,
#line 4274
            .lvl = 78,
#line 4275
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4277
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDER,
            },
            },
            {
#line 4282
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4282
            .heldItem = ITEM_EVIOLITE,
#line 4286
            .ev = TRAINER_PARTY_EVS(0, 0, 0, 252, 252, 4),
#line 4287
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4283
            .ability = ABILITY_SWIFT_SWIM,
#line 4284
            .lvl = 78,
#line 4285
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4287
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4292
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4293
        .trainerName = _("ANDREW"),
#line 4294
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4295
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4297
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4298
        .doubleBattle = FALSE,
#line 4299
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4301
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4303
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4302
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4305
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4307
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4306
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4309
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4311
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4310
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4313
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4314
        .trainerName = _("IVAN"),
#line 4315
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4316
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4318
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4319
        .doubleBattle = FALSE,
#line 4320
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4322
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4324
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4323
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4326
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4328
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4327
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4330
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4332
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4331
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4334
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4335
        .trainerName = _("CLAUDE"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4343
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4345
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4344
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4347
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4348
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4351
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4353
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4352
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4355
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4356
        .trainerName = _("ELLIOT"),
#line 4357
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4358
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4360
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4361
        .doubleBattle = FALSE,
#line 4362
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4364
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4365
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4368
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4370
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4369
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4372
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4373
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4376
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4377
        .trainerName = _("NED"),
#line 4378
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4379
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4381
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4382
        .doubleBattle = FALSE,
#line 4383
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4385
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4387
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4386
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4389
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4390
        .trainerName = _("DALE"),
#line 4391
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4392
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4394
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4395
        .doubleBattle = FALSE,
#line 4396
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4398
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4399
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4402
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4403
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4406
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4408
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4407
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4410
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4411
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4414
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4415
        .trainerName = _("NOLAN"),
#line 4416
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4417
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4419
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4420
        .doubleBattle = FALSE,
#line 4421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4423
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4425
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4424
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4427
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4428
        .trainerName = _("BARNY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4436
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4437
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4440
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4441
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4444
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4445
        .trainerName = _("WADE"),
#line 4446
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4447
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4449
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4450
        .doubleBattle = FALSE,
#line 4451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4453
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4455
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4454
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4456
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4457
        .trainerName = _("ABIGAL"),
#line 4458
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4459
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4460
F_TRAINER_FEMALE | 
#line 4461
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4462
        .doubleBattle = FALSE,
#line 4463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4465
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4466
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4468
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4469
        .trainerName = _("CARTER"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4477
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4479
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4478
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4481
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4483
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4482
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4485
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4486
        .trainerName = _("RONALD"),
#line 4487
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4488
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4490
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4491
        .doubleBattle = FALSE,
#line 4492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4494
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4495
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4499
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4500
        .trainerName = _("JACOB"),
#line 4501
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4502
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4504
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4505
        .doubleBattle = FALSE,
#line 4506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4508
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4510
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4509
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4512
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4514
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4513
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4516
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4518
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4517
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4520
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4521
        .trainerName = _("ANTHONY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4529
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4530
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4533
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4534
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4537
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4538
        .trainerName = _("BENJAMIN"),
#line 4539
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4540
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4542
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4543
        .doubleBattle = FALSE,
#line 4544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4546
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4547
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4550
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4551
        .trainerName = _("JASMINE"),
#line 4552
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4553
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4554
F_TRAINER_FEMALE | 
#line 4555
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4556
        .doubleBattle = FALSE,
#line 4557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4559
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4561
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4560
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4563
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4565
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4564
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4567
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4568
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4571
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4572
        .trainerName = _("DYLAN"),
#line 4573
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4574
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4576
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4577
        .doubleBattle = FALSE,
#line 4578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4580
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4581
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4584
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4585
        .trainerName = _("MARIA"),
#line 4586
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4587
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4588
F_TRAINER_FEMALE | 
#line 4589
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4590
        .doubleBattle = FALSE,
#line 4591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4593
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4594
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4597
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4598
        .trainerName = _("CAMDEN"),
#line 4599
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4600
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4602
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4603
        .doubleBattle = FALSE,
#line 4604
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4606
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4608
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4607
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4610
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4611
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4614
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4615
        .trainerName = _("DEMETRIUS"),
#line 4616
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4617
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4619
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4620
        .doubleBattle = FALSE,
#line 4621
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4623
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4625
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4624
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4627
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4628
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4631
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4632
        .trainerName = _("ISAIAH"),
#line 4633
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4634
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4636
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4637
        .doubleBattle = FALSE,
#line 4638
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4640
            .species = SPECIES_RAICHU,
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
#line 4644
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4645
        .trainerName = _("PABLO"),
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
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4654
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4657
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4659
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4658
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4661
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4662
        .trainerName = _("CHASE"),
#line 4663
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4664
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4666
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4667
        .doubleBattle = FALSE,
#line 4668
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4670
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4671
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4674
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4676
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4675
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4678
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4679
        .trainerName = _("ISOBEL"),
#line 4680
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4681
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4682
F_TRAINER_FEMALE | 
#line 4683
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4684
        .doubleBattle = FALSE,
#line 4685
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4687
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4688
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4691
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4692
        .trainerName = _("DONNY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4700
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4701
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4704
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4706
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4705
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4708
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4709
        .trainerName = _("TALIA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4717
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4718
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4721
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4722
        .trainerName = _("KATELYN"),
#line 4723
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4724
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4725
F_TRAINER_FEMALE | 
#line 4726
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4727
        .doubleBattle = FALSE,
#line 4728
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4730
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4731
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4734
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4735
        .trainerName = _("ALLISON"),
#line 4736
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4737
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4738
F_TRAINER_FEMALE | 
#line 4739
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4740
        .doubleBattle = FALSE,
#line 4741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4743
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4744
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4747
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4749
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4748
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4751
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4752
        .trainerName = _("NICOLAS"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4760
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4762
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4761
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4764
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4766
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4765
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4768
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4769
        .trainerName = _("AARON"),
#line 4770
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4771
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4773
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4774
        .doubleBattle = FALSE,
#line 4775
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4777
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4779
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4778
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4781
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4782
        .trainerName = _("PERRY"),
#line 4783
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4784
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4786
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4787
        .doubleBattle = FALSE,
#line 4788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4790
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4791
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4794
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4795
        .trainerName = _("HUGH"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4803
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4804
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4807
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4808
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4811
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4812
        .trainerName = _("PHIL"),
#line 4813
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4814
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4816
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4817
        .doubleBattle = FALSE,
#line 4818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4820
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4821
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4824
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4825
        .trainerName = _("JARED"),
#line 4826
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4827
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4829
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4830
        .doubleBattle = FALSE,
#line 4831
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4833
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4835
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4834
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4837
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4839
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4838
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4841
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4843
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4842
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4845
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4846
        .trainerName = _("HUMBERTO"),
#line 4847
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4848
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4850
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4851
        .doubleBattle = FALSE,
#line 4852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4854
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4856
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4855
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4858
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4859
        .trainerName = _("PRESLEY"),
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
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4868
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4871
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4872
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4875
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4876
        .trainerName = _("EDWARDO"),
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
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4886
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4885
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4888
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4890
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4889
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4892
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4893
        .trainerName = _("COLIN"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4901
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4902
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4905
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4906
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4909
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4910
        .trainerName = _("ROBERT"),
#line 4911
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4912
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4914
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4915
        .doubleBattle = FALSE,
#line 4916
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4918
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4919
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4922
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4923
        .trainerName = _("BENNY"),
#line 4924
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4925
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4927
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4928
        .doubleBattle = FALSE,
#line 4929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4931
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4932
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4935
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4936
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4939
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4940
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4943
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4944
        .trainerName = _("CHESTER"),
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
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4953
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4956
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4957
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4960
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4961
        .trainerName = _("ALEX"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4969
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4971
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4970
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4973
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4975
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4974
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4977
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4978
        .trainerName = _("BECK"),
#line 4979
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4980
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4982
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4983
        .doubleBattle = FALSE,
#line 4984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4986
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4987
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4990
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4991
        .trainerName = _("YASU"),
#line 4992
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4993
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4995
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4996
        .doubleBattle = FALSE,
#line 4997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4999
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5000
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5003
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 5004
        .trainerName = _("TAKASHI"),
#line 5005
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5006
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5008
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5009
        .doubleBattle = FALSE,
#line 5010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5012
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5013
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5016
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5017
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5020
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5021
        .trainerName = _("DIANNE"),
#line 5022
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5023
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5024
F_TRAINER_FEMALE | 
#line 5025
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5026
        .items = { ITEM_FULL_RESTORE },
#line 5027
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5029
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5030
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5032
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5035
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5036
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5038
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5041
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5042
        .trainerName = _("JANI"),
#line 5043
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5044
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5045
F_TRAINER_FEMALE | 
#line 5046
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5047
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5049
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5050
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5053
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5054
        .trainerName = _("LAO"),
#line 5055
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5056
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5058
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5059
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5061
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5062
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5065
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5066
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5069
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5070
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5073
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5074
        .trainerName = _("LUNG"),
#line 5075
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5076
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5078
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5079
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5081
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5083
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5082
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5085
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5086
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5089
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5090
        .trainerName = _("JOCELYN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5098
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5100
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5099
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5102
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5103
        .trainerName = _("LAURA"),
#line 5104
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5105
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5106
F_TRAINER_FEMALE | 
#line 5107
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5108
        .doubleBattle = FALSE,
#line 5109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5111
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5113
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5112
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5115
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5116
        .trainerName = _("CYNDY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5124
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5125
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5128
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5130
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5129
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5132
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5133
        .trainerName = _("CORA"),
#line 5134
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5135
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5136
F_TRAINER_FEMALE | 
#line 5137
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5138
        .doubleBattle = FALSE,
#line 5139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5141
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5143
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5142
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5145
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5146
        .trainerName = _("PAULA"),
#line 5147
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5148
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5149
F_TRAINER_FEMALE | 
#line 5150
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5151
        .doubleBattle = FALSE,
#line 5152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5154
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5155
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5158
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5159
        .trainerName = _("MADELINE"),
#line 5160
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5161
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5162
F_TRAINER_FEMALE | 
#line 5163
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5164
        .doubleBattle = FALSE,
#line 5165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5167
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5168
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5171
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5172
        .trainerName = _("CLARISSA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5180
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5181
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5184
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5185
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5188
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5189
        .trainerName = _("ANGELICA"),
#line 5190
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5191
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5192
F_TRAINER_FEMALE | 
#line 5193
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5194
        .doubleBattle = FALSE,
#line 5195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5197
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5199
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5198
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5201
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5202
        .trainerName = _("BEVERLY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5210
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5211
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5214
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5216
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5215
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5218
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5219
        .trainerName = _("IMANI"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5227
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5229
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5228
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5231
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5232
        .trainerName = _("KYLA"),
#line 5233
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5234
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5235
F_TRAINER_FEMALE | 
#line 5236
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5237
        .doubleBattle = FALSE,
#line 5238
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5240
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5241
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5244
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5245
        .trainerName = _("DENISE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5253
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5254
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5257
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5259
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5258
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5261
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5262
        .trainerName = _("BETH"),
#line 5263
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5264
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5265
F_TRAINER_FEMALE | 
#line 5266
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5267
        .doubleBattle = FALSE,
#line 5268
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5270
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5271
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5274
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5275
        .trainerName = _("TARA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5283
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5285
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5284
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5287
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5289
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5288
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5291
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5292
        .trainerName = _("MISSY"),
#line 5293
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5294
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5295
F_TRAINER_FEMALE | 
#line 5296
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5297
        .doubleBattle = FALSE,
#line 5298
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5300
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5302
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5301
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5304
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5305
        .trainerName = _("ALICE"),
#line 5306
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5307
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5308
F_TRAINER_FEMALE | 
#line 5309
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5310
        .doubleBattle = FALSE,
#line 5311
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5313
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5315
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5314
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5317
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5319
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5318
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5321
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5322
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5325
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5326
        .trainerName = _("JENNY"),
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
            .species = SPECIES_LAPRAS,
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
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5339
        .trainerName = _("GRACE"),
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
            .species = SPECIES_OCTILLERY,
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
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5352
        .trainerName = _("TANYA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5360
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5361
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5364
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5365
        .trainerName = _("SHARON"),
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
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5374
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5377
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5378
        .trainerName = _("NIKKI"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5386
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5388
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5387
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5390
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5391
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5394
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5395
        .trainerName = _("BRENDA"),
#line 5396
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5397
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5398
F_TRAINER_FEMALE | 
#line 5399
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5400
        .doubleBattle = FALSE,
#line 5401
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5403
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5405
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5404
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5407
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5408
        .trainerName = _("KATIE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5416
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5418
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5417
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5420
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5422
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5421
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5424
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5425
        .trainerName = _("SUSIE"),
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
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5435
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5434
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5437
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5438
        .trainerName = _("KARA"),
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
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5448
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5447
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5450
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5451
        .trainerName = _("DANA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5459
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5460
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5463
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5464
        .trainerName = _("SIENNA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5472
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5473
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5476
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5477
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5480
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5481
        .trainerName = _("DEBRA"),
#line 5482
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5483
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5484
F_TRAINER_FEMALE | 
#line 5485
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5486
        .doubleBattle = FALSE,
#line 5487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5489
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5490
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5493
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5494
        .trainerName = _("LINDA"),
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
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5503
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5506
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5507
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5510
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5511
        .trainerName = _("KAYLEE"),
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
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5520
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5523
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5524
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5527
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5528
        .trainerName = _("LAUREL"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5536
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5537
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5540
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5541
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5544
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5545
        .trainerName = _("CARLEE"),
#line 5546
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5547
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5548
F_TRAINER_FEMALE | 
#line 5549
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5550
        .doubleBattle = FALSE,
#line 5551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5553
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5554
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5557
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5558
        .trainerName = _("HEIDI"),
#line 5559
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5560
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5561
F_TRAINER_FEMALE | 
#line 5562
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5563
        .doubleBattle = FALSE,
#line 5564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5566
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5567
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5570
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5571
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5575
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5576
        .trainerName = _("BECKY"),
#line 5577
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5578
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5579
F_TRAINER_FEMALE | 
#line 5580
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5581
        .doubleBattle = TRUE,
#line 5582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5584
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5584
            .heldItem = ITEM_FOCUS_SASH,
#line 5586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5585
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5587
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5590
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .heldItem = ITEM_WIDE_LENS,
#line 5593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5591
            .ability = ABILITY_MOODY,
#line 5592
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5593
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5598
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5599
        .trainerName = _("CAROL"),
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
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5608
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5611
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5612
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5615
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5616
        .trainerName = _("NANCY"),
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
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5625
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5628
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5629
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5632
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5633
        .trainerName = _("MARTHA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5641
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5642
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5645
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5647
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5646
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5649
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5650
        .trainerName = _("DIANA"),
#line 5651
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5652
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5653
F_TRAINER_FEMALE | 
#line 5654
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5655
        .doubleBattle = FALSE,
#line 5656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5658
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5659
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5662
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5664
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5663
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5666
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5667
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5670
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5671
        .trainerName = _("CEDRIC"),
#line 5672
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5673
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5675
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5676
        .doubleBattle = FALSE,
#line 5677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5679
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5680
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5683
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5684
        .trainerName = _("IRENE"),
#line 5685
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5686
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5687
F_TRAINER_FEMALE | 
#line 5688
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5689
        .doubleBattle = FALSE,
#line 5690
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5692
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5693
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5696
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5697
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5700
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5701
        .trainerName = _("AMY & LIV"),
#line 5702
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5703
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5705
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5706
        .doubleBattle = TRUE,
#line 5707
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5709
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5711
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5710
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5713
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5714
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5718
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5719
        .trainerName = _("GINA & MIA"),
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
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5729
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5728
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5731
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5732
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5735
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5736
        .trainerName = _("MIU & YUKI"),
#line 5737
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5738
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5740
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5741
        .doubleBattle = TRUE,
#line 5742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5744
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5745
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5748
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5749
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5753
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5754
        .trainerName = _("HUEY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5762
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5764
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5763
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5766
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5768
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5767
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5770
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5771
        .trainerName = _("EDMOND"),
#line 5772
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5773
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5775
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5776
        .doubleBattle = FALSE,
#line 5777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5779
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5780
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5783
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5784
        .trainerName = _("ERNEST"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5792
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5793
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5796
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5797
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5800
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5801
        .trainerName = _("DWAYNE"),
#line 5802
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5803
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5805
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5806
        .doubleBattle = FALSE,
#line 5807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5809
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5810
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5813
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5814
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5817
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5818
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5821
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5822
        .trainerName = _("PHILLIP"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5830
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5831
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5834
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5835
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5838
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5839
        .trainerName = _("LEONARD"),
#line 5840
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5841
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5843
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5844
        .doubleBattle = FALSE,
#line 5845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5847
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5848
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5851
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5852
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5855
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5856
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5859
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5860
        .trainerName = _("DUNCAN"),
#line 5861
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5862
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5864
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5865
        .doubleBattle = FALSE,
#line 5866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5868
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5869
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5872
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5873
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5876
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5877
        .trainerName = _("ELI"),
#line 5878
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5879
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5881
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5882
        .doubleBattle = FALSE,
#line 5883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5885
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5887
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5886
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5889
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5890
        .trainerName = _("ANNIKA"),
#line 5891
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5892
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5893
F_TRAINER_FEMALE | 
#line 5894
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5895
        .doubleBattle = FALSE,
#line 5896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5898
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5898
            .heldItem = ITEM_FOCUS_SASH,
#line 5900
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5899
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5902
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5902
            .heldItem = ITEM_FOCUS_SASH,
#line 5904
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5903
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5906
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5907
        .trainerName = _("JAZMYN"),
#line 5908
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5909
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5910
F_TRAINER_FEMALE | 
#line 5911
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5912
        .items = { ITEM_HYPER_POTION },
#line 5913
        .doubleBattle = FALSE,
#line 5914
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5916
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5917
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5920
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5921
        .trainerName = _("JONAS"),
#line 5922
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5923
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5925
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5926
        .doubleBattle = FALSE,
#line 5927
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5929
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5930
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5933
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5934
        .trainerName = _("KAYLEY"),
#line 5935
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5936
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5937
F_TRAINER_FEMALE | 
#line 5938
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5939
        .doubleBattle = FALSE,
#line 5940
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5942
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5944
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5943
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5946
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5947
        .trainerName = _("AURON"),
#line 5948
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5949
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5951
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5952
        .doubleBattle = FALSE,
#line 5953
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5955
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5956
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5959
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5961
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5960
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5963
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5964
        .trainerName = _("KELVIN"),
#line 5965
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5966
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5968
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5969
        .doubleBattle = FALSE,
#line 5970
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5972
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5974
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5973
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5976
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5978
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5977
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5980
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5981
        .trainerName = _("MARLEY"),
#line 5982
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5983
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5984
F_TRAINER_FEMALE | 
#line 5985
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5986
        .items = { ITEM_HYPER_POTION },
#line 5987
        .doubleBattle = FALSE,
#line 5988
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5990
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5992
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5991
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5994
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5995
        .trainerName = _("REYNA"),
#line 5996
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5997
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5998
F_TRAINER_FEMALE | 
#line 5999
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6000
        .doubleBattle = FALSE,
#line 6001
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6003
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6005
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6004
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6007
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6009
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6008
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6011
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6012
        .trainerName = _("HUDSON"),
#line 6013
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6014
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6016
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6017
        .doubleBattle = FALSE,
#line 6018
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6020
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6022
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6021
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6024
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6025
        .trainerName = _("CONOR"),
#line 6026
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6027
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6029
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6030
        .doubleBattle = FALSE,
#line 6031
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6033
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6034
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6037
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6039
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6038
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6041
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6042
        .trainerName = _("EDWIN"),
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
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6051
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6054
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6056
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6055
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6058
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6059
        .trainerName = _("HECTOR"),
#line 6060
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6061
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6063
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6064
        .doubleBattle = FALSE,
#line 6065
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6067
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6069
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6068
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6071
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6073
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6072
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6075
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6076
        .trainerName = _("TABITHA"),
#line 6077
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6078
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6080
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6081
        .doubleBattle = FALSE,
#line 6082
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6084
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6084
            .heldItem = ITEM_HEAT_ROCK,
#line 6087
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6085
            .ability = ABILITY_DROUGHT,
#line 6086
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6088
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6093
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6093
            .heldItem = ITEM_POISON_BARB,
#line 6096
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6094
            .ability = ABILITY_LEVITATE,
#line 6095
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6097
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6102
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6102
            .heldItem = ITEM_LIFE_ORB,
#line 6105
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6104
            .ability = ABILITY_LEVITATE,
#line 6103
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6106
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6111
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6112
        .trainerName = _("SAMUEL"),
#line 6113
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6114
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6116
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6117
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6118
        .doubleBattle = TRUE,
#line 6119
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6121
            .species = SPECIES_SLOWKING,
#line 6121
            .gender = TRAINER_MON_MALE,
#line 6121
            .heldItem = ITEM_LIFE_ORB,
#line 6125
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6122
            .ability = ABILITY_REGENERATOR,
#line 6123
            .lvl = 70,
#line 6124
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6126
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6131
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6131
            .heldItem = ITEM_ROCKY_HELMET,
#line 6135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6132
            .ability = ABILITY_REGENERATOR,
#line 6133
            .lvl = 70,
#line 6134
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6135
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6140
            .species = SPECIES_GLISCOR,
#line 6140
            .gender = TRAINER_MON_FEMALE,
#line 6140
            .heldItem = ITEM_TOXIC_ORB,
#line 6144
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6141
            .ability = ABILITY_POISON_HEAL,
#line 6142
            .lvl = 70,
#line 6143
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6145
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6150
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .heldItem = ITEM_ASSAULT_VEST,
#line 6154
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6151
            .ability = ABILITY_CLEAR_BODY,
#line 6152
            .lvl = 70,
#line 6153
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6155
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6160
            .species = SPECIES_HONCHKROW,
#line 6160
            .gender = TRAINER_MON_MALE,
#line 6160
            .heldItem = ITEM_FOCUS_SASH,
#line 6164
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6161
            .ability = ABILITY_MOXIE,
#line 6162
            .lvl = 70,
#line 6163
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6164
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6169
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6170
            .ability = ABILITY_INFILTRATOR,
#line 6171
            .lvl = 70,
#line 6172
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6173
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6178
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6179
        .trainerName = _("SAMUEL"),
#line 6180
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6181
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6183
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6184
        .doubleBattle = FALSE,
#line 6185
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6187
            .species = SPECIES_SLOWPOKE,
#line 6187
            .gender = TRAINER_MON_MALE,
#line 6191
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6188
            .ability = ABILITY_REGENERATOR,
#line 6189
            .lvl = 5,
#line 6190
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6192
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6196
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6197
        .trainerName = _("SAMUEL"),
#line 6198
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6199
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6201
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6202
        .doubleBattle = FALSE,
#line 6203
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6205
            .species = SPECIES_SLOWPOKE,
#line 6205
            .gender = TRAINER_MON_MALE,
#line 6205
            .heldItem = ITEM_FIGY_BERRY,
#line 6209
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6206
            .ability = ABILITY_REGENERATOR,
#line 6207
            .lvl = 24,
#line 6208
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6210
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6215
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6215
            .heldItem = ITEM_LUM_BERRY,
#line 6219
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6216
            .ability = ABILITY_REGENERATOR,
#line 6217
            .lvl = 24,
#line 6218
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6220
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6225
            .species = SPECIES_GLIGAR,
#line 6225
            .gender = TRAINER_MON_FEMALE,
#line 6225
            .heldItem = ITEM_RAZOR_FANG,
#line 6229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6226
            .ability = ABILITY_HYPER_CUTTER,
#line 6227
            .lvl = 24,
#line 6228
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6230
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6235
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6239
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6236
            .ability = ABILITY_CLEAR_BODY,
#line 6237
            .lvl = 24,
#line 6238
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6239
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6244
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6245
        .trainerName = _("SAMUEL"),
#line 6246
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6247
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6249
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6250
        .doubleBattle = FALSE,
#line 6251
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6253
            .species = SPECIES_SLOWPOKE,
#line 6253
            .gender = TRAINER_MON_MALE,
#line 6253
            .heldItem = ITEM_LIFE_ORB,
#line 6257
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6254
            .ability = ABILITY_REGENERATOR,
#line 6255
            .lvl = 49,
#line 6256
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6258
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6263
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6263
            .heldItem = ITEM_ROCKY_HELMET,
#line 6267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6264
            .ability = ABILITY_REGENERATOR,
#line 6265
            .lvl = 49,
#line 6266
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6267
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6272
            .species = SPECIES_GLIGAR,
#line 6272
            .gender = TRAINER_MON_FEMALE,
#line 6272
            .heldItem = ITEM_RAZOR_FANG,
#line 6276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6273
            .ability = ABILITY_HYPER_CUTTER,
#line 6274
            .lvl = 49,
#line 6275
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6277
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6282
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6282
            .heldItem = ITEM_ASSAULT_VEST,
#line 6286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6283
            .ability = ABILITY_CLEAR_BODY,
#line 6284
            .lvl = 49,
#line 6285
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6286
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6291
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6291
            .heldItem = ITEM_FOCUS_SASH,
#line 6295
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6292
            .ability = ABILITY_PRANKSTER,
#line 6293
            .lvl = 49,
#line 6294
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6295
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6300
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6301
        .trainerName = _("SAMUEL"),
#line 6302
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6303
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6305
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6306
        .doubleBattle = FALSE,
#line 6307
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6309
            .species = SPECIES_SLOWPOKE,
#line 6309
            .gender = TRAINER_MON_MALE,
#line 6313
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6310
            .ability = ABILITY_REGENERATOR,
#line 6311
            .lvl = 5,
#line 6312
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6314
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6318
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6319
        .trainerName = _("SAMUEL"),
#line 6320
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6321
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6323
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6324
        .doubleBattle = FALSE,
#line 6325
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6327
            .species = SPECIES_SLOWPOKE,
#line 6327
            .gender = TRAINER_MON_MALE,
#line 6327
            .heldItem = ITEM_FIGY_BERRY,
#line 6331
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6328
            .ability = ABILITY_REGENERATOR,
#line 6329
            .lvl = 24,
#line 6330
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6332
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6337
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6337
            .heldItem = ITEM_LUM_BERRY,
#line 6341
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6338
            .ability = ABILITY_REGENERATOR,
#line 6339
            .lvl = 24,
#line 6340
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6342
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6347
            .species = SPECIES_GLIGAR,
#line 6347
            .gender = TRAINER_MON_FEMALE,
#line 6347
            .heldItem = ITEM_RAZOR_FANG,
#line 6351
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6348
            .ability = ABILITY_HYPER_CUTTER,
#line 6349
            .lvl = 24,
#line 6350
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6352
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6357
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6357
            .heldItem = ITEM_METAL_COAT,
#line 6361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6358
            .ability = ABILITY_CLEAR_BODY,
#line 6359
            .lvl = 24,
#line 6360
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6361
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6367
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6368
        .trainerName = _("SAMUEL"),
#line 6369
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6370
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6372
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6373
        .doubleBattle = FALSE,
#line 6374
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6376
            .species = SPECIES_SLOWPOKE,
#line 6376
            .gender = TRAINER_MON_MALE,
#line 6376
            .heldItem = ITEM_LIFE_ORB,
#line 6380
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6377
            .ability = ABILITY_REGENERATOR,
#line 6378
            .lvl = 44,
#line 6379
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6381
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6386
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6386
            .heldItem = ITEM_ROCKY_HELMET,
#line 6389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6387
            .ability = ABILITY_REGENERATOR,
#line 6389
            .lvl = 100,
#line 6388
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6389
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6394
            .species = SPECIES_GLIGAR,
#line 6394
            .gender = TRAINER_MON_FEMALE,
#line 6394
            .heldItem = ITEM_RAZOR_FANG,
#line 6398
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6395
            .ability = ABILITY_HYPER_CUTTER,
#line 6396
            .lvl = 44,
#line 6397
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6399
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6404
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6404
            .heldItem = ITEM_ASSAULT_VEST,
#line 6408
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6405
            .ability = ABILITY_CLEAR_BODY,
#line 6406
            .lvl = 44,
#line 6407
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6408
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6413
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6414
        .trainerName = _("SAMUEL"),
#line 6415
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6416
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6418
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6419
        .doubleBattle = FALSE,
#line 6420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6422
            .species = SPECIES_SLOWPOKE,
#line 6422
            .gender = TRAINER_MON_MALE,
#line 6426
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6423
            .ability = ABILITY_REGENERATOR,
#line 6424
            .lvl = 5,
#line 6425
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6427
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6431
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6432
        .trainerName = _("SAMUEL"),
#line 6433
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6434
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6436
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6437
        .doubleBattle = FALSE,
#line 6438
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6440
            .species = SPECIES_SLOWPOKE,
#line 6440
            .gender = TRAINER_MON_MALE,
#line 6440
            .heldItem = ITEM_FIGY_BERRY,
#line 6444
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6441
            .ability = ABILITY_REGENERATOR,
#line 6442
            .lvl = 24,
#line 6443
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6445
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6450
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6450
            .heldItem = ITEM_LUM_BERRY,
#line 6454
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6451
            .ability = ABILITY_REGENERATOR,
#line 6452
            .lvl = 24,
#line 6453
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6455
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6460
            .species = SPECIES_GLIGAR,
#line 6460
            .gender = TRAINER_MON_FEMALE,
#line 6460
            .heldItem = ITEM_RAZOR_FANG,
#line 6464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6461
            .ability = ABILITY_HYPER_CUTTER,
#line 6462
            .lvl = 24,
#line 6463
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6465
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6471
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6472
        .trainerName = _("SAMUEL"),
#line 6473
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6474
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6476
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6477
        .doubleBattle = FALSE,
#line 6478
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6480
            .species = SPECIES_SLOWPOKE,
#line 6480
            .gender = TRAINER_MON_MALE,
#line 6480
            .heldItem = ITEM_LIFE_ORB,
#line 6484
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6481
            .ability = ABILITY_REGENERATOR,
#line 6482
            .lvl = 44,
#line 6483
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6485
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6490
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6490
            .heldItem = ITEM_ROCKY_HELMET,
#line 6493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6491
            .ability = ABILITY_REGENERATOR,
#line 6493
            .lvl = 100,
#line 6492
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6493
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6498
            .species = SPECIES_GLIGAR,
#line 6498
            .gender = TRAINER_MON_FEMALE,
#line 6498
            .heldItem = ITEM_RAZOR_FANG,
#line 6502
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6499
            .ability = ABILITY_HYPER_CUTTER,
#line 6500
            .lvl = 44,
#line 6501
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6503
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6508
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6508
            .heldItem = ITEM_ASSAULT_VEST,
#line 6512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6509
            .ability = ABILITY_CLEAR_BODY,
#line 6510
            .lvl = 44,
#line 6511
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6512
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6517
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6518
        .trainerName = _("MAY"),
#line 6519
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6520
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6521
F_TRAINER_FEMALE | 
#line 6522
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6523
        .doubleBattle = FALSE,
#line 6524
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6526
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6527
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6530
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6531
        .trainerName = _("MAY"),
#line 6532
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6533
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6534
F_TRAINER_FEMALE | 
#line 6535
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6536
        .doubleBattle = FALSE,
#line 6537
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6539
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6541
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6540
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6543
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6545
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6544
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6547
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6549
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6548
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6551
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6552
        .trainerName = _("MAY"),
#line 6553
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6554
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6555
F_TRAINER_FEMALE | 
#line 6556
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6557
        .doubleBattle = FALSE,
#line 6558
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6560
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6562
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6561
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6564
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6566
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6565
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6568
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6570
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6569
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6572
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6573
        .trainerName = _("MAY"),
#line 6574
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6575
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6576
F_TRAINER_FEMALE | 
#line 6577
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6578
        .doubleBattle = FALSE,
#line 6579
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6581
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6582
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6585
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6586
        .trainerName = _("MAY"),
#line 6587
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6588
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6589
F_TRAINER_FEMALE | 
#line 6590
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6591
        .doubleBattle = FALSE,
#line 6592
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6594
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6596
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6595
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6598
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6600
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6599
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6602
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6603
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6606
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6607
        .trainerName = _("MAY"),
#line 6608
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6609
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6610
F_TRAINER_FEMALE | 
#line 6611
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6612
        .doubleBattle = FALSE,
#line 6613
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6615
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6617
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6616
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6619
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6621
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6620
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6623
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6625
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6624
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6627
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6628
        .trainerName = _("MAY"),
#line 6629
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6630
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6631
F_TRAINER_FEMALE | 
#line 6632
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6633
        .doubleBattle = FALSE,
#line 6634
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6636
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6637
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6640
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6641
        .trainerName = _("MAY"),
#line 6642
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6643
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6644
F_TRAINER_FEMALE | 
#line 6645
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6646
        .doubleBattle = FALSE,
#line 6647
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6649
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6651
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6650
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6653
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6655
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6654
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6657
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6659
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6658
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6661
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6662
        .trainerName = _("MAY"),
#line 6663
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6664
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6665
F_TRAINER_FEMALE | 
#line 6666
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6667
        .doubleBattle = FALSE,
#line 6668
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6670
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6672
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6671
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6674
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6676
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6675
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6678
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6680
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6679
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6682
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6683
        .trainerName = _("ISAAC"),
#line 6684
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6685
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6687
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6688
        .doubleBattle = FALSE,
#line 6689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6691
            .species = SPECIES_RUFFLET,
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
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6697
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6696
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6699
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6700
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6703
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6704
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6707
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6708
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6711
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6712
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6715
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6716
        .trainerName = _("DAVIS"),
#line 6717
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6718
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6720
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6721
        .doubleBattle = FALSE,
#line 6722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6724
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6725
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6728
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6729
        .trainerName = _("MITCHELL"),
#line 6730
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6731
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6733
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6734
        .doubleBattle = FALSE,
#line 6735
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6737
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6738
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6741
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6742
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6745
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6746
        .trainerName = _("LYDIA"),
#line 6747
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6748
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6749
F_TRAINER_FEMALE | 
#line 6750
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6751
        .doubleBattle = FALSE,
#line 6752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6754
            .species = SPECIES_SHUPPET,
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
            .species = SPECIES_SANDSHREW,
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
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6763
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6766
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6767
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6770
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6771
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6774
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6775
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6778
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6779
        .trainerName = _("HALLE"),
#line 6780
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6781
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6782
F_TRAINER_FEMALE | 
#line 6783
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6784
        .items = { ITEM_FULL_RESTORE },
#line 6785
        .doubleBattle = FALSE,
#line 6786
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6788
            .species = SPECIES_EELEKTROSS,
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
            .species = SPECIES_EXPLOUD,
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
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6797
        .trainerName = _("GARRISON"),
#line 6798
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6799
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6801
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6802
        .doubleBattle = FALSE,
#line 6803
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6805
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6807
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6806
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6809
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6810
        .trainerName = _("JACKSON"),
#line 6811
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6812
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6814
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6815
        .items = { ITEM_FULL_RESTORE },
#line 6816
        .doubleBattle = FALSE,
#line 6817
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6819
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6821
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6820
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6823
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6824
        .trainerName = _("LORENZO"),
#line 6825
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6826
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6828
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6829
        .items = { ITEM_FULL_RESTORE },
#line 6830
        .doubleBattle = FALSE,
#line 6831
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6833
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6835
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6834
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6837
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6839
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6838
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6841
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6843
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6842
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6845
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6846
        .trainerName = _("SEBASTIAN"),
#line 6847
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6848
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6850
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6851
        .items = { ITEM_FULL_RESTORE },
#line 6852
        .doubleBattle = FALSE,
#line 6853
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6855
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6856
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6859
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6860
        .trainerName = _("CATHERINE"),
#line 6861
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6862
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6863
F_TRAINER_FEMALE | 
#line 6864
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6865
        .items = { ITEM_FULL_RESTORE },
#line 6866
        .doubleBattle = FALSE,
#line 6867
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6869
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6871
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6870
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6873
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6875
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6874
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6877
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6878
        .trainerName = _("JENNA"),
#line 6879
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6880
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6881
F_TRAINER_FEMALE | 
#line 6882
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6883
        .items = { ITEM_FULL_RESTORE },
#line 6884
        .doubleBattle = FALSE,
#line 6885
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6887
            .species = SPECIES_PIKACHU,
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
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6893
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6892
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6895
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6897
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6896
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6899
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6900
        .trainerName = _("SOPHIA"),
#line 6901
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6902
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6903
F_TRAINER_FEMALE | 
#line 6904
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6905
        .items = { ITEM_FULL_RESTORE },
#line 6906
        .doubleBattle = FALSE,
#line 6907
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6909
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6911
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6910
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6913
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6915
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6914
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6917
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6918
        .trainerName = _("JULIO"),
#line 6919
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6920
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6922
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6923
        .doubleBattle = FALSE,
#line 6924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6926
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6927
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6930
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6931
        .trainerName = _("GRUNT"),
#line 6932
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6933
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6941
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6940
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6943
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6945
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6944
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6947
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6948
        .trainerName = _("GRUNT"),
#line 6949
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
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
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6958
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6957
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6960
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6961
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6964
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6965
        .trainerName = _("GRUNT"),
#line 6966
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6967
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6968
F_TRAINER_FEMALE | 
#line 6969
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6970
        .doubleBattle = FALSE,
#line 6971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6973
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6974
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6977
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6978
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6981
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6982
        .trainerName = _("GRUNT"),
#line 6983
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6984
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6986
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6987
        .doubleBattle = FALSE,
#line 6988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6990
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6992
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6991
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6994
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6996
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6995
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6998
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6999
        .trainerName = _("MARC"),
#line 7000
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7001
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7003
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7004
        .doubleBattle = FALSE,
#line 7005
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7007
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7009
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7008
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7011
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7013
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7012
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7015
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7016
        .trainerName = _("BRENDEN"),
#line 7017
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7018
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7020
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7021
        .doubleBattle = FALSE,
#line 7022
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7024
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7026
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7025
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7028
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7029
        .trainerName = _("LILITH"),
#line 7030
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7031
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7032
F_TRAINER_FEMALE | 
#line 7033
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7034
        .doubleBattle = FALSE,
#line 7035
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7037
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7039
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7038
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7041
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7042
        .trainerName = _("CRISTIAN"),
#line 7043
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7044
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7046
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7047
        .doubleBattle = FALSE,
#line 7048
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7050
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7052
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7051
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7054
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7055
        .trainerName = _("SYLVIA"),
#line 7056
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7057
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7058
F_TRAINER_FEMALE | 
#line 7059
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7060
        .doubleBattle = FALSE,
#line 7061
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7063
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7065
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7064
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7067
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7068
        .trainerName = _("LEONARDO"),
#line 7069
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7070
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7072
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7073
        .doubleBattle = FALSE,
#line 7074
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7076
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7077
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7080
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7081
        .trainerName = _("ATHENA"),
#line 7082
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7083
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7084
F_TRAINER_FEMALE | 
#line 7085
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7086
        .items = { ITEM_HYPER_POTION },
#line 7087
        .doubleBattle = FALSE,
#line 7088
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7090
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7092
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7091
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7094
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7096
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7095
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7099
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7100
        .trainerName = _("HARRISON"),
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
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7110
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7109
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7112
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7113
        .trainerName = _("GRUNT"),
#line 7114
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7115
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7117
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7118
        .doubleBattle = FALSE,
#line 7119
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7121
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7123
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7122
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7125
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7126
        .trainerName = _("CLARENCE"),
#line 7127
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7128
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7130
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7131
        .doubleBattle = FALSE,
#line 7132
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7134
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7135
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7138
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7139
        .trainerName = _("TERRY"),
#line 7140
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7141
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7142
F_TRAINER_FEMALE | 
#line 7143
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7144
        .doubleBattle = FALSE,
#line 7145
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7147
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7148
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7151
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7152
        .trainerName = _("NATE"),
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
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7162
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7161
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7164
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7165
        .trainerName = _("KATHLEEN"),
#line 7166
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7167
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7168
F_TRAINER_FEMALE | 
#line 7169
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7170
        .doubleBattle = FALSE,
#line 7171
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7173
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7175
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7174
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7177
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7178
        .trainerName = _("CLIFFORD"),
#line 7179
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7180
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7182
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7183
        .doubleBattle = FALSE,
#line 7184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7186
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7187
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7190
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7191
        .trainerName = _("NICHOLAS"),
#line 7192
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7193
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7195
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7196
        .doubleBattle = FALSE,
#line 7197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7199
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7200
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7203
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7204
        .trainerName = _("GRUNT"),
#line 7205
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7206
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7207
F_TRAINER_FEMALE | 
#line 7208
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7209
        .doubleBattle = FALSE,
#line 7210
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7212
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7214
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7213
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7216
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7218
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7217
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7220
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
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
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7231
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7230
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7233
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
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
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7244
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7243
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7246
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7247
        .trainerName = _("GRUNT"),
#line 7248
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7249
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7251
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7252
        .doubleBattle = FALSE,
#line 7253
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7255
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7257
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7256
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7259
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7260
        .trainerName = _("GRUNT"),
#line 7261
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7262
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7264
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7265
        .doubleBattle = FALSE,
#line 7266
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7268
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7269
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7272
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7273
        .trainerName = _("MACEY"),
#line 7274
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7275
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7276
F_TRAINER_FEMALE | 
#line 7277
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7278
        .doubleBattle = FALSE,
#line 7279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7281
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7282
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7285
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7286
        .trainerName = _("SAMUEL"),
#line 7287
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7288
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7290
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7291
        .doubleBattle = FALSE,
#line 7292
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7294
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7294
            .heldItem = ITEM_RAZOR_FANG,
#line 7298
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7295
            .ability = ABILITY_HYPER_CUTTER,
#line 7296
            .lvl = 16,
#line 7297
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7298
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7303
            .species = SPECIES_SLOWPOKE,
#line 7303
            .gender = TRAINER_MON_MALE,
#line 7307
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7304
            .ability = ABILITY_REGENERATOR,
#line 7305
            .lvl = 16,
#line 7306
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7307
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7312
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7316
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7313
            .ability = ABILITY_REGENERATOR,
#line 7314
            .lvl = 16,
#line 7315
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7316
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7321
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7322
        .trainerName = _("SAMUEL"),
#line 7323
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7324
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7326
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7327
        .doubleBattle = FALSE,
#line 7328
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7330
            .species = SPECIES_SLOWPOKE,
#line 7330
            .gender = TRAINER_MON_MALE,
#line 7334
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7331
            .ability = ABILITY_REGENERATOR,
#line 7332
            .lvl = 16,
#line 7333
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7335
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7340
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7341
            .ability = ABILITY_REGENERATOR,
#line 7342
            .lvl = 16,
#line 7343
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7344
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7351
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7352
        .trainerName = _("PAXTON"),
#line 7353
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7354
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7356
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7357
        .doubleBattle = FALSE,
#line 7358
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7360
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7361
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7364
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7365
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7368
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7369
        .trainerName = _("ISABELLA"),
#line 7370
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7371
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7372
F_TRAINER_FEMALE | 
#line 7373
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7374
        .doubleBattle = FALSE,
#line 7375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7377
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7378
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7381
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7382
        .trainerName = _("GRUNT"),
#line 7383
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7384
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7385
F_TRAINER_FEMALE | 
#line 7386
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7387
        .doubleBattle = FALSE,
#line 7388
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7390
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7392
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7391
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7394
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7395
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7398
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7399
        .trainerName = _("TABITHA"),
#line 7400
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7401
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7403
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7404
        .doubleBattle = FALSE,
#line 7405
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7407
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7410
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7408
            .ability = ABILITY_DROUGHT,
#line 7409
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7411
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7416
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7416
            .heldItem = ITEM_LUM_BERRY,
#line 7419
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7417
            .ability = ABILITY_LEVITATE,
#line 7418
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7420
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7424
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7424
            .heldItem = ITEM_SITRUS_BERRY,
#line 7427
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7425
            .ability = ABILITY_LEVITATE,
#line 7426
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7428
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7432
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7432
            .heldItem = ITEM_LUM_BERRY,
#line 7435
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7433
            .ability = ABILITY_OWN_TEMPO,
#line 7434
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7436
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7441
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7442
        .trainerName = _("JONATHAN"),
#line 7443
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7444
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7446
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7447
        .items = { ITEM_HYPER_POTION },
#line 7448
        .doubleBattle = FALSE,
#line 7449
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7451
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7452
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7455
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7456
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7459
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7460
        .trainerName = _("SAMUEL"),
#line 7461
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7462
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7464
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7465
        .doubleBattle = FALSE,
#line 7466
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7468
            .species = SPECIES_SLOWPOKE,
#line 7468
            .gender = TRAINER_MON_MALE,
#line 7472
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7469
            .ability = ABILITY_REGENERATOR,
#line 7470
            .lvl = 16,
#line 7471
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7473
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7478
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7482
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7479
            .ability = ABILITY_REGENERATOR,
#line 7480
            .lvl = 16,
#line 7481
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7482
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7489
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7490
        .trainerName = _("MAY"),
#line 7491
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7492
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7493
F_TRAINER_FEMALE | 
#line 7494
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7495
        .doubleBattle = FALSE,
#line 7496
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7498
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7500
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7499
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7502
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7504
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7503
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7506
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7507
        .trainerName = _("MAXIE"),
#line 7508
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7509
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7511
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7512
        .doubleBattle = FALSE,
#line 7513
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7515
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7515
            .heldItem = ITEM_IRON_BALL,
#line 7518
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7516
            .ability = ABILITY_HEAVY_METAL,
#line 7517
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7518
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7523
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7523
            .heldItem = ITEM_SHARP_BEAK,
#line 7526
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7524
            .ability = ABILITY_INNER_FOCUS,
#line 7525
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7526
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7531
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7531
            .heldItem = ITEM_MUSCLE_BAND,
#line 7534
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7532
            .ability = ABILITY_IMMUNITY,
#line 7533
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7534
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7539
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7539
            .heldItem = ITEM_EXPERT_BELT,
#line 7542
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7540
            .ability = ABILITY_UNNERVE,
#line 7541
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7542
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7547
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7547
            .heldItem = ITEM_ROCKY_HELMET,
#line 7550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7548
            .ability = ABILITY_ROCK_HEAD,
#line 7549
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7550
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7555
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7556
        .trainerName = _("MAXIE"),
#line 7557
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7558
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7560
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7561
        .doubleBattle = FALSE,
#line 7562
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7564
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7564
            .heldItem = ITEM_MUSCLE_BAND,
#line 7567
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7565
            .ability = ABILITY_HEAVY_METAL,
#line 7566
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7568
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7573
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7573
            .heldItem = ITEM_LUM_BERRY,
#line 7576
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7574
            .ability = ABILITY_IMMUNITY,
#line 7575
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7577
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7582
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7582
            .heldItem = ITEM_LUM_BERRY,
#line 7585
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7583
            .ability = ABILITY_UNNERVE,
#line 7584
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7586
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7591
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7591
            .heldItem = ITEM_ROCKY_HELMET,
#line 7594
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7592
            .ability = ABILITY_ROCK_HEAD,
#line 7593
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7595
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7600
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7600
            .heldItem = ITEM_SHARP_BEAK,
#line 7603
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7601
            .ability = ABILITY_INNER_FOCUS,
#line 7602
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7604
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7609
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7610
        .trainerName = _("TIANA"),
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
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7619
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7622
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7623
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7626
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7627
        .trainerName = _("HALEY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7635
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7636
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7639
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7640
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7643
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7644
        .trainerName = _("JANICE"),
#line 7645
        .trainerClass = TRAINER_CLASS_LASS,
#line 7646
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7647
F_TRAINER_FEMALE | 
#line 7648
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7649
        .doubleBattle = FALSE,
#line 7650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7652
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7653
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7656
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7657
        .trainerName = _("VIVI"),
#line 7658
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7659
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7660
F_TRAINER_FEMALE | 
#line 7661
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7662
        .doubleBattle = FALSE,
#line 7663
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7665
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7667
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7666
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7669
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7670
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7673
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7675
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7674
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7677
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7678
        .trainerName = _("SALLY"),
#line 7679
        .trainerClass = TRAINER_CLASS_LASS,
#line 7680
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7681
F_TRAINER_FEMALE | 
#line 7682
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7683
        .doubleBattle = FALSE,
#line 7684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7686
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7687
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7690
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7691
        .trainerName = _("ROBIN"),
#line 7692
        .trainerClass = TRAINER_CLASS_LASS,
#line 7693
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7694
F_TRAINER_FEMALE | 
#line 7695
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7696
        .doubleBattle = FALSE,
#line 7697
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7699
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7701
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7700
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7703
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7704
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7707
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7708
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7711
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7712
        .trainerName = _("ANDREA"),
#line 7713
        .trainerClass = TRAINER_CLASS_LASS,
#line 7714
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7715
F_TRAINER_FEMALE | 
#line 7716
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7717
        .doubleBattle = FALSE,
#line 7718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7720
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7722
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7721
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7724
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7725
        .trainerName = _("CRISSY"),
#line 7726
        .trainerClass = TRAINER_CLASS_LASS,
#line 7727
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7728
F_TRAINER_FEMALE | 
#line 7729
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7730
        .doubleBattle = FALSE,
#line 7731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7733
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7735
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7734
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7737
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7739
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7738
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7741
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7742
        .trainerName = _("RICK"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7750
            .species = SPECIES_PORYGON,
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
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7755
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7758
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7759
        .trainerName = _("LYLE"),
#line 7760
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7761
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7763
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7764
        .doubleBattle = FALSE,
#line 7765
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7767
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7768
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7771
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7772
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7775
            .species = SPECIES_DUSKULL,
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
            .species = SPECIES_DRILBUR,
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
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7784
        .trainerName = _("JOSIE"),
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
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7794
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7793
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7796
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7798
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7797
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7800
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7801
        .trainerName = _("DOUG"),
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
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7810
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7813
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7814
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7817
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7818
        .trainerName = _("GREG"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7826
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7827
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7830
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7832
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7831
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7834
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7835
        .trainerName = _("KENT"),
#line 7836
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7837
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7839
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7840
        .doubleBattle = FALSE,
#line 7841
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7843
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7845
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7844
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7847
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7848
        .trainerName = _("JAMES"),
#line 7849
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7850
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7852
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7853
        .doubleBattle = FALSE,
#line 7854
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7856
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7858
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7857
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7860
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7861
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7864
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7865
        .trainerName = _("BRICE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7873
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7875
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7874
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7877
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7878
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7881
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7882
        .trainerName = _("TRENT"),
#line 7883
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7884
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7886
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7887
        .doubleBattle = FALSE,
#line 7888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7890
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7891
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7894
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7895
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7898
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7899
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7902
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7903
        .trainerName = _("LENNY"),
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
            .species = SPECIES_CHATOT,
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
            .species = SPECIES_MILTANK,
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
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7920
        .trainerName = _("LUCAS"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7928
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7929
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7932
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7933
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7936
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7937
        .trainerName = _("ALAN"),
#line 7938
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7939
        .trainerPic = TRAINER_PIC_HIKER,
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
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7947
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7946
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7949
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7950
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7953
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7954
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7957
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7958
        .trainerName = _("CLARK"),
#line 7959
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7960
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7962
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7963
        .doubleBattle = FALSE,
#line 7964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7966
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7968
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7967
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7970
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7971
        .trainerName = _("ERIC"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7979
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7981
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7980
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7983
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7985
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7984
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7987
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7988
        .trainerName = _("MIKE"),
#line 7989
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7990
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7992
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7993
        .doubleBattle = FALSE,
#line 7994
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7996
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7998
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7997
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8000
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8001
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8004
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8006
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8005
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8008
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8009
        .trainerName = _("DEZ & LUKE"),
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
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8018
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8021
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8023
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8022
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8025
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8026
        .trainerName = _("LEA & JED"),
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
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8036
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8035
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8038
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8039
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8042
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8043
        .trainerName = _("KIRA & DAN"),
#line 8044
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8045
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8047
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8048
        .doubleBattle = TRUE,
#line 8049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8051
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8053
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8052
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8055
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8056
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8059
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8060
        .trainerName = _("JOHANNA"),
#line 8061
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8062
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8063
F_TRAINER_FEMALE | 
#line 8064
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8065
        .doubleBattle = FALSE,
#line 8066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8068
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8069
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8072
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8073
        .trainerName = _("GERALD"),
#line 8074
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8075
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8077
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8078
        .items = { ITEM_HYPER_POTION },
#line 8079
        .doubleBattle = FALSE,
#line 8080
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8082
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8084
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8083
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8087
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8088
        .trainerName = _("VIVIAN"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8096
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8098
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8097
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8100
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8102
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8101
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8104
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8105
        .trainerName = _("DANIELLE"),
#line 8106
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8107
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8108
F_TRAINER_FEMALE | 
#line 8109
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8110
        .doubleBattle = FALSE,
#line 8111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8113
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8115
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8114
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8117
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8118
        .trainerName = _("HIDEO"),
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
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8127
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8130
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8131
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8134
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8135
        .trainerName = _("KEIGO"),
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
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8144
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8147
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8148
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8151
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8152
        .trainerName = _("RILEY"),
#line 8153
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8154
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8156
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8157
        .doubleBattle = FALSE,
#line 8158
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8160
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8162
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8161
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8164
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8165
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8168
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8169
        .trainerName = _("FLINT"),
#line 8170
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8171
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8173
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8174
        .doubleBattle = FALSE,
#line 8175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8177
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8179
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8178
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8181
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8183
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8182
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8185
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8186
        .trainerName = _("ASHLEY"),
#line 8187
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8188
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8189
F_TRAINER_FEMALE | 
#line 8190
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8191
        .doubleBattle = FALSE,
#line 8192
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8194
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8196
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8195
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8198
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8200
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8199
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8202
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8204
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8203
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8206
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8207
        .trainerName = _("WALLY"),
#line 8208
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8209
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8211
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8212
        .doubleBattle = FALSE,
#line 8213
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8215
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8218
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8216
            .ability = ABILITY_SAND_STREAM,
#line 8217
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8218
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8220
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8220
            .heldItem = ITEM_SHELL_BELL,
#line 8224
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8221
            .ability = ABILITY_STURDY,
#line 8222
            .lvl = 1,
#line 8223
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8225
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8227
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8228
        .trainerName = _("SAMUEL"),
#line 8229
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8230
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8232
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8233
        .doubleBattle = TRUE,
#line 8234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8236
            .species = SPECIES_SLOWKING,
#line 8236
            .gender = TRAINER_MON_MALE,
#line 8236
            .heldItem = ITEM_LIFE_ORB,
#line 8240
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8237
            .ability = ABILITY_REGENERATOR,
#line 8238
            .lvl = 54,
#line 8239
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8241
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8246
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8246
            .heldItem = ITEM_ROCKY_HELMET,
#line 8250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8247
            .ability = ABILITY_REGENERATOR,
#line 8248
            .lvl = 54,
#line 8249
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8250
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8255
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8255
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8256
            .ability = ABILITY_INFILTRATOR,
#line 8257
            .lvl = 54,
#line 8258
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8259
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8264
            .species = SPECIES_GLISCOR,
#line 8264
            .gender = TRAINER_MON_FEMALE,
#line 8264
            .heldItem = ITEM_TOXIC_ORB,
#line 8268
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8265
            .ability = ABILITY_POISON_HEAL,
#line 8266
            .lvl = 54,
#line 8267
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8269
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8274
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8274
            .heldItem = ITEM_ASSAULT_VEST,
#line 8278
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8275
            .ability = ABILITY_CLEAR_BODY,
#line 8276
            .lvl = 54,
#line 8277
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8279
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8284
            .species = SPECIES_HONCHKROW,
#line 8284
            .gender = TRAINER_MON_MALE,
#line 8284
            .heldItem = ITEM_FOCUS_SASH,
#line 8288
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8285
            .ability = ABILITY_MOXIE,
#line 8286
            .lvl = 54,
#line 8287
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8289
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8295
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8296
        .trainerName = _("SAMUEL"),
#line 8297
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8298
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8300
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8301
        .doubleBattle = FALSE,
#line 8302
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8304
            .species = SPECIES_SLOWKING,
#line 8304
            .gender = TRAINER_MON_MALE,
#line 8304
            .heldItem = ITEM_LIFE_ORB,
#line 8308
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8305
            .ability = ABILITY_REGENERATOR,
#line 8306
            .lvl = 54,
#line 8307
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8309
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8314
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8314
            .heldItem = ITEM_ROCKY_HELMET,
#line 8318
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8315
            .ability = ABILITY_REGENERATOR,
#line 8316
            .lvl = 54,
#line 8317
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8318
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8323
            .species = SPECIES_GLISCOR,
#line 8323
            .gender = TRAINER_MON_FEMALE,
#line 8323
            .heldItem = ITEM_TOXIC_ORB,
#line 8327
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8324
            .ability = ABILITY_POISON_HEAL,
#line 8325
            .lvl = 54,
#line 8326
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8328
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8333
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8333
            .heldItem = ITEM_ASSAULT_VEST,
#line 8337
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8334
            .ability = ABILITY_CLEAR_BODY,
#line 8335
            .lvl = 54,
#line 8336
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8338
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8343
            .species = SPECIES_HONCHKROW,
#line 8343
            .gender = TRAINER_MON_MALE,
#line 8343
            .heldItem = ITEM_FOCUS_SASH,
#line 8347
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8344
            .ability = ABILITY_MOXIE,
#line 8345
            .lvl = 54,
#line 8346
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8348
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8354
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8355
        .trainerName = _("SAMUEL"),
#line 8356
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8357
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8359
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8360
        .doubleBattle = FALSE,
#line 8361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8363
            .species = SPECIES_SLOWKING,
#line 8363
            .gender = TRAINER_MON_MALE,
#line 8363
            .heldItem = ITEM_LIFE_ORB,
#line 8367
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8364
            .ability = ABILITY_REGENERATOR,
#line 8365
            .lvl = 54,
#line 8366
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8368
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8373
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8373
            .heldItem = ITEM_ROCKY_HELMET,
#line 8377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8374
            .ability = ABILITY_REGENERATOR,
#line 8375
            .lvl = 54,
#line 8376
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8377
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8382
            .species = SPECIES_GLISCOR,
#line 8382
            .gender = TRAINER_MON_FEMALE,
#line 8382
            .heldItem = ITEM_TOXIC_ORB,
#line 8386
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8383
            .ability = ABILITY_POISON_HEAL,
#line 8384
            .lvl = 54,
#line 8385
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8387
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8392
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8392
            .heldItem = ITEM_ASSAULT_VEST,
#line 8396
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8393
            .ability = ABILITY_CLEAR_BODY,
#line 8394
            .lvl = 54,
#line 8395
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8397
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8402
            .species = SPECIES_HONCHKROW,
#line 8402
            .gender = TRAINER_MON_MALE,
#line 8402
            .heldItem = ITEM_FOCUS_SASH,
#line 8406
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8403
            .ability = ABILITY_MOXIE,
#line 8404
            .lvl = 54,
#line 8405
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8407
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8413
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8414
        .trainerName = _("MAY"),
#line 8415
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8416
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8417
F_TRAINER_FEMALE | 
#line 8418
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8419
        .doubleBattle = FALSE,
#line 8420
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8422
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8424
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8423
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8426
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8428
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8427
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8430
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8432
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8431
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8434
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8435
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8438
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8439
        .trainerName = _("MAY"),
#line 8440
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8441
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8442
F_TRAINER_FEMALE | 
#line 8443
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8444
        .doubleBattle = FALSE,
#line 8445
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8447
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8449
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8448
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8451
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8452
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8455
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8457
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8456
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8459
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8461
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8460
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8463
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8464
        .trainerName = _("MAY"),
#line 8465
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8466
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8467
F_TRAINER_FEMALE | 
#line 8468
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8469
        .doubleBattle = FALSE,
#line 8470
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8472
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8474
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8473
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8476
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8478
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8477
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8480
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8482
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8481
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8484
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8486
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8485
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8488
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8489
        .trainerName = _("JONAH"),
#line 8490
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8491
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8493
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8494
        .doubleBattle = FALSE,
#line 8495
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8497
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8499
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8498
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8501
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8503
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8502
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8505
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8507
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8506
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8509
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8510
        .trainerName = _("HENRY"),
#line 8511
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8512
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8514
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8515
        .doubleBattle = FALSE,
#line 8516
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8518
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8520
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8519
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8522
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8524
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8523
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8526
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8527
        .trainerName = _("ROGER"),
#line 8528
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8529
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8531
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8532
        .doubleBattle = FALSE,
#line 8533
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8535
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8537
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8536
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8539
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8540
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8543
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8544
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8547
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8548
        .trainerName = _("ALEXA"),
#line 8549
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8550
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8551
F_TRAINER_FEMALE | 
#line 8552
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8553
        .items = { ITEM_FULL_RESTORE },
#line 8554
        .doubleBattle = FALSE,
#line 8555
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8557
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8559
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8558
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8561
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8563
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8562
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8565
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8566
        .trainerName = _("RUBEN"),
#line 8567
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8568
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8570
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8571
        .items = { ITEM_HYPER_POTION },
#line 8572
        .doubleBattle = FALSE,
#line 8573
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8575
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8577
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8576
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8579
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8581
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8580
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8583
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8584
        .trainerName = _("KOJI"),
#line 8585
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8586
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8588
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8589
        .doubleBattle = FALSE,
#line 8590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8592
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8593
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8596
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8597
        .trainerName = _("WAYNE"),
#line 8598
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8599
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8601
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8602
        .doubleBattle = FALSE,
#line 8603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8605
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8606
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8609
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8610
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8613
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8614
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8617
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8618
        .trainerName = _("AIDAN"),
#line 8619
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8620
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8622
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8623
        .doubleBattle = FALSE,
#line 8624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8626
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8627
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8630
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8631
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8634
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8635
        .trainerName = _("REED"),
#line 8636
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8637
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8639
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8640
        .doubleBattle = FALSE,
#line 8641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8643
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8644
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8647
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8648
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8651
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8652
        .trainerName = _("TISHA"),
#line 8653
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8654
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8655
F_TRAINER_FEMALE | 
#line 8656
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8657
        .doubleBattle = FALSE,
#line 8658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8660
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8661
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8664
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8665
        .trainerName = _("TORI & TIA"),
#line 8666
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8667
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8669
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8670
        .doubleBattle = TRUE,
#line 8671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8673
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8674
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8677
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8678
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8681
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8682
        .trainerName = _("KIM & IRIS"),
#line 8683
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8684
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8686
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8687
        .doubleBattle = TRUE,
#line 8688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8690
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8691
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8694
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8695
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8698
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8699
        .trainerName = _("TYRA & IVY"),
#line 8700
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8701
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8703
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8704
        .doubleBattle = TRUE,
#line 8705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8707
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8708
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8711
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8712
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8716
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8717
        .trainerName = _("MEL & PAUL"),
#line 8718
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8719
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8721
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8722
        .doubleBattle = TRUE,
#line 8723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8725
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8726
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8729
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8730
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8733
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8734
        .trainerName = _("JOHN & JAY"),
#line 8735
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8736
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8738
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8739
        .doubleBattle = TRUE,
#line 8740
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8742
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8744
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8743
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8746
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8748
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8747
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8750
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8751
        .trainerName = _("RELI & IAN"),
#line 8752
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8753
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8755
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8756
        .doubleBattle = TRUE,
#line 8757
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8759
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8760
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8763
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8764
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8767
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8768
        .trainerName = _("LILA & ROY"),
#line 8769
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8770
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8772
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8773
        .doubleBattle = TRUE,
#line 8774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8776
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8777
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8780
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8782
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8781
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8784
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8785
        .trainerName = _("LISA & RAY"),
#line 8786
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8787
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8789
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8790
        .doubleBattle = TRUE,
#line 8791
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8793
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8794
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8797
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8798
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8801
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8802
        .trainerName = _("CHRIS"),
#line 8803
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8804
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8806
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8807
        .doubleBattle = FALSE,
#line 8808
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8810
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8812
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8811
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8814
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8815
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8818
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8820
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8819
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8822
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8824
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8823
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8826
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8827
        .trainerName = _("DAWSON"),
#line 8828
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8829
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8831
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8832
        .doubleBattle = FALSE,
#line 8833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8835
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8835
            .heldItem = ITEM_NUGGET,
#line 8837
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8836
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8839
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8840
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8843
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8844
        .trainerName = _("SARAH"),
#line 8845
        .trainerClass = TRAINER_CLASS_LADY,
#line 8846
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8847
F_TRAINER_FEMALE | 
#line 8848
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8849
        .items = { ITEM_FULL_RESTORE },
#line 8850
        .doubleBattle = FALSE,
#line 8851
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8853
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8854
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8857
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8857
            .heldItem = ITEM_NUGGET,
#line 8859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8858
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8861
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8862
        .trainerName = _("DARIAN"),
#line 8863
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8864
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8866
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8867
        .doubleBattle = FALSE,
#line 8868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8870
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8871
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8874
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8875
        .trainerName = _("HAILEY"),
#line 8876
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8877
        .trainerPic = TRAINER_PIC_TUBER_F,
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
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8884
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8887
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8888
        .trainerName = _("CHANDLER"),
#line 8889
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8890
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8892
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8893
        .doubleBattle = FALSE,
#line 8894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8896
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8897
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8900
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8901
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8904
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8905
        .trainerName = _("KALEB"),
#line 8906
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8907
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8909
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8910
        .doubleBattle = FALSE,
#line 8911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8913
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .heldItem = ITEM_ORAN_BERRY,
#line 8915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8914
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8917
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8917
            .heldItem = ITEM_ORAN_BERRY,
#line 8919
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8918
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8921
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8922
        .trainerName = _("JOSEPH"),
#line 8923
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8924
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8926
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8927
        .doubleBattle = FALSE,
#line 8928
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8930
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8931
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8934
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8935
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8938
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8939
        .trainerName = _("ALYSSA"),
#line 8940
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8941
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8942
F_TRAINER_FEMALE | 
#line 8943
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8944
        .doubleBattle = FALSE,
#line 8945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8947
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8948
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8951
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8952
        .trainerName = _("MARCOS"),
#line 8953
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8954
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8956
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8957
        .doubleBattle = FALSE,
#line 8958
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8960
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8962
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8961
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8964
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8965
        .trainerName = _("RHETT"),
#line 8966
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8967
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8969
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8970
        .doubleBattle = FALSE,
#line 8971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8973
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8975
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8974
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8977
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8978
        .trainerName = _("TYRON"),
#line 8979
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8980
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8982
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8983
        .doubleBattle = FALSE,
#line 8984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8986
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8987
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8990
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8991
        .trainerName = _("CELINA"),
#line 8992
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8993
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8994
F_TRAINER_FEMALE | 
#line 8995
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8996
        .doubleBattle = FALSE,
#line 8997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8999
            .species = SPECIES_SUNKERN,
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
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 9004
        .trainerName = _("BIANCA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9012
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9013
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9016
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9017
        .trainerName = _("HAYDEN"),
#line 9018
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9019
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9021
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9022
        .doubleBattle = FALSE,
#line 9023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9025
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9026
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9029
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9030
        .trainerName = _("SOPHIE"),
#line 9031
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9032
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9033
F_TRAINER_FEMALE | 
#line 9034
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9035
        .doubleBattle = FALSE,
#line 9036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9038
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9040
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9039
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9042
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9043
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9046
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9047
        .trainerName = _("COBY"),
#line 9048
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9049
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9051
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9052
        .doubleBattle = FALSE,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9055
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9056
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9059
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9060
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9063
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9064
        .trainerName = _("LAWRENCE"),
#line 9065
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9066
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9068
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9069
        .doubleBattle = FALSE,
#line 9070
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9072
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9073
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9076
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9078
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9077
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9080
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9081
        .trainerName = _("WYATT"),
#line 9082
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9083
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9085
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9086
        .doubleBattle = FALSE,
#line 9087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9089
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9090
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9093
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9095
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9094
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9097
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9098
        .trainerName = _("ANGELINA"),
#line 9099
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9100
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9101
F_TRAINER_FEMALE | 
#line 9102
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9103
        .doubleBattle = FALSE,
#line 9104
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9106
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9107
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9110
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9112
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9111
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9114
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9115
        .trainerName = _("KAI"),
#line 9116
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9117
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9119
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9120
        .doubleBattle = FALSE,
#line 9121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9123
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9124
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9127
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9128
        .trainerName = _("CHARLOTTE"),
#line 9129
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9130
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9131
F_TRAINER_FEMALE | 
#line 9132
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9133
        .doubleBattle = FALSE,
#line 9134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9136
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9138
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9137
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9140
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9141
        .trainerName = _("DEANDRE"),
#line 9142
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9143
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9145
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9146
        .doubleBattle = FALSE,
#line 9147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9149
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9151
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9150
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9153
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9155
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9154
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9157
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9159
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9158
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9161
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
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
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9172
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9171
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9174
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9183
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9185
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9184
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9187
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9188
        .trainerName = _("GRUNT"),
#line 9189
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9190
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9192
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9193
        .doubleBattle = FALSE,
#line 9194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9196
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9198
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9197
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9200
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9201
        .trainerName = _("GRUNT"),
#line 9202
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9203
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9205
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9206
        .doubleBattle = FALSE,
#line 9207
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9209
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9211
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9210
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9213
            .species = SPECIES_WEEZING,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9226
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9227
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9230
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9232
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9231
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9234
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
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
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9244
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9247
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
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
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9258
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9257
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9260
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
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
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9273
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
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
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9283
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9286
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
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
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9296
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9299
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
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
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9310
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9309
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9312
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9313
        .trainerName = _("GRUNT"),
#line 9314
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9315
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9323
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9322
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9325
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9326
        .trainerName = _("GRUNT"),
#line 9327
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9328
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9336
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9335
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9338
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
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
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9349
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9348
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9351
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9352
        .trainerName = _("GRUNT"),
#line 9353
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9354
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9355
F_TRAINER_FEMALE | 
#line 9356
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9357
        .doubleBattle = FALSE,
#line 9358
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9360
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9361
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9364
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9365
        .trainerName = _("GRUNT"),
#line 9366
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9367
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9368
F_TRAINER_FEMALE | 
#line 9369
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9370
        .doubleBattle = FALSE,
#line 9371
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9373
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9375
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9374
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9377
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9378
        .trainerName = _("TABITHA"),
#line 9379
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9380
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9382
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9383
        .doubleBattle = FALSE,
#line 9384
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9386
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9387
            .ability = ABILITY_DROUGHT,
#line 9388
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9390
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9395
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9395
            .heldItem = ITEM_POISON_BARB,
#line 9398
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9396
            .ability = ABILITY_LEVITATE,
#line 9397
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9399
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9404
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9404
            .heldItem = ITEM_LIFE_ORB,
#line 9407
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9405
            .ability = ABILITY_LEVITATE,
#line 9406
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9408
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9413
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9413
            .heldItem = ITEM_FOCUS_SASH,
#line 9416
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9414
            .ability = ABILITY_OWN_TEMPO,
#line 9415
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9417
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9422
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9423
        .trainerName = _("DARCY"),
#line 9424
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9425
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9426
F_TRAINER_FEMALE | 
#line 9427
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9428
        .items = { ITEM_HYPER_POTION },
#line 9429
        .doubleBattle = FALSE,
#line 9430
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9432
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9433
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9436
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9437
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9440
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9441
        .trainerName = _("MAXIE"),
#line 9442
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9443
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9445
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9446
        .doubleBattle = FALSE,
#line 9447
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9449
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9449
            .heldItem = ITEM_ROCKY_HELMET,
#line 9452
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9450
            .ability = ABILITY_ROCK_HEAD,
#line 9451
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9452
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9457
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9457
            .heldItem = ITEM_AIR_BALLOON,
#line 9460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9458
            .ability = ABILITY_HEAVY_METAL,
#line 9459
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9460
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9465
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9465
            .heldItem = ITEM_SHARP_BEAK,
#line 9468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9466
            .ability = ABILITY_INNER_FOCUS,
#line 9467
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9468
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9473
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9474
        .trainerName = _("PETE"),
#line 9475
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9476
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9478
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9479
        .doubleBattle = FALSE,
#line 9480
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9482
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9483
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9486
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9487
        .trainerName = _("ISABELLE"),
#line 9488
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9489
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9490
F_TRAINER_FEMALE | 
#line 9491
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9492
        .doubleBattle = FALSE,
#line 9493
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9495
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9496
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9499
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9500
        .trainerName = _("ANDRES"),
#line 9501
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9502
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9504
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9505
        .doubleBattle = FALSE,
#line 9506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9508
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9509
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9512
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9513
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9516
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9517
        .trainerName = _("JOSUE"),
#line 9518
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9519
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9521
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9522
        .doubleBattle = FALSE,
#line 9523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9525
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9526
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9529
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9530
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9533
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9534
        .trainerName = _("CAMRON"),
#line 9535
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9536
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9538
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9539
        .doubleBattle = FALSE,
#line 9540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9542
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9543
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9546
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9547
        .trainerName = _("CORY"),
#line 9548
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9549
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9551
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9552
        .doubleBattle = FALSE,
#line 9553
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9555
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9557
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9556
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9559
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9560
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9563
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9567
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9568
        .trainerName = _("CAROLINA"),
#line 9569
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9570
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9571
F_TRAINER_FEMALE | 
#line 9572
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9573
        .items = { ITEM_HYPER_POTION },
#line 9574
        .doubleBattle = FALSE,
#line 9575
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9577
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9579
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9578
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9581
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9583
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9582
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9585
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9587
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9586
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9589
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9590
        .trainerName = _("ELIJAH"),
#line 9591
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9592
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9594
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9595
        .doubleBattle = FALSE,
#line 9596
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9598
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9600
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9599
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9602
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9603
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9606
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9607
        .trainerName = _("CELIA"),
#line 9608
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9609
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9610
F_TRAINER_FEMALE | 
#line 9611
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9612
        .doubleBattle = FALSE,
#line 9613
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9615
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9616
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9619
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9620
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9623
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9624
        .trainerName = _("BRYAN"),
#line 9625
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9626
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9628
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9629
        .doubleBattle = FALSE,
#line 9630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9632
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9633
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9636
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9637
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9640
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9641
        .trainerName = _("BRANDEN"),
#line 9642
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9643
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9645
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9646
        .doubleBattle = FALSE,
#line 9647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9649
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9651
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9650
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9653
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9655
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9654
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9657
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9658
        .trainerName = _("BRYANT"),
#line 9659
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9660
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9662
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9663
        .doubleBattle = FALSE,
#line 9664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9666
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9667
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9670
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9671
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9674
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9675
        .trainerName = _("SHAYLA"),
#line 9676
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9677
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9678
F_TRAINER_FEMALE | 
#line 9679
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9680
        .doubleBattle = FALSE,
#line 9681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9683
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9684
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9687
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9689
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9688
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9691
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9692
        .trainerName = _("KYRA"),
#line 9693
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9694
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9695
F_TRAINER_FEMALE | 
#line 9696
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9697
        .doubleBattle = FALSE,
#line 9698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9700
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9701
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9704
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9705
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9708
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9709
        .trainerName = _("JAIDEN"),
#line 9710
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9711
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9713
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9714
        .doubleBattle = FALSE,
#line 9715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9717
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9718
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9721
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9722
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9725
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9726
        .trainerName = _("ALIX"),
#line 9727
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9728
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9729
F_TRAINER_FEMALE | 
#line 9730
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9731
        .doubleBattle = FALSE,
#line 9732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9734
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9735
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9738
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9739
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9742
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9743
        .trainerName = _("HELENE"),
#line 9744
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9745
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9746
F_TRAINER_FEMALE | 
#line 9747
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9748
        .doubleBattle = FALSE,
#line 9749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9751
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9752
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9755
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9756
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9759
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9760
        .trainerName = _("MARLENE"),
#line 9761
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9762
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9763
F_TRAINER_FEMALE | 
#line 9764
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9765
        .doubleBattle = FALSE,
#line 9766
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9768
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9769
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9772
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9773
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9776
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9777
        .trainerName = _("DEVAN"),
#line 9778
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9779
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9781
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9782
        .doubleBattle = FALSE,
#line 9783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9785
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9787
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9786
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9789
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9790
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9793
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9794
        .trainerName = _("JOHNSON"),
#line 9795
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9796
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9798
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9799
        .doubleBattle = FALSE,
#line 9800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9802
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9804
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9803
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9806
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9807
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9810
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9811
        .trainerName = _("MELINA"),
#line 9812
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9813
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9814
F_TRAINER_FEMALE | 
#line 9815
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9816
        .doubleBattle = FALSE,
#line 9817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9819
            .species = SPECIES_BELLSPROUT,
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
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9824
        .trainerName = _("MELISSA"),
#line 9825
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9826
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9827
F_TRAINER_FEMALE | 
#line 9828
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9829
        .doubleBattle = FALSE,
#line 9830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9832
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9833
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9836
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9837
        .trainerName = _("BRANDI"),
#line 9838
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9839
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9840
F_TRAINER_FEMALE | 
#line 9841
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9842
        .doubleBattle = FALSE,
#line 9843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9845
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9846
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9849
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9850
        .trainerName = _("AISHA"),
#line 9851
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9852
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9853
F_TRAINER_FEMALE | 
#line 9854
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9855
        .doubleBattle = FALSE,
#line 9856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9858
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9859
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9862
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9863
        .trainerName = _("MAKAYLA"),
#line 9864
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9865
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9866
F_TRAINER_FEMALE | 
#line 9867
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9868
        .items = { ITEM_HYPER_POTION },
#line 9869
        .doubleBattle = FALSE,
#line 9870
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9872
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9873
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9876
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9877
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9880
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9881
        .trainerName = _("FABIAN"),
#line 9882
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9883
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9885
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9886
        .doubleBattle = FALSE,
#line 9887
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9889
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9890
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9893
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9894
        .trainerName = _("DAYTON"),
#line 9895
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9896
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9898
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9899
        .doubleBattle = FALSE,
#line 9900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9902
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9903
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9906
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9907
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9910
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9911
        .trainerName = _("RACHEL"),
#line 9912
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9913
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9914
F_TRAINER_FEMALE | 
#line 9915
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9916
        .doubleBattle = FALSE,
#line 9917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9919
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9920
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9923
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9924
        .trainerName = _("LEONEL"),
#line 9925
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9926
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9928
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9929
        .items = { ITEM_HYPER_POTION },
#line 9930
        .doubleBattle = FALSE,
#line 9931
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9933
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9935
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9934
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9937
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9938
        .trainerName = _("CALLIE"),
#line 9939
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9940
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9941
F_TRAINER_FEMALE | 
#line 9942
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9943
        .doubleBattle = FALSE,
#line 9944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9946
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9947
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9950
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9951
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9954
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9955
        .trainerName = _("CALE"),
#line 9956
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9957
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9959
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9960
        .doubleBattle = FALSE,
#line 9961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9963
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9965
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9964
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9967
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9968
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9971
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9972
        .trainerName = _("MYLES"),
#line 9973
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9974
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9976
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9977
        .doubleBattle = FALSE,
#line 9978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9980
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9982
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9981
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9984
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9986
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9985
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9988
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9990
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9989
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9992
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9993
        .trainerName = _("PAT"),
#line 9994
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9995
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9996
F_TRAINER_FEMALE | 
#line 9997
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9998
        .doubleBattle = FALSE,
#line 9999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10001
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10003
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10002
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10005
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10007
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10006
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10009
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10011
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10010
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10014
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10015
        .trainerName = _("CRISTIN"),
#line 10016
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10017
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10018
F_TRAINER_FEMALE | 
#line 10019
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10020
        .items = { ITEM_HYPER_POTION },
#line 10021
        .doubleBattle = FALSE,
#line 10022
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10024
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10026
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10025
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10028
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10030
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10029
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10032
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10033
        .trainerName = _("MAY"),
#line 10034
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10035
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10036
F_TRAINER_FEMALE | 
#line 10037
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10038
        .doubleBattle = FALSE,
#line 10039
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10041
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10043
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10042
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10045
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10047
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10046
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10049
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10050
        .trainerName = _("MAY"),
#line 10051
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10052
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10053
F_TRAINER_FEMALE | 
#line 10054
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10055
        .doubleBattle = FALSE,
#line 10056
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10058
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10060
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10059
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10062
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10064
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10063
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10066
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10075
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .heldItem = ITEM_EVIOLITE,
#line 10077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10076
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10078
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10079
        .trainerName = _("GRUNT"),
#line 10080
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10081
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10083
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10084
        .doubleBattle = FALSE,
#line 10085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10087
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10089
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10088
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10090
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10091
        .trainerName = _("GRUNT"),
#line 10092
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10093
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10095
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10096
        .doubleBattle = FALSE,
#line 10097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10099
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10101
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10100
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10102
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10103
        .trainerName = _("GRUNT"),
#line 10104
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10105
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10107
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10108
        .doubleBattle = FALSE,
#line 10109
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10111
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10113
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10112
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10114
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10115
        .trainerName = _("GRUNT"),
#line 10116
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10117
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10119
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10120
        .doubleBattle = FALSE,
#line 10121
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10123
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10125
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10124
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10126
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10128
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10127
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10129
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10130
        .trainerName = _("GRUNT"),
#line 10131
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10132
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10134
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10135
        .doubleBattle = FALSE,
#line 10136
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10138
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10140
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10139
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10142
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10143
        .trainerName = _("GRUNT"),
#line 10144
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10145
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10147
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10148
        .doubleBattle = FALSE,
#line 10149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10151
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10152
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10154
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10155
        .trainerName = _("GRUNT"),
#line 10156
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10157
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10159
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10160
        .doubleBattle = FALSE,
#line 10161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10163
            .species = SPECIES_SHUPPET,
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
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
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
            .species = SPECIES_SPOINK,
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
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10182
        .trainerName = _("GRUNT"),
#line 10183
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10184
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10186
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10187
        .doubleBattle = FALSE,
#line 10188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10190
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10192
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10191
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10193
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10194
        .trainerName = _("GRUNT"),
#line 10195
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10196
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10198
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10199
        .doubleBattle = FALSE,
#line 10200
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10202
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10204
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10203
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10205
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10207
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10206
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10208
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10209
        .trainerName = _("GRUNT"),
#line 10210
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10211
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10213
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10214
        .doubleBattle = FALSE,
#line 10215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10217
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10219
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10218
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10220
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10222
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10221
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10223
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10224
        .trainerName = _("TATE&LIZA"),
#line 10225
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10226
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10228
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10229
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10230
        .doubleBattle = TRUE,
#line 10231
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10233
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10235
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10234
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10236
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10241
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10243
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10242
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10244
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10249
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10251
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10250
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10252
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10257
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10257
            .heldItem = ITEM_CHESTO_BERRY,
#line 10259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10258
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10260
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10265
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10265
            .heldItem = ITEM_CHESTO_BERRY,
#line 10267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10266
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10268
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10273
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10273
            .heldItem = ITEM_SITRUS_BERRY,
#line 10275
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10274
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10276
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10281
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10282
        .trainerName = _("ANGELO"),
#line 10283
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10284
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10286
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10287
        .doubleBattle = FALSE,
#line 10288
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10290
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10292
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10291
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10294
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10296
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10295
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10298
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10299
        .trainerName = _("DARIUS"),
#line 10300
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10301
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10303
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10304
        .doubleBattle = FALSE,
#line 10305
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10307
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10309
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10308
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10311
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10312
        .trainerName = _("STEVEN"),
#line 10313
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10314
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10316
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10317
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10318
        .doubleBattle = FALSE,
#line 10319
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10321
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10323
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10322
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10324
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10329
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10331
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10330
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10332
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10337
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10339
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10338
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10340
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10345
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10347
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10346
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10348
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10353
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10354
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10356
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10361
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10361
            .heldItem = ITEM_SITRUS_BERRY,
#line 10363
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10362
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10364
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10369
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10370
        .trainerName = _("ANABEL"),
#line 10371
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10372
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10373
F_TRAINER_FEMALE | 
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
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10383
        .trainerName = _("TUCKER"),
#line 10384
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10385
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
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
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10396
        .trainerName = _("SPENSER"),
#line 10397
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10398
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10400
            TRAINER_ENCOUNTER_MUSIC_MALE,
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
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10409
        .trainerName = _("GRETA"),
#line 10410
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10411
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10412
F_TRAINER_FEMALE | 
#line 10413
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10414
        .doubleBattle = FALSE,
#line 10415
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10417
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10418
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10421
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10422
        .trainerName = _("GRUNT"),
#line 10423
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10424
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10426
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10427
        .doubleBattle = FALSE,
#line 10428
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10430
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10431
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10434
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10435
        .trainerName = _("GHOSTESS"),
#line 10436
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10437
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10438
F_TRAINER_FEMALE | 
#line 10439
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10440
        .doubleBattle = FALSE,
#line 10441
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10443
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10443
            .heldItem = ITEM_TWISTED_SPOON,
#line 10446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10444
            .ability = ABILITY_THICK_FAT,
#line 10445
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10446
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10451
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10451
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10452
            .ability = ABILITY_WONDER_SKIN,
#line 10453
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10454
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10459
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10459
            .heldItem = ITEM_METRONOME,
#line 10462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10460
            .ability = ABILITY_ROCK_HEAD,
#line 10461
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10462
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10467
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10467
            .heldItem = ITEM_ASSAULT_VEST,
#line 10470
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10468
            .ability = ABILITY_CURSED_BODY,
#line 10469
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10470
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10475
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10476
        .trainerName = _("JORDAN"),
#line 10477
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10478
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10480
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10481
        .doubleBattle = FALSE,
#line 10482
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10484
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10485
            .ability = ABILITY_CHLOROPHYLL,
#line 10486
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10487
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10492
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10492
            .heldItem = ITEM_EVIOLITE,
#line 10495
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10493
            .ability = ABILITY_PRESSURE,
#line 10494
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10495
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10500
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10500
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10503
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10501
            .ability = ABILITY_LIQUID_OOZE,
#line 10502
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10503
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10508
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10508
            .heldItem = ITEM_QUICK_CLAW,
#line 10511
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10509
            .ability = ABILITY_OBLIVIOUS,
#line 10510
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10511
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10516
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10516
            .heldItem = ITEM_SHARP_BEAK,
#line 10519
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10517
            .ability = ABILITY_INNER_FOCUS,
#line 10518
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10519
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10524
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10525
        .trainerName = _("JORDAN"),
#line 10526
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10527
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10529
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10530
        .doubleBattle = FALSE,
#line 10531
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10533
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10533
            .heldItem = ITEM_WIDE_LENS,
#line 10536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10534
            .ability = ABILITY_CHLOROPHYLL,
#line 10535
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10536
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10541
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10541
            .heldItem = ITEM_LIFE_ORB,
#line 10544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10542
            .ability = ABILITY_PRESSURE,
#line 10543
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10544
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10549
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10549
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10552
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10550
            .ability = ABILITY_LIQUID_OOZE,
#line 10551
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10552
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10557
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10557
            .heldItem = ITEM_CHOICE_SPECS,
#line 10560
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10558
            .ability = ABILITY_OBLIVIOUS,
#line 10559
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10560
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10565
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10565
            .heldItem = ITEM_SHARP_BEAK,
#line 10568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10566
            .ability = ABILITY_INNER_FOCUS,
#line 10567
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10568
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10573
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10573
            .heldItem = ITEM_ASSAULT_VEST,
#line 10576
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10574
            .ability = ABILITY_AIR_LOCK,
#line 10575
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10576
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10581
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10582
        .trainerName = _("GHOSTESS"),
#line 10583
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10584
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10585
F_TRAINER_FEMALE | 
#line 10586
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10587
        .doubleBattle = FALSE,
#line 10588
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10590
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10590
            .heldItem = ITEM_EXPERT_BELT,
#line 10593
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10591
            .ability = ABILITY_THICK_FAT,
#line 10592
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10593
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10598
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10598
            .heldItem = ITEM_MUSCLE_BAND,
#line 10601
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10599
            .ability = ABILITY_WONDER_SKIN,
#line 10600
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10601
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10606
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10606
            .heldItem = ITEM_WIDE_LENS,
#line 10609
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10607
            .ability = ABILITY_INTIMIDATE,
#line 10608
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10609
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10614
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10614
            .heldItem = ITEM_ASSAULT_VEST,
#line 10617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10615
            .ability = ABILITY_CURSED_BODY,
#line 10616
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10617
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10622
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10623
        .trainerName = _("GRUNT"),
#line 10624
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10625
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10627
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10628
        .doubleBattle = FALSE,
#line 10629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10631
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10633
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10632
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10634
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10635
        .trainerName = _("GRUNT"),
#line 10636
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10637
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10639
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10640
        .doubleBattle = FALSE,
#line 10641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10643
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10645
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10644
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10646
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10647
        .trainerName = _("GRUNT"),
#line 10648
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10649
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10651
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10652
        .doubleBattle = FALSE,
#line 10653
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10655
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10656
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10658
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10659
        .trainerName = _("GRUNT"),
#line 10660
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10661
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10663
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10664
        .doubleBattle = FALSE,
#line 10665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10667
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10669
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10668
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10670
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10671
        .trainerName = _("CORY"),
#line 10672
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10673
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10675
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10676
        .doubleBattle = FALSE,
#line 10677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10679
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10681
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10680
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10683
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10685
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10684
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10687
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10689
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10688
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10691
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10692
        .trainerName = _("CORY"),
#line 10693
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10694
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10696
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10697
        .doubleBattle = FALSE,
#line 10698
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10700
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10702
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10701
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10704
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10706
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10705
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10708
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10710
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10709
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10712
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10713
        .trainerName = _("MARIELA"),
#line 10714
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10715
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10716
F_TRAINER_FEMALE | 
#line 10717
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10718
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10720
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10721
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10724
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10725
        .trainerName = _("ALVARO"),
#line 10726
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10727
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10729
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10730
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10732
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10733
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10736
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10737
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10740
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10741
        .trainerName = _("EVERETT"),
#line 10742
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10743
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10745
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10746
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10748
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10749
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10752
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10753
        .trainerName = _("RED"),
#line 10754
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10755
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10757
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10758
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10760
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10761
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10764
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10765
        .trainerName = _("LEAF"),
#line 10766
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10767
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10768
F_TRAINER_FEMALE | 
#line 10769
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10770
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10772
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10773
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10776
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10777
        .trainerName = _("SAMUEL"),
#line 10778
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10779
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10781
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10782
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10784
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10785
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10788
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10789
        .trainerName = _("MAY"),
#line 10790
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10791
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10792
F_TRAINER_FEMALE | 
#line 10793
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10794
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10796
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10797
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
