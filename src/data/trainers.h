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
    [DIFFICULTY_NORMAL][TRAINER_SAWYER_1] =
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
    [DIFFICULTY_NORMAL][TRAINER_GABRIELLE_1] =
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
            },
        },
    },
#line 318
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_1] =
    {
#line 319
        .trainerName = _("GRUNT"),
#line 320
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 321
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 323
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 324
        .doubleBattle = FALSE,
#line 325
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 327
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 328
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 331
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 332
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 335
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_2] =
    {
#line 336
        .trainerName = _("GRUNT"),
#line 337
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 338
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 340
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 341
        .doubleBattle = FALSE,
#line 342
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 344
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 346
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 345
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 348
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 350
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 349
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 352
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_3] =
    {
#line 353
        .trainerName = _("GRUNT"),
#line 354
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 355
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 357
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 358
        .doubleBattle = FALSE,
#line 359
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 361
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 363
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 362
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 365
            .species = SPECIES_SEALEO,
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
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 371
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 370
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 373
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_1] =
    {
#line 374
        .trainerName = _("GRUNT"),
#line 375
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 376
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 378
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 379
        .doubleBattle = FALSE,
#line 380
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 382
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 384
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 383
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 386
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MUSEUM_2] =
    {
#line 387
        .trainerName = _("GRUNT"),
#line 388
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 389
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 391
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 392
        .doubleBattle = FALSE,
#line 393
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 395
            .species = SPECIES_ELECTRIKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 397
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 396
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 399
            .species = SPECIES_GRIMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 401
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 400
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 403
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_1] =
    {
#line 404
        .trainerName = _("GRUNT"),
#line 405
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 406
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 408
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 409
        .doubleBattle = FALSE,
#line 410
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 412
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 414
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 413
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 416
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_1] =
    {
#line 417
        .trainerName = _("GRUNT"),
#line 418
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 419
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 421
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 422
        .doubleBattle = FALSE,
#line 423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 425
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 426
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 429
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_2] =
    {
#line 430
        .trainerName = _("GRUNT"),
#line 431
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 432
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 434
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 435
        .doubleBattle = FALSE,
#line 436
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 438
            .species = SPECIES_CARVANHA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 440
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 439
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 442
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_3] =
    {
#line 443
        .trainerName = _("GRUNT"),
#line 444
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 445
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 447
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 448
        .doubleBattle = FALSE,
#line 449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 451
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 452
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 455
            .species = SPECIES_CHINCHOU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 456
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 459
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_4] =
    {
#line 460
        .trainerName = _("GRUNT"),
#line 461
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 462
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 463
F_TRAINER_FEMALE | 
#line 464
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 465
        .doubleBattle = FALSE,
#line 466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 468
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 469
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 472
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_5] =
    {
#line 473
        .trainerName = _("GRUNT"),
#line 474
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 475
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 476
F_TRAINER_FEMALE | 
#line 477
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 478
        .doubleBattle = FALSE,
#line 479
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 481
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 483
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 482
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 485
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_6] =
    {
#line 486
        .trainerName = _("GRUNT"),
#line 487
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 488
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 489
F_TRAINER_FEMALE | 
#line 490
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 491
        .doubleBattle = FALSE,
#line 492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 494
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 495
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 498
    [DIFFICULTY_NORMAL][TRAINER_FREDRICK] =
    {
#line 499
        .trainerName = _("FREDRICK"),
#line 500
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 501
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 503
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 504
        .doubleBattle = FALSE,
#line 505
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 507
            .species = SPECIES_WORMADAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 509
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 508
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 511
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 513
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 512
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 515
    [DIFFICULTY_NORMAL][TRAINER_MATTIAS] =
    {
#line 516
        .trainerName = _("MATTHIAS"),
#line 517
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 518
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_M,
        .encounterMusic_gender =
#line 520
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 521
        .doubleBattle = FALSE,
#line 522
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 524
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 524
            .heldItem = ITEM_LEFTOVERS,
#line 527
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 525
            .ability = ABILITY_THICK_FAT,
#line 526
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 528
                MOVE_SURF,
                MOVE_AURORA_BEAM,
                MOVE_FISSURE,
                MOVE_BLIZZARD,
            },
            },
            {
#line 533
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 533
            .heldItem = ITEM_WISE_GLASSES,
#line 536
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 534
            .ability = ABILITY_SHED_SKIN,
#line 535
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 537
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
            },
            },
            {
#line 542
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 542
            .heldItem = ITEM_EXPERT_BELT,
#line 545
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 543
            .ability = ABILITY_INTIMIDATE,
#line 544
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 546
                MOVE_CRUNCH,
                MOVE_FIRE_FANG,
                MOVE_TRAILBLAZE,
                MOVE_THUNDER_FANG,
            },
            },
        },
    },
#line 551
    [DIFFICULTY_NORMAL][TRAINER_ZANDER] =
    {
#line 552
        .trainerName = _("ZANDER"),
#line 553
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 554
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 556
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 557
        .doubleBattle = FALSE,
#line 558
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 560
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 562
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 561
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 564
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_WEATHER_INSTITUTE] =
    {
#line 565
        .trainerName = _("SHELLY"),
#line 566
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 567
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 568
F_TRAINER_FEMALE | 
#line 569
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 570
        .doubleBattle = FALSE,
#line 571
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 573
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 573
            .heldItem = ITEM_ROCKY_HELMET,
#line 576
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 574
            .ability = ABILITY_SPEED_BOOST,
#line 575
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 577
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 582
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 582
            .heldItem = ITEM_DAMP_ROCK,
#line 585
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 583
            .ability = ABILITY_STATIC,
#line 584
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 586
                MOVE_THUNDERBOLT,
                MOVE_QUICK_ATTACK,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 591
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 594
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 592
            .ability = ABILITY_ADAPTABILITY,
#line 593
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 595
                MOVE_RAZOR_SHELL,
                MOVE_CRUNCH,
            },
            },
            {
#line 598
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 598
            .heldItem = ITEM_BLACK_SLUDGE,
#line 601
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 599
            .ability = ABILITY_STICKY_HOLD,
#line 600
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 602
                MOVE_GUNK_SHOT,
                MOVE_DISABLE,
                MOVE_MINIMIZE,
            },
            },
        },
    },
#line 606
    [DIFFICULTY_NORMAL][TRAINER_SHELLY_SEAFLOOR_CAVERN] =
    {
#line 607
        .trainerName = _("SHELLY"),
#line 608
        .trainerClass = TRAINER_CLASS_AQUA_ADMIN,
#line 609
        .trainerPic = TRAINER_PIC_AQUA_ADMIN_F,
        .encounterMusic_gender =
#line 610
F_TRAINER_FEMALE | 
#line 611
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 612
        .doubleBattle = FALSE,
#line 613
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 615
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 615
            .heldItem = ITEM_ROCKY_HELMET,
#line 618
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 616
            .ability = ABILITY_SPEED_BOOST,
#line 617
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 619
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_AQUA_JET,
                MOVE_WATERFALL,
            },
            },
            {
#line 624
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 624
            .heldItem = ITEM_DAMP_ROCK,
#line 627
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 625
            .ability = ABILITY_STATIC,
#line 626
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 628
                MOVE_THUNDER_WAVE,
                MOVE_VOLT_SWITCH,
                MOVE_RAIN_DANCE,
                MOVE_THUNDER,
            },
            },
            {
#line 633
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 633
            .heldItem = ITEM_FOCUS_BAND,
#line 636
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 634
            .ability = ABILITY_ADAPTABILITY,
#line 635
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 637
                MOVE_CRABHAMMER,
                MOVE_CRUNCH,
            },
            },
            {
#line 640
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 640
            .heldItem = ITEM_BLACK_SLUDGE,
#line 643
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 641
            .ability = ABILITY_STICKY_HOLD,
#line 642
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 644
                MOVE_GUNK_SHOT,
                MOVE_TOXIC,
                MOVE_MINIMIZE,
                MOVE_GIGA_DRAIN,
            },
            },
        },
    },
#line 649
    [DIFFICULTY_NORMAL][TRAINER_ARCHIE] =
    {
#line 650
        .trainerName = _("ARCHIE"),
#line 651
        .trainerClass = TRAINER_CLASS_AQUA_LEADER,
#line 652
        .trainerPic = TRAINER_PIC_AQUA_LEADER_ARCHIE,
        .encounterMusic_gender =
#line 654
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 655
        .doubleBattle = FALSE,
#line 656
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 658
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 658
            .heldItem = ITEM_DAMP_ROCK,
#line 661
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 659
            .ability = ABILITY_WATER_ABSORB,
#line 660
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 662
                MOVE_ENERGY_BALL,
                MOVE_SPIKES,
                MOVE_KNOCK_OFF,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 667
            .species = SPECIES_SHARPEDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 667
            .heldItem = ITEM_MUSCLE_BAND,
#line 670
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 668
            .ability = ABILITY_SPEED_BOOST,
#line 669
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 671
                MOVE_CRUNCH,
                MOVE_ICE_FANG,
                MOVE_EARTHQUAKE,
                MOVE_LIQUIDATION,
            },
            },
            {
#line 676
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 676
            .heldItem = ITEM_STICKY_BARB,
#line 679
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 677
            .ability = ABILITY_SHED_SKIN,
#line 678
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 680
                MOVE_SLUDGE_BOMB,
                MOVE_GASTRO_ACID,
                MOVE_DARK_PULSE,
                MOVE_SWITCHEROO,
            },
            },
            {
#line 685
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 685
            .heldItem = ITEM_CHOICE_SPECS,
#line 688
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 686
            .ability = ABILITY_VOLT_ABSORB,
#line 687
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 689
                MOVE_HYDRO_PUMP,
                MOVE_DISCHARGE,
                MOVE_DAZZLING_GLEAM,
                MOVE_FLIP_TURN,
            },
            },
            {
#line 695
            .species = SPECIES_WALREIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 695
            .heldItem = ITEM_LEFTOVERS,
#line 698
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 696
            .ability = ABILITY_OBLIVIOUS,
#line 697
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 699
                MOVE_BLIZZARD,
                MOVE_SURF,
                MOVE_YAWN,
                MOVE_AQUA_RING,
            },
            },
        },
    },
#line 704
    [DIFFICULTY_NORMAL][TRAINER_LEAH] =
    {
#line 705
        .trainerName = _("LEAH"),
#line 706
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 707
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 708
F_TRAINER_FEMALE | 
#line 709
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 710
        .doubleBattle = FALSE,
#line 711
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 713
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 715
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 714
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 717
    [DIFFICULTY_NORMAL][TRAINER_DAISY] =
    {
#line 718
        .trainerName = _("DAISY"),
#line 719
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 720
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 721
F_TRAINER_FEMALE | 
#line 722
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 723
        .doubleBattle = FALSE,
#line 724
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 726
            .species = SPECIES_ELEKID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 728
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 727
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 730
            .species = SPECIES_COMBEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 732
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 731
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 734
    [DIFFICULTY_NORMAL][TRAINER_ROSE_1] =
    {
#line 735
        .trainerName = _("ROSE"),
#line 736
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 737
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 738
F_TRAINER_FEMALE | 
#line 739
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 740
        .doubleBattle = FALSE,
#line 741
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 743
            .species = SPECIES_AIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 745
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 744
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 747
            .species = SPECIES_YAMASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 749
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 748
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 751
            .species = SPECIES_SOLOSIS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 752
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 755
    [DIFFICULTY_NORMAL][TRAINER_FELIX] =
    {
#line 756
        .trainerName = _("FELIX"),
#line 757
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 758
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 760
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 761
        .items = { ITEM_FULL_RESTORE },
#line 762
        .doubleBattle = FALSE,
#line 763
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 765
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 766
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 769
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 771
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 770
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 774
    [DIFFICULTY_NORMAL][TRAINER_VIOLET] =
    {
#line 775
        .trainerName = _("VIOLET"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 783
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 784
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 787
            .species = SPECIES_PARASECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 788
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 791
    [DIFFICULTY_NORMAL][TRAINER_DUSTY_1] =
    {
#line 792
        .trainerName = _("DUSTY"),
#line 793
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 794
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 796
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 797
        .doubleBattle = FALSE,
#line 798
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 800
            .species = SPECIES_GASTLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 802
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 801
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 804
    [DIFFICULTY_NORMAL][TRAINER_CHIP] =
    {
#line 805
        .trainerName = _("CHIP"),
#line 806
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 807
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 809
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 810
        .doubleBattle = FALSE,
#line 811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 813
            .species = SPECIES_HITMONCHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 815
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 814
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 817
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 819
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 818
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 821
            .species = SPECIES_WEEPINBELL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 823
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 822
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 825
    [DIFFICULTY_NORMAL][TRAINER_FOSTER] =
    {
#line 826
        .trainerName = _("FOSTER"),
#line 827
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 828
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 830
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 831
        .doubleBattle = FALSE,
#line 832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 834
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 836
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 835
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 838
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 840
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 839
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 842
    [DIFFICULTY_NORMAL][TRAINER_GABBY_AND_TY_1] =
    {
#line 843
        .trainerName = _("GABBY & TY"),
#line 844
        .trainerClass = TRAINER_CLASS_INTERVIEWER,
#line 845
        .trainerPic = TRAINER_PIC_INTERVIEWER,
        .encounterMusic_gender =
#line 847
            TRAINER_ENCOUNTER_MUSIC_INTERVIEWER,
#line 848
        .doubleBattle = TRUE,
#line 849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 851
            .species = SPECIES_KLINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 853
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 852
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 855
            .species = SPECIES_FEEBAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 857
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 856
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 859
    [DIFFICULTY_NORMAL][TRAINER_LOLA_1] =
    {
#line 860
        .trainerName = _("LOLA"),
#line 861
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 862
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 863
F_TRAINER_FEMALE | 
#line 864
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 865
        .doubleBattle = FALSE,
#line 866
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 868
            .species = SPECIES_FRILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 870
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 869
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 872
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 874
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 873
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 876
    [DIFFICULTY_NORMAL][TRAINER_AUSTINA] =
    {
#line 877
        .trainerName = _("AUSTINA"),
#line 878
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 879
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 880
F_TRAINER_FEMALE | 
#line 881
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 882
        .doubleBattle = FALSE,
#line 883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 885
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 886
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 889
    [DIFFICULTY_NORMAL][TRAINER_GWEN] =
    {
#line 890
        .trainerName = _("GWEN"),
#line 891
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 892
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 893
F_TRAINER_FEMALE | 
#line 894
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 895
        .doubleBattle = FALSE,
#line 896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 898
            .species = SPECIES_QUAGSIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 899
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 902
    [DIFFICULTY_NORMAL][TRAINER_RICKY_1] =
    {
#line 903
        .trainerName = _("RICKY"),
#line 904
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 905
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 907
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 908
        .doubleBattle = FALSE,
#line 909
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 911
            .species = SPECIES_POLIWAG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 913
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 912
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 915
    [DIFFICULTY_NORMAL][TRAINER_SIMON] =
    {
#line 916
        .trainerName = _("SIMON"),
#line 917
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 918
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 920
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 921
        .doubleBattle = FALSE,
#line 922
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 924
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 926
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 925
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 928
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 929
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 932
    [DIFFICULTY_NORMAL][TRAINER_CHARLIE] =
    {
#line 933
        .trainerName = _("CHARLIE"),
#line 934
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 935
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 937
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 938
        .doubleBattle = FALSE,
#line 939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 941
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 942
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 945
    [DIFFICULTY_NORMAL][TRAINER_RANDALL] =
    {
#line 946
        .trainerName = _("RANDALL"),
#line 947
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 948
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 950
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 951
        .items = { ITEM_HYPER_POTION },
#line 952
        .doubleBattle = FALSE,
#line 953
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 955
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 957
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 956
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 959
    [DIFFICULTY_NORMAL][TRAINER_PARKER] =
    {
#line 960
        .trainerName = _("PARKER"),
#line 961
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 962
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 964
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 965
        .items = { ITEM_HYPER_POTION },
#line 966
        .doubleBattle = FALSE,
#line 967
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 969
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 971
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 970
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 973
    [DIFFICULTY_NORMAL][TRAINER_GEORGE] =
    {
#line 974
        .trainerName = _("GEORGE"),
#line 975
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 976
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 978
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 979
        .items = { ITEM_HYPER_POTION },
#line 980
        .doubleBattle = FALSE,
#line 981
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 983
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 983
            .heldItem = ITEM_SITRUS_BERRY,
#line 985
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 984
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 987
    [DIFFICULTY_NORMAL][TRAINER_BERKE] =
    {
#line 988
        .trainerName = _("BERKE"),
#line 989
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 990
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 992
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 993
        .items = { ITEM_HYPER_POTION },
#line 994
        .doubleBattle = FALSE,
#line 995
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 997
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 999
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 998
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1001
    [DIFFICULTY_NORMAL][TRAINER_BRAXTON] =
    {
#line 1002
        .trainerName = _("BRAXTON"),
#line 1003
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1004
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1006
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1007
        .items = { ITEM_HYPER_POTION },
#line 1008
        .doubleBattle = FALSE,
#line 1009
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 1011
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1013
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1012
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1015
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1017
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1016
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1019
            .species = SPECIES_GLACEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1021
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1020
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1023
            .species = SPECIES_SAWSBUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1025
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1024
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1027
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1029
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1028
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1031
    [DIFFICULTY_NORMAL][TRAINER_VINCENT] =
    {
#line 1032
        .trainerName = _("VINCENT"),
#line 1033
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1034
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1036
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1037
        .items = { ITEM_FULL_RESTORE },
#line 1038
        .doubleBattle = FALSE,
#line 1039
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1041
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1043
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1042
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1045
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1047
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1046
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1049
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1051
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1050
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1053
    [DIFFICULTY_NORMAL][TRAINER_LEROY] =
    {
#line 1054
        .trainerName = _("LEROY"),
#line 1055
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1056
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1058
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1059
        .items = { ITEM_FULL_RESTORE },
#line 1060
        .doubleBattle = FALSE,
#line 1061
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1063
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1065
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1064
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1067
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1069
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1068
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1071
    [DIFFICULTY_NORMAL][TRAINER_WILTON_1] =
    {
#line 1072
        .trainerName = _("WILTON"),
#line 1073
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1074
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1076
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1077
        .items = { ITEM_SUPER_POTION },
#line 1078
        .doubleBattle = FALSE,
#line 1079
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1081
            .species = SPECIES_MAGBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1083
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1082
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1085
            .species = SPECIES_SIGILYPH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1087
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1086
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1089
            .species = SPECIES_TYROGUE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1091
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1090
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1093
    [DIFFICULTY_NORMAL][TRAINER_EDGAR] =
    {
#line 1094
        .trainerName = _("EDGAR"),
#line 1095
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1096
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1098
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1099
        .items = { ITEM_FULL_RESTORE },
#line 1100
        .doubleBattle = FALSE,
#line 1101
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1103
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1105
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1104
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1107
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1109
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1108
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1111
    [DIFFICULTY_NORMAL][TRAINER_ALBERT] =
    {
#line 1112
        .trainerName = _("ALBERT"),
#line 1113
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1114
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1116
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1117
        .items = { ITEM_FULL_RESTORE },
#line 1118
        .doubleBattle = FALSE,
#line 1119
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1121
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1123
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1122
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1125
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1127
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1126
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1129
    [DIFFICULTY_NORMAL][TRAINER_SAMMY] =
    {
#line 1130
        .trainerName = _("SAMMY"),
#line 1131
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1132
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1134
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1135
        .items = { ITEM_FULL_RESTORE },
#line 1136
        .doubleBattle = FALSE,
#line 1137
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1139
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1141
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1140
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1143
            .species = SPECIES_SWAMPERT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1145
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1144
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1147
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1149
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1148
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1151
    [DIFFICULTY_NORMAL][TRAINER_VITO] =
    {
#line 1152
        .trainerName = _("VITO"),
#line 1153
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1154
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1156
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1157
        .items = { ITEM_FULL_RESTORE },
#line 1158
        .doubleBattle = FALSE,
#line 1159
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 1161
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1163
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1162
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1165
            .species = SPECIES_BUTTERFREE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1167
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1166
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1169
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1171
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1170
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1173
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1175
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1174
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1177
    [DIFFICULTY_NORMAL][TRAINER_OWEN] =
    {
#line 1178
        .trainerName = _("OWEN"),
#line 1179
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1180
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1182
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1183
        .items = { ITEM_FULL_RESTORE },
#line 1184
        .doubleBattle = FALSE,
#line 1185
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1187
            .species = SPECIES_GARCHOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1189
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1188
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1191
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1193
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1192
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1195
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1197
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1196
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1199
    [DIFFICULTY_NORMAL][TRAINER_WARREN] =
    {
#line 1200
        .trainerName = _("WARREN"),
#line 1201
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1202
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 1204
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1205
        .items = { ITEM_FULL_RESTORE },
#line 1206
        .doubleBattle = FALSE,
#line 1207
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1209
            .species = SPECIES_NIDOQUEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1211
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1210
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1213
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1215
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1214
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1217
    [DIFFICULTY_NORMAL][TRAINER_MARY] =
    {
#line 1218
        .trainerName = _("MARY"),
#line 1219
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1220
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1221
F_TRAINER_FEMALE | 
#line 1222
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1223
        .items = { ITEM_HYPER_POTION },
#line 1224
        .doubleBattle = FALSE,
#line 1225
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1227
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1228
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1232
    [DIFFICULTY_NORMAL][TRAINER_ALEXIA] =
    {
#line 1233
        .trainerName = _("ALEXIA"),
#line 1234
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1235
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1236
F_TRAINER_FEMALE | 
#line 1237
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1238
        .items = { ITEM_HYPER_POTION },
#line 1239
        .doubleBattle = FALSE,
#line 1240
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1242
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1244
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1243
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1246
    [DIFFICULTY_NORMAL][TRAINER_JODY] =
    {
#line 1247
        .trainerName = _("JODY"),
#line 1248
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1249
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1250
F_TRAINER_FEMALE | 
#line 1251
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1252
        .items = { ITEM_HYPER_POTION },
#line 1253
        .doubleBattle = FALSE,
#line 1254
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1256
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1258
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 1257
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 1259
                MOVE_SWORDS_DANCE,
                MOVE_DRAIN_PUNCH,
            },
            },
        },
    },
#line 1262
    [DIFFICULTY_NORMAL][TRAINER_WENDY] =
    {
#line 1263
        .trainerName = _("WENDY"),
#line 1264
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1265
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1266
F_TRAINER_FEMALE | 
#line 1267
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1268
        .items = { ITEM_FULL_RESTORE },
#line 1269
        .doubleBattle = FALSE,
#line 1270
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1272
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1274
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1273
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1276
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1278
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1277
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1280
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1282
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1281
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1284
    [DIFFICULTY_NORMAL][TRAINER_KEIRA] =
    {
#line 1285
        .trainerName = _("KEIRA"),
#line 1286
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1287
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1288
F_TRAINER_FEMALE | 
#line 1289
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1290
        .items = { ITEM_FULL_RESTORE },
#line 1291
        .doubleBattle = FALSE,
#line 1292
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1294
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1296
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1295
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1298
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1300
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1299
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1302
    [DIFFICULTY_NORMAL][TRAINER_BROOKE_1] =
    {
#line 1303
        .trainerName = _("BROOKE"),
#line 1304
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1305
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1306
F_TRAINER_FEMALE | 
#line 1307
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1308
        .items = { ITEM_SUPER_POTION },
#line 1309
        .doubleBattle = FALSE,
#line 1310
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1312
            .species = SPECIES_ANORITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1314
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1313
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1316
            .species = SPECIES_TIRTOUGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1318
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1317
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1320
            .species = SPECIES_SNORUNT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1322
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1321
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1324
    [DIFFICULTY_NORMAL][TRAINER_JENNIFER] =
    {
#line 1325
        .trainerName = _("JENNIFER"),
#line 1326
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1327
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1328
F_TRAINER_FEMALE | 
#line 1329
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1330
        .items = { ITEM_FULL_RESTORE },
#line 1331
        .doubleBattle = FALSE,
#line 1332
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1334
            .species = SPECIES_DUOSION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1336
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1335
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1338
    [DIFFICULTY_NORMAL][TRAINER_HOPE] =
    {
#line 1339
        .trainerName = _("HOPE"),
#line 1340
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1341
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1342
F_TRAINER_FEMALE | 
#line 1343
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1344
        .items = { ITEM_FULL_RESTORE },
#line 1345
        .doubleBattle = FALSE,
#line 1346
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1348
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1350
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1349
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1352
    [DIFFICULTY_NORMAL][TRAINER_SHANNON] =
    {
#line 1353
        .trainerName = _("SHANNON"),
#line 1354
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1355
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1356
F_TRAINER_FEMALE | 
#line 1357
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1358
        .items = { ITEM_FULL_RESTORE },
#line 1359
        .doubleBattle = FALSE,
#line 1360
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1362
            .species = SPECIES_FERALIGATR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1364
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1363
            .lvl = 68,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1366
    [DIFFICULTY_NORMAL][TRAINER_MICHELLE] =
    {
#line 1367
        .trainerName = _("MICHELLE"),
#line 1368
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1369
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1370
F_TRAINER_FEMALE | 
#line 1371
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1372
        .items = { ITEM_FULL_RESTORE },
#line 1373
        .doubleBattle = FALSE,
#line 1374
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1376
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1378
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1377
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1380
            .species = SPECIES_MEDICHAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1382
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1381
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1384
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1386
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1385
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1388
    [DIFFICULTY_NORMAL][TRAINER_CAROLINE] =
    {
#line 1389
        .trainerName = _("CAROLINE"),
#line 1390
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1391
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1392
F_TRAINER_FEMALE | 
#line 1393
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1394
        .items = { ITEM_FULL_RESTORE },
#line 1395
        .doubleBattle = FALSE,
#line 1396
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1398
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1400
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1399
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1402
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1404
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1403
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1406
    [DIFFICULTY_NORMAL][TRAINER_JULIE] =
    {
#line 1407
        .trainerName = _("JULIE"),
#line 1408
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 1409
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 1410
F_TRAINER_FEMALE | 
#line 1411
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 1412
        .items = { ITEM_FULL_RESTORE },
#line 1413
        .doubleBattle = FALSE,
#line 1414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1416
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1418
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1417
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1420
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1422
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1421
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1424
            .species = SPECIES_VICTREEBEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1426
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1425
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1428
    [DIFFICULTY_NORMAL][TRAINER_PATRICIA] =
    {
#line 1429
        .trainerName = _("PATRICIA"),
#line 1430
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1431
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1432
F_TRAINER_FEMALE | 
#line 1433
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1434
        .doubleBattle = FALSE,
#line 1435
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1437
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1439
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1438
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1441
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1443
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1442
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1445
    [DIFFICULTY_NORMAL][TRAINER_KINDRA] =
    {
#line 1446
        .trainerName = _("KINDRA"),
#line 1447
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1448
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1449
F_TRAINER_FEMALE | 
#line 1450
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1451
        .doubleBattle = FALSE,
#line 1452
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1454
            .species = SPECIES_LOPUNNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1456
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1455
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1458
            .species = SPECIES_SKUNTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1460
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1459
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1462
    [DIFFICULTY_NORMAL][TRAINER_TAMMY] =
    {
#line 1463
        .trainerName = _("TAMMY"),
#line 1464
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1465
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1466
F_TRAINER_FEMALE | 
#line 1467
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1468
        .doubleBattle = FALSE,
#line 1469
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1471
            .species = SPECIES_MAROWAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1473
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1472
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1475
            .species = SPECIES_LILLIGANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1477
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1476
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1479
    [DIFFICULTY_NORMAL][TRAINER_VALERIE_1] =
    {
#line 1480
        .trainerName = _("VALERIE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1488
            .species = SPECIES_PILOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1489
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1492
    [DIFFICULTY_NORMAL][TRAINER_TASHA] =
    {
#line 1493
        .trainerName = _("TASHA"),
#line 1494
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 1495
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 1496
F_TRAINER_FEMALE | 
#line 1497
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1498
        .doubleBattle = FALSE,
#line 1499
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1501
            .species = SPECIES_CHARMELEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1503
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 1502
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1505
    [DIFFICULTY_NORMAL][TRAINER_CINDY_1] =
    {
#line 1506
        .trainerName = _("CINDY"),
#line 1507
        .trainerClass = TRAINER_CLASS_LADY,
#line 1508
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1509
F_TRAINER_FEMALE | 
#line 1510
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1511
        .items = { ITEM_FULL_RESTORE },
#line 1512
        .doubleBattle = FALSE,
#line 1513
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1515
            .species = SPECIES_NIDORAN_M,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1515
            .heldItem = ITEM_NUGGET,
#line 1517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1516
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1519
    [DIFFICULTY_NORMAL][TRAINER_DAPHNE] =
    {
#line 1520
        .trainerName = _("DAPHNE"),
#line 1521
        .trainerClass = TRAINER_CLASS_LADY,
#line 1522
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 1523
F_TRAINER_FEMALE | 
#line 1524
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1525
        .items = { ITEM_FULL_RESTORE },
#line 1526
        .doubleBattle = FALSE,
#line 1527
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1529
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1529
            .heldItem = ITEM_FOCUS_SASH,
#line 1531
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1530
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1533
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1533
            .heldItem = ITEM_FOCUS_SASH,
#line 1535
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1534
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1537
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_2] =
    {
#line 1538
        .trainerName = _("GRUNT"),
#line 1539
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1540
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 1542
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1543
        .doubleBattle = FALSE,
#line 1544
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1546
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1547
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1550
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1551
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1554
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1555
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1558
    [DIFFICULTY_NORMAL][TRAINER_SHEILA] =
    {
#line 1559
        .trainerName = _("SHEILA"),
#line 1560
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1561
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1562
F_TRAINER_FEMALE | 
#line 1563
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1564
        .doubleBattle = FALSE,
#line 1565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1567
            .species = SPECIES_ZEBSTRIKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1568
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1571
    [DIFFICULTY_NORMAL][TRAINER_SHIRLEY] =
    {
#line 1572
        .trainerName = _("SHIRLEY"),
#line 1573
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1574
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1575
F_TRAINER_FEMALE | 
#line 1576
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1577
        .doubleBattle = FALSE,
#line 1578
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1580
            .species = SPECIES_GLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1581
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1584
    [DIFFICULTY_NORMAL][TRAINER_JESSICA_1] =
    {
#line 1585
        .trainerName = _("JESSICA"),
#line 1586
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1587
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1588
F_TRAINER_FEMALE | 
#line 1589
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1590
        .doubleBattle = FALSE,
#line 1591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1593
            .species = SPECIES_WHIRLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1594
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1597
            .species = SPECIES_STARAVIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1598
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1602
    [DIFFICULTY_NORMAL][TRAINER_CONNIE] =
    {
#line 1603
        .trainerName = _("CONNIE"),
#line 1604
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1605
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1606
F_TRAINER_FEMALE | 
#line 1607
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1608
        .doubleBattle = FALSE,
#line 1609
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1611
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1613
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1612
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1615
    [DIFFICULTY_NORMAL][TRAINER_BRIDGET] =
    {
#line 1616
        .trainerName = _("BRIDGET"),
#line 1617
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1618
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1619
F_TRAINER_FEMALE | 
#line 1620
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1621
        .doubleBattle = FALSE,
#line 1622
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1624
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1626
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 1625
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1628
    [DIFFICULTY_NORMAL][TRAINER_OLIVIA] =
    {
#line 1629
        .trainerName = _("OLIVIA"),
#line 1630
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1631
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1632
F_TRAINER_FEMALE | 
#line 1633
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1634
        .doubleBattle = FALSE,
#line 1635
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1637
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1639
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1638
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1641
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1643
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1642
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1645
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1647
            .iv = TRAINER_PARTY_IVS(12, 31, 12, 12, 12, 12),
#line 1646
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1649
    [DIFFICULTY_NORMAL][TRAINER_TIFFANY] =
    {
#line 1650
        .trainerName = _("TIFFANY"),
#line 1651
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1652
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1653
F_TRAINER_FEMALE | 
#line 1654
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1655
        .doubleBattle = FALSE,
#line 1656
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1658
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1660
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1659
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1662
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1664
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 1663
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1666
    [DIFFICULTY_NORMAL][TRAINER_WINSTON_1] =
    {
#line 1667
        .trainerName = _("WINSTON"),
#line 1668
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1669
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1671
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1672
        .items = { ITEM_FULL_RESTORE },
#line 1673
        .doubleBattle = FALSE,
#line 1674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1676
            .species = SPECIES_CUBONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1676
            .heldItem = ITEM_NUGGET,
#line 1678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1677
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1680
    [DIFFICULTY_NORMAL][TRAINER_MOLLIE] =
    {
#line 1681
        .trainerName = _("MOLLIE"),
#line 1682
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 1683
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 1684
F_TRAINER_FEMALE | 
#line 1685
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 1686
        .doubleBattle = FALSE,
#line 1687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1689
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1690
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1693
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1695
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 1694
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1697
    [DIFFICULTY_NORMAL][TRAINER_GARRET] =
    {
#line 1698
        .trainerName = _("GARRET"),
#line 1699
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 1700
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 1702
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 1703
        .items = { ITEM_FULL_RESTORE },
#line 1704
        .doubleBattle = FALSE,
#line 1705
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1707
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1707
            .heldItem = ITEM_NUGGET,
#line 1709
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1708
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1711
    [DIFFICULTY_NORMAL][TRAINER_STEVE_1] =
    {
#line 1712
        .trainerName = _("STEVE"),
#line 1713
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1714
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1716
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1717
        .doubleBattle = FALSE,
#line 1718
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1720
            .species = SPECIES_PANSAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1722
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1721
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1724
    [DIFFICULTY_NORMAL][TRAINER_THALIA_1] =
    {
#line 1725
        .trainerName = _("THALIA"),
#line 1726
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 1727
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 1728
F_TRAINER_FEMALE | 
#line 1729
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 1730
        .doubleBattle = FALSE,
#line 1731
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1733
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1734
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1737
            .species = SPECIES_SQUIRTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1739
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1738
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1741
    [DIFFICULTY_NORMAL][TRAINER_MARK] =
    {
#line 1742
        .trainerName = _("MARCUS"),
#line 1743
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 1744
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 1746
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 1747
        .doubleBattle = FALSE,
#line 1748
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1750
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1752
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1751
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1754
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_1] =
    {
#line 1755
        .trainerName = _("GRUNT"),
#line 1756
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 1757
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 1758
F_TRAINER_FEMALE | 
#line 1759
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 1760
        .doubleBattle = FALSE,
#line 1761
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1763
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1765
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1764
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1767
    [DIFFICULTY_NORMAL][TRAINER_LUIS] =
    {
#line 1768
        .trainerName = _("LUIS"),
#line 1769
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1770
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1772
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1773
        .doubleBattle = FALSE,
#line 1774
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1776
            .species = SPECIES_JYNX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1777
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1780
    [DIFFICULTY_NORMAL][TRAINER_DOMINIK] =
    {
#line 1781
        .trainerName = _("DOMINIK"),
#line 1782
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1783
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1785
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1786
        .doubleBattle = FALSE,
#line 1787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1789
            .species = SPECIES_MANDIBUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1790
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1793
    [DIFFICULTY_NORMAL][TRAINER_DOUGLAS] =
    {
#line 1794
        .trainerName = _("DOUGLAS"),
#line 1795
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1796
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1798
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1799
        .doubleBattle = FALSE,
#line 1800
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1802
            .species = SPECIES_METAPOD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1804
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1803
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1806
            .species = SPECIES_ELECTRODE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1808
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1807
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1810
    [DIFFICULTY_NORMAL][TRAINER_DARRIN] =
    {
#line 1811
        .trainerName = _("DARRIN"),
#line 1812
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1813
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1815
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1816
        .doubleBattle = FALSE,
#line 1817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1819
            .species = SPECIES_ZWEILOUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1821
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1820
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1823
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1825
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1824
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1827
            .species = SPECIES_TOXICROAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1829
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 1828
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1831
    [DIFFICULTY_NORMAL][TRAINER_TONY_1] =
    {
#line 1832
        .trainerName = _("TONY"),
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
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1842
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1841
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1844
    [DIFFICULTY_NORMAL][TRAINER_JEROME] =
    {
#line 1845
        .trainerName = _("JEROME"),
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
            .species = SPECIES_HERDIER,
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
    [DIFFICULTY_NORMAL][TRAINER_MATTHEW] =
    {
#line 1858
        .trainerName = _("MATTI"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1866
            .species = SPECIES_ARBOK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1867
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1870
    [DIFFICULTY_NORMAL][TRAINER_DAVID] =
    {
#line 1871
        .trainerName = _("DAVID"),
#line 1872
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1873
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1875
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1876
        .doubleBattle = FALSE,
#line 1877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1879
            .species = SPECIES_OMASTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1880
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1883
            .species = SPECIES_DEWGONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1884
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1887
    [DIFFICULTY_NORMAL][TRAINER_SPENCER] =
    {
#line 1888
        .trainerName = _("SPENCER"),
#line 1889
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1890
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1892
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1893
        .doubleBattle = FALSE,
#line 1894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 1896
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1897
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1900
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1902
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1901
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1904
    [DIFFICULTY_NORMAL][TRAINER_ROLAND] =
    {
#line 1905
        .trainerName = _("ROLAND"),
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
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1915
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1914
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1917
    [DIFFICULTY_NORMAL][TRAINER_NOLEN] =
    {
#line 1918
        .trainerName = _("NOLEN"),
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
            .species = SPECIES_URSARING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1928
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1927
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1930
    [DIFFICULTY_NORMAL][TRAINER_STAN] =
    {
#line 1931
        .trainerName = _("STAN"),
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
            .species = SPECIES_SUDOWOODO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1941
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1940
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1943
    [DIFFICULTY_NORMAL][TRAINER_BARRY] =
    {
#line 1944
        .trainerName = _("BARRY"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 1952
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1953
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1956
    [DIFFICULTY_NORMAL][TRAINER_DEAN] =
    {
#line 1957
        .trainerName = _("DEAN"),
#line 1958
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 1959
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 1961
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 1962
        .doubleBattle = FALSE,
#line 1963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 1965
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1966
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1969
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1970
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 1973
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 1975
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 1974
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 1977
    [DIFFICULTY_NORMAL][TRAINER_RODNEY] =
    {
#line 1978
        .trainerName = _("RODNEY"),
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
            .species = SPECIES_HYDREIGON,
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
    [DIFFICULTY_NORMAL][TRAINER_RICHARD] =
    {
#line 1991
        .trainerName = _("RICHARD"),
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
            .species = SPECIES_VANILLUXE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2000
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2003
    [DIFFICULTY_NORMAL][TRAINER_HERMAN] =
    {
#line 2004
        .trainerName = _("HERMAN"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2012
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2013
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2016
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2017
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2020
    [DIFFICULTY_NORMAL][TRAINER_SANTIAGO] =
    {
#line 2021
        .trainerName = _("SANTIAGO"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2029
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2030
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2033
            .species = SPECIES_DRAGONITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2035
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2034
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2037
    [DIFFICULTY_NORMAL][TRAINER_GILBERT] =
    {
#line 2038
        .trainerName = _("GILBERT"),
#line 2039
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2040
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2042
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2043
        .doubleBattle = FALSE,
#line 2044
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2046
            .species = SPECIES_BELLOSSOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2048
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2047
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2050
    [DIFFICULTY_NORMAL][TRAINER_FRANKLIN] =
    {
#line 2051
        .trainerName = _("FRANKLIN"),
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
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2061
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2060
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2063
    [DIFFICULTY_NORMAL][TRAINER_KEVIN] =
    {
#line 2064
        .trainerName = _("KEVIN"),
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
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2073
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2076
    [DIFFICULTY_NORMAL][TRAINER_JACK] =
    {
#line 2077
        .trainerName = _("JACK"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2085
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2086
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2089
    [DIFFICULTY_NORMAL][TRAINER_DUDLEY] =
    {
#line 2090
        .trainerName = _("DUDLEY"),
#line 2091
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 2092
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 2094
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 2095
        .doubleBattle = FALSE,
#line 2096
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2098
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2100
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2099
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2102
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2103
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2106
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2108
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2107
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2110
    [DIFFICULTY_NORMAL][TRAINER_CHAD] =
    {
#line 2111
        .trainerName = _("CHAD"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2119
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2121
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2120
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2123
            .species = SPECIES_SIMIPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2125
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2124
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2127
    [DIFFICULTY_NORMAL][TRAINER_TAKAO] =
    {
#line 2128
        .trainerName = _("TAKAO"),
#line 2129
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2130
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2132
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2133
        .doubleBattle = FALSE,
#line 2134
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2136
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2138
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 2137
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2140
    [DIFFICULTY_NORMAL][TRAINER_HITOSHI] =
    {
#line 2141
        .trainerName = _("HITOSHI"),
#line 2142
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2143
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2145
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2146
        .doubleBattle = FALSE,
#line 2147
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2149
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2151
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 2150
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2153
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2155
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 2154
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2157
    [DIFFICULTY_NORMAL][TRAINER_KIYO] =
    {
#line 2158
        .trainerName = _("KIYO"),
#line 2159
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2160
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2162
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2163
        .doubleBattle = FALSE,
#line 2164
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2166
            .species = SPECIES_HAXORUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2168
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2167
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2170
    [DIFFICULTY_NORMAL][TRAINER_KOICHI] =
    {
#line 2171
        .trainerName = _("KOICHI"),
#line 2172
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2173
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2175
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2176
        .doubleBattle = FALSE,
#line 2177
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2179
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2181
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2180
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2183
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2185
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2184
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2187
    [DIFFICULTY_NORMAL][TRAINER_NOB_1] =
    {
#line 2188
        .trainerName = _("NOB"),
#line 2189
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2190
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2192
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2193
        .doubleBattle = FALSE,
#line 2194
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2196
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2198
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2197
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2200
    [DIFFICULTY_NORMAL][TRAINER_YUJI] =
    {
#line 2201
        .trainerName = _("YUJI"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2209
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2211
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2210
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2213
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2215
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2214
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2217
    [DIFFICULTY_NORMAL][TRAINER_DAISUKE] =
    {
#line 2218
        .trainerName = _("DAISUKE"),
#line 2219
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 2220
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 2222
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2223
        .doubleBattle = FALSE,
#line 2224
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2226
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2228
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2227
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2230
    [DIFFICULTY_NORMAL][TRAINER_ATSUSHI] =
    {
#line 2231
        .trainerName = _("ATSUSHI"),
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
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2241
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2240
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2243
    [DIFFICULTY_NORMAL][TRAINER_KIRK] =
    {
#line 2244
        .trainerName = _("KIRK"),
#line 2245
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2246
        .trainerPic = TRAINER_PIC_GUITARIST,
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
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2254
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2253
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2256
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2258
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2257
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2260
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_7] =
    {
#line 2261
        .trainerName = _("GRUNT"),
#line 2262
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2263
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 2264
F_TRAINER_FEMALE | 
#line 2265
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2266
        .doubleBattle = FALSE,
#line 2267
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2269
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2271
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2270
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2273
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2275
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2274
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2277
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_AQUA_HIDEOUT_8] =
    {
#line 2278
        .trainerName = _("GRUNT"),
#line 2279
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 2280
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 2282
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 2283
        .doubleBattle = FALSE,
#line 2284
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2286
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2288
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2287
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2290
    [DIFFICULTY_NORMAL][TRAINER_SHAWN] =
    {
#line 2291
        .trainerName = _("SHAWN"),
#line 2292
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2293
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2295
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2296
        .doubleBattle = FALSE,
#line 2297
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2299
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2301
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2300
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2303
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2305
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2304
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2307
    [DIFFICULTY_NORMAL][TRAINER_FERNANDO_1] =
    {
#line 2308
        .trainerName = _("FERNANDO"),
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
            .species = SPECIES_DRIFBLIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2318
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2317
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2320
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2322
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2321
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2324
    [DIFFICULTY_NORMAL][TRAINER_DALTON_1] =
    {
#line 2325
        .trainerName = _("DALTON"),
#line 2326
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 2327
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 2329
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2330
        .doubleBattle = FALSE,
#line 2331
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2333
            .species = SPECIES_GLAMEOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2335
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2334
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2337
            .species = SPECIES_SMOOCHUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2339
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2338
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2341
    [DIFFICULTY_NORMAL][TRAINER_COLE] =
    {
#line 2342
        .trainerName = _("COLE"),
#line 2343
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2344
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2346
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2347
        .doubleBattle = FALSE,
#line 2348
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2350
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2352
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2351
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2354
    [DIFFICULTY_NORMAL][TRAINER_JEFF] =
    {
#line 2355
        .trainerName = _("JEFF"),
#line 2356
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2357
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2359
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2360
        .doubleBattle = FALSE,
#line 2361
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2363
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2365
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2364
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2367
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2369
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2368
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2371
    [DIFFICULTY_NORMAL][TRAINER_AXLE] =
    {
#line 2372
        .trainerName = _("AXLE"),
#line 2373
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2374
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2376
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2377
        .doubleBattle = FALSE,
#line 2378
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2380
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2382
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2381
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2383
                MOVE_DRAGON_PULSE,
                MOVE_THUNDER_SHOCK,
                MOVE_COTTON_SPORE,
            },
            },
        },
    },
#line 2387
    [DIFFICULTY_NORMAL][TRAINER_JACE] =
    {
#line 2388
        .trainerName = _("JACE"),
#line 2389
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2390
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2392
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2393
        .doubleBattle = FALSE,
#line 2394
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2396
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2398
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2397
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2400
    [DIFFICULTY_NORMAL][TRAINER_KEEGAN] =
    {
#line 2401
        .trainerName = _("KEEGAN"),
#line 2402
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2403
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2405
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2406
        .doubleBattle = FALSE,
#line 2407
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2409
            .species = SPECIES_SCEPTILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2411
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 2410
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2412
                MOVE_GIGA_DRAIN,
                MOVE_DRAGON_BREATH,
                MOVE_ASSURANCE,
            },
            },
        },
    },
#line 2416
    [DIFFICULTY_NORMAL][TRAINER_BERNIE_1] =
    {
#line 2417
        .trainerName = _("BERNIE"),
#line 2418
        .trainerClass = TRAINER_CLASS_HIKER,
#line 2419
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 2421
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 2422
        .doubleBattle = FALSE,
#line 2423
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2425
            .species = SPECIES_DRUDDIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2427
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2426
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2429
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2431
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2430
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2433
    [DIFFICULTY_NORMAL][TRAINER_DREW] =
    {
#line 2434
        .trainerName = _("DREW"),
#line 2435
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2436
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2438
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2439
        .doubleBattle = FALSE,
#line 2440
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2442
            .species = SPECIES_SNOVER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2444
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2443
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2446
    [DIFFICULTY_NORMAL][TRAINER_BEAU] =
    {
#line 2447
        .trainerName = _("BEAU"),
#line 2448
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2449
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2451
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2452
        .doubleBattle = FALSE,
#line 2453
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2455
            .species = SPECIES_VULPIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2457
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2456
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2459
            .species = SPECIES_STARLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2460
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2463
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2465
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2464
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2468
    [DIFFICULTY_NORMAL][TRAINER_LARRY] =
    {
#line 2469
        .trainerName = _("LARRY"),
#line 2470
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2471
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2473
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2474
        .doubleBattle = FALSE,
#line 2475
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2477
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2478
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2481
    [DIFFICULTY_NORMAL][TRAINER_SHANE] =
    {
#line 2482
        .trainerName = _("SHANE"),
#line 2483
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2484
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2486
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2487
        .doubleBattle = FALSE,
#line 2488
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2490
            .species = SPECIES_CUBCHOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2491
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2494
            .species = SPECIES_SPINDA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2495
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2498
    [DIFFICULTY_NORMAL][TRAINER_JUSTIN] =
    {
#line 2499
        .trainerName = _("JUSTIN"),
#line 2500
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2501
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2503
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2504
        .doubleBattle = FALSE,
#line 2505
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2507
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2508
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2511
    [DIFFICULTY_NORMAL][TRAINER_ETHAN_1] =
    {
#line 2512
        .trainerName = _("ETHAN"),
#line 2513
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 2514
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 2516
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 2517
        .doubleBattle = FALSE,
#line 2518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2520
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2521
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2524
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2526
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2525
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2528
    [DIFFICULTY_NORMAL][TRAINER_AUTUMN] =
    {
#line 2529
        .trainerName = _("AUTUMN"),
#line 2530
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 2531
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 2532
F_TRAINER_FEMALE | 
#line 2533
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 2534
        .doubleBattle = FALSE,
#line 2535
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2537
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2539
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2538
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2541
    [DIFFICULTY_NORMAL][TRAINER_TRAVIS] =
    {
#line 2542
        .trainerName = _("TRAVIS"),
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
            .species = SPECIES_SHUCKLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2552
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2551
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2554
    [DIFFICULTY_NORMAL][TRAINER_BRENT] =
    {
#line 2555
        .trainerName = _("BRENT"),
#line 2556
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2557
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2559
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2560
        .doubleBattle = FALSE,
#line 2561
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2563
            .species = SPECIES_LICKILICKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2565
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2564
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2567
    [DIFFICULTY_NORMAL][TRAINER_DONALD] =
    {
#line 2568
        .trainerName = _("DONALD"),
#line 2569
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2570
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2572
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2573
        .doubleBattle = FALSE,
#line 2574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2576
            .species = SPECIES_WATCHOG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2578
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2577
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2580
            .species = SPECIES_SCRAFTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2582
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2581
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2584
            .species = SPECIES_NIDORINA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2586
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2585
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2588
    [DIFFICULTY_NORMAL][TRAINER_TAYLOR] =
    {
#line 2589
        .trainerName = _("TAYLOR"),
#line 2590
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2591
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2593
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2594
        .doubleBattle = FALSE,
#line 2595
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2597
            .species = SPECIES_CRUSTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2599
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2598
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2601
            .species = SPECIES_RATICATE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2602
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2605
            .species = SPECIES_SEALEO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2607
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2606
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2609
    [DIFFICULTY_NORMAL][TRAINER_JEFFREY_1] =
    {
#line 2610
        .trainerName = _("JEFFREY"),
#line 2611
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2612
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2614
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2615
        .doubleBattle = FALSE,
#line 2616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2618
            .species = SPECIES_BEHEEYEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2619
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2622
            .species = SPECIES_VESPIQUEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2623
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2626
            .species = SPECIES_JELLICENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2628
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2627
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2630
    [DIFFICULTY_NORMAL][TRAINER_DEREK] =
    {
#line 2631
        .trainerName = _("DEREK"),
#line 2632
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 2633
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 2635
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 2636
        .doubleBattle = FALSE,
#line 2637
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2639
            .species = SPECIES_HEATMOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2641
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2640
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2643
            .species = SPECIES_STANTLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2645
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 2644
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2647
    [DIFFICULTY_NORMAL][TRAINER_EDWARD] =
    {
#line 2648
        .trainerName = _("EDWARD"),
#line 2649
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2650
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2652
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2653
        .doubleBattle = FALSE,
#line 2654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2656
            .species = SPECIES_CLEFFA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2657
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2660
    [DIFFICULTY_NORMAL][TRAINER_PRESTON] =
    {
#line 2661
        .trainerName = _("PRESTON"),
#line 2662
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2663
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2665
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2666
        .doubleBattle = FALSE,
#line 2667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2669
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2671
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2670
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2673
    [DIFFICULTY_NORMAL][TRAINER_VIRGIL] =
    {
#line 2674
        .trainerName = _("VIRGIL"),
#line 2675
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2676
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2678
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2679
        .doubleBattle = FALSE,
#line 2680
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2682
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2684
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2683
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2686
    [DIFFICULTY_NORMAL][TRAINER_BLAKE] =
    {
#line 2687
        .trainerName = _("BLAKE"),
#line 2688
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2689
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2691
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2692
        .doubleBattle = FALSE,
#line 2693
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2695
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2697
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2696
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2699
    [DIFFICULTY_NORMAL][TRAINER_WILLIAM] =
    {
#line 2700
        .trainerName = _("WILLIAM"),
#line 2701
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2702
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 2704
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2705
        .doubleBattle = FALSE,
#line 2706
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2708
            .species = SPECIES_CHERRIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2709
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2712
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2713
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2716
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2717
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2720
    [DIFFICULTY_NORMAL][TRAINER_JOSHUA] =
    {
#line 2721
        .trainerName = _("JOSHUA"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2729
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2730
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2733
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2735
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2734
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2737
    [DIFFICULTY_NORMAL][TRAINER_CAMERON_1] =
    {
#line 2738
        .trainerName = _("CAMERON"),
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
            .species = SPECIES_SWOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2748
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2747
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2750
    [DIFFICULTY_NORMAL][TRAINER_JACLYN] =
    {
#line 2751
        .trainerName = _("JACLYN"),
#line 2752
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2753
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2754
F_TRAINER_FEMALE | 
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
            .species = SPECIES_KECLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2760
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2763
    [DIFFICULTY_NORMAL][TRAINER_HANNAH] =
    {
#line 2764
        .trainerName = _("HANNAH"),
#line 2765
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2766
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2767
F_TRAINER_FEMALE | 
#line 2768
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2769
        .doubleBattle = FALSE,
#line 2770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2772
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2774
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2773
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2776
    [DIFFICULTY_NORMAL][TRAINER_SAMANTHA] =
    {
#line 2777
        .trainerName = _("SAMANTHA"),
#line 2778
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2779
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2780
F_TRAINER_FEMALE | 
#line 2781
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2782
        .doubleBattle = FALSE,
#line 2783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2785
            .species = SPECIES_MARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2787
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2786
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2789
    [DIFFICULTY_NORMAL][TRAINER_MAURA] =
    {
#line 2790
        .trainerName = _("MAURA"),
#line 2791
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2792
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2793
F_TRAINER_FEMALE | 
#line 2794
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2795
        .doubleBattle = FALSE,
#line 2796
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2798
            .species = SPECIES_MIME_JR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2800
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 2799
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2802
    [DIFFICULTY_NORMAL][TRAINER_KAYLA] =
    {
#line 2803
        .trainerName = _("KAYLA"),
#line 2804
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 2805
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 2806
F_TRAINER_FEMALE | 
#line 2807
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 2808
        .doubleBattle = FALSE,
#line 2809
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 2811
            .species = SPECIES_CARRACOSTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2813
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2812
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2815
            .species = SPECIES_DODRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2817
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2816
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2819
            .species = SPECIES_MIENSHAO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2821
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2820
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2823
    [DIFFICULTY_NORMAL][TRAINER_ALEXIS] =
    {
#line 2824
        .trainerName = _("ALEXIS"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2832
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2834
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2833
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2836
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2838
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2837
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2840
    [DIFFICULTY_NORMAL][TRAINER_JACKI_1] =
    {
#line 2841
        .trainerName = _("JACKI"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2849
            .species = SPECIES_LINOONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2851
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2850
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2853
            .species = SPECIES_PIDGEOTTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2855
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2854
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2857
    [DIFFICULTY_NORMAL][TRAINER_WALTER_1] =
    {
#line 2858
        .trainerName = _("WALTER"),
#line 2859
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2860
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2862
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2863
        .doubleBattle = FALSE,
#line 2864
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2866
            .species = SPECIES_LAMPENT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2868
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2867
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2870
    [DIFFICULTY_NORMAL][TRAINER_MICAH] =
    {
#line 2871
        .trainerName = _("MICAH"),
#line 2872
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2873
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2875
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2876
        .doubleBattle = FALSE,
#line 2877
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 2879
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2881
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2880
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 2883
            .species = SPECIES_MANECTRIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2885
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2884
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2887
    [DIFFICULTY_NORMAL][TRAINER_THOMAS] =
    {
#line 2888
        .trainerName = _("THOMAS"),
#line 2889
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 2890
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 2892
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 2893
        .doubleBattle = FALSE,
#line 2894
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 2896
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2898
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 2897
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 2900
    [DIFFICULTY_NORMAL][TRAINER_MATT] =
    {
#line 2901
        .trainerName = _("MATT"),
#line 2902
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2903
        .trainerPic = TRAINER_PIC_ELITE_FOUR_SIDNEY,
        .encounterMusic_gender =
#line 2905
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2906
        .doubleBattle = FALSE,
#line 2907
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2908
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2910
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2910
            .heldItem = ITEM_CHOICE_SPECS,
#line 2914
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2911
            .ability = ABILITY_SCRAPPY,
#line 2912
            .lvl = 69,
#line 2913
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2914
                MOVE_BOOMBURST,
                MOVE_ICE_BEAM,
                MOVE_FLAMETHROWER,
                MOVE_EXTRASENSORY,
            },
            },
            {
#line 2919
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2919
            .heldItem = ITEM_CHOICE_BAND,
#line 2923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2920
            .ability = ABILITY_KEEN_EYE,
#line 2921
            .lvl = 69,
#line 2922
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2923
                MOVE_BRICK_BREAK,
                MOVE_DOUBLE_EDGE,
                MOVE_ZEN_HEADBUTT,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 2928
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2928
            .heldItem = ITEM_THROAT_SPRAY,
#line 2932
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2929
            .ability = ABILITY_BIG_PECKS,
#line 2930
            .lvl = 69,
#line 2931
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2932
                MOVE_SING,
                MOVE_PARTING_SHOT,
                MOVE_BOOMBURST,
                MOVE_ROOST,
            },
            },
            {
#line 2937
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2937
            .heldItem = ITEM_BRIGHT_POWDER,
#line 2941
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2938
            .ability = ABILITY_REGENERATOR,
#line 2939
            .lvl = 69,
#line 2940
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2941
                MOVE_WISH,
                MOVE_PROTECT,
                MOVE_TOXIC,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 2946
            .species = SPECIES_MELOETTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2946
            .heldItem = ITEM_LEFTOVERS,
#line 2950
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2947
            .ability = ABILITY_SERENE_GRACE,
#line 2948
            .lvl = 69,
#line 2949
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2950
                MOVE_SUBSTITUTE,
                MOVE_CALM_MIND,
                MOVE_PSYSHOCK,
                MOVE_HYPER_VOICE,
            },
            },
            {
#line 2955
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2955
            .heldItem = ITEM_ROCKY_HELMET,
#line 2959
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2956
            .ability = ABILITY_CUTE_CHARM,
#line 2957
            .lvl = 69,
#line 2958
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2959
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_WAVE,
                MOVE_FLAMETHROWER,
                MOVE_ALLURING_VOICE,
            },
            },
        },
    },
#line 2965
    [DIFFICULTY_NORMAL][TRAINER_OZ] =
    {
#line 2966
        .trainerName = _("OZ"),
#line 2967
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 2968
        .trainerPic = TRAINER_PIC_POKEFAN_M,
        .encounterMusic_gender =
#line 2970
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 2971
        .doubleBattle = FALSE,
#line 2972
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 2973
        .mugshotColor = MUGSHOT_COLOR_GREEN,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 2975
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2975
            .heldItem = ITEM_SCOPE_LENS,
#line 2980
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2976
            .ability = ABILITY_SNIPER,
#line 2977
            .lvl = 70,
#line 2979
            .nature = NATURE_JOLLY,
#line 2978
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2980
                MOVE_U_TURN,
                MOVE_POISON_JAB,
                MOVE_KNOCK_OFF,
                MOVE_TOXIC_SPIKES,
            },
            },
            {
#line 2985
            .species = SPECIES_VOLCARONA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2985
            .heldItem = ITEM_CHARTI_BERRY,
#line 2990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2986
            .ability = ABILITY_FLAME_BODY,
#line 2987
            .lvl = 70,
#line 2989
            .nature = NATURE_TIMID,
#line 2988
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 2990
                MOVE_QUIVER_DANCE,
                MOVE_FLAMETHROWER,
                MOVE_MORNING_SUN,
                MOVE_BUG_BUZZ,
            },
            },
            {
#line 2995
            .species = SPECIES_YANMEGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 2995
            .heldItem = ITEM_CHOICE_SPECS,
#line 3000
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 2996
            .ability = ABILITY_TINTED_LENS,
#line 2997
            .lvl = 70,
#line 2999
            .nature = NATURE_MODEST,
#line 2998
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3000
                MOVE_BUG_BUZZ,
                MOVE_AIR_SLASH,
                MOVE_HIDDEN_POWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3005
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3005
            .heldItem = ITEM_CHOICE_BAND,
#line 3010
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3006
            .ability = ABILITY_TECHNICIAN,
#line 3007
            .lvl = 70,
#line 3009
            .nature = NATURE_ADAMANT,
#line 3008
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3010
                MOVE_CLOSE_COMBAT,
                MOVE_BULLET_PUNCH,
                MOVE_U_TURN,
                MOVE_AERIAL_ACE,
            },
            },
            {
#line 3015
            .species = SPECIES_GENESECT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3015
            .heldItem = ITEM_DOUSE_DRIVE,
#line 3020
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3016
            .ability = ABILITY_DOWNLOAD,
#line 3017
            .lvl = 70,
#line 3019
            .nature = NATURE_HASTY,
#line 3018
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3020
                MOVE_U_TURN,
                MOVE_IRON_HEAD,
                MOVE_TECHNO_BLAST,
                MOVE_ICE_BEAM,
            },
            },
            {
#line 3025
            .species = SPECIES_LEAVANNY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3025
            .heldItem = ITEM_FOCUS_SASH,
#line 3030
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3026
            .ability = ABILITY_CHLOROPHYLL,
#line 3027
            .lvl = 70,
#line 3029
            .nature = NATURE_NAUGHTY,
#line 3028
            .isShiny = TRUE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3030
                MOVE_STRUGGLE_BUG,
                MOVE_LEAF_STORM,
                MOVE_ELECTROWEB,
                MOVE_SUNNY_DAY,
            },
            },
        },
    },
#line 3035
    [DIFFICULTY_NORMAL][TRAINER_DIEGO] =
    {
#line 3036
        .trainerName = _("DIEGO"),
#line 3037
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3038
        .trainerPic = TRAINER_PIC_LEADER_BRAWLY,
        .encounterMusic_gender =
#line 3040
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3041
        .doubleBattle = FALSE,
#line 3042
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3043
        .mugshotColor = MUGSHOT_COLOR_PINK,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3045
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3045
            .heldItem = ITEM_LEFTOVERS,
#line 3049
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3046
            .ability = ABILITY_DROUGHT,
#line 3047
            .lvl = 71,
#line 3048
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3049
                MOVE_SPIKES,
                MOVE_EARTHQUAKE,
                MOVE_STEALTH_ROCK,
                MOVE_SOLAR_BEAM,
            },
            },
            {
#line 3054
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3054
            .heldItem = ITEM_MUSCLE_BAND,
#line 3058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3055
            .ability = ABILITY_FLAME_BODY,
#line 3056
            .lvl = 71,
#line 3057
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3058
                MOVE_PLAY_ROUGH,
                MOVE_MEGAHORN,
                MOVE_WILD_CHARGE,
                MOVE_FLARE_BLITZ,
            },
            },
            {
#line 3063
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3063
            .heldItem = ITEM_LIFE_ORB,
#line 3067
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3064
            .ability = ABILITY_SPEED_BOOST,
#line 3065
            .lvl = 71,
#line 3066
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3067
                MOVE_SWORDS_DANCE,
                MOVE_CLOSE_COMBAT,
                MOVE_FLARE_BLITZ,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3073
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3073
            .heldItem = ITEM_ASSAULT_VEST,
#line 3077
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3074
            .ability = ABILITY_BLAZE,
#line 3075
            .lvl = 71,
#line 3076
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3077
                MOVE_SCORCHING_SANDS,
                MOVE_FLAMETHROWER,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_PULSE,
            },
            },
            {
#line 3083
            .species = SPECIES_ROTOM_HEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3083
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3087
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3084
            .ability = ABILITY_LEVITATE,
#line 3085
            .lvl = 71,
#line 3086
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3087
                MOVE_OVERHEAT,
                MOVE_VOLT_SWITCH,
                MOVE_TOXIC,
                MOVE_PAIN_SPLIT,
            },
            },
            {
#line 3093
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3093
            .heldItem = ITEM_CHOICE_SPECS,
#line 3097
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3094
            .ability = ABILITY_INFILTRATOR,
#line 3095
            .lvl = 71,
#line 3096
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3097
                MOVE_FIRE_BLAST,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_TRICK,
            },
            },
        },
    },
#line 3103
    [DIFFICULTY_NORMAL][TRAINER_DRAKE] =
    {
#line 3104
        .trainerName = _("DRAKE"),
#line 3105
        .trainerClass = TRAINER_CLASS_ELITE_FOUR,
#line 3106
        .trainerPic = TRAINER_PIC_ELITE_FOUR_DRAKE,
        .encounterMusic_gender =
#line 3108
            TRAINER_ENCOUNTER_MUSIC_ELITE_FOUR,
#line 3109
        .doubleBattle = FALSE,
#line 3110
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 3111
        .mugshotColor = MUGSHOT_COLOR_BLUE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3113
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3113
            .heldItem = ITEM_ASSAULT_VEST,
#line 3117
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3114
            .ability = ABILITY_SAND_STREAM,
#line 3115
            .lvl = 72,
#line 3116
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3117
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
                MOVE_STEALTH_ROCK,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 3122
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3122
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 3126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3123
            .ability = ABILITY_PRANKSTER,
#line 3124
            .lvl = 72,
#line 3125
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3126
                MOVE_ENCORE,
                MOVE_FOUL_PLAY,
                MOVE_WILL_O_WISP,
                MOVE_TAUNT,
            },
            },
            {
#line 3131
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3131
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 3135
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3132
            .ability = ABILITY_PICKPOCKET,
#line 3133
            .lvl = 72,
#line 3134
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3135
                MOVE_AERIAL_ACE,
                MOVE_ICE_SHARD,
                MOVE_TRIPLE_AXEL,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3140
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3140
            .heldItem = ITEM_CHOICE_SPECS,
#line 3144
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3141
            .ability = ABILITY_LEVITATE,
#line 3142
            .lvl = 72,
#line 3143
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3144
                MOVE_DRACO_METEOR,
                MOVE_DARK_PULSE,
                MOVE_FLAMETHROWER,
                MOVE_U_TURN,
            },
            },
            {
#line 3149
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3149
            .heldItem = ITEM_ROCKY_HELMET,
#line 3153
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3150
            .ability = ABILITY_INTIMIDATE,
#line 3151
            .lvl = 72,
#line 3152
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3153
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_THUNDER_FANG,
                MOVE_FIRE_FANG,
            },
            },
            {
#line 3158
            .species = SPECIES_JIRACHI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3158
            .heldItem = ITEM_LEFTOVERS,
#line 3162
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3159
            .ability = ABILITY_SERENE_GRACE,
#line 3160
            .lvl = 73,
#line 3161
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3162
                MOVE_PSYCHIC,
                MOVE_IRON_HEAD,
                MOVE_WISH,
                MOVE_BODY_SLAM,
            },
            },
        },
    },
#line 3167
    [DIFFICULTY_NORMAL][TRAINER_ROXANNE_1] =
    {
#line 3168
        .trainerName = _("ALEC"),
#line 3169
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3170
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 3172
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3173
        .doubleBattle = FALSE,
#line 3174
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3176
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3180
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3177
            .ability = ABILITY_STURDY,
#line 3178
            .lvl = 15,
#line 3179
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3181
                MOVE_STEALTH_ROCK,
                MOVE_COPYCAT,
                MOVE_FLAIL,
                MOVE_ROCK_THROW,
            },
            },
            {
#line 3186
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3190
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3187
            .ability = ABILITY_LEVITATE,
#line 3188
            .lvl = 15,
#line 3189
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3191
                MOVE_ROCK_TOMB,
                MOVE_HARDEN,
                MOVE_HYPNOSIS,
                MOVE_CONFUSION,
            },
            },
            {
#line 3196
            .species = SPECIES_AERODACTYL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3196
            .heldItem = ITEM_IRON_BALL,
#line 3200
            .iv = TRAINER_PARTY_IVS(0, 1, 2, 0, 3, 0),
#line 3197
            .ability = ABILITY_UNNERVE,
#line 3198
            .lvl = 15,
#line 3199
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3201
                MOVE_ROCK_SLIDE,
                MOVE_WING_ATTACK,
                MOVE_SUPERSONIC,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 3206
    [DIFFICULTY_NORMAL][TRAINER_BRAWLY_1] =
    {
#line 3207
        .trainerName = _("GARRETT"),
#line 3208
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3209
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 3211
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3212
        .doubleBattle = FALSE,
#line 3213
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3215
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3219
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3216
            .ability = ABILITY_MARVEL_SCALE,
#line 3217
            .lvl = 21,
#line 3218
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3220
                MOVE_DISARMING_VOICE,
                MOVE_WATER_PULSE,
                MOVE_TWISTER,
                MOVE_RAIN_DANCE,
            },
            },
            {
#line 3225
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3229
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3226
            .ability = ABILITY_TORRENT,
#line 3227
            .lvl = 22,
#line 3228
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3230
                MOVE_BUBBLEBEAM,
                MOVE_METAL_CLAW,
                MOVE_PECK,
                MOVE_AQUA_RING,
            },
            },
            {
#line 3235
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3239
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3236
            .ability = ABILITY_SKILL_LINK,
#line 3237
            .lvl = 22,
#line 3238
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3240
                MOVE_TOXIC_SPIKES,
                MOVE_ICICLE_SPEAR,
                MOVE_SPIKE_CANNON,
                MOVE_WATER_PULSE,
            },
            },
            {
#line 3245
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3245
            .heldItem = ITEM_WIDE_LENS,
#line 3249
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3246
            .ability = ABILITY_TORRENT,
#line 3247
            .lvl = 22,
#line 3248
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3250
                MOVE_SAND_TOMB,
                MOVE_ROCK_THROW,
                MOVE_WATER_PULSE,
                MOVE_SUPERSONIC,
            },
            },
        },
    },
#line 3255
    [DIFFICULTY_NORMAL][TRAINER_SAM_1] =
    {
#line 3256
        .trainerName = _("SAM"),
#line 3257
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3258
        .trainerPic = TRAINER_PIC_LEADER_WATTSON,
        .encounterMusic_gender =
#line 3260
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3261
        .doubleBattle = FALSE,
#line 3262
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 3264
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3268
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3265
            .ability = ABILITY_MAGNET_PULL,
#line 3266
            .lvl = 31,
#line 3267
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3269
                MOVE_MAGNET_RISE,
                MOVE_THUNDER_SHOCK,
                MOVE_FLASH_CANNON,
                MOVE_THUNDER_WAVE,
            },
            },
            {
#line 3274
            .species = SPECIES_PORYGON2,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3278
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3275
            .ability = ABILITY_DOWNLOAD,
#line 3276
            .lvl = 31,
#line 3277
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3279
                MOVE_CONVERSION_2,
                MOVE_PSYBEAM,
                MOVE_SWIFT,
                MOVE_THUNDER_SHOCK,
            },
            },
            {
#line 3284
            .species = SPECIES_ELECTABUZZ,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3288
            .iv = TRAINER_PARTY_IVS(26, 26, 26, 26, 26, 26),
#line 3285
            .ability = ABILITY_VITAL_SPIRIT,
#line 3287
            .lvl = 31,
#line 3286
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3289
                MOVE_THUNDER_PUNCH,
                MOVE_LOW_SWEEP,
                MOVE_SCREECH,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 3294
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3294
            .heldItem = ITEM_MAGNET,
#line 3298
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3295
            .ability = ABILITY_STATIC,
#line 3296
            .lvl = 32,
#line 3297
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3299
                MOVE_ELECTRIC_TERRAIN,
                MOVE_SUCKER_PUNCH,
                MOVE_MUD_SHOT,
                MOVE_SPARK,
            },
            },
        },
    },
#line 3304
    [DIFFICULTY_NORMAL][TRAINER_FLANNERY_1] =
    {
#line 3305
        .trainerName = _("JOSE"),
#line 3306
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3307
        .trainerPic = TRAINER_PIC_LEADER_FLANNERY,
        .encounterMusic_gender =
#line 3309
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3310
        .doubleBattle = FALSE,
#line 3311
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3313
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3317
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3314
            .ability = ABILITY_NATURAL_CURE,
#line 3315
            .lvl = 36,
#line 3316
            .nature = NATURE_NAIVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3318
                MOVE_PLUCK,
                MOVE_SING,
                MOVE_DRAGON_PULSE,
                MOVE_FAIRY_WIND,
            },
            },
            {
#line 3323
            .species = SPECIES_CHARIZARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3327
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3324
            .ability = ABILITY_BLAZE,
#line 3325
            .lvl = 36,
#line 3326
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3328
                MOVE_DRAGON_BREATH,
                MOVE_FLAMETHROWER,
                MOVE_SMOKESCREEN,
                MOVE_AIR_SLASH,
            },
            },
            {
#line 3333
            .species = SPECIES_VIBRAVA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3337
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3334
            .ability = ABILITY_LEVITATE,
#line 3335
            .lvl = 36,
#line 3336
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3338
                MOVE_U_TURN,
                MOVE_DRAGON_TAIL,
                MOVE_SAND_TOMB,
                MOVE_FIRST_IMPRESSION,
            },
            },
            {
#line 3343
            .species = SPECIES_DRAGONAIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3347
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3344
            .ability = ABILITY_MARVEL_SCALE,
#line 3345
            .lvl = 36,
#line 3346
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3348
                MOVE_DRAGON_TAIL,
                MOVE_THUNDER_WAVE,
                MOVE_WEATHER_BALL,
                MOVE_EXTREME_SPEED,
            },
            },
            {
#line 3353
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3353
            .heldItem = ITEM_DRAGON_FANG,
#line 3357
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 3354
            .ability = ABILITY_SNIPER,
#line 3355
            .lvl = 37,
#line 3356
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3358
                MOVE_DRAGON_BREATH,
                MOVE_BUBBLE_BEAM,
                MOVE_AGILITY,
                MOVE_YAWN,
            },
            },
        },
    },
#line 3363
    [DIFFICULTY_NORMAL][TRAINER_NORMAN_1] =
    {
#line 3364
        .trainerName = _("GRAYSON"),
#line 3365
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3366
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 3368
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3369
        .doubleBattle = FALSE,
#line 3370
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3372
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3372
            .heldItem = ITEM_MUSCLE_BAND,
#line 3376
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3373
            .ability = ABILITY_IRON_FIST,
#line 3374
            .lvl = 43,
#line 3375
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3376
                MOVE_BULK_UP,
                MOVE_ICE_PUNCH,
                MOVE_HAMMER_ARM,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3382
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3382
            .heldItem = ITEM_BLACK_BELT,
#line 3386
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3383
            .ability = ABILITY_GUTS,
#line 3384
            .lvl = 43,
#line 3385
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3386
                MOVE_DUAL_CHOP,
                MOVE_KNOCK_OFF,
                MOVE_REVENGE,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3391
            .species = SPECIES_LOPUNNY,
#line 3391
            .gender = TRAINER_MON_FEMALE,
#line 3391
            .heldItem = ITEM_ROCKY_HELMET,
#line 3395
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3392
            .ability = ABILITY_CUTE_CHARM,
#line 3393
            .lvl = 43,
#line 3394
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3395
                MOVE_HEADBUTT,
                MOVE_FAKE_OUT,
                MOVE_DRAIN_PUNCH,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 3400
            .species = SPECIES_HERACROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3400
            .heldItem = ITEM_FOCUS_BAND,
#line 3404
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3401
            .ability = ABILITY_STURDY,
#line 3402
            .lvl = 43,
#line 3403
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3404
                MOVE_BRICK_BREAK,
                MOVE_LUNGE,
                MOVE_THROAT_CHOP,
                MOVE_REVERSAL,
            },
            },
            {
#line 3410
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3410
            .heldItem = ITEM_EXPERT_BELT,
#line 3414
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3411
            .ability = ABILITY_STURDY,
#line 3412
            .lvl = 43,
#line 3413
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3414
                MOVE_AURA_SPHERE,
                MOVE_FLASH_CANNON,
                MOVE_SHADOW_BALL,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 3420
    [DIFFICULTY_NORMAL][TRAINER_WINONA_1] =
    {
#line 3421
        .trainerName = _("MATTHEW"),
#line 3422
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3423
        .trainerPic = TRAINER_PIC_LEADER_WINONA,
        .encounterMusic_gender =
#line 3425
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3426
        .doubleBattle = FALSE,
#line 3427
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 3429
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3429
            .heldItem = ITEM_AIR_BALLOON,
#line 3433
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3430
            .ability = ABILITY_STURDY,
#line 3431
            .lvl = 51,
#line 3432
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3433
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_STEALTH_ROCK,
                MOVE_BODY_PRESS,
            },
            },
            {
#line 3438
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3438
            .heldItem = ITEM_BRIGHT_POWDER,
#line 3442
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3439
            .ability = ABILITY_WEAK_ARMOR,
#line 3440
            .lvl = 51,
#line 3441
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3442
                MOVE_SPIKES,
                MOVE_BRAVE_BIRD,
                MOVE_STEEL_WING,
                MOVE_ROCK_SLIDE,
            },
            },
            {
#line 3447
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3447
            .heldItem = ITEM_ASSAULT_VEST,
#line 3451
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3448
            .ability = ABILITY_CLEAR_BODY,
#line 3449
            .lvl = 51,
#line 3450
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3451
                MOVE_METEOR_MASH,
                MOVE_ZEN_HEADBUTT,
                MOVE_EARTHQUAKE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 3456
            .species = SPECIES_SCIZOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3456
            .heldItem = ITEM_CHOICE_BAND,
#line 3460
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3457
            .ability = ABILITY_TECHNICIAN,
#line 3458
            .lvl = 51,
#line 3459
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3460
                MOVE_BULLET_PUNCH,
                MOVE_X_SCISSOR,
                MOVE_U_TURN,
                MOVE_METAL_CLAW,
            },
            },
            {
#line 3465
            .species = SPECIES_FERROTHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3465
            .heldItem = ITEM_ROCKY_HELMET,
#line 3469
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3466
            .ability = ABILITY_IRON_BARBS,
#line 3467
            .lvl = 51,
#line 3468
            .nature = NATURE_ADAMANT,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3469
                MOVE_GYRO_BALL,
                MOVE_POWER_WHIP,
                MOVE_BODY_PRESS,
                MOVE_IRON_DEFENSE,
            },
            },
        },
    },
#line 3474
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_1] =
    {
#line 3475
        .trainerName = _("MARK"),
#line 3476
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3477
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 3479
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 3480
        .doubleBattle = FALSE,
#line 3481
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3483
            .species = SPECIES_NINETALES,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3483
            .heldItem = ITEM_ROCKY_HELMET,
#line 3487
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3484
            .ability = ABILITY_FLASH_FIRE,
#line 3485
            .lvl = 55,
#line 3486
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3487
                MOVE_FIRE_BLAST,
                MOVE_WILL_O_WISP,
                MOVE_DAZZLING_GLEAM,
                MOVE_CALM_MIND,
            },
            },
            {
#line 3492
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3492
            .heldItem = ITEM_CHOICE_SPECS,
#line 3496
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3493
            .ability = ABILITY_PIXILATE,
#line 3494
            .lvl = 55,
#line 3495
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3496
                MOVE_HYPER_VOICE,
                MOVE_PSYSHOCK,
                MOVE_SHADOW_BALL,
                MOVE_DRAINING_KISS,
            },
            },
            {
#line 3501
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3501
            .heldItem = ITEM_CHOICE_BAND,
#line 3504
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3502
            .ability = ABILITY_HUGE_POWER,
#line 3503
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3504
                MOVE_LIQUIDATION,
                MOVE_PLAY_ROUGH,
                MOVE_AQUA_JET,
                MOVE_KNOCK_OFF,
            },
            },
            {
#line 3509
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3509
            .heldItem = ITEM_CHOICE_SCARF,
#line 3513
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3510
            .ability = ABILITY_SERENE_GRACE,
#line 3511
            .lvl = 55,
#line 3512
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3513
                MOVE_MOONBLAST,
                MOVE_PSYCHIC,
                MOVE_HEALING_WISH,
                MOVE_ENERGY_BALL,
            },
            },
            {
#line 3518
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3518
            .heldItem = ITEM_LEFTOVERS,
#line 3522
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3519
            .ability = ABILITY_MAGIC_GUARD,
#line 3520
            .lvl = 55,
#line 3521
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3522
                MOVE_DRAINING_KISS,
                MOVE_ANCIENT_POWER,
                MOVE_FLAMETHROWER,
                MOVE_WISH,
            },
            },
            {
#line 3528
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3528
            .heldItem = ITEM_OCCA_BERRY,
#line 3531
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3529
            .ability = ABILITY_INTIMIDATE,
#line 3530
            .lvl = 55,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3531
                MOVE_PLAY_ROUGH,
                MOVE_IRON_HEAD,
                MOVE_STONE_EDGE,
                MOVE_KNOCK_OFF,
            },
            },
        },
    },
#line 3537
    [DIFFICULTY_NORMAL][TRAINER_JUAN_1] =
    {
#line 3538
        .trainerName = _("XANDER"),
#line 3539
        .trainerClass = TRAINER_CLASS_LEADER,
#line 3540
        .trainerPic = TRAINER_PIC_KINDLER,
        .encounterMusic_gender =
#line 3542
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3543
        .doubleBattle = TRUE,
#line 3544
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3546
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3546
            .heldItem = ITEM_LEFTOVERS,
#line 3550
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3547
            .ability = ABILITY_SHADOW_TAG,
#line 3548
            .lvl = 61,
#line 3549
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3550
                MOVE_TRICK_ROOM,
                MOVE_PROTECT,
                MOVE_LIGHT_SCREEN,
                MOVE_PSYCHIC,
            },
            },
            {
#line 3555
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3555
            .heldItem = ITEM_BLACK_SLUDGE,
#line 3559
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3556
            .ability = ABILITY_CURSED_BODY,
#line 3557
            .lvl = 61,
#line 3558
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3559
                MOVE_SHADOW_BALL,
                MOVE_SLUDGE_WAVE,
                MOVE_PROTECT,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 3564
            .species = SPECIES_CHANDELURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3564
            .heldItem = ITEM_CHOICE_SPECS,
#line 3568
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3565
            .ability = ABILITY_FLASH_FIRE,
#line 3566
            .lvl = 61,
#line 3567
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3568
                MOVE_BURNING_JEALOUSY,
                MOVE_SHADOW_BALL,
                MOVE_ENERGY_BALL,
                MOVE_DARK_PULSE,
            },
            },
            {
#line 3573
            .species = SPECIES_ROTOM_WASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3573
            .heldItem = ITEM_SITRUS_BERRY,
#line 3577
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3574
            .ability = ABILITY_LEVITATE,
#line 3575
            .lvl = 61,
#line 3576
            .nature = NATURE_CALM,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3577
                MOVE_THUNDERBOLT,
                MOVE_HYDRO_PUMP,
                MOVE_WILL_O_WISP,
                MOVE_PROTECT,
            },
            },
            {
#line 3582
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3582
            .heldItem = ITEM_LEFTOVERS,
#line 3586
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3583
            .ability = ABILITY_NO_GUARD,
#line 3584
            .lvl = 61,
#line 3585
            .nature = NATURE_BRAVE,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3586
                MOVE_EARTHQUAKE,
                MOVE_POLTERGEIST,
                MOVE_DYNAMIC_PUNCH,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 3591
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3591
            .heldItem = ITEM_SITRUS_BERRY,
#line 3595
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 3592
            .ability = ABILITY_MUMMY,
#line 3593
            .lvl = 61,
#line 3594
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3595
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
                MOVE_NIGHT_SHADE,
                MOVE_PROTECT,
            },
            },
        },
    },
#line 3600
    [DIFFICULTY_NORMAL][TRAINER_JERRY_1] =
    {
#line 3601
        .trainerName = _("JERRY"),
#line 3602
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3603
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3605
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3606
        .doubleBattle = FALSE,
#line 3607
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3609
            .species = SPECIES_CASTFORM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3611
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3610
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3613
    [DIFFICULTY_NORMAL][TRAINER_TED] =
    {
#line 3614
        .trainerName = _("TED"),
#line 3615
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3616
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3618
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3619
        .doubleBattle = FALSE,
#line 3620
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3622
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3624
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3623
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3626
    [DIFFICULTY_NORMAL][TRAINER_PAUL] =
    {
#line 3627
        .trainerName = _("PAUL"),
#line 3628
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3629
        .trainerPic = TRAINER_PIC_SCHOOL_KID_M,
        .encounterMusic_gender =
#line 3631
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3632
        .doubleBattle = FALSE,
#line 3633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3635
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3637
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3636
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3639
            .species = SPECIES_ODDISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3641
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3640
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3643
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3645
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3644
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3647
    [DIFFICULTY_NORMAL][TRAINER_KAREN_1] =
    {
#line 3648
        .trainerName = _("KAREN"),
#line 3649
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3650
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3651
F_TRAINER_FEMALE | 
#line 3652
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3653
        .doubleBattle = FALSE,
#line 3654
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3656
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3658
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3657
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3660
    [DIFFICULTY_NORMAL][TRAINER_GEORGIA] =
    {
#line 3661
        .trainerName = _("GEORGIA"),
#line 3662
        .trainerClass = TRAINER_CLASS_SCHOOL_KID,
#line 3663
        .trainerPic = TRAINER_PIC_SCHOOL_KID_F,
        .encounterMusic_gender =
#line 3664
F_TRAINER_FEMALE | 
#line 3665
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 3666
        .doubleBattle = FALSE,
#line 3667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3669
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3671
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3670
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3673
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3675
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 3674
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3677
    [DIFFICULTY_NORMAL][TRAINER_KATE_AND_JOY] =
    {
#line 3678
        .trainerName = _("KATE & JOY"),
#line 3679
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3680
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3682
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3683
        .doubleBattle = TRUE,
#line 3684
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3686
            .species = SPECIES_WEAVILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3688
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3687
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3690
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3692
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3691
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3695
    [DIFFICULTY_NORMAL][TRAINER_ANNA_AND_MEG_1] =
    {
#line 3696
        .trainerName = _("ANNA & MEG"),
#line 3697
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 3698
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 3700
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3701
        .doubleBattle = TRUE,
#line 3702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3704
            .species = SPECIES_TEPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3705
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3708
            .species = SPECIES_OSHAWOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3710
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3709
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3712
    [DIFFICULTY_NORMAL][TRAINER_VICTOR] =
    {
#line 3713
        .trainerName = _("VICTOR"),
#line 3714
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3715
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3717
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3718
        .doubleBattle = FALSE,
#line 3719
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3721
            .species = SPECIES_PHANPY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3721
            .heldItem = ITEM_ORAN_BERRY,
#line 3723
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3722
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3725
            .species = SPECIES_SEWADDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3725
            .heldItem = ITEM_ORAN_BERRY,
#line 3727
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 3726
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3729
    [DIFFICULTY_NORMAL][TRAINER_MIGUEL_1] =
    {
#line 3730
        .trainerName = _("MIGUEL"),
#line 3731
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3732
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3734
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3735
        .doubleBattle = FALSE,
#line 3736
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3738
            .species = SPECIES_GOTHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3738
            .heldItem = ITEM_ORAN_BERRY,
#line 3740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3739
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3742
    [DIFFICULTY_NORMAL][TRAINER_COLTON] =
    {
#line 3743
        .trainerName = _("COLTON"),
#line 3744
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3745
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 3747
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3748
        .doubleBattle = FALSE,
#line 3749
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 3751
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3751
            .heldItem = ITEM_ORAN_BERRY,
#line 3753
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3752
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3754
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3759
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3759
            .heldItem = ITEM_ORAN_BERRY,
#line 3761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3760
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3762
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3767
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3767
            .heldItem = ITEM_ORAN_BERRY,
#line 3769
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3768
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3770
                MOVE_ASSIST,
                MOVE_CHARM,
                MOVE_FEINT_ATTACK,
                MOVE_HEAL_BELL,
            },
            },
            {
#line 3775
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3775
            .heldItem = ITEM_ORAN_BERRY,
#line 3777
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3776
            .lvl = 12,
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
            .lvl = 30,
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
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3791
            .heldItem = ITEM_ORAN_BERRY,
#line 3793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3792
            .lvl = 42,
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
        },
    },
#line 3799
    [DIFFICULTY_NORMAL][TRAINER_VICTORIA] =
    {
#line 3800
        .trainerName = _("VICTORIA"),
#line 3801
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3802
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3803
F_TRAINER_FEMALE | 
#line 3804
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3805
        .doubleBattle = FALSE,
#line 3806
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3808
            .species = SPECIES_WYNAUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3808
            .heldItem = ITEM_ORAN_BERRY,
#line 3810
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 3809
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3812
    [DIFFICULTY_NORMAL][TRAINER_VANESSA] =
    {
#line 3813
        .trainerName = _("VANESSA"),
#line 3814
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3815
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3816
F_TRAINER_FEMALE | 
#line 3817
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3818
        .doubleBattle = FALSE,
#line 3819
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3821
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3821
            .heldItem = ITEM_ORAN_BERRY,
#line 3823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3822
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3825
    [DIFFICULTY_NORMAL][TRAINER_BETHANY] =
    {
#line 3826
        .trainerName = _("BETHANY"),
#line 3827
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3828
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3829
F_TRAINER_FEMALE | 
#line 3830
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3831
        .doubleBattle = FALSE,
#line 3832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 3834
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3834
            .heldItem = ITEM_ORAN_BERRY,
#line 3836
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3835
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3838
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3838
            .heldItem = ITEM_ORAN_BERRY,
#line 3840
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3839
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3842
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3842
            .heldItem = ITEM_ORAN_BERRY,
#line 3844
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3843
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3846
    [DIFFICULTY_NORMAL][TRAINER_ISABEL_1] =
    {
#line 3847
        .trainerName = _("ISABEL"),
#line 3848
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 3849
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 3850
F_TRAINER_FEMALE | 
#line 3851
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 3852
        .doubleBattle = FALSE,
#line 3853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3855
            .species = SPECIES_VENIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3855
            .heldItem = ITEM_ORAN_BERRY,
#line 3857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3856
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3859
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3859
            .heldItem = ITEM_ORAN_BERRY,
#line 3861
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3860
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3863
    [DIFFICULTY_NORMAL][TRAINER_TIMOTHY_1] =
    {
#line 3864
        .trainerName = _("TIMOTHY"),
#line 3865
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3866
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 3868
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3869
        .doubleBattle = FALSE,
#line 3870
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3872
            .species = SPECIES_GYARADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3874
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3873
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3876
    [DIFFICULTY_NORMAL][TRAINER_VICKY] =
    {
#line 3877
        .trainerName = _("VICKY"),
#line 3878
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 3879
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3880
F_TRAINER_FEMALE | 
#line 3881
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3882
        .doubleBattle = FALSE,
#line 3883
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3885
            .species = SPECIES_MEOWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3887
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3886
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3889
    [DIFFICULTY_NORMAL][TRAINER_SHELBY_1] =
    {
#line 3890
        .trainerName = _("SHELBY"),
#line 3891
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 3892
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 3893
F_TRAINER_FEMALE | 
#line 3894
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 3895
        .doubleBattle = FALSE,
#line 3896
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3898
            .species = SPECIES_COFAGRIGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3900
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3899
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3902
            .species = SPECIES_NOCTOWL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3904
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 3903
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3906
    [DIFFICULTY_NORMAL][TRAINER_CALVIN_1] =
    {
#line 3907
        .trainerName = _("CALVIN"),
#line 3908
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3909
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3911
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3912
        .doubleBattle = FALSE,
#line 3913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3915
            .species = SPECIES_STUNKY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3916
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3919
    [DIFFICULTY_NORMAL][TRAINER_BILLY] =
    {
#line 3920
        .trainerName = _("BILLY"),
#line 3921
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3922
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3924
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3925
        .doubleBattle = FALSE,
#line 3926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3928
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3930
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3929
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3932
            .species = SPECIES_REMORAID,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3934
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3933
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3936
    [DIFFICULTY_NORMAL][TRAINER_JOSH] =
    {
#line 3937
        .trainerName = _("JOSH"),
#line 3938
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3939
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3941
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3942
        .doubleBattle = FALSE,
#line 3943
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 3945
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3947
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 3946
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 3948
                MOVE_TACKLE,
            },
            },
        },
    },
#line 3950
    [DIFFICULTY_NORMAL][TRAINER_TOMMY] =
    {
#line 3951
        .trainerName = _("TOMMY"),
#line 3952
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3953
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3955
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3956
        .doubleBattle = FALSE,
#line 3957
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3959
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3961
            .iv = TRAINER_PARTY_IVS(13, 13, 13, 13, 13, 13),
#line 3960
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3963
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3965
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 3964
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3967
    [DIFFICULTY_NORMAL][TRAINER_JOEY] =
    {
#line 3968
        .trainerName = _("JOEY"),
#line 3969
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 3970
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 3972
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 3973
        .doubleBattle = FALSE,
#line 3974
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3976
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3978
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3977
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3980
            .species = SPECIES_SEEDOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3982
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 3981
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 3984
    [DIFFICULTY_NORMAL][TRAINER_BEN] =
    {
#line 3985
        .trainerName = _("BEN"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 3993
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 3995
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3994
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 3998
            .species = SPECIES_VOLTORB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4000
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 3999
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4003
    [DIFFICULTY_NORMAL][TRAINER_QUINCY] =
    {
#line 4004
        .trainerName = _("QUINCY"),
#line 4005
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4006
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 4008
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4009
        .items = { ITEM_FULL_RESTORE },
#line 4010
        .doubleBattle = FALSE,
#line 4011
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4013
            .species = SPECIES_SEVIPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4015
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4014
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4017
            .species = SPECIES_TYRANITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4019
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4018
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4021
    [DIFFICULTY_NORMAL][TRAINER_KATELYNN] =
    {
#line 4022
        .trainerName = _("KATELYNN"),
#line 4023
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4024
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4025
F_TRAINER_FEMALE | 
#line 4026
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4027
        .items = { ITEM_FULL_RESTORE },
#line 4028
        .doubleBattle = FALSE,
#line 4029
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4031
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4033
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4032
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4034
                MOVE_SKILL_SWAP,
                MOVE_PSYCHIC,
                MOVE_THUNDERBOLT,
                MOVE_CALM_MIND,
            },
            },
            {
#line 4039
            .species = SPECIES_SLAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4041
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4040
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4042
                MOVE_EARTHQUAKE,
                MOVE_SHADOW_BALL,
                MOVE_AERIAL_ACE,
                MOVE_BRICK_BREAK,
            },
            },
        },
    },
#line 4047
    [DIFFICULTY_NORMAL][TRAINER_JAYLEN] =
    {
#line 4048
        .trainerName = _("JAYLEN"),
#line 4049
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4050
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4052
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4053
        .doubleBattle = FALSE,
#line 4054
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4056
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4058
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4057
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4060
    [DIFFICULTY_NORMAL][TRAINER_DILLON] =
    {
#line 4061
        .trainerName = _("DILLON"),
#line 4062
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4063
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4065
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4066
        .doubleBattle = FALSE,
#line 4067
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4069
            .species = SPECIES_SCYTHER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4071
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4070
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4073
    [DIFFICULTY_NORMAL][TRAINER_EDDIE] =
    {
#line 4074
        .trainerName = _("EDDIE"),
#line 4075
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4076
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4078
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4079
        .doubleBattle = FALSE,
#line 4080
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4082
            .species = SPECIES_PURRLOIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4084
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4083
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4086
            .species = SPECIES_TANGELA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4088
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4087
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4090
    [DIFFICULTY_NORMAL][TRAINER_ALLEN] =
    {
#line 4091
        .trainerName = _("ALLEN"),
#line 4092
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4093
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4095
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4096
        .doubleBattle = FALSE,
#line 4097
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4099
            .species = SPECIES_BUNEARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4101
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4100
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4103
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4105
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4104
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4107
    [DIFFICULTY_NORMAL][TRAINER_TIMMY] =
    {
#line 4108
        .trainerName = _("TIMMY"),
#line 4109
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4110
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4112
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4113
        .doubleBattle = FALSE,
#line 4114
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4116
            .species = SPECIES_KRICKETOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4118
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4117
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4120
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4121
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4124
    [DIFFICULTY_NORMAL][TRAINER_FATTY] =
    {
#line 4125
        .trainerName = _("FATTY"),
#line 4126
        .trainerClass = TRAINER_CLASS_CHAMPION,
#line 4127
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 4129
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4130
        .doubleBattle = FALSE,
#line 4131
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
#line 4132
        .mugshotColor = MUGSHOT_COLOR_YELLOW,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 4134
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4134
            .heldItem = ITEM_LEFTOVERS,
#line 4138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4135
            .ability = ABILITY_THICK_FAT,
#line 4136
            .lvl = 75,
#line 4137
            .nature = NATURE_IMPISH,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4138
                MOVE_BODY_PRESS,
                MOVE_HEAT_CRASH,
                MOVE_BODY_SLAM,
                MOVE_REST,
            },
            },
            {
#line 4143
            .species = SPECIES_ARCANINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4143
            .heldItem = ITEM_CHOICE_BAND,
#line 4147
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4144
            .ability = ABILITY_INTIMIDATE,
#line 4145
            .lvl = 75,
#line 4146
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4147
                MOVE_FLARE_BLITZ,
                MOVE_CLOSE_COMBAT,
                MOVE_EXTREME_SPEED,
                MOVE_PLAY_ROUGH,
            },
            },
            {
#line 4152
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4152
            .heldItem = ITEM_LIFE_ORB,
#line 4156
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4153
            .ability = ABILITY_OVERGROW,
#line 4154
            .lvl = 75,
#line 4155
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4156
                MOVE_LEAF_STORM,
                MOVE_SLUDGE_BOMB,
                MOVE_EARTH_POWER,
                MOVE_SYNTHESIS,
            },
            },
            {
#line 4161
            .species = SPECIES_ALAKAZAM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4161
            .heldItem = ITEM_FOCUS_SASH,
#line 4165
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4162
            .ability = ABILITY_MAGIC_GUARD,
#line 4163
            .lvl = 75,
#line 4164
            .nature = NATURE_TIMID,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4165
                MOVE_NASTY_PLOT,
                MOVE_PSYCHIC,
                MOVE_FOCUS_BLAST,
                MOVE_SHADOW_BALL,
            },
            },
            {
#line 4170
            .species = SPECIES_ZAPDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4170
            .heldItem = ITEM_HEAVY_DUTY_BOOTS,
#line 4174
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4171
            .ability = ABILITY_STATIC,
#line 4172
            .lvl = 75,
#line 4173
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4174
                MOVE_HURRICANE,
                MOVE_VOLT_SWITCH,
                MOVE_ROOST,
                MOVE_THUNDERBOLT,
            },
            },
            {
#line 4179
            .species = SPECIES_PSYDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4179
            .heldItem = ITEM_EVIOLITE,
#line 4183
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4180
            .ability = ABILITY_SWIFT_SWIM,
#line 4181
            .lvl = 78,
#line 4182
            .nature = NATURE_MODEST,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4183
                MOVE_SURF,
                MOVE_NASTY_PLOT,
                MOVE_ICE_BEAM,
                MOVE_PSYCHIC,
            },
            },
        },
    },
#line 4188
    [DIFFICULTY_NORMAL][TRAINER_ANDREW] =
    {
#line 4189
        .trainerName = _("ANDREW"),
#line 4190
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4191
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4193
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4194
        .doubleBattle = FALSE,
#line 4195
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4197
            .species = SPECIES_SCRAGGY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4199
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4198
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4201
            .species = SPECIES_VENONAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4203
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4202
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4205
            .species = SPECIES_PONYTA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4207
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4206
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4209
    [DIFFICULTY_NORMAL][TRAINER_IVAN] =
    {
#line 4210
        .trainerName = _("IVAN"),
#line 4211
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4212
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4214
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4215
        .doubleBattle = FALSE,
#line 4216
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4218
            .species = SPECIES_BURMY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4220
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4219
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4222
            .species = SPECIES_MINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4224
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4223
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4226
            .species = SPECIES_DRIFLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4228
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4227
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4230
    [DIFFICULTY_NORMAL][TRAINER_CLAUDE] =
    {
#line 4231
        .trainerName = _("CLAUDE"),
#line 4232
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4233
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4235
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4236
        .doubleBattle = FALSE,
#line 4237
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4239
            .species = SPECIES_CLAMPERL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4241
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4240
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4243
            .species = SPECIES_DEERLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4245
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4244
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4247
            .species = SPECIES_IGGLYBUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4249
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4248
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4251
    [DIFFICULTY_NORMAL][TRAINER_ELLIOT_1] =
    {
#line 4252
        .trainerName = _("ELLIOT"),
#line 4253
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4254
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4256
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4257
        .doubleBattle = FALSE,
#line 4258
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4260
            .species = SPECIES_QWILFISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4262
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4261
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4264
            .species = SPECIES_STUNFISK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4266
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4265
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4268
            .species = SPECIES_AZURILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4270
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4269
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4272
    [DIFFICULTY_NORMAL][TRAINER_NED] =
    {
#line 4273
        .trainerName = _("NED"),
#line 4274
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4275
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4277
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4278
        .doubleBattle = FALSE,
#line 4279
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4281
            .species = SPECIES_BIDOOF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4283
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4282
            .lvl = 14,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4285
    [DIFFICULTY_NORMAL][TRAINER_DALE] =
    {
#line 4286
        .trainerName = _("DALE"),
#line 4287
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4288
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4290
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4291
        .doubleBattle = FALSE,
#line 4292
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 4294
            .species = SPECIES_ROGGENROLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4296
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4295
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4298
            .species = SPECIES_WEEDLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4300
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4299
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4302
            .species = SPECIES_BUDEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4303
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4306
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4307
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4310
    [DIFFICULTY_NORMAL][TRAINER_NOLAN] =
    {
#line 4311
        .trainerName = _("NOLAN"),
#line 4312
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4313
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4315
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4316
        .doubleBattle = FALSE,
#line 4317
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4319
            .species = SPECIES_VANILLITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4320
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4323
    [DIFFICULTY_NORMAL][TRAINER_BARNY] =
    {
#line 4324
        .trainerName = _("BARNY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4332
            .species = SPECIES_HAUNTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4333
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4336
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4338
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4337
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4340
    [DIFFICULTY_NORMAL][TRAINER_WADE] =
    {
#line 4341
        .trainerName = _("WADE"),
#line 4342
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 4343
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 4345
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 4346
        .doubleBattle = FALSE,
#line 4347
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4349
            .species = SPECIES_ALOMOMOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4351
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4350
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4353
    [DIFFICULTY_NORMAL][TRAINER_CARTER] =
    {
#line 4354
        .trainerName = _("CARTER"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4362
            .species = SPECIES_KABUTOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4364
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4363
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4366
            .species = SPECIES_LUMINEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4368
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 4367
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4370
    [DIFFICULTY_NORMAL][TRAINER_RONALD] =
    {
#line 4371
        .trainerName = _("RONALD"),
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
            .species = SPECIES_ELECTIVIRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4381
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4380
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4384
    [DIFFICULTY_NORMAL][TRAINER_JACOB] =
    {
#line 4385
        .trainerName = _("JACOB"),
#line 4386
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4387
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4389
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4390
        .doubleBattle = FALSE,
#line 4391
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4393
            .species = SPECIES_SHROOMISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4395
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4394
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4397
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4399
            .iv = TRAINER_PARTY_IVS(2, 2, 2, 2, 2, 2),
#line 4398
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4401
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4403
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 4402
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4405
    [DIFFICULTY_NORMAL][TRAINER_ANTHONY] =
    {
#line 4406
        .trainerName = _("ANTHONY"),
#line 4407
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4408
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4410
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4411
        .doubleBattle = FALSE,
#line 4412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4414
            .species = SPECIES_DODUO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4415
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4418
            .species = SPECIES_COTTONEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4419
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4422
    [DIFFICULTY_NORMAL][TRAINER_BENJAMIN_1] =
    {
#line 4423
        .trainerName = _("BENJAMIN"),
#line 4424
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4425
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4427
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4428
        .doubleBattle = FALSE,
#line 4429
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4431
            .species = SPECIES_SPEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4433
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4432
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4435
    [DIFFICULTY_NORMAL][TRAINER_JASMINE] =
    {
#line 4436
        .trainerName = _("JASMINE"),
#line 4437
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4438
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4439
F_TRAINER_FEMALE | 
#line 4440
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4441
        .doubleBattle = FALSE,
#line 4442
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4444
            .species = SPECIES_YANMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4446
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4445
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4448
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4450
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4449
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4452
            .species = SPECIES_SANDILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4453
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4456
    [DIFFICULTY_NORMAL][TRAINER_DYLAN_1] =
    {
#line 4457
        .trainerName = _("DYLAN"),
#line 4458
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4459
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4461
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4462
        .doubleBattle = FALSE,
#line 4463
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4465
            .species = SPECIES_DELIBIRD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4467
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4466
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4470
    [DIFFICULTY_NORMAL][TRAINER_MARIA_1] =
    {
#line 4471
        .trainerName = _("MARIA"),
#line 4472
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4473
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4474
F_TRAINER_FEMALE | 
#line 4475
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 4476
        .doubleBattle = FALSE,
#line 4477
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4479
            .species = SPECIES_TOGEPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4481
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4480
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4483
    [DIFFICULTY_NORMAL][TRAINER_CAMDEN] =
    {
#line 4484
        .trainerName = _("CAMDEN"),
#line 4485
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4486
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4488
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4489
        .doubleBattle = FALSE,
#line 4490
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4492
            .species = SPECIES_HYDREIGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4494
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4493
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4496
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4498
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4497
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4500
    [DIFFICULTY_NORMAL][TRAINER_DEMETRIUS] =
    {
#line 4501
        .trainerName = _("DEMETRIUS"),
#line 4502
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 4503
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 4505
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 4506
        .doubleBattle = FALSE,
#line 4507
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4509
            .species = SPECIES_SHELLOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4511
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4510
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4513
            .species = SPECIES_BUIZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4515
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4514
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4517
    [DIFFICULTY_NORMAL][TRAINER_ISAIAH_1] =
    {
#line 4518
        .trainerName = _("ISAIAH"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4526
            .species = SPECIES_RAICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4528
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4527
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4530
    [DIFFICULTY_NORMAL][TRAINER_PABLO_1] =
    {
#line 4531
        .trainerName = _("PABLO"),
#line 4532
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4533
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4535
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4536
        .doubleBattle = FALSE,
#line 4537
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4539
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4541
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4540
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4543
            .species = SPECIES_STARYU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4545
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4544
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4547
    [DIFFICULTY_NORMAL][TRAINER_CHASE] =
    {
#line 4548
        .trainerName = _("CHASE"),
#line 4549
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4550
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 4552
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4553
        .doubleBattle = FALSE,
#line 4554
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4556
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4558
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4557
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4560
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4562
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 4561
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4564
    [DIFFICULTY_NORMAL][TRAINER_ISOBEL] =
    {
#line 4565
        .trainerName = _("ISOBEL"),
#line 4566
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4567
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4568
F_TRAINER_FEMALE | 
#line 4569
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4570
        .doubleBattle = FALSE,
#line 4571
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4573
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4574
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4577
    [DIFFICULTY_NORMAL][TRAINER_DONNY] =
    {
#line 4578
        .trainerName = _("DONNY"),
#line 4579
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4580
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4581
F_TRAINER_FEMALE | 
#line 4582
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4583
        .doubleBattle = FALSE,
#line 4584
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4586
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4588
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4587
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4590
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4592
            .iv = TRAINER_PARTY_IVS(19, 19, 19, 19, 19, 19),
#line 4591
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4594
    [DIFFICULTY_NORMAL][TRAINER_TALIA] =
    {
#line 4595
        .trainerName = _("TALIA"),
#line 4596
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4597
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4598
F_TRAINER_FEMALE | 
#line 4599
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4600
        .doubleBattle = FALSE,
#line 4601
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4603
            .species = SPECIES_UNFEZANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4605
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4604
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4607
    [DIFFICULTY_NORMAL][TRAINER_KATELYN_1] =
    {
#line 4608
        .trainerName = _("KATELYN"),
#line 4609
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4610
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4611
F_TRAINER_FEMALE | 
#line 4612
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4613
        .doubleBattle = FALSE,
#line 4614
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4616
            .species = SPECIES_POLITOED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4618
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4617
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4620
    [DIFFICULTY_NORMAL][TRAINER_ALLISON] =
    {
#line 4621
        .trainerName = _("ALLISON"),
#line 4622
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 4623
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 4624
F_TRAINER_FEMALE | 
#line 4625
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 4626
        .doubleBattle = FALSE,
#line 4627
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4629
            .species = SPECIES_PORYGON_Z,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4631
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4630
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4633
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4635
            .iv = TRAINER_PARTY_IVS(29, 29, 29, 29, 29, 29),
#line 4634
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4637
    [DIFFICULTY_NORMAL][TRAINER_NICOLAS_1] =
    {
#line 4638
        .trainerName = _("NICOLAS"),
#line 4639
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4640
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4642
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4643
        .doubleBattle = FALSE,
#line 4644
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4646
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4648
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4647
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4650
            .species = SPECIES_FLYGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4652
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4651
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4654
    [DIFFICULTY_NORMAL][TRAINER_AARON] =
    {
#line 4655
        .trainerName = _("AARON"),
#line 4656
        .trainerClass = TRAINER_CLASS_DRAGON_TAMER,
#line 4657
        .trainerPic = TRAINER_PIC_DRAGON_TAMER,
        .encounterMusic_gender =
#line 4659
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4660
        .doubleBattle = FALSE,
#line 4661
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4663
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4665
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 4664
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4667
    [DIFFICULTY_NORMAL][TRAINER_PERRY] =
    {
#line 4668
        .trainerName = _("PERRY"),
#line 4669
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4670
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4672
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4673
        .doubleBattle = FALSE,
#line 4674
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4676
            .species = SPECIES_HITMONLEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4678
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4677
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4680
    [DIFFICULTY_NORMAL][TRAINER_HUGH] =
    {
#line 4681
        .trainerName = _("HUGH"),
#line 4682
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4683
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4685
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4686
        .doubleBattle = FALSE,
#line 4687
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4689
            .species = SPECIES_VANILLISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4691
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4690
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4693
            .species = SPECIES_RAPIDASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4695
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4694
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4697
    [DIFFICULTY_NORMAL][TRAINER_PHIL] =
    {
#line 4698
        .trainerName = _("PHIL"),
#line 4699
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4700
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4702
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4703
        .doubleBattle = FALSE,
#line 4704
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4706
            .species = SPECIES_ARIADOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4708
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4707
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4710
    [DIFFICULTY_NORMAL][TRAINER_JARED] =
    {
#line 4711
        .trainerName = _("JARED"),
#line 4712
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4713
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4715
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4716
        .doubleBattle = FALSE,
#line 4717
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4719
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4721
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4720
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4723
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4725
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4724
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4727
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4729
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 4728
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4731
    [DIFFICULTY_NORMAL][TRAINER_HUMBERTO] =
    {
#line 4732
        .trainerName = _("HUMBERTO"),
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
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4742
            .iv = TRAINER_PARTY_IVS(30, 30, 30, 30, 30, 30),
#line 4741
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4744
    [DIFFICULTY_NORMAL][TRAINER_PRESLEY] =
    {
#line 4745
        .trainerName = _("PRESLEY"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4753
            .species = SPECIES_GURDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4755
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4754
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4757
            .species = SPECIES_KLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4759
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4758
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4761
    [DIFFICULTY_NORMAL][TRAINER_EDWARDO] =
    {
#line 4762
        .trainerName = _("EDWARDO"),
#line 4763
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4764
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4766
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4767
        .doubleBattle = FALSE,
#line 4768
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4770
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4772
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4771
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4774
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4776
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4775
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4778
    [DIFFICULTY_NORMAL][TRAINER_COLIN] =
    {
#line 4779
        .trainerName = _("COLIN"),
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
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4789
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4788
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4791
            .species = SPECIES_GALVANTULA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4793
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4792
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4795
    [DIFFICULTY_NORMAL][TRAINER_ROBERT_1] =
    {
#line 4796
        .trainerName = _("ROBERT"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4804
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4805
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4808
    [DIFFICULTY_NORMAL][TRAINER_BENNY] =
    {
#line 4809
        .trainerName = _("BENNY"),
#line 4810
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4811
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4813
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4814
        .doubleBattle = FALSE,
#line 4815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4817
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4818
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4821
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4822
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4825
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4827
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4826
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4829
    [DIFFICULTY_NORMAL][TRAINER_CHESTER] =
    {
#line 4830
        .trainerName = _("CHESTER"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4838
            .species = SPECIES_GLISCOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4839
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4842
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4843
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4846
    [DIFFICULTY_NORMAL][TRAINER_ALEX] =
    {
#line 4847
        .trainerName = _("ALEX"),
#line 4848
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 4849
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 4851
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4852
        .doubleBattle = FALSE,
#line 4853
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4855
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4857
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4856
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4859
            .species = SPECIES_GOLEM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4861
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4860
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4863
    [DIFFICULTY_NORMAL][TRAINER_BECK] =
    {
#line 4864
        .trainerName = _("BECK"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4872
            .species = SPECIES_SCOLIPEDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4874
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4873
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4876
    [DIFFICULTY_NORMAL][TRAINER_YASU] =
    {
#line 4877
        .trainerName = _("YASU"),
#line 4878
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4879
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4881
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4882
        .doubleBattle = FALSE,
#line 4883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4885
            .species = SPECIES_ALTARIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4886
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4889
    [DIFFICULTY_NORMAL][TRAINER_TAKASHI] =
    {
#line 4890
        .trainerName = _("TAKASHI"),
#line 4891
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4892
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4894
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4895
        .doubleBattle = FALSE,
#line 4896
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4898
            .species = SPECIES_ARCHEOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4900
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4899
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4902
            .species = SPECIES_MOTHIM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4903
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4906
    [DIFFICULTY_NORMAL][TRAINER_DIANNE] =
    {
#line 4907
        .trainerName = _("DIANNE"),
#line 4908
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 4909
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 4910
F_TRAINER_FEMALE | 
#line 4911
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 4912
        .items = { ITEM_FULL_RESTORE },
#line 4913
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4915
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4917
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4916
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4918
                MOVE_SKILL_SWAP,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 4921
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4923
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4922
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 4924
                MOVE_THUNDERBOLT,
                MOVE_EARTHQUAKE,
            },
            },
        },
    },
#line 4927
    [DIFFICULTY_NORMAL][TRAINER_JANI] =
    {
#line 4928
        .trainerName = _("JANI"),
#line 4929
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 4930
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 4931
F_TRAINER_FEMALE | 
#line 4932
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 4933
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4935
            .species = SPECIES_FLOATZEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4936
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4939
    [DIFFICULTY_NORMAL][TRAINER_LAO_1] =
    {
#line 4940
        .trainerName = _("LAO"),
#line 4941
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4942
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4944
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4945
        .doubleBattle = FALSE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 4947
            .species = SPECIES_MAREEP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4949
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4948
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4951
            .species = SPECIES_LEDYBA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4953
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4952
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4955
            .species = SPECIES_SHELLDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4957
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4956
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4959
    [DIFFICULTY_NORMAL][TRAINER_LUNG] =
    {
#line 4960
        .trainerName = _("LUNG"),
#line 4961
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 4962
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 4964
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 4965
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 4967
            .species = SPECIES_TURTWIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4969
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4968
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 4971
            .species = SPECIES_GOLDEEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4973
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 4972
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4975
    [DIFFICULTY_NORMAL][TRAINER_JOCELYN] =
    {
#line 4976
        .trainerName = _("JOCELYN"),
#line 4977
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 4978
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 4979
F_TRAINER_FEMALE | 
#line 4980
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4981
        .doubleBattle = FALSE,
#line 4982
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4984
            .species = SPECIES_SURSKIT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4986
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 4985
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 4988
    [DIFFICULTY_NORMAL][TRAINER_LAURA] =
    {
#line 4989
        .trainerName = _("LAURA"),
#line 4990
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 4991
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 4992
F_TRAINER_FEMALE | 
#line 4993
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 4994
        .doubleBattle = FALSE,
#line 4995
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 4997
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 4999
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 4998
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5001
    [DIFFICULTY_NORMAL][TRAINER_CYNDY_1] =
    {
#line 5002
        .trainerName = _("CYNDY"),
#line 5003
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5004
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5005
F_TRAINER_FEMALE | 
#line 5006
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5007
        .doubleBattle = FALSE,
#line 5008
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5010
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5012
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5011
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5014
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5016
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5015
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5018
    [DIFFICULTY_NORMAL][TRAINER_CORA] =
    {
#line 5019
        .trainerName = _("CORA"),
#line 5020
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5021
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5022
F_TRAINER_FEMALE | 
#line 5023
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5024
        .doubleBattle = FALSE,
#line 5025
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5027
            .species = SPECIES_MEDITITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5029
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5028
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5031
    [DIFFICULTY_NORMAL][TRAINER_PAULA] =
    {
#line 5032
        .trainerName = _("PAULA"),
#line 5033
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5034
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5035
F_TRAINER_FEMALE | 
#line 5036
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5037
        .doubleBattle = FALSE,
#line 5038
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5040
            .species = SPECIES_BRELOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5042
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5041
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5044
    [DIFFICULTY_NORMAL][TRAINER_MADELINE_1] =
    {
#line 5045
        .trainerName = _("MADELINE"),
#line 5046
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5047
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5048
F_TRAINER_FEMALE | 
#line 5049
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5050
        .doubleBattle = FALSE,
#line 5051
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5053
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5055
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5054
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5057
    [DIFFICULTY_NORMAL][TRAINER_CLARISSA] =
    {
#line 5058
        .trainerName = _("CLARISSA"),
#line 5059
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5060
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5061
F_TRAINER_FEMALE | 
#line 5062
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5063
        .doubleBattle = FALSE,
#line 5064
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5066
            .species = SPECIES_PRIMEAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5068
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5067
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5070
            .species = SPECIES_WHIMSICOTT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5072
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5071
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5074
    [DIFFICULTY_NORMAL][TRAINER_ANGELICA] =
    {
#line 5075
        .trainerName = _("ANGELICA"),
#line 5076
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5077
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5078
F_TRAINER_FEMALE | 
#line 5079
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5080
        .doubleBattle = FALSE,
#line 5081
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5083
            .species = SPECIES_LEAFEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5085
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5084
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5087
    [DIFFICULTY_NORMAL][TRAINER_BEVERLY] =
    {
#line 5088
        .trainerName = _("BEVERLY"),
#line 5089
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5090
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5091
F_TRAINER_FEMALE | 
#line 5092
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5093
        .doubleBattle = FALSE,
#line 5094
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5096
            .species = SPECIES_SILCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5098
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5097
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5100
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5102
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5101
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5104
    [DIFFICULTY_NORMAL][TRAINER_IMANI] =
    {
#line 5105
        .trainerName = _("IMANI"),
#line 5106
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5107
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5108
F_TRAINER_FEMALE | 
#line 5109
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5110
        .doubleBattle = FALSE,
#line 5111
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5113
            .species = SPECIES_SNORLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5115
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5114
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5117
    [DIFFICULTY_NORMAL][TRAINER_KYLA] =
    {
#line 5118
        .trainerName = _("KYLA"),
#line 5119
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5120
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5121
F_TRAINER_FEMALE | 
#line 5122
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5123
        .doubleBattle = FALSE,
#line 5124
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5126
            .species = SPECIES_CLOYSTER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5128
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5127
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5130
    [DIFFICULTY_NORMAL][TRAINER_DENISE] =
    {
#line 5131
        .trainerName = _("DENISE"),
#line 5132
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5133
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5134
F_TRAINER_FEMALE | 
#line 5135
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5136
        .doubleBattle = FALSE,
#line 5137
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5139
            .species = SPECIES_MISMAGIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5141
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5140
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5143
            .species = SPECIES_FRAXURE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5145
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5144
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5147
    [DIFFICULTY_NORMAL][TRAINER_BETH] =
    {
#line 5148
        .trainerName = _("BETH"),
#line 5149
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5150
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5151
F_TRAINER_FEMALE | 
#line 5152
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5153
        .doubleBattle = FALSE,
#line 5154
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5156
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5158
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5157
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5160
    [DIFFICULTY_NORMAL][TRAINER_TARA] =
    {
#line 5161
        .trainerName = _("TARA"),
#line 5162
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5163
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5164
F_TRAINER_FEMALE | 
#line 5165
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5166
        .doubleBattle = FALSE,
#line 5167
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5169
            .species = SPECIES_GLALIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5171
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5170
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5173
            .species = SPECIES_BOLDORE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5175
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5174
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5177
    [DIFFICULTY_NORMAL][TRAINER_MISSY] =
    {
#line 5178
        .trainerName = _("MISSY"),
#line 5179
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5180
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5181
F_TRAINER_FEMALE | 
#line 5182
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5183
        .doubleBattle = FALSE,
#line 5184
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5186
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5188
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5187
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5190
    [DIFFICULTY_NORMAL][TRAINER_ALICE] =
    {
#line 5191
        .trainerName = _("ALICE"),
#line 5192
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5193
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5194
F_TRAINER_FEMALE | 
#line 5195
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5196
        .doubleBattle = FALSE,
#line 5197
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5199
            .species = SPECIES_BRAVIARY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5201
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5200
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5203
            .species = SPECIES_PALPITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5205
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5204
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5207
            .species = SPECIES_BIBAREL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5209
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5208
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5211
    [DIFFICULTY_NORMAL][TRAINER_JENNY_1] =
    {
#line 5212
        .trainerName = _("JENNY"),
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
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5222
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5221
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5224
    [DIFFICULTY_NORMAL][TRAINER_GRACE] =
    {
#line 5225
        .trainerName = _("GRACE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5233
            .species = SPECIES_OCTILLERY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5235
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5234
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5237
    [DIFFICULTY_NORMAL][TRAINER_TANYA] =
    {
#line 5238
        .trainerName = _("TANYA"),
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
            .species = SPECIES_MAGCARGO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5248
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5247
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5250
    [DIFFICULTY_NORMAL][TRAINER_SHARON] =
    {
#line 5251
        .trainerName = _("SHARON"),
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
            .species = SPECIES_DARMANITAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5261
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5260
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5263
    [DIFFICULTY_NORMAL][TRAINER_NIKKI] =
    {
#line 5264
        .trainerName = _("NIKKI"),
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
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5274
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5273
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5276
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5278
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5277
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5280
    [DIFFICULTY_NORMAL][TRAINER_BRENDA] =
    {
#line 5281
        .trainerName = _("BRENDA"),
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
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5291
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5290
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5293
    [DIFFICULTY_NORMAL][TRAINER_KATIE] =
    {
#line 5294
        .trainerName = _("KATIE"),
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
            .species = SPECIES_VILEPLUME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5304
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5303
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5306
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5308
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5307
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5310
    [DIFFICULTY_NORMAL][TRAINER_SUSIE] =
    {
#line 5311
        .trainerName = _("SUSIE"),
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
            .species = SPECIES_JUMPLUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5321
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5320
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5323
    [DIFFICULTY_NORMAL][TRAINER_KARA] =
    {
#line 5324
        .trainerName = _("KARA"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5332
            .species = SPECIES_MAGMORTAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5334
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5333
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5336
    [DIFFICULTY_NORMAL][TRAINER_DANA] =
    {
#line 5337
        .trainerName = _("DANA"),
#line 5338
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5339
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5340
F_TRAINER_FEMALE | 
#line 5341
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5342
        .doubleBattle = FALSE,
#line 5343
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5345
            .species = SPECIES_REUNICLUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5347
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5346
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5349
    [DIFFICULTY_NORMAL][TRAINER_SIENNA] =
    {
#line 5350
        .trainerName = _("SIENNA"),
#line 5351
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5352
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5353
F_TRAINER_FEMALE | 
#line 5354
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5355
        .doubleBattle = FALSE,
#line 5356
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5358
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5360
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5359
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5362
            .species = SPECIES_AMPHAROS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5364
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5363
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5366
    [DIFFICULTY_NORMAL][TRAINER_DEBRA] =
    {
#line 5367
        .trainerName = _("DEBRA"),
#line 5368
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5369
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5370
F_TRAINER_FEMALE | 
#line 5371
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5372
        .doubleBattle = FALSE,
#line 5373
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5375
            .species = SPECIES_BEAUTIFLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5377
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5376
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5379
    [DIFFICULTY_NORMAL][TRAINER_LINDA] =
    {
#line 5380
        .trainerName = _("LINDA"),
#line 5381
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 5382
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 5383
F_TRAINER_FEMALE | 
#line 5384
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 5385
        .doubleBattle = FALSE,
#line 5386
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5388
            .species = SPECIES_GARDEVOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5390
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5389
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5392
            .species = SPECIES_VENUSAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5394
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5393
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5396
    [DIFFICULTY_NORMAL][TRAINER_KAYLEE] =
    {
#line 5397
        .trainerName = _("KAYLEE"),
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
            .species = SPECIES_LANTURN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5407
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5406
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5409
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5411
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5410
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5413
    [DIFFICULTY_NORMAL][TRAINER_LAUREL] =
    {
#line 5414
        .trainerName = _("LAUREL"),
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
            .species = SPECIES_DUSKNOIR,
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
            .species = SPECIES_RHYPERIOR,
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
    [DIFFICULTY_NORMAL][TRAINER_CARLEE] =
    {
#line 5431
        .trainerName = _("CARLEE"),
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
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5439
            .species = SPECIES_POLIWRATH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5441
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5440
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5443
    [DIFFICULTY_NORMAL][TRAINER_HEIDI] =
    {
#line 5444
        .trainerName = _("HEIDI"),
#line 5445
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5446
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5447
F_TRAINER_FEMALE | 
#line 5448
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5449
        .doubleBattle = FALSE,
#line 5450
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5452
            .species = SPECIES_NINCADA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5454
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5453
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5456
            .species = SPECIES_MINUN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5458
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5457
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5461
    [DIFFICULTY_NORMAL][TRAINER_BECKY] =
    {
#line 5462
        .trainerName = _("BECKY"),
#line 5463
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5464
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5465
F_TRAINER_FEMALE | 
#line 5466
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5467
        .doubleBattle = TRUE,
#line 5468
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5470
            .species = SPECIES_RATTATA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5470
            .heldItem = ITEM_FOCUS_SASH,
#line 5472
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5471
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5473
                MOVE_ENDEAVOR,
                MOVE_QUICK_ATTACK,
            },
            },
            {
#line 5476
            .species = SPECIES_SMEARGLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5476
            .heldItem = ITEM_WIDE_LENS,
#line 5479
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5477
            .ability = ABILITY_MOODY,
#line 5478
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5480
                MOVE_DARK_VOID,
                MOVE_SACRED_FIRE,
                MOVE_SURGING_STRIKES,
                MOVE_JUDGMENT,
            },
            },
        },
    },
#line 5485
    [DIFFICULTY_NORMAL][TRAINER_CAROL] =
    {
#line 5486
        .trainerName = _("CAROL"),
#line 5487
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5488
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5489
F_TRAINER_FEMALE | 
#line 5490
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5491
        .doubleBattle = FALSE,
#line 5492
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5494
            .species = SPECIES_TAILLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5496
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5495
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5498
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5500
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5499
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5502
    [DIFFICULTY_NORMAL][TRAINER_NANCY] =
    {
#line 5503
        .trainerName = _("NANCY"),
#line 5504
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 5505
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 5506
F_TRAINER_FEMALE | 
#line 5507
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 5508
        .doubleBattle = FALSE,
#line 5509
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5511
            .species = SPECIES_WHISMUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5513
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5512
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5515
            .species = SPECIES_KARRABLAST,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5517
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5516
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5519
    [DIFFICULTY_NORMAL][TRAINER_MARTHA] =
    {
#line 5520
        .trainerName = _("MARTHA"),
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
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5529
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5532
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5533
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5536
    [DIFFICULTY_NORMAL][TRAINER_DIANA_1] =
    {
#line 5537
        .trainerName = _("DIANA"),
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
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5545
            .species = SPECIES_ONIX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5547
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5546
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5549
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5550
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5553
            .species = SPECIES_PINSIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5554
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5557
    [DIFFICULTY_NORMAL][TRAINER_CEDRIC] =
    {
#line 5558
        .trainerName = _("CEDRIC"),
#line 5559
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 5560
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 5562
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5563
        .doubleBattle = FALSE,
#line 5564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5566
            .species = SPECIES_PUPITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5567
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5570
    [DIFFICULTY_NORMAL][TRAINER_IRENE] =
    {
#line 5571
        .trainerName = _("IRENE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5579
            .species = SPECIES_MAKUHITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5581
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5580
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5583
            .species = SPECIES_DUNSPARCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5585
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5584
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5587
    [DIFFICULTY_NORMAL][TRAINER_AMY_AND_LIV_1] =
    {
#line 5588
        .trainerName = _("AMY & LIV"),
#line 5589
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5590
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5592
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5593
        .doubleBattle = TRUE,
#line 5594
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5596
            .species = SPECIES_GOLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5598
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5597
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5600
            .species = SPECIES_TEDDIURSA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5602
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5601
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5605
    [DIFFICULTY_NORMAL][TRAINER_GINA_AND_MIA_1] =
    {
#line 5606
        .trainerName = _("GINA & MIA"),
#line 5607
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5608
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5610
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5611
        .doubleBattle = TRUE,
#line 5612
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5614
            .species = SPECIES_PARAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5615
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5618
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5619
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5622
    [DIFFICULTY_NORMAL][TRAINER_MIU_AND_YUKI] =
    {
#line 5623
        .trainerName = _("MIU & YUKI"),
#line 5624
        .trainerClass = TRAINER_CLASS_TWINS,
#line 5625
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 5627
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5628
        .doubleBattle = TRUE,
#line 5629
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5631
            .species = SPECIES_NIDORINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5632
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5635
            .species = SPECIES_UMBREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5636
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5640
    [DIFFICULTY_NORMAL][TRAINER_HUEY] =
    {
#line 5641
        .trainerName = _("HUEY"),
#line 5642
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5643
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5645
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5646
        .doubleBattle = FALSE,
#line 5647
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5649
            .species = SPECIES_KRABBY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5651
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5650
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5653
            .species = SPECIES_TYMPOLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5655
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 5654
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5657
    [DIFFICULTY_NORMAL][TRAINER_EDMOND] =
    {
#line 5658
        .trainerName = _("EDMOND"),
#line 5659
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5660
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5662
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5663
        .doubleBattle = FALSE,
#line 5664
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5666
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5667
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5670
    [DIFFICULTY_NORMAL][TRAINER_ERNEST_1] =
    {
#line 5671
        .trainerName = _("ERNEST"),
#line 5672
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5673
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5675
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5676
        .doubleBattle = FALSE,
#line 5677
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5679
            .species = SPECIES_MANTINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5681
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5680
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5683
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5684
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5687
    [DIFFICULTY_NORMAL][TRAINER_DWAYNE] =
    {
#line 5688
        .trainerName = _("DWAYNE"),
#line 5689
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5690
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5692
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5693
        .doubleBattle = FALSE,
#line 5694
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5696
            .species = SPECIES_TYNAMO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5698
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5697
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5700
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5702
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5701
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5704
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5705
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5708
    [DIFFICULTY_NORMAL][TRAINER_PHILLIP] =
    {
#line 5709
        .trainerName = _("PHILLIP"),
#line 5710
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5711
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5713
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5714
        .doubleBattle = FALSE,
#line 5715
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5717
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5719
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5718
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5721
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5723
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5722
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5725
    [DIFFICULTY_NORMAL][TRAINER_LEONARD] =
    {
#line 5726
        .trainerName = _("LEONARD"),
#line 5727
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5728
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5730
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5731
        .doubleBattle = FALSE,
#line 5732
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5734
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5736
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5735
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5738
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5740
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5739
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5742
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5743
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5746
    [DIFFICULTY_NORMAL][TRAINER_DUNCAN] =
    {
#line 5747
        .trainerName = _("DUNCAN"),
#line 5748
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5749
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5751
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5752
        .doubleBattle = FALSE,
#line 5753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5755
            .species = SPECIES_FINNEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5756
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5759
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5760
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5763
    [DIFFICULTY_NORMAL][TRAINER_ELI] =
    {
#line 5764
        .trainerName = _("ELI"),
#line 5765
        .trainerClass = TRAINER_CLASS_HIKER,
#line 5766
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 5768
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 5769
        .doubleBattle = FALSE,
#line 5770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5772
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5774
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5773
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5776
    [DIFFICULTY_NORMAL][TRAINER_ANNIKA] =
    {
#line 5777
        .trainerName = _("ANNIKA"),
#line 5778
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 5779
        .trainerPic = TRAINER_PIC_POKEFAN_F,
        .encounterMusic_gender =
#line 5780
F_TRAINER_FEMALE | 
#line 5781
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 5782
        .doubleBattle = FALSE,
#line 5783
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5785
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5785
            .heldItem = ITEM_FOCUS_SASH,
#line 5787
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5786
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5789
            .species = SPECIES_SHEDINJA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5789
            .heldItem = ITEM_FOCUS_SASH,
#line 5791
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 5790
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5793
    [DIFFICULTY_NORMAL][TRAINER_JAZMYN] =
    {
#line 5794
        .trainerName = _("JAZMYN"),
#line 5795
        .trainerClass = TRAINER_CLASS_COOLTRAINER_2,
#line 5796
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5797
F_TRAINER_FEMALE | 
#line 5798
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5799
        .items = { ITEM_HYPER_POTION },
#line 5800
        .doubleBattle = FALSE,
#line 5801
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5803
            .species = SPECIES_SANDSLASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5805
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5804
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5807
    [DIFFICULTY_NORMAL][TRAINER_JONAS] =
    {
#line 5808
        .trainerName = _("JONAS"),
#line 5809
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 5810
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 5812
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5813
        .doubleBattle = FALSE,
#line 5814
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5816
            .species = SPECIES_SKIPLOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5818
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5817
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5820
    [DIFFICULTY_NORMAL][TRAINER_KAYLEY] =
    {
#line 5821
        .trainerName = _("KAYLEY"),
#line 5822
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 5823
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 5824
F_TRAINER_FEMALE | 
#line 5825
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 5826
        .doubleBattle = FALSE,
#line 5827
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5829
            .species = SPECIES_WARTORTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5831
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5830
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5833
    [DIFFICULTY_NORMAL][TRAINER_AURON] =
    {
#line 5834
        .trainerName = _("AURON"),
#line 5835
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5836
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5838
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5839
        .doubleBattle = FALSE,
#line 5840
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5842
            .species = SPECIES_AMBIPOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5844
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5843
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5846
            .species = SPECIES_GOLURK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5848
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5847
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5850
    [DIFFICULTY_NORMAL][TRAINER_KELVIN] =
    {
#line 5851
        .trainerName = _("KELVIN"),
#line 5852
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5853
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5855
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5856
        .doubleBattle = FALSE,
#line 5857
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5859
            .species = SPECIES_ROSERADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5861
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5860
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5863
            .species = SPECIES_STOUTLAND,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5865
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 5864
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5867
    [DIFFICULTY_NORMAL][TRAINER_MARLEY] =
    {
#line 5868
        .trainerName = _("MARLEY"),
#line 5869
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 5870
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 5871
F_TRAINER_FEMALE | 
#line 5872
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 5873
        .items = { ITEM_HYPER_POTION },
#line 5874
        .doubleBattle = FALSE,
#line 5875
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5877
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5879
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 5878
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5881
    [DIFFICULTY_NORMAL][TRAINER_REYNA] =
    {
#line 5882
        .trainerName = _("REYNA"),
#line 5883
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 5884
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 5885
F_TRAINER_FEMALE | 
#line 5886
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5887
        .doubleBattle = FALSE,
#line 5888
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5890
            .species = SPECIES_KROOKODILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5892
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 5891
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5894
            .species = SPECIES_MAGNEZONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5896
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5895
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5898
    [DIFFICULTY_NORMAL][TRAINER_HUDSON] =
    {
#line 5899
        .trainerName = _("HUDSON"),
#line 5900
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 5901
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 5903
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 5904
        .doubleBattle = FALSE,
#line 5905
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 5907
            .species = SPECIES_GENGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5909
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5908
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5911
    [DIFFICULTY_NORMAL][TRAINER_CONOR] =
    {
#line 5912
        .trainerName = _("CONOR"),
#line 5913
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 5914
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 5916
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 5917
        .doubleBattle = FALSE,
#line 5918
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5920
            .species = SPECIES_WIGGLYTUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5922
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5921
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5924
            .species = SPECIES_INFERNAPE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5926
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 5925
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5928
    [DIFFICULTY_NORMAL][TRAINER_EDWIN_1] =
    {
#line 5929
        .trainerName = _("EDWIN"),
#line 5930
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 5931
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 5933
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5934
        .doubleBattle = FALSE,
#line 5935
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5937
            .species = SPECIES_LARVITAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5939
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5938
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5941
            .species = SPECIES_DWEBBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5943
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5942
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5945
    [DIFFICULTY_NORMAL][TRAINER_HECTOR] =
    {
#line 5946
        .trainerName = _("HECTOR"),
#line 5947
        .trainerClass = TRAINER_CLASS_COLLECTOR,
#line 5948
        .trainerPic = TRAINER_PIC_COLLECTOR,
        .encounterMusic_gender =
#line 5950
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 5951
        .doubleBattle = FALSE,
#line 5952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 5954
            .species = SPECIES_BOUFFALANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5955
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 5958
            .species = SPECIES_CHERUBI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5960
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 5959
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 5962
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MOSSDEEP] =
    {
#line 5963
        .trainerName = _("TABITHA"),
#line 5964
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 5965
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 5967
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 5968
        .doubleBattle = FALSE,
#line 5969
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 5971
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5971
            .heldItem = ITEM_HEAT_ROCK,
#line 5974
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5972
            .ability = ABILITY_DROUGHT,
#line 5973
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5975
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 5980
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5980
            .heldItem = ITEM_POISON_BARB,
#line 5983
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5981
            .ability = ABILITY_LEVITATE,
#line 5982
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5984
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 5989
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 5989
            .heldItem = ITEM_LIFE_ORB,
#line 5992
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 5991
            .ability = ABILITY_LEVITATE,
#line 5990
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 5993
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
        },
    },
#line 5998
    [DIFFICULTY_NORMAL][TRAINER_WALLY_VR_1] =
    {
#line 5999
        .trainerName = _("SAMUEL"),
#line 6000
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6001
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6003
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6004
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 6005
        .doubleBattle = TRUE,
#line 6006
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6008
            .species = SPECIES_SLOWKING,
#line 6008
            .gender = TRAINER_MON_MALE,
#line 6008
            .heldItem = ITEM_LIFE_ORB,
#line 6012
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6009
            .ability = ABILITY_REGENERATOR,
#line 6010
            .lvl = 67,
#line 6011
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6013
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 6018
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6018
            .heldItem = ITEM_ROCKY_HELMET,
#line 6022
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6019
            .ability = ABILITY_REGENERATOR,
#line 6020
            .lvl = 67,
#line 6021
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6022
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6027
            .species = SPECIES_GLISCOR,
#line 6027
            .gender = TRAINER_MON_FEMALE,
#line 6027
            .heldItem = ITEM_TOXIC_ORB,
#line 6031
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6028
            .ability = ABILITY_POISON_HEAL,
#line 6029
            .lvl = 67,
#line 6030
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6032
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6037
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6037
            .heldItem = ITEM_ASSAULT_VEST,
#line 6041
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6038
            .ability = ABILITY_CLEAR_BODY,
#line 6039
            .lvl = 67,
#line 6040
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6042
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6047
            .species = SPECIES_HONCHKROW,
#line 6047
            .gender = TRAINER_MON_MALE,
#line 6047
            .heldItem = ITEM_FOCUS_SASH,
#line 6051
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6048
            .ability = ABILITY_MOXIE,
#line 6049
            .lvl = 67,
#line 6050
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6051
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
            {
#line 6056
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6056
            .heldItem = ITEM_SAFETY_GOGGLES,
#line 6060
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6057
            .ability = ABILITY_INFILTRATOR,
#line 6058
            .lvl = 67,
#line 6059
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6060
                MOVE_DARK_PULSE,
                MOVE_PSYSHOCK,
                MOVE_TRICK_ROOM,
                MOVE_WILL_O_WISP,
            },
            },
        },
    },
#line 6065
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_MUDKIP] =
    {
#line 6066
        .trainerName = _("SAMUEL"),
#line 6067
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6068
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6070
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6071
        .doubleBattle = FALSE,
#line 6072
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6074
            .species = SPECIES_SLOWPOKE,
#line 6074
            .gender = TRAINER_MON_MALE,
#line 6078
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6075
            .ability = ABILITY_REGENERATOR,
#line 6076
            .lvl = 5,
#line 6077
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6079
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6083
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_MUDKIP] =
    {
#line 6084
        .trainerName = _("SAMUEL"),
#line 6085
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6086
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6088
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6089
        .doubleBattle = FALSE,
#line 6090
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6092
            .species = SPECIES_SLOWPOKE,
#line 6092
            .gender = TRAINER_MON_MALE,
#line 6092
            .heldItem = ITEM_FIGY_BERRY,
#line 6096
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6093
            .ability = ABILITY_REGENERATOR,
#line 6094
            .lvl = 24,
#line 6095
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6097
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6102
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6102
            .heldItem = ITEM_LUM_BERRY,
#line 6106
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6103
            .ability = ABILITY_REGENERATOR,
#line 6104
            .lvl = 24,
#line 6105
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6107
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6112
            .species = SPECIES_GLIGAR,
#line 6112
            .gender = TRAINER_MON_FEMALE,
#line 6112
            .heldItem = ITEM_RAZOR_FANG,
#line 6116
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6113
            .ability = ABILITY_HYPER_CUTTER,
#line 6114
            .lvl = 24,
#line 6115
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6117
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
            {
#line 6122
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6126
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6123
            .ability = ABILITY_CLEAR_BODY,
#line 6124
            .lvl = 24,
#line 6125
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6126
                MOVE_ZEN_HEADBUTT,
                MOVE_METAL_CLAW,
                MOVE_HONE_CLAWS,
                MOVE_MAGNET_RISE,
            },
            },
        },
    },
#line 6131
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119] =
    {
#line 6132
        .trainerName = _("SAMUEL"),
#line 6133
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6134
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6136
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6137
        .doubleBattle = FALSE,
#line 6138
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 6140
            .species = SPECIES_SLOWPOKE,
#line 6140
            .gender = TRAINER_MON_MALE,
#line 6140
            .heldItem = ITEM_LIFE_ORB,
#line 6144
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6141
            .ability = ABILITY_REGENERATOR,
#line 6142
            .lvl = 47,
#line 6143
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6145
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
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
            .lvl = 47,
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
            .species = SPECIES_GLIGAR,
#line 6159
            .gender = TRAINER_MON_FEMALE,
#line 6159
            .heldItem = ITEM_RAZOR_FANG,
#line 6163
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6160
            .ability = ABILITY_HYPER_CUTTER,
#line 6161
            .lvl = 47,
#line 6162
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6164
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6169
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6169
            .heldItem = ITEM_ASSAULT_VEST,
#line 6173
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6170
            .ability = ABILITY_CLEAR_BODY,
#line 6171
            .lvl = 47,
#line 6172
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6173
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 6178
            .species = SPECIES_MURKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6178
            .heldItem = ITEM_FOCUS_SASH,
#line 6182
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6179
            .ability = ABILITY_PRANKSTER,
#line 6180
            .lvl = 47,
#line 6181
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6182
                MOVE_FOUL_PLAY,
                MOVE_DUAL_WINGBEAT,
                MOVE_CONFUSE_RAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 6187
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TREECKO] =
    {
#line 6188
        .trainerName = _("SAMUEL"),
#line 6189
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6190
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6192
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6193
        .doubleBattle = FALSE,
#line 6194
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6196
            .species = SPECIES_SLOWPOKE,
#line 6196
            .gender = TRAINER_MON_MALE,
#line 6200
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6197
            .ability = ABILITY_REGENERATOR,
#line 6198
            .lvl = 5,
#line 6199
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6201
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6205
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TREECKO] =
    {
#line 6206
        .trainerName = _("SAMUEL"),
#line 6207
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6208
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6210
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6211
        .doubleBattle = FALSE,
#line 6212
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6214
            .species = SPECIES_SLOWPOKE,
#line 6214
            .gender = TRAINER_MON_MALE,
#line 6214
            .heldItem = ITEM_FIGY_BERRY,
#line 6218
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6215
            .ability = ABILITY_REGENERATOR,
#line 6216
            .lvl = 24,
#line 6217
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6219
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6224
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6224
            .heldItem = ITEM_LUM_BERRY,
#line 6228
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6225
            .ability = ABILITY_REGENERATOR,
#line 6226
            .lvl = 24,
#line 6227
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6229
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6234
            .species = SPECIES_GLIGAR,
#line 6234
            .gender = TRAINER_MON_FEMALE,
#line 6234
            .heldItem = ITEM_RAZOR_FANG,
#line 6238
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6235
            .ability = ABILITY_HYPER_CUTTER,
#line 6236
            .lvl = 24,
#line 6237
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6239
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6245
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TREECKO] =
    {
#line 6246
        .trainerName = _("SAMUEL"),
#line 6247
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6248
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6250
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6251
        .doubleBattle = FALSE,
#line 6252
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6254
            .species = SPECIES_SLOWPOKE,
#line 6254
            .gender = TRAINER_MON_MALE,
#line 6254
            .heldItem = ITEM_LIFE_ORB,
#line 6258
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6255
            .ability = ABILITY_REGENERATOR,
#line 6256
            .lvl = 44,
#line 6257
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6259
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6264
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6264
            .heldItem = ITEM_ROCKY_HELMET,
#line 6267
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6265
            .ability = ABILITY_REGENERATOR,
#line 6267
            .lvl = 100,
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
            .lvl = 44,
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
            .lvl = 44,
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
        },
    },
#line 6291
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_103_TORCHIC] =
    {
#line 6292
        .trainerName = _("SAMUEL"),
#line 6293
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6294
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6296
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6297
        .doubleBattle = FALSE,
#line 6298
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6300
            .species = SPECIES_SLOWPOKE,
#line 6300
            .gender = TRAINER_MON_MALE,
#line 6304
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6301
            .ability = ABILITY_REGENERATOR,
#line 6302
            .lvl = 5,
#line 6303
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6305
                MOVE_TACKLE,
                MOVE_CURSE,
                MOVE_GROWL,
            },
            },
        },
    },
#line 6309
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_110_TORCHIC] =
    {
#line 6310
        .trainerName = _("SAMUEL"),
#line 6311
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6312
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6314
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6315
        .doubleBattle = FALSE,
#line 6316
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6318
            .species = SPECIES_SLOWPOKE,
#line 6318
            .gender = TRAINER_MON_MALE,
#line 6318
            .heldItem = ITEM_FIGY_BERRY,
#line 6322
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6319
            .ability = ABILITY_REGENERATOR,
#line 6320
            .lvl = 24,
#line 6321
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6323
                MOVE_YAWN,
                MOVE_WATER_PULSE,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 6328
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6328
            .heldItem = ITEM_LUM_BERRY,
#line 6332
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6329
            .ability = ABILITY_REGENERATOR,
#line 6330
            .lvl = 24,
#line 6331
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6333
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_CLEAR_SMOG,
            },
            },
            {
#line 6338
            .species = SPECIES_GLIGAR,
#line 6338
            .gender = TRAINER_MON_FEMALE,
#line 6338
            .heldItem = ITEM_RAZOR_FANG,
#line 6342
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6339
            .ability = ABILITY_HYPER_CUTTER,
#line 6340
            .lvl = 24,
#line 6341
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6343
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_POISON_TAIL,
            },
            },
        },
    },
#line 6349
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_ROUTE_119_TORCHIC] =
    {
#line 6350
        .trainerName = _("SAMUEL"),
#line 6351
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6352
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 6354
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6355
        .doubleBattle = FALSE,
#line 6356
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 6358
            .species = SPECIES_SLOWPOKE,
#line 6358
            .gender = TRAINER_MON_MALE,
#line 6358
            .heldItem = ITEM_LIFE_ORB,
#line 6362
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 6359
            .ability = ABILITY_REGENERATOR,
#line 6360
            .lvl = 44,
#line 6361
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6363
                MOVE_YAWN,
                MOVE_SLACK_OFF,
                MOVE_PSYCHIC,
                MOVE_SURF,
            },
            },
            {
#line 6368
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6368
            .heldItem = ITEM_ROCKY_HELMET,
#line 6371
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6369
            .ability = ABILITY_REGENERATOR,
#line 6371
            .lvl = 100,
#line 6370
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6371
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 6376
            .species = SPECIES_GLIGAR,
#line 6376
            .gender = TRAINER_MON_FEMALE,
#line 6376
            .heldItem = ITEM_RAZOR_FANG,
#line 6380
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 0, 31),
#line 6377
            .ability = ABILITY_HYPER_CUTTER,
#line 6378
            .lvl = 44,
#line 6379
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6381
                MOVE_TAUNT,
                MOVE_ACROBATICS,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 6386
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6386
            .heldItem = ITEM_ASSAULT_VEST,
#line 6390
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 6387
            .ability = ABILITY_CLEAR_BODY,
#line 6388
            .lvl = 44,
#line 6389
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 6390
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
        },
    },
#line 6395
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_MUDKIP] =
    {
#line 6396
        .trainerName = _("MAY"),
#line 6397
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6398
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6399
F_TRAINER_FEMALE | 
#line 6400
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6401
        .doubleBattle = FALSE,
#line 6402
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6404
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6406
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6405
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6408
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_MUDKIP] =
    {
#line 6409
        .trainerName = _("MAY"),
#line 6410
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6411
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6412
F_TRAINER_FEMALE | 
#line 6413
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6414
        .doubleBattle = FALSE,
#line 6415
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6417
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6419
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6418
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6421
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6423
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6422
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6425
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6427
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6426
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6429
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_MUDKIP] =
    {
#line 6430
        .trainerName = _("MAY"),
#line 6431
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6432
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6433
F_TRAINER_FEMALE | 
#line 6434
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6435
        .doubleBattle = FALSE,
#line 6436
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6438
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6440
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6439
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6442
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6444
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6443
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6446
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6448
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6447
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6450
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TREECKO] =
    {
#line 6451
        .trainerName = _("MAY"),
#line 6452
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6453
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6454
F_TRAINER_FEMALE | 
#line 6455
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6456
        .doubleBattle = FALSE,
#line 6457
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6459
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6461
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6460
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6463
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TREECKO] =
    {
#line 6464
        .trainerName = _("MAY"),
#line 6465
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6466
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6467
F_TRAINER_FEMALE | 
#line 6468
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6469
        .doubleBattle = FALSE,
#line 6470
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6472
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6474
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6473
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6476
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6478
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6477
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6480
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6482
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6481
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6484
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TREECKO] =
    {
#line 6485
        .trainerName = _("MAY"),
#line 6486
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6487
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6488
F_TRAINER_FEMALE | 
#line 6489
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6490
        .doubleBattle = FALSE,
#line 6491
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6493
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6495
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6494
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6497
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6499
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6498
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6501
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6503
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6502
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6505
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_103_TORCHIC] =
    {
#line 6506
        .trainerName = _("MAY"),
#line 6507
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6508
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6509
F_TRAINER_FEMALE | 
#line 6510
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6511
        .doubleBattle = FALSE,
#line 6512
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6514
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6516
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6515
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6518
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_110_TORCHIC] =
    {
#line 6519
        .trainerName = _("MAY"),
#line 6520
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6521
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6522
F_TRAINER_FEMALE | 
#line 6523
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6524
        .doubleBattle = FALSE,
#line 6525
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6527
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6529
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6528
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6531
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6533
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6532
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6535
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6537
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6536
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6539
    [DIFFICULTY_NORMAL][TRAINER_MAY_ROUTE_119_TORCHIC] =
    {
#line 6540
        .trainerName = _("MAY"),
#line 6541
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 6542
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 6543
F_TRAINER_FEMALE | 
#line 6544
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6545
        .doubleBattle = FALSE,
#line 6546
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6548
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6550
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6549
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6552
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6554
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6553
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6556
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6558
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6557
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6560
    [DIFFICULTY_NORMAL][TRAINER_ISAAC_1] =
    {
#line 6561
        .trainerName = _("ISAAC"),
#line 6562
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6563
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 6565
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6566
        .doubleBattle = FALSE,
#line 6567
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6569
            .species = SPECIES_RUFFLET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6571
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6570
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6573
            .species = SPECIES_EEVEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6575
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6574
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6577
            .species = SPECIES_PIDOVE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6579
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6578
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6581
            .species = SPECIES_MARACTUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6583
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6582
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6585
            .species = SPECIES_CHINGLING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6587
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6586
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6589
            .species = SPECIES_UNOWN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6591
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6590
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6593
    [DIFFICULTY_NORMAL][TRAINER_DAVIS] =
    {
#line 6594
        .trainerName = _("DAVIS"),
#line 6595
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 6596
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 6598
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6599
        .doubleBattle = FALSE,
#line 6600
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6602
            .species = SPECIES_LUXIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6604
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6603
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6606
    [DIFFICULTY_NORMAL][TRAINER_MITCHELL] =
    {
#line 6607
        .trainerName = _("MITCHELL"),
#line 6608
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6609
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 6611
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6612
        .doubleBattle = FALSE,
#line 6613
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6615
            .species = SPECIES_TOGEKISS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6617
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6616
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6619
            .species = SPECIES_BEEDRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6621
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6620
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6623
    [DIFFICULTY_NORMAL][TRAINER_LYDIA_1] =
    {
#line 6624
        .trainerName = _("LYDIA"),
#line 6625
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 6626
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 6627
F_TRAINER_FEMALE | 
#line 6628
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 6629
        .doubleBattle = FALSE,
#line 6630
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 6632
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6634
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6633
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6636
            .species = SPECIES_SANDSHREW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6638
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6637
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6640
            .species = SPECIES_RALTS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6642
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6641
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6644
            .species = SPECIES_LILLIPUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6645
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6648
            .species = SPECIES_SAWK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6649
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6652
            .species = SPECIES_LITWICK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6653
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6656
    [DIFFICULTY_NORMAL][TRAINER_HALLE] =
    {
#line 6657
        .trainerName = _("HALLE"),
#line 6658
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6659
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6660
F_TRAINER_FEMALE | 
#line 6661
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6662
        .items = { ITEM_FULL_RESTORE },
#line 6663
        .doubleBattle = FALSE,
#line 6664
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6666
            .species = SPECIES_EELEKTROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6668
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6667
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6670
            .species = SPECIES_EXPLOUD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6672
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6671
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6674
    [DIFFICULTY_NORMAL][TRAINER_GARRISON] =
    {
#line 6675
        .trainerName = _("GARRISON"),
#line 6676
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 6677
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 6679
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6680
        .doubleBattle = FALSE,
#line 6681
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6683
            .species = SPECIES_RELICANTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6685
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6684
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6687
    [DIFFICULTY_NORMAL][TRAINER_JACKSON_1] =
    {
#line 6688
        .trainerName = _("JACKSON"),
#line 6689
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6690
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6692
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6693
        .items = { ITEM_FULL_RESTORE },
#line 6694
        .doubleBattle = FALSE,
#line 6695
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6697
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6699
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6698
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6701
    [DIFFICULTY_NORMAL][TRAINER_LORENZO] =
    {
#line 6702
        .trainerName = _("LORENZO"),
#line 6703
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6704
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6706
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6707
        .items = { ITEM_FULL_RESTORE },
#line 6708
        .doubleBattle = FALSE,
#line 6709
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6711
            .species = SPECIES_MAGMAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6713
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6712
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6715
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6717
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6716
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6719
            .species = SPECIES_SYLVEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6721
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6720
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6723
    [DIFFICULTY_NORMAL][TRAINER_SEBASTIAN] =
    {
#line 6724
        .trainerName = _("SEBASTIAN"),
#line 6725
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6726
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_M,
        .encounterMusic_gender =
#line 6728
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6729
        .items = { ITEM_FULL_RESTORE },
#line 6730
        .doubleBattle = FALSE,
#line 6731
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6733
            .species = SPECIES_GABITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6735
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6734
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6737
    [DIFFICULTY_NORMAL][TRAINER_CATHERINE_1] =
    {
#line 6738
        .trainerName = _("CATHERINE"),
#line 6739
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6740
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6741
F_TRAINER_FEMALE | 
#line 6742
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6743
        .items = { ITEM_FULL_RESTORE },
#line 6744
        .doubleBattle = FALSE,
#line 6745
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6747
            .species = SPECIES_HARIYAMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6749
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6748
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6751
            .species = SPECIES_TANGROWTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6753
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6752
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6755
    [DIFFICULTY_NORMAL][TRAINER_JENNA] =
    {
#line 6756
        .trainerName = _("JENNA"),
#line 6757
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6758
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6759
F_TRAINER_FEMALE | 
#line 6760
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6761
        .items = { ITEM_FULL_RESTORE },
#line 6762
        .doubleBattle = FALSE,
#line 6763
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 6765
            .species = SPECIES_PIKACHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6767
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6766
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6769
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6771
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6770
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6773
            .species = SPECIES_KRICKETUNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6775
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6774
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6777
    [DIFFICULTY_NORMAL][TRAINER_SOPHIA] =
    {
#line 6778
        .trainerName = _("SOPHIA"),
#line 6779
        .trainerClass = TRAINER_CLASS_PKMN_RANGER,
#line 6780
        .trainerPic = TRAINER_PIC_POKEMON_RANGER_F,
        .encounterMusic_gender =
#line 6781
F_TRAINER_FEMALE | 
#line 6782
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6783
        .items = { ITEM_FULL_RESTORE },
#line 6784
        .doubleBattle = FALSE,
#line 6785
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6787
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6789
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6788
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6791
            .species = SPECIES_ROSELIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6793
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6792
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6795
    [DIFFICULTY_NORMAL][TRAINER_JULIO] =
    {
#line 6796
        .trainerName = _("JULIO"),
#line 6797
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 6798
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 6800
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6801
        .doubleBattle = FALSE,
#line 6802
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6804
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6806
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6805
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6808
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SEAFLOOR_CAVERN_5] =
    {
#line 6809
        .trainerName = _("GRUNT"),
#line 6810
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6811
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_M,
        .encounterMusic_gender =
#line 6813
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6814
        .doubleBattle = FALSE,
#line 6815
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6817
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6819
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6818
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6821
            .species = SPECIES_CORPHISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6823
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6822
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6825
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_UNUSED] =
    {
#line 6826
        .trainerName = _("GRUNT"),
#line 6827
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6828
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6829
F_TRAINER_FEMALE | 
#line 6830
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6831
        .doubleBattle = FALSE,
#line 6832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6834
            .species = SPECIES_WAILMER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6835
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6838
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6840
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6839
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6842
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_PYRE_4] =
    {
#line 6843
        .trainerName = _("GRUNT"),
#line 6844
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 6845
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 6846
F_TRAINER_FEMALE | 
#line 6847
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 6848
        .doubleBattle = FALSE,
#line 6849
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6851
            .species = SPECIES_CACNEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6852
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6855
            .species = SPECIES_SPHEAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6857
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6856
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6859
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_JAGGED_PASS] =
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6868
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6870
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6869
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6872
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6874
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 6873
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6876
    [DIFFICULTY_NORMAL][TRAINER_MARC] =
    {
#line 6877
        .trainerName = _("MARC"),
#line 6878
        .trainerClass = TRAINER_CLASS_HIKER,
#line 6879
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 6881
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 6882
        .doubleBattle = FALSE,
#line 6883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6885
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6887
            .iv = TRAINER_PARTY_IVS(14, 14, 14, 14, 14, 14),
#line 6886
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6889
            .species = SPECIES_OMANYTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6891
            .iv = TRAINER_PARTY_IVS(15, 15, 15, 15, 15, 15),
#line 6890
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6893
    [DIFFICULTY_NORMAL][TRAINER_BRENDEN] =
    {
#line 6894
        .trainerName = _("BRENDEN"),
#line 6895
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 6896
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 6898
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 6899
        .doubleBattle = FALSE,
#line 6900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6902
            .species = SPECIES_WOOPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6904
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6903
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6906
    [DIFFICULTY_NORMAL][TRAINER_LILITH] =
    {
#line 6907
        .trainerName = _("LILITH"),
#line 6908
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 6909
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 6910
F_TRAINER_FEMALE | 
#line 6911
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6912
        .doubleBattle = FALSE,
#line 6913
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6915
            .species = SPECIES_BASCULIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6917
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 6916
            .lvl = 19,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6919
    [DIFFICULTY_NORMAL][TRAINER_CRISTIAN] =
    {
#line 6920
        .trainerName = _("CRISTIAN"),
#line 6921
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 6922
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 6924
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 6925
        .doubleBattle = FALSE,
#line 6926
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6928
            .species = SPECIES_LOMBRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6930
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 6929
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6932
    [DIFFICULTY_NORMAL][TRAINER_SYLVIA] =
    {
#line 6933
        .trainerName = _("SYLVIA"),
#line 6934
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 6935
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 6936
F_TRAINER_FEMALE | 
#line 6937
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 6938
        .doubleBattle = FALSE,
#line 6939
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6941
            .species = SPECIES_MR_MIME,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6943
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6942
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6945
    [DIFFICULTY_NORMAL][TRAINER_LEONARDO] =
    {
#line 6946
        .trainerName = _("LEONARDO"),
#line 6947
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6948
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6950
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6951
        .doubleBattle = FALSE,
#line 6952
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6954
            .species = SPECIES_SWANNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6956
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6955
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6958
    [DIFFICULTY_NORMAL][TRAINER_ATHENA] =
    {
#line 6959
        .trainerName = _("ATHENA"),
#line 6960
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 6961
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 6962
F_TRAINER_FEMALE | 
#line 6963
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 6964
        .items = { ITEM_HYPER_POTION },
#line 6965
        .doubleBattle = FALSE,
#line 6966
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 6968
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6970
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6969
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 6972
            .species = SPECIES_SIMISEAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6974
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 6973
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6977
    [DIFFICULTY_NORMAL][TRAINER_HARRISON] =
    {
#line 6978
        .trainerName = _("HARRISON"),
#line 6979
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 6980
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 6982
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 6983
        .doubleBattle = FALSE,
#line 6984
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6986
            .species = SPECIES_SEISMITOAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 6988
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 6987
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 6990
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MT_CHIMNEY_2] =
    {
#line 6991
        .trainerName = _("GRUNT"),
#line 6992
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 6993
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 6995
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 6996
        .doubleBattle = FALSE,
#line 6997
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 6999
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7001
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7000
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7003
    [DIFFICULTY_NORMAL][TRAINER_CLARENCE] =
    {
#line 7004
        .trainerName = _("CLARENCE"),
#line 7005
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 7006
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 7008
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7009
        .doubleBattle = FALSE,
#line 7010
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7012
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7013
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7016
    [DIFFICULTY_NORMAL][TRAINER_TERRY] =
    {
#line 7017
        .trainerName = _("TERRY"),
#line 7018
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7019
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7020
F_TRAINER_FEMALE | 
#line 7021
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7022
        .doubleBattle = FALSE,
#line 7023
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7025
            .species = SPECIES_GIRAFARIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7027
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7026
            .lvl = 37,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7029
    [DIFFICULTY_NORMAL][TRAINER_NATE] =
    {
#line 7030
        .trainerName = _("NATE"),
#line 7031
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7032
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7034
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7035
        .doubleBattle = FALSE,
#line 7036
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7038
            .species = SPECIES_TOGETIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7040
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7039
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7042
    [DIFFICULTY_NORMAL][TRAINER_KATHLEEN] =
    {
#line 7043
        .trainerName = _("KATHLEEN"),
#line 7044
        .trainerClass = TRAINER_CLASS_HEX_MANIAC,
#line 7045
        .trainerPic = TRAINER_PIC_HEX_MANIAC,
        .encounterMusic_gender =
#line 7046
F_TRAINER_FEMALE | 
#line 7047
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7048
        .doubleBattle = FALSE,
#line 7049
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7051
            .species = SPECIES_KIRLIA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7053
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7052
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7055
    [DIFFICULTY_NORMAL][TRAINER_CLIFFORD] =
    {
#line 7056
        .trainerName = _("CLIFFORD"),
#line 7057
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 7058
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 7060
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 7061
        .doubleBattle = FALSE,
#line 7062
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7064
            .species = SPECIES_CLEFAIRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7066
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7065
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7068
    [DIFFICULTY_NORMAL][TRAINER_NICHOLAS] =
    {
#line 7069
        .trainerName = _("NICHOLAS"),
#line 7070
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7071
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 7073
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7074
        .doubleBattle = FALSE,
#line 7075
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7077
            .species = SPECIES_MEGANIUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7079
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7078
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7081
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_3] =
    {
#line 7082
        .trainerName = _("GRUNT"),
#line 7083
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7084
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 7085
F_TRAINER_FEMALE | 
#line 7086
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7087
        .doubleBattle = FALSE,
#line 7088
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7090
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7092
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7091
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7094
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7096
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7095
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7098
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_4] =
    {
#line 7099
        .trainerName = _("GRUNT"),
#line 7100
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7101
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7103
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7104
        .doubleBattle = FALSE,
#line 7105
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7107
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7109
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7108
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7111
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_5] =
    {
#line 7112
        .trainerName = _("GRUNT"),
#line 7113
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7114
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7116
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7117
        .doubleBattle = FALSE,
#line 7118
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7120
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7122
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7121
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7124
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_6] =
    {
#line 7125
        .trainerName = _("GRUNT"),
#line 7126
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7127
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7129
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7130
        .doubleBattle = FALSE,
#line 7131
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7133
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7135
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7134
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7137
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_SPACE_CENTER_7] =
    {
#line 7138
        .trainerName = _("GRUNT"),
#line 7139
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 7140
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 7142
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7143
        .doubleBattle = FALSE,
#line 7144
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7146
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7148
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7147
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7150
    [DIFFICULTY_NORMAL][TRAINER_MACEY] =
    {
#line 7151
        .trainerName = _("MACEY"),
#line 7152
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 7153
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 7154
F_TRAINER_FEMALE | 
#line 7155
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7156
        .doubleBattle = FALSE,
#line 7157
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7159
            .species = SPECIES_JIGGLYPUFF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7161
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7160
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7163
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO] =
    {
#line 7164
        .trainerName = _("SAMUEL"),
#line 7165
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7166
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7168
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7169
        .doubleBattle = FALSE,
#line 7170
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7172
            .species = SPECIES_SLOWPOKE,
#line 7172
            .gender = TRAINER_MON_MALE,
#line 7176
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7173
            .ability = ABILITY_REGENERATOR,
#line 7174
            .lvl = 16,
#line 7175
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7177
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7182
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7186
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7183
            .ability = ABILITY_REGENERATOR,
#line 7184
            .lvl = 16,
#line 7185
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7186
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
            },
            },
            {
#line 7190
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7190
            .heldItem = ITEM_RAZOR_FANG,
#line 7194
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7191
            .ability = ABILITY_HYPER_CUTTER,
#line 7192
            .lvl = 16,
#line 7193
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7194
                MOVE_FURY_CUTTER,
                MOVE_POISON_STING,
            },
            },
        },
    },
#line 7197
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_MUDKIP] =
    {
#line 7198
        .trainerName = _("SAMUEL"),
#line 7199
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7200
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7202
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7203
        .doubleBattle = FALSE,
#line 7204
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7206
            .species = SPECIES_SLOWPOKE,
#line 7206
            .gender = TRAINER_MON_MALE,
#line 7210
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7207
            .ability = ABILITY_REGENERATOR,
#line 7208
            .lvl = 16,
#line 7209
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7211
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7216
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7220
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7217
            .ability = ABILITY_REGENERATOR,
#line 7218
            .lvl = 16,
#line 7219
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7220
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7227
    [DIFFICULTY_NORMAL][TRAINER_PAXTON] =
    {
#line 7228
        .trainerName = _("PAXTON"),
#line 7229
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 7230
        .trainerPic = TRAINER_PIC_EXPERT_M,
        .encounterMusic_gender =
#line 7232
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7233
        .doubleBattle = FALSE,
#line 7234
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7236
            .species = SPECIES_GIGALITH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7238
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7237
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7240
            .species = SPECIES_GOTHITELLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7242
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7241
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7244
    [DIFFICULTY_NORMAL][TRAINER_ISABELLA] =
    {
#line 7245
        .trainerName = _("ISABELLA"),
#line 7246
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 7247
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 7248
F_TRAINER_FEMALE | 
#line 7249
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 7250
        .doubleBattle = FALSE,
#line 7251
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7253
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7255
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7254
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7257
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_WEATHER_INST_5] =
    {
#line 7258
        .trainerName = _("GRUNT"),
#line 7259
        .trainerClass = TRAINER_CLASS_TEAM_AQUA,
#line 7260
        .trainerPic = TRAINER_PIC_AQUA_GRUNT_F,
        .encounterMusic_gender =
#line 7261
F_TRAINER_FEMALE | 
#line 7262
            TRAINER_ENCOUNTER_MUSIC_AQUA,
#line 7263
        .doubleBattle = FALSE,
#line 7264
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7266
            .species = SPECIES_CACTURNE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7268
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7267
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7270
            .species = SPECIES_MUK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7272
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7271
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7274
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MT_CHIMNEY] =
    {
#line 7275
        .trainerName = _("TABITHA"),
#line 7276
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 7277
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 7279
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7280
        .doubleBattle = FALSE,
#line 7281
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7283
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7286
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7284
            .ability = ABILITY_DROUGHT,
#line 7285
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7287
                MOVE_RAPID_SPIN,
                MOVE_FLAME_WHEEL,
                MOVE_SMOG,
                MOVE_PROTECT,
            },
            },
            {
#line 7292
            .species = SPECIES_KOFFING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7292
            .heldItem = ITEM_LUM_BERRY,
#line 7295
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7293
            .ability = ABILITY_LEVITATE,
#line 7294
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7296
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_ASSURANCE,
            },
            },
            {
#line 7300
            .species = SPECIES_BALTOY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7300
            .heldItem = ITEM_SITRUS_BERRY,
#line 7303
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7301
            .ability = ABILITY_LEVITATE,
#line 7302
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7304
                MOVE_EARTH_POWER,
                MOVE_LAVA_PLUME,
                MOVE_FOCUS_ENERGY,
            },
            },
            {
#line 7308
            .species = SPECIES_NUMEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7308
            .heldItem = ITEM_LUM_BERRY,
#line 7311
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7309
            .ability = ABILITY_OWN_TEMPO,
#line 7310
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7312
                MOVE_EARTH_POWER,
                MOVE_EXTRASENSORY,
                MOVE_SELF_DESTRUCT,
                MOVE_COSMIC_POWER,
            },
            },
        },
    },
#line 7317
    [DIFFICULTY_NORMAL][TRAINER_JONATHAN] =
    {
#line 7318
        .trainerName = _("JONATHAN"),
#line 7319
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7320
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7322
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7323
        .items = { ITEM_HYPER_POTION },
#line 7324
        .doubleBattle = FALSE,
#line 7325
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7327
            .species = SPECIES_PIDGEOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7329
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7328
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7331
            .species = SPECIES_STARAPTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7333
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7332
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7335
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_RUSTBORO_TORCHIC] =
    {
#line 7336
        .trainerName = _("SAMUEL"),
#line 7337
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7338
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 7340
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7341
        .doubleBattle = FALSE,
#line 7342
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7344
            .species = SPECIES_SLOWPOKE,
#line 7344
            .gender = TRAINER_MON_MALE,
#line 7348
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 7345
            .ability = ABILITY_REGENERATOR,
#line 7346
            .lvl = 16,
#line 7347
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7349
                MOVE_YAWN,
                MOVE_WATER_GUN,
                MOVE_CONFUSION,
                MOVE_DISABLE,
            },
            },
            {
#line 7354
            .species = SPECIES_FOONGUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7358
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7355
            .ability = ABILITY_REGENERATOR,
#line 7356
            .lvl = 16,
#line 7357
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7358
                MOVE_MEGA_DRAIN,
                MOVE_SYNTHESIS,
                MOVE_STUN_SPORE,
                MOVE_ASTONISH,
            },
            },
        },
    },
#line 7365
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_MUDKIP] =
    {
#line 7366
        .trainerName = _("MAY"),
#line 7367
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 7368
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 7369
F_TRAINER_FEMALE | 
#line 7370
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7371
        .doubleBattle = FALSE,
#line 7372
        .aiFlags = AI_FLAG_SMART_TRAINER | AI_FLAG_PREDICTION,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7374
            .species = SPECIES_WINGULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7376
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 7375
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7378
            .species = SPECIES_TREECKO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7380
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7379
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7382
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MAGMA_HIDEOUT] =
    {
#line 7383
        .trainerName = _("MAXIE"),
#line 7384
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7385
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7387
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7388
        .doubleBattle = FALSE,
#line 7389
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 7391
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7391
            .heldItem = ITEM_IRON_BALL,
#line 7394
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7392
            .ability = ABILITY_HEAVY_METAL,
#line 7393
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7394
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 7399
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7402
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7400
            .ability = ABILITY_INNER_FOCUS,
#line 7401
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7402
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
            {
#line 7407
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7407
            .heldItem = ITEM_MUSCLE_BAND,
#line 7410
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7408
            .ability = ABILITY_IMMUNITY,
#line 7409
            .lvl = 52,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7410
                MOVE_CLOSE_COMBAT,
                MOVE_SWORDS_DANCE,
                MOVE_CRUSH_CLAW,
                MOVE_POWER_TRIP,
            },
            },
            {
#line 7415
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7415
            .heldItem = ITEM_EXPERT_BELT,
#line 7418
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7416
            .ability = ABILITY_UNNERVE,
#line 7417
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7418
                MOVE_FLAMETHROWER,
                MOVE_DARK_PULSE,
                MOVE_NASTY_PLOT,
                MOVE_TORMENT,
            },
            },
            {
#line 7423
            .species = SPECIES_RHYDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7423
            .heldItem = ITEM_ROCKY_HELMET,
#line 7426
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 7424
            .ability = ABILITY_ROCK_HEAD,
#line 7425
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7426
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_THUNDER_PUNCH,
                MOVE_FIRE_PUNCH,
            },
            },
        },
    },
#line 7431
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MT_CHIMNEY] =
    {
#line 7432
        .trainerName = _("MAXIE"),
#line 7433
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 7434
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 7436
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 7437
        .doubleBattle = FALSE,
#line 7438
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7440
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7443
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7441
            .ability = ABILITY_HEAVY_METAL,
#line 7442
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7444
                MOVE_IRON_HEAD,
                MOVE_ROCK_SLIDE,
                MOVE_PROTECT,
                MOVE_ROAR,
            },
            },
            {
#line 7449
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7449
            .heldItem = ITEM_LUM_BERRY,
#line 7452
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7450
            .ability = ABILITY_IMMUNITY,
#line 7451
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7453
                MOVE_CRUSH_CLAW,
                MOVE_QUICK_ATTACK,
                MOVE_LEER,
                MOVE_NIGHT_SLASH,
            },
            },
            {
#line 7458
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7458
            .heldItem = ITEM_LUM_BERRY,
#line 7461
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7459
            .ability = ABILITY_UNNERVE,
#line 7460
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7462
                MOVE_INCINERATE,
                MOVE_BEAT_UP,
                MOVE_SMOG,
                MOVE_LEER,
            },
            },
            {
#line 7467
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7467
            .heldItem = ITEM_ROCKY_HELMET,
#line 7470
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 7468
            .ability = ABILITY_ROCK_HEAD,
#line 7469
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7471
                MOVE_DRILL_RUN,
                MOVE_ROCK_BLAST,
                MOVE_HORN_ATTACK,
                MOVE_TAIL_WHIP,
            },
            },
        },
    },
#line 7477
    [DIFFICULTY_NORMAL][TRAINER_TIANA] =
    {
#line 7478
        .trainerName = _("TIANA"),
#line 7479
        .trainerClass = TRAINER_CLASS_LASS,
#line 7480
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7481
F_TRAINER_FEMALE | 
#line 7482
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7483
        .doubleBattle = FALSE,
#line 7484
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7486
            .species = SPECIES_RIOLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7488
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7487
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7490
            .species = SPECIES_CRYOGONAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7492
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7491
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7494
    [DIFFICULTY_NORMAL][TRAINER_HALEY_1] =
    {
#line 7495
        .trainerName = _("HALEY"),
#line 7496
        .trainerClass = TRAINER_CLASS_LASS,
#line 7497
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7498
F_TRAINER_FEMALE | 
#line 7499
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7500
        .doubleBattle = FALSE,
#line 7501
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7503
            .species = SPECIES_KANGASKHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7505
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7504
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7507
            .species = SPECIES_WURMPLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7509
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7508
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7511
    [DIFFICULTY_NORMAL][TRAINER_JANICE] =
    {
#line 7512
        .trainerName = _("JANICE"),
#line 7513
        .trainerClass = TRAINER_CLASS_LASS,
#line 7514
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7515
F_TRAINER_FEMALE | 
#line 7516
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7517
        .doubleBattle = FALSE,
#line 7518
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7520
            .species = SPECIES_GROWLITHE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7522
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7521
            .lvl = 17,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7524
    [DIFFICULTY_NORMAL][TRAINER_VIVI] =
    {
#line 7525
        .trainerName = _("VIVI"),
#line 7526
        .trainerClass = TRAINER_CLASS_WINSTRATE,
#line 7527
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7528
F_TRAINER_FEMALE | 
#line 7529
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7530
        .doubleBattle = FALSE,
#line 7531
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7533
            .species = SPECIES_AXEW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7535
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7534
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7537
            .species = SPECIES_SPINARAK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7539
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7538
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7541
            .species = SPECIES_DURANT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7543
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7542
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7545
    [DIFFICULTY_NORMAL][TRAINER_SALLY] =
    {
#line 7546
        .trainerName = _("SALLY"),
#line 7547
        .trainerClass = TRAINER_CLASS_LASS,
#line 7548
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7549
F_TRAINER_FEMALE | 
#line 7550
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7551
        .doubleBattle = FALSE,
#line 7552
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7554
            .species = SPECIES_PICHU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7556
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7555
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7558
    [DIFFICULTY_NORMAL][TRAINER_ROBIN] =
    {
#line 7559
        .trainerName = _("ROBIN"),
#line 7560
        .trainerClass = TRAINER_CLASS_LASS,
#line 7561
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7562
F_TRAINER_FEMALE | 
#line 7563
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7564
        .doubleBattle = FALSE,
#line 7565
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7567
            .species = SPECIES_CATERPIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7569
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7568
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7571
            .species = SPECIES_VULLABY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7573
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7572
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7575
            .species = SPECIES_PAWNIARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7577
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7576
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7579
    [DIFFICULTY_NORMAL][TRAINER_ANDREA] =
    {
#line 7580
        .trainerName = _("ANDREA"),
#line 7581
        .trainerClass = TRAINER_CLASS_LASS,
#line 7582
        .trainerPic = TRAINER_PIC_LASS,
        .encounterMusic_gender =
#line 7583
F_TRAINER_FEMALE | 
#line 7584
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7585
        .doubleBattle = FALSE,
#line 7586
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7588
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7590
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7589
            .lvl = 58,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7592
    [DIFFICULTY_NORMAL][TRAINER_CRISSY] =
    {
#line 7593
        .trainerName = _("CRISSY"),
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
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7603
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7602
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7605
            .species = SPECIES_ROTOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7607
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7606
            .lvl = 56,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7609
    [DIFFICULTY_NORMAL][TRAINER_RICK] =
    {
#line 7610
        .trainerName = _("RICK"),
#line 7611
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7612
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7614
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7615
        .doubleBattle = FALSE,
#line 7616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7618
            .species = SPECIES_PORYGON,
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
            .species = SPECIES_MANTYKE,
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
    [DIFFICULTY_NORMAL][TRAINER_LYLE] =
    {
#line 7627
        .trainerName = _("LYLE"),
#line 7628
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7629
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7631
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7632
        .doubleBattle = FALSE,
#line 7633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 7635
            .species = SPECIES_GLIGAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7636
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7639
            .species = SPECIES_EXEGGCUTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7640
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7643
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7645
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7644
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7647
            .species = SPECIES_DRILBUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7649
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7648
            .lvl = 8,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7651
    [DIFFICULTY_NORMAL][TRAINER_JOSE] =
    {
#line 7652
        .trainerName = _("JOSE"),
#line 7653
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7654
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7656
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7657
        .doubleBattle = FALSE,
#line 7658
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7660
            .species = SPECIES_KABUTO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7662
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7661
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7664
            .species = SPECIES_SWABLU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7666
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 7665
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7668
    [DIFFICULTY_NORMAL][TRAINER_DOUG] =
    {
#line 7669
        .trainerName = _("DOUG"),
#line 7670
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7671
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7673
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7674
        .doubleBattle = FALSE,
#line 7675
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7677
            .species = SPECIES_LEDIAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7678
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7681
            .species = SPECIES_METANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7682
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7685
    [DIFFICULTY_NORMAL][TRAINER_GREG] =
    {
#line 7686
        .trainerName = _("GREG"),
#line 7687
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7688
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7690
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7691
        .doubleBattle = FALSE,
#line 7692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7694
            .species = SPECIES_CINCCINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7695
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7698
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7699
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7702
    [DIFFICULTY_NORMAL][TRAINER_KENT] =
    {
#line 7703
        .trainerName = _("KENT"),
#line 7704
        .trainerClass = TRAINER_CLASS_BUG_CATCHER,
#line 7705
        .trainerPic = TRAINER_PIC_BUG_CATCHER,
        .encounterMusic_gender =
#line 7707
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 7708
        .doubleBattle = FALSE,
#line 7709
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7711
            .species = SPECIES_HITMONTOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7713
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7712
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7715
    [DIFFICULTY_NORMAL][TRAINER_JAMES_1] =
    {
#line 7716
        .trainerName = _("JAMES"),
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
            .species = SPECIES_HOPPIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7726
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7725
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7728
            .species = SPECIES_MIENFOO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7730
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7729
            .lvl = 9,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7732
    [DIFFICULTY_NORMAL][TRAINER_BRICE] =
    {
#line 7733
        .trainerName = _("BRICE"),
#line 7734
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7735
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7737
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7738
        .doubleBattle = FALSE,
#line 7739
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7741
            .species = SPECIES_PACHIRISU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7743
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7742
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7745
            .species = SPECIES_CROAGUNK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7747
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7746
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7749
    [DIFFICULTY_NORMAL][TRAINER_TRENT_1] =
    {
#line 7750
        .trainerName = _("TRENT"),
#line 7751
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7752
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7754
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7755
        .doubleBattle = FALSE,
#line 7756
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7758
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7760
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7759
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7762
            .species = SPECIES_BONSLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7764
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7763
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7766
            .species = SPECIES_CRANIDOS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7768
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7767
            .lvl = 24,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7770
    [DIFFICULTY_NORMAL][TRAINER_LENNY] =
    {
#line 7771
        .trainerName = _("LENNY"),
#line 7772
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7773
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7775
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7776
        .doubleBattle = FALSE,
#line 7777
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7779
            .species = SPECIES_CHATOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7781
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7780
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7783
            .species = SPECIES_MILTANK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7785
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7784
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7787
    [DIFFICULTY_NORMAL][TRAINER_LUCAS_1] =
    {
#line 7788
        .trainerName = _("LUCAS"),
#line 7789
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7790
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7792
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7793
        .doubleBattle = FALSE,
#line 7794
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7796
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7797
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7800
            .species = SPECIES_SHELMET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7802
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7801
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7804
    [DIFFICULTY_NORMAL][TRAINER_ALAN] =
    {
#line 7805
        .trainerName = _("ALAN"),
#line 7806
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7807
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7809
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7810
        .doubleBattle = FALSE,
#line 7811
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 7813
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7814
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7817
            .species = SPECIES_NOSEPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7819
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7818
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7821
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7823
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7822
            .lvl = 22,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7825
    [DIFFICULTY_NORMAL][TRAINER_CLARK] =
    {
#line 7826
        .trainerName = _("CLARK"),
#line 7827
        .trainerClass = TRAINER_CLASS_HIKER,
#line 7828
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 7830
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 7831
        .doubleBattle = FALSE,
#line 7832
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7834
            .species = SPECIES_MUNNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7836
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7835
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7838
    [DIFFICULTY_NORMAL][TRAINER_ERIC] =
    {
#line 7839
        .trainerName = _("ERIC"),
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
            .species = SPECIES_PIPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7849
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7848
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7851
            .species = SPECIES_SEEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7853
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7852
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7855
    [DIFFICULTY_NORMAL][TRAINER_MIKE_1] =
    {
#line 7856
        .trainerName = _("MIKE"),
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
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7864
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7866
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7865
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7867
                MOVE_GUST,
                MOVE_GROWL,
            },
            },
            {
#line 7870
            .species = SPECIES_POOCHYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7872
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7871
            .lvl = 10,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 7873
                MOVE_BITE,
                MOVE_SCARY_FACE,
            },
            },
        },
    },
#line 7876
    [DIFFICULTY_NORMAL][TRAINER_DEZ_AND_LUKE] =
    {
#line 7877
        .trainerName = _("DEZ & LUKE"),
#line 7878
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7879
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7881
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7882
        .doubleBattle = TRUE,
#line 7883
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7885
            .species = SPECIES_SUNFLORA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7887
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7886
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7889
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7891
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7890
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7893
    [DIFFICULTY_NORMAL][TRAINER_LEA_AND_JED] =
    {
#line 7894
        .trainerName = _("LEA & JED"),
#line 7895
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7896
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7898
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7899
        .doubleBattle = TRUE,
#line 7900
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7902
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7904
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7903
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7906
            .species = SPECIES_LUVDISC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7908
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7907
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7910
    [DIFFICULTY_NORMAL][TRAINER_KIRA_AND_DAN_1] =
    {
#line 7911
        .trainerName = _("KIRA & DAN"),
#line 7912
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 7913
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 7915
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 7916
        .doubleBattle = TRUE,
#line 7917
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7919
            .species = SPECIES_VAPOREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7921
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7920
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7923
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7925
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7924
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7927
    [DIFFICULTY_NORMAL][TRAINER_JOHANNA] =
    {
#line 7928
        .trainerName = _("JOHANNA"),
#line 7929
        .trainerClass = TRAINER_CLASS_BEAUTY,
#line 7930
        .trainerPic = TRAINER_PIC_BEAUTY,
        .encounterMusic_gender =
#line 7931
F_TRAINER_FEMALE | 
#line 7932
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 7933
        .doubleBattle = FALSE,
#line 7934
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7936
            .species = SPECIES_CORSOLA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7938
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7937
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7940
    [DIFFICULTY_NORMAL][TRAINER_GERALD] =
    {
#line 7941
        .trainerName = _("GERALD"),
#line 7942
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 7943
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 7945
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 7946
        .items = { ITEM_HYPER_POTION },
#line 7947
        .doubleBattle = FALSE,
#line 7948
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7950
            .species = SPECIES_DRATINI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7952
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7951
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7955
    [DIFFICULTY_NORMAL][TRAINER_VIVIAN] =
    {
#line 7956
        .trainerName = _("VIVIAN"),
#line 7957
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7958
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7959
F_TRAINER_FEMALE | 
#line 7960
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7961
        .doubleBattle = FALSE,
#line 7962
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7964
            .species = SPECIES_JOLTEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7966
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7965
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7968
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7970
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7969
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7972
    [DIFFICULTY_NORMAL][TRAINER_DANIELLE] =
    {
#line 7973
        .trainerName = _("DANIELLE"),
#line 7974
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 7975
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 7976
F_TRAINER_FEMALE | 
#line 7977
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 7978
        .doubleBattle = FALSE,
#line 7979
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 7981
            .species = SPECIES_DEINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7983
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 7982
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 7985
    [DIFFICULTY_NORMAL][TRAINER_HIDEO] =
    {
#line 7986
        .trainerName = _("HIDEO"),
#line 7987
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 7988
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 7990
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 7991
        .doubleBattle = FALSE,
#line 7992
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 7994
            .species = SPECIES_LUCARIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 7996
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7995
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 7998
            .species = SPECIES_GOTHORITA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8000
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 7999
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8002
    [DIFFICULTY_NORMAL][TRAINER_KEIGO] =
    {
#line 8003
        .trainerName = _("KEIGO"),
#line 8004
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8005
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8007
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8008
        .doubleBattle = FALSE,
#line 8009
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8011
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8013
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8012
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8015
            .species = SPECIES_VENOMOTH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8017
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8016
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8019
    [DIFFICULTY_NORMAL][TRAINER_RILEY] =
    {
#line 8020
        .trainerName = _("RILEY"),
#line 8021
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 8022
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 8024
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8025
        .doubleBattle = FALSE,
#line 8026
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_TRY_TO_FAINT,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8028
            .species = SPECIES_GROTLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8030
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8029
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8032
            .species = SPECIES_SWELLOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8034
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8033
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8036
    [DIFFICULTY_NORMAL][TRAINER_FLINT] =
    {
#line 8037
        .trainerName = _("FLINT"),
#line 8038
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8039
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8041
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8042
        .doubleBattle = FALSE,
#line 8043
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8045
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8047
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8046
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8049
            .species = SPECIES_FORRETRESS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8051
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8050
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8053
    [DIFFICULTY_NORMAL][TRAINER_ASHLEY] =
    {
#line 8054
        .trainerName = _("ASHLEY"),
#line 8055
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8056
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8057
F_TRAINER_FEMALE | 
#line 8058
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8059
        .doubleBattle = FALSE,
#line 8060
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8062
            .species = SPECIES_BASTIODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8064
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8063
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8066
            .species = SPECIES_PROBOPASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8068
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8067
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8070
            .species = SPECIES_ESCAVALIER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8072
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8071
            .lvl = 46,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8074
    [DIFFICULTY_NORMAL][TRAINER_WALLY_MAUVILLE] =
    {
#line 8075
        .trainerName = _("WALLY"),
#line 8076
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8077
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 8079
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8080
        .doubleBattle = FALSE,
#line 8081
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8083
            .species = SPECIES_HIPPOPOTAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8085
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8084
            .ability = ABILITY_SAND_STREAM,
#line 8085
            .lvl = 100,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8085
                MOVE_SAND_ATTACK,
            },
            },
            {
#line 8087
            .species = SPECIES_ARON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8087
            .heldItem = ITEM_SHELL_BELL,
#line 8091
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 0, 31, 31),
#line 8088
            .ability = ABILITY_STURDY,
#line 8089
            .lvl = 1,
#line 8090
            .nature = NATURE_BOLD,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8092
                MOVE_ENDEAVOR,
            },
            },
        },
    },
#line 8095
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE] =
    {
#line 8096
        .trainerName = _("SAMUEL"),
#line 8097
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8098
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8100
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8101
        .doubleBattle = TRUE,
#line 8102
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8104
            .species = SPECIES_SLOWKING,
#line 8104
            .gender = TRAINER_MON_MALE,
#line 8104
            .heldItem = ITEM_LIFE_ORB,
#line 8108
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8105
            .ability = ABILITY_REGENERATOR,
#line 8106
            .lvl = 54,
#line 8107
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8109
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8114
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8114
            .heldItem = ITEM_ROCKY_HELMET,
#line 8118
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8115
            .ability = ABILITY_REGENERATOR,
#line 8116
            .lvl = 54,
#line 8117
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8118
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8123
            .species = SPECIES_GLISCOR,
#line 8123
            .gender = TRAINER_MON_FEMALE,
#line 8123
            .heldItem = ITEM_TOXIC_ORB,
#line 8127
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8124
            .ability = ABILITY_POISON_HEAL,
#line 8125
            .lvl = 54,
#line 8126
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8128
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8133
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8133
            .heldItem = ITEM_ASSAULT_VEST,
#line 8137
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8134
            .ability = ABILITY_CLEAR_BODY,
#line 8135
            .lvl = 54,
#line 8136
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8138
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8143
            .species = SPECIES_HONCHKROW,
#line 8143
            .gender = TRAINER_MON_MALE,
#line 8143
            .heldItem = ITEM_FOCUS_SASH,
#line 8147
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8144
            .ability = ABILITY_MOXIE,
#line 8145
            .lvl = 54,
#line 8146
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8148
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_FOUL_PLAY,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8154
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TREECKO] =
    {
#line 8155
        .trainerName = _("SAMUEL"),
#line 8156
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8157
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8159
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8160
        .doubleBattle = FALSE,
#line 8161
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8163
            .species = SPECIES_SLOWKING,
#line 8163
            .gender = TRAINER_MON_MALE,
#line 8163
            .heldItem = ITEM_LIFE_ORB,
#line 8167
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8164
            .ability = ABILITY_REGENERATOR,
#line 8165
            .lvl = 54,
#line 8166
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8168
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8173
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8173
            .heldItem = ITEM_ROCKY_HELMET,
#line 8177
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8174
            .ability = ABILITY_REGENERATOR,
#line 8175
            .lvl = 54,
#line 8176
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8177
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8182
            .species = SPECIES_GLISCOR,
#line 8182
            .gender = TRAINER_MON_FEMALE,
#line 8182
            .heldItem = ITEM_TOXIC_ORB,
#line 8186
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8183
            .ability = ABILITY_POISON_HEAL,
#line 8184
            .lvl = 54,
#line 8185
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8187
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8192
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8192
            .heldItem = ITEM_ASSAULT_VEST,
#line 8196
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8193
            .ability = ABILITY_CLEAR_BODY,
#line 8194
            .lvl = 54,
#line 8195
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8197
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8202
            .species = SPECIES_HONCHKROW,
#line 8202
            .gender = TRAINER_MON_MALE,
#line 8202
            .heldItem = ITEM_FOCUS_SASH,
#line 8206
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8203
            .ability = ABILITY_MOXIE,
#line 8204
            .lvl = 54,
#line 8205
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8207
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8213
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_LILYCOVE_TORCHIC] =
    {
#line 8214
        .trainerName = _("SAMUEL"),
#line 8215
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8216
        .trainerPic = TRAINER_PIC_BRENDAN,
        .encounterMusic_gender =
#line 8218
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8219
        .doubleBattle = FALSE,
#line 8220
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE | AI_FLAG_FORCE_SETUP_FIRST_TURN,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 8222
            .species = SPECIES_SLOWKING,
#line 8222
            .gender = TRAINER_MON_MALE,
#line 8222
            .heldItem = ITEM_LIFE_ORB,
#line 8226
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8223
            .ability = ABILITY_REGENERATOR,
#line 8224
            .lvl = 54,
#line 8225
            .nature = NATURE_QUIET,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8227
                MOVE_SCALD,
                MOVE_PSYCHIC,
                MOVE_NASTY_PLOT,
                MOVE_TRICK_ROOM,
            },
            },
            {
#line 8232
            .species = SPECIES_AMOONGUSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8232
            .heldItem = ITEM_ROCKY_HELMET,
#line 8236
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 8233
            .ability = ABILITY_REGENERATOR,
#line 8234
            .lvl = 54,
#line 8235
            .nature = NATURE_RELAXED,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8236
                MOVE_RAGE_POWDER,
                MOVE_STOMPING_TANTRUM,
                MOVE_STUN_SPORE,
                MOVE_GIGA_DRAIN,
            },
            },
            {
#line 8241
            .species = SPECIES_GLISCOR,
#line 8241
            .gender = TRAINER_MON_FEMALE,
#line 8241
            .heldItem = ITEM_TOXIC_ORB,
#line 8245
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8242
            .ability = ABILITY_POISON_HEAL,
#line 8243
            .lvl = 54,
#line 8244
            .nature = NATURE_CAREFUL,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8246
                MOVE_TAUNT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_U_TURN,
            },
            },
            {
#line 8251
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8251
            .heldItem = ITEM_ASSAULT_VEST,
#line 8255
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8252
            .ability = ABILITY_CLEAR_BODY,
#line 8253
            .lvl = 54,
#line 8254
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8256
                MOVE_METEOR_MASH,
                MOVE_EARTHQUAKE,
                MOVE_ROCK_SLIDE,
                MOVE_ZEN_HEADBUTT,
            },
            },
            {
#line 8261
            .species = SPECIES_HONCHKROW,
#line 8261
            .gender = TRAINER_MON_MALE,
#line 8261
            .heldItem = ITEM_FOCUS_SASH,
#line 8265
            .iv = TRAINER_PARTY_IVS(31, 0, 31, 31, 31, 31),
#line 8262
            .ability = ABILITY_MOXIE,
#line 8263
            .lvl = 54,
#line 8264
            .nature = NATURE_JOLLY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 8266
                MOVE_BRAVE_BIRD,
                MOVE_CONFUSE_RAY,
                MOVE_ROOST,
                MOVE_PERISH_SONG,
            },
            },
        },
    },
#line 8272
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_MUDKIP] =
    {
#line 8273
        .trainerName = _("MAY"),
#line 8274
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8275
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8276
F_TRAINER_FEMALE | 
#line 8277
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8278
        .doubleBattle = FALSE,
#line 8279
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8281
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8283
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8282
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8285
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8287
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8286
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8289
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8291
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8290
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8293
            .species = SPECIES_GROVYLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8295
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8294
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8297
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TREECKO] =
    {
#line 8298
        .trainerName = _("MAY"),
#line 8299
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8300
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8301
F_TRAINER_FEMALE | 
#line 8302
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8303
        .doubleBattle = FALSE,
#line 8304
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8306
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8308
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8307
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8310
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8312
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8311
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8314
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8316
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8315
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8318
            .species = SPECIES_COMBUSKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8320
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8319
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8322
    [DIFFICULTY_NORMAL][TRAINER_MAY_LILYCOVE_TORCHIC] =
    {
#line 8323
        .trainerName = _("MAY"),
#line 8324
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 8325
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 8326
F_TRAINER_FEMALE | 
#line 8327
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8328
        .doubleBattle = FALSE,
#line 8329
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8331
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8333
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8332
            .lvl = 31,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8335
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8337
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8336
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8339
            .species = SPECIES_SLUGMA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8341
            .iv = TRAINER_PARTY_IVS(18, 18, 18, 18, 18, 18),
#line 8340
            .lvl = 32,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8343
            .species = SPECIES_MARSHTOMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8345
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8344
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8347
    [DIFFICULTY_NORMAL][TRAINER_JONAH] =
    {
#line 8348
        .trainerName = _("JONAH"),
#line 8349
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8350
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8352
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8353
        .doubleBattle = FALSE,
#line 8354
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8356
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8358
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8357
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8360
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8362
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8361
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8364
            .species = SPECIES_CLEFABLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8366
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8365
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8368
    [DIFFICULTY_NORMAL][TRAINER_HENRY] =
    {
#line 8369
        .trainerName = _("HENRY"),
#line 8370
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8371
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8373
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8374
        .doubleBattle = FALSE,
#line 8375
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8377
            .species = SPECIES_BLISSEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8379
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8378
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8381
            .species = SPECIES_BLAZIKEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8383
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8382
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8385
    [DIFFICULTY_NORMAL][TRAINER_ROGER] =
    {
#line 8386
        .trainerName = _("ROGER"),
#line 8387
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8388
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8390
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8391
        .doubleBattle = FALSE,
#line 8392
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8394
            .species = SPECIES_LUXRAY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8396
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8395
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8398
            .species = SPECIES_GALLADE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8400
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8399
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8402
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8404
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8403
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8406
    [DIFFICULTY_NORMAL][TRAINER_ALEXA] =
    {
#line 8407
        .trainerName = _("ALEXA"),
#line 8408
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8409
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 8410
F_TRAINER_FEMALE | 
#line 8411
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8412
        .items = { ITEM_FULL_RESTORE },
#line 8413
        .doubleBattle = FALSE,
#line 8414
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8416
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8418
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8417
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8420
            .species = SPECIES_CONKELDURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8422
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8421
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8424
    [DIFFICULTY_NORMAL][TRAINER_RUBEN] =
    {
#line 8425
        .trainerName = _("RUBEN"),
#line 8426
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 8427
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 8429
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8430
        .items = { ITEM_HYPER_POTION },
#line 8431
        .doubleBattle = FALSE,
#line 8432
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8434
            .species = SPECIES_MAMOSWINE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8436
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8435
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8438
            .species = SPECIES_SERPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8440
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8439
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8442
    [DIFFICULTY_NORMAL][TRAINER_KOJI_1] =
    {
#line 8443
        .trainerName = _("KOJI"),
#line 8444
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8445
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8447
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8448
        .doubleBattle = FALSE,
#line 8449
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8451
            .species = SPECIES_DUSTOX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8453
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8452
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8455
    [DIFFICULTY_NORMAL][TRAINER_WAYNE] =
    {
#line 8456
        .trainerName = _("WAYNE"),
#line 8457
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8458
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8460
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8461
        .doubleBattle = FALSE,
#line 8462
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 8464
            .species = SPECIES_BLASTOISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8466
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8465
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8468
            .species = SPECIES_EMPOLEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8470
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8469
            .lvl = 47,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8472
            .species = SPECIES_KINGDRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8474
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8473
            .lvl = 54,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8476
    [DIFFICULTY_NORMAL][TRAINER_AIDAN] =
    {
#line 8477
        .trainerName = _("AIDAN"),
#line 8478
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8479
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8481
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8482
        .doubleBattle = FALSE,
#line 8483
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8485
            .species = SPECIES_FLAAFFY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8487
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8486
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8489
            .species = SPECIES_DUGTRIO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8491
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8490
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8493
    [DIFFICULTY_NORMAL][TRAINER_REED] =
    {
#line 8494
        .trainerName = _("REED"),
#line 8495
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 8496
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 8498
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8499
        .doubleBattle = FALSE,
#line 8500
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8502
            .species = SPECIES_SHIFTRY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8504
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8503
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8506
            .species = SPECIES_AZUMARILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8508
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8507
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8510
    [DIFFICULTY_NORMAL][TRAINER_TISHA] =
    {
#line 8511
        .trainerName = _("TISHA"),
#line 8512
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 8513
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 8514
F_TRAINER_FEMALE | 
#line 8515
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8516
        .doubleBattle = FALSE,
#line 8517
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8519
            .species = SPECIES_MACHAMP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8521
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8520
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8523
    [DIFFICULTY_NORMAL][TRAINER_TORI_AND_TIA] =
    {
#line 8524
        .trainerName = _("TORI & TIA"),
#line 8525
        .trainerClass = TRAINER_CLASS_TWINS,
#line 8526
        .trainerPic = TRAINER_PIC_TWINS,
        .encounterMusic_gender =
#line 8528
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8529
        .doubleBattle = TRUE,
#line 8530
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8532
            .species = SPECIES_FARFETCHD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8534
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8533
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8536
            .species = SPECIES_SHIELDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8538
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8537
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8540
    [DIFFICULTY_NORMAL][TRAINER_KIM_AND_IRIS] =
    {
#line 8541
        .trainerName = _("KIM & IRIS"),
#line 8542
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8543
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8545
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8546
        .doubleBattle = TRUE,
#line 8547
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8549
            .species = SPECIES_DRAPION,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8551
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8550
            .lvl = 48,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8553
            .species = SPECIES_ACCELGOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8555
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8554
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8557
    [DIFFICULTY_NORMAL][TRAINER_TYRA_AND_IVY] =
    {
#line 8558
        .trainerName = _("TYRA & IVY"),
#line 8559
        .trainerClass = TRAINER_CLASS_SR_AND_JR,
#line 8560
        .trainerPic = TRAINER_PIC_SR_AND_JR,
        .encounterMusic_gender =
#line 8562
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8563
        .doubleBattle = TRUE,
#line 8564
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8566
            .species = SPECIES_ILLUMISE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8568
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8567
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8570
            .species = SPECIES_SKORUPI,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8572
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8571
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8575
    [DIFFICULTY_NORMAL][TRAINER_MEL_AND_PAUL] =
    {
#line 8576
        .trainerName = _("MEL & PAUL"),
#line 8577
        .trainerClass = TRAINER_CLASS_YOUNG_COUPLE,
#line 8578
        .trainerPic = TRAINER_PIC_YOUNG_COUPLE,
        .encounterMusic_gender =
#line 8580
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8581
        .doubleBattle = TRUE,
#line 8582
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8584
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8586
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8585
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8588
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8590
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8589
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8592
    [DIFFICULTY_NORMAL][TRAINER_JOHN_AND_JAY_1] =
    {
#line 8593
        .trainerName = _("JOHN & JAY"),
#line 8594
        .trainerClass = TRAINER_CLASS_OLD_COUPLE,
#line 8595
        .trainerPic = TRAINER_PIC_OLD_COUPLE,
        .encounterMusic_gender =
#line 8597
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8598
        .doubleBattle = TRUE,
#line 8599
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8601
            .species = SPECIES_EXCADRILL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8603
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8602
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8605
            .species = SPECIES_MILOTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8607
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 8606
            .lvl = 59,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8609
    [DIFFICULTY_NORMAL][TRAINER_RELI_AND_IAN] =
    {
#line 8610
        .trainerName = _("RELI & IAN"),
#line 8611
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8612
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8614
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8615
        .doubleBattle = TRUE,
#line 8616
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8618
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8620
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8619
            .lvl = 53,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8622
            .species = SPECIES_TORTERRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8624
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8623
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8626
    [DIFFICULTY_NORMAL][TRAINER_LILA_AND_ROY_1] =
    {
#line 8627
        .trainerName = _("LILA & ROY"),
#line 8628
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8629
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8631
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8632
        .doubleBattle = TRUE,
#line 8633
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8635
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8637
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8636
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8639
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8641
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8640
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8643
    [DIFFICULTY_NORMAL][TRAINER_LISA_AND_RAY] =
    {
#line 8644
        .trainerName = _("LISA & RAY"),
#line 8645
        .trainerClass = TRAINER_CLASS_SIS_AND_BRO,
#line 8646
        .trainerPic = TRAINER_PIC_SIS_AND_BRO,
        .encounterMusic_gender =
#line 8648
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 8649
        .doubleBattle = TRUE,
#line 8650
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8652
            .species = SPECIES_FEAROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8654
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8653
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8656
            .species = SPECIES_DONPHAN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8658
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8657
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8660
    [DIFFICULTY_NORMAL][TRAINER_CHRIS] =
    {
#line 8661
        .trainerName = _("CHRIS"),
#line 8662
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8663
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8665
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8666
        .doubleBattle = FALSE,
#line 8667
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 8669
            .species = SPECIES_GASTRODON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8671
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8670
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8673
            .species = SPECIES_FURRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8675
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8674
            .lvl = 30,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8677
            .species = SPECIES_MAGNETON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8679
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8678
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8681
            .species = SPECIES_BISHARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8683
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8682
            .lvl = 35,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8685
    [DIFFICULTY_NORMAL][TRAINER_DAWSON] =
    {
#line 8686
        .trainerName = _("DAWSON"),
#line 8687
        .trainerClass = TRAINER_CLASS_RICH_BOY,
#line 8688
        .trainerPic = TRAINER_PIC_RICH_BOY,
        .encounterMusic_gender =
#line 8690
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 8691
        .doubleBattle = FALSE,
#line 8692
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8694
            .species = SPECIES_EKANS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8694
            .heldItem = ITEM_NUGGET,
#line 8696
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8695
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8698
            .species = SPECIES_ARCHEN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8700
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8699
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8702
    [DIFFICULTY_NORMAL][TRAINER_SARAH] =
    {
#line 8703
        .trainerName = _("SARAH"),
#line 8704
        .trainerClass = TRAINER_CLASS_LADY,
#line 8705
        .trainerPic = TRAINER_PIC_LADY,
        .encounterMusic_gender =
#line 8706
F_TRAINER_FEMALE | 
#line 8707
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8708
        .items = { ITEM_FULL_RESTORE },
#line 8709
        .doubleBattle = FALSE,
#line 8710
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8712
            .species = SPECIES_MUNCHLAX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8714
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8713
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8716
            .species = SPECIES_ABSOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8716
            .heldItem = ITEM_NUGGET,
#line 8718
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8717
            .lvl = 16,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8720
    [DIFFICULTY_NORMAL][TRAINER_DARIAN] =
    {
#line 8721
        .trainerName = _("DARIAN"),
#line 8722
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8723
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8725
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8726
        .doubleBattle = FALSE,
#line 8727
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8729
            .species = SPECIES_DUCKLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8731
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8730
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8733
    [DIFFICULTY_NORMAL][TRAINER_HAILEY] =
    {
#line 8734
        .trainerName = _("HAILEY"),
#line 8735
        .trainerClass = TRAINER_CLASS_TUBER_F,
#line 8736
        .trainerPic = TRAINER_PIC_TUBER_F,
        .encounterMusic_gender =
#line 8737
F_TRAINER_FEMALE | 
#line 8738
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8739
        .doubleBattle = FALSE,
#line 8740
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8742
            .species = SPECIES_TENTACOOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8744
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8743
            .lvl = 20,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8746
    [DIFFICULTY_NORMAL][TRAINER_CHANDLER] =
    {
#line 8747
        .trainerName = _("CHANDLER"),
#line 8748
        .trainerClass = TRAINER_CLASS_TUBER_M,
#line 8749
        .trainerPic = TRAINER_PIC_TUBER_M,
        .encounterMusic_gender =
#line 8751
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8752
        .doubleBattle = FALSE,
#line 8753
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8755
            .species = SPECIES_PANPOUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8757
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8756
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8759
            .species = SPECIES_SLOWPOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8761
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8760
            .lvl = 18,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8763
    [DIFFICULTY_NORMAL][TRAINER_KALEB] =
    {
#line 8764
        .trainerName = _("KALEB"),
#line 8765
        .trainerClass = TRAINER_CLASS_POKEFAN,
#line 8766
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8768
            TRAINER_ENCOUNTER_MUSIC_TWINS,
#line 8769
        .doubleBattle = FALSE,
#line 8770
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8772
            .species = SPECIES_GIBLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8772
            .heldItem = ITEM_ORAN_BERRY,
#line 8774
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8773
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8776
            .species = SPECIES_SHINX,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8776
            .heldItem = ITEM_ORAN_BERRY,
#line 8778
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8777
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8780
    [DIFFICULTY_NORMAL][TRAINER_JOSEPH] =
    {
#line 8781
        .trainerName = _("JOSEPH"),
#line 8782
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8783
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8785
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8786
        .doubleBattle = FALSE,
#line 8787
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8789
            .species = SPECIES_DROWZEE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8791
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8790
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8793
            .species = SPECIES_MANKEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8795
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8794
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8797
    [DIFFICULTY_NORMAL][TRAINER_ALYSSA] =
    {
#line 8798
        .trainerName = _("ALYSSA"),
#line 8799
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 8800
        .trainerPic = TRAINER_PIC_CYCLING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 8801
F_TRAINER_FEMALE | 
#line 8802
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8803
        .doubleBattle = FALSE,
#line 8804
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8806
            .species = SPECIES_GEODUDE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8808
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8807
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8810
    [DIFFICULTY_NORMAL][TRAINER_MARCOS] =
    {
#line 8811
        .trainerName = _("MARCOS"),
#line 8812
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 8813
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 8815
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8816
        .doubleBattle = FALSE,
#line 8817
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8819
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8821
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8820
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8823
    [DIFFICULTY_NORMAL][TRAINER_RHETT] =
    {
#line 8824
        .trainerName = _("RHETT"),
#line 8825
        .trainerClass = TRAINER_CLASS_BLACK_BELT,
#line 8826
        .trainerPic = TRAINER_PIC_BLACK_BELT,
        .encounterMusic_gender =
#line 8828
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 8829
        .doubleBattle = FALSE,
#line 8830
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8832
            .species = SPECIES_NATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8834
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 8833
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8836
    [DIFFICULTY_NORMAL][TRAINER_TYRON] =
    {
#line 8837
        .trainerName = _("TYRON"),
#line 8838
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8839
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8841
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8842
        .doubleBattle = FALSE,
#line 8843
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8845
            .species = SPECIES_PINECO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8847
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8846
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8849
    [DIFFICULTY_NORMAL][TRAINER_CELINA] =
    {
#line 8850
        .trainerName = _("CELINA"),
#line 8851
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 8852
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 8853
F_TRAINER_FEMALE | 
#line 8854
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 8855
        .doubleBattle = FALSE,
#line 8856
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8858
            .species = SPECIES_SUNKERN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8860
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8859
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8862
    [DIFFICULTY_NORMAL][TRAINER_BIANCA] =
    {
#line 8863
        .trainerName = _("BIANCA"),
#line 8864
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8865
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8866
F_TRAINER_FEMALE | 
#line 8867
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8868
        .doubleBattle = FALSE,
#line 8869
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8871
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8873
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8872
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8875
    [DIFFICULTY_NORMAL][TRAINER_HAYDEN] =
    {
#line 8876
        .trainerName = _("HAYDEN"),
#line 8877
        .trainerClass = TRAINER_CLASS_HIKER,
#line 8878
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 8880
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8881
        .doubleBattle = FALSE,
#line 8882
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8884
            .species = SPECIES_LICKITUNG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8886
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8885
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8888
    [DIFFICULTY_NORMAL][TRAINER_SOPHIE] =
    {
#line 8889
        .trainerName = _("SOPHIE"),
#line 8890
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8891
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8892
F_TRAINER_FEMALE | 
#line 8893
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8894
        .doubleBattle = FALSE,
#line 8895
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8897
            .species = SPECIES_WOOBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8899
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8898
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8901
            .species = SPECIES_SNUBBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8903
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8902
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8905
    [DIFFICULTY_NORMAL][TRAINER_COBY] =
    {
#line 8906
        .trainerName = _("COBY"),
#line 8907
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 8908
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 8910
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 8911
        .doubleBattle = FALSE,
#line 8912
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8914
            .species = SPECIES_HOOTHOOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8916
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8915
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8918
            .species = SPECIES_AUDINO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8920
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8919
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8922
    [DIFFICULTY_NORMAL][TRAINER_LAWRENCE] =
    {
#line 8923
        .trainerName = _("LAWRENCE"),
#line 8924
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 8925
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 8927
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 8928
        .doubleBattle = FALSE,
#line 8929
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8931
            .species = SPECIES_ABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8933
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8932
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8935
            .species = SPECIES_SNEASEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8937
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8936
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8939
    [DIFFICULTY_NORMAL][TRAINER_WYATT] =
    {
#line 8940
        .trainerName = _("WYATT"),
#line 8941
        .trainerClass = TRAINER_CLASS_POKEMANIAC,
#line 8942
        .trainerPic = TRAINER_PIC_POKEMANIAC,
        .encounterMusic_gender =
#line 8944
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 8945
        .doubleBattle = FALSE,
#line 8946
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8948
            .species = SPECIES_ZORUA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8950
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8949
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8952
            .species = SPECIES_PETILIL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8954
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8953
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8956
    [DIFFICULTY_NORMAL][TRAINER_ANGELINA] =
    {
#line 8957
        .trainerName = _("ANGELINA"),
#line 8958
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8959
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8960
F_TRAINER_FEMALE | 
#line 8961
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8962
        .doubleBattle = FALSE,
#line 8963
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 8965
            .species = SPECIES_DARUMAKA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8967
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8966
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 8969
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8971
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8970
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8973
    [DIFFICULTY_NORMAL][TRAINER_KAI] =
    {
#line 8974
        .trainerName = _("KAI"),
#line 8975
        .trainerClass = TRAINER_CLASS_FISHERMAN,
#line 8976
        .trainerPic = TRAINER_PIC_FISHERMAN,
        .encounterMusic_gender =
#line 8978
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 8979
        .doubleBattle = FALSE,
#line 8980
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8982
            .species = SPECIES_HORSEA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8984
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8983
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8986
    [DIFFICULTY_NORMAL][TRAINER_CHARLOTTE] =
    {
#line 8987
        .trainerName = _("CHARLOTTE"),
#line 8988
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 8989
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 8990
F_TRAINER_FEMALE | 
#line 8991
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 8992
        .doubleBattle = FALSE,
#line 8993
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 8995
            .species = SPECIES_SABLEYE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 8997
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 8996
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 8999
    [DIFFICULTY_NORMAL][TRAINER_DEANDRE] =
    {
#line 9000
        .trainerName = _("DEANDRE"),
#line 9001
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9002
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9004
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9005
        .doubleBattle = FALSE,
#line 9006
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9008
            .species = SPECIES_MISDREAVUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9010
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9009
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9012
            .species = SPECIES_TIMBURR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9014
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9013
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9016
            .species = SPECIES_TRAPINCH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9018
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9017
            .lvl = 21,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9020
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_1] =
    {
#line 9021
        .trainerName = _("GRUNT"),
#line 9022
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9023
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9025
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9026
        .doubleBattle = FALSE,
#line 9027
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9029
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9031
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9030
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9033
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_2] =
    {
#line 9034
        .trainerName = _("GRUNT"),
#line 9035
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9036
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9038
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9039
        .doubleBattle = FALSE,
#line 9040
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9042
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9044
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9043
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9046
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_3] =
    {
#line 9047
        .trainerName = _("GRUNT"),
#line 9048
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9049
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9051
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9052
        .doubleBattle = FALSE,
#line 9053
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9055
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9057
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9056
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9059
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_4] =
    {
#line 9060
        .trainerName = _("GRUNT"),
#line 9061
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9062
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9064
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9065
        .doubleBattle = FALSE,
#line 9066
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9068
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9070
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9069
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9072
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9074
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9073
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9076
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_5] =
    {
#line 9077
        .trainerName = _("GRUNT"),
#line 9078
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9079
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9081
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9082
        .doubleBattle = FALSE,
#line 9083
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9085
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9087
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9086
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9089
            .species = SPECIES_ZANGOOSE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9091
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9090
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9093
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_6] =
    {
#line 9094
        .trainerName = _("GRUNT"),
#line 9095
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9096
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9098
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9099
        .doubleBattle = FALSE,
#line 9100
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9102
            .species = SPECIES_RHYHORN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9104
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9103
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9106
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_7] =
    {
#line 9107
        .trainerName = _("GRUNT"),
#line 9108
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9109
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9111
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9112
        .doubleBattle = FALSE,
#line 9113
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9115
            .species = SPECIES_HOUNDOOM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9117
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9116
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9119
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_8] =
    {
#line 9120
        .trainerName = _("GRUNT"),
#line 9121
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9122
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9124
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9125
        .doubleBattle = FALSE,
#line 9126
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9128
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9130
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9129
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9132
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_9] =
    {
#line 9133
        .trainerName = _("GRUNT"),
#line 9134
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9135
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9137
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9138
        .doubleBattle = FALSE,
#line 9139
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9141
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9143
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9142
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9145
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_10] =
    {
#line 9146
        .trainerName = _("GRUNT"),
#line 9147
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9148
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9150
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9151
        .doubleBattle = FALSE,
#line 9152
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9154
            .species = SPECIES_MIGHTYENA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9156
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9155
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9158
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_11] =
    {
#line 9159
        .trainerName = _("GRUNT"),
#line 9160
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9161
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9163
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9164
        .doubleBattle = FALSE,
#line 9165
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9167
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9169
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9168
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9171
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_12] =
    {
#line 9172
        .trainerName = _("GRUNT"),
#line 9173
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9174
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9176
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9177
        .doubleBattle = FALSE,
#line 9178
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9180
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9182
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9181
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9184
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_13] =
    {
#line 9185
        .trainerName = _("GRUNT"),
#line 9186
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9187
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_M,
        .encounterMusic_gender =
#line 9189
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9190
        .doubleBattle = FALSE,
#line 9191
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9193
            .species = SPECIES_LAIRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9195
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9194
            .lvl = 43,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9197
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_14] =
    {
#line 9198
        .trainerName = _("GRUNT"),
#line 9199
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9200
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9201
F_TRAINER_FEMALE | 
#line 9202
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9203
        .doubleBattle = FALSE,
#line 9204
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9206
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9208
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9207
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9210
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_15] =
    {
#line 9211
        .trainerName = _("GRUNT"),
#line 9212
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9213
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9214
F_TRAINER_FEMALE | 
#line 9215
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9216
        .doubleBattle = FALSE,
#line 9217
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9219
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9221
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9220
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9223
    [DIFFICULTY_NORMAL][TRAINER_GRUNT_MAGMA_HIDEOUT_16] =
    {
#line 9224
        .trainerName = _("GRUNT"),
#line 9225
        .trainerClass = TRAINER_CLASS_TEAM_MAGMA,
#line 9226
        .trainerPic = TRAINER_PIC_MAGMA_GRUNT_F,
        .encounterMusic_gender =
#line 9227
F_TRAINER_FEMALE | 
#line 9228
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9229
        .doubleBattle = FALSE,
#line 9230
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9232
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9234
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9233
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9236
    [DIFFICULTY_NORMAL][TRAINER_TABITHA_MAGMA_HIDEOUT] =
    {
#line 9237
        .trainerName = _("TABITHA"),
#line 9238
        .trainerClass = TRAINER_CLASS_MAGMA_ADMIN,
#line 9239
        .trainerPic = TRAINER_PIC_MAGMA_ADMIN,
        .encounterMusic_gender =
#line 9241
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9242
        .doubleBattle = FALSE,
#line 9243
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 9245
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9248
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9246
            .ability = ABILITY_DROUGHT,
#line 9247
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9249
                MOVE_RAPID_SPIN,
                MOVE_HEAT_WAVE,
                MOVE_SOLAR_BEAM,
                MOVE_CURSE,
            },
            },
            {
#line 9254
            .species = SPECIES_WEEZING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9254
            .heldItem = ITEM_POISON_BARB,
#line 9257
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9255
            .ability = ABILITY_LEVITATE,
#line 9256
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9258
                MOVE_SELF_DESTRUCT,
                MOVE_SLUDGE_BOMB,
                MOVE_TOXIC,
                MOVE_SMOKESCREEN,
            },
            },
            {
#line 9263
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9263
            .heldItem = ITEM_LIFE_ORB,
#line 9266
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9264
            .ability = ABILITY_LEVITATE,
#line 9265
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9267
                MOVE_EARTH_POWER,
                MOVE_PSYCHIC,
                MOVE_COSMIC_POWER,
                MOVE_POWER_SPLIT,
            },
            },
            {
#line 9272
            .species = SPECIES_CAMERUPT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9272
            .heldItem = ITEM_FOCUS_SASH,
#line 9275
            .iv = TRAINER_PARTY_IVS(9, 9, 9, 9, 9, 9),
#line 9273
            .ability = ABILITY_OWN_TEMPO,
#line 9274
            .lvl = 51,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9276
                MOVE_EARTHQUAKE,
                MOVE_HEAT_CRASH,
                MOVE_YAWN,
                MOVE_CURSE,
            },
            },
        },
    },
#line 9281
    [DIFFICULTY_NORMAL][TRAINER_DARCY] =
    {
#line 9282
        .trainerName = _("DARCY"),
#line 9283
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9284
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9285
F_TRAINER_FEMALE | 
#line 9286
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9287
        .items = { ITEM_HYPER_POTION },
#line 9288
        .doubleBattle = FALSE,
#line 9289
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9291
            .species = SPECIES_LUDICOLO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9293
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9292
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9295
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9297
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9296
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9299
    [DIFFICULTY_NORMAL][TRAINER_MAXIE_MOSSDEEP] =
    {
#line 9300
        .trainerName = _("MAXIE"),
#line 9301
        .trainerClass = TRAINER_CLASS_MAGMA_LEADER,
#line 9302
        .trainerPic = TRAINER_PIC_MAGMA_LEADER_MAXIE,
        .encounterMusic_gender =
#line 9304
            TRAINER_ENCOUNTER_MUSIC_MAGMA,
#line 9305
        .doubleBattle = FALSE,
#line 9306
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9308
            .species = SPECIES_RHYPERIOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9308
            .heldItem = ITEM_ROCKY_HELMET,
#line 9311
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9309
            .ability = ABILITY_ROCK_HEAD,
#line 9310
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9311
                MOVE_EARTHQUAKE,
                MOVE_ROCK_BLAST,
                MOVE_STEALTH_ROCK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9316
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9316
            .heldItem = ITEM_AIR_BALLOON,
#line 9319
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9317
            .ability = ABILITY_HEAVY_METAL,
#line 9318
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9319
                MOVE_HEAVY_SLAM,
                MOVE_STONE_EDGE,
                MOVE_AUTOTOMIZE,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 9324
            .species = SPECIES_CROBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9324
            .heldItem = ITEM_SHARP_BEAK,
#line 9327
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9325
            .ability = ABILITY_INNER_FOCUS,
#line 9326
            .lvl = 57,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 9327
                MOVE_VENOSHOCK,
                MOVE_AIR_SLASH,
                MOVE_SUPERSONIC,
                MOVE_TOXIC,
            },
            },
        },
    },
#line 9332
    [DIFFICULTY_NORMAL][TRAINER_PETE] =
    {
#line 9333
        .trainerName = _("PETE"),
#line 9334
        .trainerClass = TRAINER_CLASS_SWIMMER_M,
#line 9335
        .trainerPic = TRAINER_PIC_SWIMMER_M,
        .encounterMusic_gender =
#line 9337
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9338
        .doubleBattle = FALSE,
#line 9339
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9341
            .species = SPECIES_KINGLER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9343
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9342
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9345
    [DIFFICULTY_NORMAL][TRAINER_ISABELLE] =
    {
#line 9346
        .trainerName = _("ISABELLE"),
#line 9347
        .trainerClass = TRAINER_CLASS_SWIMMER_F,
#line 9348
        .trainerPic = TRAINER_PIC_SWIMMER_F,
        .encounterMusic_gender =
#line 9349
F_TRAINER_FEMALE | 
#line 9350
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9351
        .doubleBattle = FALSE,
#line 9352
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9354
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9356
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9355
            .lvl = 23,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9358
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_1] =
    {
#line 9359
        .trainerName = _("ANDRES"),
#line 9360
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9361
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9363
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9364
        .doubleBattle = FALSE,
#line 9365
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9367
            .species = SPECIES_CASCOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9369
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9368
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9371
            .species = SPECIES_GRANBULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9373
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9372
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9375
    [DIFFICULTY_NORMAL][TRAINER_JOSUE] =
    {
#line 9376
        .trainerName = _("JOSUE"),
#line 9377
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9378
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9380
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9381
        .doubleBattle = FALSE,
#line 9382
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9384
            .species = SPECIES_GARBODOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9386
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9385
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9388
            .species = SPECIES_FROSLASS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9390
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9389
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9392
    [DIFFICULTY_NORMAL][TRAINER_CAMRON] =
    {
#line 9393
        .trainerName = _("CAMRON"),
#line 9394
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9395
        .trainerPic = TRAINER_PIC_SWIMMING_TRIATHLETE_M,
        .encounterMusic_gender =
#line 9397
            TRAINER_ENCOUNTER_MUSIC_SWIMMER,
#line 9398
        .doubleBattle = FALSE,
#line 9399
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9401
            .species = SPECIES_PURUGLY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9403
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9402
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9405
    [DIFFICULTY_NORMAL][TRAINER_CORY_1] =
    {
#line 9406
        .trainerName = _("CORY"),
#line 9407
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 9408
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 9410
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9411
        .doubleBattle = FALSE,
#line 9412
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9414
            .species = SPECIES_STARMIE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9416
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9415
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9418
            .species = SPECIES_KROKOROK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9420
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9419
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9422
            .species = SPECIES_NINJASK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9424
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9423
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9426
    [DIFFICULTY_NORMAL][TRAINER_CAROLINA] =
    {
#line 9427
        .trainerName = _("CAROLINA"),
#line 9428
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9429
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9430
F_TRAINER_FEMALE | 
#line 9431
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9432
        .items = { ITEM_HYPER_POTION },
#line 9433
        .doubleBattle = FALSE,
#line 9434
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9436
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9438
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9437
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9440
            .species = SPECIES_HONCHKROW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9442
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9441
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9444
            .species = SPECIES_GOLDUCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9446
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9445
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9448
    [DIFFICULTY_NORMAL][TRAINER_ELIJAH] =
    {
#line 9449
        .trainerName = _("ELIJAH"),
#line 9450
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 9451
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 9453
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9454
        .doubleBattle = FALSE,
#line 9455
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9457
            .species = SPECIES_SEADRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9459
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9458
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9461
            .species = SPECIES_POLIWHIRL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9463
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9462
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9465
    [DIFFICULTY_NORMAL][TRAINER_CELIA] =
    {
#line 9466
        .trainerName = _("CELIA"),
#line 9467
        .trainerClass = TRAINER_CLASS_PICNICKER,
#line 9468
        .trainerPic = TRAINER_PIC_PICNICKER,
        .encounterMusic_gender =
#line 9469
F_TRAINER_FEMALE | 
#line 9470
            TRAINER_ENCOUNTER_MUSIC_GIRL,
#line 9471
        .doubleBattle = FALSE,
#line 9472
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9474
            .species = SPECIES_ZIGZAGOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9476
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9475
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9478
            .species = SPECIES_SENTRET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9480
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9479
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9482
    [DIFFICULTY_NORMAL][TRAINER_BRYAN] =
    {
#line 9483
        .trainerName = _("BRYAN"),
#line 9484
        .trainerClass = TRAINER_CLASS_RUIN_MANIAC,
#line 9485
        .trainerPic = TRAINER_PIC_RUIN_MANIAC,
        .encounterMusic_gender =
#line 9487
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9488
        .doubleBattle = FALSE,
#line 9489
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9491
            .species = SPECIES_CHIMCHAR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9493
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9492
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9495
            .species = SPECIES_TRUBBISH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9497
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9496
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9499
    [DIFFICULTY_NORMAL][TRAINER_BRANDEN] =
    {
#line 9500
        .trainerName = _("BRANDEN"),
#line 9501
        .trainerClass = TRAINER_CLASS_CAMPER,
#line 9502
        .trainerPic = TRAINER_PIC_CAMPER,
        .encounterMusic_gender =
#line 9504
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9505
        .doubleBattle = FALSE,
#line 9506
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9508
            .species = SPECIES_DIGLETT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9510
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9509
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9512
            .species = SPECIES_MAGIKARP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9514
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9513
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9516
    [DIFFICULTY_NORMAL][TRAINER_BRYANT] =
    {
#line 9517
        .trainerName = _("BRYANT"),
#line 9518
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9519
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9521
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9522
        .doubleBattle = FALSE,
#line 9523
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9525
            .species = SPECIES_THROH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9527
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9526
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9529
            .species = SPECIES_JOLTIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9531
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9530
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9533
    [DIFFICULTY_NORMAL][TRAINER_SHAYLA] =
    {
#line 9534
        .trainerName = _("SHAYLA"),
#line 9535
        .trainerClass = TRAINER_CLASS_AROMA_LADY,
#line 9536
        .trainerPic = TRAINER_PIC_AROMA_LADY,
        .encounterMusic_gender =
#line 9537
F_TRAINER_FEMALE | 
#line 9538
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9539
        .doubleBattle = FALSE,
#line 9540
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9542
            .species = SPECIES_VOLBEAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9544
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9543
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9546
            .species = SPECIES_MAGNEMITE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9548
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9547
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9550
    [DIFFICULTY_NORMAL][TRAINER_KYRA] =
    {
#line 9551
        .trainerName = _("KYRA"),
#line 9552
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9553
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9554
F_TRAINER_FEMALE | 
#line 9555
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9556
        .doubleBattle = FALSE,
#line 9557
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9559
            .species = SPECIES_PRINPLUP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9561
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9560
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9563
            .species = SPECIES_SLOWBRO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9565
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9564
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9567
    [DIFFICULTY_NORMAL][TRAINER_JAIDEN] =
    {
#line 9568
        .trainerName = _("JAIDEN"),
#line 9569
        .trainerClass = TRAINER_CLASS_NINJA_BOY,
#line 9570
        .trainerPic = TRAINER_PIC_NINJA_BOY,
        .encounterMusic_gender =
#line 9572
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9573
        .doubleBattle = FALSE,
#line 9574
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9576
            .species = SPECIES_SEAKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9578
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9577
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9580
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9582
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9581
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9584
    [DIFFICULTY_NORMAL][TRAINER_ALIX] =
    {
#line 9585
        .trainerName = _("ALIX"),
#line 9586
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9587
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9588
F_TRAINER_FEMALE | 
#line 9589
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9590
        .doubleBattle = FALSE,
#line 9591
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9593
            .species = SPECIES_LAPRAS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9595
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9594
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9597
            .species = SPECIES_WAILORD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9599
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9598
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9601
    [DIFFICULTY_NORMAL][TRAINER_HELENE] =
    {
#line 9602
        .trainerName = _("HELENE"),
#line 9603
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9604
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9605
F_TRAINER_FEMALE | 
#line 9606
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9607
        .doubleBattle = FALSE,
#line 9608
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9610
            .species = SPECIES_GOREBYSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9612
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9611
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9614
            .species = SPECIES_MASQUERAIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9616
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9615
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9618
    [DIFFICULTY_NORMAL][TRAINER_MARLENE] =
    {
#line 9619
        .trainerName = _("MARLENE"),
#line 9620
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9621
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9622
F_TRAINER_FEMALE | 
#line 9623
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9624
        .doubleBattle = FALSE,
#line 9625
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9627
            .species = SPECIES_HAPPINY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9629
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9628
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9631
            .species = SPECIES_BLITZLE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9633
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9632
            .lvl = 27,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9635
    [DIFFICULTY_NORMAL][TRAINER_DEVAN] =
    {
#line 9636
        .trainerName = _("DEVAN"),
#line 9637
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9638
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 9640
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9641
        .doubleBattle = FALSE,
#line 9642
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9644
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9646
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9645
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9648
            .species = SPECIES_PIDGEY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9650
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9649
            .lvl = 11,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9652
    [DIFFICULTY_NORMAL][TRAINER_JOHNSON] =
    {
#line 9653
        .trainerName = _("JOHNSON"),
#line 9654
        .trainerClass = TRAINER_CLASS_YOUNGSTER,
#line 9655
        .trainerPic = TRAINER_PIC_YOUNGSTER,
        .encounterMusic_gender =
#line 9657
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9658
        .doubleBattle = FALSE,
#line 9659
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9661
            .species = SPECIES_SWINUB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9663
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9662
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9665
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9667
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9666
            .lvl = 12,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9669
    [DIFFICULTY_NORMAL][TRAINER_MELINA] =
    {
#line 9670
        .trainerName = _("MELINA"),
#line 9671
        .trainerClass = TRAINER_CLASS_TRIATHLETE,
#line 9672
        .trainerPic = TRAINER_PIC_RUNNING_TRIATHLETE_F,
        .encounterMusic_gender =
#line 9673
F_TRAINER_FEMALE | 
#line 9674
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9675
        .doubleBattle = FALSE,
#line 9676
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9678
            .species = SPECIES_BELLSPROUT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9680
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9679
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9682
    [DIFFICULTY_NORMAL][TRAINER_BRANDI] =
    {
#line 9683
        .trainerName = _("BRANDI"),
#line 9684
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 9685
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 9686
F_TRAINER_FEMALE | 
#line 9687
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9688
        .doubleBattle = FALSE,
#line 9689
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9691
            .species = SPECIES_MAWILE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9693
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9692
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9695
    [DIFFICULTY_NORMAL][TRAINER_AISHA] =
    {
#line 9696
        .trainerName = _("AISHA"),
#line 9697
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9698
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9699
F_TRAINER_FEMALE | 
#line 9700
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9701
        .doubleBattle = FALSE,
#line 9702
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9704
            .species = SPECIES_FERROSEED,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9706
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9705
            .lvl = 26,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9708
    [DIFFICULTY_NORMAL][TRAINER_MAKAYLA] =
    {
#line 9709
        .trainerName = _("MAKAYLA"),
#line 9710
        .trainerClass = TRAINER_CLASS_EXPERT,
#line 9711
        .trainerPic = TRAINER_PIC_EXPERT_F,
        .encounterMusic_gender =
#line 9712
F_TRAINER_FEMALE | 
#line 9713
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9714
        .items = { ITEM_HYPER_POTION },
#line 9715
        .doubleBattle = FALSE,
#line 9716
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9718
            .species = SPECIES_SPIRITOMB,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9720
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9719
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9722
            .species = SPECIES_NIDOKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9724
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9723
            .lvl = 50,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9726
    [DIFFICULTY_NORMAL][TRAINER_FABIAN] =
    {
#line 9727
        .trainerName = _("FABIAN"),
#line 9728
        .trainerClass = TRAINER_CLASS_GUITARIST,
#line 9729
        .trainerPic = TRAINER_PIC_GUITARIST,
        .encounterMusic_gender =
#line 9731
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9732
        .doubleBattle = FALSE,
#line 9733
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9735
            .species = SPECIES_ZOROARK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9737
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9736
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9739
    [DIFFICULTY_NORMAL][TRAINER_DAYTON] =
    {
#line 9740
        .trainerName = _("DAYTON"),
#line 9741
        .trainerClass = TRAINER_CLASS_HIKER,
#line 9742
        .trainerPic = TRAINER_PIC_WALLY,
        .encounterMusic_gender =
#line 9744
            TRAINER_ENCOUNTER_MUSIC_HIKER,
#line 9745
        .doubleBattle = FALSE,
#line 9746
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9748
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9750
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9749
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9752
            .species = SPECIES_HIPPOWDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9754
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9753
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9756
    [DIFFICULTY_NORMAL][TRAINER_RACHEL] =
    {
#line 9757
        .trainerName = _("RACHEL"),
#line 9758
        .trainerClass = TRAINER_CLASS_PARASOL_LADY,
#line 9759
        .trainerPic = TRAINER_PIC_PARASOL_LADY,
        .encounterMusic_gender =
#line 9760
F_TRAINER_FEMALE | 
#line 9761
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9762
        .doubleBattle = FALSE,
#line 9763
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9765
            .species = SPECIES_MUSHARNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9767
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9766
            .lvl = 39,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9769
    [DIFFICULTY_NORMAL][TRAINER_LEONEL] =
    {
#line 9770
        .trainerName = _("LEONEL"),
#line 9771
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9772
        .trainerPic = TRAINER_PIC_COOLTRAINER_M,
        .encounterMusic_gender =
#line 9774
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9775
        .items = { ITEM_HYPER_POTION },
#line 9776
        .doubleBattle = FALSE,
#line 9777
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9779
            .species = SPECIES_LIEPARD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9781
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9780
            .lvl = 45,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9783
    [DIFFICULTY_NORMAL][TRAINER_CALLIE] =
    {
#line 9784
        .trainerName = _("CALLIE"),
#line 9785
        .trainerClass = TRAINER_CLASS_BATTLE_GIRL,
#line 9786
        .trainerPic = TRAINER_PIC_BATTLE_GIRL,
        .encounterMusic_gender =
#line 9787
F_TRAINER_FEMALE | 
#line 9788
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 9789
        .doubleBattle = FALSE,
#line 9790
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9792
            .species = SPECIES_FLAREON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9794
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9793
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9796
            .species = SPECIES_BEARTIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9798
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9797
            .lvl = 42,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9800
    [DIFFICULTY_NORMAL][TRAINER_CALE] =
    {
#line 9801
        .trainerName = _("CALE"),
#line 9802
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 9803
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 9805
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 9806
        .doubleBattle = FALSE,
#line 9807
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9809
            .species = SPECIES_GRAVELER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9811
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9810
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9813
            .species = SPECIES_SWADLOON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9815
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 9814
            .lvl = 44,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9817
    [DIFFICULTY_NORMAL][TRAINER_MYLES] =
    {
#line 9818
        .trainerName = _("MYLES"),
#line 9819
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9820
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_M,
        .encounterMusic_gender =
#line 9822
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 9823
        .doubleBattle = FALSE,
#line 9824
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9826
            .species = SPECIES_ABOMASNOW,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9828
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9827
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9830
            .species = SPECIES_EXEGGUTOR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9832
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9831
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9834
            .species = SPECIES_KAKUNA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9836
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9835
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9838
    [DIFFICULTY_NORMAL][TRAINER_PAT] =
    {
#line 9839
        .trainerName = _("PAT"),
#line 9840
        .trainerClass = TRAINER_CLASS_PKMN_BREEDER,
#line 9841
        .trainerPic = TRAINER_PIC_POKEMON_BREEDER_F,
        .encounterMusic_gender =
#line 9842
F_TRAINER_FEMALE | 
#line 9843
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9844
        .doubleBattle = FALSE,
#line 9845
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 9847
            .species = SPECIES_ESPEON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9849
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9848
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9851
            .species = SPECIES_SIMISAGE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9853
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9852
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9855
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9857
            .iv = TRAINER_PARTY_IVS(1, 1, 1, 1, 1, 1),
#line 9856
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9860
    [DIFFICULTY_NORMAL][TRAINER_CRISTIN_1] =
    {
#line 9861
        .trainerName = _("CRISTIN"),
#line 9862
        .trainerClass = TRAINER_CLASS_COOLTRAINER,
#line 9863
        .trainerPic = TRAINER_PIC_COOLTRAINER_F,
        .encounterMusic_gender =
#line 9864
F_TRAINER_FEMALE | 
#line 9865
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 9866
        .items = { ITEM_HYPER_POTION },
#line 9867
        .doubleBattle = FALSE,
#line 9868
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9870
            .species = SPECIES_BRONZONG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9872
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9871
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9874
            .species = SPECIES_NUZLEAF,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9876
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 9875
            .lvl = 29,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9878
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TREECKO] =
    {
#line 9879
        .trainerName = _("MAY"),
#line 9880
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9881
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9882
F_TRAINER_FEMALE | 
#line 9883
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9884
        .doubleBattle = FALSE,
#line 9885
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9887
            .species = SPECIES_LOTAD,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9889
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9888
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9891
            .species = SPECIES_TORCHIC,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9893
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9892
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9895
    [DIFFICULTY_NORMAL][TRAINER_MAY_RUSTBORO_TORCHIC] =
    {
#line 9896
        .trainerName = _("MAY"),
#line 9897
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 9898
        .trainerPic = TRAINER_PIC_MAY,
        .encounterMusic_gender =
#line 9899
F_TRAINER_FEMALE | 
#line 9900
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 9901
        .doubleBattle = FALSE,
#line 9902
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9904
            .species = SPECIES_TORKOAL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9906
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 9905
            .lvl = 13,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9908
            .species = SPECIES_MUDKIP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9910
            .iv = TRAINER_PARTY_IVS(6, 6, 6, 6, 6, 6),
#line 9909
            .lvl = 15,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9912
    [DIFFICULTY_NORMAL][TRAINER_WINONA_2] =
    {
#line 9913
        .trainerName = _("GRUNT"),
#line 9914
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9915
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9917
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9918
        .doubleBattle = FALSE,
#line 9919
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9921
            .species = SPECIES_ZUBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9923
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9922
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9925
    [DIFFICULTY_NORMAL][TRAINER_WINONA_3] =
    {
#line 9926
        .trainerName = _("GRUNT"),
#line 9927
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9928
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9930
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9931
        .doubleBattle = FALSE,
#line 9932
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9934
            .species = SPECIES_BAGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9936
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9935
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9937
    [DIFFICULTY_NORMAL][TRAINER_WINONA_4] =
    {
#line 9938
        .trainerName = _("GRUNT"),
#line 9939
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9940
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9942
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9943
        .doubleBattle = FALSE,
#line 9944
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9946
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9948
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9947
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9949
    [DIFFICULTY_NORMAL][TRAINER_WINONA_5] =
    {
#line 9950
        .trainerName = _("GRUNT"),
#line 9951
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9952
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9954
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9955
        .doubleBattle = FALSE,
#line 9956
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9958
            .species = SPECIES_SPOINK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9960
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9959
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9961
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9963
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9962
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9964
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_2] =
    {
#line 9965
        .trainerName = _("GRUNT"),
#line 9966
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9967
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9969
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9970
        .doubleBattle = FALSE,
#line 9971
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 9973
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9975
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9974
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9976
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_3] =
    {
#line 9977
        .trainerName = _("GRUNT"),
#line 9978
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9979
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9981
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9982
        .doubleBattle = FALSE,
#line 9983
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 9985
            .species = SPECIES_BARBOACH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9987
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9986
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 9988
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 9990
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 9989
            .lvl = 33,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 9991
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_4] =
    {
#line 9992
        .trainerName = _("GRUNT"),
#line 9993
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 9994
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 9996
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 9997
        .doubleBattle = FALSE,
#line 9998
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10000
            .species = SPECIES_SHUPPET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10002
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10001
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10003
            .species = SPECIES_DUSKULL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10005
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10004
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10006
    [DIFFICULTY_NORMAL][TRAINER_TATE_AND_LIZA_5] =
    {
#line 10007
        .trainerName = _("TATE&LIZA"),
#line 10008
        .trainerClass = TRAINER_CLASS_LEADER,
#line 10009
        .trainerPic = TRAINER_PIC_LEADER_TATE_AND_LIZA,
        .encounterMusic_gender =
#line 10011
            TRAINER_ENCOUNTER_MUSIC_FEMALE,
#line 10012
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10013
        .doubleBattle = TRUE,
#line 10014
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10016
            .species = SPECIES_HYPNO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10018
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10017
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10019
                MOVE_HYPNOSIS,
                MOVE_DREAM_EATER,
                MOVE_HEADBUTT,
                MOVE_PROTECT,
            },
            },
            {
#line 10024
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10026
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10025
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10027
                MOVE_EARTHQUAKE,
                MOVE_EXPLOSION,
                MOVE_PSYCHIC,
                MOVE_LIGHT_SCREEN,
            },
            },
            {
#line 10032
            .species = SPECIES_SLOWKING,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10034
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10033
            .lvl = 63,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10035
                MOVE_YAWN,
                MOVE_PSYCHIC,
                MOVE_CALM_MIND,
                MOVE_PROTECT,
            },
            },
            {
#line 10040
            .species = SPECIES_XATU,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10040
            .heldItem = ITEM_CHESTO_BERRY,
#line 10042
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10041
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10043
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CONFUSE_RAY,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10048
            .species = SPECIES_LUNATONE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10048
            .heldItem = ITEM_CHESTO_BERRY,
#line 10050
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10049
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10051
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_REST,
                MOVE_CALM_MIND,
            },
            },
            {
#line 10056
            .species = SPECIES_SOLROCK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10056
            .heldItem = ITEM_SITRUS_BERRY,
#line 10058
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10057
            .lvl = 65,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10059
                MOVE_SUNNY_DAY,
                MOVE_SOLAR_BEAM,
                MOVE_PSYCHIC,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10064
    [DIFFICULTY_NORMAL][TRAINER_ANGELO] =
    {
#line 10065
        .trainerName = _("ANGELO"),
#line 10066
        .trainerClass = TRAINER_CLASS_BUG_MANIAC,
#line 10067
        .trainerPic = TRAINER_PIC_BUG_MANIAC,
        .encounterMusic_gender =
#line 10069
            TRAINER_ENCOUNTER_MUSIC_SUSPICIOUS,
#line 10070
        .doubleBattle = FALSE,
#line 10071
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10073
            .species = SPECIES_EELEKTRIK,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10075
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10074
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10077
            .species = SPECIES_EMOLGA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10079
            .iv = TRAINER_PARTY_IVS(12, 12, 12, 12, 12, 12),
#line 10078
            .lvl = 28,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10081
    [DIFFICULTY_NORMAL][TRAINER_DARIUS] =
    {
#line 10082
        .trainerName = _("DARIUS"),
#line 10083
        .trainerClass = TRAINER_CLASS_BIRD_KEEPER,
#line 10084
        .trainerPic = TRAINER_PIC_BIRD_KEEPER,
        .encounterMusic_gender =
#line 10086
            TRAINER_ENCOUNTER_MUSIC_COOL,
#line 10087
        .doubleBattle = FALSE,
#line 10088
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10090
            .species = SPECIES_KLINKLANG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10092
            .iv = TRAINER_PARTY_IVS(24, 24, 24, 24, 24, 24),
#line 10091
            .lvl = 49,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10094
    [DIFFICULTY_NORMAL][TRAINER_STEVEN] =
    {
#line 10095
        .trainerName = _("STEVEN"),
#line 10096
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10097
        .trainerPic = TRAINER_PIC_STEVEN,
        .encounterMusic_gender =
#line 10099
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10100
        .items = { ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE, ITEM_FULL_RESTORE },
#line 10101
        .doubleBattle = FALSE,
#line 10102
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 6,
        .party = (const struct TrainerMon[])
        {
            {
#line 10104
            .species = SPECIES_SKARMORY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10106
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10105
            .lvl = 77,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10107
                MOVE_TOXIC,
                MOVE_AERIAL_ACE,
                MOVE_SPIKES,
                MOVE_STEEL_WING,
            },
            },
            {
#line 10112
            .species = SPECIES_CLAYDOL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10114
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10113
            .lvl = 75,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10115
                MOVE_REFLECT,
                MOVE_LIGHT_SCREEN,
                MOVE_ANCIENT_POWER,
                MOVE_EARTHQUAKE,
            },
            },
            {
#line 10120
            .species = SPECIES_AGGRON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10122
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10121
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10123
                MOVE_THUNDER,
                MOVE_EARTHQUAKE,
                MOVE_SOLAR_BEAM,
                MOVE_DRAGON_CLAW,
            },
            },
            {
#line 10128
            .species = SPECIES_CRADILY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10130
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10129
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10131
                MOVE_GIGA_DRAIN,
                MOVE_ANCIENT_POWER,
                MOVE_INGRAIN,
                MOVE_CONFUSE_RAY,
            },
            },
            {
#line 10136
            .species = SPECIES_ARMALDO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10138
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10137
            .lvl = 76,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10139
                MOVE_WATER_PULSE,
                MOVE_ANCIENT_POWER,
                MOVE_AERIAL_ACE,
                MOVE_SLASH,
            },
            },
            {
#line 10144
            .species = SPECIES_METAGROSS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10144
            .heldItem = ITEM_SITRUS_BERRY,
#line 10146
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10145
            .lvl = 78,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10147
                MOVE_EARTHQUAKE,
                MOVE_PSYCHIC,
                MOVE_METEOR_MASH,
                MOVE_SHADOW_BALL,
            },
            },
        },
    },
#line 10152
    [DIFFICULTY_NORMAL][TRAINER_ANABEL] =
    {
#line 10153
        .trainerName = _("ANABEL"),
#line 10154
        .trainerClass = TRAINER_CLASS_SALON_MAIDEN,
#line 10155
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10156
F_TRAINER_FEMALE | 
#line 10157
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10158
        .doubleBattle = FALSE,
#line 10159
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10161
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10163
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10162
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10165
    [DIFFICULTY_NORMAL][TRAINER_TUCKER] =
    {
#line 10166
        .trainerName = _("TUCKER"),
#line 10167
        .trainerClass = TRAINER_CLASS_DOME_ACE,
#line 10168
        .trainerPic = TRAINER_PIC_DOME_ACE_TUCKER,
        .encounterMusic_gender =
#line 10170
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10171
        .doubleBattle = FALSE,
#line 10172
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10174
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10176
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10175
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10178
    [DIFFICULTY_NORMAL][TRAINER_SPENSER] =
    {
#line 10179
        .trainerName = _("SPENSER"),
#line 10180
        .trainerClass = TRAINER_CLASS_PALACE_MAVEN,
#line 10181
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10183
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10184
        .doubleBattle = FALSE,
#line 10185
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10187
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10189
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10188
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10191
    [DIFFICULTY_NORMAL][TRAINER_GRETA] =
    {
#line 10192
        .trainerName = _("GRETA"),
#line 10193
        .trainerClass = TRAINER_CLASS_HIKER,
#line 10194
        .trainerPic = TRAINER_PIC_HIKER,
        .encounterMusic_gender =
#line 10195
F_TRAINER_FEMALE | 
#line 10196
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10197
        .doubleBattle = FALSE,
#line 10198
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10200
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10202
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10201
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10204
    [DIFFICULTY_NORMAL][TRAINER_NOLAND] =
    {
#line 10205
        .trainerName = _("GRUNT"),
#line 10206
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10207
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10209
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10210
        .doubleBattle = FALSE,
#line 10211
        .aiFlags = AI_FLAG_BASIC_TRAINER,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10213
            .species = SPECIES_BELDUM,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10215
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10214
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10217
    [DIFFICULTY_NORMAL][TRAINER_LUCY] =
    {
#line 10218
        .trainerName = _("GHOSTESS"),
#line 10219
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10220
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10221
F_TRAINER_FEMALE | 
#line 10222
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10223
        .doubleBattle = FALSE,
#line 10224
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10226
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10229
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10227
            .ability = ABILITY_THICK_FAT,
#line 10228
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10229
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10234
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10237
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10235
            .ability = ABILITY_WONDER_SKIN,
#line 10236
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10237
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10242
            .species = SPECIES_SHELGON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10245
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10243
            .ability = ABILITY_ROCK_HEAD,
#line 10244
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10245
                MOVE_DRAGON_CLAW,
                MOVE_FIRE_FANG,
                MOVE_ROCK_TOMB,
                MOVE_THUNDER_FANG,
            },
            },
            {
#line 10250
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10250
            .heldItem = ITEM_ASSAULT_VEST,
#line 10253
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10251
            .ability = ABILITY_CURSED_BODY,
#line 10252
            .lvl = 38,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10253
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10258
    [DIFFICULTY_NORMAL][TRAINER_BRANDON] =
    {
#line 10259
        .trainerName = _("JORDAN"),
#line 10260
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10261
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10263
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10264
        .doubleBattle = FALSE,
#line 10265
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10267
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10270
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10268
            .ability = ABILITY_CHLOROPHYLL,
#line 10269
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10270
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10275
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10275
            .heldItem = ITEM_EVIOLITE,
#line 10278
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10276
            .ability = ABILITY_PRESSURE,
#line 10277
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10278
                MOVE_SHADOW_SNEAK,
                MOVE_SHADOW_PUNCH,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10283
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10286
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10284
            .ability = ABILITY_LIQUID_OOZE,
#line 10285
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10286
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10291
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10294
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10292
            .ability = ABILITY_OBLIVIOUS,
#line 10293
            .lvl = 40,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10294
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
        },
    },
#line 10300
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_2] =
    {
#line 10301
        .trainerName = _("JORDAN"),
#line 10302
        .trainerClass = TRAINER_CLASS_PYRAMID_KING,
#line 10303
        .trainerPic = TRAINER_PIC_PYRAMID_KING_BRANDON,
        .encounterMusic_gender =
#line 10305
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10306
        .doubleBattle = FALSE,
#line 10307
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 5,
        .party = (const struct TrainerMon[])
        {
            {
#line 10309
            .species = SPECIES_TROPIUS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10309
            .heldItem = ITEM_WIDE_LENS,
#line 10312
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10310
            .ability = ABILITY_CHLOROPHYLL,
#line 10311
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10312
                MOVE_HURRICANE,
                MOVE_LEAF_STORM,
                MOVE_ZEN_HEADBUTT,
                MOVE_GIGA_IMPACT,
            },
            },
            {
#line 10317
            .species = SPECIES_DUSKNOIR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10317
            .heldItem = ITEM_LIFE_ORB,
#line 10320
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10318
            .ability = ABILITY_PRESSURE,
#line 10319
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10320
                MOVE_SHADOW_SNEAK,
                MOVE_POLTERGEIST,
                MOVE_BRICK_BREAK,
                MOVE_THUNDER_PUNCH,
            },
            },
            {
#line 10325
            .species = SPECIES_SWALOT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10325
            .heldItem = ITEM_BLACK_SLUDGE,
#line 10328
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10326
            .ability = ABILITY_LIQUID_OOZE,
#line 10327
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10328
                MOVE_GUNK_SHOT,
                MOVE_EARTHQUAKE,
                MOVE_KNOCK_OFF,
                MOVE_ICE_PUNCH,
            },
            },
            {
#line 10333
            .species = SPECIES_WHISCASH,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10333
            .heldItem = ITEM_CHOICE_SPECS,
#line 10336
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10334
            .ability = ABILITY_OBLIVIOUS,
#line 10335
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10336
                MOVE_ICE_BEAM,
                MOVE_SURF,
                MOVE_EARTH_POWER,
                MOVE_FUTURE_SIGHT,
            },
            },
            {
#line 10341
            .species = SPECIES_RAYQUAZA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10341
            .heldItem = ITEM_ASSAULT_VEST,
#line 10344
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10342
            .ability = ABILITY_AIR_LOCK,
#line 10343
            .lvl = 66,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10344
                MOVE_DRACO_METEOR,
                MOVE_DRAGON_ASCENT,
                MOVE_EXTREME_SPEED,
                MOVE_FLAMETHROWER,
            },
            },
        },
    },
#line 10349
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_3] =
    {
#line 10350
        .trainerName = _("GHOSTESS"),
#line 10351
        .trainerClass = TRAINER_CLASS_PIKE_QUEEN,
#line 10352
        .trainerPic = TRAINER_PIC_PIKE_QUEEN_LUCY,
        .encounterMusic_gender =
#line 10353
F_TRAINER_FEMALE | 
#line 10354
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10355
        .doubleBattle = FALSE,
#line 10356
        .aiFlags = AI_FLAG_SMART_TRAINER,
        .partySize = 4,
        .party = (const struct TrainerMon[])
        {
            {
#line 10358
            .species = SPECIES_GRUMPIG,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10358
            .heldItem = ITEM_EXPERT_BELT,
#line 10361
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10359
            .ability = ABILITY_THICK_FAT,
#line 10360
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10361
                MOVE_PSYCHIC,
                MOVE_POWER_GEM,
                MOVE_ENERGY_BALL,
                MOVE_DAZZLING_GLEAM,
            },
            },
            {
#line 10366
            .species = SPECIES_DELCATTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10366
            .heldItem = ITEM_MUSCLE_BAND,
#line 10369
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10367
            .ability = ABILITY_WONDER_SKIN,
#line 10368
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10369
                MOVE_FAKE_OUT,
                MOVE_PLAY_ROUGH,
                MOVE_DOUBLE_EDGE,
                MOVE_ROCK_SMASH,
            },
            },
            {
#line 10374
            .species = SPECIES_SALAMENCE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10374
            .heldItem = ITEM_WIDE_LENS,
#line 10377
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10375
            .ability = ABILITY_INTIMIDATE,
#line 10376
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10377
                MOVE_FIRE_BLAST,
                MOVE_DRACO_METEOR,
                MOVE_HURRICANE,
                MOVE_HYDRO_PUMP,
            },
            },
            {
#line 10382
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10382
            .heldItem = ITEM_ASSAULT_VEST,
#line 10385
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10383
            .ability = ABILITY_CURSED_BODY,
#line 10384
            .lvl = 64,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            .moves = {
#line 10385
                MOVE_SHADOW_SNEAK,
                MOVE_GUNK_SHOT,
                MOVE_POLTERGEIST,
                MOVE_LASH_OUT,
            },
            },
        },
    },
#line 10390
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_4] =
    {
#line 10391
        .trainerName = _("GRUNT"),
#line 10392
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10393
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10395
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10396
        .doubleBattle = FALSE,
#line 10397
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10399
            .species = SPECIES_GOLBAT,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10401
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10400
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10402
    [DIFFICULTY_NORMAL][TRAINER_ANDRES_5] =
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
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10411
            .species = SPECIES_DUSCLOPS,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10413
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10412
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10414
    [DIFFICULTY_NORMAL][TRAINER_CORY_2] =
    {
#line 10415
        .trainerName = _("GRUNT"),
#line 10416
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10417
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10419
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10420
        .doubleBattle = FALSE,
#line 10421
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10423
            .species = SPECIES_SKITTY,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10425
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10424
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10426
    [DIFFICULTY_NORMAL][TRAINER_CORY_3] =
    {
#line 10427
        .trainerName = _("GRUNT"),
#line 10428
        .trainerClass = TRAINER_CLASS_FACTORY_HEAD,
#line 10429
        .trainerPic = TRAINER_PIC_FACTORY_HEAD_NOLAND,
        .encounterMusic_gender =
#line 10431
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10432
        .doubleBattle = FALSE,
#line 10433
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10435
            .species = SPECIES_GULPIN,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10437
            .iv = TRAINER_PARTY_IVS(31, 31, 31, 31, 31, 31),
#line 10436
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10438
    [DIFFICULTY_NORMAL][TRAINER_CORY_4] =
    {
#line 10439
        .trainerName = _("CORY"),
#line 10440
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10441
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10443
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10444
        .doubleBattle = FALSE,
#line 10445
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10447
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10449
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10448
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10451
            .species = SPECIES_MACHOP,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10453
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10452
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10455
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10457
            .iv = TRAINER_PARTY_IVS(3, 3, 3, 3, 3, 3),
#line 10456
            .lvl = 34,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10459
    [DIFFICULTY_NORMAL][TRAINER_CORY_5] =
    {
#line 10460
        .trainerName = _("CORY"),
#line 10461
        .trainerClass = TRAINER_CLASS_SAILOR,
#line 10462
        .trainerPic = TRAINER_PIC_SAILOR,
        .encounterMusic_gender =
#line 10464
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10465
        .doubleBattle = FALSE,
#line 10466
        .aiFlags = AI_FLAG_CHECK_BAD_MOVE,
        .partySize = 3,
        .party = (const struct TrainerMon[])
        {
            {
#line 10468
            .species = SPECIES_PELIPPER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10470
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10469
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10472
            .species = SPECIES_MACHOKE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10474
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10473
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10476
            .species = SPECIES_TENTACRUEL,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10478
            .iv = TRAINER_PARTY_IVS(4, 4, 4, 4, 4, 4),
#line 10477
            .lvl = 36,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10480
    [DIFFICULTY_NORMAL][TRAINER_MARIELA] =
    {
#line 10481
        .trainerName = _("MARIELA"),
#line 10482
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10483
        .trainerPic = TRAINER_PIC_PSYCHIC_F,
        .encounterMusic_gender =
#line 10484
F_TRAINER_FEMALE | 
#line 10485
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10486
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10488
            .species = SPECIES_CHIMECHO,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10490
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10489
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10492
    [DIFFICULTY_NORMAL][TRAINER_ALVARO] =
    {
#line 10493
        .trainerName = _("ALVARO"),
#line 10494
        .trainerClass = TRAINER_CLASS_PSYCHIC,
#line 10495
        .trainerPic = TRAINER_PIC_PSYCHIC_M,
        .encounterMusic_gender =
#line 10497
            TRAINER_ENCOUNTER_MUSIC_INTENSE,
#line 10498
        .doubleBattle = FALSE,
        .partySize = 2,
        .party = (const struct TrainerMon[])
        {
            {
#line 10500
            .species = SPECIES_BANETTE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10502
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10501
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
            {
#line 10504
            .species = SPECIES_KADABRA,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10506
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10505
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10508
    [DIFFICULTY_NORMAL][TRAINER_EVERETT] =
    {
#line 10509
        .trainerName = _("EVERETT"),
#line 10510
        .trainerClass = TRAINER_CLASS_GENTLEMAN,
#line 10511
        .trainerPic = TRAINER_PIC_GENTLEMAN,
        .encounterMusic_gender =
#line 10513
            TRAINER_ENCOUNTER_MUSIC_RICH,
#line 10514
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10516
            .species = SPECIES_WOBBUFFET,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10518
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10517
            .lvl = 41,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10520
    [DIFFICULTY_NORMAL][TRAINER_RED] =
    {
#line 10521
        .trainerName = _("RED"),
#line 10522
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10523
        .trainerPic = TRAINER_PIC_RED,
        .encounterMusic_gender =
#line 10525
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10526
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10528
            .species = SPECIES_CHARMANDER,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10530
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10529
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10532
    [DIFFICULTY_NORMAL][TRAINER_LEAF] =
    {
#line 10533
        .trainerName = _("LEAF"),
#line 10534
        .trainerClass = TRAINER_CLASS_RIVAL,
#line 10535
        .trainerPic = TRAINER_PIC_LEAF,
        .encounterMusic_gender =
#line 10536
F_TRAINER_FEMALE | 
#line 10537
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10538
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10540
            .species = SPECIES_BULBASAUR,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10542
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10541
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10544
    [DIFFICULTY_NORMAL][TRAINER_BRENDAN_PLACEHOLDER] =
    {
#line 10545
        .trainerName = _("SAMUEL"),
#line 10546
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10547
        .trainerPic = TRAINER_PIC_RS_BRENDAN,
        .encounterMusic_gender =
#line 10549
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10550
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10552
            .species = SPECIES_GROUDON,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10554
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10553
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
#line 10556
    [DIFFICULTY_NORMAL][TRAINER_MAY_PLACEHOLDER] =
    {
#line 10557
        .trainerName = _("MAY"),
#line 10558
        .trainerClass = TRAINER_CLASS_RS_PROTAG,
#line 10559
        .trainerPic = TRAINER_PIC_RS_MAY,
        .encounterMusic_gender =
#line 10560
F_TRAINER_FEMALE | 
#line 10561
            TRAINER_ENCOUNTER_MUSIC_MALE,
#line 10562
        .doubleBattle = FALSE,
        .partySize = 1,
        .party = (const struct TrainerMon[])
        {
            {
#line 10564
            .species = SPECIES_KYOGRE,
            .gender = TRAINER_MON_RANDOM_GENDER,
#line 10566
            .iv = TRAINER_PARTY_IVS(0, 0, 0, 0, 0, 0),
#line 10565
            .lvl = 5,
            .nature = NATURE_HARDY,
            .dynamaxLevel = MAX_DYNAMAX_LEVEL,
            },
        },
    },
