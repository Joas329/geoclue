/*
    Copyright (C) 2015 Jolla Ltd.
    Copyright (C) 2018 Matti Lehtimäki <matti.lehtimaki@gmail.com>
    Copyright (C) 2024 Bardia Moshiri <fakeshell@bardia.tech>

    This file is part of geoclue-hybris.

    Geoclue-hybris is free software; you can redistribute it and/or
    modify it under the terms of the GNU Lesser General Public
    License as published by the Free Software Foundation; either
    version 2.1 of the License.
*/

#ifndef GNSS_BINDER_TYPES_H
#define GNSS_BINDER_TYPES_H

#include <gutil_types.h>

#define ALIGNED(x) __attribute__ ((aligned(x)))

typedef struct geoclue_binder_gnss GeoclueBinderGnss;

typedef enum gnss_max {
    SVS_COUNT = 64u,
} GnssMax;

typedef int64_t GnssUtcTime;

enum {
    UNKNOWN = 0,
    GPS = 1,
    SBAS = 2,
    GLONASS = 3,
    QZSS = 4,
    BEIDOU = 5,
    GALILEO = 6,
};

enum {
    HAS_LAT_LONG = 1, // 0x0001
    HAS_ALTITUDE = 2, // 0x0002
    HAS_SPEED = 4, // 0x0004
    HAS_BEARING = 8, // 0x0008
    HAS_HORIZONTAL_ACCURACY = 16, // 0x0010
    HAS_VERTICAL_ACCURACY = 32, // 0x0020
    HAS_SPEED_ACCURACY = 64, // 0x0040
    HAS_BEARING_ACCURACY = 128, // 0x0080
};

enum {
    HYBRIS_GNSS_SV_FLAGS_NONE = 0,
    HYBRIS_GNSS_SV_FLAGS_HAS_EPHEMERIS_DATA = 1, //(1 << 0)
    HYBRIS_GNSS_SV_FLAGS_HAS_ALMANAC_DATA = 2, //(1 << 1)
    HYBRIS_GNSS_SV_FLAGS_USED_IN_FIX = 4, //(1 << 2)
    HYBRIS_GNSS_SV_FLAGS_HAS_CARRIER_FREQUENCY = 8, //(1 << 3)
};

typedef struct gnss_location {
    guint16 gnssLocationFlags ALIGNED(2);
    gdouble latitudeDegrees ALIGNED(8);
    gdouble longitudeDegrees ALIGNED(8);
    gdouble altitudeMeters ALIGNED(8);
    gfloat speedMetersPerSec ALIGNED(4);
    gfloat bearingDegrees ALIGNED(4);
    gfloat horizontalAccuracyMeters ALIGNED(4);
    gfloat verticalAccuracyMeters ALIGNED(4);
    gfloat speedAccuracyMetersPerSecond ALIGNED(4);
    gfloat bearingAccuracyDegrees ALIGNED(4);
    gint64 timestamp ALIGNED(8);
} ALIGNED(8) GnssLocation;

G_STATIC_ASSERT(sizeof(GnssLocation) == 64);

typedef struct gnss_sv_info {
    gint16 svid ALIGNED(2);
    guint8 constellation ALIGNED(1);
    gfloat cN0Dbhz ALIGNED(4);
    gfloat elevationDegrees ALIGNED(4);
    gfloat azimuthDegrees ALIGNED(4);
    gfloat carrierFrequencyHz ALIGNED(4);
    guint8 svFlag ALIGNED(1);
} ALIGNED(4) GnssSvInfo;

G_STATIC_ASSERT(sizeof(GnssSvInfo) == 24);

typedef struct gnss_sv_status {
    gint32 numSvs ALIGNED(4);
    GnssSvInfo gnssSvList[64] ALIGNED(4);
} ALIGNED(4) GnssSvStatus;

G_STATIC_ASSERT(sizeof(GnssSvStatus) == 1540);

typedef guint8 AGnssType;
typedef guint8 AGnssStatusValue;

enum {
    HYBRIS_GNSS_STATUS_NONE = 0,
    HYBRIS_GNSS_STATUS_SESSION_BEGIN = 1,
    HYBRIS_GNSS_STATUS_SESSION_END = 2,
    HYBRIS_GNSS_STATUS_ENGINE_ON = 3,
    HYBRIS_GNSS_STATUS_ENGINE_OFF = 4,
};

enum {
    HYBRIS_GNSS_LOCATION_HAS_LAT_LONG = 1, // 0x0001
    HYBRIS_GNSS_LOCATION_HAS_ALTITUDE = 2, // 0x0002
    HYBRIS_GNSS_LOCATION_HAS_SPEED = 4, // 0x0004
    HYBRIS_GNSS_LOCATION_HAS_BEARING = 8, // 0x0008
    HYBRIS_GNSS_LOCATION_HAS_HORIZONTAL_ACCURACY = 16, // 0x0010
    HYBRIS_GNSS_LOCATION_HAS_VERTICAL_ACCURACY = 32, // 0x0020
    HYBRIS_GNSS_LOCATION_HAS_SPEED_ACCURACY = 64, // 0x0040
    HYBRIS_GNSS_LOCATION_HAS_BEARING_ACCURACY = 128, // 0x0080
};

enum Capabilities : guint32 {
    SCHEDULING                      = 1 << 0,
    MSB                             = 1 << 1,
    MSA                             = 1 << 2,
    SINGLE_SHOT                     = 1 << 3,
    ON_DEMAND_TIME                  = 1 << 4,
    GEOFENCING                      = 1 << 5,
    MEASUREMENTS                    = 1 << 6,
    NAV_MESSAGES                    = 1 << 7
};

enum ID : guint32 {
    IMSI    = 1 << 0L,
    MSISDN  = 1 << 1L
};

enum SetIDType : guint8 {
    SETID_NONE    = 0,
    SETID_IMSI    = 1,
    SETID_MSISDM  = 2
};

enum AGnssStatusValue : guint8 {
    /** GNSS requests data connection for AGNSS. */
    REQUEST_AGNSS_DATA_CONN  = 1,
    /** GNSS releases the AGNSS data connection. */
    RELEASE_AGNSS_DATA_CONN  = 2,
    /** AGNSS data connection initiated */
    AGNSS_STATUS_DATA_CONNECTED     = 3,
    /** AGNSS data connection completed */
    AGNSS_STATUS_DATA_CONN_DONE     = 4,
    /** AGNSS data connection failed */
    AGNSS_STATUS_DATA_CONN_FAILED   = 5
};

enum AGnssType : guint8 {
    TYPE_SUPL         = 1,
    TYPE_C2K          = 2,
    TYPE_SUPL_EIMS    = 3,
    TYPE_SUPL_IMS     = 4
};

typedef struct agnss_status_ip_v4 {
    AGnssType type ALIGNED(1);
    AGnssStatusValue status ALIGNED(1);
    gint32 ipV4Addr ALIGNED(4);
} ALIGNED(4) AGnssStatusIpV4;

G_STATIC_ASSERT(sizeof(AGnssStatusIpV4) == 8);

typedef struct agnss_status_ip_v6 {
    AGnssType type ALIGNED(1);
    AGnssStatusValue status ALIGNED(1);
    guint8 ipV6Addr[16] ALIGNED(1);
} ALIGNED(1) AGnssStatusIpV6;

G_STATIC_ASSERT(sizeof(AGnssStatusIpV6) == 18);

#endif // GNSS_BINDER_TYPES_H
