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
            .lvl = 50,
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
            .lvl = 50,
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
            .lvl = 51,
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
            .lvl = 51,
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
            .lvl = 51,
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
            .lvl = 47,
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
            .lvl = 47,
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
            .lvl = 47,
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
            .lvl = 51,
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
            .lvl = 51,
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
            .lvl = 50,
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
            .lvl = 50,
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
            .lvl = 50,
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
            .lvl = 50,
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
            .lvl = 51,
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
            .lvl = 51,
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
            .lvl = 51,
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
            .lvl = 51,
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
            .lvl = 48,
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
            .lvl = 48,
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
            .lvl = 51,
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
            .lvl = 72,
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
            .lvl = 72,
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
            .lvl = 72,
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
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3001
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3002
            .ability = ABILITY_REGENERATOR,
#line 3003
            .lvl = 72,
#line 3004
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3005
                MOVE_WISH,
                MOVE_PROTECT,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
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
            .lvl = 72,
#line 3013
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3014
                MOVE_SUBSTITUTE,
                MOVE_CALM_MIND,
                MOVE_PSYSHOCK,
                MOVE_HYPER_VOICE,
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
            .lvl = 72,
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
            .lvl = 73,
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
            .lvl = 73,
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
            .lvl = 73,
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
            .lvl = 73,
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
            .lvl = 73,
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
            .lvl = 73,
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
            .lvl = 74,
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
            .lvl = 74,
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
            .lvl = 74,
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
            .lvl = 74,
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
            .lvl = 74,
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
            .lvl = 74,
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
            .heldItem = ITEM_LUM_BERRY,
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
            .heldItem = ITEM_LUM_BERRY,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .lvl = 40,
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
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3644
            .heldItem = ITEM_LEFTOVERS,
#line 3648
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3645
            .ability = ABILITY_SHADOW_TAG,
#line 3646
            .lvl = 67,
#line 3647
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3648
                MOVE_TRICK_ROOM,
                MOVE_PROTECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3653
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3653
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3657
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3654
            .ability = ABILITY_CURSED_BODY,
#line 3655
            .lvl = 67,
#line 3656
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3657
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
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
            .heldItem = ITEM_LEFTOVERS,
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
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3689
            .heldItem = ITEM_SITRUS_BERRY,
#line 3693
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3690
            .ability = ABILITY_MUMMY,
#line 3691
            .lvl = 67,
#line 3692
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3693
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
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
            .heldItem = ITEM_LEFTOVERS,
#line 4236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4233
            .ability = ABILITY_THICK_FAT,
#line 4234
            .lvl = 75,
#line 4235
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4236
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 4241
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4241
            .heldItem = ITEM_CHOICE_BAND,
#line 4245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4242
            .ability = ABILITY_INTIMIDATE,
#line 4243
            .lvl = 75,
#line 4244
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4245
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4250
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4250
            .heldItem = ITEM_LIFE_ORB,
#line 4254
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4251
            .ability = ABILITY_OVERGROW,
#line 4252
            .lvl = 75,
#line 4253
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4254
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 4259
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4259
            .heldItem = ITEM_FOCUS_SASH,
#line 4263
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4260
            .ability = ABILITY_MAGIC_GUARD,
#line 4261
            .lvl = 75,
#line 4262
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4263
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4268
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4268
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 4272
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4269
            .ability = ABILITY_STATIC,
#line 4270
            .lvl = 75,
#line 4271
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4272
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4277
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4277
            .heldItem = ITEM_EVIOLITE,
#line 4281
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4278
            .ability = ABILITY_SWIFT_SWIM,
#line 4279
            .lvl = 78,
#line 4280
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4281
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4286
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4287
        .trainerName = _("ANDREW"),
#line 4288
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4289
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4291
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4292
        .doubleBattle = FALSE,
#line 4293
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4295
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4296
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4299
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4301
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4300
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4303
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4305
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4304
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4307
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4308
        .trainerName = _("IVAN"),
#line 4309
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4310
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4312
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4313
        .doubleBattle = FALSE,
#line 4314
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4316
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4317
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4320
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4321
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4324
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4326
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4325
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4328
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4329
        .trainerName = _("CLAUDE"),
#line 4330
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4331
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4333
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4334
        .doubleBattle = FALSE,
#line 4335
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4337
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4338
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4341
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4342
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4345
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4346
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4349
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT] =
    {
#line 4350
        .trainerName = _("ELLIOT"),
#line 4351
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4352
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4354
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4355
        .doubleBattle = FALSE,
#line 4356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4358
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4359
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4362
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4363
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4366
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4367
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4370
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4371
        .trainerName = _("NED"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4379
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4381
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4380
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4383
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4384
        .trainerName = _("DALE"),
#line 4385
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4386
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4388
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4389
        .doubleBattle = FALSE,
#line 4390
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4392
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4393
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4396
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4398
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4397
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4400
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4402
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4401
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4404
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4405
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4408
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4409
        .trainerName = _("NOLAN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4417
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4419
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4418
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4421
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4422
        .trainerName = _("BARNY"),
#line 4423
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4424
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4426
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4427
        .doubleBattle = FALSE,
#line 4428
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4430
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4431
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4434
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4436
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4435
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4438
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4439
        .trainerName = _("WADE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4447
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4449
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4448
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4450
    [DIFFICULTY_NORMAL][TRAINER_ABIGAIL] =
    {
#line 4451
        .trainerName = _("ABIGAL"),
#line 4452
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4453
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4454
F_TRAINER_FEMALE | 
#line 4455
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4456
        .doubleBattle = FALSE,
#line 4457
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4459
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4461
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4460
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4462
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4463
        .trainerName = _("CARTER"),
#line 4464
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4465
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4467
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4468
        .doubleBattle = FALSE,
#line 4469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4471
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4473
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4472
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4475
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4477
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4476
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4479
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4480
        .trainerName = _("RONALD"),
#line 4481
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4482
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4484
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4485
        .doubleBattle = FALSE,
#line 4486
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4488
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4489
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4493
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4494
        .trainerName = _("JACOB"),
#line 4495
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4496
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
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
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4504
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4503
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4506
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4508
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4507
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4510
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4512
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4511
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4514
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4515
        .trainerName = _("ANTHONY"),
#line 4516
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4517
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
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
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4525
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4524
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4527
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4529
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4528
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4531
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN] =
    {
#line 4532
        .trainerName = _("BENJAMIN"),
#line 4533
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4534
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4536
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4537
        .doubleBattle = FALSE,
#line 4538
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4540
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4541
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4544
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4545
        .trainerName = _("JASMINE"),
#line 4546
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4547
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4548
F_TRAINER_FEMALE | 
#line 4549
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4550
        .doubleBattle = FALSE,
#line 4551
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4553
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4555
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4554
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4557
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4559
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4558
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4561
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4563
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4562
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4565
    [DIFFICULTY_NORMAL][TRAINER_DYLAN] =
    {
#line 4566
        .trainerName = _("DYLAN"),
#line 4567
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4568
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4570
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4571
        .doubleBattle = FALSE,
#line 4572
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4574
            .species = SPECIES_DELIBIRD,
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
    [DIFFICULTY_NORMAL][TRAINER_MARIA] =
    {
#line 4579
        .trainerName = _("MARIA"),
#line 4580
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4581
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4582
F_TRAINER_FEMALE | 
#line 4583
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4584
        .doubleBattle = FALSE,
#line 4585
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4587
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4589
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4588
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4591
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4592
        .trainerName = _("CAMDEN"),
#line 4593
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4594
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4596
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4597
        .doubleBattle = FALSE,
#line 4598
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4600
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4601
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4604
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4606
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4605
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4608
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4609
        .trainerName = _("DEMETRIUS"),
#line 4610
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4611
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4613
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4614
        .doubleBattle = FALSE,
#line 4615
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4617
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4619
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4618
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4621
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4623
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4622
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4625
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH] =
    {
#line 4626
        .trainerName = _("ISAIAH"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4634
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4636
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4635
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4638
    [DIFFICULTY_NORMAL][TRAINER_PABLO] =
    {
#line 4639
        .trainerName = _("PABLO"),
#line 4640
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4641
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4643
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4644
        .doubleBattle = FALSE,
#line 4645
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4647
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4648
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4651
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4653
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4652
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4655
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4656
        .trainerName = _("CHASE"),
#line 4657
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4658
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4660
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4661
        .doubleBattle = FALSE,
#line 4662
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4664
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4665
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4668
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4670
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4669
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4672
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4673
        .trainerName = _("ISOBEL"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4681
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4682
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4685
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4686
        .trainerName = _("DONNY"),
#line 4687
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4688
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4689
F_TRAINER_FEMALE | 
#line 4690
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4691
        .doubleBattle = FALSE,
#line 4692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4694
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4695
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4698
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4700
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4699
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4702
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4703
        .trainerName = _("TALIA"),
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
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4712
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4715
    [DIFFICULTY_NORMAL][TRAINER_KATELYN] =
    {
#line 4716
        .trainerName = _("KATELYN"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4724
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4725
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4728
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4729
        .trainerName = _("ALLISON"),
#line 4730
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4731
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4732
F_TRAINER_FEMALE | 
#line 4733
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4734
        .doubleBattle = FALSE,
#line 4735
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4737
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4738
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4741
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4743
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4742
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4745
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS] =
    {
#line 4746
        .trainerName = _("NICOLAS"),
#line 4747
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4748
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4750
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4751
        .doubleBattle = FALSE,
#line 4752
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4754
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4756
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4755
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4758
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4760
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4759
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4762
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4763
        .trainerName = _("AARON"),
#line 4764
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4765
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4767
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4768
        .doubleBattle = FALSE,
#line 4769
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4771
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4773
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4772
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4775
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4776
        .trainerName = _("PERRY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4784
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4786
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4785
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4788
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4789
        .trainerName = _("HUGH"),
#line 4790
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4791
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4793
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4794
        .doubleBattle = FALSE,
#line 4795
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4797
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4799
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4798
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4801
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4803
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4802
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4805
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4806
        .trainerName = _("PHIL"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4814
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4816
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4815
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4818
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4819
        .trainerName = _("JARED"),
#line 4820
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4821
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4823
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4824
        .doubleBattle = FALSE,
#line 4825
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4827
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4829
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4828
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4831
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4833
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4832
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4835
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4837
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4836
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4839
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4840
        .trainerName = _("HUMBERTO"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4848
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4850
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4849
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4852
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4853
        .trainerName = _("PRESLEY"),
#line 4854
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4855
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4857
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4858
        .doubleBattle = FALSE,
#line 4859
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4861
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4863
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4862
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4865
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4867
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4866
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4869
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4870
        .trainerName = _("EDWARDO"),
#line 4871
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4872
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4874
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4875
        .doubleBattle = FALSE,
#line 4876
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4878
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4880
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4879
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4882
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4884
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4883
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4886
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4887
        .trainerName = _("COLIN"),
#line 4888
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4889
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4891
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4892
        .doubleBattle = FALSE,
#line 4893
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4895
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4897
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4896
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4899
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4901
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4900
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4903
    [DIFFICULTY_NORMAL][TRAINER_ROBERT] =
    {
#line 4904
        .trainerName = _("ROBERT"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4912
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4914
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4913
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4916
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4917
        .trainerName = _("BENNY"),
#line 4918
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4919
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4921
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4922
        .doubleBattle = FALSE,
#line 4923
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4925
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4927
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4926
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4929
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4931
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4930
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4933
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4935
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4934
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4937
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4938
        .trainerName = _("CHESTER"),
#line 4939
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4940
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4942
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4943
        .doubleBattle = FALSE,
#line 4944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4946
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4948
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4947
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4950
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4951
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4954
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4955
        .trainerName = _("ALEX"),
#line 4956
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4957
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4959
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4960
        .doubleBattle = FALSE,
#line 4961
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4963
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4965
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4964
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4967
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4969
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4968
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4971
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4972
        .trainerName = _("BECK"),
#line 4973
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4974
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4976
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4977
        .doubleBattle = FALSE,
#line 4978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4980
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4981
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4984
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4985
        .trainerName = _("YASU"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4993
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4995
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4994
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4997
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4998
        .trainerName = _("TAKASHI"),
#line 4999
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5000
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5002
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5003
        .doubleBattle = FALSE,
#line 5004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5006
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5008
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5007
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5010
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5011
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5014
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 5015
        .trainerName = _("DIANNE"),
#line 5016
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5017
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5018
F_TRAINER_FEMALE | 
#line 5019
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5020
        .items = { ITEM_FULL_RESTORE },
#line 5021
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5023
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5025
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5024
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5026
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 5029
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5030
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5032
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 5035
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 5036
        .trainerName = _("JANI"),
#line 5037
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 5038
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 5039
F_TRAINER_FEMALE | 
#line 5040
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5041
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5043
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5045
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5044
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5047
    [DIFFICULTY_NORMAL][TRAINER_LAO] =
    {
#line 5048
        .trainerName = _("LAO"),
#line 5049
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5050
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5052
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5053
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5055
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5056
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5059
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5060
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5063
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5065
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5064
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5067
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 5068
        .trainerName = _("LUNG"),
#line 5069
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5070
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5072
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5073
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5075
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5077
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5076
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5079
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5081
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5080
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5083
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 5084
        .trainerName = _("JOCELYN"),
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
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5094
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 5093
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5096
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 5097
        .trainerName = _("LAURA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5105
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5107
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5106
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5109
    [DIFFICULTY_NORMAL][TRAINER_CYNDY] =
    {
#line 5110
        .trainerName = _("CYNDY"),
#line 5111
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5112
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5113
F_TRAINER_FEMALE | 
#line 5114
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5115
        .doubleBattle = FALSE,
#line 5116
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5118
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5120
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5119
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5122
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5124
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5123
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5126
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5127
        .trainerName = _("CORA"),
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
            .species = SPECIES_MEDITITE,
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
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5140
        .trainerName = _("PAULA"),
#line 5141
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5142
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5143
F_TRAINER_FEMALE | 
#line 5144
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5145
        .doubleBattle = FALSE,
#line 5146
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5148
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5150
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5149
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5152
    [DIFFICULTY_NORMAL][TRAINER_MADELINE] =
    {
#line 5153
        .trainerName = _("MADELINE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5161
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5162
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5165
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5166
        .trainerName = _("CLARISSA"),
#line 5167
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5168
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5169
F_TRAINER_FEMALE | 
#line 5170
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5171
        .doubleBattle = FALSE,
#line 5172
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5174
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5175
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5178
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5180
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5179
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5182
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5183
        .trainerName = _("ANGELICA"),
#line 5184
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5185
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5186
F_TRAINER_FEMALE | 
#line 5187
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5188
        .doubleBattle = FALSE,
#line 5189
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5191
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5193
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5192
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5195
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5196
        .trainerName = _("BEVERLY"),
#line 5197
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5198
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5199
F_TRAINER_FEMALE | 
#line 5200
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5201
        .doubleBattle = FALSE,
#line 5202
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5204
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5206
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5205
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5208
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5210
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5209
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5212
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5213
        .trainerName = _("IMANI"),
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
            .species = SPECIES_SNORLAX,
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
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5226
        .trainerName = _("KYLA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5234
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5236
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5235
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5238
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5239
        .trainerName = _("DENISE"),
#line 5240
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5241
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5242
F_TRAINER_FEMALE | 
#line 5243
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5244
        .doubleBattle = FALSE,
#line 5245
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5247
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5248
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5251
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5253
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5252
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5255
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5256
        .trainerName = _("BETH"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5264
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5265
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5268
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5269
        .trainerName = _("TARA"),
#line 5270
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5271
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5272
F_TRAINER_FEMALE | 
#line 5273
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5274
        .doubleBattle = FALSE,
#line 5275
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5277
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5279
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5278
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5281
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5283
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5282
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5285
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5286
        .trainerName = _("MISSY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5294
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5295
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5298
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5299
        .trainerName = _("ALICE"),
#line 5300
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5301
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5302
F_TRAINER_FEMALE | 
#line 5303
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5304
        .doubleBattle = FALSE,
#line 5305
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5307
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5309
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5308
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5311
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5313
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5312
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5315
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5317
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5316
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5319
    [DIFFICULTY_NORMAL][TRAINER_JENNY] =
    {
#line 5320
        .trainerName = _("JENNY"),
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
            .species = SPECIES_LAPRAS,
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
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5333
        .trainerName = _("GRACE"),
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
            .species = SPECIES_OCTILLERY,
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
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5346
        .trainerName = _("TANYA"),
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
            .species = SPECIES_MAGCARGO,
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
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5359
        .trainerName = _("SHARON"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5367
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5368
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5371
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5372
        .trainerName = _("NIKKI"),
#line 5373
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5374
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5375
F_TRAINER_FEMALE | 
#line 5376
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5377
        .doubleBattle = FALSE,
#line 5378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5380
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5382
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5381
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5384
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5385
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5388
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5389
        .trainerName = _("BRENDA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5397
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5399
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5398
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5401
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5402
        .trainerName = _("KATIE"),
#line 5403
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5404
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5405
F_TRAINER_FEMALE | 
#line 5406
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5407
        .doubleBattle = FALSE,
#line 5408
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5410
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5412
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5411
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5414
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5415
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5418
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5419
        .trainerName = _("SUSIE"),
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
            .species = SPECIES_JUMPLUFF,
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
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5432
        .trainerName = _("KARA"),
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
            .species = SPECIES_MAGMORTAR,
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
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5445
        .trainerName = _("DANA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5453
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5455
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5454
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5457
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5458
        .trainerName = _("SIENNA"),
#line 5459
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5460
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5461
F_TRAINER_FEMALE | 
#line 5462
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5463
        .doubleBattle = FALSE,
#line 5464
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5466
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5468
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5467
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5470
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5471
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5474
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5475
        .trainerName = _("DEBRA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5483
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5485
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5484
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5487
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5488
        .trainerName = _("LINDA"),
#line 5489
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5490
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5491
F_TRAINER_FEMALE | 
#line 5492
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5493
        .doubleBattle = FALSE,
#line 5494
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5496
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5497
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5500
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5501
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5504
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5505
        .trainerName = _("KAYLEE"),
#line 5506
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5507
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5508
F_TRAINER_FEMALE | 
#line 5509
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5510
        .doubleBattle = FALSE,
#line 5511
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5513
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5514
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5517
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5519
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5518
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5521
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5522
        .trainerName = _("LAUREL"),
#line 5523
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5524
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5525
F_TRAINER_FEMALE | 
#line 5526
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5527
        .doubleBattle = FALSE,
#line 5528
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5530
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5532
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5531
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5534
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5536
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5535
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5538
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5539
        .trainerName = _("CARLEE"),
#line 5540
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5541
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5542
F_TRAINER_FEMALE | 
#line 5543
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5544
        .doubleBattle = FALSE,
#line 5545
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5547
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5549
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5548
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5551
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5552
        .trainerName = _("HEIDI"),
#line 5553
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5554
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5555
F_TRAINER_FEMALE | 
#line 5556
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5557
        .doubleBattle = FALSE,
#line 5558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5560
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5561
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5564
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5565
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5569
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5570
        .trainerName = _("BECKY"),
#line 5571
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5572
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5573
F_TRAINER_FEMALE | 
#line 5574
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5575
        .doubleBattle = TRUE,
#line 5576
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5578
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5578
            .heldItem = ITEM_FOCUS_SASH,
#line 5580
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5579
            .lvl = 3,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5581
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5584
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5584
            .heldItem = ITEM_WIDE_LENS,
#line 5587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5585
            .ability = ABILITY_MOODY,
#line 5586
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5587
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5592
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5593
        .trainerName = _("CAROL"),
#line 5594
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5595
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5596
F_TRAINER_FEMALE | 
#line 5597
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5598
        .doubleBattle = FALSE,
#line 5599
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5601
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5603
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5602
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5605
            .species = SPECIES_PLUSLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5607
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5606
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5609
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5610
        .trainerName = _("NANCY"),
#line 5611
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5612
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5613
F_TRAINER_FEMALE | 
#line 5614
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5615
        .doubleBattle = FALSE,
#line 5616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5618
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5619
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5622
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5623
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5626
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5627
        .trainerName = _("MARTHA"),
#line 5628
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5629
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5630
F_TRAINER_FEMALE | 
#line 5631
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5632
        .doubleBattle = FALSE,
#line 5633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5635
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5636
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5639
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5640
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5643
    [DIFFICULTY_NORMAL][TRAINER_DIANA] =
    {
#line 5644
        .trainerName = _("DIANA"),
#line 5645
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5646
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5647
F_TRAINER_FEMALE | 
#line 5648
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5649
        .doubleBattle = FALSE,
#line 5650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5652
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5653
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5656
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5657
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5660
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5661
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5664
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5665
        .trainerName = _("CEDRIC"),
#line 5666
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5667
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5669
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5670
        .doubleBattle = FALSE,
#line 5671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5673
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5674
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5677
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5678
        .trainerName = _("IRENE"),
#line 5679
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5680
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5681
F_TRAINER_FEMALE | 
#line 5682
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5683
        .doubleBattle = FALSE,
#line 5684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5686
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5687
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5690
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5691
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5694
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV] =
    {
#line 5695
        .trainerName = _("AMY & LIV"),
#line 5696
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5697
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5699
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5700
        .doubleBattle = TRUE,
#line 5701
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5703
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5705
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5704
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5707
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5708
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5712
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA] =
    {
#line 5713
        .trainerName = _("GINA & MIA"),
#line 5714
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5715
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5717
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5718
        .doubleBattle = TRUE,
#line 5719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5721
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5722
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5725
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5727
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5726
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5729
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5730
        .trainerName = _("MIU & YUKI"),
#line 5731
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5732
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5734
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5735
        .doubleBattle = TRUE,
#line 5736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5738
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5739
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5742
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5743
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5747
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5748
        .trainerName = _("HUEY"),
#line 5749
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5750
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5752
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5753
        .doubleBattle = FALSE,
#line 5754
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5756
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5758
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5757
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5760
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5762
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5761
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5764
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5765
        .trainerName = _("EDMOND"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5773
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5774
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5777
    [DIFFICULTY_NORMAL][TRAINER_ERNEST] =
    {
#line 5778
        .trainerName = _("ERNEST"),
#line 5779
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5780
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5782
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5783
        .doubleBattle = FALSE,
#line 5784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5786
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5787
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5790
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5791
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5794
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5795
        .trainerName = _("DWAYNE"),
#line 5796
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5797
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5799
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5800
        .doubleBattle = FALSE,
#line 5801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5803
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5804
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5807
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5808
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5811
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5812
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5815
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5816
        .trainerName = _("PHILLIP"),
#line 5817
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5818
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5820
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5821
        .doubleBattle = FALSE,
#line 5822
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5824
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5826
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5825
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5828
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5830
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5829
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5832
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5833
        .trainerName = _("LEONARD"),
#line 5834
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5835
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5837
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5838
        .doubleBattle = FALSE,
#line 5839
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5841
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5843
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5842
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5845
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5846
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5849
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5850
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5853
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5854
        .trainerName = _("DUNCAN"),
#line 5855
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5856
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5858
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5859
        .doubleBattle = FALSE,
#line 5860
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5862
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5864
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5863
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5866
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5867
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5870
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5871
        .trainerName = _("ELI"),
#line 5872
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5873
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5875
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5876
        .doubleBattle = FALSE,
#line 5877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5879
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5881
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5880
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5883
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5884
        .trainerName = _("ANNIKA"),
#line 5885
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5886
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5887
F_TRAINER_FEMALE | 
#line 5888
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5889
        .doubleBattle = FALSE,
#line 5890
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5892
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5892
            .heldItem = ITEM_FOCUS_SASH,
#line 5894
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5893
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5896
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5896
            .heldItem = ITEM_FOCUS_SASH,
#line 5898
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5897
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5900
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5901
        .trainerName = _("JAZMYN"),
#line 5902
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5903
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5904
F_TRAINER_FEMALE | 
#line 5905
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5906
        .items = { ITEM_HYPER_POTION },
#line 5907
        .doubleBattle = FALSE,
#line 5908
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5910
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5912
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5911
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5914
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5915
        .trainerName = _("JONAS"),
#line 5916
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5917
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5919
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5920
        .doubleBattle = FALSE,
#line 5921
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5923
            .species = SPECIES_SKIPLOOM,
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
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5928
        .trainerName = _("KAYLEY"),
#line 5929
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5930
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5931
F_TRAINER_FEMALE | 
#line 5932
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5933
        .doubleBattle = FALSE,
#line 5934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5936
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5937
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5940
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5941
        .trainerName = _("AURON"),
#line 5942
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5943
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5945
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5946
        .doubleBattle = FALSE,
#line 5947
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5949
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5951
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5950
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5953
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5955
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5954
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5957
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5958
        .trainerName = _("KELVIN"),
#line 5959
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5960
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5962
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5963
        .doubleBattle = FALSE,
#line 5964
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5966
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5968
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5967
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5970
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5972
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5971
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5974
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5975
        .trainerName = _("MARLEY"),
#line 5976
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5977
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5978
F_TRAINER_FEMALE | 
#line 5979
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5980
        .items = { ITEM_HYPER_POTION },
#line 5981
        .doubleBattle = FALSE,
#line 5982
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5984
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5986
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5985
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5988
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5989
        .trainerName = _("REYNA"),
#line 5990
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5991
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5992
F_TRAINER_FEMALE | 
#line 5993
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5994
        .doubleBattle = FALSE,
#line 5995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5997
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5999
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5998
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6001
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6003
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6002
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6005
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 6006
        .trainerName = _("HUDSON"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6014
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6016
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6015
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6018
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 6019
        .trainerName = _("CONOR"),
#line 6020
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 6021
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 6023
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6024
        .doubleBattle = FALSE,
#line 6025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6027
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6029
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6028
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6031
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6033
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6032
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6035
    [DIFFICULTY_NORMAL][TRAINER_EDWIN] =
    {
#line 6036
        .trainerName = _("EDWIN"),
#line 6037
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6038
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6040
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6041
        .doubleBattle = FALSE,
#line 6042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6044
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6046
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6045
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6048
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6050
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6049
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6052
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 6053
        .trainerName = _("HECTOR"),
#line 6054
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 6055
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 6057
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6058
        .doubleBattle = FALSE,
#line 6059
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6061
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6063
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6062
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6065
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6067
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6066
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6069
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 6070
        .trainerName = _("TABITHA"),
#line 6071
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 6072
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 6074
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6075
        .doubleBattle = FALSE,
#line 6076
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6078
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6078
            .heldItem = ITEM_HEAT_ROCK,
#line 6081
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6079
            .ability = ABILITY_DROUGHT,
#line 6080
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6082
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 6087
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6087
            .heldItem = ITEM_POISON_BARB,
#line 6090
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6088
            .ability = ABILITY_LEVITATE,
#line 6089
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6091
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 6096
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6096
            .heldItem = ITEM_LIFE_ORB,
#line 6099
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 6098
            .ability = ABILITY_LEVITATE,
#line 6097
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6100
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 6105
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 6106
        .trainerName = _("SAMUEL"),
#line 6107
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6108
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6110
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6111
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6112
        .doubleBattle = TRUE,
#line 6113
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6115
            .species = SPECIES_SLOWKING,
#line 6115
            .gender = TRAINER_MON_MALE,
#line 6115
            .heldItem = ITEM_LIFE_ORB,
#line 6119
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6116
            .ability = ABILITY_REGENERATOR,
#line 6117
            .lvl = 70,
#line 6118
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6120
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6125
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6125
            .heldItem = ITEM_ROCKY_HELMET,
#line 6129
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6126
            .ability = ABILITY_REGENERATOR,
#line 6127
            .lvl = 70,
#line 6128
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6129
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6134
            .species = SPECIES_GLISCOR,
#line 6134
            .gender = TRAINER_MON_FEMALE,
#line 6134
            .heldItem = ITEM_TOXIC_ORB,
#line 6138
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6135
            .ability = ABILITY_POISON_HEAL,
#line 6136
            .lvl = 70,
#line 6137
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6139
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6144
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6144
            .heldItem = ITEM_ASSAULT_VEST,
#line 6148
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6145
            .ability = ABILITY_CLEAR_BODY,
#line 6146
            .lvl = 70,
#line 6147
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6149
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6154
            .species = SPECIES_HONCHKROW,
#line 6154
            .gender = TRAINER_MON_MALE,
#line 6154
            .heldItem = ITEM_FOCUS_SASH,
#line 6158
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6155
            .ability = ABILITY_MOXIE,
#line 6156
            .lvl = 70,
#line 6157
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6158
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6163
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6163
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6167
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6164
            .ability = ABILITY_INFILTRATOR,
#line 6165
            .lvl = 70,
#line 6166
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6167
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6172
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6173
        .trainerName = _("SAMUEL"),
#line 6174
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6175
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6177
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6178
        .doubleBattle = FALSE,
#line 6179
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6181
            .species = SPECIES_SLOWPOKE,
#line 6181
            .gender = TRAINER_MON_MALE,
#line 6185
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6182
            .ability = ABILITY_REGENERATOR,
#line 6183
            .lvl = 5,
#line 6184
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6186
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6190
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6191
        .trainerName = _("SAMUEL"),
#line 6192
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6193
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6195
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6196
        .doubleBattle = FALSE,
#line 6197
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6199
            .species = SPECIES_SLOWPOKE,
#line 6199
            .gender = TRAINER_MON_MALE,
#line 6199
            .heldItem = ITEM_FIGY_BERRY,
#line 6203
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6200
            .ability = ABILITY_REGENERATOR,
#line 6201
            .lvl = 24,
#line 6202
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6204
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6209
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6209
            .heldItem = ITEM_LUM_BERRY,
#line 6213
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6210
            .ability = ABILITY_REGENERATOR,
#line 6211
            .lvl = 24,
#line 6212
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6214
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6219
            .species = SPECIES_GLIGAR,
#line 6219
            .gender = TRAINER_MON_FEMALE,
#line 6219
            .heldItem = ITEM_RAZOR_FANG,
#line 6223
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6220
            .ability = ABILITY_HYPER_CUTTER,
#line 6221
            .lvl = 24,
#line 6222
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6224
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6229
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6233
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6230
            .ability = ABILITY_CLEAR_BODY,
#line 6231
            .lvl = 24,
#line 6232
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6233
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6238
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6239
        .trainerName = _("SAMUEL"),
#line 6240
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6241
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6243
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6244
        .doubleBattle = FALSE,
#line 6245
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6247
            .species = SPECIES_SLOWPOKE,
#line 6247
            .gender = TRAINER_MON_MALE,
#line 6247
            .heldItem = ITEM_LIFE_ORB,
#line 6251
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6248
            .ability = ABILITY_REGENERATOR,
#line 6249
            .lvl = 49,
#line 6250
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6252
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6257
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6257
            .heldItem = ITEM_ROCKY_HELMET,
#line 6261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6258
            .ability = ABILITY_REGENERATOR,
#line 6259
            .lvl = 49,
#line 6260
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6261
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6266
            .species = SPECIES_GLIGAR,
#line 6266
            .gender = TRAINER_MON_FEMALE,
#line 6266
            .heldItem = ITEM_RAZOR_FANG,
#line 6270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6267
            .ability = ABILITY_HYPER_CUTTER,
#line 6268
            .lvl = 49,
#line 6269
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6271
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6276
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6276
            .heldItem = ITEM_ASSAULT_VEST,
#line 6280
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6277
            .ability = ABILITY_CLEAR_BODY,
#line 6278
            .lvl = 49,
#line 6279
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6280
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6285
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6285
            .heldItem = ITEM_FOCUS_SASH,
#line 6289
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6286
            .ability = ABILITY_PRANKSTER,
#line 6287
            .lvl = 49,
#line 6288
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6289
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6294
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6295
        .trainerName = _("SAMUEL"),
#line 6296
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6297
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6299
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6300
        .doubleBattle = FALSE,
#line 6301
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6303
            .species = SPECIES_SLOWPOKE,
#line 6303
            .gender = TRAINER_MON_MALE,
#line 6307
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6304
            .ability = ABILITY_REGENERATOR,
#line 6305
            .lvl = 5,
#line 6306
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6308
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6312
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110] =
    {
#line 6313
        .trainerName = _("SAMUEL"),
#line 6314
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6315
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6317
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6318
        .doubleBattle = FALSE,
#line 6319
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6321
            .species = SPECIES_SLOWPOKE,
#line 6321
            .gender = TRAINER_MON_MALE,
#line 6321
            .heldItem = ITEM_FIGY_BERRY,
#line 6325
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6322
            .ability = ABILITY_REGENERATOR,
#line 6323
            .lvl = 24,
#line 6324
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6326
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6331
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6331
            .heldItem = ITEM_LUM_BERRY,
#line 6335
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6332
            .ability = ABILITY_REGENERATOR,
#line 6333
            .lvl = 24,
#line 6334
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6336
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6341
            .species = SPECIES_GLIGAR,
#line 6341
            .gender = TRAINER_MON_FEMALE,
#line 6341
            .heldItem = ITEM_RAZOR_FANG,
#line 6345
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6342
            .ability = ABILITY_HYPER_CUTTER,
#line 6343
            .lvl = 24,
#line 6344
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6346
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6351
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6351
            .heldItem = ITEM_METAL_COAT,
#line 6355
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6352
            .ability = ABILITY_CLEAR_BODY,
#line 6353
            .lvl = 24,
#line 6354
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6355
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_BULLET_PUNCH,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6361
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6362
        .trainerName = _("SAMUEL"),
#line 6363
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6364
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6366
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6367
        .doubleBattle = FALSE,
#line 6368
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6370
            .species = SPECIES_SLOWPOKE,
#line 6370
            .gender = TRAINER_MON_MALE,
#line 6370
            .heldItem = ITEM_LIFE_ORB,
#line 6374
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6371
            .ability = ABILITY_REGENERATOR,
#line 6372
            .lvl = 44,
#line 6373
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6375
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6380
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6380
            .heldItem = ITEM_ROCKY_HELMET,
#line 6383
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6381
            .ability = ABILITY_REGENERATOR,
#line 6383
            .lvl = 100,
#line 6382
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6383
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6388
            .species = SPECIES_GLIGAR,
#line 6388
            .gender = TRAINER_MON_FEMALE,
#line 6388
            .heldItem = ITEM_RAZOR_FANG,
#line 6392
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6389
            .ability = ABILITY_HYPER_CUTTER,
#line 6390
            .lvl = 44,
#line 6391
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6393
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6398
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6398
            .heldItem = ITEM_ASSAULT_VEST,
#line 6402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6399
            .ability = ABILITY_CLEAR_BODY,
#line 6400
            .lvl = 44,
#line 6401
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6402
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6407
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6408
        .trainerName = _("SAMUEL"),
#line 6409
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6410
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6412
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6413
        .doubleBattle = FALSE,
#line 6414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6416
            .species = SPECIES_SLOWPOKE,
#line 6416
            .gender = TRAINER_MON_MALE,
#line 6420
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6417
            .ability = ABILITY_REGENERATOR,
#line 6418
            .lvl = 5,
#line 6419
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6421
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6425
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6426
        .trainerName = _("SAMUEL"),
#line 6427
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6428
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6430
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6431
        .doubleBattle = FALSE,
#line 6432
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6434
            .species = SPECIES_SLOWPOKE,
#line 6434
            .gender = TRAINER_MON_MALE,
#line 6434
            .heldItem = ITEM_FIGY_BERRY,
#line 6438
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6435
            .ability = ABILITY_REGENERATOR,
#line 6436
            .lvl = 24,
#line 6437
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6439
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6444
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6444
            .heldItem = ITEM_LUM_BERRY,
#line 6448
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6445
            .ability = ABILITY_REGENERATOR,
#line 6446
            .lvl = 24,
#line 6447
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6449
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6454
            .species = SPECIES_GLIGAR,
#line 6454
            .gender = TRAINER_MON_FEMALE,
#line 6454
            .heldItem = ITEM_RAZOR_FANG,
#line 6458
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6455
            .ability = ABILITY_HYPER_CUTTER,
#line 6456
            .lvl = 24,
#line 6457
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6459
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6465
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6466
        .trainerName = _("SAMUEL"),
#line 6467
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6468
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6470
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6471
        .doubleBattle = FALSE,
#line 6472
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6474
            .species = SPECIES_SLOWPOKE,
#line 6474
            .gender = TRAINER_MON_MALE,
#line 6474
            .heldItem = ITEM_LIFE_ORB,
#line 6478
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6475
            .ability = ABILITY_REGENERATOR,
#line 6476
            .lvl = 44,
#line 6477
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6479
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6484
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6484
            .heldItem = ITEM_ROCKY_HELMET,
#line 6487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6485
            .ability = ABILITY_REGENERATOR,
#line 6487
            .lvl = 100,
#line 6486
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6487
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6492
            .species = SPECIES_GLIGAR,
#line 6492
            .gender = TRAINER_MON_FEMALE,
#line 6492
            .heldItem = ITEM_RAZOR_FANG,
#line 6496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6493
            .ability = ABILITY_HYPER_CUTTER,
#line 6494
            .lvl = 44,
#line 6495
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6497
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6502
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6502
            .heldItem = ITEM_ASSAULT_VEST,
#line 6506
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6503
            .ability = ABILITY_CLEAR_BODY,
#line 6504
            .lvl = 44,
#line 6505
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6506
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6511
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6520
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6521
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6524
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6525
        .trainerName = _("MAY"),
#line 6526
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6527
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6528
F_TRAINER_FEMALE | 
#line 6529
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6530
        .doubleBattle = FALSE,
#line 6531
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6533
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6535
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6534
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6537
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6539
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6538
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6541
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6543
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6542
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6545
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6546
        .trainerName = _("MAY"),
#line 6547
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6548
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6549
F_TRAINER_FEMALE | 
#line 6550
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6551
        .doubleBattle = FALSE,
#line 6552
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6554
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6556
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6555
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6558
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6560
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6559
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6562
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6564
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6563
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6566
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6575
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6576
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6579
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6580
        .trainerName = _("MAY"),
#line 6581
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6582
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6583
F_TRAINER_FEMALE | 
#line 6584
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6585
        .doubleBattle = FALSE,
#line 6586
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6588
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6590
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6589
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6592
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6594
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6593
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6596
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6598
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6597
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6600
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6601
        .trainerName = _("MAY"),
#line 6602
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6603
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6604
F_TRAINER_FEMALE | 
#line 6605
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6606
        .doubleBattle = FALSE,
#line 6607
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6609
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6611
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6610
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6613
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6615
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6614
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6617
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6619
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6618
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6621
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6630
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6631
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6634
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6635
        .trainerName = _("MAY"),
#line 6636
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6637
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6638
F_TRAINER_FEMALE | 
#line 6639
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6640
        .doubleBattle = FALSE,
#line 6641
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6643
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6645
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6644
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6647
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6649
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6648
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6651
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6653
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6652
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6655
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6656
        .trainerName = _("MAY"),
#line 6657
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6658
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6659
F_TRAINER_FEMALE | 
#line 6660
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6661
        .doubleBattle = FALSE,
#line 6662
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6664
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6666
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6665
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6668
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6670
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6669
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6672
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6674
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6673
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6676
    [DIFFICULTY_NORMAL][TRAINER_ISAAC] =
    {
#line 6677
        .trainerName = _("ISAAC"),
#line 6678
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6679
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6681
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6682
        .doubleBattle = FALSE,
#line 6683
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6685
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6687
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6686
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6689
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6690
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6693
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6694
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6697
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6698
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6701
            .species = SPECIES_CHINGLING,
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
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6706
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6709
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6710
        .trainerName = _("DAVIS"),
#line 6711
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6712
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6714
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6715
        .doubleBattle = FALSE,
#line 6716
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6718
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6719
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6722
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6723
        .trainerName = _("MITCHELL"),
#line 6724
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6725
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6727
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6728
        .doubleBattle = FALSE,
#line 6729
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6731
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6733
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6732
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6735
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6736
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6739
    [DIFFICULTY_NORMAL][TRAINER_LYDIA] =
    {
#line 6740
        .trainerName = _("LYDIA"),
#line 6741
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6742
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6743
F_TRAINER_FEMALE | 
#line 6744
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6745
        .doubleBattle = FALSE,
#line 6746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6748
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6749
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6752
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6753
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6756
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6758
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6757
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6760
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6762
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6761
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6764
            .species = SPECIES_SAWK,
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
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6770
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6769
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6772
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6773
        .trainerName = _("HALLE"),
#line 6774
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6775
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6776
F_TRAINER_FEMALE | 
#line 6777
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6778
        .items = { ITEM_FULL_RESTORE },
#line 6779
        .doubleBattle = FALSE,
#line 6780
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6782
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6784
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6783
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6786
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6788
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6787
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6790
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6791
        .trainerName = _("GARRISON"),
#line 6792
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6793
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6795
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6796
        .doubleBattle = FALSE,
#line 6797
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6799
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6801
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6800
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6803
    [DIFFICULTY_NORMAL][TRAINER_JACKSON] =
    {
#line 6804
        .trainerName = _("JACKSON"),
#line 6805
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6806
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6808
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6809
        .items = { ITEM_FULL_RESTORE },
#line 6810
        .doubleBattle = FALSE,
#line 6811
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6813
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6815
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6814
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6817
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6818
        .trainerName = _("LORENZO"),
#line 6819
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6820
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6822
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6823
        .items = { ITEM_FULL_RESTORE },
#line 6824
        .doubleBattle = FALSE,
#line 6825
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6827
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6829
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6828
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6831
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6833
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6832
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6835
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6837
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6836
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6839
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6840
        .trainerName = _("SEBASTIAN"),
#line 6841
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6842
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6844
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6845
        .items = { ITEM_FULL_RESTORE },
#line 6846
        .doubleBattle = FALSE,
#line 6847
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6849
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6851
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6850
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6853
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE] =
    {
#line 6854
        .trainerName = _("CATHERINE"),
#line 6855
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6856
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6857
F_TRAINER_FEMALE | 
#line 6858
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6859
        .items = { ITEM_FULL_RESTORE },
#line 6860
        .doubleBattle = FALSE,
#line 6861
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6863
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6865
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6864
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6867
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6869
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6868
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6871
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6872
        .trainerName = _("JENNA"),
#line 6873
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6874
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6875
F_TRAINER_FEMALE | 
#line 6876
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6877
        .items = { ITEM_FULL_RESTORE },
#line 6878
        .doubleBattle = FALSE,
#line 6879
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6881
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6883
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6882
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6885
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6887
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6886
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6889
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6891
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6890
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6893
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6894
        .trainerName = _("SOPHIA"),
#line 6895
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6896
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6897
F_TRAINER_FEMALE | 
#line 6898
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6899
        .items = { ITEM_FULL_RESTORE },
#line 6900
        .doubleBattle = FALSE,
#line 6901
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6903
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6905
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6904
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6907
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6909
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6908
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6911
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6912
        .trainerName = _("JULIO"),
#line 6913
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6914
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6916
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6917
        .doubleBattle = FALSE,
#line 6918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6920
            .species = SPECIES_SLAKOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6921
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6924
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6925
        .trainerName = _("GRUNT"),
#line 6926
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6927
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6929
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6930
        .doubleBattle = FALSE,
#line 6931
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6933
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6935
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6934
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6937
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6939
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6938
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6941
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6942
        .trainerName = _("GRUNT"),
#line 6943
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6944
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6945
F_TRAINER_FEMALE | 
#line 6946
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6947
        .doubleBattle = FALSE,
#line 6948
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6950
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6952
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6951
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6954
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6955
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6958
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6959
        .trainerName = _("GRUNT"),
#line 6960
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6961
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6962
F_TRAINER_FEMALE | 
#line 6963
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6964
        .doubleBattle = FALSE,
#line 6965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6967
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6968
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6971
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6972
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6975
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
    {
#line 6976
        .trainerName = _("GRUNT"),
#line 6977
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6978
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6980
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6981
        .doubleBattle = FALSE,
#line 6982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6984
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6986
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6985
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6988
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6990
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6989
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6992
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6993
        .trainerName = _("MARC"),
#line 6994
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6995
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6997
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6998
        .doubleBattle = FALSE,
#line 6999
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7001
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7003
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 7002
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7005
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7007
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 7006
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7009
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 7010
        .trainerName = _("BRENDEN"),
#line 7011
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 7012
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 7014
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7015
        .doubleBattle = FALSE,
#line 7016
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7018
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7020
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7019
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7022
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 7023
        .trainerName = _("LILITH"),
#line 7024
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7025
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7026
F_TRAINER_FEMALE | 
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
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7033
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7032
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7035
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 7036
        .trainerName = _("CRISTIAN"),
#line 7037
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 7038
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 7040
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7041
        .doubleBattle = FALSE,
#line 7042
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7044
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7046
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 7045
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7048
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 7049
        .trainerName = _("SYLVIA"),
#line 7050
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7051
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7052
F_TRAINER_FEMALE | 
#line 7053
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7054
        .doubleBattle = FALSE,
#line 7055
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7057
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7059
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7058
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7061
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 7062
        .trainerName = _("LEONARDO"),
#line 7063
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7064
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7066
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7067
        .doubleBattle = FALSE,
#line 7068
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7070
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7071
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7074
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 7075
        .trainerName = _("ATHENA"),
#line 7076
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7077
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 7078
F_TRAINER_FEMALE | 
#line 7079
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7080
        .items = { ITEM_HYPER_POTION },
#line 7081
        .doubleBattle = FALSE,
#line 7082
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7084
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7086
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7085
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7088
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7090
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7089
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7093
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 7094
        .trainerName = _("HARRISON"),
#line 7095
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7096
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
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
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7103
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7106
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 7107
        .trainerName = _("GRUNT"),
#line 7108
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7109
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7111
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7112
        .doubleBattle = FALSE,
#line 7113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7115
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7116
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7119
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7120
        .trainerName = _("CLARENCE"),
#line 7121
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7122
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7124
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7125
        .doubleBattle = FALSE,
#line 7126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7128
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7129
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7132
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7133
        .trainerName = _("TERRY"),
#line 7134
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7135
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7136
F_TRAINER_FEMALE | 
#line 7137
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7138
        .doubleBattle = FALSE,
#line 7139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7141
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7142
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7145
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7146
        .trainerName = _("NATE"),
#line 7147
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7148
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7150
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7151
        .doubleBattle = FALSE,
#line 7152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7154
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7156
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7155
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7158
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7159
        .trainerName = _("KATHLEEN"),
#line 7160
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7161
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7162
F_TRAINER_FEMALE | 
#line 7163
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7164
        .doubleBattle = FALSE,
#line 7165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7167
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7169
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7168
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7171
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7172
        .trainerName = _("CLIFFORD"),
#line 7173
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7174
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7176
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7177
        .doubleBattle = FALSE,
#line 7178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7180
            .species = SPECIES_CLEFAIRY,
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
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7185
        .trainerName = _("NICHOLAS"),
#line 7186
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7187
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7189
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7190
        .doubleBattle = FALSE,
#line 7191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7193
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7194
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7197
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7198
        .trainerName = _("GRUNT"),
#line 7199
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7200
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7201
F_TRAINER_FEMALE | 
#line 7202
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7203
        .doubleBattle = FALSE,
#line 7204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7206
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7207
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7210
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7212
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7211
            .lvl = 60,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7214
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
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
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7225
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7224
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7227
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
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
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7237
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7240
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
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
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7251
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7250
            .lvl = 61,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7253
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
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
            .species = SPECIES_CAMERUPT,
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
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7267
        .trainerName = _("MACEY"),
#line 7268
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7269
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7270
F_TRAINER_FEMALE | 
#line 7271
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7272
        .doubleBattle = FALSE,
#line 7273
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7275
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7277
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7276
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7279
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7280
        .trainerName = _("SAMUEL"),
#line 7281
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7282
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7284
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7285
        .doubleBattle = FALSE,
#line 7286
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7288
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7288
            .heldItem = ITEM_RAZOR_FANG,
#line 7292
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7289
            .ability = ABILITY_HYPER_CUTTER,
#line 7290
            .lvl = 16,
#line 7291
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7292
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
                MOVE_ACROBATICS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7297
            .species = SPECIES_SLOWPOKE,
#line 7297
            .gender = TRAINER_MON_MALE,
#line 7301
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7298
            .ability = ABILITY_REGENERATOR,
#line 7299
            .lvl = 16,
#line 7300
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7301
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7306
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7310
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7307
            .ability = ABILITY_REGENERATOR,
#line 7308
            .lvl = 16,
#line 7309
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7310
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7315
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7316
        .trainerName = _("SAMUEL"),
#line 7317
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7318
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7320
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7321
        .doubleBattle = FALSE,
#line 7322
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7324
            .species = SPECIES_SLOWPOKE,
#line 7324
            .gender = TRAINER_MON_MALE,
#line 7328
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7325
            .ability = ABILITY_REGENERATOR,
#line 7326
            .lvl = 16,
#line 7327
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7329
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7334
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7338
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7335
            .ability = ABILITY_REGENERATOR,
#line 7336
            .lvl = 16,
#line 7337
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7338
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7345
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7346
        .trainerName = _("PAXTON"),
#line 7347
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7348
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7350
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7351
        .doubleBattle = FALSE,
#line 7352
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7354
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7355
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7358
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7359
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7362
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7363
        .trainerName = _("ISABELLA"),
#line 7364
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7365
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7366
F_TRAINER_FEMALE | 
#line 7367
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7368
        .doubleBattle = FALSE,
#line 7369
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7371
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7373
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7372
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7375
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7376
        .trainerName = _("GRUNT"),
#line 7377
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7378
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7379
F_TRAINER_FEMALE | 
#line 7380
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7381
        .doubleBattle = FALSE,
#line 7382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7384
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7386
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7385
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7388
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7389
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7392
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7393
        .trainerName = _("TABITHA"),
#line 7394
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7395
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7397
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7398
        .doubleBattle = FALSE,
#line 7399
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7401
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7404
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7402
            .ability = ABILITY_DROUGHT,
#line 7403
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7405
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7410
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7410
            .heldItem = ITEM_LUM_BERRY,
#line 7413
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7411
            .ability = ABILITY_LEVITATE,
#line 7412
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7414
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7418
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7418
            .heldItem = ITEM_SITRUS_BERRY,
#line 7421
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7419
            .ability = ABILITY_LEVITATE,
#line 7420
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7422
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7426
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7426
            .heldItem = ITEM_LUM_BERRY,
#line 7429
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7427
            .ability = ABILITY_OWN_TEMPO,
#line 7428
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7430
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7435
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7436
        .trainerName = _("JONATHAN"),
#line 7437
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7438
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7440
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7441
        .items = { ITEM_HYPER_POTION },
#line 7442
        .doubleBattle = FALSE,
#line 7443
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7445
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7447
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7446
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7449
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7451
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7450
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7453
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7454
        .trainerName = _("SAMUEL"),
#line 7455
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7456
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7458
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7459
        .doubleBattle = FALSE,
#line 7460
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7462
            .species = SPECIES_SLOWPOKE,
#line 7462
            .gender = TRAINER_MON_MALE,
#line 7466
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7463
            .ability = ABILITY_REGENERATOR,
#line 7464
            .lvl = 16,
#line 7465
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7467
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7472
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7476
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7473
            .ability = ABILITY_REGENERATOR,
#line 7474
            .lvl = 16,
#line 7475
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7476
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7483
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7484
        .trainerName = _("MAY"),
#line 7485
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7486
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7487
F_TRAINER_FEMALE | 
#line 7488
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7489
        .doubleBattle = FALSE,
#line 7490
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7492
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7494
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7493
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7496
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7498
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7497
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7500
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7501
        .trainerName = _("MAXIE"),
#line 7502
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7503
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7505
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7506
        .doubleBattle = FALSE,
#line 7507
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7509
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .heldItem = ITEM_IRON_BALL,
#line 7512
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7510
            .ability = ABILITY_HEAVY_METAL,
#line 7511
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7512
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7517
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7517
            .heldItem = ITEM_SHARP_BEAK,
#line 7520
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7518
            .ability = ABILITY_INNER_FOCUS,
#line 7519
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7520
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7525
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7525
            .heldItem = ITEM_MUSCLE_BAND,
#line 7528
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7526
            .ability = ABILITY_IMMUNITY,
#line 7527
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7528
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7533
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7533
            .heldItem = ITEM_EXPERT_BELT,
#line 7536
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7534
            .ability = ABILITY_UNNERVE,
#line 7535
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7536
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7541
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7541
            .heldItem = ITEM_ROCKY_HELMET,
#line 7544
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7542
            .ability = ABILITY_ROCK_HEAD,
#line 7543
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7544
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7549
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7550
        .trainerName = _("MAXIE"),
#line 7551
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7552
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7554
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7555
        .doubleBattle = FALSE,
#line 7556
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7558
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7558
            .heldItem = ITEM_MUSCLE_BAND,
#line 7561
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7559
            .ability = ABILITY_HEAVY_METAL,
#line 7560
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7562
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_BODY_PRESS,
                MOVE_STEALTH_ROCK,
            },
            },
            {
#line 7567
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7567
            .heldItem = ITEM_LUM_BERRY,
#line 7570
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7568
            .ability = ABILITY_IMMUNITY,
#line 7569
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7571
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7576
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7576
            .heldItem = ITEM_LUM_BERRY,
#line 7579
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7577
            .ability = ABILITY_UNNERVE,
#line 7578
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7580
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7585
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7585
            .heldItem = ITEM_ROCKY_HELMET,
#line 7588
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7586
            .ability = ABILITY_ROCK_HEAD,
#line 7587
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7589
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
            {
#line 7594
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7594
            .heldItem = ITEM_SHARP_BEAK,
#line 7597
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7595
            .ability = ABILITY_INNER_FOCUS,
#line 7596
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7598
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 7603
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7604
        .trainerName = _("TIANA"),
#line 7605
        .trainerClass = TRAINER_CLASS_LASS,
#line 7606
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7607
F_TRAINER_FEMALE | 
#line 7608
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7609
        .doubleBattle = FALSE,
#line 7610
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7612
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7614
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7613
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7616
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7617
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7620
    [DIFFICULTY_NORMAL][TRAINER_HALEY] =
    {
#line 7621
        .trainerName = _("HALEY"),
#line 7622
        .trainerClass = TRAINER_CLASS_LASS,
#line 7623
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7624
F_TRAINER_FEMALE | 
#line 7625
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7626
        .doubleBattle = FALSE,
#line 7627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7629
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7630
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7633
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7635
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7634
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7637
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7638
        .trainerName = _("JANICE"),
#line 7639
        .trainerClass = TRAINER_CLASS_LASS,
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7646
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7648
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7647
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7650
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7651
        .trainerName = _("VIVI"),
#line 7652
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7653
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7654
F_TRAINER_FEMALE | 
#line 7655
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7656
        .doubleBattle = FALSE,
#line 7657
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7659
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7661
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7660
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7663
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7665
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7664
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7667
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7669
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7668
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7671
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7672
        .trainerName = _("SALLY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7680
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7682
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7681
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7684
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7685
        .trainerName = _("ROBIN"),
#line 7686
        .trainerClass = TRAINER_CLASS_LASS,
#line 7687
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7688
F_TRAINER_FEMALE | 
#line 7689
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7690
        .doubleBattle = FALSE,
#line 7691
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7693
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7694
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7697
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7699
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7698
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7701
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7702
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7705
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7706
        .trainerName = _("ANDREA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7714
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7716
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7715
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7718
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7719
        .trainerName = _("CRISSY"),
#line 7720
        .trainerClass = TRAINER_CLASS_LASS,
#line 7721
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7722
F_TRAINER_FEMALE | 
#line 7723
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7724
        .doubleBattle = FALSE,
#line 7725
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7727
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7729
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7728
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7731
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7733
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7732
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7735
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7736
        .trainerName = _("RICK"),
#line 7737
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7738
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7740
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7741
        .doubleBattle = FALSE,
#line 7742
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7744
            .species = SPECIES_PORYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7746
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7745
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7748
            .species = SPECIES_MANTYKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7749
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7752
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7753
        .trainerName = _("LYLE"),
#line 7754
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7755
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7757
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7758
        .doubleBattle = FALSE,
#line 7759
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7761
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7763
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7762
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7765
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7766
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7769
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7770
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7773
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7775
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7774
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7777
    [DIFFICULTY_NORMAL][TRAINER_JOSIE] =
    {
#line 7778
        .trainerName = _("JOSIE"),
#line 7779
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7780
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7782
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7783
        .doubleBattle = FALSE,
#line 7784
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7786
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7788
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7787
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7790
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7792
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7791
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7794
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7795
        .trainerName = _("DOUG"),
#line 7796
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7797
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7799
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7800
        .doubleBattle = FALSE,
#line 7801
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7803
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7804
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7807
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7809
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7808
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7811
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7812
        .trainerName = _("GREG"),
#line 7813
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7814
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7816
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7817
        .doubleBattle = FALSE,
#line 7818
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7820
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7822
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7821
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7824
            .species = SPECIES_PROBOPASS,
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
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7829
        .trainerName = _("KENT"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7837
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7839
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7838
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7841
    [DIFFICULTY_NORMAL][TRAINER_JAMES] =
    {
#line 7842
        .trainerName = _("JAMES"),
#line 7843
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7844
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7846
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7847
        .doubleBattle = FALSE,
#line 7848
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7850
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7852
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7851
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7854
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7856
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7855
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7858
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7859
        .trainerName = _("BRICE"),
#line 7860
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7861
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7863
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7864
        .doubleBattle = FALSE,
#line 7865
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7867
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7869
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7868
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7871
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7872
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7875
    [DIFFICULTY_NORMAL][TRAINER_TRENT] =
    {
#line 7876
        .trainerName = _("TRENT"),
#line 7877
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7878
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7880
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7881
        .doubleBattle = FALSE,
#line 7882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7884
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7885
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7888
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7890
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7889
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7892
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7894
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7893
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7896
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7897
        .trainerName = _("LENNY"),
#line 7898
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7899
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7901
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7902
        .doubleBattle = FALSE,
#line 7903
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7905
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7907
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7906
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7909
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7911
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7910
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7913
    [DIFFICULTY_NORMAL][TRAINER_LUCAS] =
    {
#line 7914
        .trainerName = _("LUCAS"),
#line 7915
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7916
        .trainerPic = TRAINER_PIC_HIKER,
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
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7924
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7923
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7926
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7927
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7930
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7931
        .trainerName = _("ALAN"),
#line 7932
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7933
        .trainerPic = TRAINER_PIC_HIKER,
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
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7940
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7943
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7945
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7944
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7947
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7948
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7951
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7952
        .trainerName = _("CLARK"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7960
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7962
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7961
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7964
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7965
        .trainerName = _("ERIC"),
#line 7966
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7967
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7969
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7970
        .doubleBattle = FALSE,
#line 7971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7973
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7974
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7977
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7979
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7978
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7981
    [DIFFICULTY_NORMAL][TRAINER_MIKE] =
    {
#line 7982
        .trainerName = _("MIKE"),
#line 7983
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7984
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7986
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7987
        .doubleBattle = FALSE,
#line 7988
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7990
            .species = SPECIES_LILEEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7992
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7991
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7994
            .species = SPECIES_PATRAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7995
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7998
            .species = SPECIES_PANSEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7999
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8002
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 8003
        .trainerName = _("DEZ & LUKE"),
#line 8004
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8005
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8007
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8008
        .doubleBattle = TRUE,
#line 8009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8011
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8012
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8015
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8016
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8019
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 8020
        .trainerName = _("LEA & JED"),
#line 8021
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8022
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8024
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8025
        .doubleBattle = TRUE,
#line 8026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8028
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8029
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8032
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8033
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8036
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN] =
    {
#line 8037
        .trainerName = _("KIRA & DAN"),
#line 8038
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8039
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8041
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8042
        .doubleBattle = TRUE,
#line 8043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8045
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8047
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8046
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8049
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8050
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8053
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 8054
        .trainerName = _("JOHANNA"),
#line 8055
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 8056
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 8057
F_TRAINER_FEMALE | 
#line 8058
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8059
        .doubleBattle = FALSE,
#line 8060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8062
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8063
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8066
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 8067
        .trainerName = _("GERALD"),
#line 8068
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8069
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8071
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8072
        .items = { ITEM_HYPER_POTION },
#line 8073
        .doubleBattle = FALSE,
#line 8074
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8076
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8078
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8077
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8081
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 8082
        .trainerName = _("VIVIAN"),
#line 8083
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8084
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8085
F_TRAINER_FEMALE | 
#line 8086
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8087
        .doubleBattle = FALSE,
#line 8088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8090
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8092
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8091
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8094
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8096
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8095
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8098
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 8099
        .trainerName = _("DANIELLE"),
#line 8100
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 8101
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 8102
F_TRAINER_FEMALE | 
#line 8103
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8104
        .doubleBattle = FALSE,
#line 8105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8107
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8109
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8108
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8111
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 8112
        .trainerName = _("HIDEO"),
#line 8113
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8114
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8116
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8117
        .doubleBattle = FALSE,
#line 8118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8120
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8121
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8124
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8126
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8125
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8128
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8129
        .trainerName = _("KEIGO"),
#line 8130
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8131
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8133
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8134
        .doubleBattle = FALSE,
#line 8135
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8137
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8139
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8138
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8141
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8142
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8145
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8146
        .trainerName = _("RILEY"),
#line 8147
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8148
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8150
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8151
        .doubleBattle = FALSE,
#line 8152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8154
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8155
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8158
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8160
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8159
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8162
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8163
        .trainerName = _("FLINT"),
#line 8164
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8165
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8167
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8168
        .doubleBattle = FALSE,
#line 8169
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8171
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8173
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8172
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8175
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8177
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8176
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8179
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8180
        .trainerName = _("ASHLEY"),
#line 8181
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8182
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8183
F_TRAINER_FEMALE | 
#line 8184
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8185
        .doubleBattle = FALSE,
#line 8186
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8188
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8190
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8189
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8192
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8194
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8193
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8196
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8198
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8197
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8200
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8201
        .trainerName = _("WALLY"),
#line 8202
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8203
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8205
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8206
        .doubleBattle = FALSE,
#line 8207
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8209
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8212
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8210
            .ability = ABILITY_SAND_STREAM,
#line 8211
            .lvl = 1,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8212
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8214
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8214
            .heldItem = ITEM_SHELL_BELL,
#line 8218
            .iv = TRAINER_PARTY_IVS(0, 31, 31, 31, 31, 31),
#line 8215
            .ability = ABILITY_STURDY,
#line 8216
            .lvl = 1,
#line 8217
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8219
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8221
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8222
        .trainerName = _("SAMUEL"),
#line 8223
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8224
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8226
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8227
        .doubleBattle = TRUE,
#line 8228
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 8230
            .species = SPECIES_SLOWKING,
#line 8230
            .gender = TRAINER_MON_MALE,
#line 8230
            .heldItem = ITEM_LIFE_ORB,
#line 8234
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8231
            .ability = ABILITY_REGENERATOR,
#line 8232
            .lvl = 54,
#line 8233
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8235
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8240
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8240
            .heldItem = ITEM_ROCKY_HELMET,
#line 8244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8241
            .ability = ABILITY_REGENERATOR,
#line 8242
            .lvl = 54,
#line 8243
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8244
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8249
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8249
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 8253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8250
            .ability = ABILITY_INFILTRATOR,
#line 8251
            .lvl = 54,
#line 8252
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8253
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
            {
#line 8258
            .species = SPECIES_GLISCOR,
#line 8258
            .gender = TRAINER_MON_FEMALE,
#line 8258
            .heldItem = ITEM_TOXIC_ORB,
#line 8262
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8259
            .ability = ABILITY_POISON_HEAL,
#line 8260
            .lvl = 54,
#line 8261
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8263
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8268
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8268
            .heldItem = ITEM_ASSAULT_VEST,
#line 8272
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8269
            .ability = ABILITY_CLEAR_BODY,
#line 8270
            .lvl = 54,
#line 8271
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8273
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8278
            .species = SPECIES_HONCHKROW,
#line 8278
            .gender = TRAINER_MON_MALE,
#line 8278
            .heldItem = ITEM_FOCUS_SASH,
#line 8282
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8279
            .ability = ABILITY_MOXIE,
#line 8280
            .lvl = 54,
#line 8281
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8283
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8289
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8290
        .trainerName = _("SAMUEL"),
#line 8291
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8292
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8294
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8295
        .doubleBattle = FALSE,
#line 8296
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8298
            .species = SPECIES_SLOWKING,
#line 8298
            .gender = TRAINER_MON_MALE,
#line 8298
            .heldItem = ITEM_LIFE_ORB,
#line 8302
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8299
            .ability = ABILITY_REGENERATOR,
#line 8300
            .lvl = 54,
#line 8301
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8303
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8308
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8308
            .heldItem = ITEM_ROCKY_HELMET,
#line 8312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8309
            .ability = ABILITY_REGENERATOR,
#line 8310
            .lvl = 54,
#line 8311
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8312
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8317
            .species = SPECIES_GLISCOR,
#line 8317
            .gender = TRAINER_MON_FEMALE,
#line 8317
            .heldItem = ITEM_TOXIC_ORB,
#line 8321
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8318
            .ability = ABILITY_POISON_HEAL,
#line 8319
            .lvl = 54,
#line 8320
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8322
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8327
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8327
            .heldItem = ITEM_ASSAULT_VEST,
#line 8331
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8328
            .ability = ABILITY_CLEAR_BODY,
#line 8329
            .lvl = 54,
#line 8330
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8332
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8337
            .species = SPECIES_HONCHKROW,
#line 8337
            .gender = TRAINER_MON_MALE,
#line 8337
            .heldItem = ITEM_FOCUS_SASH,
#line 8341
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8338
            .ability = ABILITY_MOXIE,
#line 8339
            .lvl = 54,
#line 8340
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8342
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8348
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8349
        .trainerName = _("SAMUEL"),
#line 8350
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8351
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8353
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8354
        .doubleBattle = FALSE,
#line 8355
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8357
            .species = SPECIES_SLOWKING,
#line 8357
            .gender = TRAINER_MON_MALE,
#line 8357
            .heldItem = ITEM_LIFE_ORB,
#line 8361
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8358
            .ability = ABILITY_REGENERATOR,
#line 8359
            .lvl = 54,
#line 8360
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8362
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8367
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8367
            .heldItem = ITEM_ROCKY_HELMET,
#line 8371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8368
            .ability = ABILITY_REGENERATOR,
#line 8369
            .lvl = 54,
#line 8370
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8371
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8376
            .species = SPECIES_GLISCOR,
#line 8376
            .gender = TRAINER_MON_FEMALE,
#line 8376
            .heldItem = ITEM_TOXIC_ORB,
#line 8380
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8377
            .ability = ABILITY_POISON_HEAL,
#line 8378
            .lvl = 54,
#line 8379
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8381
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8386
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8386
            .heldItem = ITEM_ASSAULT_VEST,
#line 8390
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8387
            .ability = ABILITY_CLEAR_BODY,
#line 8388
            .lvl = 54,
#line 8389
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8391
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8396
            .species = SPECIES_HONCHKROW,
#line 8396
            .gender = TRAINER_MON_MALE,
#line 8396
            .heldItem = ITEM_FOCUS_SASH,
#line 8400
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8397
            .ability = ABILITY_MOXIE,
#line 8398
            .lvl = 54,
#line 8399
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8401
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8407
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8408
        .trainerName = _("MAY"),
#line 8409
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8410
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8411
F_TRAINER_FEMALE | 
#line 8412
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8413
        .doubleBattle = FALSE,
#line 8414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8416
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8417
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8420
            .species = SPECIES_SLUGMA,
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
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8426
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8425
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8428
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8430
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8429
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8432
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
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
            .species = SPECIES_PELIPPER,
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
            .species = SPECIES_LUDICOLO,
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
            .species = SPECIES_COMBUSKEN,
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
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
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
            .species = SPECIES_LUDICOLO,
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
            .species = SPECIES_SLUGMA,
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
            .species = SPECIES_MARSHTOMP,
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
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8483
        .trainerName = _("JONAH"),
#line 8484
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8485
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8487
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8488
        .doubleBattle = FALSE,
#line 8489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8491
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8492
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8495
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8496
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8499
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8501
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8500
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8503
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8504
        .trainerName = _("HENRY"),
#line 8505
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8506
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8508
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8509
        .doubleBattle = FALSE,
#line 8510
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8512
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8513
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8516
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8517
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8520
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8521
        .trainerName = _("ROGER"),
#line 8522
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8523
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8525
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8526
        .doubleBattle = FALSE,
#line 8527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8529
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8530
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8533
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8535
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8534
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8537
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8538
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8541
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8542
        .trainerName = _("ALEXA"),
#line 8543
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8544
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8545
F_TRAINER_FEMALE | 
#line 8546
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8547
        .items = { ITEM_FULL_RESTORE },
#line 8548
        .doubleBattle = FALSE,
#line 8549
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8551
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8553
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8552
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8555
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8557
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8556
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8559
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8560
        .trainerName = _("RUBEN"),
#line 8561
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8562
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8564
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8565
        .items = { ITEM_HYPER_POTION },
#line 8566
        .doubleBattle = FALSE,
#line 8567
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8569
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8571
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8570
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8573
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8575
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8574
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8577
    [DIFFICULTY_NORMAL][TRAINER_KOJI] =
    {
#line 8578
        .trainerName = _("KOJI"),
#line 8579
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8580
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8582
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8583
        .doubleBattle = FALSE,
#line 8584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8586
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8587
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8590
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8591
        .trainerName = _("WAYNE"),
#line 8592
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8593
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8595
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8596
        .doubleBattle = FALSE,
#line 8597
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8599
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8601
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8600
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8603
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8604
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8607
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8609
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8608
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8611
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8612
        .trainerName = _("AIDAN"),
#line 8613
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8614
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8616
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8617
        .doubleBattle = FALSE,
#line 8618
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8620
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8622
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8621
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8624
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8626
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8625
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8628
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8629
        .trainerName = _("REED"),
#line 8630
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8631
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8633
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8634
        .doubleBattle = FALSE,
#line 8635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8637
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8639
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8638
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8641
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8643
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8642
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8645
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8646
        .trainerName = _("TISHA"),
#line 8647
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8648
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8649
F_TRAINER_FEMALE | 
#line 8650
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8651
        .doubleBattle = FALSE,
#line 8652
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8654
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8656
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8655
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8658
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8659
        .trainerName = _("TORI & TIA"),
#line 8660
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8661
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8663
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8664
        .doubleBattle = TRUE,
#line 8665
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8667
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8669
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8668
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8671
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8673
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8672
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8675
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8676
        .trainerName = _("KIM & IRIS"),
#line 8677
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8678
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8680
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8681
        .doubleBattle = TRUE,
#line 8682
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8684
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8686
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8685
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8688
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8690
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8689
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8692
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8693
        .trainerName = _("TYRA & IVY"),
#line 8694
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8695
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8697
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8698
        .doubleBattle = TRUE,
#line 8699
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8701
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8703
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8702
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8705
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8707
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8706
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8710
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8711
        .trainerName = _("MEL & PAUL"),
#line 8712
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8713
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8715
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8716
        .doubleBattle = TRUE,
#line 8717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8719
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8721
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8720
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8723
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8725
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8724
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8727
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY] =
    {
#line 8728
        .trainerName = _("JOHN & JAY"),
#line 8729
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8730
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8732
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8733
        .doubleBattle = TRUE,
#line 8734
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8736
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8738
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8737
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8740
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8742
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8741
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8744
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8745
        .trainerName = _("RELI & IAN"),
#line 8746
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8747
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8749
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8750
        .doubleBattle = TRUE,
#line 8751
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8753
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8754
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8757
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8758
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8761
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY] =
    {
#line 8762
        .trainerName = _("LILA & ROY"),
#line 8763
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8764
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8766
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8767
        .doubleBattle = TRUE,
#line 8768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8770
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8772
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8771
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8774
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8775
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8778
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8779
        .trainerName = _("LISA & RAY"),
#line 8780
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8781
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8783
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8784
        .doubleBattle = TRUE,
#line 8785
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8787
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8788
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8791
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8792
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8795
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8796
        .trainerName = _("CHRIS"),
#line 8797
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8798
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8800
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8801
        .doubleBattle = FALSE,
#line 8802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8804
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8805
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8808
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8810
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8809
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8812
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8814
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8813
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8816
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8817
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8820
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8821
        .trainerName = _("DAWSON"),
#line 8822
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8823
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8825
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8826
        .doubleBattle = FALSE,
#line 8827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8829
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8829
            .heldItem = ITEM_NUGGET,
#line 8831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8830
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8833
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8835
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8834
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8837
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8838
        .trainerName = _("SARAH"),
#line 8839
        .trainerClass = TRAINER_CLASS_LADY,
#line 8840
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8841
F_TRAINER_FEMALE | 
#line 8842
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8843
        .items = { ITEM_FULL_RESTORE },
#line 8844
        .doubleBattle = FALSE,
#line 8845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8847
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8848
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8851
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8851
            .heldItem = ITEM_NUGGET,
#line 8853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8852
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8855
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8856
        .trainerName = _("DARIAN"),
#line 8857
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8858
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8860
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8861
        .doubleBattle = FALSE,
#line 8862
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8864
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8865
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8868
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8869
        .trainerName = _("HAILEY"),
#line 8870
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8871
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8872
F_TRAINER_FEMALE | 
#line 8873
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8874
        .doubleBattle = FALSE,
#line 8875
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8877
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8879
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8878
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8881
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8882
        .trainerName = _("CHANDLER"),
#line 8883
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8884
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8886
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8887
        .doubleBattle = FALSE,
#line 8888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8890
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8892
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8891
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8894
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8896
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8895
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8898
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8899
        .trainerName = _("KALEB"),
#line 8900
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8901
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8903
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8904
        .doubleBattle = FALSE,
#line 8905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8907
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8907
            .heldItem = ITEM_ORAN_BERRY,
#line 8909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8908
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8911
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8911
            .heldItem = ITEM_ORAN_BERRY,
#line 8913
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8912
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8915
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8916
        .trainerName = _("JOSEPH"),
#line 8917
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8918
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8920
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8921
        .doubleBattle = FALSE,
#line 8922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8924
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8925
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8928
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8929
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8932
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8933
        .trainerName = _("ALYSSA"),
#line 8934
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8935
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8936
F_TRAINER_FEMALE | 
#line 8937
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8938
        .doubleBattle = FALSE,
#line 8939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8941
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8942
            .lvl = 25,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8945
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8946
        .trainerName = _("MARCOS"),
#line 8947
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8948
        .trainerPic = TRAINER_PIC_GUITARIST,
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
            .species = SPECIES_BULBASAUR,
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
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8959
        .trainerName = _("RHETT"),
#line 8960
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8961
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8963
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8964
        .doubleBattle = FALSE,
#line 8965
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8967
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8969
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8968
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8971
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8972
        .trainerName = _("TYRON"),
#line 8973
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8974
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8976
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8977
        .doubleBattle = FALSE,
#line 8978
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8980
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8981
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8984
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8985
        .trainerName = _("CELINA"),
#line 8986
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8987
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8988
F_TRAINER_FEMALE | 
#line 8989
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8990
        .doubleBattle = FALSE,
#line 8991
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8993
            .species = SPECIES_SUNKERN,
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
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8998
        .trainerName = _("BIANCA"),
#line 8999
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9000
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9001
F_TRAINER_FEMALE | 
#line 9002
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9003
        .doubleBattle = FALSE,
#line 9004
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9006
            .species = SPECIES_LUNATONE,
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
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 9011
        .trainerName = _("HAYDEN"),
#line 9012
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9013
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9015
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9016
        .doubleBattle = FALSE,
#line 9017
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9019
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9021
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9020
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9023
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 9024
        .trainerName = _("SOPHIE"),
#line 9025
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9026
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9027
F_TRAINER_FEMALE | 
#line 9028
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9029
        .doubleBattle = FALSE,
#line 9030
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9032
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9033
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9036
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9038
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9037
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9040
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 9041
        .trainerName = _("COBY"),
#line 9042
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9043
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9045
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9046
        .doubleBattle = FALSE,
#line 9047
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9049
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9051
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9050
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9053
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9054
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9057
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 9058
        .trainerName = _("LAWRENCE"),
#line 9059
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9060
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9062
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9063
        .doubleBattle = FALSE,
#line 9064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9066
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9067
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9070
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9071
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9074
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 9075
        .trainerName = _("WYATT"),
#line 9076
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 9077
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 9079
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9080
        .doubleBattle = FALSE,
#line 9081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9083
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9085
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9084
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9087
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9089
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9088
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9091
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 9092
        .trainerName = _("ANGELINA"),
#line 9093
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9094
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9095
F_TRAINER_FEMALE | 
#line 9096
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9097
        .doubleBattle = FALSE,
#line 9098
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9100
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9101
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9104
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9106
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9105
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9108
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 9109
        .trainerName = _("KAI"),
#line 9110
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 9111
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 9113
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9114
        .doubleBattle = FALSE,
#line 9115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9117
            .species = SPECIES_HORSEA,
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
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 9122
        .trainerName = _("CHARLOTTE"),
#line 9123
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9124
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9125
F_TRAINER_FEMALE | 
#line 9126
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9127
        .doubleBattle = FALSE,
#line 9128
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9130
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9132
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9131
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9134
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9135
        .trainerName = _("DEANDRE"),
#line 9136
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9137
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9139
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9140
        .doubleBattle = FALSE,
#line 9141
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9143
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9144
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9147
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9149
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9148
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9151
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9153
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9152
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9155
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
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
            .species = SPECIES_CROBAT,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
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
            .species = SPECIES_CAMERUPT,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9190
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9192
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9191
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9194
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9195
        .trainerName = _("GRUNT"),
#line 9196
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9197
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9199
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9200
        .doubleBattle = FALSE,
#line 9201
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9203
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9204
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9207
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9208
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9211
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9220
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9221
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9224
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9226
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9225
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9228
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
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
            .species = SPECIES_RHYHORN,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
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
            .species = SPECIES_HOUNDOOM,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
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
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9265
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9264
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9267
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
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
            .species = SPECIES_WEEZING,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
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
            .species = SPECIES_MIGHTYENA,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
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
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9303
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9306
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
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
            .species = SPECIES_CAMERUPT,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9320
        .trainerName = _("GRUNT"),
#line 9321
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9322
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
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
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9330
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9329
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9332
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
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
            .species = SPECIES_CROBAT,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
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
            .species = SPECIES_AGGRON,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9359
        .trainerName = _("GRUNT"),
#line 9360
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9361
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9362
F_TRAINER_FEMALE | 
#line 9363
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9364
        .doubleBattle = FALSE,
#line 9365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9367
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9368
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9371
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9372
        .trainerName = _("TABITHA"),
#line 9373
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9374
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9376
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9377
        .doubleBattle = FALSE,
#line 9378
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9380
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9383
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9381
            .ability = ABILITY_DROUGHT,
#line 9382
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9384
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9389
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9389
            .heldItem = ITEM_POISON_BARB,
#line 9392
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9390
            .ability = ABILITY_LEVITATE,
#line 9391
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9393
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9398
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9398
            .heldItem = ITEM_LIFE_ORB,
#line 9401
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9399
            .ability = ABILITY_LEVITATE,
#line 9400
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9402
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9407
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9407
            .heldItem = ITEM_FOCUS_SASH,
#line 9410
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9408
            .ability = ABILITY_OWN_TEMPO,
#line 9409
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9411
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9416
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9417
        .trainerName = _("DARCY"),
#line 9418
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9419
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9420
F_TRAINER_FEMALE | 
#line 9421
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9422
        .items = { ITEM_HYPER_POTION },
#line 9423
        .doubleBattle = FALSE,
#line 9424
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9426
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9428
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9427
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9430
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9432
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9431
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9434
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9435
        .trainerName = _("MAXIE"),
#line 9436
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9437
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9439
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9440
        .doubleBattle = FALSE,
#line 9441
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9443
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9443
            .heldItem = ITEM_ROCKY_HELMET,
#line 9446
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9444
            .ability = ABILITY_ROCK_HEAD,
#line 9445
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9446
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9451
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9451
            .heldItem = ITEM_AIR_BALLOON,
#line 9454
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9452
            .ability = ABILITY_HEAVY_METAL,
#line 9453
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9454
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 9459
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .heldItem = ITEM_SHARP_BEAK,
#line 9462
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9460
            .ability = ABILITY_INNER_FOCUS,
#line 9461
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9462
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9467
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9468
        .trainerName = _("PETE"),
#line 9469
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9470
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
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
            .species = SPECIES_KINGLER,
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
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9481
        .trainerName = _("ISABELLE"),
#line 9482
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9483
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9484
F_TRAINER_FEMALE | 
#line 9485
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9486
        .doubleBattle = FALSE,
#line 9487
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9489
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9490
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9493
    [DIFFICULTY_NORMAL][TRAINER_ANDRES] =
    {
#line 9494
        .trainerName = _("ANDRES"),
#line 9495
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9496
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9498
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9499
        .doubleBattle = FALSE,
#line 9500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9502
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9504
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9503
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9506
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9508
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9507
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9510
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9511
        .trainerName = _("JOSUE"),
#line 9512
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9513
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9515
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9516
        .doubleBattle = FALSE,
#line 9517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9519
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9521
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9520
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9523
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9525
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9524
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9527
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9528
        .trainerName = _("CAMRON"),
#line 9529
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9530
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9532
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9533
        .doubleBattle = FALSE,
#line 9534
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9536
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9537
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9540
    [DIFFICULTY_NORMAL][TRAINER_CORY] =
    {
#line 9541
        .trainerName = _("CORY"),
#line 9542
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9543
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9545
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9546
        .doubleBattle = FALSE,
#line 9547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9549
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9550
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9553
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9554
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9557
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9559
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9558
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9561
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9562
        .trainerName = _("CAROLINA"),
#line 9563
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9564
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9565
F_TRAINER_FEMALE | 
#line 9566
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9567
        .items = { ITEM_HYPER_POTION },
#line 9568
        .doubleBattle = FALSE,
#line 9569
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9571
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9573
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9572
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9575
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9577
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9576
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9579
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9581
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9580
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9583
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9584
        .trainerName = _("ELIJAH"),
#line 9585
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9586
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9588
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9589
        .doubleBattle = FALSE,
#line 9590
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9592
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9594
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9593
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9596
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9597
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9600
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9601
        .trainerName = _("CELIA"),
#line 9602
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9603
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9604
F_TRAINER_FEMALE | 
#line 9605
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9606
        .doubleBattle = FALSE,
#line 9607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9609
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9611
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9610
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9613
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9615
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9614
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9617
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9618
        .trainerName = _("BRYAN"),
#line 9619
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9620
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9622
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9623
        .doubleBattle = FALSE,
#line 9624
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9626
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9627
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9630
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9632
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9631
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9634
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9635
        .trainerName = _("BRANDEN"),
#line 9636
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9637
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9639
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9640
        .doubleBattle = FALSE,
#line 9641
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9643
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9644
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9647
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9648
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9651
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9652
        .trainerName = _("BRYANT"),
#line 9653
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9654
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9656
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9657
        .doubleBattle = FALSE,
#line 9658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9660
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9662
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9661
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9664
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9666
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9665
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9668
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9669
        .trainerName = _("SHAYLA"),
#line 9670
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9671
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9672
F_TRAINER_FEMALE | 
#line 9673
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9674
        .doubleBattle = FALSE,
#line 9675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9677
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9678
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9681
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9682
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9685
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9686
        .trainerName = _("KYRA"),
#line 9687
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9688
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9689
F_TRAINER_FEMALE | 
#line 9690
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9691
        .doubleBattle = FALSE,
#line 9692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9694
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9695
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9698
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9699
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9702
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9703
        .trainerName = _("JAIDEN"),
#line 9704
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9705
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9707
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9708
        .doubleBattle = FALSE,
#line 9709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9711
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9712
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9715
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9717
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9716
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9719
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9720
        .trainerName = _("ALIX"),
#line 9721
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9722
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9723
F_TRAINER_FEMALE | 
#line 9724
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9725
        .doubleBattle = FALSE,
#line 9726
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9728
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9729
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9732
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9734
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9733
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9736
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9737
        .trainerName = _("HELENE"),
#line 9738
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9739
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9740
F_TRAINER_FEMALE | 
#line 9741
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9742
        .doubleBattle = FALSE,
#line 9743
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9745
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9746
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9749
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9751
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9750
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9753
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9754
        .trainerName = _("MARLENE"),
#line 9755
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9756
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9757
F_TRAINER_FEMALE | 
#line 9758
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9759
        .doubleBattle = FALSE,
#line 9760
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9762
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9763
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9766
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9767
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9770
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9771
        .trainerName = _("DEVAN"),
#line 9772
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9773
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9775
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9776
        .doubleBattle = FALSE,
#line 9777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9779
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9780
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9783
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9784
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9787
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9788
        .trainerName = _("JOHNSON"),
#line 9789
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9790
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9792
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9793
        .doubleBattle = FALSE,
#line 9794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9796
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9797
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9800
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9801
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9804
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9805
        .trainerName = _("MELINA"),
#line 9806
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9807
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
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
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9814
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9817
    [DIFFICULTY_NORMAL][TRAINER_MELISSA] =
    {
#line 9818
        .trainerName = _("MELISSA"),
#line 9819
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 9820
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 9821
F_TRAINER_FEMALE | 
#line 9822
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9823
        .doubleBattle = FALSE,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9826
            .species = SPECIES_VIGOROTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9827
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9830
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9831
        .trainerName = _("BRANDI"),
#line 9832
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9833
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
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
            .species = SPECIES_MAWILE,
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
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9844
        .trainerName = _("AISHA"),
#line 9845
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9846
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9847
F_TRAINER_FEMALE | 
#line 9848
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9849
        .doubleBattle = FALSE,
#line 9850
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9852
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9854
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9853
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9856
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9857
        .trainerName = _("MAKAYLA"),
#line 9858
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9859
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9860
F_TRAINER_FEMALE | 
#line 9861
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9862
        .items = { ITEM_HYPER_POTION },
#line 9863
        .doubleBattle = FALSE,
#line 9864
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9866
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9867
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9870
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9871
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9874
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9875
        .trainerName = _("FABIAN"),
#line 9876
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9877
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9879
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9880
        .doubleBattle = FALSE,
#line 9881
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9883
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9884
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9887
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9888
        .trainerName = _("DAYTON"),
#line 9889
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9890
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9892
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9893
        .doubleBattle = FALSE,
#line 9894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9896
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9897
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9900
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9901
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9904
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9905
        .trainerName = _("RACHEL"),
#line 9906
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9907
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9908
F_TRAINER_FEMALE | 
#line 9909
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9910
        .doubleBattle = FALSE,
#line 9911
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9913
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9914
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9917
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9918
        .trainerName = _("LEONEL"),
#line 9919
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9920
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9922
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9923
        .items = { ITEM_HYPER_POTION },
#line 9924
        .doubleBattle = FALSE,
#line 9925
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9927
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9929
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9928
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9931
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9932
        .trainerName = _("CALLIE"),
#line 9933
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9934
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9935
F_TRAINER_FEMALE | 
#line 9936
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9937
        .doubleBattle = FALSE,
#line 9938
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9940
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9942
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9941
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9944
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9946
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9945
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9948
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9949
        .trainerName = _("CALE"),
#line 9950
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9951
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9953
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9954
        .doubleBattle = FALSE,
#line 9955
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9957
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9959
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9958
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9961
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9962
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9965
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9966
        .trainerName = _("MYLES"),
#line 9967
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9968
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9970
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9971
        .doubleBattle = FALSE,
#line 9972
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9974
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9976
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9975
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9978
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9980
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9979
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9982
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9984
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9983
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9986
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9987
        .trainerName = _("PAT"),
#line 9988
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9989
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9990
F_TRAINER_FEMALE | 
#line 9991
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9992
        .doubleBattle = FALSE,
#line 9993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9995
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9997
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9996
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9999
            .species = SPECIES_SIMISAGE,
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
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10005
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 10004
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10008
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN] =
    {
#line 10009
        .trainerName = _("CRISTIN"),
#line 10010
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 10011
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 10012
F_TRAINER_FEMALE | 
#line 10013
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10014
        .items = { ITEM_HYPER_POTION },
#line 10015
        .doubleBattle = FALSE,
#line 10016
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10018
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10020
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10019
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10022
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10024
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10023
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10026
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 10027
        .trainerName = _("MAY"),
#line 10028
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10029
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10030
F_TRAINER_FEMALE | 
#line 10031
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10032
        .doubleBattle = FALSE,
#line 10033
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10035
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10037
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10036
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10039
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10041
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10040
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10043
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 10044
        .trainerName = _("MAY"),
#line 10045
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10046
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 10047
F_TRAINER_FEMALE | 
#line 10048
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10049
        .doubleBattle = FALSE,
#line 10050
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10052
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10054
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10053
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10056
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10058
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 10057
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10060
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_A] =
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
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10069
            .heldItem = ITEM_EVIOLITE,
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
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_B] =
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10081
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10083
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10082
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10084
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_C] =
    {
#line 10085
        .trainerName = _("GRUNT"),
#line 10086
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10087
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10089
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10090
        .doubleBattle = FALSE,
#line 10091
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10093
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10095
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10094
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10096
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_D] =
    {
#line 10097
        .trainerName = _("GRUNT"),
#line 10098
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10099
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10101
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10102
        .doubleBattle = FALSE,
#line 10103
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10105
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10107
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10106
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10108
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_E] =
    {
#line 10109
        .trainerName = _("GRUNT"),
#line 10110
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10111
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10113
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10114
        .doubleBattle = FALSE,
#line 10115
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10117
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10119
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10118
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10120
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10121
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10123
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
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
            .species = SPECIES_ZUBAT,
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
#line 10136
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 10137
        .trainerName = _("GRUNT"),
#line 10138
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10139
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10141
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10142
        .doubleBattle = FALSE,
#line 10143
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10145
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10146
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10148
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
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
            .species = SPECIES_SHUPPET,
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
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
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
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10171
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10170
            .lvl = 33,
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
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10175
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 10176
        .trainerName = _("GRUNT"),
#line 10177
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10178
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10180
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10181
        .doubleBattle = FALSE,
#line 10182
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10184
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10185
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10187
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 10188
        .trainerName = _("GRUNT"),
#line 10189
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10190
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10192
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10193
        .doubleBattle = FALSE,
#line 10194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10196
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10198
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10197
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10199
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10201
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10200
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10202
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 10203
        .trainerName = _("GRUNT"),
#line 10204
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10205
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10207
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10208
        .doubleBattle = FALSE,
#line 10209
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10211
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10213
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10212
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10214
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10216
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10215
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10217
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10218
        .trainerName = _("TATE&LIZA"),
#line 10219
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10220
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10222
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10223
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10224
        .doubleBattle = TRUE,
#line 10225
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10227
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10228
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10230
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10235
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10236
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10238
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10243
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10244
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10246
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10251
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10251
            .heldItem = ITEM_CHESTO_BERRY,
#line 10253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10252
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10254
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10259
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10259
            .heldItem = ITEM_CHESTO_BERRY,
#line 10261
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10260
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10262
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10267
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10267
            .heldItem = ITEM_SITRUS_BERRY,
#line 10269
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10268
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10270
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10275
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10276
        .trainerName = _("ANGELO"),
#line 10277
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10278
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10280
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10281
        .doubleBattle = FALSE,
#line 10282
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10284
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10285
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10288
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10290
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10289
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10292
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10293
        .trainerName = _("DARIUS"),
#line 10294
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10295
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10297
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10298
        .doubleBattle = FALSE,
#line 10299
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10301
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10303
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10302
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10305
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10306
        .trainerName = _("STEVEN"),
#line 10307
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10308
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10310
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10311
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10312
        .doubleBattle = FALSE,
#line 10313
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10315
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10317
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10316
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10318
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10323
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10325
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10324
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10326
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10331
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10332
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10334
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10339
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10340
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10342
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10347
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10349
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10348
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10350
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10355
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10355
            .heldItem = ITEM_SITRUS_BERRY,
#line 10357
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10356
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10358
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10363
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10364
        .trainerName = _("ANABEL"),
#line 10365
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10366
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10367
F_TRAINER_FEMALE | 
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
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10377
        .trainerName = _("TUCKER"),
#line 10378
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10379
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
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
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10390
        .trainerName = _("SPENSER"),
#line 10391
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10392
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
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
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10403
        .trainerName = _("GRETA"),
#line 10404
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10405
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10406
F_TRAINER_FEMALE | 
#line 10407
            TRAINER_ENCOUNTER_MUSIC_MALE,
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
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10416
        .trainerName = _("GRUNT"),
#line 10417
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10418
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10420
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10421
        .doubleBattle = FALSE,
#line 10422
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10424
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10426
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10425
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10428
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10429
        .trainerName = _("GHOSTESS"),
#line 10430
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10431
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10432
F_TRAINER_FEMALE | 
#line 10433
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10434
        .doubleBattle = FALSE,
#line 10435
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10437
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10437
            .heldItem = ITEM_TWISTED_SPOON,
#line 10440
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10438
            .ability = ABILITY_THICK_FAT,
#line 10439
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10440
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10445
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10445
            .heldItem = ITEM_BRIGHT_POWDER,
#line 10448
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10446
            .ability = ABILITY_WONDER_SKIN,
#line 10447
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10448
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10453
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10453
            .heldItem = ITEM_METRONOME,
#line 10456
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10454
            .ability = ABILITY_ROCK_HEAD,
#line 10455
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10456
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10461
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10461
            .heldItem = ITEM_ASSAULT_VEST,
#line 10464
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10462
            .ability = ABILITY_CURSED_BODY,
#line 10463
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10464
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10469
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10470
        .trainerName = _("JORDAN"),
#line 10471
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10472
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10474
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10475
        .doubleBattle = FALSE,
#line 10476
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10478
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10481
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10479
            .ability = ABILITY_CHLOROPHYLL,
#line 10480
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10481
                MOVE_ACROBATICS,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10486
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10486
            .heldItem = ITEM_EVIOLITE,
#line 10489
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10487
            .ability = ABILITY_PRESSURE,
#line 10488
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10489
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10494
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10494
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10497
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10495
            .ability = ABILITY_LIQUID_OOZE,
#line 10496
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10497
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10502
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10502
            .heldItem = ITEM_QUICK_CLAW,
#line 10505
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10503
            .ability = ABILITY_OBLIVIOUS,
#line 10504
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10505
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10510
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10510
            .heldItem = ITEM_SHARP_BEAK,
#line 10513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10511
            .ability = ABILITY_INNER_FOCUS,
#line 10512
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10513
                MOVE_AIR_CUTTER,
                MOVE_POISON_FANG,
                MOVE_ABSORB,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 10518
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
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
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10527
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10527
            .heldItem = ITEM_WIDE_LENS,
#line 10530
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10528
            .ability = ABILITY_CHLOROPHYLL,
#line 10529
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10530
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10535
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10535
            .heldItem = ITEM_LIFE_ORB,
#line 10538
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10536
            .ability = ABILITY_PRESSURE,
#line 10537
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10538
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
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
            .lvl = 69,
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
            .heldItem = ITEM_CHOICE_SPECS,
#line 10554
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10552
            .ability = ABILITY_OBLIVIOUS,
#line 10553
            .lvl = 69,
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
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10559
            .heldItem = ITEM_SHARP_BEAK,
#line 10562
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10560
            .ability = ABILITY_INNER_FOCUS,
#line 10561
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10562
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 10567
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10567
            .heldItem = ITEM_ASSAULT_VEST,
#line 10570
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10568
            .ability = ABILITY_AIR_LOCK,
#line 10569
            .lvl = 69,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10570
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10575
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10576
        .trainerName = _("GHOSTESS"),
#line 10577
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10578
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10579
F_TRAINER_FEMALE | 
#line 10580
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10581
        .doubleBattle = FALSE,
#line 10582
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10584
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10584
            .heldItem = ITEM_EXPERT_BELT,
#line 10587
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10585
            .ability = ABILITY_THICK_FAT,
#line 10586
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10587
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10592
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10592
            .heldItem = ITEM_MUSCLE_BAND,
#line 10595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10593
            .ability = ABILITY_WONDER_SKIN,
#line 10594
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10595
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10600
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10600
            .heldItem = ITEM_WIDE_LENS,
#line 10603
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10601
            .ability = ABILITY_INTIMIDATE,
#line 10602
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10603
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10608
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10608
            .heldItem = ITEM_ASSAULT_VEST,
#line 10611
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10609
            .ability = ABILITY_CURSED_BODY,
#line 10610
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10611
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10616
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10617
        .trainerName = _("GRUNT"),
#line 10618
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10619
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10621
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10622
        .doubleBattle = FALSE,
#line 10623
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10625
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10627
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10626
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10628
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
    {
#line 10629
        .trainerName = _("GRUNT"),
#line 10630
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10631
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10633
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10634
        .doubleBattle = FALSE,
#line 10635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10637
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10639
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10638
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10640
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10641
        .trainerName = _("GRUNT"),
#line 10642
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10643
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10645
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10646
        .doubleBattle = FALSE,
#line 10647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10649
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10651
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10650
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10652
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10653
        .trainerName = _("GRUNT"),
#line 10654
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10655
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10657
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10658
        .doubleBattle = FALSE,
#line 10659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10661
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10663
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10662
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10664
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10665
        .trainerName = _("CORY"),
#line 10666
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10667
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10669
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10670
        .doubleBattle = FALSE,
#line 10671
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10673
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10675
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10674
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10677
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10679
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10678
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10681
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10683
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10682
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10685
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10686
        .trainerName = _("CORY"),
#line 10687
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10688
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10691
        .doubleBattle = FALSE,
#line 10692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10694
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10696
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10695
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10698
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10700
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10699
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10702
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10704
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10703
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10706
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10707
        .trainerName = _("MARIELA"),
#line 10708
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10709
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10710
F_TRAINER_FEMALE | 
#line 10711
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10712
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10714
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10716
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10715
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10718
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10719
        .trainerName = _("ALVARO"),
#line 10720
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10721
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10723
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10724
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10726
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10727
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10730
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10731
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10734
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10735
        .trainerName = _("EVERETT"),
#line 10736
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10737
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10739
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10740
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10742
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10743
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10746
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10747
        .trainerName = _("RED"),
#line 10748
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10749
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10751
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10752
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10754
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10756
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10755
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10758
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10759
        .trainerName = _("LEAF"),
#line 10760
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10761
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10762
F_TRAINER_FEMALE | 
#line 10763
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10764
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10766
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10767
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10770
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10771
        .trainerName = _("SAMUEL"),
#line 10772
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10773
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10775
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10776
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10778
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10780
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10779
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10782
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10783
        .trainerName = _("MAY"),
#line 10784
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10785
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10786
F_TRAINER_FEMALE | 
#line 10787
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10788
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10790
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10792
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10791
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
