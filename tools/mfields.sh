#!/bin/bash
# usage: mfields.sh <TypeFullNameSuffix> [dumpFile]  -> prints field names/types of that managed type
T="$1"; F="${2:-/root/managed_CookingGraph.Runtime.txt}"
awk -v t="$T" '
/^    - token: 0x04/ {tok=$3; dt=""; nm=""; ft=""}
/declaring_type: / {dt=$2}
/^      name: / {nm=$2}
/field_type: / {ft=$2; if (dt ~ t"$") print dt, nm, ft}
' "$F"
