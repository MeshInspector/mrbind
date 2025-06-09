#pragma once


typedef enum MR_C_PassBy
{
    MR_C_PassBy_DefaultConstruct, // Default-construct this parameter, the associated pointer must be null.
    MR_C_PassBy_Copy, // Copy the object into the function. For most types this doesn't modify the input object, so feel free to cast away constness from it if needed.
    MR_C_PassBy_Move, // Move the object into the function. The input object remains alive and still needs to be manually destroyed after.
    MR_C_PassBy_DefaultArgument, // If this function has a default argument value for this parameter, uses that; illegal otherwise. The associated pointer must be null.
} MR_C_PassBy;

