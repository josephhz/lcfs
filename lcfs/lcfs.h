#ifndef _LC_H
#define _LC_H

/* Supported ioctls */
enum ioctl_cmd {
    LAYER_CREATE = 101,             /* Create a layer */
    LAYER_CREATE_RW = 102,          /* Create a read-write layer */
    LAYER_REMOVE = 103,             /* Remove a layer */
    LAYER_MOUNT = 104,              /* Mount a layer */
    LAYER_UMOUNT = 105,             /* Unmount a layer */
    LAYER_STAT = 106,               /* Display global or layer stats */
    UMOUNT_ALL = 107,               /* Unmount all layers */
    CLEAR_STAT = 108,               /* Clear stats for a layer */
};

#endif
