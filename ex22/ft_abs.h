
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value)	((Value >> 31) ^ (Value)) - (Value >> 31)

#endif
