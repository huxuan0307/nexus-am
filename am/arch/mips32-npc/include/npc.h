#ifndef __NPC_H__
#define __NPC_H__

#define VMEM_ADDR ((void *)0xc0000000)
#define SCR_WIDTH 320
#define SCR_HEIGHT 200
#define SCR_SIZE (SCR_WIDTH * SCR_HEIGHT)
#define KEY_CODE_ADDR ((volatile unsigned int *)0xe0000000)
#define KEY_CODE (*KEY_CODE_ADDR)
#define HEAP_START ((void *)0xf0000000)
#define HEAP_END ((void *)0xf8000000)

static inline u8 R(_Pixel p) { return p >> 16; }
static inline u8 G(_Pixel p) { return p >> 8; }
static inline u8 B(_Pixel p) { return p; }

static inline _Pixel pixel(u8 r, u8 g, u8 b) {
  return (r << 16) | (g << 8) | b;
}

struct TrapFrame{
  u32 at,
  v0,v1,
  a0,a1,a2,a3,
  t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,
  s0,s1,s2,s3,s4,s5,s6,s7,
  k0,k1,
  gp,sp,fp,ra;
};
void vga_init();
void serial_init();
void memory_init();
u32 GetCount();
void SetCompare(u32 compare);

#endif
