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
            .lvl = 57,
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
            .lvl = 40,
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
            .lvl = 61,
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
            .lvl = 61,
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
            .lvl = 56,
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
            .lvl = 56,
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
            .lvl = 56,
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
            .lvl = 61,
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
            .lvl = 60,
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
            .lvl = 61,
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
            .lvl = 61,
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
            .lvl = 61,
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
            .lvl = 59,
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
            .lvl = 59,
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
    [DIFFICULTY_NORMAL][TRAINER_MARCUS] =
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
            .lvl = 39,
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
            .lvl = 39,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
    [DIFFICULTY_NORMAL][TRAINER_MATTI] =
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
            .lvl = 40,
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
            .lvl = 55,
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
            .lvl = 55,
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
            .lvl = 56,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 48,
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
            .lvl = 48,
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
            .lvl = 48,
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
            .lvl = 55,
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
            .lvl = 57,
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
            .lvl = 55,
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
            .lvl = 46,
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
            .lvl = 46,
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
            .lvl = 46,
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
            .lvl = 57,
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
            .lvl = 55,
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
            .lvl = 55,
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
            .lvl = 46,
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
            .lvl = 46,
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
            .lvl = 46,
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
    [DIFFICULTY_NORMAL][TRAINER_ALEC] =
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
    [DIFFICULTY_NORMAL][TRAINER_GARRETT] =
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
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
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
    [DIFFICULTY_NORMAL][TRAINER_GRAYSON] =
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
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
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
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
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
            .lvl = 61,
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
            .lvl = 61,
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
            .lvl = 61,
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
            .lvl = 61,
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
            .lvl = 61,
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
#line 3614
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3614
            .heldItem = ITEM_OCCA_BERRY,
#line 3617
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3615
            .ability = ABILITY_INTIMIDATE,
#line 3616
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3617
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3622
    [DIFFICULTY_NORMAL][TRAINER_XANDER] =
    {
#line 3623
        .trainerName = _("XANDER"),
#line 3624
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3625
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3627
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3628
        .doubleBattle = TRUE,
#line 3629
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3631
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3631
            .heldItem = ITEM_LEFTOVERS,
#line 3635
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3632
            .ability = ABILITY_SHADOW_TAG,
#line 3633
            .lvl = 64,
#line 3634
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3635
                MOVE_TRICK_ROOM,
                MOVE_PROTECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3640
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3640
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3644
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3641
            .ability = ABILITY_CURSED_BODY,
#line 3642
            .lvl = 64,
#line 3643
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3644
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3649
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3649
            .heldItem = ITEM_CHOICE_SPECS,
#line 3653
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3650
            .ability = ABILITY_FLASH_FIRE,
#line 3651
            .lvl = 64,
#line 3652
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3653
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3658
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .heldItem = ITEM_SITRUS_BERRY,
#line 3662
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3659
            .ability = ABILITY_LEVITATE,
#line 3660
            .lvl = 64,
#line 3661
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3662
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3667
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3667
            .heldItem = ITEM_LEFTOVERS,
#line 3671
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3668
            .ability = ABILITY_NO_GUARD,
#line 3669
            .lvl = 64,
#line 3670
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3671
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3676
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3676
            .heldItem = ITEM_SITRUS_BERRY,
#line 3680
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3677
            .ability = ABILITY_MUMMY,
#line 3678
            .lvl = 64,
#line 3679
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3680
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3685
    [DIFFICULTY_NORMAL][TRAINER_JERRY] =
    {
#line 3686
        .trainerName = _("JERRY"),
#line 3687
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3688
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3691
        .doubleBattle = FALSE,
#line 3692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3694
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3696
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3695
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3698
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3699
        .trainerName = _("TED"),
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
            .species = SPECIES_RALTS,
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
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3712
        .trainerName = _("PAUL"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3720
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3722
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3721
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3724
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3726
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3725
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3728
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3730
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3729
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3732
    [DIFFICULTY_NORMAL][TRAINER_KAREN] =
    {
#line 3733
        .trainerName = _("KAREN"),
#line 3734
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3735
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3736
F_TRAINER_FEMALE | 
#line 3737
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3738
        .doubleBattle = FALSE,
#line 3739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3741
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3743
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3742
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3745
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3746
        .trainerName = _("GEORGIA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3754
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3756
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3755
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3758
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3760
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3759
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3762
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3763
        .trainerName = _("KATE & JOY"),
#line 3764
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3765
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3767
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3768
        .doubleBattle = TRUE,
#line 3769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3771
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3772
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3775
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3776
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3780
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG] =
    {
#line 3781
        .trainerName = _("ANNA & MEG"),
#line 3782
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3783
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3785
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3786
        .doubleBattle = TRUE,
#line 3787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3789
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3790
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3793
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3794
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3797
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3798
        .trainerName = _("VICTOR"),
#line 3799
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3800
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3802
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3803
        .doubleBattle = FALSE,
#line 3804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3806
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3806
            .heldItem = ITEM_ORAN_BERRY,
#line 3808
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3807
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3810
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3810
            .heldItem = ITEM_ORAN_BERRY,
#line 3812
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3811
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3814
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL] =
    {
#line 3815
        .trainerName = _("MIGUEL"),
#line 3816
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3817
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3819
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3820
        .doubleBattle = FALSE,
#line 3821
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3823
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3823
            .heldItem = ITEM_ORAN_BERRY,
#line 3825
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3824
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3827
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3828
        .trainerName = _("COLTON"),
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
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3836
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3836
            .heldItem = ITEM_ORAN_BERRY,
#line 3838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3837
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3839
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3844
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3844
            .heldItem = ITEM_ORAN_BERRY,
#line 3846
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3845
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3847
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3852
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3852
            .heldItem = ITEM_ORAN_BERRY,
#line 3854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3853
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3855
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3860
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3860
            .heldItem = ITEM_ORAN_BERRY,
#line 3862
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3861
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3863
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3868
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3868
            .heldItem = ITEM_ORAN_BERRY,
#line 3870
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3869
            .lvl = 30,
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
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3876
            .heldItem = ITEM_ORAN_BERRY,
#line 3878
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3877
            .lvl = 42,
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
        },
    },
#line 3884
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3885
        .trainerName = _("VICTORIA"),
#line 3886
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3887
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3888
F_TRAINER_FEMALE | 
#line 3889
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3890
        .doubleBattle = FALSE,
#line 3891
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3893
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3893
            .heldItem = ITEM_ORAN_BERRY,
#line 3895
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3894
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3897
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3898
        .trainerName = _("VANESSA"),
#line 3899
        .trainerClass = TRAINER_CLASS_POKEFAN,
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3906
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3906
            .heldItem = ITEM_ORAN_BERRY,
#line 3908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3907
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3910
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3911
        .trainerName = _("BETHANY"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3919
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3919
            .heldItem = ITEM_ORAN_BERRY,
#line 3921
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3920
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3923
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3923
            .heldItem = ITEM_ORAN_BERRY,
#line 3925
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3924
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3927
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3927
            .heldItem = ITEM_ORAN_BERRY,
#line 3929
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3928
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3931
    [DIFFICULTY_NORMAL][TRAINER_ISABEL] =
    {
#line 3932
        .trainerName = _("ISABEL"),
#line 3933
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3934
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3935
F_TRAINER_FEMALE | 
#line 3936
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3937
        .doubleBattle = FALSE,
#line 3938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3940
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3940
            .heldItem = ITEM_ORAN_BERRY,
#line 3942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3941
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3944
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3944
            .heldItem = ITEM_ORAN_BERRY,
#line 3946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3945
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3948
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY] =
    {
#line 3949
        .trainerName = _("TIMOTHY"),
#line 3950
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3951
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3953
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3954
        .doubleBattle = FALSE,
#line 3955
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3957
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3959
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3958
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3961
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3962
        .trainerName = _("VICKY"),
#line 3963
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3964
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3965
F_TRAINER_FEMALE | 
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
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3972
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3971
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3974
    [DIFFICULTY_NORMAL][TRAINER_SHELBY] =
    {
#line 3975
        .trainerName = _("SHELBY"),
#line 3976
        .trainerClass = TRAINER_CLASS_EXPERT,
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3983
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3985
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3984
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3987
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3989
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3988
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3991
    [DIFFICULTY_NORMAL][TRAINER_CALVIN] =
    {
#line 3992
        .trainerName = _("CALVIN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4000
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4002
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4001
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4004
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 4005
        .trainerName = _("BILLY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4013
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4014
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4017
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4019
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4018
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4021
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 4022
        .trainerName = _("JOSH"),
#line 4023
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4024
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4026
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4027
        .doubleBattle = FALSE,
#line 4028
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4030
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4032
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4031
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4033
                MOVE_TACKLE,
            },
            },
        },
    },
#line 4035
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 4036
        .trainerName = _("TOMMY"),
#line 4037
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4038
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4040
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4041
        .doubleBattle = FALSE,
#line 4042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4044
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4046
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 4045
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4048
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4050
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 4049
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4052
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 4053
        .trainerName = _("JOEY"),
#line 4054
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4055
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4057
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4058
        .doubleBattle = FALSE,
#line 4059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4061
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4062
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4065
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4066
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4069
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 4070
        .trainerName = _("BEN"),
#line 4071
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4072
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4074
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4075
        .doubleBattle = FALSE,
#line 4076
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4078
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4080
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4079
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4083
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4085
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4084
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4088
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4089
        .trainerName = _("QUINCY"),
#line 4090
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4091
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4093
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4094
        .items = { ITEM_FULL_RESTORE },
#line 4095
        .doubleBattle = FALSE,
#line 4096
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4098
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4100
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4099
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4102
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4104
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4103
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4106
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4107
        .trainerName = _("KATELYNN"),
#line 4108
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4109
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4110
F_TRAINER_FEMALE | 
#line 4111
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4112
        .items = { ITEM_FULL_RESTORE },
#line 4113
        .doubleBattle = FALSE,
#line 4114
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4116
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4118
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4117
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4119
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4124
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4126
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4125
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4127
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4132
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4133
        .trainerName = _("JAYLEN"),
#line 4134
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4135
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4137
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4138
        .doubleBattle = FALSE,
#line 4139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4141
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4142
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4145
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4146
        .trainerName = _("DILLON"),
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
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4155
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4158
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4159
        .trainerName = _("EDDIE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4167
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4168
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4171
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4173
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4172
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4175
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4176
        .trainerName = _("ALLEN"),
#line 4177
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4178
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4180
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4181
        .doubleBattle = FALSE,
#line 4182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4184
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4186
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4185
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4188
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4190
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4189
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4192
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4193
        .trainerName = _("TIMMY"),
#line 4194
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4195
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4197
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4198
        .doubleBattle = FALSE,
#line 4199
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4201
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4202
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4205
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4206
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4209
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4210
        .trainerName = _("FATTY"),
#line 4211
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4212
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4214
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4215
        .doubleBattle = FALSE,
#line 4216
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4217
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4219
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4219
            .heldItem = ITEM_LEFTOVERS,
#line 4223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4220
            .ability = ABILITY_THICK_FAT,
#line 4221
            .lvl = 75,
#line 4222
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4223
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 4228
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .heldItem = ITEM_CHOICE_BAND,
#line 4232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4229
            .ability = ABILITY_INTIMIDATE,
#line 4230
            .lvl = 75,
#line 4231
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4232
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4237
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4237
            .heldItem = ITEM_LIFE_ORB,
#line 4241
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4238
            .ability = ABILITY_OVERGROW,
#line 4239
            .lvl = 75,
#line 4240
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4241
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 4246
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4246
            .heldItem = ITEM_FOCUS_SASH,
#line 4250
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4247
            .ability = ABILITY_MAGIC_GUARD,
#line 4248
            .lvl = 75,
#line 4249
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4250
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4255
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4255
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 4259
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4256
            .ability = ABILITY_STATIC,
#line 4257
            .lvl = 75,
#line 4258
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4259
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4264
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4264
            .heldItem = ITEM_EVIOLITE,
#line 4268
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4265
            .ability = ABILITY_SWIFT_SWIM,
#line 4266
            .lvl = 78,
#line 4267
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4268
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4273
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4274
        .trainerName = _("ANDREW"),
#line 4275
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4276
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4278
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4279
        .doubleBattle = FALSE,
#line 4280
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4282
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4284
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4283
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4286
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4287
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4290
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4292
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4291
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4294
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4295
        .trainerName = _("IVAN"),
#line 4296
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4297
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4299
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4300
        .doubleBattle = FALSE,
#line 4301
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4303
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4304
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4307
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4308
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4311
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4312
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4315
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4316
        .trainerName = _("CLAUDE"),
#line 4317
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4318
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4320
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4321
        .doubleBattle = FALSE,
#line 4322
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4324
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4325
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4328
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4329
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4332
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4333
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4336
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4337
        .trainerName = _("ELLIOT"),
#line 4338
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4339
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4341
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4342
        .doubleBattle = FALSE,
#line 4343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4345
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4346
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4349
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4350
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4353
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4355
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4354
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4357
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4358
        .trainerName = _("NED"),
#line 4359
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4360
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4362
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4363
        .doubleBattle = FALSE,
#line 4364
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4366
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4367
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4370
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4371
        .trainerName = _("DALE"),
#line 4372
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4373
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4375
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4376
        .doubleBattle = FALSE,
#line 4377
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4379
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4380
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4383
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4385
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4384
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4387
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4389
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4388
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4391
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4393
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4392
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4395
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4396
        .trainerName = _("NOLAN"),
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
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4405
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4408
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4409
        .trainerName = _("BARNY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4417
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4418
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4421
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4423
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4422
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4425
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4426
        .trainerName = _("WADE"),
#line 4427
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4428
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4430
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4431
        .doubleBattle = FALSE,
#line 4432
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4434
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4436
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4435
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4437
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4438
        .trainerName = _("ABIGAL"),
#line 4439
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4440
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4441
F_TRAINER_FEMALE | 
#line 4442
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4443
        .doubleBattle = FALSE,
#line 4444
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4446
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4447
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4449
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4450
        .trainerName = _("CARTER"),
#line 4451
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4452
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4454
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4455
        .doubleBattle = FALSE,
#line 4456
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4458
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4460
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4459
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4462
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4464
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4463
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4466
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4467
        .trainerName = _("RONALD"),
#line 4468
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4469
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4471
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4472
        .doubleBattle = FALSE,
#line 4473
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4475
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4476
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4480
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4481
        .trainerName = _("JACOB"),
#line 4482
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4483
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4485
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4486
        .doubleBattle = FALSE,
#line 4487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4489
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4491
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4490
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4493
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4495
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4494
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4497
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4499
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4498
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4501
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4502
        .trainerName = _("ANTHONY"),
#line 4503
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4504
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4506
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4507
        .doubleBattle = FALSE,
#line 4508
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4510
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4512
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4511
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4514
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4515
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4518
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4519
        .trainerName = _("BENJAMIN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4527
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4528
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4531
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4532
        .trainerName = _("JASMINE"),
#line 4533
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4534
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4535
F_TRAINER_FEMALE | 
#line 4536
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4537
        .doubleBattle = FALSE,
#line 4538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4540
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4541
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4544
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4546
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4545
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4548
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4550
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4549
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4552
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4553
        .trainerName = _("DYLAN"),
#line 4554
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4555
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4557
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4558
        .doubleBattle = FALSE,
#line 4559
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4561
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4562
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4565
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4566
        .trainerName = _("MARIA"),
#line 4567
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4568
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4569
F_TRAINER_FEMALE | 
#line 4570
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4571
        .doubleBattle = FALSE,
#line 4572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4574
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4576
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4575
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4578
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4579
        .trainerName = _("CAMDEN"),
#line 4580
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4581
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4583
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4584
        .doubleBattle = FALSE,
#line 4585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4587
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4588
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4591
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4593
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4592
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4595
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4596
        .trainerName = _("DEMETRIUS"),
#line 4597
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4598
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4600
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4601
        .doubleBattle = FALSE,
#line 4602
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4604
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4605
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4608
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4610
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4609
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4612
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4613
        .trainerName = _("ISAIAH"),
#line 4614
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4615
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4617
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4618
        .doubleBattle = FALSE,
#line 4619
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4621
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4622
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4625
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4626
        .trainerName = _("PABLO"),
#line 4627
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4628
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4630
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4631
        .doubleBattle = FALSE,
#line 4632
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4634
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4635
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4638
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4640
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4639
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4642
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4643
        .trainerName = _("CHASE"),
#line 4644
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4645
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4647
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4648
        .doubleBattle = FALSE,
#line 4649
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4651
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4652
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4655
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4657
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4656
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4659
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4660
        .trainerName = _("ISOBEL"),
#line 4661
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4662
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4663
F_TRAINER_FEMALE | 
#line 4664
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4665
        .doubleBattle = FALSE,
#line 4666
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4668
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4669
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4672
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4673
        .trainerName = _("DONNY"),
#line 4674
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4675
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4676
F_TRAINER_FEMALE | 
#line 4677
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4678
        .doubleBattle = FALSE,
#line 4679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4681
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4682
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4685
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4687
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4686
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4689
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4690
        .trainerName = _("TALIA"),
#line 4691
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4692
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4693
F_TRAINER_FEMALE | 
#line 4694
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4695
        .doubleBattle = FALSE,
#line 4696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4698
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4699
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4702
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4703
        .trainerName = _("KATELYN"),
#line 4704
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4705
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4706
F_TRAINER_FEMALE | 
#line 4707
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4708
        .doubleBattle = FALSE,
#line 4709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4711
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4712
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4715
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4716
        .trainerName = _("ALLISON"),
#line 4717
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4718
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4719
F_TRAINER_FEMALE | 
#line 4720
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4721
        .doubleBattle = FALSE,
#line 4722
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4724
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4725
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4728
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4730
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4729
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4732
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4733
        .trainerName = _("NICOLAS"),
#line 4734
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4735
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4737
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4738
        .doubleBattle = FALSE,
#line 4739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4741
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4743
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4742
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4745
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4747
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4746
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4749
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4750
        .trainerName = _("AARON"),
#line 4751
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4752
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4754
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4755
        .doubleBattle = FALSE,
#line 4756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4758
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4760
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4759
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4762
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4763
        .trainerName = _("PERRY"),
#line 4764
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4765
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4767
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4768
        .doubleBattle = FALSE,
#line 4769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4771
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4773
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4772
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4775
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4776
        .trainerName = _("HUGH"),
#line 4777
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4778
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4780
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4781
        .doubleBattle = FALSE,
#line 4782
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4784
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4785
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4788
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4790
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4789
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4792
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4793
        .trainerName = _("PHIL"),
#line 4794
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4795
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4797
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4798
        .doubleBattle = FALSE,
#line 4799
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4801
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4802
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4805
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4806
        .trainerName = _("JARED"),
#line 4807
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4808
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4810
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4811
        .doubleBattle = FALSE,
#line 4812
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4814
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4816
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4815
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4818
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4820
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4819
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4822
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4824
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4823
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4826
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4827
        .trainerName = _("HUMBERTO"),
#line 4828
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4829
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4831
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4832
        .doubleBattle = FALSE,
#line 4833
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4835
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4836
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4839
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4840
        .trainerName = _("PRESLEY"),
#line 4841
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4842
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4844
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4845
        .doubleBattle = FALSE,
#line 4846
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4848
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4850
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4849
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4852
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4853
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4856
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4857
        .trainerName = _("EDWARDO"),
#line 4858
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4859
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4861
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4862
        .doubleBattle = FALSE,
#line 4863
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4865
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4867
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4866
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4869
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4871
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4870
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4873
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4874
        .trainerName = _("COLIN"),
#line 4875
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4876
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4878
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4879
        .doubleBattle = FALSE,
#line 4880
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4882
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4884
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4883
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4886
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4888
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4887
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4890
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4891
        .trainerName = _("ROBERT"),
#line 4892
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4893
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4895
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4896
        .doubleBattle = FALSE,
#line 4897
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4899
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4900
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4903
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4904
        .trainerName = _("BENNY"),
#line 4905
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4906
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4908
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4909
        .doubleBattle = FALSE,
#line 4910
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4912
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4913
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4916
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4918
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4917
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4920
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4921
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4924
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4925
        .trainerName = _("CHESTER"),
#line 4926
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4927
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4929
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4930
        .doubleBattle = FALSE,
#line 4931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4933
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4934
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4937
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4938
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4941
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4942
        .trainerName = _("ALEX"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4950
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4952
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4951
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4954
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4956
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4955
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4958
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4959
        .trainerName = _("BECK"),
#line 4960
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4961
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4963
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4964
        .doubleBattle = FALSE,
#line 4965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4967
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4968
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4971
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4972
        .trainerName = _("YASU"),
#line 4973
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4974
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4976
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4977
        .doubleBattle = FALSE,
#line 4978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4980
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4981
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4984
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4985
        .trainerName = _("TAKASHI"),
#line 4986
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4987
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4989
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4990
        .doubleBattle = FALSE,
#line 4991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4993
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4994
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4997
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4999
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4998
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5001
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5002
        .trainerName = _("DIANNE"),
#line 5003
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5004
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5005
F_TRAINER_FEMALE | 
#line 5006
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5007
        .items = { ITEM_FULL_RESTORE },
#line 5008
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5010
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5011
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5013
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5016
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5017
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5019
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5022
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5023
        .trainerName = _("JANI"),
#line 5024
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5025
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5026
F_TRAINER_FEMALE | 
#line 5027
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5028
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5030
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5032
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5031
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5034
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5035
        .trainerName = _("LAO"),
#line 5036
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5037
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5039
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5040
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5042
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5043
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5046
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5047
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5050
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5052
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5051
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5054
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5055
        .trainerName = _("LUNG"),
#line 5056
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5057
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5059
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5060
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5062
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5063
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5066
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5067
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5070
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5071
        .trainerName = _("JOCELYN"),
#line 5072
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5073
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5074
F_TRAINER_FEMALE | 
#line 5075
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5076
        .doubleBattle = FALSE,
#line 5077
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5079
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5081
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5080
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5083
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5084
        .trainerName = _("LAURA"),
#line 5085
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5086
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5087
F_TRAINER_FEMALE | 
#line 5088
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5089
        .doubleBattle = FALSE,
#line 5090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5092
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5094
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5093
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5096
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5097
        .trainerName = _("CYNDY"),
#line 5098
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5099
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5100
F_TRAINER_FEMALE | 
#line 5101
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5102
        .doubleBattle = FALSE,
#line 5103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5105
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5107
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5106
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5109
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5111
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5110
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5113
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5114
        .trainerName = _("CORA"),
#line 5115
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5116
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5117
F_TRAINER_FEMALE | 
#line 5118
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5119
        .doubleBattle = FALSE,
#line 5120
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5122
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5124
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5123
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5126
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5127
        .trainerName = _("PAULA"),
#line 5128
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5129
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5130
F_TRAINER_FEMALE | 
#line 5131
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5132
        .doubleBattle = FALSE,
#line 5133
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5135
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5137
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5136
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5139
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5140
        .trainerName = _("MADELINE"),
#line 5141
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5142
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5143
F_TRAINER_FEMALE | 
#line 5144
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5145
        .doubleBattle = FALSE,
#line 5146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5148
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5150
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5149
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5152
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5153
        .trainerName = _("CLARISSA"),
#line 5154
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5155
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5156
F_TRAINER_FEMALE | 
#line 5157
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5158
        .doubleBattle = FALSE,
#line 5159
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5161
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5162
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5165
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5167
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5166
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5169
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5170
        .trainerName = _("ANGELICA"),
#line 5171
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5172
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5173
F_TRAINER_FEMALE | 
#line 5174
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5175
        .doubleBattle = FALSE,
#line 5176
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5178
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5179
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5182
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5183
        .trainerName = _("BEVERLY"),
#line 5184
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5185
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5186
F_TRAINER_FEMALE | 
#line 5187
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5188
        .doubleBattle = FALSE,
#line 5189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5191
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5193
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5192
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5195
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5197
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5196
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5199
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5200
        .trainerName = _("IMANI"),
#line 5201
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5202
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5203
F_TRAINER_FEMALE | 
#line 5204
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5205
        .doubleBattle = FALSE,
#line 5206
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5208
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5209
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5212
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5213
        .trainerName = _("KYLA"),
#line 5214
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5215
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5216
F_TRAINER_FEMALE | 
#line 5217
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5218
        .doubleBattle = FALSE,
#line 5219
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5221
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5223
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5222
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5225
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5226
        .trainerName = _("DENISE"),
#line 5227
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5228
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5229
F_TRAINER_FEMALE | 
#line 5230
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5231
        .doubleBattle = FALSE,
#line 5232
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5234
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5235
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5238
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5240
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5239
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5242
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5243
        .trainerName = _("BETH"),
#line 5244
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5245
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5246
F_TRAINER_FEMALE | 
#line 5247
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5248
        .doubleBattle = FALSE,
#line 5249
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5251
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5252
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5255
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5256
        .trainerName = _("TARA"),
#line 5257
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5258
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5259
F_TRAINER_FEMALE | 
#line 5260
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5261
        .doubleBattle = FALSE,
#line 5262
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5264
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5265
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5268
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5269
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5272
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5273
        .trainerName = _("MISSY"),
#line 5274
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5275
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5276
F_TRAINER_FEMALE | 
#line 5277
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5278
        .doubleBattle = FALSE,
#line 5279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5281
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5282
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5285
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5286
        .trainerName = _("ALICE"),
#line 5287
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5288
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5289
F_TRAINER_FEMALE | 
#line 5290
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5291
        .doubleBattle = FALSE,
#line 5292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5294
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5295
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5298
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5299
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5302
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5303
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5306
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5307
        .trainerName = _("JENNY"),
#line 5308
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5309
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5310
F_TRAINER_FEMALE | 
#line 5311
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5312
        .doubleBattle = FALSE,
#line 5313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5315
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5316
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5319
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5320
        .trainerName = _("GRACE"),
#line 5321
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5322
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5323
F_TRAINER_FEMALE | 
#line 5324
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5325
        .doubleBattle = FALSE,
#line 5326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5328
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5329
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5332
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5333
        .trainerName = _("TANYA"),
#line 5334
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5335
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5336
F_TRAINER_FEMALE | 
#line 5337
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5338
        .doubleBattle = FALSE,
#line 5339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5341
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5342
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5345
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5346
        .trainerName = _("SHARON"),
#line 5347
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5348
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5349
F_TRAINER_FEMALE | 
#line 5350
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5351
        .doubleBattle = FALSE,
#line 5352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5354
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5355
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5358
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5359
        .trainerName = _("NIKKI"),
#line 5360
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5361
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5362
F_TRAINER_FEMALE | 
#line 5363
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5364
        .doubleBattle = FALSE,
#line 5365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5367
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5368
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5371
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5372
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5375
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5376
        .trainerName = _("BRENDA"),
#line 5377
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5378
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5379
F_TRAINER_FEMALE | 
#line 5380
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5381
        .doubleBattle = FALSE,
#line 5382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5384
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5385
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5388
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5389
        .trainerName = _("KATIE"),
#line 5390
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5391
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5392
F_TRAINER_FEMALE | 
#line 5393
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5394
        .doubleBattle = FALSE,
#line 5395
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5397
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5398
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5401
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5402
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5405
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5406
        .trainerName = _("SUSIE"),
#line 5407
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5408
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5409
F_TRAINER_FEMALE | 
#line 5410
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5411
        .doubleBattle = FALSE,
#line 5412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5414
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5415
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5418
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5419
        .trainerName = _("KARA"),
#line 5420
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5421
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5422
F_TRAINER_FEMALE | 
#line 5423
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5424
        .doubleBattle = FALSE,
#line 5425
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5427
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5429
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5428
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5431
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5432
        .trainerName = _("DANA"),
#line 5433
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5434
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5435
F_TRAINER_FEMALE | 
#line 5436
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5437
        .doubleBattle = FALSE,
#line 5438
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5440
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5442
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5441
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5444
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5445
        .trainerName = _("SIENNA"),
#line 5446
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5447
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5448
F_TRAINER_FEMALE | 
#line 5449
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5450
        .doubleBattle = FALSE,
#line 5451
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5453
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5454
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5457
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5458
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5461
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5462
        .trainerName = _("DEBRA"),
#line 5463
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5464
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5465
F_TRAINER_FEMALE | 
#line 5466
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5467
        .doubleBattle = FALSE,
#line 5468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5470
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5471
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5474
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5475
        .trainerName = _("LINDA"),
#line 5476
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5477
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5478
F_TRAINER_FEMALE | 
#line 5479
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5480
        .doubleBattle = FALSE,
#line 5481
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5483
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5484
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5487
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5489
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5488
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5491
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5492
        .trainerName = _("KAYLEE"),
#line 5493
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5494
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5495
F_TRAINER_FEMALE | 
#line 5496
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5497
        .doubleBattle = FALSE,
#line 5498
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5500
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5501
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5504
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5505
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5508
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5509
        .trainerName = _("LAUREL"),
#line 5510
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5511
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5512
F_TRAINER_FEMALE | 
#line 5513
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5514
        .doubleBattle = FALSE,
#line 5515
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5517
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5518
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5521
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5523
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5522
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5525
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5526
        .trainerName = _("CARLEE"),
#line 5527
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5528
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5529
F_TRAINER_FEMALE | 
#line 5530
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5531
        .doubleBattle = FALSE,
#line 5532
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5534
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5535
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5538
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5539
        .trainerName = _("HEIDI"),
#line 5540
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5541
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5542
F_TRAINER_FEMALE | 
#line 5543
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5544
        .doubleBattle = FALSE,
#line 5545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5547
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5548
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5551
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5553
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5552
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5556
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5557
        .trainerName = _("BECKY"),
#line 5558
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5559
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5560
F_TRAINER_FEMALE | 
#line 5561
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5562
        .doubleBattle = TRUE,
#line 5563
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5565
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5565
            .heldItem = ITEM_FOCUS_SASH,
#line 5567
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5566
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5568
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5571
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5571
            .heldItem = ITEM_WIDE_LENS,
#line 5574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5572
            .ability = ABILITY_MOODY,
#line 5573
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5574
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5579
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5580
        .trainerName = _("CAROL"),
#line 5581
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5582
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5583
F_TRAINER_FEMALE | 
#line 5584
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5585
        .doubleBattle = FALSE,
#line 5586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5588
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5589
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5592
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5593
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5596
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5597
        .trainerName = _("NANCY"),
#line 5598
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5599
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5600
F_TRAINER_FEMALE | 
#line 5601
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5602
        .doubleBattle = FALSE,
#line 5603
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5605
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5606
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5609
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5610
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5613
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5614
        .trainerName = _("MARTHA"),
#line 5615
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5616
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5617
F_TRAINER_FEMALE | 
#line 5618
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5619
        .doubleBattle = FALSE,
#line 5620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5622
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5623
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5626
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5627
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5630
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5631
        .trainerName = _("DIANA"),
#line 5632
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5633
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5634
F_TRAINER_FEMALE | 
#line 5635
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5636
        .doubleBattle = FALSE,
#line 5637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5639
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5640
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5643
            .species = SPECIES_SLUGMA,
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
            .species = SPECIES_PINSIR,
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
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5652
        .trainerName = _("CEDRIC"),
#line 5653
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5654
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5656
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5657
        .doubleBattle = FALSE,
#line 5658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5660
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5664
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5665
        .trainerName = _("IRENE"),
#line 5666
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5667
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5668
F_TRAINER_FEMALE | 
#line 5669
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5670
        .doubleBattle = FALSE,
#line 5671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5673
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5674
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5677
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5678
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5681
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5682
        .trainerName = _("AMY & LIV"),
#line 5683
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5684
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5686
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5687
        .doubleBattle = TRUE,
#line 5688
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5690
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5691
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5694
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5695
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5699
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5700
        .trainerName = _("GINA & MIA"),
#line 5701
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5702
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5704
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5705
        .doubleBattle = TRUE,
#line 5706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5708
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5709
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5712
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5713
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5716
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5717
        .trainerName = _("MIU & YUKI"),
#line 5718
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5719
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5721
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5722
        .doubleBattle = TRUE,
#line 5723
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5725
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5726
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5729
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5730
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5734
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5735
        .trainerName = _("HUEY"),
#line 5736
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5737
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5739
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5740
        .doubleBattle = FALSE,
#line 5741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5743
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5745
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5744
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5747
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5749
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5748
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5751
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5752
        .trainerName = _("EDMOND"),
#line 5753
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5754
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5756
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5757
        .doubleBattle = FALSE,
#line 5758
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5760
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5761
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5764
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5765
        .trainerName = _("ERNEST"),
#line 5766
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5767
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5769
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5770
        .doubleBattle = FALSE,
#line 5771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5773
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5774
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5777
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5778
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5781
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5782
        .trainerName = _("DWAYNE"),
#line 5783
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5784
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5786
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5787
        .doubleBattle = FALSE,
#line 5788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5790
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5791
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5794
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5795
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5798
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5800
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5799
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5802
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5803
        .trainerName = _("PHILLIP"),
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
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5812
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5815
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5816
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5819
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5820
        .trainerName = _("LEONARD"),
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
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5829
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5832
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5833
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5836
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5837
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5840
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5841
        .trainerName = _("DUNCAN"),
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
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5850
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5853
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5854
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5857
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5858
        .trainerName = _("ELI"),
#line 5859
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5860
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5862
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5863
        .doubleBattle = FALSE,
#line 5864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5866
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5867
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5870
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5871
        .trainerName = _("ANNIKA"),
#line 5872
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5873
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5874
F_TRAINER_FEMALE | 
#line 5875
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5876
        .doubleBattle = FALSE,
#line 5877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5879
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .heldItem = ITEM_FOCUS_SASH,
#line 5881
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5880
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5883
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5883
            .heldItem = ITEM_FOCUS_SASH,
#line 5885
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5884
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5887
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5888
        .trainerName = _("JAZMYN"),
#line 5889
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5890
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5891
F_TRAINER_FEMALE | 
#line 5892
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5893
        .items = { ITEM_HYPER_POTION },
#line 5894
        .doubleBattle = FALSE,
#line 5895
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5897
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5898
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5901
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5902
        .trainerName = _("JONAS"),
#line 5903
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5904
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5906
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5907
        .doubleBattle = FALSE,
#line 5908
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5910
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5911
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5914
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5915
        .trainerName = _("KAYLEY"),
#line 5916
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5917
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5918
F_TRAINER_FEMALE | 
#line 5919
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5920
        .doubleBattle = FALSE,
#line 5921
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5923
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5924
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5927
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5928
        .trainerName = _("AURON"),
#line 5929
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5930
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5932
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5933
        .doubleBattle = FALSE,
#line 5934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5936
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5937
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5940
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5941
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5944
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5945
        .trainerName = _("KELVIN"),
#line 5946
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5947
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5949
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5950
        .doubleBattle = FALSE,
#line 5951
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5953
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5955
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5954
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5957
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5959
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5958
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5961
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5962
        .trainerName = _("MARLEY"),
#line 5963
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5964
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5965
F_TRAINER_FEMALE | 
#line 5966
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5967
        .items = { ITEM_HYPER_POTION },
#line 5968
        .doubleBattle = FALSE,
#line 5969
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5971
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5973
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5972
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5975
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5976
        .trainerName = _("REYNA"),
#line 5977
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5978
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5979
F_TRAINER_FEMALE | 
#line 5980
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5981
        .doubleBattle = FALSE,
#line 5982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5984
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5985
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5988
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5990
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5989
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5992
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 5993
        .trainerName = _("HUDSON"),
#line 5994
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5995
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5997
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5998
        .doubleBattle = FALSE,
#line 5999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6001
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6002
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6005
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6006
        .trainerName = _("CONOR"),
#line 6007
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6008
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6010
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6011
        .doubleBattle = FALSE,
#line 6012
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6014
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6015
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6018
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6020
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6019
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6022
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6023
        .trainerName = _("EDWIN"),
#line 6024
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6025
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6027
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6028
        .doubleBattle = FALSE,
#line 6029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6031
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6033
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6032
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6035
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6036
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6039
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6040
        .trainerName = _("HECTOR"),
#line 6041
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6042
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6044
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6045
        .doubleBattle = FALSE,
#line 6046
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6048
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6049
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6052
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6054
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6053
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6056
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6057
        .trainerName = _("TABITHA"),
#line 6058
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6059
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6061
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6062
        .doubleBattle = FALSE,
#line 6063
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6065
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6065
            .heldItem = ITEM_HEAT_ROCK,
#line 6068
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6066
            .ability = ABILITY_DROUGHT,
#line 6067
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6069
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6074
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6074
            .heldItem = ITEM_POISON_BARB,
#line 6077
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6075
            .ability = ABILITY_LEVITATE,
#line 6076
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6078
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6083
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6083
            .heldItem = ITEM_LIFE_ORB,
#line 6086
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6085
            .ability = ABILITY_LEVITATE,
#line 6084
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6087
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6092
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6093
        .trainerName = _("SAMUEL"),
#line 6094
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6095
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6097
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6098
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6099
        .doubleBattle = TRUE,
#line 6100
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6102
            .species = SPECIES_SLOWKING,
#line 6102
            .gender = TRAINER_MON_MALE,
#line 6102
            .heldItem = ITEM_LIFE_ORB,
#line 6106
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6103
            .ability = ABILITY_REGENERATOR,
#line 6104
            .lvl = 67,
#line 6105
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6107
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6112
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6112
            .heldItem = ITEM_ROCKY_HELMET,
#line 6116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6113
            .ability = ABILITY_REGENERATOR,
#line 6114
            .lvl = 67,
#line 6115
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6116
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6121
            .species = SPECIES_GLISCOR,
#line 6121
            .gender = TRAINER_MON_FEMALE,
#line 6121
            .heldItem = ITEM_TOXIC_ORB,
#line 6125
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6122
            .ability = ABILITY_POISON_HEAL,
#line 6123
            .lvl = 67,
#line 6124
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6126
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6131
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6131
            .heldItem = ITEM_ASSAULT_VEST,
#line 6135
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6132
            .ability = ABILITY_CLEAR_BODY,
#line 6133
            .lvl = 67,
#line 6134
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6136
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6141
            .species = SPECIES_HONCHKROW,
#line 6141
            .gender = TRAINER_MON_MALE,
#line 6141
            .heldItem = ITEM_FOCUS_SASH,
#line 6145
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6142
            .ability = ABILITY_MOXIE,
#line 6143
            .lvl = 67,
#line 6144
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6145
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6150
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6150
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6154
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6151
            .ability = ABILITY_INFILTRATOR,
#line 6152
            .lvl = 67,
#line 6153
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6154
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6159
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6160
        .trainerName = _("SAMUEL"),
#line 6161
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6162
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6164
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6165
        .doubleBattle = FALSE,
#line 6166
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6168
            .species = SPECIES_SLOWPOKE,
#line 6168
            .gender = TRAINER_MON_MALE,
#line 6172
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6169
            .ability = ABILITY_REGENERATOR,
#line 6170
            .lvl = 5,
#line 6171
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6173
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6177
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6178
        .trainerName = _("SAMUEL"),
#line 6179
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6180
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6182
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6183
        .doubleBattle = FALSE,
#line 6184
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6186
            .species = SPECIES_SLOWPOKE,
#line 6186
            .gender = TRAINER_MON_MALE,
#line 6186
            .heldItem = ITEM_FIGY_BERRY,
#line 6190
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6187
            .ability = ABILITY_REGENERATOR,
#line 6188
            .lvl = 24,
#line 6189
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6191
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6196
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6196
            .heldItem = ITEM_LUM_BERRY,
#line 6200
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6197
            .ability = ABILITY_REGENERATOR,
#line 6198
            .lvl = 24,
#line 6199
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6201
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6206
            .species = SPECIES_GLIGAR,
#line 6206
            .gender = TRAINER_MON_FEMALE,
#line 6206
            .heldItem = ITEM_RAZOR_FANG,
#line 6210
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6207
            .ability = ABILITY_HYPER_CUTTER,
#line 6208
            .lvl = 24,
#line 6209
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6211
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6216
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6217
            .ability = ABILITY_CLEAR_BODY,
#line 6218
            .lvl = 24,
#line 6219
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6220
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6225
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6226
        .trainerName = _("SAMUEL"),
#line 6227
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6228
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6230
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6231
        .doubleBattle = FALSE,
#line 6232
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6234
            .species = SPECIES_SLOWPOKE,
#line 6234
            .gender = TRAINER_MON_MALE,
#line 6234
            .heldItem = ITEM_LIFE_ORB,
#line 6238
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6235
            .ability = ABILITY_REGENERATOR,
#line 6236
            .lvl = 49,
#line 6237
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6239
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6244
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6244
            .heldItem = ITEM_ROCKY_HELMET,
#line 6248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6245
            .ability = ABILITY_REGENERATOR,
#line 6246
            .lvl = 49,
#line 6247
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6248
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6253
            .species = SPECIES_GLIGAR,
#line 6253
            .gender = TRAINER_MON_FEMALE,
#line 6253
            .heldItem = ITEM_RAZOR_FANG,
#line 6257
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6254
            .ability = ABILITY_HYPER_CUTTER,
#line 6255
            .lvl = 49,
#line 6256
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6258
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6263
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6263
            .heldItem = ITEM_ASSAULT_VEST,
#line 6267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6264
            .ability = ABILITY_CLEAR_BODY,
#line 6265
            .lvl = 49,
#line 6266
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6267
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6272
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6272
            .heldItem = ITEM_FOCUS_SASH,
#line 6276
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6273
            .ability = ABILITY_PRANKSTER,
#line 6274
            .lvl = 49,
#line 6275
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6276
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6281
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6282
        .trainerName = _("SAMUEL"),
#line 6283
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6284
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6286
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6287
        .doubleBattle = FALSE,
#line 6288
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6290
            .species = SPECIES_SLOWPOKE,
#line 6290
            .gender = TRAINER_MON_MALE,
#line 6294
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6291
            .ability = ABILITY_REGENERATOR,
#line 6292
            .lvl = 5,
#line 6293
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6295
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6299
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6300
        .trainerName = _("SAMUEL"),
#line 6301
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6302
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6304
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6305
        .doubleBattle = FALSE,
#line 6306
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6308
            .species = SPECIES_SLOWPOKE,
#line 6308
            .gender = TRAINER_MON_MALE,
#line 6308
            .heldItem = ITEM_FIGY_BERRY,
#line 6312
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6309
            .ability = ABILITY_REGENERATOR,
#line 6310
            .lvl = 25,
#line 6311
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6313
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6318
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6318
            .heldItem = ITEM_LUM_BERRY,
#line 6322
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6319
            .ability = ABILITY_REGENERATOR,
#line 6320
            .lvl = 25,
#line 6321
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6323
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6328
            .species = SPECIES_GLIGAR,
#line 6328
            .gender = TRAINER_MON_FEMALE,
#line 6328
            .heldItem = ITEM_RAZOR_FANG,
#line 6332
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6329
            .ability = ABILITY_HYPER_CUTTER,
#line 6330
            .lvl = 25,
#line 6331
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6333
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6338
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6338
            .heldItem = ITEM_METAL_COAT,
#line 6342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6339
            .ability = ABILITY_CLEAR_BODY,
#line 6340
            .lvl = 25,
#line 6341
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6342
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6348
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6349
        .trainerName = _("SAMUEL"),
#line 6350
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6351
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6353
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6354
        .doubleBattle = FALSE,
#line 6355
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6357
            .species = SPECIES_SLOWPOKE,
#line 6357
            .gender = TRAINER_MON_MALE,
#line 6357
            .heldItem = ITEM_LIFE_ORB,
#line 6361
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6358
            .ability = ABILITY_REGENERATOR,
#line 6359
            .lvl = 44,
#line 6360
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6362
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6367
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6367
            .heldItem = ITEM_ROCKY_HELMET,
#line 6370
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6368
            .ability = ABILITY_REGENERATOR,
#line 6370
            .lvl = 100,
#line 6369
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6370
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6375
            .species = SPECIES_GLIGAR,
#line 6375
            .gender = TRAINER_MON_FEMALE,
#line 6375
            .heldItem = ITEM_RAZOR_FANG,
#line 6379
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6376
            .ability = ABILITY_HYPER_CUTTER,
#line 6377
            .lvl = 44,
#line 6378
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6380
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6385
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6385
            .heldItem = ITEM_ASSAULT_VEST,
#line 6389
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6386
            .ability = ABILITY_CLEAR_BODY,
#line 6387
            .lvl = 44,
#line 6388
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6389
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6394
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6395
        .trainerName = _("SAMUEL"),
#line 6396
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6397
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6399
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6400
        .doubleBattle = FALSE,
#line 6401
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6403
            .species = SPECIES_SLOWPOKE,
#line 6403
            .gender = TRAINER_MON_MALE,
#line 6407
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6404
            .ability = ABILITY_REGENERATOR,
#line 6405
            .lvl = 5,
#line 6406
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6408
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6412
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6413
        .trainerName = _("SAMUEL"),
#line 6414
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6415
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6417
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6418
        .doubleBattle = FALSE,
#line 6419
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6421
            .species = SPECIES_SLOWPOKE,
#line 6421
            .gender = TRAINER_MON_MALE,
#line 6421
            .heldItem = ITEM_FIGY_BERRY,
#line 6425
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6422
            .ability = ABILITY_REGENERATOR,
#line 6423
            .lvl = 24,
#line 6424
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6426
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6431
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6431
            .heldItem = ITEM_LUM_BERRY,
#line 6435
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6432
            .ability = ABILITY_REGENERATOR,
#line 6433
            .lvl = 24,
#line 6434
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6436
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6441
            .species = SPECIES_GLIGAR,
#line 6441
            .gender = TRAINER_MON_FEMALE,
#line 6441
            .heldItem = ITEM_RAZOR_FANG,
#line 6445
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6442
            .ability = ABILITY_HYPER_CUTTER,
#line 6443
            .lvl = 24,
#line 6444
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6446
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6452
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6453
        .trainerName = _("SAMUEL"),
#line 6454
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6455
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6457
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6458
        .doubleBattle = FALSE,
#line 6459
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6461
            .species = SPECIES_SLOWPOKE,
#line 6461
            .gender = TRAINER_MON_MALE,
#line 6461
            .heldItem = ITEM_LIFE_ORB,
#line 6465
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6462
            .ability = ABILITY_REGENERATOR,
#line 6463
            .lvl = 44,
#line 6464
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6466
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6471
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6471
            .heldItem = ITEM_ROCKY_HELMET,
#line 6474
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6472
            .ability = ABILITY_REGENERATOR,
#line 6474
            .lvl = 100,
#line 6473
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6474
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
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
            .lvl = 44,
#line 6482
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6484
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6489
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6489
            .heldItem = ITEM_ASSAULT_VEST,
#line 6493
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6490
            .ability = ABILITY_CLEAR_BODY,
#line 6491
            .lvl = 44,
#line 6492
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6493
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6498
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6499
        .trainerName = _("MAY"),
#line 6500
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6501
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6502
F_TRAINER_FEMALE | 
#line 6503
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6504
        .doubleBattle = FALSE,
#line 6505
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6507
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6508
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6511
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6512
        .trainerName = _("MAY"),
#line 6513
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6514
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6515
F_TRAINER_FEMALE | 
#line 6516
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6517
        .doubleBattle = FALSE,
#line 6518
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6520
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6521
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6524
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6526
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6525
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6528
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6530
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6529
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6532
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6533
        .trainerName = _("MAY"),
#line 6534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6535
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6536
F_TRAINER_FEMALE | 
#line 6537
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6538
        .doubleBattle = FALSE,
#line 6539
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6541
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6543
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6542
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6545
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6547
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6546
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6549
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6551
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6550
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6553
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6554
        .trainerName = _("MAY"),
#line 6555
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6556
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6557
F_TRAINER_FEMALE | 
#line 6558
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6559
        .doubleBattle = FALSE,
#line 6560
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6562
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6563
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6566
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6567
        .trainerName = _("MAY"),
#line 6568
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6569
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6570
F_TRAINER_FEMALE | 
#line 6571
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6572
        .doubleBattle = FALSE,
#line 6573
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6575
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6577
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6576
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6579
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6581
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6580
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6583
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6585
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6584
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6587
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6588
        .trainerName = _("MAY"),
#line 6589
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6590
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6591
F_TRAINER_FEMALE | 
#line 6592
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6593
        .doubleBattle = FALSE,
#line 6594
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6596
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6598
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6597
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6600
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6602
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6601
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6604
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6606
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6605
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6608
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6609
        .trainerName = _("MAY"),
#line 6610
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6611
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6612
F_TRAINER_FEMALE | 
#line 6613
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6614
        .doubleBattle = FALSE,
#line 6615
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6617
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6618
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6621
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6622
        .trainerName = _("MAY"),
#line 6623
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6624
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6625
F_TRAINER_FEMALE | 
#line 6626
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6627
        .doubleBattle = FALSE,
#line 6628
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6630
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6632
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6631
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6634
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6636
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6635
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6638
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6640
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6639
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6642
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6643
        .trainerName = _("MAY"),
#line 6644
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6645
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6646
F_TRAINER_FEMALE | 
#line 6647
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6648
        .doubleBattle = FALSE,
#line 6649
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6651
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6653
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6652
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6655
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6657
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6656
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6659
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6661
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6660
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6663
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6664
        .trainerName = _("ISAAC"),
#line 6665
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6666
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6668
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6669
        .doubleBattle = FALSE,
#line 6670
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6672
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6673
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6676
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6677
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6680
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6681
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6684
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6685
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6688
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6689
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6692
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6693
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6696
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6697
        .trainerName = _("DAVIS"),
#line 6698
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6699
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6701
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6702
        .doubleBattle = FALSE,
#line 6703
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6705
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6706
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6709
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6710
        .trainerName = _("MITCHELL"),
#line 6711
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6712
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6714
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6715
        .doubleBattle = FALSE,
#line 6716
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6718
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6719
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6722
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6723
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6726
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6727
        .trainerName = _("LYDIA"),
#line 6728
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6729
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6730
F_TRAINER_FEMALE | 
#line 6731
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6732
        .doubleBattle = FALSE,
#line 6733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6735
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6736
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6739
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6741
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6740
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6743
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6744
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6747
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6748
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6751
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6752
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6755
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6756
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6759
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6760
        .trainerName = _("HALLE"),
#line 6761
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6762
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6763
F_TRAINER_FEMALE | 
#line 6764
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6765
        .items = { ITEM_FULL_RESTORE },
#line 6766
        .doubleBattle = FALSE,
#line 6767
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6769
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6770
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6773
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6774
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6777
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6778
        .trainerName = _("GARRISON"),
#line 6779
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6780
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6782
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6783
        .doubleBattle = FALSE,
#line 6784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6786
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6787
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6790
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6791
        .trainerName = _("JACKSON"),
#line 6792
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6793
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6795
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6796
        .items = { ITEM_FULL_RESTORE },
#line 6797
        .doubleBattle = FALSE,
#line 6798
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6800
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6802
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6801
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6804
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6805
        .trainerName = _("LORENZO"),
#line 6806
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6807
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6809
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6810
        .items = { ITEM_FULL_RESTORE },
#line 6811
        .doubleBattle = FALSE,
#line 6812
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6814
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6816
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6815
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6818
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6820
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6819
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6822
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6824
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6823
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6826
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6827
        .trainerName = _("SEBASTIAN"),
#line 6828
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6829
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6831
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6832
        .items = { ITEM_FULL_RESTORE },
#line 6833
        .doubleBattle = FALSE,
#line 6834
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6836
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6838
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6837
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6840
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6841
        .trainerName = _("CATHERINE"),
#line 6842
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6843
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6844
F_TRAINER_FEMALE | 
#line 6845
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6846
        .items = { ITEM_FULL_RESTORE },
#line 6847
        .doubleBattle = FALSE,
#line 6848
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6850
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6852
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6851
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6854
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6856
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6855
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6858
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6859
        .trainerName = _("JENNA"),
#line 6860
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6861
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6862
F_TRAINER_FEMALE | 
#line 6863
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6864
        .items = { ITEM_FULL_RESTORE },
#line 6865
        .doubleBattle = FALSE,
#line 6866
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6868
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6870
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6869
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6872
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6874
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6873
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6876
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6878
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6877
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6880
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6881
        .trainerName = _("SOPHIA"),
#line 6882
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6883
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6884
F_TRAINER_FEMALE | 
#line 6885
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6886
        .items = { ITEM_FULL_RESTORE },
#line 6887
        .doubleBattle = FALSE,
#line 6888
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6890
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6892
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6891
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6894
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6896
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6895
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6898
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6899
        .trainerName = _("JULIO"),
#line 6900
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6901
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6903
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6904
        .doubleBattle = FALSE,
#line 6905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6907
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6908
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6911
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6912
        .trainerName = _("GRUNT"),
#line 6913
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6914
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6916
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6917
        .doubleBattle = FALSE,
#line 6918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6920
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6921
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6924
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6926
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6925
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6928
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6929
        .trainerName = _("GRUNT"),
#line 6930
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6931
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6932
F_TRAINER_FEMALE | 
#line 6933
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6934
        .doubleBattle = FALSE,
#line 6935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6937
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6938
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6941
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6942
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6945
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6946
        .trainerName = _("GRUNT"),
#line 6947
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6948
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6949
F_TRAINER_FEMALE | 
#line 6950
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6951
        .doubleBattle = FALSE,
#line 6952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6954
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6955
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6958
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6959
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6962
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6963
        .trainerName = _("GRUNT"),
#line 6964
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6965
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6967
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6968
        .doubleBattle = FALSE,
#line 6969
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6971
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6972
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6975
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6977
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6976
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6979
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6980
        .trainerName = _("MARC"),
#line 6981
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6982
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6984
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6985
        .doubleBattle = FALSE,
#line 6986
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6988
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6990
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6989
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6992
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6994
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6993
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6996
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6997
        .trainerName = _("BRENDEN"),
#line 6998
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6999
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7001
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7002
        .doubleBattle = FALSE,
#line 7003
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7005
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7007
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7006
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7009
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7010
        .trainerName = _("LILITH"),
#line 7011
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7012
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7013
F_TRAINER_FEMALE | 
#line 7014
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7015
        .doubleBattle = FALSE,
#line 7016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7018
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7020
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7019
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7022
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7023
        .trainerName = _("CRISTIAN"),
#line 7024
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7025
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7027
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7028
        .doubleBattle = FALSE,
#line 7029
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7031
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7033
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7032
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7035
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7036
        .trainerName = _("SYLVIA"),
#line 7037
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7038
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7039
F_TRAINER_FEMALE | 
#line 7040
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7041
        .doubleBattle = FALSE,
#line 7042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7044
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7046
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7045
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7048
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7049
        .trainerName = _("LEONARDO"),
#line 7050
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7051
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7053
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7054
        .doubleBattle = FALSE,
#line 7055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7057
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7058
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7061
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7062
        .trainerName = _("ATHENA"),
#line 7063
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7064
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7065
F_TRAINER_FEMALE | 
#line 7066
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7067
        .items = { ITEM_HYPER_POTION },
#line 7068
        .doubleBattle = FALSE,
#line 7069
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7071
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7073
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7072
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7075
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7077
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7076
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7080
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7081
        .trainerName = _("HARRISON"),
#line 7082
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7083
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7085
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7086
        .doubleBattle = FALSE,
#line 7087
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7089
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7090
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7093
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7094
        .trainerName = _("GRUNT"),
#line 7095
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7096
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7098
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7099
        .doubleBattle = FALSE,
#line 7100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7102
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7103
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7106
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7107
        .trainerName = _("CLARENCE"),
#line 7108
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7109
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7111
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7112
        .doubleBattle = FALSE,
#line 7113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7115
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7116
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7119
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7120
        .trainerName = _("TERRY"),
#line 7121
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7122
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7123
F_TRAINER_FEMALE | 
#line 7124
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7125
        .doubleBattle = FALSE,
#line 7126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7128
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7129
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7132
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7133
        .trainerName = _("NATE"),
#line 7134
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7135
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7137
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7138
        .doubleBattle = FALSE,
#line 7139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7141
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7142
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7145
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7146
        .trainerName = _("KATHLEEN"),
#line 7147
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7148
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7149
F_TRAINER_FEMALE | 
#line 7150
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7151
        .doubleBattle = FALSE,
#line 7152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7155
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7158
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7159
        .trainerName = _("CLIFFORD"),
#line 7160
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7161
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7163
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7164
        .doubleBattle = FALSE,
#line 7165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7167
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7168
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7171
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7172
        .trainerName = _("NICHOLAS"),
#line 7173
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7174
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
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
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7181
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7184
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7185
        .trainerName = _("GRUNT"),
#line 7186
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7187
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7188
F_TRAINER_FEMALE | 
#line 7189
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7190
        .doubleBattle = FALSE,
#line 7191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7193
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7194
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7197
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7198
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7201
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7202
        .trainerName = _("GRUNT"),
#line 7203
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7204
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7206
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7207
        .doubleBattle = FALSE,
#line 7208
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7210
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7211
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7214
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7215
        .trainerName = _("GRUNT"),
#line 7216
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7217
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7219
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7220
        .doubleBattle = FALSE,
#line 7221
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7223
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7224
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7227
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7228
        .trainerName = _("GRUNT"),
#line 7229
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7230
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7232
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7233
        .doubleBattle = FALSE,
#line 7234
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7236
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7237
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7240
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7241
        .trainerName = _("GRUNT"),
#line 7242
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7243
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7245
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7246
        .doubleBattle = FALSE,
#line 7247
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7249
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7250
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7253
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7254
        .trainerName = _("MACEY"),
#line 7255
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7256
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7257
F_TRAINER_FEMALE | 
#line 7258
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7259
        .doubleBattle = FALSE,
#line 7260
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7262
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7264
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7263
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7266
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7267
        .trainerName = _("SAMUEL"),
#line 7268
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7269
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7271
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7272
        .doubleBattle = FALSE,
#line 7273
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7275
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7275
            .heldItem = ITEM_RAZOR_FANG,
#line 7279
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7276
            .ability = ABILITY_HYPER_CUTTER,
#line 7277
            .lvl = 16,
#line 7278
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7279
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7284
            .species = SPECIES_SLOWPOKE,
#line 7284
            .gender = TRAINER_MON_MALE,
#line 7288
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7285
            .ability = ABILITY_REGENERATOR,
#line 7286
            .lvl = 16,
#line 7287
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7288
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7293
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7297
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7294
            .ability = ABILITY_REGENERATOR,
#line 7295
            .lvl = 16,
#line 7296
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7297
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7302
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7303
        .trainerName = _("SAMUEL"),
#line 7304
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7305
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7307
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7308
        .doubleBattle = FALSE,
#line 7309
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7311
            .species = SPECIES_SLOWPOKE,
#line 7311
            .gender = TRAINER_MON_MALE,
#line 7315
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7312
            .ability = ABILITY_REGENERATOR,
#line 7313
            .lvl = 16,
#line 7314
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7316
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7321
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7322
            .ability = ABILITY_REGENERATOR,
#line 7323
            .lvl = 16,
#line 7324
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7325
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7332
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7333
        .trainerName = _("PAXTON"),
#line 7334
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7335
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7337
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7338
        .doubleBattle = FALSE,
#line 7339
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7341
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7342
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7345
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7346
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7349
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7350
        .trainerName = _("ISABELLA"),
#line 7351
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7352
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7353
F_TRAINER_FEMALE | 
#line 7354
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7355
        .doubleBattle = FALSE,
#line 7356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7358
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7359
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7362
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7363
        .trainerName = _("GRUNT"),
#line 7364
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7365
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7366
F_TRAINER_FEMALE | 
#line 7367
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7368
        .doubleBattle = FALSE,
#line 7369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7371
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7372
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7375
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7376
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7379
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7380
        .trainerName = _("TABITHA"),
#line 7381
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7382
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7384
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7385
        .doubleBattle = FALSE,
#line 7386
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7388
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7391
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7389
            .ability = ABILITY_DROUGHT,
#line 7390
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7392
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7397
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7397
            .heldItem = ITEM_LUM_BERRY,
#line 7400
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7398
            .ability = ABILITY_LEVITATE,
#line 7399
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7401
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7405
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7405
            .heldItem = ITEM_SITRUS_BERRY,
#line 7408
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7406
            .ability = ABILITY_LEVITATE,
#line 7407
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7409
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7413
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7413
            .heldItem = ITEM_LUM_BERRY,
#line 7416
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7414
            .ability = ABILITY_OWN_TEMPO,
#line 7415
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7417
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7422
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7423
        .trainerName = _("JONATHAN"),
#line 7424
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7425
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7427
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7428
        .items = { ITEM_HYPER_POTION },
#line 7429
        .doubleBattle = FALSE,
#line 7430
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7432
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7434
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7433
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7436
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7438
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7437
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7440
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7441
        .trainerName = _("SAMUEL"),
#line 7442
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7443
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7445
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7446
        .doubleBattle = FALSE,
#line 7447
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7449
            .species = SPECIES_SLOWPOKE,
#line 7449
            .gender = TRAINER_MON_MALE,
#line 7453
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7450
            .ability = ABILITY_REGENERATOR,
#line 7451
            .lvl = 16,
#line 7452
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7454
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7459
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7463
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7460
            .ability = ABILITY_REGENERATOR,
#line 7461
            .lvl = 16,
#line 7462
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7463
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7470
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7471
        .trainerName = _("MAY"),
#line 7472
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7473
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7474
F_TRAINER_FEMALE | 
#line 7475
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7476
        .doubleBattle = FALSE,
#line 7477
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7479
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7481
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7480
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7483
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7485
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7484
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7487
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7488
        .trainerName = _("MAXIE"),
#line 7489
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7490
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7492
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7493
        .doubleBattle = FALSE,
#line 7494
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7496
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7496
            .heldItem = ITEM_IRON_BALL,
#line 7499
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7497
            .ability = ABILITY_HEAVY_METAL,
#line 7498
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7499
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7504
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7504
            .heldItem = ITEM_SHARP_BEAK,
#line 7507
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7505
            .ability = ABILITY_INNER_FOCUS,
#line 7506
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7507
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7512
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7512
            .heldItem = ITEM_MUSCLE_BAND,
#line 7515
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7513
            .ability = ABILITY_IMMUNITY,
#line 7514
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7515
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7520
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7520
            .heldItem = ITEM_EXPERT_BELT,
#line 7523
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7521
            .ability = ABILITY_UNNERVE,
#line 7522
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7523
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7528
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7528
            .heldItem = ITEM_ROCKY_HELMET,
#line 7531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7529
            .ability = ABILITY_ROCK_HEAD,
#line 7530
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7531
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7536
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7537
        .trainerName = _("MAXIE"),
#line 7538
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7539
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7541
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7542
        .doubleBattle = FALSE,
#line 7543
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7545
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7545
            .heldItem = ITEM_MUSCLE_BAND,
#line 7548
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7546
            .ability = ABILITY_HEAVY_METAL,
#line 7547
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7549
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7554
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7554
            .heldItem = ITEM_LUM_BERRY,
#line 7557
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7555
            .ability = ABILITY_IMMUNITY,
#line 7556
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7558
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7563
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7563
            .heldItem = ITEM_LUM_BERRY,
#line 7566
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7564
            .ability = ABILITY_UNNERVE,
#line 7565
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7567
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7572
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7572
            .heldItem = ITEM_ROCKY_HELMET,
#line 7575
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7573
            .ability = ABILITY_ROCK_HEAD,
#line 7574
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7576
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7581
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7581
            .heldItem = ITEM_SHARP_BEAK,
#line 7584
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7582
            .ability = ABILITY_INNER_FOCUS,
#line 7583
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7585
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7590
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7591
        .trainerName = _("TIANA"),
#line 7592
        .trainerClass = TRAINER_CLASS_LASS,
#line 7593
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7594
F_TRAINER_FEMALE | 
#line 7595
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7596
        .doubleBattle = FALSE,
#line 7597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7599
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7600
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7603
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7604
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7607
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7608
        .trainerName = _("HALEY"),
#line 7609
        .trainerClass = TRAINER_CLASS_LASS,
#line 7610
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7611
F_TRAINER_FEMALE | 
#line 7612
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7613
        .doubleBattle = FALSE,
#line 7614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7616
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7617
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7620
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7621
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7624
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7625
        .trainerName = _("JANICE"),
#line 7626
        .trainerClass = TRAINER_CLASS_LASS,
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7633
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7634
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7637
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7638
        .trainerName = _("VIVI"),
#line 7639
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7640
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7641
F_TRAINER_FEMALE | 
#line 7642
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7643
        .doubleBattle = FALSE,
#line 7644
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7646
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7648
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7647
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7650
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7652
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7651
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7654
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7656
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7655
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7658
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7659
        .trainerName = _("SALLY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7667
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7668
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7671
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7672
        .trainerName = _("ROBIN"),
#line 7673
        .trainerClass = TRAINER_CLASS_LASS,
#line 7674
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7675
F_TRAINER_FEMALE | 
#line 7676
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7677
        .doubleBattle = FALSE,
#line 7678
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7680
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7681
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7684
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7685
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7688
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7689
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7692
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7693
        .trainerName = _("ANDREA"),
#line 7694
        .trainerClass = TRAINER_CLASS_LASS,
#line 7695
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7696
F_TRAINER_FEMALE | 
#line 7697
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7698
        .doubleBattle = FALSE,
#line 7699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7701
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7703
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7702
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7705
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7706
        .trainerName = _("CRISSY"),
#line 7707
        .trainerClass = TRAINER_CLASS_LASS,
#line 7708
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7709
F_TRAINER_FEMALE | 
#line 7710
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7711
        .doubleBattle = FALSE,
#line 7712
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7714
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7715
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7718
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7720
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7719
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7722
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7723
        .trainerName = _("RICK"),
#line 7724
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7725
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7727
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7728
        .doubleBattle = FALSE,
#line 7729
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7731
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7732
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7735
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7736
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7739
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7740
        .trainerName = _("LYLE"),
#line 7741
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7742
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7744
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7745
        .doubleBattle = FALSE,
#line 7746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7748
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7749
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7752
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7753
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7756
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7757
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7760
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7761
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7764
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7765
        .trainerName = _("JOSIE"),
#line 7766
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7767
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7769
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7770
        .doubleBattle = FALSE,
#line 7771
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7773
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7775
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7774
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7777
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7779
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7778
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7781
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7782
        .trainerName = _("DOUG"),
#line 7783
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7784
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7786
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7787
        .doubleBattle = FALSE,
#line 7788
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7790
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7791
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7794
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7796
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7795
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7798
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7799
        .trainerName = _("GREG"),
#line 7800
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7801
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7803
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7804
        .doubleBattle = FALSE,
#line 7805
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7807
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7808
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7811
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7812
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7815
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7816
        .trainerName = _("KENT"),
#line 7817
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7818
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7820
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7821
        .doubleBattle = FALSE,
#line 7822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7824
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7825
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7828
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7829
        .trainerName = _("JAMES"),
#line 7830
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7831
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7833
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7834
        .doubleBattle = FALSE,
#line 7835
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7837
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7838
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7841
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7842
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7845
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7846
        .trainerName = _("BRICE"),
#line 7847
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7848
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7850
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7851
        .doubleBattle = FALSE,
#line 7852
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7854
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7855
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7858
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7859
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7862
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7863
        .trainerName = _("TRENT"),
#line 7864
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7865
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7867
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7868
        .doubleBattle = FALSE,
#line 7869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7871
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7872
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7875
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7877
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7876
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7879
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7880
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7883
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7884
        .trainerName = _("LENNY"),
#line 7885
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7886
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7888
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7889
        .doubleBattle = FALSE,
#line 7890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7892
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7893
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7896
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7897
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7900
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7901
        .trainerName = _("LUCAS"),
#line 7902
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7903
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7905
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7906
        .doubleBattle = FALSE,
#line 7907
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7909
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7910
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7913
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7914
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7917
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7918
        .trainerName = _("ALAN"),
#line 7919
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7920
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7922
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7923
        .doubleBattle = FALSE,
#line 7924
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7926
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7927
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7930
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7932
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7931
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7934
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7936
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7935
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7938
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7939
        .trainerName = _("CLARK"),
#line 7940
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7941
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7943
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7944
        .doubleBattle = FALSE,
#line 7945
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7947
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7948
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7951
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7952
        .trainerName = _("ERIC"),
#line 7953
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7954
        .trainerPic = TRAINER_PIC_HIKER,
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
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7961
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7964
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7966
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7965
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7968
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7969
        .trainerName = _("MIKE"),
#line 7970
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7971
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7973
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7974
        .doubleBattle = FALSE,
#line 7975
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7977
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7978
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7981
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7983
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7982
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7985
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7987
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7986
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7989
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7990
        .trainerName = _("DEZ & LUKE"),
#line 7991
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7992
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7994
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7995
        .doubleBattle = TRUE,
#line 7996
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7998
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7999
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8002
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8004
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8003
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8006
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8007
        .trainerName = _("LEA & JED"),
#line 8008
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8009
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8011
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8012
        .doubleBattle = TRUE,
#line 8013
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8015
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8016
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8019
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8020
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8023
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8024
        .trainerName = _("KIRA & DAN"),
#line 8025
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8026
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8028
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8029
        .doubleBattle = TRUE,
#line 8030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8032
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8033
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8036
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8037
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8040
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8041
        .trainerName = _("JOHANNA"),
#line 8042
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8043
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8044
F_TRAINER_FEMALE | 
#line 8045
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8046
        .doubleBattle = FALSE,
#line 8047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8049
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8050
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8053
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8054
        .trainerName = _("GERALD"),
#line 8055
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8058
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8059
        .items = { ITEM_HYPER_POTION },
#line 8060
        .doubleBattle = FALSE,
#line 8061
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8063
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8065
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8064
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8068
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8069
        .trainerName = _("VIVIAN"),
#line 8070
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8071
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8072
F_TRAINER_FEMALE | 
#line 8073
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8074
        .doubleBattle = FALSE,
#line 8075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8077
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8079
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8078
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8081
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8083
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8082
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8085
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8086
        .trainerName = _("DANIELLE"),
#line 8087
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8088
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8089
F_TRAINER_FEMALE | 
#line 8090
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8091
        .doubleBattle = FALSE,
#line 8092
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8094
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8095
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8098
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8099
        .trainerName = _("HIDEO"),
#line 8100
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8101
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8103
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8104
        .doubleBattle = FALSE,
#line 8105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8107
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8108
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8111
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8113
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8112
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8115
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8116
        .trainerName = _("KEIGO"),
#line 8117
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8118
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8120
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8121
        .doubleBattle = FALSE,
#line 8122
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8124
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8125
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8128
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8129
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8132
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8133
        .trainerName = _("RILEY"),
#line 8134
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8135
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8137
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8138
        .doubleBattle = FALSE,
#line 8139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8141
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8142
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8145
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8147
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8146
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8149
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8150
        .trainerName = _("FLINT"),
#line 8151
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8152
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8154
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8155
        .doubleBattle = FALSE,
#line 8156
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8158
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8160
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8159
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8162
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8164
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8163
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8166
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8167
        .trainerName = _("ASHLEY"),
#line 8168
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8169
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8170
F_TRAINER_FEMALE | 
#line 8171
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8172
        .doubleBattle = FALSE,
#line 8173
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8175
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8177
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8176
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8179
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8181
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8180
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8183
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8185
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8184
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8187
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8188
        .trainerName = _("WALLY"),
#line 8189
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8190
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8193
        .doubleBattle = FALSE,
#line 8194
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8196
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8199
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8197
            .ability = ABILITY_SAND_STREAM,
#line 8198
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8199
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8201
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8201
            .heldItem = ITEM_SHELL_BELL,
#line 8205
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8202
            .ability = ABILITY_STURDY,
#line 8203
            .lvl = 1,
#line 8204
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8206
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8208
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8209
        .trainerName = _("SAMUEL"),
#line 8210
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8211
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8213
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8214
        .doubleBattle = TRUE,
#line 8215
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8217
            .species = SPECIES_SLOWKING,
#line 8217
            .gender = TRAINER_MON_MALE,
#line 8217
            .heldItem = ITEM_LIFE_ORB,
#line 8221
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8218
            .ability = ABILITY_REGENERATOR,
#line 8219
            .lvl = 54,
#line 8220
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8222
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8227
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8227
            .heldItem = ITEM_ROCKY_HELMET,
#line 8231
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8228
            .ability = ABILITY_REGENERATOR,
#line 8229
            .lvl = 54,
#line 8230
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8231
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8236
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8236
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8237
            .ability = ABILITY_INFILTRATOR,
#line 8238
            .lvl = 54,
#line 8239
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8240
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8245
            .species = SPECIES_GLISCOR,
#line 8245
            .gender = TRAINER_MON_FEMALE,
#line 8245
            .heldItem = ITEM_TOXIC_ORB,
#line 8249
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8246
            .ability = ABILITY_POISON_HEAL,
#line 8247
            .lvl = 54,
#line 8248
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8250
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8255
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8255
            .heldItem = ITEM_ASSAULT_VEST,
#line 8259
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8256
            .ability = ABILITY_CLEAR_BODY,
#line 8257
            .lvl = 54,
#line 8258
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8260
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8265
            .species = SPECIES_HONCHKROW,
#line 8265
            .gender = TRAINER_MON_MALE,
#line 8265
            .heldItem = ITEM_FOCUS_SASH,
#line 8269
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8266
            .ability = ABILITY_MOXIE,
#line 8267
            .lvl = 54,
#line 8268
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8270
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8276
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8277
        .trainerName = _("SAMUEL"),
#line 8278
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8279
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8281
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8282
        .doubleBattle = FALSE,
#line 8283
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8285
            .species = SPECIES_SLOWKING,
#line 8285
            .gender = TRAINER_MON_MALE,
#line 8285
            .heldItem = ITEM_LIFE_ORB,
#line 8289
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8286
            .ability = ABILITY_REGENERATOR,
#line 8287
            .lvl = 54,
#line 8288
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8290
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8295
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8295
            .heldItem = ITEM_ROCKY_HELMET,
#line 8299
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8296
            .ability = ABILITY_REGENERATOR,
#line 8297
            .lvl = 54,
#line 8298
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8299
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8304
            .species = SPECIES_GLISCOR,
#line 8304
            .gender = TRAINER_MON_FEMALE,
#line 8304
            .heldItem = ITEM_TOXIC_ORB,
#line 8308
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8305
            .ability = ABILITY_POISON_HEAL,
#line 8306
            .lvl = 54,
#line 8307
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8309
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8314
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8314
            .heldItem = ITEM_ASSAULT_VEST,
#line 8318
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8315
            .ability = ABILITY_CLEAR_BODY,
#line 8316
            .lvl = 54,
#line 8317
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8319
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8324
            .species = SPECIES_HONCHKROW,
#line 8324
            .gender = TRAINER_MON_MALE,
#line 8324
            .heldItem = ITEM_FOCUS_SASH,
#line 8328
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8325
            .ability = ABILITY_MOXIE,
#line 8326
            .lvl = 54,
#line 8327
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8329
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8335
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8336
        .trainerName = _("SAMUEL"),
#line 8337
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8338
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8340
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8341
        .doubleBattle = FALSE,
#line 8342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8344
            .species = SPECIES_SLOWKING,
#line 8344
            .gender = TRAINER_MON_MALE,
#line 8344
            .heldItem = ITEM_LIFE_ORB,
#line 8348
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8345
            .ability = ABILITY_REGENERATOR,
#line 8346
            .lvl = 54,
#line 8347
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8349
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8354
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8354
            .heldItem = ITEM_ROCKY_HELMET,
#line 8358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8355
            .ability = ABILITY_REGENERATOR,
#line 8356
            .lvl = 54,
#line 8357
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8358
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8363
            .species = SPECIES_GLISCOR,
#line 8363
            .gender = TRAINER_MON_FEMALE,
#line 8363
            .heldItem = ITEM_TOXIC_ORB,
#line 8367
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8364
            .ability = ABILITY_POISON_HEAL,
#line 8365
            .lvl = 54,
#line 8366
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8368
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8373
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8373
            .heldItem = ITEM_ASSAULT_VEST,
#line 8377
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8374
            .ability = ABILITY_CLEAR_BODY,
#line 8375
            .lvl = 54,
#line 8376
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8378
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8383
            .species = SPECIES_HONCHKROW,
#line 8383
            .gender = TRAINER_MON_MALE,
#line 8383
            .heldItem = ITEM_FOCUS_SASH,
#line 8387
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8384
            .ability = ABILITY_MOXIE,
#line 8385
            .lvl = 54,
#line 8386
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8388
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8394
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8395
        .trainerName = _("MAY"),
#line 8396
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8397
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8398
F_TRAINER_FEMALE | 
#line 8399
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8400
        .doubleBattle = FALSE,
#line 8401
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8403
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8405
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8404
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8407
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8409
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8408
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8411
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8413
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8412
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8415
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8417
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8416
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8419
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8420
        .trainerName = _("MAY"),
#line 8421
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8422
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8423
F_TRAINER_FEMALE | 
#line 8424
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8425
        .doubleBattle = FALSE,
#line 8426
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8428
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8430
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8429
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8432
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8434
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8433
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8436
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8438
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8437
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8440
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8442
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8441
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8444
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8445
        .trainerName = _("MAY"),
#line 8446
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8447
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8448
F_TRAINER_FEMALE | 
#line 8449
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8450
        .doubleBattle = FALSE,
#line 8451
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8453
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8455
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8454
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8457
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8459
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8458
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8461
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8463
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8462
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8465
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8467
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8466
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8469
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8470
        .trainerName = _("JONAH"),
#line 8471
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8472
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8474
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8475
        .doubleBattle = FALSE,
#line 8476
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8478
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8479
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8482
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8484
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8483
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8486
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8487
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8490
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8491
        .trainerName = _("HENRY"),
#line 8492
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8493
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8495
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8496
        .doubleBattle = FALSE,
#line 8497
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8499
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8500
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8503
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8504
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8507
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8508
        .trainerName = _("ROGER"),
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
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8517
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8520
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8521
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8524
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8525
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8528
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8529
        .trainerName = _("ALEXA"),
#line 8530
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8531
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8532
F_TRAINER_FEMALE | 
#line 8533
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8534
        .items = { ITEM_FULL_RESTORE },
#line 8535
        .doubleBattle = FALSE,
#line 8536
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8538
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8540
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8539
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8542
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8544
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8543
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8546
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8547
        .trainerName = _("RUBEN"),
#line 8548
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8549
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8551
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8552
        .items = { ITEM_HYPER_POTION },
#line 8553
        .doubleBattle = FALSE,
#line 8554
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8556
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8558
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8557
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8560
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8562
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8561
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8564
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8565
        .trainerName = _("KOJI"),
#line 8566
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8567
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8569
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8570
        .doubleBattle = FALSE,
#line 8571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8573
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8574
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8577
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8578
        .trainerName = _("WAYNE"),
#line 8579
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8580
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8582
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8583
        .doubleBattle = FALSE,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8587
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8590
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8592
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8591
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8594
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8596
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8595
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8598
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8599
        .trainerName = _("AIDAN"),
#line 8600
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8601
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8603
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8604
        .doubleBattle = FALSE,
#line 8605
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8607
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8608
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8611
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8613
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8612
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8615
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8616
        .trainerName = _("REED"),
#line 8617
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8618
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8620
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8621
        .doubleBattle = FALSE,
#line 8622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8624
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8625
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8628
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8630
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8629
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8632
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8633
        .trainerName = _("TISHA"),
#line 8634
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8635
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8636
F_TRAINER_FEMALE | 
#line 8637
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8638
        .doubleBattle = FALSE,
#line 8639
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8641
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8642
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8646
        .trainerName = _("TORI & TIA"),
#line 8647
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8648
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8650
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8651
        .doubleBattle = TRUE,
#line 8652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8654
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8655
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8658
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8660
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8659
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8662
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8663
        .trainerName = _("KIM & IRIS"),
#line 8664
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8665
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8667
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8668
        .doubleBattle = TRUE,
#line 8669
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8671
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8672
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8675
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8677
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8676
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8679
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8680
        .trainerName = _("TYRA & IVY"),
#line 8681
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8682
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8684
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8685
        .doubleBattle = TRUE,
#line 8686
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8688
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8689
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8692
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8694
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8693
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8697
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8698
        .trainerName = _("MEL & PAUL"),
#line 8699
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8700
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8702
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8703
        .doubleBattle = TRUE,
#line 8704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8706
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8707
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8710
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8712
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8711
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8714
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8715
        .trainerName = _("JOHN & JAY"),
#line 8716
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8717
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8719
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8720
        .doubleBattle = TRUE,
#line 8721
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8723
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8724
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8727
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8729
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8728
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8731
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8732
        .trainerName = _("RELI & IAN"),
#line 8733
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8734
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8736
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8737
        .doubleBattle = TRUE,
#line 8738
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8740
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8742
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8741
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8744
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8745
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8748
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8749
        .trainerName = _("LILA & ROY"),
#line 8750
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8751
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8753
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8754
        .doubleBattle = TRUE,
#line 8755
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8757
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8758
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8761
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8762
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8765
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8766
        .trainerName = _("LISA & RAY"),
#line 8767
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8768
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8770
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8771
        .doubleBattle = TRUE,
#line 8772
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8774
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8775
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8778
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8779
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8782
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8783
        .trainerName = _("CHRIS"),
#line 8784
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8785
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8787
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8788
        .doubleBattle = FALSE,
#line 8789
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8791
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8792
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8795
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8797
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8796
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8799
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8800
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8803
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8804
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8807
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8808
        .trainerName = _("DAWSON"),
#line 8809
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8810
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8812
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8813
        .doubleBattle = FALSE,
#line 8814
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8816
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8816
            .heldItem = ITEM_NUGGET,
#line 8818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8817
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8820
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8821
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8824
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8825
        .trainerName = _("SARAH"),
#line 8826
        .trainerClass = TRAINER_CLASS_LADY,
#line 8827
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8828
F_TRAINER_FEMALE | 
#line 8829
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8830
        .items = { ITEM_FULL_RESTORE },
#line 8831
        .doubleBattle = FALSE,
#line 8832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8834
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8835
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8838
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8838
            .heldItem = ITEM_NUGGET,
#line 8840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8839
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8842
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8843
        .trainerName = _("DARIAN"),
#line 8844
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8845
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8847
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8848
        .doubleBattle = FALSE,
#line 8849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8851
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8852
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8855
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8856
        .trainerName = _("HAILEY"),
#line 8857
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8858
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8859
F_TRAINER_FEMALE | 
#line 8860
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8861
        .doubleBattle = FALSE,
#line 8862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8864
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8865
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8868
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8869
        .trainerName = _("CHANDLER"),
#line 8870
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8871
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8873
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8874
        .doubleBattle = FALSE,
#line 8875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8877
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8878
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8881
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8883
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8882
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8885
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8886
        .trainerName = _("KALEB"),
#line 8887
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8888
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8890
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8891
        .doubleBattle = FALSE,
#line 8892
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8894
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8894
            .heldItem = ITEM_ORAN_BERRY,
#line 8896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8895
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8898
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8898
            .heldItem = ITEM_ORAN_BERRY,
#line 8900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8899
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8902
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8903
        .trainerName = _("JOSEPH"),
#line 8904
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8905
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8907
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8908
        .doubleBattle = FALSE,
#line 8909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8911
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8912
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8915
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8916
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8919
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8920
        .trainerName = _("ALYSSA"),
#line 8921
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8922
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8923
F_TRAINER_FEMALE | 
#line 8924
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8925
        .doubleBattle = FALSE,
#line 8926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8928
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8929
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8932
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8933
        .trainerName = _("MARCOS"),
#line 8934
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8935
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8937
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8938
        .doubleBattle = FALSE,
#line 8939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8941
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8943
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8942
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8945
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8946
        .trainerName = _("RHETT"),
#line 8947
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8948
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8950
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8951
        .doubleBattle = FALSE,
#line 8952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8954
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8956
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8955
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8958
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8959
        .trainerName = _("TYRON"),
#line 8960
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8961
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8963
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8964
        .doubleBattle = FALSE,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8967
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8968
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8971
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8972
        .trainerName = _("CELINA"),
#line 8973
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8974
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8975
F_TRAINER_FEMALE | 
#line 8976
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8977
        .doubleBattle = FALSE,
#line 8978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8980
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8981
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8984
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8985
        .trainerName = _("BIANCA"),
#line 8986
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8987
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8988
F_TRAINER_FEMALE | 
#line 8989
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8990
        .doubleBattle = FALSE,
#line 8991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8993
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8994
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8997
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8998
        .trainerName = _("HAYDEN"),
#line 8999
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9000
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9002
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9003
        .doubleBattle = FALSE,
#line 9004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9006
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9007
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9010
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9011
        .trainerName = _("SOPHIE"),
#line 9012
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9013
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9014
F_TRAINER_FEMALE | 
#line 9015
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9016
        .doubleBattle = FALSE,
#line 9017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9019
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9020
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9023
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9024
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9027
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9028
        .trainerName = _("COBY"),
#line 9029
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9030
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9032
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9033
        .doubleBattle = FALSE,
#line 9034
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9036
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9037
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9040
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9042
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9041
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9044
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9045
        .trainerName = _("LAWRENCE"),
#line 9046
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9047
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9049
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9050
        .doubleBattle = FALSE,
#line 9051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9053
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9054
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9057
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9059
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9058
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9061
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9062
        .trainerName = _("WYATT"),
#line 9063
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9064
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9066
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9067
        .doubleBattle = FALSE,
#line 9068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9070
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9071
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9074
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9076
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9075
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9078
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9079
        .trainerName = _("ANGELINA"),
#line 9080
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9081
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9082
F_TRAINER_FEMALE | 
#line 9083
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9084
        .doubleBattle = FALSE,
#line 9085
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9087
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9088
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9091
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9093
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9092
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9095
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9096
        .trainerName = _("KAI"),
#line 9097
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9098
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9100
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9101
        .doubleBattle = FALSE,
#line 9102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9104
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9105
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9108
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9109
        .trainerName = _("CHARLOTTE"),
#line 9110
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9111
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9112
F_TRAINER_FEMALE | 
#line 9113
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9114
        .doubleBattle = FALSE,
#line 9115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9117
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9119
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9118
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9121
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9122
        .trainerName = _("DEANDRE"),
#line 9123
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9124
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9126
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9127
        .doubleBattle = FALSE,
#line 9128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9130
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9131
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9134
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9136
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9135
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9138
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9140
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9139
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9142
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9143
        .trainerName = _("GRUNT"),
#line 9144
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9145
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9147
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9148
        .doubleBattle = FALSE,
#line 9149
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9151
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9152
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9155
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9156
        .trainerName = _("GRUNT"),
#line 9157
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9158
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9160
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9161
        .doubleBattle = FALSE,
#line 9162
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9164
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9166
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9165
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9168
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9169
        .trainerName = _("GRUNT"),
#line 9170
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9171
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9173
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9174
        .doubleBattle = FALSE,
#line 9175
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9177
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9179
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9178
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9181
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9182
        .trainerName = _("GRUNT"),
#line 9183
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9184
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9186
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9187
        .doubleBattle = FALSE,
#line 9188
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9190
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9191
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9194
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9196
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9195
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9198
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9207
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9208
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9211
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9213
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9212
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9215
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9216
        .trainerName = _("GRUNT"),
#line 9217
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9218
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9220
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9221
        .doubleBattle = FALSE,
#line 9222
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9224
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9225
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9228
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9229
        .trainerName = _("GRUNT"),
#line 9230
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9231
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9233
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9234
        .doubleBattle = FALSE,
#line 9235
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9237
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9239
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9238
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9241
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9242
        .trainerName = _("GRUNT"),
#line 9243
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9244
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9246
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9247
        .doubleBattle = FALSE,
#line 9248
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9250
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9252
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9251
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9254
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9255
        .trainerName = _("GRUNT"),
#line 9256
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9257
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9259
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9260
        .doubleBattle = FALSE,
#line 9261
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9263
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9264
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9267
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9268
        .trainerName = _("GRUNT"),
#line 9269
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9270
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9272
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9273
        .doubleBattle = FALSE,
#line 9274
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9276
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9277
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9280
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9281
        .trainerName = _("GRUNT"),
#line 9282
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9283
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9285
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9286
        .doubleBattle = FALSE,
#line 9287
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9289
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9290
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9293
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9294
        .trainerName = _("GRUNT"),
#line 9295
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9296
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9298
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9299
        .doubleBattle = FALSE,
#line 9300
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9302
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9303
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9306
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9307
        .trainerName = _("GRUNT"),
#line 9308
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9309
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9311
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9312
        .doubleBattle = FALSE,
#line 9313
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9315
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9316
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9319
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9320
        .trainerName = _("GRUNT"),
#line 9321
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9322
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9323
F_TRAINER_FEMALE | 
#line 9324
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9325
        .doubleBattle = FALSE,
#line 9326
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9328
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9329
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9332
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9333
        .trainerName = _("GRUNT"),
#line 9334
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9335
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9336
F_TRAINER_FEMALE | 
#line 9337
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9338
        .doubleBattle = FALSE,
#line 9339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9341
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9342
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9345
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9346
        .trainerName = _("GRUNT"),
#line 9347
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9348
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9349
F_TRAINER_FEMALE | 
#line 9350
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9351
        .doubleBattle = FALSE,
#line 9352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9355
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9358
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9359
        .trainerName = _("TABITHA"),
#line 9360
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9361
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9363
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9364
        .doubleBattle = FALSE,
#line 9365
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9367
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9370
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9368
            .ability = ABILITY_DROUGHT,
#line 9369
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9371
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9376
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9376
            .heldItem = ITEM_POISON_BARB,
#line 9379
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9377
            .ability = ABILITY_LEVITATE,
#line 9378
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9380
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9385
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9385
            .heldItem = ITEM_LIFE_ORB,
#line 9388
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9386
            .ability = ABILITY_LEVITATE,
#line 9387
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9389
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9394
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9394
            .heldItem = ITEM_FOCUS_SASH,
#line 9397
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9395
            .ability = ABILITY_OWN_TEMPO,
#line 9396
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9398
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9403
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9404
        .trainerName = _("DARCY"),
#line 9405
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9406
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9407
F_TRAINER_FEMALE | 
#line 9408
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9409
        .items = { ITEM_HYPER_POTION },
#line 9410
        .doubleBattle = FALSE,
#line 9411
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9413
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9415
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9414
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9417
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9418
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9421
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9422
        .trainerName = _("MAXIE"),
#line 9423
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9424
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9426
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9427
        .doubleBattle = FALSE,
#line 9428
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9430
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9430
            .heldItem = ITEM_ROCKY_HELMET,
#line 9433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9431
            .ability = ABILITY_ROCK_HEAD,
#line 9432
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9433
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9438
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .heldItem = ITEM_AIR_BALLOON,
#line 9441
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9439
            .ability = ABILITY_HEAVY_METAL,
#line 9440
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9441
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9446
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9446
            .heldItem = ITEM_SHARP_BEAK,
#line 9449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9447
            .ability = ABILITY_INNER_FOCUS,
#line 9448
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9449
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9454
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9455
        .trainerName = _("PETE"),
#line 9456
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9457
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9459
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9460
        .doubleBattle = FALSE,
#line 9461
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9463
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9464
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9467
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9468
        .trainerName = _("ISABELLE"),
#line 9469
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9470
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9471
F_TRAINER_FEMALE | 
#line 9472
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9473
        .doubleBattle = FALSE,
#line 9474
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9476
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9478
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9477
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9480
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9481
        .trainerName = _("ANDRES"),
#line 9482
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9483
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9485
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9486
        .doubleBattle = FALSE,
#line 9487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9489
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9491
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9490
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9493
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9495
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9494
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9497
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9498
        .trainerName = _("JOSUE"),
#line 9499
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9500
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9502
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9503
        .doubleBattle = FALSE,
#line 9504
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9506
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9508
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9507
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9510
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9512
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9511
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9514
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9515
        .trainerName = _("CAMRON"),
#line 9516
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9517
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9519
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9520
        .doubleBattle = FALSE,
#line 9521
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9523
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9524
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9527
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9528
        .trainerName = _("CORY"),
#line 9529
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9530
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9532
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9533
        .doubleBattle = FALSE,
#line 9534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9536
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9537
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9540
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9541
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9544
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9546
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9545
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9548
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9549
        .trainerName = _("CAROLINA"),
#line 9550
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9551
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9552
F_TRAINER_FEMALE | 
#line 9553
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9554
        .items = { ITEM_HYPER_POTION },
#line 9555
        .doubleBattle = FALSE,
#line 9556
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9558
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9560
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9559
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9562
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9564
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9563
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9566
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9568
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9567
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9570
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9571
        .trainerName = _("ELIJAH"),
#line 9572
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9573
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9575
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9576
        .doubleBattle = FALSE,
#line 9577
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9579
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9580
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9583
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9584
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9587
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9588
        .trainerName = _("CELIA"),
#line 9589
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9590
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9591
F_TRAINER_FEMALE | 
#line 9592
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9593
        .doubleBattle = FALSE,
#line 9594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9596
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9597
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9600
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9601
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9604
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9605
        .trainerName = _("BRYAN"),
#line 9606
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9607
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9609
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9610
        .doubleBattle = FALSE,
#line 9611
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9613
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9614
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9617
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9618
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9621
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9622
        .trainerName = _("BRANDEN"),
#line 9623
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9624
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9626
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9627
        .doubleBattle = FALSE,
#line 9628
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9630
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9631
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9634
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9635
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9638
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9639
        .trainerName = _("BRYANT"),
#line 9640
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9641
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9643
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9644
        .doubleBattle = FALSE,
#line 9645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9647
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9648
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9651
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9652
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9655
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9656
        .trainerName = _("SHAYLA"),
#line 9657
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9658
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9659
F_TRAINER_FEMALE | 
#line 9660
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9661
        .doubleBattle = FALSE,
#line 9662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9664
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9665
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9668
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9670
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9669
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9672
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9673
        .trainerName = _("KYRA"),
#line 9674
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9675
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9676
F_TRAINER_FEMALE | 
#line 9677
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9678
        .doubleBattle = FALSE,
#line 9679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9681
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9682
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9685
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9686
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9689
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9690
        .trainerName = _("JAIDEN"),
#line 9691
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9692
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9694
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9695
        .doubleBattle = FALSE,
#line 9696
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9698
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9699
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9702
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9704
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9703
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9706
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9707
        .trainerName = _("ALIX"),
#line 9708
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9709
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9710
F_TRAINER_FEMALE | 
#line 9711
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9712
        .doubleBattle = FALSE,
#line 9713
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9715
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9716
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9719
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9720
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9723
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9724
        .trainerName = _("HELENE"),
#line 9725
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9726
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9727
F_TRAINER_FEMALE | 
#line 9728
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9729
        .doubleBattle = FALSE,
#line 9730
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9732
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9733
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9736
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9738
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9737
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9740
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9741
        .trainerName = _("MARLENE"),
#line 9742
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9743
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9744
F_TRAINER_FEMALE | 
#line 9745
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9746
        .doubleBattle = FALSE,
#line 9747
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9749
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9750
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9753
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9754
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9757
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9758
        .trainerName = _("DEVAN"),
#line 9759
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9760
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9762
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9763
        .doubleBattle = FALSE,
#line 9764
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9766
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9767
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9770
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9771
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9774
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9775
        .trainerName = _("JOHNSON"),
#line 9776
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9777
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9779
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9780
        .doubleBattle = FALSE,
#line 9781
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9783
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9784
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9787
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9788
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9791
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9792
        .trainerName = _("MELINA"),
#line 9793
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9794
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9795
F_TRAINER_FEMALE | 
#line 9796
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9797
        .doubleBattle = FALSE,
#line 9798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9800
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9801
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9804
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9805
        .trainerName = _("MELISSA"),
#line 9806
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9807
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9808
F_TRAINER_FEMALE | 
#line 9809
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9810
        .doubleBattle = FALSE,
#line 9811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9813
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9814
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9817
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9818
        .trainerName = _("BRANDI"),
#line 9819
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9820
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9821
F_TRAINER_FEMALE | 
#line 9822
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9823
        .doubleBattle = FALSE,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9826
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9827
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9830
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9831
        .trainerName = _("AISHA"),
#line 9832
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9833
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9834
F_TRAINER_FEMALE | 
#line 9835
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9836
        .doubleBattle = FALSE,
#line 9837
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9839
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9841
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9840
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9843
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9844
        .trainerName = _("MAKAYLA"),
#line 9845
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9846
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9847
F_TRAINER_FEMALE | 
#line 9848
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9849
        .items = { ITEM_HYPER_POTION },
#line 9850
        .doubleBattle = FALSE,
#line 9851
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9853
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9854
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9857
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9859
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9858
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9861
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9862
        .trainerName = _("FABIAN"),
#line 9863
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9864
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9866
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9867
        .doubleBattle = FALSE,
#line 9868
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9870
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9871
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9874
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9875
        .trainerName = _("DAYTON"),
#line 9876
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9877
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9879
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9880
        .doubleBattle = FALSE,
#line 9881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9883
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9884
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9887
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9889
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9888
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9891
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9892
        .trainerName = _("RACHEL"),
#line 9893
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9894
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9895
F_TRAINER_FEMALE | 
#line 9896
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9897
        .doubleBattle = FALSE,
#line 9898
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9900
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9901
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9904
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9905
        .trainerName = _("LEONEL"),
#line 9906
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9907
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9909
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9910
        .items = { ITEM_HYPER_POTION },
#line 9911
        .doubleBattle = FALSE,
#line 9912
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9914
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9916
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9915
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9918
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9919
        .trainerName = _("CALLIE"),
#line 9920
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9921
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9922
F_TRAINER_FEMALE | 
#line 9923
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9924
        .doubleBattle = FALSE,
#line 9925
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9927
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9929
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9928
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9931
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9932
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9935
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9936
        .trainerName = _("CALE"),
#line 9937
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9938
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9940
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9941
        .doubleBattle = FALSE,
#line 9942
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9944
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9945
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9948
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9949
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9952
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9953
        .trainerName = _("MYLES"),
#line 9954
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9955
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9957
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9958
        .doubleBattle = FALSE,
#line 9959
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9961
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9962
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9965
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9967
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9966
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9969
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9971
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9970
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9973
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9974
        .trainerName = _("PAT"),
#line 9975
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9976
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9977
F_TRAINER_FEMALE | 
#line 9978
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9979
        .doubleBattle = FALSE,
#line 9980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9982
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9984
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9983
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9986
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9988
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9987
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9990
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9992
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9991
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9995
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 9996
        .trainerName = _("CRISTIN"),
#line 9997
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9998
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9999
F_TRAINER_FEMALE | 
#line 10000
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10001
        .items = { ITEM_HYPER_POTION },
#line 10002
        .doubleBattle = FALSE,
#line 10003
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10005
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10007
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10006
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10009
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10011
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10010
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10013
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10014
        .trainerName = _("MAY"),
#line 10015
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10016
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10017
F_TRAINER_FEMALE | 
#line 10018
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10019
        .doubleBattle = FALSE,
#line 10020
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10022
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10024
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10023
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10026
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10028
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10027
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10030
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10031
        .trainerName = _("MAY"),
#line 10032
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10033
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10034
F_TRAINER_FEMALE | 
#line 10035
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10036
        .doubleBattle = FALSE,
#line 10037
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10039
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10041
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10040
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10043
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10045
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10044
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10047
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
    {
#line 10048
        .trainerName = _("GRUNT"),
#line 10049
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10050
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10052
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10053
        .doubleBattle = FALSE,
#line 10054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10056
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10056
            .heldItem = ITEM_EVIOLITE,
#line 10058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10057
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10059
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
    {
#line 10060
        .trainerName = _("GRUNT"),
#line 10061
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10062
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10064
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10065
        .doubleBattle = FALSE,
#line 10066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10068
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10070
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10069
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10071
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10072
        .trainerName = _("GRUNT"),
#line 10073
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10074
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10076
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10077
        .doubleBattle = FALSE,
#line 10078
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10080
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10082
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10081
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10083
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10084
        .trainerName = _("GRUNT"),
#line 10085
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10086
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10088
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10089
        .doubleBattle = FALSE,
#line 10090
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10092
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10094
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10093
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10095
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10096
        .trainerName = _("GRUNT"),
#line 10097
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10098
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10100
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10101
        .doubleBattle = FALSE,
#line 10102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10104
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10105
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10107
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10109
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10108
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10110
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 10111
        .trainerName = _("GRUNT"),
#line 10112
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10113
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10115
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10116
        .doubleBattle = FALSE,
#line 10117
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10119
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10121
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10120
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10123
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10124
        .trainerName = _("GRUNT"),
#line 10125
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10126
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10128
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10129
        .doubleBattle = FALSE,
#line 10130
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10132
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10134
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10133
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10135
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 10136
        .trainerName = _("GRUNT"),
#line 10137
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10138
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10140
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10141
        .doubleBattle = FALSE,
#line 10142
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10144
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10145
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10147
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 10148
        .trainerName = _("GRUNT"),
#line 10149
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10150
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10152
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10153
        .doubleBattle = FALSE,
#line 10154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10156
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10157
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10159
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10161
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10160
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10162
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10163
        .trainerName = _("GRUNT"),
#line 10164
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10165
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10167
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10168
        .doubleBattle = FALSE,
#line 10169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10171
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10172
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10174
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10175
        .trainerName = _("GRUNT"),
#line 10176
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10177
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10179
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10180
        .doubleBattle = FALSE,
#line 10181
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10183
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10185
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10184
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10186
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10188
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10187
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10189
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10190
        .trainerName = _("GRUNT"),
#line 10191
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10192
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10194
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10195
        .doubleBattle = FALSE,
#line 10196
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10198
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10200
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10199
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10201
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10203
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10202
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10204
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10205
        .trainerName = _("TATE&LIZA"),
#line 10206
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10207
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10209
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10210
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10211
        .doubleBattle = TRUE,
#line 10212
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10214
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10215
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10217
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10222
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10224
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10223
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10225
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10230
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10232
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10231
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10233
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10238
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10238
            .heldItem = ITEM_CHESTO_BERRY,
#line 10240
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10239
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10241
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10246
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10246
            .heldItem = ITEM_CHESTO_BERRY,
#line 10248
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10247
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10249
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10254
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10254
            .heldItem = ITEM_SITRUS_BERRY,
#line 10256
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10255
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10257
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10262
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10263
        .trainerName = _("ANGELO"),
#line 10264
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10265
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10267
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10268
        .doubleBattle = FALSE,
#line 10269
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10271
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10273
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10272
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10275
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10277
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10276
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10279
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10280
        .trainerName = _("DARIUS"),
#line 10281
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10282
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10284
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10285
        .doubleBattle = FALSE,
#line 10286
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10288
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10290
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10289
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10292
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10293
        .trainerName = _("STEVEN"),
#line 10294
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10295
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10297
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10298
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10299
        .doubleBattle = FALSE,
#line 10300
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10302
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10304
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10303
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10305
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10310
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10311
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10313
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10318
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10319
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10321
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10326
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10327
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10329
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10334
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10335
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10337
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10342
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10342
            .heldItem = ITEM_SITRUS_BERRY,
#line 10344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10343
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10345
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10350
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10351
        .trainerName = _("ANABEL"),
#line 10352
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10353
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10354
F_TRAINER_FEMALE | 
#line 10355
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10356
        .doubleBattle = FALSE,
#line 10357
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10359
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10361
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10360
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10363
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10364
        .trainerName = _("TUCKER"),
#line 10365
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10366
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10368
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10369
        .doubleBattle = FALSE,
#line 10370
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10372
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10374
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10373
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10376
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10377
        .trainerName = _("SPENSER"),
#line 10378
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10379
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10381
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10382
        .doubleBattle = FALSE,
#line 10383
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10385
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10387
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10386
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10389
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10390
        .trainerName = _("GRETA"),
#line 10391
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10392
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10393
F_TRAINER_FEMALE | 
#line 10394
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10395
        .doubleBattle = FALSE,
#line 10396
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10398
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10399
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10402
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10403
        .trainerName = _("GRUNT"),
#line 10404
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10405
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10407
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10408
        .doubleBattle = FALSE,
#line 10409
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10411
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10413
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10412
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10415
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10416
        .trainerName = _("GHOSTESS"),
#line 10417
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10418
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10419
F_TRAINER_FEMALE | 
#line 10420
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10421
        .doubleBattle = FALSE,
#line 10422
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10424
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10424
            .heldItem = ITEM_TWISTED_SPOON,
#line 10427
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10425
            .ability = ABILITY_THICK_FAT,
#line 10426
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10427
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10432
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10432
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10435
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10433
            .ability = ABILITY_WONDER_SKIN,
#line 10434
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10435
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10440
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10440
            .heldItem = ITEM_METRONOME,
#line 10443
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10441
            .ability = ABILITY_ROCK_HEAD,
#line 10442
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10443
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10448
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10448
            .heldItem = ITEM_ASSAULT_VEST,
#line 10451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10449
            .ability = ABILITY_CURSED_BODY,
#line 10450
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10451
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10456
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10457
        .trainerName = _("JORDAN"),
#line 10458
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10459
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10461
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10462
        .doubleBattle = FALSE,
#line 10463
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10465
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10468
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10466
            .ability = ABILITY_CHLOROPHYLL,
#line 10467
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10468
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10473
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10473
            .heldItem = ITEM_EVIOLITE,
#line 10476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10474
            .ability = ABILITY_PRESSURE,
#line 10475
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10476
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10481
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10481
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10484
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10482
            .ability = ABILITY_LIQUID_OOZE,
#line 10483
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10484
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10489
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10489
            .heldItem = ITEM_QUICK_CLAW,
#line 10492
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10490
            .ability = ABILITY_OBLIVIOUS,
#line 10491
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10492
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10497
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10497
            .heldItem = ITEM_SHARP_BEAK,
#line 10500
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10498
            .ability = ABILITY_INNER_FOCUS,
#line 10499
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10500
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10505
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10506
        .trainerName = _("JORDAN"),
#line 10507
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10508
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10510
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10511
        .doubleBattle = FALSE,
#line 10512
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10514
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10514
            .heldItem = ITEM_WIDE_LENS,
#line 10517
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10515
            .ability = ABILITY_CHLOROPHYLL,
#line 10516
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10517
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10522
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10522
            .heldItem = ITEM_LIFE_ORB,
#line 10525
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10523
            .ability = ABILITY_PRESSURE,
#line 10524
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10525
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10530
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10530
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10533
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10531
            .ability = ABILITY_LIQUID_OOZE,
#line 10532
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10533
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10538
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10538
            .heldItem = ITEM_CHOICE_SPECS,
#line 10541
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10539
            .ability = ABILITY_OBLIVIOUS,
#line 10540
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10541
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10546
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10546
            .heldItem = ITEM_SHARP_BEAK,
#line 10549
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10547
            .ability = ABILITY_INNER_FOCUS,
#line 10548
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10549
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10554
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10554
            .heldItem = ITEM_ASSAULT_VEST,
#line 10557
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10555
            .ability = ABILITY_AIR_LOCK,
#line 10556
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10557
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10562
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10563
        .trainerName = _("GHOSTESS"),
#line 10564
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10565
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10566
F_TRAINER_FEMALE | 
#line 10567
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10568
        .doubleBattle = FALSE,
#line 10569
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10571
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10571
            .heldItem = ITEM_EXPERT_BELT,
#line 10574
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10572
            .ability = ABILITY_THICK_FAT,
#line 10573
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10574
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10579
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10579
            .heldItem = ITEM_MUSCLE_BAND,
#line 10582
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10580
            .ability = ABILITY_WONDER_SKIN,
#line 10581
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10582
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10587
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10587
            .heldItem = ITEM_WIDE_LENS,
#line 10590
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10588
            .ability = ABILITY_INTIMIDATE,
#line 10589
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10590
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10595
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10595
            .heldItem = ITEM_ASSAULT_VEST,
#line 10598
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10596
            .ability = ABILITY_CURSED_BODY,
#line 10597
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10598
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10603
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10604
        .trainerName = _("GRUNT"),
#line 10605
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10606
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10608
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10609
        .doubleBattle = FALSE,
#line 10610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10612
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10614
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10613
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10615
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10616
        .trainerName = _("GRUNT"),
#line 10617
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10618
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10620
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10621
        .doubleBattle = FALSE,
#line 10622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10624
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10626
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10625
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10627
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10628
        .trainerName = _("GRUNT"),
#line 10629
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10630
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10632
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10633
        .doubleBattle = FALSE,
#line 10634
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10636
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10638
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10637
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10639
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10640
        .trainerName = _("GRUNT"),
#line 10641
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10642
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10644
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10645
        .doubleBattle = FALSE,
#line 10646
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10648
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10650
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10649
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10651
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10652
        .trainerName = _("CORY"),
#line 10653
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10654
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10656
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10657
        .doubleBattle = FALSE,
#line 10658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10660
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10662
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10661
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10664
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10666
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10665
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10668
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10670
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10669
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10672
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10673
        .trainerName = _("CORY"),
#line 10674
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10675
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10677
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10678
        .doubleBattle = FALSE,
#line 10679
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10681
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10683
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10682
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10685
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10687
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10686
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10689
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10691
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10690
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10693
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10694
        .trainerName = _("MARIELA"),
#line 10695
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10696
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10697
F_TRAINER_FEMALE | 
#line 10698
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10699
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10701
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10702
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10705
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10706
        .trainerName = _("ALVARO"),
#line 10707
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10708
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10710
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10711
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10713
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10714
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10717
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10718
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10721
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10722
        .trainerName = _("EVERETT"),
#line 10723
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10724
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10726
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10727
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10729
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10730
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10733
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10734
        .trainerName = _("RED"),
#line 10735
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10736
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10738
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10739
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10741
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10742
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10745
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10746
        .trainerName = _("LEAF"),
#line 10747
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10748
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10749
F_TRAINER_FEMALE | 
#line 10750
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10751
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10753
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10754
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10757
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10758
        .trainerName = _("SAMUEL"),
#line 10759
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10760
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10762
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10763
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10765
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10766
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10769
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10770
        .trainerName = _("MAY"),
#line 10771
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10772
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10773
F_TRAINER_FEMALE | 
#line 10774
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10775
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10777
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10779
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10778
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
