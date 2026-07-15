#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82BDC088"))) PPC_WEAK_FUNC(sub_82BDC088);
PPC_FUNC_IMPL(__imp__sub_82BDC088) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12448(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12448);
	// stw r4,12036(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12036, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10384(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10384);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bdc0c0
	if (cr6.eq) goto loc_82BDC0C0;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82bdc0c0
	if (cr6.eq) goto loc_82BDC0C0;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82bdc0c0
	if (cr6.eq) goto loc_82BDC0C0;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BDC0C0:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,53,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 53) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10384(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10384, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC118"))) PPC_WEAK_FUNC(sub_82BDC118);
PPC_FUNC_IMPL(__imp__sub_82BDC118) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12036(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12036);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC120"))) PPC_WEAK_FUNC(sub_82BDC120);
PPC_FUNC_IMPL(__imp__sub_82BDC120) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,12452(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12452);
	// stw r4,12040(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12040, ctx.r4.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// lwz r8,10388(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10388);
	// rlwinm r11,r8,16,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// beq cr6,0x82bdc158
	if (cr6.eq) goto loc_82BDC158;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// beq cr6,0x82bdc158
	if (cr6.eq) goto loc_82BDC158;
	// cmplwi cr6,r11,10
	cr6.compare<uint32_t>(r11.u32, 10, xer);
	// beq cr6,0x82bdc158
	if (cr6.eq) goto loc_82BDC158;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// bnelr cr6
	if (!cr6.eq) return;
loc_82BDC158:
	// rlwinm r10,r8,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 13) & 0x1;
	// xor. r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r7,r7,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// li r12,1
	r12.s64 = 1;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rldicr r12,r12,52,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 52) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r11,r8,0,16,11
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (r11.u64 & 0xF0000);
	// stw r11,10388(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10388, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC1B0"))) PPC_WEAK_FUNC(sub_82BDC1B0);
PPC_FUNC_IMPL(__imp__sub_82BDC1B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12040(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12040);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC1B8"))) PPC_WEAK_FUNC(sub_82BDC1B8);
PPC_FUNC_IMPL(__imp__sub_82BDC1B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10624(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10624, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,47,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 47) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC1E0"))) PPC_WEAK_FUNC(sub_82BDC1E0);
PPC_FUNC_IMPL(__imp__sub_82BDC1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10624(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10624);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC1F0"))) PPC_WEAK_FUNC(sub_82BDC1F0);
PPC_FUNC_IMPL(__imp__sub_82BDC1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10620(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10620, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// rldicr r12,r12,48,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 48) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC218"))) PPC_WEAK_FUNC(sub_82BDC218);
PPC_FUNC_IMPL(__imp__sub_82BDC218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,10620(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 10620);
	f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC228"))) PPC_WEAK_FUNC(sub_82BDC228);
PPC_FUNC_IMPL(__imp__sub_82BDC228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10616(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,29
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFC) | (ctx.r4.u64 & 0xFFFFFFFF00000003);
	// rldicr r12,r12,49,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10616, ctx.r4.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC250"))) PPC_WEAK_FUNC(sub_82BDC250);
PPC_FUNC_IMPL(__imp__sub_82BDC250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10616(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10616);
	// clrlwi r3,r11,30
	ctx.r3.u64 = r11.u32 & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC260"))) PPC_WEAK_FUNC(sub_82BDC260);
PPC_FUNC_IMPL(__imp__sub_82BDC260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,10688(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// li r12,1
	r12.s64 = 1;
	// rlwimi r4,r11,0,0,30
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFE) | (ctx.r4.u64 & 0xFFFFFFFF00000001);
	// rldicr r12,r12,35,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,10688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10688, ctx.r4.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC288"))) PPC_WEAK_FUNC(sub_82BDC288);
PPC_FUNC_IMPL(__imp__sub_82BDC288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10688(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10688);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC298"))) PPC_WEAK_FUNC(sub_82BDC298);
PPC_FUNC_IMPL(__imp__sub_82BDC298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwimi r11,r4,21,10,10
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 21) & 0x200000) | (r11.u64 & 0xFFFFFFFFFFDFFFFF);
	// stw r11,10568(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10568, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC2B8"))) PPC_WEAK_FUNC(sub_82BDC2B8);
PPC_FUNC_IMPL(__imp__sub_82BDC2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10568(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10568);
	// rlwinm r3,r11,11,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 11) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC2C8"))) PPC_WEAK_FUNC(sub_82BDC2C8);
PPC_FUNC_IMPL(__imp__sub_82BDC2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,1
	r12.s64 = 1;
	// stw r4,10456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10456, ctx.r4.u32);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// rldicr r12,r12,38,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC2E8"))) PPC_WEAK_FUNC(sub_82BDC2E8);
PPC_FUNC_IMPL(__imp__sub_82BDC2E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10456(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC2F0"))) PPC_WEAK_FUNC(sub_82BDC2F0);
PPC_FUNC_IMPL(__imp__sub_82BDC2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,4,27,27
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0x10) | (r11.u64 & 0xFFFFFFFFFFFFFFEF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC310"))) PPC_WEAK_FUNC(sub_82BDC310);
PPC_FUNC_IMPL(__imp__sub_82BDC310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwinm r3,r11,28,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC320"))) PPC_WEAK_FUNC(sub_82BDC320);
PPC_FUNC_IMPL(__imp__sub_82BDC320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10556(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10556);
	// rlwimi r11,r4,24,0,7
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 24) & 0xFF000000) | (r11.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,10556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10556, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,512
	r11.u64 = r11.u64 | 512;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC340"))) PPC_WEAK_FUNC(sub_82BDC340);
PPC_FUNC_IMPL(__imp__sub_82BDC340) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,10556(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10556);
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// rlwimi r11,r10,0,24,29
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFC) | (r11.u64 & 0xFFFFFFFFFFFFFF03);
	// clrlwi r3,r11,24
	ctx.r3.u64 = r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC358"))) PPC_WEAK_FUNC(sub_82BDC358);
PPC_FUNC_IMPL(__imp__sub_82BDC358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10700(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10700, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,32,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC380"))) PPC_WEAK_FUNC(sub_82BDC380);
PPC_FUNC_IMPL(__imp__sub_82BDC380) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10700(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10700);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC388"))) PPC_WEAK_FUNC(sub_82BDC388);
PPC_FUNC_IMPL(__imp__sub_82BDC388) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10692(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10692, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,34,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC3B0"))) PPC_WEAK_FUNC(sub_82BDC3B0);
PPC_FUNC_IMPL(__imp__sub_82BDC3B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10692(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10692);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC3B8"))) PPC_WEAK_FUNC(sub_82BDC3B8);
PPC_FUNC_IMPL(__imp__sub_82BDC3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10704(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10704, temp.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC3D8"))) PPC_WEAK_FUNC(sub_82BDC3D8);
PPC_FUNC_IMPL(__imp__sub_82BDC3D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10704(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10704);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC3E0"))) PPC_WEAK_FUNC(sub_82BDC3E0);
PPC_FUNC_IMPL(__imp__sub_82BDC3E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lfs f0,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	f0.f64 = double(temp.f32);
	// stfs f0,10696(r3)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 10696, temp.u32);
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,33,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 33) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r10,r12
	r11.u64 = ctx.r10.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC408"))) PPC_WEAK_FUNC(sub_82BDC408);
PPC_FUNC_IMPL(__imp__sub_82BDC408) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,10696(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10696);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC410"))) PPC_WEAK_FUNC(sub_82BDC410);
PPC_FUNC_IMPL(__imp__sub_82BDC410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,20,9,11
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 20) & 0x700000) | (r11.u64 & 0xFFFFFFFFFF8FFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC430"))) PPC_WEAK_FUNC(sub_82BDC430);
PPC_FUNC_IMPL(__imp__sub_82BDC430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,12,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC440"))) PPC_WEAK_FUNC(sub_82BDC440);
PPC_FUNC_IMPL(__imp__sub_82BDC440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// lbz r10,10943(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10943);
	// rlwimi r11,r4,17,12,14
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 17) & 0xE0000) | (r11.u64 & 0xFFFFFFFFFFF1FFFF);
	// rlwinm. r10,r10,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, r11.u32);
	// bne 0x82bdc478
	if (!cr0.eq) goto loc_82BDC478;
	// rlwinm r11,r11,0,12,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xE0000;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bne cr6,0x82bdc478
	if (!cr6.eq) goto loc_82BDC478;
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r12,-257
	r12.s64 = -257;
	// and r11,r11,r12
	r11.u64 = r11.u64 & r12.u64;
	// b 0x82bdc480
	goto loc_82BDC480;
loc_82BDC478:
	// ld r11,40(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_82BDC480:
	// std r11,40(r3)
	PPC_STORE_U64(ctx.r3.u32 + 40, r11.u64);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC498"))) PPC_WEAK_FUNC(sub_82BDC498);
PPC_FUNC_IMPL(__imp__sub_82BDC498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,15,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC4A8"))) PPC_WEAK_FUNC(sub_82BDC4A8);
PPC_FUNC_IMPL(__imp__sub_82BDC4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,3,28,28
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 3) & 0x8) | (r11.u64 & 0xFFFFFFFFFFFFFFF7);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC4C8"))) PPC_WEAK_FUNC(sub_82BDC4C8);
PPC_FUNC_IMPL(__imp__sub_82BDC4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,29,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC4D8"))) PPC_WEAK_FUNC(sub_82BDC4D8);
PPC_FUNC_IMPL(__imp__sub_82BDC4D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,2,29,29
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 2) & 0x4) | (r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC4F8"))) PPC_WEAK_FUNC(sub_82BDC4F8);
PPC_FUNC_IMPL(__imp__sub_82BDC4F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC508"))) PPC_WEAK_FUNC(sub_82BDC508);
PPC_FUNC_IMPL(__imp__sub_82BDC508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwimi r11,r4,5,26,26
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 5) & 0x20) | (r11.u64 & 0xFFFFFFFFFFFFFFDF);
	// stw r11,10560(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10560, r11.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC528"))) PPC_WEAK_FUNC(sub_82BDC528);
PPC_FUNC_IMPL(__imp__sub_82BDC528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,10560(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10560);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC538"))) PPC_WEAK_FUNC(sub_82BDC538);
PPC_FUNC_IMPL(__imp__sub_82BDC538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stb r4,10562(r3)
	PPC_STORE_U8(ctx.r3.u32 + 10562, ctx.r4.u8);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC550"))) PPC_WEAK_FUNC(sub_82BDC550);
PPC_FUNC_IMPL(__imp__sub_82BDC550) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,10562(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 10562);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC558"))) PPC_WEAK_FUNC(sub_82BDC558);
PPC_FUNC_IMPL(__imp__sub_82BDC558) {
	PPC_FUNC_PROLOGUE();
	// stw r4,13596(r3)
	PPC_STORE_U32(ctx.r3.u32 + 13596, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC560"))) PPC_WEAK_FUNC(sub_82BDC560);
PPC_FUNC_IMPL(__imp__sub_82BDC560) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13596);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC568"))) PPC_WEAK_FUNC(sub_82BDC568);
PPC_FUNC_IMPL(__imp__sub_82BDC568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwimi r11,r4,23,2,8
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 23) & 0x3F800000) | (r11.u64 & 0xFFFFFFFFC07FFFFF);
	// stw r11,11852(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11852, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC578"))) PPC_WEAK_FUNC(sub_82BDC578);
PPC_FUNC_IMPL(__imp__sub_82BDC578) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,11852(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11852);
	// rlwinm r3,r11,9,25,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x7F;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC588"))) PPC_WEAK_FUNC(sub_82BDC588);
PPC_FUNC_IMPL(__imp__sub_82BDC588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lbz r9,11924(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11924);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,-11424
	ctx.r8.s64 = ctx.r8.s64 + -11424;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 22) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,11,20,20
	r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 11) & 0x800) | (r29.u64 & 0xFFFFFFFFFFFFF7FF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,21,9,10
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0x600000) | (r31.u64 & 0xFFFFFFFFFF9FFFFF);
	// rlwimi r31,r9,21,4,6
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 21) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lbz r9,12002(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12002);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDC650"))) PPC_WEAK_FUNC(sub_82BDC650);
PPC_FUNC_IMPL(__imp__sub_82BDC650) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r10,21,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// rlwinm r10,r9,11,21,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0x7FF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC688"))) PPC_WEAK_FUNC(sub_82BDC688);
PPC_FUNC_IMPL(__imp__sub_82BDC688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FFFF) | (r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FF00000) | (r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = r11.s64 + 12002;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC720"))) PPC_WEAK_FUNC(sub_82BDC720);
PPC_FUNC_IMPL(__imp__sub_82BDC720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12002);
	// rlwinm r3,r11,31,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC730"))) PPC_WEAK_FUNC(sub_82BDC730);
PPC_FUNC_IMPL(__imp__sub_82BDC730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b2c
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lbz r9,11924(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 11924);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// rotlwi r9,r9,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// addi r8,r8,-11424
	ctx.r8.s64 = ctx.r8.s64 + -11424;
	// rlwinm r7,r5,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r4,r4,32
	ctx.r4.s64 = ctx.r4.s64 + 32;
	// lwz r31,12(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// li r30,1
	r30.s64 = 1;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// rlwinm r6,r6,21,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 21) & 0x1;
	// lwzx r8,r9,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r29,r7,10,21,21
	r29.u64 = (__builtin_rotateleft32(ctx.r7.u32, 10) & 0x400) | (r29.u64 & 0xFFFFFFFFFFFFFBFF);
	// or r9,r6,r7
	ctx.r9.u64 = ctx.r6.u64 | ctx.r7.u64;
	// stw r29,16(r11)
	PPC_STORE_U32(r11.u32 + 16, r29.u32);
	// rldicr r6,r30,63,63
	ctx.r6.u64 = __builtin_rotateleft64(r30.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// clrldi r8,r4,32
	ctx.r8.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// srd r8,r6,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r8.u8 & 0x7F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rlwimi r31,r9,19,11,12
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0x180000) | (r31.u64 & 0xFFFFFFFFFFE7FFFF);
	// rlwimi r31,r9,19,4,6
	r31.u64 = (__builtin_rotateleft32(ctx.r9.u32, 19) & 0xE000000) | (r31.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r31,12(r11)
	PPC_STORE_U32(r11.u32 + 12, r31.u32);
	// lbz r9,12002(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 12002);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(r31.u32, 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwimi r6,r7,31,13,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFF80000);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwimi r6,r7,31,1,11
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 31) & 0x7FF00000) | (ctx.r6.u64 & 0xFFFFFFFF800FFFFF);
	// andc r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// rlwinm r7,r6,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0xFFF;
	// and r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 & ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwimi r10,r29,0,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(r29.u32, 0) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// stw r10,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDC7F8"))) PPC_WEAK_FUNC(sub_82BDC7F8);
PPC_FUNC_IMPL(__imp__sub_82BDC7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r11,r10,22,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// rlwinm r10,r9,13,19,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 13) & 0x1FFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & r11.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwimi r10,r11,0,29,29
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0x4) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r3,r10,29
	ctx.r3.u64 = ctx.r10.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC830"))) PPC_WEAK_FUNC(sub_82BDC830);
PPC_FUNC_IMPL(__imp__sub_82BDC830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// or r6,r9,r5
	ctx.r6.u64 = ctx.r9.u64 | ctx.r5.u64;
	// rldicr r31,r8,63,63
	r31.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r5,r30,31,13,31
	ctx.r5.u64 = (__builtin_rotateleft32(r30.u32, 31) & 0x7FFFF) | (ctx.r5.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r5,r30,31,1,11
	ctx.r5.u64 = (__builtin_rotateleft32(r30.u32, 31) & 0x7FF00000) | (ctx.r5.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r30,r7,32
	r30.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r7,r5,13,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFF;
	// srd r5,r31,r30
	ctx.r5.u64 = r30.u8 & 0x40 ? 0 : (r31.u64 >> (r30.u8 & 0x7F));
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = r11.s64 + 12002;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r5,r11
	r11.u64 = ctx.r5.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC8C0"))) PPC_WEAK_FUNC(sub_82BDC8C0);
PPC_FUNC_IMPL(__imp__sub_82BDC8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12002);
	// clrlwi r3,r11,31
	ctx.r3.u64 = r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC8D0"))) PPC_WEAK_FUNC(sub_82BDC8D0);
PPC_FUNC_IMPL(__imp__sub_82BDC8D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,23,7,8
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 23) & 0x1800000) | (ctx.r8.u64 & 0xFFFFFFFFFE7FFFFF);
	// stw r8,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC910"))) PPC_WEAK_FUNC(sub_82BDC910);
PPC_FUNC_IMPL(__imp__sub_82BDC910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1164(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1164);
	// rlwinm r3,r11,9,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 9) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC928"))) PPC_WEAK_FUNC(sub_82BDC928);
PPC_FUNC_IMPL(__imp__sub_82BDC928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r30{};
	PPCRegister r31{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// lbz r9,12002(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 12002);
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r9,r9,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// or r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r9,r6,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rldicr r5,r5,63,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// mr r30,r8
	r30.u64 = ctx.r8.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwimi r30,r31,31,13,31
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FFFF) | (r30.u64 & 0xFFFFFFFFFFF80000);
	// andc r8,r6,r9
	ctx.r8.u64 = ctx.r6.u64 & ~ctx.r9.u64;
	// rlwimi r30,r31,31,1,11
	r30.u64 = (__builtin_rotateleft32(r31.u32, 31) & 0x7FF00000) | (r30.u64 & 0xFFFFFFFF800FFFFF);
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwinm r31,r30,13,20,31
	r31.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 13) & 0xFFF;
	// srd r7,r5,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 >> (ctx.r7.u8 & 0x7F));
	// and r9,r31,r9
	ctx.r9.u64 = r31.u64 & ctx.r9.u64;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r11,12002
	ctx.r9.s64 = r11.s64 + 12002;
	// rlwimi r8,r4,0,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stw r8,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r8.u32);
	// stb r6,12002(r11)
	PPC_STORE_U8(r11.u32 + 12002, ctx.r6.u8);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// ld r30,-16(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC9C0"))) PPC_WEAK_FUNC(sub_82BDC9C0);
PPC_FUNC_IMPL(__imp__sub_82BDC9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r11,12002(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 12002);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDC9D0"))) PPC_WEAK_FUNC(sub_82BDC9D0);
PPC_FUNC_IMPL(__imp__sub_82BDC9D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdc9f0
	if (!cr0.eq) goto loc_82BDC9F0;
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdca2c
	if (cr0.eq) goto loc_82BDCA2C;
loc_82BDC9F0:
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 12);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-11424
	ctx.r10.s64 = ctx.r10.s64 + -11424;
	// addi r7,r4,32
	ctx.r7.s64 = ctx.r4.s64 + 32;
	// li r6,1
	ctx.r6.s64 = 1;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rldicr r6,r6,63,63
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// srd r8,r6,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r6.u64 >> (ctx.r7.u8 & 0x7F));
	// rlwimi r9,r10,25,4,6
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 25) & 0xE000000) | (ctx.r9.u64 & 0xFFFFFFFFF1FFFFFF);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_82BDCA2C:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11924(r11)
	PPC_STORE_U8(r11.u32 + 11924, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCA38"))) PPC_WEAK_FUNC(sub_82BDCA38);
PPC_FUNC_IMPL(__imp__sub_82BDCA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11924(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 11924);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCA48"))) PPC_WEAK_FUNC(sub_82BDCA48);
PPC_FUNC_IMPL(__imp__sub_82BDCA48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lfs f0,-6448(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6448);
	f0.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,5,23,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 5) & 0x1E0) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFE1F);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCAA8"))) PPC_WEAK_FUNC(sub_82BDCAA8);
PPC_FUNC_IMPL(__imp__sub_82BDCAA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// lfs f0,-16564(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16564);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r11,23,0,8
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 23) & 0xFF800000;
	// srawi r11,r11,28
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0xFFFFFFF) != 0);
	r11.s64 = r11.s32 >> 28;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fneg f0,f0
	f0.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCAF0"))) PPC_WEAK_FUNC(sub_82BDCAF0);
PPC_FUNC_IMPL(__imp__sub_82BDCAF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lfs f0,-4716(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4716);
	f0.f64 = double(temp.f32);
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r10,r10,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// srd r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r9.u8 & 0x7F));
	// lfs f13,36(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, f0.u64);
	// lwz r9,-12(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// rlwimi r8,r9,12,10,19
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0x3FF000) | (ctx.r8.u64 & 0xFFFFFFFFFFC00FFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCB50"))) PPC_WEAK_FUNC(sub_82BDCB50);
PPC_FUNC_IMPL(__imp__sub_82BDCB50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lis r10,-32252
	ctx.r10.s64 = -2113667072;
	// lwz r11,1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// lfs f0,22260(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22260);
	f0.f64 = double(temp.f32);
	// rlwinm r11,r11,10,0,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 10) & 0xFFFFFC00;
	// srawi r11,r11,22
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3FFFFF) != 0);
	r11.s64 = r11.s32 >> 22;
	// extsw r11,r11
	r11.s64 = r11.s32;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	f0.f64 = double(float(ctx.f13.f64 * f0.f64));
	// stfs f0,-16(r1)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCB90"))) PPC_WEAK_FUNC(sub_82BDCB90);
PPC_FUNC_IMPL(__imp__sub_82BDCB90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,3136
	r11.s64 = ctx.r4.s64 + 3136;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bdcbf0
	if (cr6.eq) goto loc_82BDCBF0;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,30,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// bgt cr6,0x82bdcbc4
	if (cr6.gt) goto loc_82BDCBC4;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BDCBC4:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,2,26,29
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 2) & 0x3C) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFC3);
	// rldicr r11,r7,63,63
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_82BDCBF0:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11950(r11)
	PPC_STORE_U8(r11.u32 + 11950, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCC00"))) PPC_WEAK_FUNC(sub_82BDCC00);
PPC_FUNC_IMPL(__imp__sub_82BDCC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11950(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 11950);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCC10"))) PPC_WEAK_FUNC(sub_82BDCC10);
PPC_FUNC_IMPL(__imp__sub_82BDCC10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// addi r11,r4,3136
	r11.s64 = ctx.r4.s64 + 3136;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bdcc70
	if (cr6.eq) goto loc_82BDCC70;
	// lwz r11,44(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 44);
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r11,r11,26,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xF;
	// mulli r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 * 24;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// cmplw cr6,r11,r5
	cr6.compare<uint32_t>(r11.u32, ctx.r5.u32, xer);
	// blt cr6,0x82bdcc44
	if (cr6.lt) goto loc_82BDCC44;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
loc_82BDCC44:
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// addi r8,r4,32
	ctx.r8.s64 = ctx.r4.s64 + 32;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwimi r9,r11,6,22,25
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 6) & 0x3C0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFC3F);
	// rldicr r11,r7,63,63
	r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r9,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r9.u32);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// srd r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x40 ? 0 : (r11.u64 >> (ctx.r10.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
loc_82BDCC70:
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// stb r5,11976(r11)
	PPC_STORE_U8(r11.u32 + 11976, ctx.r5.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCC80"))) PPC_WEAK_FUNC(sub_82BDCC80);
PPC_FUNC_IMPL(__imp__sub_82BDCC80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// add r11,r3,r4
	r11.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r3,11976(r11)
	ctx.r3.u64 = PPC_LOAD_U8(r11.u32 + 11976);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCC90"))) PPC_WEAK_FUNC(sub_82BDCC90);
PPC_FUNC_IMPL(__imp__sub_82BDCC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// lwz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// srd r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r10.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r9,r11
	r11.u64 = ctx.r9.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCCE0"))) PPC_WEAK_FUNC(sub_82BDCCE0);
PPC_FUNC_IMPL(__imp__sub_82BDCCE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister temp{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// clrlwi r11,r11,30
	r11.u64 = r11.u32 & 0x3;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r3,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	ctx.r3.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCD00"))) PPC_WEAK_FUNC(sub_82BDCD00);
PPC_FUNC_IMPL(__imp__sub_82BDCD00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,10,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 10) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCD38"))) PPC_WEAK_FUNC(sub_82BDCD38);
PPC_FUNC_IMPL(__imp__sub_82BDCD38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,22,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCD50"))) PPC_WEAK_FUNC(sub_82BDCD50);
PPC_FUNC_IMPL(__imp__sub_82BDCD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,13,16,18
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 13) & 0xE000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF1FFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCD88"))) PPC_WEAK_FUNC(sub_82BDCD88);
PPC_FUNC_IMPL(__imp__sub_82BDCD88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r11,r11,r3
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwinm r3,r11,19,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 19) & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCDA0"))) PPC_WEAK_FUNC(sub_82BDCDA0);
PPC_FUNC_IMPL(__imp__sub_82BDCDA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// rlwimi r9,r5,16,13,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x70000) | (ctx.r9.u64 & 0xFFFFFFFFFFF8FFFF);
	// li r8,1
	ctx.r8.s64 = 1;
	// stwx r9,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r9.u32);
	// clrldi r11,r10,32
	r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r10,r8,63,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// srd r11,r10,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (r11.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCDD8"))) PPC_WEAK_FUNC(sub_82BDCDD8);
PPC_FUNC_IMPL(__imp__sub_82BDCDD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// lhzx r11,r11,r3
	r11.u64 = PPC_LOAD_U16(r11.u32 + ctx.r3.u32);
	// clrlwi r3,r11,29
	ctx.r3.u64 = r11.u32 & 0x7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCDF0"))) PPC_WEAK_FUNC(sub_82BDCDF0);
PPC_FUNC_IMPL(__imp__sub_82BDCDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,3,27,28
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 3) & 0x18) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCE30"))) PPC_WEAK_FUNC(sub_82BDCE30);
PPC_FUNC_IMPL(__imp__sub_82BDCE30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwinm r3,r11,29,30,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCE48"))) PPC_WEAK_FUNC(sub_82BDCE48);
PPC_FUNC_IMPL(__imp__sub_82BDCE48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,22,5,9
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 22) & 0x7C00000) | (ctx.r8.u64 & 0xFFFFFFFFF83FFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCE88"))) PPC_WEAK_FUNC(sub_82BDCE88);
PPC_FUNC_IMPL(__imp__sub_82BDCE88) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r3,r11,27
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCEA0"))) PPC_WEAK_FUNC(sub_82BDCEA0);
PPC_FUNC_IMPL(__imp__sub_82BDCEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,27,0,4
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 27) & 0xF8000000) | (ctx.r8.u64 & 0xFFFFFFFF07FFFFFF);
	// stw r8,16(r11)
	PPC_STORE_U32(r11.u32 + 16, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCEE0"))) PPC_WEAK_FUNC(sub_82BDCEE0);
PPC_FUNC_IMPL(__imp__sub_82BDCEE0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1168(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1168);
	// srawi r3,r11,27
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x7FFFFFF) != 0);
	ctx.r3.s64 = r11.s32 >> 27;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCEF8"))) PPC_WEAK_FUNC(sub_82BDCEF8);
PPC_FUNC_IMPL(__imp__sub_82BDCEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// addi r10,r4,32
	ctx.r10.s64 = ctx.r4.s64 + 32;
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// rlwimi r8,r5,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r5.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// stw r8,20(r11)
	PPC_STORE_U32(r11.u32 + 20, ctx.r8.u32);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCF38"))) PPC_WEAK_FUNC(sub_82BDCF38);
PPC_FUNC_IMPL(__imp__sub_82BDCF38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1172(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1172);
	// rlwinm r3,r11,30,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCF50"))) PPC_WEAK_FUNC(sub_82BDCF50);
PPC_FUNC_IMPL(__imp__sub_82BDCF50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,48
	r11.s64 = ctx.r4.s64 + 48;
	// cntlzw r10,r5
	ctx.r10.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mulli r11,r11,24
	r11.s64 = r11.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r9,r4,32
	ctx.r9.s64 = ctx.r4.s64 + 32;
	// li r8,1
	ctx.r8.s64 = 1;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// rlwimi r7,r10,11,20,20
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 11) & 0x800) | (ctx.r7.u64 & 0xFFFFFFFFFFFFF7FF);
	// stw r7,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r7.u32);
	// srd r11,r8,r9
	r11.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCF98"))) PPC_WEAK_FUNC(sub_82BDCF98);
PPC_FUNC_IMPL(__imp__sub_82BDCF98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mulli r11,r4,24
	r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,1156(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1156);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm r3,r11,21,31,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDCFB0"))) PPC_WEAK_FUNC(sub_82BDCFB0);
PPC_FUNC_IMPL(__imp__sub_82BDCFB0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,12648(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12648);
	f0.f64 = double(temp.f32);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// lfs f13,12656(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12656);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,12660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12660);
	f0.f64 = double(temp.f32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f13,12652(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12652);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	f0.s64 = (f0.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f13.f64));
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r31,8(r9)
	r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r30,12(r9)
	r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,11856(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11856);
	// stw r11,12676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12676, r11.u32);
	// cmpwi cr6,r6,0
	cr6.compare<int32_t>(ctx.r6.s32, 0, xer);
	// stw r10,12680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12680, ctx.r10.u32);
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// stw r31,12684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12684, r31.u32);
	// stw r30,12688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12688, r30.u32);
	// add r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 + ctx.r5.u64;
	// beq cr6,0x82bdd06c
	if (cr6.eq) goto loc_82BDD06C;
	// cmpw cr6,r4,r11
	cr6.compare<int32_t>(ctx.r4.s32, r11.s32, xer);
	// bgt cr6,0x82bdd048
	if (cr6.gt) goto loc_82BDD048;
	// mr r4,r11
	ctx.r4.u64 = r11.u64;
loc_82BDD048:
	// cmpw cr6,r5,r10
	cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, xer);
	// bgt cr6,0x82bdd054
	if (cr6.gt) goto loc_82BDD054;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
loc_82BDD054:
	// cmpw cr6,r6,r31
	cr6.compare<int32_t>(ctx.r6.s32, r31.s32, xer);
	// blt cr6,0x82bdd060
	if (cr6.lt) goto loc_82BDD060;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
loc_82BDD060:
	// cmpw cr6,r7,r30
	cr6.compare<int32_t>(ctx.r7.s32, r30.s32, xer);
	// blt cr6,0x82bdd06c
	if (cr6.lt) goto loc_82BDD06C;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
loc_82BDD06C:
	// lwz r11,10436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwimi r11,r5,16,1,15
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 16) & 0x7FFF0000) | (r11.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r10,r7,16,1,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0x7FFF0000) | (ctx.r10.u64 & 0xFFFFFFFF8000FFFF);
	// rlwimi r11,r4,0,17,31
	r11.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x7FFF) | (r11.u64 & 0xFFFFFFFFFFFF8000);
	// rlwimi r10,r6,0,17,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0x7FFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFF8000);
	// stw r11,10436(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10436, r11.u32);
	// stw r10,10440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10440, ctx.r10.u32);
	// bl 0x82bda9f0
	sub_82BDA9F0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD0A8"))) PPC_WEAK_FUNC(sub_82BDD0A8);
PPC_FUNC_IMPL(__imp__sub_82BDD0A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister f0{};
	PPCRegister temp{};
	// lfs f0,12648(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12648);
	f0.f64 = double(temp.f32);
	// li r11,4
	r11.s64 = 4;
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,0,r4
	PPC_STORE_U32(ctx.r4.u32, f0.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// lfs f0,12652(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12652);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// li r9,12
	ctx.r9.s64 = 12;
	// stfiwx f0,r4,r11
	PPC_STORE_U32(ctx.r4.u32 + r11.u32, f0.u32);
	// lfs f0,12656(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12656);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,r4,r10
	PPC_STORE_U32(ctx.r4.u32 + ctx.r10.u32, f0.u32);
	// lfs f0,12660(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12660);
	f0.f64 = double(temp.f32);
	// fctidz f0,f0
	f0.s64 = (f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : simde_mm_cvttsd_si64(simde_mm_load_sd(&f0.f64));
	// stfiwx f0,r4,r9
	PPC_STORE_U32(ctx.r4.u32 + ctx.r9.u32, f0.u32);
	// lfs f0,12664(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12664);
	f0.f64 = double(temp.f32);
	// stfs f0,16(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 16, temp.u32);
	// lfs f0,12668(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12668);
	f0.f64 = double(temp.f32);
	// stfs f0,20(r4)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD0F8"))) PPC_WEAK_FUNC(sub_82BDD0F8);
PPC_FUNC_IMPL(__imp__sub_82BDD0F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r26,r7
	r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bdd168
	if (cr6.eq) goto loc_82BDD168;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 24);
	// subfic r11,r29,17
	xer.ca = r29.u32 <= 17;
	r11.s64 = 17 - r29.s64;
	// lwz r5,28(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// addi r4,r11,222
	ctx.r4.s64 = r11.s64 + 222;
	// rlwinm r7,r10,12,20,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r7,512
	r11.s64 = ctx.r7.s64 + 512;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + r31.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r6,r6,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stwx r11,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + r31.u32, r11.u32);
	// stw r6,1780(r9)
	PPC_STORE_U32(ctx.r9.u32 + 1780, ctx.r6.u32);
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// or r11,r11,r8
	r11.u64 = r11.u64 | ctx.r8.u64;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
loc_82BDD168:
	// addi r11,r29,3115
	r11.s64 = r29.s64 + 3115;
	// rlwinm r27,r11,2,0,29
	r27.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r27,r31
	r28.u64 = PPC_LOAD_U32(r27.u32 + r31.u32);
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82bdd1e0
	if (cr6.eq) goto loc_82BDD1E0;
	// lwz r11,10908(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bdd190
	if (cr6.eq) goto loc_82BDD190;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// b 0x82bdd1e0
	goto loc_82BDD1E0;
loc_82BDD190:
	// lwz r11,10912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10912);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdd1e0
	if (cr0.eq) goto loc_82BDD1E0;
	// lwz r11,13528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13528);
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13524);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82bdd1b8
	if (cr6.lt) goto loc_82BDD1B8;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7510
	sub_82BF7510(ctx, base);
loc_82BDD1B8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r28,30,2,31
	r11.u64 = (__builtin_rotateleft32(r28.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13524(r31)
	PPC_STORE_U32(r31.u32 + 13524, ctx.r9.u32);
loc_82BDD1E0:
	// add r11,r31,r29
	r11.u64 = r31.u64 + r29.u64;
	// stwx r30,r27,r31
	PPC_STORE_U32(r27.u32 + r31.u32, r30.u32);
	// rlwinm r9,r26,30,24,31
	ctx.r9.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0xFF;
	// rlwinm. r10,r26,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 30) & 0x3FFFFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r9,12528(r11)
	PPC_STORE_U8(r11.u32 + 12528, ctx.r9.u8);
	// beq 0x82bdd210
	if (cr0.eq) goto loc_82BDD210;
	// lbz r11,11832(r11)
	r11.u64 = PPC_LOAD_U8(r11.u32 + 11832);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdd210
	if (cr6.eq) goto loc_82BDD210;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_82BDD210:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BDD218"))) PPC_WEAK_FUNC(sub_82BDD218);
PPC_FUNC_IMPL(__imp__sub_82BDD218) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r30,12436(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 12436);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bdd29c
	if (cr6.eq) goto loc_82BDD29C;
	// lwz r11,10908(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10908);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bdd24c
	if (cr6.eq) goto loc_82BDD24C;
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// b 0x82bdd29c
	goto loc_82BDD29C;
loc_82BDD24C:
	// lwz r11,10912(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10912);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdd29c
	if (cr0.eq) goto loc_82BDD29C;
	// lwz r11,13528(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13528);
	// lwz r3,13524(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 13524);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82bdd274
	if (cr6.lt) goto loc_82BDD274;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7510
	sub_82BF7510(ctx, base);
loc_82BDD274:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r30,30,2,31
	r11.u64 = (__builtin_rotateleft32(r30.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13524(r31)
	PPC_STORE_U32(r31.u32 + 13524, ctx.r9.u32);
loc_82BDD29C:
	// stw r29,12436(r31)
	PPC_STORE_U32(r31.u32 + 12436, r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDD2A8"))) PPC_WEAK_FUNC(sub_82BDD2A8);
PPC_FUNC_IMPL(__imp__sub_82BDD2A8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3110
	r11.s64 = ctx.r4.s64 + 3110;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	r31.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bdd2d4
	if (cr6.eq) goto loc_82BDD2D4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82BDD2D4:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD2F0"))) PPC_WEAK_FUNC(sub_82BDD2F0);
PPC_FUNC_IMPL(__imp__sub_82BDD2F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12456(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12456);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bdd314
	if (cr6.eq) goto loc_82BDD314;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82BDD314:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD330"))) PPC_WEAK_FUNC(sub_82BDD330);
PPC_FUNC_IMPL(__imp__sub_82BDD330) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,14832(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14832);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bdd354
	if (cr6.eq) goto loc_82BDD354;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82BDD354:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD370"))) PPC_WEAK_FUNC(sub_82BDD370);
PPC_FUNC_IMPL(__imp__sub_82BDD370) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bedf58
	sub_82BEDF58(ctx, base);
	// addi r30,r31,15004
	r30.s64 = r31.s64 + 15004;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = r11.s64 + 1536;
loc_82BDD3A8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdd3c8
	if (!cr0.eq) goto loc_82BDD3C8;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bdd3a8
	if (!cr6.eq) goto loc_82BDD3A8;
loc_82BDD3C8:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bdd428
	if (cr0.eq) goto loc_82BDD428;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82bdd40c
	if (cr6.eq) goto loc_82BDD40C;
	// lwz r3,23952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 23952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bdd400
	if (cr6.eq) goto loc_82BDD400;
	// lwz r11,23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23956);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdd400
	if (!cr0.eq) goto loc_82BDD400;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831ccd60
	sub_831CCD60(ctx, base);
loc_82BDD400:
	// lwz r11,23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23956);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,23956(r31)
	PPC_STORE_U32(r31.u32 + 23956, r11.u32);
loc_82BDD40C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,16708(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16708);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,16708(r31)
	PPC_STORE_U32(r31.u32 + 16708, r11.u32);
loc_82BDD428:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD440"))) PPC_WEAK_FUNC(sub_82BDD440);
PPC_FUNC_IMPL(__imp__sub_82BDD440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-1648(r1)
	ea = -1648 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bedff0
	sub_82BEDFF0(ctx, base);
	// addi r30,r31,15004
	r30.s64 = r31.s64 + 15004;
	// addi r11,r1,80
	r11.s64 = ctx.r1.s64 + 80;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r8,r11,1536
	ctx.r8.s64 = r11.s64 + 1536;
loc_82BDD478:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdd498
	if (!cr0.eq) goto loc_82BDD498;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82bdd478
	if (!cr6.eq) goto loc_82BDD478;
loc_82BDD498:
	// cmpwi r9,0
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bdd4f8
	if (cr0.eq) goto loc_82BDD4F8;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// beq cr6,0x82bdd4dc
	if (cr6.eq) goto loc_82BDD4DC;
	// lwz r3,23952(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 23952);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bdd4d0
	if (cr6.eq) goto loc_82BDD4D0;
	// lwz r11,23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23956);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdd4d0
	if (!cr0.eq) goto loc_82BDD4D0;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831ccd60
	sub_831CCD60(ctx, base);
loc_82BDD4D0:
	// lwz r11,23956(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 23956);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// stw r11,23956(r31)
	PPC_STORE_U32(r31.u32 + 23956, r11.u32);
loc_82BDD4DC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,1536
	ctx.r5.s64 = 1536;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,16708(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 16708);
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,16708(r31)
	PPC_STORE_U32(r31.u32 + 16708, r11.u32);
loc_82BDD4F8:
	// addi r1,r1,1648
	ctx.r1.s64 = ctx.r1.s64 + 1648;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD510"))) PPC_WEAK_FUNC(sub_82BDD510);
PPC_FUNC_IMPL(__imp__sub_82BDD510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// addi r11,r4,642
	r11.s64 = ctx.r4.s64 + 642;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r9,r4,9
	ctx.r9.s64 = ctx.r4.s64 + 9;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldicr r8,r8,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// srd r10,r8,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r9.u8 & 0x7F));
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r9,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r9.u32);
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD560"))) PPC_WEAK_FUNC(sub_82BDD560);
PPC_FUNC_IMPL(__imp__sub_82BDD560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	cr6.compare<int32_t>(ctx.r4.s32, 0, xer);
	// bne cr6,0x82bdd5e8
	if (!cr6.eq) goto loc_82BDD5E8;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82bdd594
	if (!cr6.gt) goto loc_82BDD594;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BDD594:
	// lis r11,-16384
	r11.s64 = -1073741824;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r11,r11,24576
	r11.u64 = r11.u64 | 24576;
	// ori r10,r10,25088
	ctx.r10.u64 = ctx.r10.u64 | 25088;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// li r11,-1
	r11.s64 = -1;
	// lwz r9,12708(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12708);
	// lis r8,-16384
	ctx.r8.s64 = -1073741824;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r8,r8,24832
	ctx.r8.u64 = ctx.r8.u64 | 24832;
	// ori r7,r7,25344
	ctx.r7.u64 = ctx.r7.u64 | 25344;
	// li r6,0
	ctx.r6.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// lwz r11,12712(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12712);
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82BDD5E8:
	// lwz r11,10440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10440);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,10436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10436);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = r11.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 17;
	// bl 0x82bda9f0
	sub_82BDA9F0(ctx, base);
	// lwz r11,10916(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10916);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r4,r11,20,30,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x3;
	// bl 0x82bf76e0
	sub_82BF76E0(ctx, base);
	// li r11,-1
	r11.s64 = -1;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD658"))) PPC_WEAK_FUNC(sub_82BDD658);
PPC_FUNC_IMPL(__imp__sub_82BDD658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	PPCRegister f0{};
	PPCRegister f26{};
	PPCRegister f27{};
	PPCRegister f28{};
	PPCRegister f29{};
	PPCRegister f30{};
	PPCRegister f31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b1430
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	f30.f64 = ctx.f2.f64;
	// fmr f29,f5
	f29.f64 = ctx.f5.f64;
	// fmr f28,f6
	f28.f64 = ctx.f6.f64;
	// lwz r10,12440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82bdd6a0
	if (!cr0.eq) goto loc_82BDD6A0;
	// lwz r9,12456(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bdd894
	if (cr6.eq) goto loc_82BDD894;
loc_82BDD6A0:
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bdd6b4
	if (cr0.eq) goto loc_82BDD6B4;
	// li r11,1
	r11.s64 = 1;
	// b 0x82bdd740
	goto loc_82BDD740;
loc_82BDD6B4:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdd738
	if (cr0.eq) goto loc_82BDD738;
	// lwz r11,12728(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12728);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// beq cr6,0x82bdd6d0
	if (cr6.eq) goto loc_82BDD6D0;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bdd738
	if (!cr6.eq) goto loc_82BDD738;
loc_82BDD6D0:
	// lwz r11,12444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12732);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdd6e8
	if (cr6.eq) goto loc_82BDD6E8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdd738
	if (!cr6.eq) goto loc_82BDD738;
loc_82BDD6E8:
	// lwz r11,12448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12736);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdd700
	if (cr6.eq) goto loc_82BDD700;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdd738
	if (!cr6.eq) goto loc_82BDD738;
loc_82BDD700:
	// lwz r11,12452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12740);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdd718
	if (cr6.eq) goto loc_82BDD718;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdd738
	if (!cr6.eq) goto loc_82BDD738;
loc_82BDD718:
	// lwz r11,12456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12744);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdd730
	if (cr6.eq) goto loc_82BDD730;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdd738
	if (!cr6.eq) goto loc_82BDD738;
loc_82BDD730:
	// li r11,1
	r11.s64 = 1;
	// b 0x82bdd73c
	goto loc_82BDD73C;
loc_82BDD738:
	// li r11,0
	r11.s64 = 0;
loc_82BDD73C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82BDD740:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdd754
	if (cr0.eq) goto loc_82BDD754;
	// lwz r11,13180(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13180);
	// lwz r7,13184(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13184);
	// b 0x82bdd768
	goto loc_82BDD768;
loc_82BDD754:
	// lwz r10,36(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 36);
	// rlwinm r11,r10,14,18,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,29,17,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x7FFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
loc_82BDD768:
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	f0.s64 = (f31.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, f0.u64);
	// fctiwz f0,f3
	f0.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f3.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f30
	f0.s64 = (f30.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&f30.f64));
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r10,r11
	cr6.compare<int32_t>(ctx.r10.s32, r11.s32, xer);
	// bge cr6,0x82bdd79c
	if (!cr6.lt) goto loc_82BDD79C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BDD79C:
	// fctiwz f0,f4
	ctx.fpscr.disableFlushMode();
	f0.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : simde_mm_cvttsd_si32(simde_mm_load_sd(&ctx.f4.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmpw cr6,r9,r7
	cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, xer);
	// blt cr6,0x82bdd7b8
	if (cr6.lt) goto loc_82BDD7B8;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82BDD7B8:
	// subf. r11,r6,r11
	r11.s64 = r11.s64 - ctx.r6.s64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// blt 0x82bdd7cc
	if (cr0.lt) goto loc_82BDD7CC;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82bdd7d4
	if (!cr6.lt) goto loc_82BDD7D4;
loc_82BDD7CC:
	// li r11,0
	r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BDD7D4:
	// extsw r11,r11
	r11.s64 = r11.s32;
	// stfs f31,12648(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(f31.f64);
	PPC_STORE_U32(r31.u32 + 12648, temp.u32);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stfs f30,12652(r31)
	temp.f32 = float(f30.f64);
	PPC_STORE_U32(r31.u32 + 12652, temp.u32);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// li r11,0
	r11.s64 = 0;
	// frsp f27,f0
	f27.f64 = double(float(f0.f64));
	// stfs f29,12664(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 12664, temp.u32);
	// fcfid f0,f13
	f0.f64 = double(ctx.f13.s64);
	// stfs f28,12668(r31)
	temp.f32 = float(f28.f64);
	PPC_STORE_U32(r31.u32 + 12668, temp.u32);
	// stfs f27,12660(r31)
	temp.f32 = float(f27.f64);
	PPC_STORE_U32(r31.u32 + 12660, temp.u32);
	// stw r11,12672(r31)
	PPC_STORE_U32(r31.u32 + 12672, r11.u32);
	// addi r4,r31,12676
	ctx.r4.s64 = r31.s64 + 12676;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// frsp f26,f0
	f26.f64 = double(float(f0.f64));
	// stfs f26,12656(r31)
	temp.f32 = float(f26.f64);
	PPC_STORE_U32(r31.u32 + 12656, temp.u32);
	// bl 0x82bdcfb0
	sub_82BDCFB0(ctx, base);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// fsubs f0,f28,f29
	ctx.fpscr.disableFlushMode();
	f0.f64 = double(float(f28.f64 - f29.f64));
	// stfs f0,10520(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 10520, temp.u32);
	// stfs f29,10524(r31)
	temp.f32 = float(f29.f64);
	PPC_STORE_U32(r31.u32 + 10524, temp.u32);
	// lfs f0,-22120(r11)
	temp.u32 = PPC_LOAD_U32(r11.u32 + -22120);
	f0.f64 = double(temp.f32);
	// fmuls f13,f26,f0
	ctx.f13.f64 = double(float(f26.f64 * f0.f64));
	// stfs f13,10504(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10504, temp.u32);
	// fmuls f0,f27,f0
	f0.f64 = double(float(f27.f64 * f0.f64));
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + f31.f64));
	// stfs f13,10508(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10508, temp.u32);
	// fneg f13,f0
	ctx.f13.u64 = f0.u64 ^ 0x8000000000000000;
	// stfs f13,10512(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(r31.u32 + 10512, temp.u32);
	// fadds f0,f0,f30
	f0.f64 = double(float(f0.f64 + f30.f64));
	// stfs f0,10516(r31)
	temp.f32 = float(f0.f64);
	PPC_STORE_U32(r31.u32 + 10516, temp.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,1024
	r11.u64 = r11.u64 | 67108864;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,512
	r11.u64 = r11.u64 | 33554432;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,256
	r11.u64 = r11.u64 | 16777216;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,128
	r11.u64 = r11.u64 | 8388608;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,64
	r11.u64 = r11.u64 | 4194304;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,32
	r11.u64 = r11.u64 | 2097152;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_82BDD894:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// addi r12,r1,-16
	r12.s64 = ctx.r1.s64 + -16;
	// bl 0x831b147c
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD8B0"))) PPC_WEAK_FUNC(sub_82BDD8B0);
PPC_FUNC_IMPL(__imp__sub_82BDD8B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,11856(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11856, ctx.r4.u32);
	// addi r4,r3,12676
	ctx.r4.s64 = ctx.r3.s64 + 12676;
	// b 0x82bdcfb0
	sub_82BDCFB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDD8C0"))) PPC_WEAK_FUNC(sub_82BDD8C0);
PPC_FUNC_IMPL(__imp__sub_82BDD8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister f0{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,12(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// mr r11,r7
	r11.u64 = ctx.r7.u64;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r11.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f0,80(r1)
	f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	f0.f64 = double(f0.s64);
	// frsp f2,f11
	ctx.f2.f64 = double(float(ctx.f11.f64));
	// frsp f3,f12
	ctx.f3.f64 = double(float(ctx.f12.f64));
	// frsp f4,f13
	ctx.f4.f64 = double(float(ctx.f13.f64));
	// frsp f1,f0
	ctx.f1.f64 = double(float(f0.f64));
	// bl 0x82bdd658
	sub_82BDD658(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDD940"))) PPC_WEAK_FUNC(sub_82BDD940);
PPC_FUNC_IMPL(__imp__sub_82BDD940) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// lfs f6,20(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82bdd658
	sub_82BDD658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDD960"))) PPC_WEAK_FUNC(sub_82BDD960);
PPC_FUNC_IMPL(__imp__sub_82BDD960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// rlwinm. r11,r10,16,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdd974
	if (!cr0.eq) goto loc_82BDD974;
	// li r11,0
	r11.s64 = 0;
	// b 0x82bdd98c
	goto loc_82BDD98C;
loc_82BDD974:
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// lis r11,0
	r11.s64 = 0;
	// bne cr6,0x82bdd988
	if (!cr6.eq) goto loc_82BDD988;
	// ori r11,r11,32769
	r11.u64 = r11.u64 | 32769;
	// b 0x82bdd98c
	goto loc_82BDD98C;
loc_82BDD988:
	// ori r11,r11,49155
	r11.u64 = r11.u64 | 49155;
loc_82BDD98C:
	// li r12,1
	r12.s64 = 1;
	// stw r11,10684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10684, r11.u32);
	// stw r10,10368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 10368, ctx.r10.u32);
	// lis r11,-32243
	r11.s64 = -2113077248;
	// rldicr r12,r12,57,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 57) & 0xFFFFFFFFFFFFFFFF;
	// ld r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// or r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 | r12.u64;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// li r12,1
	r12.s64 = 1;
	// ld r8,32(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// addi r9,r11,-11440
	ctx.r9.s64 = r11.s64 + -11440;
	// rldicr r12,r12,36,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 36) & 0xFFFFFFFFFFFFFFFF;
	// addi r4,r10,-11464
	ctx.r4.s64 = ctx.r10.s64 + -11464;
	// or r8,r8,r12
	ctx.r8.u64 = ctx.r8.u64 | r12.u64;
	// std r8,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r8.u64);
	// lwz r11,-11440(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -11440);
	// stw r11,12676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12676, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,12680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12680, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,12684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12684, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12688, r11.u32);
	// b 0x82bdd8c0
	sub_82BDD8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDD9F0"))) PPC_WEAK_FUNC(sub_82BDD9F0);
PPC_FUNC_IMPL(__imp__sub_82BDD9F0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,3110
	r11.s64 = ctx.r4.s64 + 3110;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// stwx r5,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + r31.u32, ctx.r5.u32);
	// beq cr6,0x82bddb20
	if (cr6.eq) goto loc_82BDDB20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r11,0
	r11.s64 = 0;
	// beq cr6,0x82bdda24
	if (cr6.eq) goto loc_82BDDA24;
	// addi r11,r4,1
	r11.s64 = ctx.r4.s64 + 1;
loc_82BDDA24:
	// addi r10,r11,2593
	ctx.r10.s64 = r11.s64 + 2593;
	// lwz r7,28(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r8,r9,263
	ctx.r8.u64 = ctx.r9.u64 | 263;
	// li r9,1
	ctx.r9.s64 = 1;
	// add r3,r11,r8
	ctx.r3.u64 = r11.u64 + ctx.r8.u64;
	// rldicr r9,r9,63,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stwx r7,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + r31.u32, ctx.r7.u32);
	// srawi r11,r3,16
	xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r3.s32 >> 16;
	// clrldi r7,r3,56
	ctx.r7.u64 = ctx.r3.u64 & 0xFF;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r4,3007
	r11.s64 = ctx.r4.s64 + 3007;
	// srd r7,r9,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// ldx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r10.u32 + r31.u32);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// or r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 | ctx.r3.u64;
	// stdx r7,r10,r31
	PPC_STORE_U64(ctx.r10.u32 + r31.u32, ctx.r7.u64);
	// lwzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + r31.u32);
	// lwzx r10,r6,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + r31.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stwx r7,r11,r31
	PPC_STORE_U32(r11.u32 + r31.u32, ctx.r7.u32);
	// beq cr6,0x82bddb20
	if (cr6.eq) goto loc_82BDDB20;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// li r30,0
	r30.s64 = 0;
	// beq cr6,0x82bdda90
	if (cr6.eq) goto loc_82BDDA90;
	// addi r30,r4,1
	r30.s64 = ctx.r4.s64 + 1;
loc_82BDDA90:
	// addi r11,r30,2593
	r11.s64 = r30.s64 + 2593;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r3,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + r31.u32);
	// rlwinm r10,r6,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 16) & 0xF;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// beq cr6,0x82bddac0
	if (cr6.eq) goto loc_82BDDAC0;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// beq cr6,0x82bddac0
	if (cr6.eq) goto loc_82BDDAC0;
	// cmplwi cr6,r10,10
	cr6.compare<uint32_t>(ctx.r10.u32, 10, xer);
	// beq cr6,0x82bddac0
	if (cr6.eq) goto loc_82BDDAC0;
	// cmplwi cr6,r10,12
	cr6.compare<uint32_t>(ctx.r10.u32, 12, xer);
	// bne cr6,0x82bddb20
	if (!cr6.eq) goto loc_82BDDB20;
loc_82BDDAC0:
	// rlwinm r11,r6,13,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 13) & 0x1;
	// xor. r11,r11,r7
	r11.u64 = r11.u64 ^ ctx.r7.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bddb20
	if (cr0.eq) goto loc_82BDDB20;
	// addi r11,r7,-1
	r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// not r29,r11
	r29.u64 = ~r11.u64;
	// addi r7,r7,-3
	ctx.r7.s64 = ctx.r7.s64 + -3;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// and r11,r7,r11
	r11.u64 = ctx.r7.u64 & r11.u64;
	// rlwinm r29,r29,16,0,15
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// and r10,r29,r10
	ctx.r10.u64 = r29.u64 & ctx.r10.u64;
	// add r8,r30,r8
	ctx.r8.u64 = r30.u64 + ctx.r8.u64;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// srawi r11,r8,16
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	r11.s64 = ctx.r8.s32 >> 16;
	// rlwimi r10,r6,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + r31.u32, ctx.r10.u32);
	// clrldi r10,r8,56
	ctx.r10.u64 = ctx.r8.u64 & 0xFF;
	// srd r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r10.u8 & 0x7F));
	// ldx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stdx r10,r11,r31
	PPC_STORE_U64(r11.u32 + r31.u32, ctx.r10.u64);
loc_82BDDB20:
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// bne cr6,0x82bddc98
	if (!cr6.eq) goto loc_82BDDC98;
	// lbz r11,10943(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10943);
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// andi. r10,r11,247
	ctx.r10.u64 = r11.u64 & 247;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stb r10,10943(r31)
	PPC_STORE_U8(r31.u32 + 10943, ctx.r10.u8);
	// beq cr6,0x82bddb78
	if (cr6.eq) goto loc_82BDDB78;
	// lhz r11,28(r5)
	r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 28);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,5
	cr6.compare<uint32_t>(r11.u32, 5, xer);
	// beq cr6,0x82bddb5c
	if (cr6.eq) goto loc_82BDDB5C;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// beq cr6,0x82bddb5c
	if (cr6.eq) goto loc_82BDDB5C;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// bne cr6,0x82bddb70
	if (!cr6.eq) goto loc_82BDDB70;
loc_82BDDB5C:
	// ori r11,r10,8
	r11.u64 = ctx.r10.u64 | 8;
	// stb r11,10943(r31)
	PPC_STORE_U8(r31.u32 + 10943, r11.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_82BDDB70:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82bddb84
	goto loc_82BDDB84;
loc_82BDDB78:
	// lwz r4,12456(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bddb8c
	if (cr6.eq) goto loc_82BDDB8C;
loc_82BDDB84:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdd960
	sub_82BDD960(ctx, base);
loc_82BDDB8C:
	// lwz r11,12716(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12716);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddc64
	if (!cr6.eq) goto loc_82BDDC64;
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bddc64
	if (!cr0.eq) goto loc_82BDDC64;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bddc64
	if (!cr0.eq) goto loc_82BDDC64;
	// lbz r10,12187(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12187);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82bddc64
	if (!cr0.eq) goto loc_82BDDC64;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bddbc8
	if (cr0.eq) goto loc_82BDDBC8;
	// li r11,1
	r11.s64 = 1;
	// b 0x82bddc58
	goto loc_82BDDC58;
loc_82BDDBC8:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bddc50
	if (cr0.eq) goto loc_82BDDC50;
	// lwz r11,12440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12728);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddbe8
	if (cr6.eq) goto loc_82BDDBE8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddc50
	if (!cr6.eq) goto loc_82BDDC50;
loc_82BDDBE8:
	// lwz r11,12444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12732);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddc00
	if (cr6.eq) goto loc_82BDDC00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddc50
	if (!cr6.eq) goto loc_82BDDC50;
loc_82BDDC00:
	// lwz r11,12448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12736);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddc18
	if (cr6.eq) goto loc_82BDDC18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddc50
	if (!cr6.eq) goto loc_82BDDC50;
loc_82BDDC18:
	// lwz r11,12452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12740);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddc30
	if (cr6.eq) goto loc_82BDDC30;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddc50
	if (!cr6.eq) goto loc_82BDDC50;
loc_82BDDC30:
	// lwz r11,12456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12744);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddc48
	if (cr6.eq) goto loc_82BDDC48;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddc50
	if (!cr6.eq) goto loc_82BDDC50;
loc_82BDDC48:
	// li r11,1
	r11.s64 = 1;
	// b 0x82bddc54
	goto loc_82BDDC54;
loc_82BDDC50:
	// li r11,0
	r11.s64 = 0;
loc_82BDDC54:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82BDDC58:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82bddc68
	if (!cr0.eq) goto loc_82BDDC68;
loc_82BDDC64:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BDDC68:
	// lbz r9,10940(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// lwz r11,11860(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11860);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10940(r31)
	PPC_STORE_U8(r31.u32 + 10940, ctx.r9.u8);
	// lwz r10,12440(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,11860(r31)
	PPC_STORE_U32(r31.u32 + 11860, r11.u32);
	// bne cr6,0x82bddc8c
	if (!cr6.eq) goto loc_82BDDC8C;
	// li r11,0
	r11.s64 = 0;
loc_82BDDC8C:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// rlwimi r10,r11,0,28,31
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF0);
	// b 0x82bddd18
	goto loc_82BDDD18;
loc_82BDDC98:
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82bddcc4
	if (!cr6.eq) goto loc_82BDDCC4;
	// lwz r11,11864(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11864);
	// lwz r10,12444(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12444);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,11864(r31)
	PPC_STORE_U32(r31.u32 + 11864, r11.u32);
	// bne cr6,0x82bddcb8
	if (!cr6.eq) goto loc_82BDDCB8;
	// li r11,0
	r11.s64 = 0;
loc_82BDDCB8:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// rlwimi r10,r11,4,24,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0xF0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF0F);
	// b 0x82bddd18
	goto loc_82BDDD18;
loc_82BDDCC4:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x82bddcf0
	if (!cr6.eq) goto loc_82BDDCF0;
	// lwz r11,11868(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11868);
	// lwz r10,12448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12448);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,11868(r31)
	PPC_STORE_U32(r31.u32 + 11868, r11.u32);
	// bne cr6,0x82bddce4
	if (!cr6.eq) goto loc_82BDDCE4;
	// li r11,0
	r11.s64 = 0;
loc_82BDDCE4:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// rlwimi r10,r11,8,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// b 0x82bddd18
	goto loc_82BDDD18;
loc_82BDDCF0:
	// cmplwi cr6,r4,3
	cr6.compare<uint32_t>(ctx.r4.u32, 3, xer);
	// bne cr6,0x82bddd30
	if (!cr6.eq) goto loc_82BDDD30;
	// lwz r11,11872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11872);
	// lwz r10,12452(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12452);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,11872(r31)
	PPC_STORE_U32(r31.u32 + 11872, r11.u32);
	// bne cr6,0x82bddd10
	if (!cr6.eq) goto loc_82BDDD10;
	// li r11,0
	r11.s64 = 0;
loc_82BDDD10:
	// lwz r10,10460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10460);
	// rlwimi r10,r11,12,16,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0xF000) | (ctx.r10.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82BDDD18:
	// li r12,1
	r12.s64 = 1;
	// stw r10,10460(r31)
	PPC_STORE_U32(r31.u32 + 10460, ctx.r10.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_82BDDD30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDDD38"))) PPC_WEAK_FUNC(sub_82BDDD38);
PPC_FUNC_IMPL(__imp__sub_82BDDD38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r30,12456(r31)
	PPC_STORE_U32(r31.u32 + 12456, r30.u32);
	// beq cr6,0x82bdde7c
	if (cr6.eq) goto loc_82BDDE7C;
	// lwz r11,12440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddd70
	if (!cr6.eq) goto loc_82BDDD70;
	// bl 0x82bdd960
	sub_82BDD960(ctx, base);
loc_82BDDD70:
	// lwz r11,28(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 28);
	// stw r11,10376(r31)
	PPC_STORE_U32(r31.u32 + 10376, r11.u32);
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10942);
	// lbz r9,10943(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 10943);
	// rlwinm. r9,r9,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// stw r11,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, r11.u32);
	// lwz r11,32(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 32);
	// rlwimi r10,r11,5,26,26
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 5) & 0x20) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFDF);
	// stb r10,10942(r31)
	PPC_STORE_U8(r31.u32 + 10942, ctx.r10.u8);
	// beq 0x82bdde58
	if (cr0.eq) goto loc_82BDDE58;
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdddb0
	if (cr0.eq) goto loc_82BDDDB0;
	// li r11,1
	r11.s64 = 1;
	// b 0x82bdde40
	goto loc_82BDDE40;
loc_82BDDDB0:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdde38
	if (cr0.eq) goto loc_82BDDE38;
	// lwz r11,12440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12728);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdddd0
	if (cr6.eq) goto loc_82BDDDD0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdde38
	if (!cr6.eq) goto loc_82BDDE38;
loc_82BDDDD0:
	// lwz r11,12444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12732);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddde8
	if (cr6.eq) goto loc_82BDDDE8;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdde38
	if (!cr6.eq) goto loc_82BDDE38;
loc_82BDDDE8:
	// lwz r11,12448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12736);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdde00
	if (cr6.eq) goto loc_82BDDE00;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdde38
	if (!cr6.eq) goto loc_82BDDE38;
loc_82BDDE00:
	// lwz r11,12452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12740);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdde18
	if (cr6.eq) goto loc_82BDDE18;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdde38
	if (!cr6.eq) goto loc_82BDDE38;
loc_82BDDE18:
	// lwz r11,12456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12744);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bdde30
	if (cr6.eq) goto loc_82BDDE30;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bdde38
	if (!cr6.eq) goto loc_82BDDE38;
loc_82BDDE30:
	// li r11,1
	r11.s64 = 1;
	// b 0x82bdde3c
	goto loc_82BDDE3C;
loc_82BDDE38:
	// li r11,0
	r11.s64 = 0;
loc_82BDDE3C:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82BDDE40:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdde58
	if (cr0.eq) goto loc_82BDDE58;
	// lwz r11,10368(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10368);
	// lwz r10,13172(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13172);
	// rlwimi r11,r10,18,0,13
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFC0000) | (r11.u64 & 0xFFFFFFFF0003FFFF);
	// stw r11,10368(r31)
	PPC_STORE_U32(r31.u32 + 10368, r11.u32);
loc_82BDDE58:
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// rldicr r12,r12,55,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 55) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// b 0x82bdde9c
	goto loc_82BDDE9C;
loc_82BDDE7C:
	// lwz r11,10560(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// lbz r10,10942(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10942);
	// rlwinm r11,r11,0,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFF0;
	// andi. r10,r10,223
	ctx.r10.u64 = ctx.r10.u64 & 223;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,10560(r31)
	PPC_STORE_U32(r31.u32 + 10560, r11.u32);
	// stb r10,10942(r31)
	PPC_STORE_U8(r31.u32 + 10942, ctx.r10.u8);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,256
	r11.u64 = r11.u64 | 256;
loc_82BDDE9C:
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r11,12716(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12716);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddf78
	if (!cr6.eq) goto loc_82BDDF78;
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bddf78
	if (!cr0.eq) goto loc_82BDDF78;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bddf78
	if (!cr0.eq) goto loc_82BDDF78;
	// lbz r10,12187(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 12187);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne 0x82bddf78
	if (!cr0.eq) goto loc_82BDDF78;
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bddedc
	if (cr0.eq) goto loc_82BDDEDC;
	// li r11,1
	r11.s64 = 1;
	// b 0x82bddf6c
	goto loc_82BDDF6C;
loc_82BDDEDC:
	// rlwinm. r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bddf64
	if (cr0.eq) goto loc_82BDDF64;
	// lwz r11,12440(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12440);
	// lwz r10,12728(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12728);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddefc
	if (cr6.eq) goto loc_82BDDEFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddf64
	if (!cr6.eq) goto loc_82BDDF64;
loc_82BDDEFC:
	// lwz r11,12444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12444);
	// lwz r10,12732(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12732);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddf14
	if (cr6.eq) goto loc_82BDDF14;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddf64
	if (!cr6.eq) goto loc_82BDDF64;
loc_82BDDF14:
	// lwz r11,12448(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12448);
	// lwz r10,12736(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12736);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddf2c
	if (cr6.eq) goto loc_82BDDF2C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddf64
	if (!cr6.eq) goto loc_82BDDF64;
loc_82BDDF2C:
	// lwz r11,12452(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12452);
	// lwz r10,12740(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12740);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddf44
	if (cr6.eq) goto loc_82BDDF44;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddf64
	if (!cr6.eq) goto loc_82BDDF64;
loc_82BDDF44:
	// lwz r11,12456(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r10,12744(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12744);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82bddf5c
	if (cr6.eq) goto loc_82BDDF5C;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// bne cr6,0x82bddf64
	if (!cr6.eq) goto loc_82BDDF64;
loc_82BDDF5C:
	// li r11,1
	r11.s64 = 1;
	// b 0x82bddf68
	goto loc_82BDDF68;
loc_82BDDF64:
	// li r11,0
	r11.s64 = 0;
loc_82BDDF68:
	// clrlwi r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
loc_82BDDF6C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// bne 0x82bddf7c
	if (!cr0.eq) goto loc_82BDDF7C;
loc_82BDDF78:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BDDF7C:
	// lbz r9,10940(r31)
	ctx.r9.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// lwz r11,11876(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11876);
	// rlwimi r9,r10,0,31,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFE);
	// stb r9,10940(r31)
	PPC_STORE_U8(r31.u32 + 10940, ctx.r9.u8);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// stw r11,11876(r31)
	PPC_STORE_U32(r31.u32 + 11876, r11.u32);
	// bne cr6,0x82bddfa0
	if (!cr6.eq) goto loc_82BDDFA0;
	// li r11,0
	r11.s64 = 0;
loc_82BDDFA0:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10548);
	// rlwimi r10,r11,1,30,30
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 1) & 0x2) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r10,10548(r31)
	PPC_STORE_U32(r31.u32 + 10548, ctx.r10.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// lwz r10,12456(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12456);
	// lwz r11,11880(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 11880);
	// stw r11,11880(r31)
	PPC_STORE_U32(r31.u32 + 11880, r11.u32);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82bddfd8
	if (!cr6.eq) goto loc_82BDDFD8;
	// li r11,0
	r11.s64 = 0;
loc_82BDDFD8:
	// lwz r10,10548(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 10548);
	// rlwimi r11,r10,0,0,30
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFE) | (r11.u64 & 0xFFFFFFFF00000001);
	// stw r11,10548(r31)
	PPC_STORE_U32(r31.u32 + 10548, r11.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ori r11,r11,2048
	r11.u64 = r11.u64 | 2048;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE010"))) PPC_WEAK_FUNC(sub_82BDE010);
PPC_FUNC_IMPL(__imp__sub_82BDE010) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bdd9f0
	sub_82BDD9F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDE018"))) PPC_WEAK_FUNC(sub_82BDE018);
PPC_FUNC_IMPL(__imp__sub_82BDE018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	// mflr r12
	// bl 0x831b0b24
	// lis r10,42
	ctx.r10.s64 = 2752512;
	// lis r9,24
	ctx.r9.s64 = 1572864;
	// lis r5,44
	ctx.r5.s64 = 2883584;
	// li r11,0
	r11.s64 = 0;
	// andi. r7,r3,16398
	ctx.r7.u64 = ctx.r3.u64 & 16398;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// ori r6,r10,9145
	ctx.r6.u64 = ctx.r10.u64 | 9145;
	// ori r31,r9,10374
	r31.u64 = ctx.r9.u64 | 10374;
	// ori r30,r5,33700
	r30.u64 = ctx.r5.u64 | 33700;
	// mr r8,r11
	ctx.r8.u64 = r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = r11.u64;
	// addi r10,r4,52
	ctx.r10.s64 = ctx.r4.s64 + 52;
	// cmplwi cr6,r7,2
	cr6.compare<uint32_t>(ctx.r7.u32, 2, xer);
	// beq cr6,0x82bde398
	if (cr6.eq) goto loc_82BDE398;
	// cmplwi cr6,r7,6
	cr6.compare<uint32_t>(ctx.r7.u32, 6, xer);
	// beq cr6,0x82bde318
	if (cr6.eq) goto loc_82BDE318;
	// cmplwi cr6,r7,8
	cr6.compare<uint32_t>(ctx.r7.u32, 8, xer);
	// beq cr6,0x82bde29c
	if (cr6.eq) goto loc_82BDE29C;
	// cmplwi cr6,r7,10
	cr6.compare<uint32_t>(ctx.r7.u32, 10, xer);
	// beq cr6,0x82bde208
	if (cr6.eq) goto loc_82BDE208;
	// cmplwi cr6,r7,12
	cr6.compare<uint32_t>(ctx.r7.u32, 12, xer);
	// beq cr6,0x82bde144
	if (cr6.eq) goto loc_82BDE144;
	// cmplwi cr6,r7,14
	cr6.compare<uint32_t>(ctx.r7.u32, 14, xer);
	// beq cr6,0x82bde09c
	if (cr6.eq) goto loc_82BDE09C;
	// cmplwi cr6,r7,16386
	cr6.compare<uint32_t>(ctx.r7.u32, 16386, xer);
	// bne cr6,0x82bde3bc
	if (!cr6.eq) goto loc_82BDE3BC;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// ori r7,r9,9126
	ctx.r7.u64 = ctx.r9.u64 | 9126;
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// b 0x82bde3a0
	goto loc_82BDE3A0;
loc_82BDE09C:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// li r8,12
	ctx.r8.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// rlwinm. r7,r3,0,19,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// li r7,2
	ctx.r7.s64 = 2;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// stb r7,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r7.u8);
	// beq 0x82bde110
	if (cr0.eq) goto loc_82BDE110;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,28
	ctx.r8.s64 = 28;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// b 0x82bde3ac
	goto loc_82BDE3AC;
loc_82BDE110:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,32
	ctx.r9.s64 = 32;
	// beq 0x82bde13c
	if (cr0.eq) goto loc_82BDE13C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE13C:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE144:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// beq 0x82bde1b0
	if (cr0.eq) goto loc_82BDE1B0;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_82BDE18C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lis r8,26
	ctx.r8.s64 = 1703936;
	// li r28,2
	r28.s64 = 2;
	// ori r29,r8,8838
	r29.u64 = ctx.r8.u64 | 8838;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r29.u32);
	// stb r28,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r28.u8);
	// b 0x82bde3ac
	goto loc_82BDE3AC;
loc_82BDE1B0:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bde1e8
	if (cr0.eq) goto loc_82BDE1E8;
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r7,24
	ctx.r7.s64 = 24;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,28
	ctx.r9.s64 = 28;
loc_82BDE1CC:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r29,2
	r29.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r29,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r29.u8);
	// b 0x82bde3ac
	goto loc_82BDE3AC;
loc_82BDE1E8:
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9126
	ctx.r9.u64 = ctx.r9.u64 | 9126;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE208:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// beq 0x82bde25c
	if (cr0.eq) goto loc_82BDE25C;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82bde18c
	goto loc_82BDE18C;
loc_82BDE25C:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bde284
	if (cr0.eq) goto loc_82BDE284;
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r7,20
	ctx.r7.s64 = 20;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82bde1cc
	goto loc_82BDE1CC;
loc_82BDE284:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,24
	ctx.r9.s64 = 24;
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE29C:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// beq 0x82bde2e8
	if (cr0.eq) goto loc_82BDE2E8;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
loc_82BDE2D4:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r7,16
	ctx.r7.s64 = 16;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x82bde18c
	goto loc_82BDE18C;
loc_82BDE2E8:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bde2f8
	if (cr0.eq) goto loc_82BDE2F8;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// b 0x82bde2d4
	goto loc_82BDE2D4;
loc_82BDE2F8:
	// lis r9,44
	ctx.r9.s64 = 2883584;
	// li r8,12
	ctx.r8.s64 = 12;
	// ori r9,r9,9125
	ctx.r9.u64 = ctx.r9.u64 | 9125;
	// sth r8,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r8.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE318:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// rlwinm. r9,r3,0,19,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x1000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// beq 0x82bde360
	if (cr0.eq) goto loc_82BDE360;
	// lis r9,26
	ctx.r9.s64 = 1703936;
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// li r7,12
	ctx.r7.s64 = 12;
	// ori r9,r9,8838
	ctx.r9.u64 = ctx.r9.u64 | 8838;
	// sth r7,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r7.u16);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// b 0x82bde3ac
	goto loc_82BDE3AC;
loc_82BDE360:
	// rlwinm. r9,r3,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// li r9,12
	ctx.r9.s64 = 12;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,16
	ctx.r9.s64 = 16;
	// beq 0x82bde38c
	if (cr0.eq) goto loc_82BDE38C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r8,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r8.u8);
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE38C:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stb r5,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r5.u8);
	// b 0x82bde3b8
	goto loc_82BDE3B8;
loc_82BDE398:
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
loc_82BDE3A0:
	// sth r11,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, r11.u16);
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// stb r11,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r11.u8);
loc_82BDE3AC:
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
loc_82BDE3B8:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BDE3BC:
	// rlwinm. r7,r3,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bde3f4
	if (cr0.eq) goto loc_82BDE3F4;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,3
	ctx.r9.s64 = 3;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r7,r7,12
	ctx.r7.s64 = ctx.r7.s64 + 12;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BDE3F4:
	// rlwinm. r7,r3,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bde42c
	if (cr0.eq) goto loc_82BDE42C;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// li r9,4
	ctx.r9.s64 = 4;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r30.u32);
	// stb r9,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r9.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BDE42C:
	// rlwinm. r7,r3,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// li r6,10
	ctx.r6.s64 = 10;
	// beq 0x82bde464
	if (cr0.eq) goto loc_82BDE464;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r11,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r11.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BDE464:
	// rlwinm. r7,r3,0,24,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82bde498
	if (cr0.eq) goto loc_82BDE498;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r7,4
	ctx.r9.s64 = ctx.r7.s64 + 4;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r31.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r6,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, ctx.r6.u8);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stb r5,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, ctx.r5.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82BDE498:
	// rlwinm. r31,r3,24,28,31
	r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// rlwinm r6,r3,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF;
	// mr r7,r11
	ctx.r7.u64 = r11.u64;
	// beq 0x82bde50c
	if (cr0.eq) goto loc_82BDE50C;
	// lis r5,-32243
	ctx.r5.s64 = -2113077248;
	// add r8,r31,r8
	ctx.r8.u64 = r31.u64 + ctx.r8.u64;
	// addi r5,r5,-11216
	ctx.r5.s64 = ctx.r5.s64 + -11216;
loc_82BDE4B4:
	// clrlwi r30,r6,30
	r30.u64 = ctx.r6.u32 & 0x3;
	// addi r29,r5,-4
	r29.s64 = ctx.r5.s64 + -4;
	// clrlwi r3,r9,16
	ctx.r3.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r28,r7
	r28.u64 = ctx.r7.u64;
	// li r27,5
	r27.s64 = 5;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lbzx r30,r30,r29
	r30.u64 = PPC_LOAD_U8(r30.u32 + r29.u32);
	// rlwinm r6,r6,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// sth r9,2(r10)
	PPC_STORE_U16(ctx.r10.u32 + 2, ctx.r9.u16);
	// cmplw cr6,r7,r31
	cr6.compare<uint32_t>(ctx.r7.u32, r31.u32, xer);
	// rlwinm r9,r30,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFFFFC;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, r11.u16);
	// add r30,r9,r5
	r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 + ctx.r9.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r3,-4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// stb r11,8(r10)
	PPC_STORE_U8(ctx.r10.u32 + 8, r11.u8);
	// stb r27,9(r10)
	PPC_STORE_U8(ctx.r10.u32 + 9, r27.u8);
	// stb r28,10(r10)
	PPC_STORE_U8(ctx.r10.u32 + 10, r28.u8);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// blt cr6,0x82bde4b4
	if (cr6.lt) goto loc_82BDE4B4;
loc_82BDE50C:
	// li r7,255
	ctx.r7.s64 = 255;
	// sth r11,-62(r1)
	PPC_STORE_U16(ctx.r1.u32 + -62, r11.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stb r11,-56(r1)
	PPC_STORE_U8(ctx.r1.u32 + -56, r11.u8);
	// sth r7,-64(r1)
	PPC_STORE_U16(ctx.r1.u32 + -64, ctx.r7.u16);
	// lwz r7,-64(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	// stb r11,-55(r1)
	PPC_STORE_U8(ctx.r1.u32 + -55, r11.u8);
	// stb r11,-54(r1)
	PPC_STORE_U8(ctx.r1.u32 + -54, r11.u8);
	// lwz r6,-56(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// stw r8,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r8.u32);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, r11.u32);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, r11.u32);
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BDE550"))) PPC_WEAK_FUNC(sub_82BDE550);
PPC_FUNC_IMPL(__imp__sub_82BDE550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lbz r11,0(r3)
	r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE560"))) PPC_WEAK_FUNC(sub_82BDE560);
PPC_FUNC_IMPL(__imp__sub_82BDE560) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// stw r3,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r3.u32);
	// stw r5,8(r31)
	PPC_STORE_U32(r31.u32 + 8, ctx.r5.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
	// beq cr6,0x82bde5a0
	if (cr6.eq) goto loc_82BDE5A0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BDE5A0:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE5B8"))) PPC_WEAK_FUNC(sub_82BDE5B8);
PPC_FUNC_IMPL(__imp__sub_82BDE5B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r30,r11,r5
	r30.u64 = r11.u64 + ctx.r5.u64;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82bde5fc
	if (cr6.gt) goto loc_82BDE5FC;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82bde610
	if (cr6.eq) goto loc_82BDE610;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x82bde610
	goto loc_82BDE610;
loc_82BDE5FC:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bde610
	if (cr6.eq) goto loc_82BDE610;
	// lis r11,-32768
	r11.s64 = -2147483648;
	// ori r11,r11,16389
	r11.u64 = r11.u64 | 16389;
	// stw r11,16(r31)
	PPC_STORE_U32(r31.u32 + 16, r11.u32);
loc_82BDE610:
	// lwz r11,12(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82bde624
	if (!cr6.gt) goto loc_82BDE624;
	// stw r30,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r30.u32);
loc_82BDE624:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE640"))) PPC_WEAK_FUNC(sub_82BDE640);
PPC_FUNC_IMPL(__imp__sub_82BDE640) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xFFFFFFF;
	// rlwinm. r10,r11,17,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 | r11.u64;
	// rlwinm r9,r9,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// beq 0x82bde664
	if (cr0.eq) goto loc_82BDE664;
	// rlwinm. r8,r11,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// beq 0x82bde664
	if (cr0.eq) goto loc_82BDE664;
	// li r9,15
	ctx.r9.s64 = 15;
loc_82BDE664:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82bde67c
	if (cr6.eq) goto loc_82BDE67C;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// li r11,1
	r11.s64 = 1;
	// blt cr6,0x82bde680
	if (cr6.lt) goto loc_82BDE680;
loc_82BDE67C:
	// li r11,0
	r11.s64 = 0;
loc_82BDE680:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bde694
	if (cr0.eq) goto loc_82BDE694;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// bne cr6,0x82bde698
	if (!cr6.eq) goto loc_82BDE698;
loc_82BDE694:
	// li r11,0
	r11.s64 = 0;
loc_82BDE698:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// beqlr 
	if (cr0.eq) return;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// clrlwi r11,r9,24
	r11.u64 = ctx.r9.u32 & 0xFF;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE6B8"))) PPC_WEAK_FUNC(sub_82BDE6B8);
PPC_FUNC_IMPL(__imp__sub_82BDE6B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// beq 0x82bde6f0
	if (cr0.eq) goto loc_82BDE6F0;
	// rlwinm r10,r11,22,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,12,14,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x3F000) | (r11.u64 & 0xFFFFFFFFFFFC0FFF);
	// rlwinm r10,r11,29,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0xFC;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,5,21,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x7E0) | (r11.u64 & 0xFFFFFFFFFFFFF81F);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// blr 
	return;
loc_82BDE6F0:
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bde718
	if (!cr0.eq) goto loc_82BDE718;
	// rlwinm r10,r11,26,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r11,r10,8,18,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, r11.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_82BDE718:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r11,-31951
	r11.s64 = -2093940736;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r11,r11,-2872
	r11.s64 = r11.s64 + -2872;
	// rlwinm r6,r10,8,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F;
	// addi r5,r11,32
	ctx.r5.s64 = r11.s64 + 32;
	// rlwinm r4,r9,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// lbzx r11,r6,r11
	r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + r11.u32);
	// lbzx r6,r4,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r5.u32);
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// blt cr6,0x82bde764
	if (cr6.lt) goto loc_82BDE764;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bde764
	if (cr0.eq) goto loc_82BDE764;
	// lbz r10,9(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r10,9(r7)
	PPC_STORE_U8(ctx.r7.u32 + 9, ctx.r10.u8);
loc_82BDE764:
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// blt cr6,0x82bde790
	if (cr6.lt) goto loc_82BDE790;
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bde790
	if (cr0.eq) goto loc_82BDE790;
	// lbz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// stb r10,10(r7)
	PPC_STORE_U8(ctx.r7.u32 + 10, ctx.r10.u8);
loc_82BDE790:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bge cr6,0x82bde7a0
	if (!cr6.lt) goto loc_82BDE7A0;
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// bne cr6,0x82bde7c0
	if (!cr6.eq) goto loc_82BDE7C0;
loc_82BDE7A0:
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bde7c0
	if (cr0.eq) goto loc_82BDE7C0;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// rlwinm r11,r11,0,24,25
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stb r11,11(r7)
	PPC_STORE_U8(ctx.r7.u32 + 11, r11.u8);
loc_82BDE7C0:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// bnelr cr6
	if (!cr6.eq) return;
	// lwz r11,8(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r10,r11,30,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 30) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// rlwimi r5,r10,6,30,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// rlwinm r5,r10,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// rlwinm r10,r10,0,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// lwzx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwimi r6,r10,0,26,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x3C) | (ctx.r6.u64 & 0xFFFFFFFFFFFFFFC3);
	// rlwimi r11,r10,28,2,2
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 28) & 0x20000000) | (r11.u64 & 0xFFFFFFFFDFFFFFFF);
	// rlwimi r9,r10,26,5,5
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 26) & 0x4000000) | (ctx.r9.u64 & 0xFFFFFFFFFBFFFFFF);
	// stb r6,7(r7)
	PPC_STORE_U8(ctx.r7.u32 + 7, ctx.r6.u8);
	// stw r11,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE810"))) PPC_WEAK_FUNC(sub_82BDE810);
PPC_FUNC_IMPL(__imp__sub_82BDE810) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beqlr 
	if (cr0.eq) return;
	// rlwinm r10,r11,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFC;
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// rlwimi r10,r11,0,0,25
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFC0) | (ctx.r10.u64 & 0xFFFFFFFF0000003F);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE840"))) PPC_WEAK_FUNC(sub_82BDE840);
PPC_FUNC_IMPL(__imp__sub_82BDE840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bde870
	if (cr0.eq) goto loc_82BDE870;
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r10,r9,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82bde868
	if (cr6.gt) goto loc_82BDE868;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BDE868:
	// rlwinm r10,r9,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x3F;
	// b 0x82bde93c
	goto loc_82BDE93C;
loc_82BDE870:
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r6,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bde89c
	if (!cr0.eq) goto loc_82BDE89C;
	// rlwinm r10,r6,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82bde88c
	if (cr6.gt) goto loc_82BDE88C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BDE88C:
	// clrlwi r10,r6,26
	ctx.r10.u64 = ctx.r6.u32 & 0x3F;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82bde89c
	if (cr6.gt) goto loc_82BDE89C;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BDE89C:
	// lwz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r9,-31951
	ctx.r9.s64 = -2093940736;
	// rlwinm r4,r6,6,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0x3F;
	// addi r9,r9,-2872
	ctx.r9.s64 = ctx.r9.s64 + -2872;
	// rlwinm r5,r10,8,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1F;
	// addi r3,r9,32
	ctx.r3.s64 = ctx.r9.s64 + 32;
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r4,r4,r3
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r3.u32);
	// cmplwi cr6,r5,1
	cr6.compare<uint32_t>(ctx.r5.u32, 1, xer);
	// blt cr6,0x82bde8dc
	if (cr6.lt) goto loc_82BDE8DC;
	// rlwinm. r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bde8dc
	if (cr0.eq) goto loc_82BDE8DC;
	// rlwinm r9,r10,16,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0x3F;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bde8dc
	if (cr6.gt) goto loc_82BDE8DC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82BDE8DC:
	// cmplwi cr6,r5,2
	cr6.compare<uint32_t>(ctx.r5.u32, 2, xer);
	// blt cr6,0x82bde8fc
	if (cr6.lt) goto loc_82BDE8FC;
	// rlwinm. r9,r10,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bde8fc
	if (cr0.eq) goto loc_82BDE8FC;
	// rlwinm r9,r10,24,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3F;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bde8fc
	if (cr6.gt) goto loc_82BDE8FC;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82BDE8FC:
	// cmplwi cr6,r5,3
	cr6.compare<uint32_t>(ctx.r5.u32, 3, xer);
	// bge cr6,0x82bde90c
	if (!cr6.lt) goto loc_82BDE90C;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82bde924
	if (!cr6.eq) goto loc_82BDE924;
loc_82BDE90C:
	// rlwinm. r9,r10,0,2,2
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bde924
	if (cr0.eq) goto loc_82BDE924;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82bde924
	if (cr6.gt) goto loc_82BDE924;
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82BDE924:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x82bde948
	if (!cr6.eq) goto loc_82BDE948;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwimi r6,r10,30,4,4
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 30) & 0x8000000) | (ctx.r6.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r9,r6,6,30,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0x3) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
loc_82BDE93C:
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bgt cr6,0x82bde948
	if (cr6.gt) goto loc_82BDE948;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BDE948:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE950"))) PPC_WEAK_FUNC(sub_82BDE950);
PPC_FUNC_IMPL(__imp__sub_82BDE950) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,1
	ctx.r3.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r11,r9,20
	r11.u64 = ctx.r9.u32 & 0xFFF;
	// rlwinm. r7,r9,20,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// rlwinm r4,r9,16,20,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFF;
	// beqlr 
	if (cr0.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
loc_82BDE978:
	// slw r11,r3,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r4
	r11.u64 = r11.u64 & ctx.r4.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bde9d8
	if (!cr0.eq) goto loc_82BDE9D8;
	// lbz r11,8(r10)
	r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// rlwinm r9,r9,6,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,20
	cr6.compare<uint32_t>(r11.u32, 20, xer);
	// blt cr6,0x82bde9a8
	if (cr6.lt) goto loc_82BDE9A8;
	// cmplwi cr6,r11,23
	cr6.compare<uint32_t>(r11.u32, 23, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ble cr6,0x82bde9ac
	if (!cr6.gt) goto loc_82BDE9AC;
loc_82BDE9A8:
	// li r11,0
	r11.s64 = 0;
loc_82BDE9AC:
	// clrlwi r8,r11,24
	ctx.r8.u64 = r11.u32 & 0xFF;
	// cmplwi cr6,r9,27
	cr6.compare<uint32_t>(ctx.r9.u32, 27, xer);
	// blt cr6,0x82bde9c4
	if (cr6.lt) goto loc_82BDE9C4;
	// cmplwi cr6,r9,34
	cr6.compare<uint32_t>(ctx.r9.u32, 34, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// ble cr6,0x82bde9c8
	if (!cr6.gt) goto loc_82BDE9C8;
loc_82BDE9C4:
	// li r11,0
	r11.s64 = 0;
loc_82BDE9C8:
	// clrlwi. r9,r8,24
	ctx.r9.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bde9f0
	if (!cr0.eq) goto loc_82BDE9F0;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bde9f0
	if (!cr0.eq) goto loc_82BDE9F0;
loc_82BDE9D8:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// cmplw cr6,r6,r7
	cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, xer);
	// blt cr6,0x82bde978
	if (cr6.lt) goto loc_82BDE978;
	// blr 
	return;
loc_82BDE9F0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDE9F8"))) PPC_WEAK_FUNC(sub_82BDE9F8);
PPC_FUNC_IMPL(__imp__sub_82BDE9F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdeac0
	if (cr0.eq) goto loc_82BDEAC0;
	// lwz r31,4(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r30,r31,20,28,31
	r30.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 20) & 0xF;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bdeac0
	if (cr0.eq) goto loc_82BDEAC0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82bde950
	sub_82BDE950(ctx, base);
	// clrlwi r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r30,6
	cr6.compare<uint32_t>(r30.u32, 6, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// bgt cr6,0x82bdea84
	if (cr6.gt) goto loc_82BDEA84;
	// cmplwi cr6,r30,5
	cr6.compare<uint32_t>(r30.u32, 5, xer);
	// bge cr6,0x82bdea7c
	if (!cr6.lt) goto loc_82BDEA7C;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bdeac0
	if (cr6.eq) goto loc_82BDEAC0;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// ble cr6,0x82bdea7c
	if (!cr6.gt) goto loc_82BDEA7C;
	// cmplwi cr6,r30,3
	cr6.compare<uint32_t>(r30.u32, 3, xer);
	// beq cr6,0x82bdeaa8
	if (cr6.eq) goto loc_82BDEAA8;
	// cmplwi cr6,r30,4
	cr6.compare<uint32_t>(r30.u32, 4, xer);
	// beq cr6,0x82bdea94
	if (cr6.eq) goto loc_82BDEA94;
	// b 0x82bdeac0
	goto loc_82BDEAC0;
loc_82BDEA7C:
	// rlwimi r31,r11,9,22,22
	r31.u64 = (__builtin_rotateleft32(r11.u32, 9) & 0x200) | (r31.u64 & 0xFFFFFFFFFFFFFDFF);
	// b 0x82bdeabc
	goto loc_82BDEABC;
loc_82BDEA84:
	// cmplwi cr6,r30,13
	cr6.compare<uint32_t>(r30.u32, 13, xer);
	// beq cr6,0x82bdeaa8
	if (cr6.eq) goto loc_82BDEAA8;
	// cmplwi cr6,r30,14
	cr6.compare<uint32_t>(r30.u32, 14, xer);
	// bne cr6,0x82bdeac0
	if (!cr6.eq) goto loc_82BDEAC0;
loc_82BDEA94:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,10
	r11.u64 = r11.u64 & 10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// b 0x82bdeab8
	goto loc_82BDEAB8;
loc_82BDEAA8:
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r11,r11,10
	r11.u64 = r11.u64 & 10;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
loc_82BDEAB8:
	// rlwimi r31,r11,12,16,19
	r31.u64 = (__builtin_rotateleft32(r11.u32, 12) & 0xF000) | (r31.u64 & 0xFFFFFFFFFFFF0FFF);
loc_82BDEABC:
	// stw r31,4(r29)
	PPC_STORE_U32(r29.u32 + 4, r31.u32);
loc_82BDEAC0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDEAC8"))) PPC_WEAK_FUNC(sub_82BDEAC8);
PPC_FUNC_IMPL(__imp__sub_82BDEAC8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r6
	r29.u64 = ctx.r6.u64;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdeb90
	if (!cr0.eq) goto loc_82BDEB90;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdeb90
	if (!cr0.eq) goto loc_82BDEB90;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bde640
	sub_82BDE640(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bdeb90
	if (cr0.eq) goto loc_82BDEB90;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r4,r11,26
	ctx.r4.u64 = r11.u32 & 0x3F;
loc_82BDEB14:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r5
	r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r5.u8 & 0x3F));
	// and. r11,r11,r6
	r11.u64 = r11.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdeb84
	if (cr0.eq) goto loc_82BDEB84;
	// addi r11,r4,4
	r11.s64 = ctx.r4.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r5
	r11.u64 = r11.u64 + ctx.r5.u64;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x82bdeb84
	if (cr6.eq) goto loc_82BDEB84;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r11,r11,40
	r11.s64 = r11.s64 + 40;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// clrlwi r30,r29,20
	r30.u64 = r29.u32 & 0xFFF;
	// rlwinm r11,r11,1,0,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r9.u32);
	// clrlwi r8,r8,20
	ctx.r8.u64 = ctx.r8.u32 & 0xFFF;
	// lhzx r7,r11,r31
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, r30.u32);
	// lhzx r8,r11,r31
	ctx.r8.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// sthx r8,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r8.u16);
	// lwzx r11,r10,r9
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// andc r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 & ~r11.u64;
loc_82BDEB84:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r5,4
	cr6.compare<uint32_t>(ctx.r5.u32, 4, xer);
	// blt cr6,0x82bdeb14
	if (cr6.lt) goto loc_82BDEB14;
loc_82BDEB90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDEB98"))) PPC_WEAK_FUNC(sub_82BDEB98);
PPC_FUNC_IMPL(__imp__sub_82BDEB98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	r30.u64 = ctx.r7.u64;
	// mr r31,r8
	r31.u64 = ctx.r8.u64;
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdec44
	if (!cr0.eq) goto loc_82BDEC44;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdec44
	if (!cr0.eq) goto loc_82BDEC44;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bde640
	sub_82BDE640(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82bdec44
	if (cr0.eq) goto loc_82BDEC44;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r5,r11,26
	ctx.r5.u64 = r11.u32 & 0x3F;
loc_82BDEBE8:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r7
	r11.u64 = r11.u64 & ctx.r7.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdec38
	if (cr0.eq) goto loc_82BDEC38;
	// addi r11,r5,2
	r11.s64 = ctx.r5.s64 + 2;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// lbzx r11,r11,r31
	r11.u64 = PPC_LOAD_U8(r11.u32 + r31.u32);
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// beq cr6,0x82bdec38
	if (cr6.eq) goto loc_82BDEC38;
	// addi r10,r11,36
	ctx.r10.s64 = r11.s64 + 36;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,1,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U16(r11.u32 + r31.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r10,r11,r31
	PPC_STORE_U16(r11.u32 + r31.u32, ctx.r10.u16);
	// lwzx r11,r9,r8
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// andc r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 & ~r11.u64;
loc_82BDEC38:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r6,4
	cr6.compare<uint32_t>(ctx.r6.u32, 4, xer);
	// blt cr6,0x82bdebe8
	if (cr6.lt) goto loc_82BDEBE8;
loc_82BDEC44:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDEC60"))) PPC_WEAK_FUNC(sub_82BDEC60);
PPC_FUNC_IMPL(__imp__sub_82BDEC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdecb4
	if (cr0.eq) goto loc_82BDECB4;
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bgt cr6,0x82bdeca0
	if (cr6.gt) goto loc_82BDECA0;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// rlwimi r11,r9,0,0,27
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFF0) | (r11.u64 & 0xFFFFFFFF0000000F);
	// b 0x82bdecb0
	goto loc_82BDECB0;
loc_82BDECA0:
	// cmplwi cr6,r11,61
	cr6.compare<uint32_t>(r11.u32, 61, xer);
	// bne cr6,0x82bdecb4
	if (!cr6.eq) goto loc_82BDECB4;
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_82BDECB0:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
loc_82BDECB4:
	// lbz r11,8(r7)
	r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 8);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x82bdeccc
	if (cr6.lt) goto loc_82BDECCC;
	// cmplwi cr6,r11,27
	cr6.compare<uint32_t>(r11.u32, 27, xer);
	// ble cr6,0x82bdece4
	if (!cr6.gt) goto loc_82BDECE4;
loc_82BDECCC:
	// lwz r11,0(r7)
	r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,6,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x3F;
	// cmplwi cr6,r11,35
	cr6.compare<uint32_t>(r11.u32, 35, xer);
	// bltlr cr6
	if (cr6.lt) return;
	// cmplwi cr6,r11,39
	cr6.compare<uint32_t>(r11.u32, 39, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82BDECE4:
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDECF8"))) PPC_WEAK_FUNC(sub_82BDECF8);
PPC_FUNC_IMPL(__imp__sub_82BDECF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r20,r9
	r20.u64 = ctx.r9.u64;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// rlwinm. r26,r11,20,29,31
	r26.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// beq 0x82bdedd4
	if (cr0.eq) goto loc_82BDEDD4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// rlwinm r6,r10,4,26,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x30;
	// mulli r10,r9,12
	ctx.r10.s64 = ctx.r9.s64 * 12;
	// add r31,r10,r7
	r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r25,r11,16,20,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// or r24,r6,r8
	r24.u64 = ctx.r6.u64 | ctx.r8.u64;
	// li r30,0
	r30.s64 = 0;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82bdedd4
	if (cr6.eq) goto loc_82BDEDD4;
	// li r28,0
	r28.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_82BDED58:
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// bgt cr6,0x82bdedd0
	if (cr6.gt) goto loc_82BDEDD0;
	// bne cr6,0x82bdedb8
	if (!cr6.eq) goto loc_82BDEDB8;
	// slw r11,r27,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// slw r9,r27,r28
	ctx.r9.u64 = r28.u8 & 0x20 ? 0 : (r27.u32 << (r28.u8 & 0x3F));
	// and r11,r11,r24
	r11.u64 = r11.u64 & r24.u64;
	// and r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 & r25.u64;
	// cntlzw r8,r11
	ctx.r8.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// clrlwi r11,r10,20
	r11.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r31
	ctx.r7.u64 = r31.u64;
	// add r6,r11,r30
	ctx.r6.u64 = r11.u64 + r30.u64;
	// xori r5,r10,1
	ctx.r5.u64 = ctx.r10.u64 ^ 1;
	// xori r4,r9,1
	ctx.r4.u64 = ctx.r9.u64 ^ 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r22
	ctr.u64 = r22.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r11,r31,12
	r11.s64 = r31.s64 + 12;
	// stw r11,0(r23)
	PPC_STORE_U32(r23.u32 + 0, r11.u32);
loc_82BDEDB8:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// addi r28,r28,2
	r28.s64 = r28.s64 + 2;
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// cmplw cr6,r30,r26
	cr6.compare<uint32_t>(r30.u32, r26.u32, xer);
	// blt cr6,0x82bded58
	if (cr6.lt) goto loc_82BDED58;
	// b 0x82bdedd4
	goto loc_82BDEDD4;
loc_82BDEDD0:
	// stw r27,0(r20)
	PPC_STORE_U32(r20.u32 + 0, r27.u32);
loc_82BDEDD4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82BDEDE0"))) PPC_WEAK_FUNC(sub_82BDEDE0);
PPC_FUNC_IMPL(__imp__sub_82BDEDE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r3,19896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19896);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82bdee20
	if (cr6.eq) goto loc_82BDEE20;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r11.u32);
loc_82BDEE20:
	// stw r30,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r30.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82bdee40
	if (cr6.eq) goto loc_82BDEE40;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BDEE40:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDEE58"))) PPC_WEAK_FUNC(sub_82BDEE58);
PPC_FUNC_IMPL(__imp__sub_82BDEE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	// lwz r11,19892(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19892);
	// andi. r10,r4,249
	ctx.r10.u64 = ctx.r4.u64 & 249;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,29,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF07;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,19892(r3)
	PPC_STORE_U32(ctx.r3.u32 + 19892, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDEE78"))) PPC_WEAK_FUNC(sub_82BDEE78);
PPC_FUNC_IMPL(__imp__sub_82BDEE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r10,r11,16
	ctx.r10.s64 = r11.s64 + 16;
	// stw r4,104(r11)
	PPC_STORE_U32(r11.u32 + 104, ctx.r4.u32);
	// stw r5,108(r11)
	PPC_STORE_U32(r11.u32 + 108, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDEE98"))) PPC_WEAK_FUNC(sub_82BDEE98);
PPC_FUNC_IMPL(__imp__sub_82BDEE98) {
	PPC_FUNC_PROLOGUE();
	// b 0x82bdede0
	sub_82BDEDE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDEEA0"))) PPC_WEAK_FUNC(sub_82BDEEA0);
PPC_FUNC_IMPL(__imp__sub_82BDEEA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r22,r9
	r22.u64 = ctx.r9.u64;
	// mr r23,r10
	r23.u64 = ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// bne cr6,0x82bdeee4
	if (!cr6.eq) goto loc_82BDEEE4;
	// lwz r11,4(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82bdeee4
	if (!cr0.eq) goto loc_82BDEEE4;
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
loc_82BDEEE4:
	// rlwinm. r11,r22,0,29,30
	r11.u64 = __builtin_rotateleft64(r22.u32 | (r22.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdf030
	if (cr0.eq) goto loc_82BDF030;
	// lwz r31,4(r24)
	r31.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm. r11,r31,0,20,20
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdef04
	if (cr0.eq) goto loc_82BDEF04;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// b 0x82bdef0c
	goto loc_82BDEF0C;
loc_82BDEF04:
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_82BDEF0C:
	// lwz r11,0(r24)
	r11.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// rlwinm. r25,r11,20,29,31
	r25.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	cr0.compare<int32_t>(r25.s32, 0, xer);
	// beq 0x82bdf030
	if (cr0.eq) goto loc_82BDF030;
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// mulli r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 * 12;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// blt cr6,0x82bdf028
	if (cr6.lt) goto loc_82BDF028;
	// mulli r9,r25,12
	ctx.r9.s64 = r25.s64 * 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bgt cr6,0x82bdf028
	if (cr6.gt) goto loc_82BDF028;
	// rlwinm r9,r31,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xF;
	// add r29,r10,r7
	r29.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r28,r11,16,20,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFF;
	// or r26,r9,r8
	r26.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r31,0
	r31.s64 = 0;
	// cmplwi cr6,r25,0
	cr6.compare<uint32_t>(r25.u32, 0, xer);
	// beq cr6,0x82bdf030
	if (cr6.eq) goto loc_82BDF030;
	// li r30,0
	r30.s64 = 0;
	// li r27,1
	r27.s64 = 1;
loc_82BDEF60:
	// li r11,2
	r11.s64 = 2;
	// slw r10,r27,r30
	ctx.r10.u64 = r30.u8 & 0x20 ? 0 : (r27.u32 << (r30.u8 & 0x3F));
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// slw r9,r27,r31
	ctx.r9.u64 = r31.u8 & 0x20 ? 0 : (r27.u32 << (r31.u8 & 0x3F));
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// and r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 & r28.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// and r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 & r26.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// xori r8,r11,1
	ctx.r8.u64 = r11.u64 ^ 1;
	// cntlzw r11,r9
	r11.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r11,r10,0,0,30
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// xori r10,r9,1
	ctx.r10.u64 = ctx.r9.u64 ^ 1;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// beq 0x82bdefb0
	if (cr0.eq) goto loc_82BDEFB0;
	// ori r11,r11,32
	r11.u64 = r11.u64 | 32;
loc_82BDEFB0:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdefbc
	if (cr0.eq) goto loc_82BDEFBC;
	// ori r11,r11,16
	r11.u64 = r11.u64 | 16;
loc_82BDEFBC:
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 4);
	// rlwinm. r9,r10,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bdefcc
	if (cr0.eq) goto loc_82BDEFCC;
	// ori r11,r11,64
	r11.u64 = r11.u64 | 64;
loc_82BDEFCC:
	// rlwinm r10,r10,0,16,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r10,20480
	cr6.compare<uint32_t>(ctx.r10.u32, 20480, xer);
	// bne cr6,0x82bdefdc
	if (!cr6.eq) goto loc_82BDEFDC;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
loc_82BDEFDC:
	// and r10,r11,r22
	ctx.r10.u64 = r11.u64 & r22.u64;
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82bdf010
	if (cr0.eq) goto loc_82BDF010;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// lwz r6,260(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// clrlwi r10,r10,20
	ctx.r10.u64 = ctx.r10.u32 & 0xFFF;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + r31.u64;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bdf030
	if (cr0.lt) goto loc_82BDF030;
loc_82BDF010:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// addi r29,r29,12
	r29.s64 = r29.s64 + 12;
	// cmplw cr6,r31,r25
	cr6.compare<uint32_t>(r31.u32, r25.u32, xer);
	// blt cr6,0x82bdef60
	if (cr6.lt) goto loc_82BDEF60;
	// b 0x82bdf030
	goto loc_82BDF030;
loc_82BDF028:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82BDF030:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BDF038"))) PPC_WEAK_FUNC(sub_82BDF038);
PPC_FUNC_IMPL(__imp__sub_82BDF038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r10
	r20.u64 = ctx.r10.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r24.u32);
	// mr r19,r3
	r19.u64 = ctx.r3.u64;
	// mr r18,r5
	r18.u64 = ctx.r5.u64;
	// mr r16,r6
	r16.u64 = ctx.r6.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r14,r8
	r14.u64 = ctx.r8.u64;
	// mr r21,r9
	r21.u64 = ctx.r9.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r31,0
	r31.s64 = 0;
	// li r29,0
	r29.s64 = 0;
	// li r27,0
	r27.s64 = 0;
	// li r17,-1
	r17.s64 = -1;
	// li r15,-1
	r15.s64 = -1;
	// addi r22,r11,-4
	r22.s64 = r11.s64 + -4;
	// addi r25,r10,-4
	r25.s64 = ctx.r10.s64 + -4;
	// li r26,1
	r26.s64 = 1;
loc_82BDF094:
	// li r11,12
	r11.s64 = 12;
	// li r9,6
	ctx.r9.s64 = 6;
	// divwu r11,r31,r11
	r11.u32 = r31.u32 / r11.u32;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// subf r10,r11,r31
	ctx.r10.s64 = r31.s64 - r11.s64;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// beq cr6,0x82bdf0c4
	if (cr6.eq) goto loc_82BDF0C4;
	// cmplw cr6,r31,r16
	cr6.compare<uint32_t>(r31.u32, r16.u32, xer);
	// bge cr6,0x82bdf3a0
	if (!cr6.lt) goto loc_82BDF3A0;
	// add r28,r11,r18
	r28.u64 = r11.u64 + r18.u64;
	// b 0x82bdf0d4
	goto loc_82BDF0D4;
loc_82BDF0C4:
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r31,r8
	cr6.compare<uint32_t>(r31.u32, ctx.r8.u32, xer);
	// bge cr6,0x82bdf3a0
	if (!cr6.lt) goto loc_82BDF3A0;
	// add r28,r11,r19
	r28.u64 = r11.u64 + r19.u64;
loc_82BDF0D4:
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r11,r1,112
	r11.s64 = ctx.r1.s64 + 112;
	// clrlwi. r7,r21,31
	ctx.r7.u64 = r21.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// add r30,r10,r11
	r30.u64 = ctx.r10.u64 + r11.u64;
	// lhz r11,6(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 6);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// lhz r11,4(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 4);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 8);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r11.u32);
	// lhz r11,8(r28)
	r11.u64 = PPC_LOAD_U16(r28.u32 + 8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, r11.u32);
	// beq 0x82bdf134
	if (cr0.eq) goto loc_82BDF134;
	// lwz r6,404(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// divwu r4,r31,r9
	ctx.r4.u32 = r31.u32 / ctx.r9.u32;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r20
	ctr.u64 = r20.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bdf3a8
	if (cr0.lt) goto loc_82BDF3A8;
loc_82BDF134:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r10,r11,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r10,15
	cr6.compare<uint32_t>(ctx.r10.u32, 15, xer);
	// bgt cr6,0x82bdf328
	if (cr6.gt) goto loc_82BDF328;
	// lis r12,-32243
	r12.s64 = -2113077248;
	// addi r12,r12,-10928
	r12.s64 = r12.s64 + -10928;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32066
	r12.s64 = -2101477376;
	// addi r12,r12,-3728
	r12.s64 = r12.s64 + -3728;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BDF324;
	case 1:
		goto loc_82BDF170;
	case 2:
		goto loc_82BDF31C;
	case 3:
		goto loc_82BDF178;
	case 4:
		goto loc_82BDF2F0;
	case 5:
		goto loc_82BDF170;
	case 6:
		goto loc_82BDF31C;
	case 7:
		goto loc_82BDF1A8;
	case 8:
		goto loc_82BDF1DC;
	case 9:
		goto loc_82BDF21C;
	case 10:
		goto loc_82BDF28C;
	case 11:
		goto loc_82BDF2AC;
	case 12:
		goto loc_82BDF324;
	case 13:
		goto loc_82BDF178;
	case 14:
		goto loc_82BDF2F0;
	case 15:
		goto loc_82BDF324;
	default:
		__builtin_unreachable();
	}
loc_82BDF170:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// b 0x82bdf324
	goto loc_82BDF324;
loc_82BDF178:
	// rlwinm r10,r11,27,27,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r9,r11,30,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,22,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bdf324
	if (!cr6.eq) goto loc_82BDF324;
	// b 0x82bdf170
	goto loc_82BDF170;
loc_82BDF1A8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r9,r10,18,25,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x7C;
	// lwzx r9,r9,r14
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r14.u32);
	// clrlwi. r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82bdf27c
	if (cr0.eq) goto loc_82BDF27C;
	// addi r15,r15,1
	r15.s64 = r15.s64 + 1;
	// addi r25,r25,4
	r25.s64 = r25.s64 + 4;
	// cmpwi cr6,r15,4
	cr6.compare<int32_t>(r15.s32, 4, xer);
	// blt cr6,0x82bdf1d4
	if (cr6.lt) goto loc_82BDF1D4;
loc_82BDF1CC:
	// mr r27,r26
	r27.u64 = r26.u64;
	// b 0x82bdf328
	goto loc_82BDF328;
loc_82BDF1D4:
	// stw r8,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r8.u32);
	// b 0x82bdf324
	goto loc_82BDF324;
loc_82BDF1DC:
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// blt cr6,0x82bdf1cc
	if (cr6.lt) goto loc_82BDF1CC;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm r7,r9,18,25,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x7C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r25)
	PPC_STORE_U32(r25.u32 + 0, ctx.r10.u32);
	// lwzx r7,r7,r14
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + r14.u32);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// bge cr6,0x82bdf210
	if (!cr6.lt) goto loc_82BDF210;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
	// b 0x82bdf280
	goto loc_82BDF280;
loc_82BDF210:
	// addi r15,r15,-1
	r15.s64 = r15.s64 + -1;
	// addi r25,r25,-4
	r25.s64 = r25.s64 + -4;
	// b 0x82bdf324
	goto loc_82BDF324;
loc_82BDF21C:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdf25c
	if (!cr0.eq) goto loc_82BDF25C;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdf324
	if (!cr0.eq) goto loc_82BDF324;
	// rlwinm r9,r11,27,27,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r7,r11,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r7,r26,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r23.u32);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82bdf324
	if (!cr6.eq) goto loc_82BDF324;
loc_82BDF25C:
	// addi r17,r17,1
	r17.s64 = r17.s64 + 1;
	// addi r22,r22,4
	r22.s64 = r22.s64 + 4;
	// cmpwi cr6,r17,4
	cr6.compare<int32_t>(r17.s32, 4, xer);
	// bge cr6,0x82bdf1cc
	if (!cr6.lt) goto loc_82BDF1CC;
	// rlwinm r9,r29,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// addi r7,r31,6
	ctx.r7.s64 = r31.s64 + 6;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stw r9,0(r22)
	PPC_STORE_U32(r22.u32 + 0, ctx.r9.u32);
loc_82BDF27C:
	// clrlwi r10,r10,19
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFF;
loc_82BDF280:
	// rlwinm r29,r11,21,31,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 21) & 0x1;
	// mulli r31,r10,6
	r31.s64 = ctx.r10.s64 * 6;
	// b 0x82bdf328
	goto loc_82BDF328;
loc_82BDF28C:
	// cmpwi cr6,r17,0
	cr6.compare<int32_t>(r17.s32, 0, xer);
	// blt cr6,0x82bdf1cc
	if (cr6.lt) goto loc_82BDF1CC;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// addi r17,r17,-1
	r17.s64 = r17.s64 + -1;
	// addi r22,r22,-4
	r22.s64 = r22.s64 + -4;
	// clrlwi r31,r11,16
	r31.u64 = r11.u32 & 0xFFFF;
	// rlwinm r29,r11,16,16,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// b 0x82bdf328
	goto loc_82BDF328;
loc_82BDF2AC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm. r9,r10,0,18,18
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdf27c
	if (!cr0.eq) goto loc_82BDF27C;
	// rlwinm. r9,r10,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82bdf324
	if (!cr0.eq) goto loc_82BDF324;
	// rlwinm r9,r11,27,27,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r7,r11,30,27,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r6,r11,22,31,31
	ctx.r6.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r7,r26,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r7.u8 & 0x3F));
	// lwzx r9,r9,r23
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r23.u32);
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// cmplw cr6,r9,r6
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, xer);
	// bne cr6,0x82bdf324
	if (!cr6.eq) goto loc_82BDF324;
	// b 0x82bdf27c
	goto loc_82BDF27C;
loc_82BDF2F0:
	// rlwinm r10,r11,27,27,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1C;
	// rlwinm r9,r11,30,27,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1F;
	// rlwinm r11,r11,22,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 22) & 0x1;
	// slw r9,r26,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r26.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r23.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82bdf324
	if (!cr6.eq) goto loc_82BDF324;
loc_82BDF31C:
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// mr r27,r26
	r27.u64 = r26.u64;
loc_82BDF324:
	// addi r31,r31,6
	r31.s64 = r31.s64 + 6;
loc_82BDF328:
	// clrlwi. r11,r8,24
	r11.u64 = ctx.r8.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdf364
	if (cr0.eq) goto loc_82BDF364;
	// lwz r11,404(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r10,r20
	ctx.r10.u64 = r20.u64;
	// mr r9,r21
	ctx.r9.u64 = r21.u64;
	// mr r8,r16
	ctx.r8.u64 = r16.u64;
	// mr r7,r18
	ctx.r7.u64 = r18.u64;
	// mr r6,r24
	ctx.r6.u64 = r24.u64;
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bdeea0
	sub_82BDEEA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bdf3a8
	if (cr0.lt) goto loc_82BDF3A8;
loc_82BDF364:
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r27,24
	ctx.r10.u64 = r27.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,4(r28)
	PPC_STORE_U32(r28.u32 + 4, r11.u32);
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// lwz r11,124(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(r28.u32 + 8, r11.u32);
	// beq 0x82bdf094
	if (cr0.eq) goto loc_82BDF094;
	// b 0x82bdf3a8
	goto loc_82BDF3A8;
loc_82BDF3A0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82BDF3A8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82BDF3B0"))) PPC_WEAK_FUNC(sub_82BDF3B0);
PPC_FUNC_IMPL(__imp__sub_82BDF3B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r9
	r28.u64 = ctx.r9.u64;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r22,r5
	r22.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
	// rlwinm. r11,r28,0,28,28
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beq 0x82bdf3f4
	if (cr0.eq) goto loc_82BDF3F4;
	// lwz r11,340(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// bl 0x82bdf038
	sub_82BDF038(ctx, base);
	// b 0x82bdf51c
	goto loc_82BDF51C;
loc_82BDF3F4:
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// mr r30,r25
	r30.u64 = r25.u64;
	// li r24,0
	r24.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82bdf51c
	if (cr6.eq) goto loc_82BDF51C;
	// lwz r23,340(r1)
	r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// clrlwi r18,r28,31
	r18.u64 = r28.u32 & 0x1;
loc_82BDF410:
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r20,r30,4
	r20.s64 = r30.s64 + 4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// addi r19,r30,8
	r19.s64 = r30.s64 + 8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// li r26,0
	r26.s64 = 0;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_82BDF450:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// beq cr6,0x82bdf480
	if (cr6.eq) goto loc_82BDF480;
	// li r11,6
	r11.s64 = 6;
	// mr r6,r23
	ctx.r6.u64 = r23.u64;
	// divwu r11,r24,r11
	r11.u32 = r24.u32 / r11.u32;
	// mr r5,r31
	ctx.r5.u64 = r31.u64;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r27
	ctr.u64 = r27.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bdf51c
	if (cr0.lt) goto loc_82BDF51C;
loc_82BDF480:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bdf4cc
	if (cr0.eq) goto loc_82BDF4CC;
	// mr r10,r27
	ctx.r10.u64 = r27.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r23.u32);
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r8,r21
	ctx.r8.u64 = r21.u64;
	// mr r7,r22
	ctx.r7.u64 = r22.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdeea0
	sub_82BDEEA0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82bdf51c
	if (cr0.lt) goto loc_82BDF51C;
loc_82BDF4CC:
	// addi r26,r26,1
	r26.s64 = r26.s64 + 1;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// cmplwi cr6,r26,2
	cr6.compare<uint32_t>(r26.u32, 2, xer);
	// blt cr6,0x82bdf450
	if (cr6.lt) goto loc_82BDF450;
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r24,r24,12
	r24.s64 = r24.s64 + 12;
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// lwz r7,116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r10,r8
	r11.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r9,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r9.u32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// stw r7,0(r20)
	PPC_STORE_U32(r20.u32 + 0, ctx.r7.u32);
	// cmplw cr6,r24,r6
	cr6.compare<uint32_t>(r24.u32, ctx.r6.u32, xer);
	// stw r11,0(r19)
	PPC_STORE_U32(r19.u32 + 0, r11.u32);
	// blt cr6,0x82bdf410
	if (cr6.lt) goto loc_82BDF410;
loc_82BDF51C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82BDF528"))) PPC_WEAK_FUNC(sub_82BDF528);
PPC_FUNC_IMPL(__imp__sub_82BDF528) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmplw cr6,r11,r31
	cr6.compare<uint32_t>(r11.u32, r31.u32, xer);
	// bgt cr6,0x82bdf590
	if (cr6.gt) goto loc_82BDF590;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r9
	cr6.compare<uint32_t>(r31.u32, ctx.r9.u32, xer);
	// bge cr6,0x82bdf590
	if (!cr6.lt) goto loc_82BDF590;
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - r31.s64;
	// addi r4,r31,4
	ctx.r4.s64 = r31.s64 + 4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// srawi r11,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	r11.s64 = r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b5e00
	sub_831B5E00(ctx, base);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// stw r11,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r11.u32);
loc_82BDF590:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDF5B0"))) PPC_WEAK_FUNC(sub_82BDF5B0);
PPC_FUNC_IMPL(__imp__sub_82BDF5B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82BDF5B8:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// bne cr6,0x82bdf5d4
	if (!cr6.eq) goto loc_82BDF5D4;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,7
	cr6.compare<uint32_t>(r11.u32, 7, xer);
	// blt cr6,0x82bdf5b8
	if (cr6.lt) goto loc_82BDF5B8;
loc_82BDF5D4:
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// b 0x82bdf5fc
	goto loc_82BDF5FC;
loc_82BDF5DC:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82bdf604
	if (!cr0.eq) goto loc_82BDF604;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
loc_82BDF5FC:
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// blt cr6,0x82bdf5dc
	if (cr6.lt) goto loc_82BDF5DC;
loc_82BDF604:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDF610"))) PPC_WEAK_FUNC(sub_82BDF610);
PPC_FUNC_IMPL(__imp__sub_82BDF610) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// addi r11,r31,-4
	r11.s64 = r31.s64 + -4;
	// ori r10,r10,15104
	ctx.r10.u64 = ctx.r10.u64 | 15104;
	// li r9,768
	ctx.r9.s64 = 768;
	// lis r8,-16359
	ctx.r8.s64 = -1072103424;
	// li r7,24
	ctx.r7.s64 = 24;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// ori r8,r8,11008
	ctx.r8.u64 = ctx.r8.u64 | 11008;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r29,r6,-11352
	r29.s64 = ctx.r6.s64 + -11352;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r30,96
	r11.s64 = r30.s64 + 96;
	// lis r10,-16374
	ctx.r10.s64 = -1073086464;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,11008
	ctx.r10.u64 = ctx.r10.u64 | 11008;
	// li r8,9
	ctx.r8.s64 = 9;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// addi r4,r29,96
	ctx.r4.s64 = r29.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// mr r30,r11
	r30.u64 = r11.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// addi r3,r30,4
	ctx.r3.s64 = r30.s64 + 4;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r30,36
	r11.s64 = r30.s64 + 36;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r9,4096
	ctx.r9.s64 = 268435456;
	// ori r10,r10,8576
	ctx.r10.u64 = ctx.r10.u64 | 8576;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// lis r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,8448
	ctx.r8.u64 = ctx.r8.u64 | 8448;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r5,8851
	ctx.r5.s64 = 8851;
	// li r4,0
	ctx.r4.s64 = 0;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r30,0
	r30.s64 = 0;
	// ori r3,r3,8708
	ctx.r3.u64 = ctx.r3.u64 | 8708;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lis r22,8
	r22.s64 = 524288;
	// lis r29,1
	r29.s64 = 65536;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// li r28,768
	r28.s64 = 768;
	// li r27,8978
	r27.s64 = 8978;
	// ori r30,r30,65535
	r30.u64 = r30.u64 | 65535;
	// li r26,8205
	r26.s64 = 8205;
	// li r8,0
	ctx.r8.s64 = 0;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// li r25,8704
	r25.s64 = 8704;
	// li r24,0
	r24.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r23,8832
	r23.s64 = 8832;
	// li r21,8962
	r21.s64 = 8962;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// li r6,8712
	ctx.r6.s64 = 8712;
	// ori r22,r22,8
	r22.u64 = r22.u64 | 8;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// li r9,8707
	ctx.r9.s64 = 8707;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// li r5,4
	ctx.r5.s64 = 4;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// li r4,8452
	ctx.r4.s64 = 8452;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// li r10,4
	ctx.r10.s64 = 4;
	// lis r20,2
	r20.s64 = 131072;
	// li r19,0
	r19.s64 = 0;
	// ori r20,r20,8320
	r20.u64 = r20.u64 | 8320;
	// li r18,0
	r18.s64 = 0;
	// stwu r28,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r28.u32);
	r11.u32 = ea;
	// lis r17,16
	r17.s64 = 1048576;
	// ori r29,r17,16
	r29.u64 = r17.u64 | 16;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// stwu r30,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r30.u32);
	r11.u32 = ea;
	// stwu r26,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r26.u32);
	r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// stwu r25,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r25.u32);
	r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r24.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r11.u32 = ea;
	// stwu r5,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r11.u32 = ea;
	// stwu r4,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r11.u32 = ea;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
	// stwu r23,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r23.u32);
	r11.u32 = ea;
	// stwu r22,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r22.u32);
	r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r21.u32);
	r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r20,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r20.u32);
	r11.u32 = ea;
	// stwu r19,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r19.u32);
	r11.u32 = ea;
	// stwu r18,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r18.u32);
	r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// subf r11,r31,r11
	r11.s64 = r11.s64 - r31.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// srawi r3,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r3.s64 = r11.s32 >> 2;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82BDF7E8"))) PPC_WEAK_FUNC(sub_82BDF7E8);
PPC_FUNC_IMPL(__imp__sub_82BDF7E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	PPCRegister r12{};
	// li r12,1
	r12.s64 = 1;
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r12,r12,41,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 41) & 0xFFFFFFFFFFFFFFFF;
	// or r9,r11,r12
	ctx.r9.u64 = r11.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// rldicr r11,r10,35,63
	r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// rldicr r12,r12,40,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 40) & 0xFFFFFFFFFFFFFFFF;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,39,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 39) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// rldicr r12,r12,44,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 44) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ori r10,r10,128
	ctx.r10.u64 = ctx.r10.u64 | 128;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// std r10,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r10.u64);
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 524288;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// oris r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 1048576;
	// rldicr r12,r12,37,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,2048
	ctx.r10.u64 = ctx.r10.u64 | 2048;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// li r12,1
	r12.s64 = 1;
	// std r10,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r10.u64);
	// rldicr r12,r12,54,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 54) & 0xFFFFFFFFFFFFFFFF;
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r10.u64);
	// ld r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// ld r11,24(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r11,r11,32768
	r11.u64 = r11.u64 | 2147483648;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// lwz r11,10436(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10436);
	// lwz r10,10440(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10440);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r7,r9,17
	xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1FFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 17;
	// rlwinm r11,r11,17,0,14
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 17) & 0xFFFE0000;
	// srawi r6,r10,17
	xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFFF) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 17;
	// srawi r5,r8,17
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 17;
	// srawi r4,r11,17
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x1FFFF) != 0);
	ctx.r4.s64 = r11.s32 >> 17;
	// b 0x82bda9f0
	sub_82BDA9F0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDF900"))) PPC_WEAK_FUNC(sub_82BDF900);
PPC_FUNC_IMPL(__imp__sub_82BDF900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	uint32_t ea{};
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// li r10,1480
	ctx.r10.s64 = 1480;
	// neg r9,r4
	ctx.r9.s64 = -ctx.r4.s64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// rlwimi r9,r4,8,17,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r4.u32, 8) & 0x7F00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF80FF);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lis r10,7
	ctx.r10.s64 = 458752;
	// rlwinm r9,r9,4,13,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x7FFF0;
	// ori r7,r10,36096
	ctx.r7.u64 = ctx.r10.u64 | 36096;
	// rlwinm r9,r9,0,21,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// li r10,8
	ctx.r10.s64 = 8;
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
loc_82BDF938:
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// bne 0x82bdf938
	if (!cr0.eq) goto loc_82BDF938;
	// li r10,3328
	ctx.r10.s64 = 3328;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// srawi r3,r11,2
	xer.ca = (r11.s32 < 0) & ((r11.u32 & 0x3) != 0);
	ctx.r3.s64 = r11.s32 >> 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDF960"))) PPC_WEAK_FUNC(sub_82BDF960);
PPC_FUNC_IMPL(__imp__sub_82BDF960) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r30,8192
	r29.s64 = r30.s64 + 8192;
	// bne 0x82bdf990
	if (!cr0.eq) goto loc_82BDF990;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82bdfa88
	goto loc_82BDFA88;
loc_82BDF990:
	// stw r30,13780(r31)
	PPC_STORE_U32(r31.u32 + 13780, r30.u32);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdf610
	sub_82BDF610(ctx, base);
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r30,3
	ctx.r10.u64 = r30.u32 & 0x1FFFFFFF;
	// lwz r9,13784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 13784);
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// addi r8,r3,7
	ctx.r8.s64 = ctx.r3.s64 + 7;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// rlwimi r3,r9,0,0,7
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r3.u64 & 0xFFFFFFFF00FFFFFF);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwinm r11,r8,2,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFE0;
	// stw r3,13784(r31)
	PPC_STORE_U32(r31.u32 + 13784, ctx.r3.u32);
	// stw r10,13788(r31)
	PPC_STORE_U32(r31.u32 + 13788, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// add r5,r11,r30
	ctx.r5.u64 = r11.u64 + r30.u64;
	// addi r30,r31,13920
	r30.s64 = r31.s64 + 13920;
loc_82BDF9DC:
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdf900
	sub_82BDF900(ctx, base);
	// rlwinm r11,r5,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// addi r7,r3,7
	ctx.r7.s64 = ctx.r3.s64 + 7;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwinm r11,r7,2,0,26
	r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFE0;
	// stw r10,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r10.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stw r8,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r8.u32);
	// add r5,r11,r5
	ctx.r5.u64 = r11.u64 + ctx.r5.u64;
	// addi r30,r30,8
	r30.s64 = r30.s64 + 8;
	// cmplwi cr6,r4,112
	cr6.compare<uint32_t>(ctx.r4.u32, 112, xer);
	// ble cr6,0x82bdf9dc
	if (!cr6.gt) goto loc_82BDF9DC;
	// addi r11,r5,-4
	r11.s64 = ctx.r5.s64 + -4;
	// li r10,24
	ctx.r10.s64 = 24;
loc_82BDFA34:
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// ori r9,r9,13824
	ctx.r9.u64 = ctx.r9.u64 | 13824;
	// ori r8,r8,129
	ctx.r8.u64 = ctx.r8.u64 | 129;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stwu r8,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r11.u32 = ea;
	// bne 0x82bdfa34
	if (!cr0.eq) goto loc_82BDFA34;
	// rlwinm r10,r5,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFF;
	// lwz r9,14816(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 14816);
	// subf r11,r5,r11
	r11.s64 = r11.s64 - ctx.r5.s64;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// addi r8,r11,4
	ctx.r8.s64 = r11.s64 + 4;
	// rlwinm r11,r10,0,19,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r10,r5,3
	ctx.r10.u64 = ctx.r5.u32 & 0x1FFFFFFF;
	// srawi r8,r8,2
	xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r8,r9,0,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// stw r11,14820(r31)
	PPC_STORE_U32(r31.u32 + 14820, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r8,14816(r31)
	PPC_STORE_U32(r31.u32 + 14816, ctx.r8.u32);
loc_82BDFA88:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BDFA90"))) PPC_WEAK_FUNC(sub_82BDFA90);
PPC_FUNC_IMPL(__imp__sub_82BDFA90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,13780(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13780);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// b 0x831cca60
	sub_831CCA60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BDFAA0"))) PPC_WEAK_FUNC(sub_82BDFAA0);
PPC_FUNC_IMPL(__imp__sub_82BDFAA0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r4,120
	ctx.r10.s64 = ctx.r4.s64 + 120;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r11
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r11
	// li r4,16
	ctx.r4.s64 = 16;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// ble cr6,0x82bdfb44
	if (!cr6.gt) goto loc_82BDFB44;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82BDFAE4:
	// li r31,256
	r31.s64 = 256;
	// dcbt r31,r11
	// lvrx128 v62,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r31,64
	r31.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// lvlx128 v61,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// lvlx128 v60,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v61.u8)));
	// lvlx128 v59,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r31,r11
	temp.u32 = r31.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)v60.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne 0x82bdfae4
	if (!cr0.eq) goto loc_82BDFAE4;
loc_82BDFB44:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bdfb6c
	if (cr6.eq) goto loc_82BDFB6C;
loc_82BDFB4C:
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lvrx128 v62,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82bdfb4c
	if (!cr0.eq) goto loc_82BDFB4C;
loc_82BDFB6C:
	// ld r11,0(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// or r11,r11,r7
	r11.u64 = r11.u64 | ctx.r7.u64;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFB80"))) PPC_WEAK_FUNC(sub_82BDFB80);
PPC_FUNC_IMPL(__imp__sub_82BDFB80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r31{};
	PPCVRegister v59{};
	PPCVRegister v60{};
	PPCVRegister v61{};
	PPCVRegister v62{};
	PPCVRegister v63{};
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// addi r10,r4,376
	ctx.r10.s64 = ctx.r4.s64 + 376;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// dcbt r0,r11
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r11
	// li r4,16
	ctx.r4.s64 = 16;
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// ble cr6,0x82bdfc24
	if (!cr6.gt) goto loc_82BDFC24;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
	// li r5,32
	ctx.r5.s64 = 32;
	// rlwinm r8,r8,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82BDFBC4:
	// li r31,256
	r31.s64 = 256;
	// dcbt r31,r11
	// lvrx128 v62,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// li r31,64
	r31.s64 = 64;
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r8,r8,-1
	xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	cr0.compare<int32_t>(ctx.r8.s32, 0, xer);
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// lvlx128 v61,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v62,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// vor128 v62,v61,v62
	simde_mm_store_si128((simde__m128i*)v62.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// lvlx128 v60,r5,r11
	temp.u32 = ctx.r5.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v61,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v61.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// vor128 v61,v60,v61
	simde_mm_store_si128((simde__m128i*)v61.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)v61.u8)));
	// lvlx128 v59,r6,r11
	temp.u32 = ctx.r6.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v59.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r31,r11
	temp.u32 = r31.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v60.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,64
	r11.s64 = r11.s64 + 64;
	// vor128 v60,v59,v60
	simde_mm_store_si128((simde__m128i*)v60.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v59.u8), simde_mm_load_si128((simde__m128i*)v60.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v62,r10,r4
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v62.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r5
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v61.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// stvx128 v60,r10,r6
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v60.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bne 0x82bdfbc4
	if (!cr0.eq) goto loc_82BDFBC4;
loc_82BDFC24:
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq cr6,0x82bdfc4c
	if (cr6.eq) goto loc_82BDFC4C;
loc_82BDFC2C:
	// lvlx128 v63,r0,r11
	temp.u32 = r11.u32;
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addic. r9,r9,-1
	xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// lvrx128 v62,r4,r11
	temp.u32 = ctx.r4.u32 + r11.u32;
	simde_mm_store_si128((simde__m128i*)v62.u8, temp.u32 & 0xF ? simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)(base + (temp.u32 & ~0xF))), simde_mm_load_si128((simde__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : simde_mm_setzero_si128());
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// vor128 v63,v63,v62
	simde_mm_store_si128((simde__m128i*)v63.u8, simde_mm_or_si128(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)v62.u8)));
	// stvx128 v63,r0,r10
	simde_mm_store_si128((simde__m128i*)(base + ((ctx.r10.u32) & ~0xF)), simde_mm_shuffle_epi8(simde_mm_load_si128((simde__m128i*)v63.u8), simde_mm_load_si128((simde__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bne 0x82bdfc2c
	if (!cr0.eq) goto loc_82BDFC2C;
loc_82BDFC4C:
	// ld r11,8(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// or r11,r7,r11
	r11.u64 = ctx.r7.u64 | r11.u64;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFC60"))) PPC_WEAK_FUNC(sub_82BDFC60);
PPC_FUNC_IMPL(__imp__sub_82BDFC60) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
loc_82BDFC60:
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2528
	r11.s64 = r11.s64 + 2528;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andc r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x82bdfc60
	if (!cr0.eq) goto loc_82BDFC60;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFCC0"))) PPC_WEAK_FUNC(sub_82BDFCC0);
PPC_FUNC_IMPL(__imp__sub_82BDFCC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
loc_82BDFCC0:
	// rlwinm r11,r4,27,5,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// addi r11,r11,2532
	r11.s64 = r11.s64 + 2532;
	// li r8,1
	ctx.r8.s64 = 1;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + ctx.r3.u32);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andc r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// stwx r10,r11,r3
	PPC_STORE_U32(r11.u32 + ctx.r3.u32, ctx.r10.u32);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bne 0x82bdfcc0
	if (!cr0.eq) goto loc_82BDFCC0;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFD20"))) PPC_WEAK_FUNC(sub_82BDFD20);
PPC_FUNC_IMPL(__imp__sub_82BDFD20) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// addi r11,r4,2536
	r11.s64 = ctx.r4.s64 + 2536;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_82BDFD2C:
	// lbz r10,11(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lbz r9,7(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82bdfd2c
	if (!cr0.eq) goto loc_82BDFD2C;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFD78"))) PPC_WEAK_FUNC(sub_82BDFD78);
PPC_FUNC_IMPL(__imp__sub_82BDFD78) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	// addi r11,r4,2552
	r11.s64 = ctx.r4.s64 + 2552;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
loc_82BDFD84:
	// lbz r10,11(r5)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// addic. r6,r6,-1
	xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// lbz r9,7(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,3(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82bdfd84
	if (!cr0.eq) goto loc_82BDFD84;
	// li r12,1
	r12.s64 = 1;
	// ld r11,32(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r11,r11,r12
	r11.u64 = r11.u64 | r12.u64;
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFDD0"))) PPC_WEAK_FUNC(sub_82BDFDD0);
PPC_FUNC_IMPL(__imp__sub_82BDFDD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister temp{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r9,r11,r3
	ctx.r9.u64 = r11.u64 + ctx.r3.u64;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, r11.u32);
	// lwz r11,8(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFE20"))) PPC_WEAK_FUNC(sub_82BDFE20);
PPC_FUNC_IMPL(__imp__sub_82BDFE20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,7
	ctx.r10.s64 = 7;
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// li r9,1
	ctx.r9.s64 = 1;
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, r11.u64);
	// lis r8,-1
	ctx.r8.s64 = -65536;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, r11.u64);
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, r11.u64);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BDFE58"))) PPC_WEAK_FUNC(sub_82BDFE58);
PPC_FUNC_IMPL(__imp__sub_82BDFE58) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lwz r31,12692(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12692);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82bdfedc
	if (cr6.eq) goto loc_82BDFEDC;
	// lwz r11,10908(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10908);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82bdfe8c
	if (cr6.eq) goto loc_82BDFE8C;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82bdfedc
	goto loc_82BDFEDC;
loc_82BDFE8C:
	// lwz r11,10912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10912);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82bdfedc
	if (cr0.eq) goto loc_82BDFEDC;
	// lwz r11,13528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13528);
	// lwz r3,13524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 13524);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82bdfeb4
	if (cr6.lt) goto loc_82BDFEB4;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf7510
	sub_82BF7510(ctx, base);
loc_82BDFEB4:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	r11.u64 = (__builtin_rotateleft32(r31.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13524(r30)
	PPC_STORE_U32(r30.u32 + 13524, ctx.r9.u32);
loc_82BDFEDC:
	// stw r29,12692(r30)
	PPC_STORE_U32(r30.u32 + 12692, r29.u32);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// oris r11,r11,2
	r11.u64 = r11.u64 | 131072;
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
	// beq cr6,0x82be000c
	if (cr6.eq) goto loc_82BE000C;
	// lwz r10,60(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 60);
	// addi r11,r29,40
	r11.s64 = r29.s64 + 40;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82be000c
	if (cr6.eq) goto loc_82BE000C;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 8);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,8(r30)
	PPC_STORE_U64(r30.u32 + 8, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x82bdff40
	if (cr6.eq) goto loc_82BDFF40;
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r10.u64);
loc_82BDFF40:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// addi r28,r30,1152
	r28.s64 = r30.s64 + 1152;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82be000c
	if (!cr6.lt) goto loc_82BE000C;
loc_82BDFF58:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82bdff74
	if (cr0.eq) goto loc_82BDFF74;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82bdff58
	if (cr6.lt) goto loc_82BDFF58;
loc_82BDFF74:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82be000c
	if (!cr6.lt) goto loc_82BE000C;
loc_82BDFF7C:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be0004
	if (cr0.eq) goto loc_82BE0004;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82bdff7c
	if (cr6.lt) goto loc_82BDFF7C;
	// b 0x82be0004
	goto loc_82BE0004;
loc_82BDFFB8:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82be000c
	if (cr0.eq) goto loc_82BE000C;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
loc_82BDFFD4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82bdffd4
	if (!cr0.eq) goto loc_82BDFFD4;
loc_82BE0004:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82bdffb8
	if (cr6.lt) goto loc_82BDFFB8;
loc_82BE000C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE0018"))) PPC_WEAK_FUNC(sub_82BE0018);
PPC_FUNC_IMPL(__imp__sub_82BE0018) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,872
	ctx.r5.s64 = 872;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r11,6
	r11.s64 = 6;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(r31.u32 + 32, r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// lis r9,-1
	ctx.r9.s64 = -65536;
	// stw r10,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r10.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r9.u32);
	// lwz r11,872(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 872);
	// rlwinm r11,r11,0,26,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x20;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// addic. r11,r11,1
	xer.ca = r11.u32 > 4294967294;
	r11.s64 = r11.s64 + 1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be0108
	if (cr0.eq) goto loc_82BE0108;
	// addi r25,r31,40
	r25.s64 = r31.s64 + 40;
	// addi r27,r31,896
	r27.s64 = r31.s64 + 896;
	// mr r24,r11
	r24.u64 = r11.u64;
loc_82BE007C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,872
	ctx.r10.s64 = r11.s64 + 872;
	// lwz r7,896(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 896);
	// lwz r8,872(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 872);
	// addi r7,r7,9
	ctx.r7.s64 = ctx.r7.s64 + 9;
	// lwz r11,900(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 900);
	// add r26,r9,r8
	r26.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// beq cr6,0x82be00f0
	if (cr6.eq) goto loc_82BE00F0;
	// addi r30,r25,28
	r30.s64 = r25.s64 + 28;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82BE00BC:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// beq cr6,0x82be00e0
	if (cr6.eq) goto loc_82BE00E0;
	// li r5,12
	ctx.r5.s64 = 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_82BE00E0:
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82be00bc
	if (!cr0.eq) goto loc_82BE00BC;
loc_82BE00F0:
	// li r11,-1
	r11.s64 = -1;
	// addic. r24,r24,-1
	xer.ca = r24.u32 > 0;
	r24.s64 = r24.s64 + -1;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// stw r11,0(r25)
	PPC_STORE_U32(r25.u32 + 0, r11.u32);
	// addi r27,r27,8
	r27.s64 = r27.s64 + 8;
	// addi r25,r25,416
	r25.s64 = r25.s64 + 416;
	// bne 0x82be007c
	if (!cr0.eq) goto loc_82BE007C;
loc_82BE0108:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BE0110"))) PPC_WEAK_FUNC(sub_82BE0110);
PPC_FUNC_IMPL(__imp__sub_82BE0110) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82be0138
	if (cr6.eq) goto loc_82BE0138;
	// ld r11,16(r30)
	r11.u64 = PPC_LOAD_U64(r30.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r30)
	PPC_STORE_U64(r30.u32 + 16, r11.u64);
loc_82BE0138:
	// lwz r31,12696(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 12696);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be01a8
	if (cr6.eq) goto loc_82BE01A8;
	// lwz r11,10908(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10908);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be0158
	if (cr6.eq) goto loc_82BE0158;
	// stw r11,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r11.u32);
	// b 0x82be01a8
	goto loc_82BE01A8;
loc_82BE0158:
	// lwz r11,10912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 10912);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// and. r11,r11,r10
	r11.u64 = r11.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be01a8
	if (cr0.eq) goto loc_82BE01A8;
	// lwz r11,13528(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 13528);
	// lwz r3,13524(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 13524);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// blt cr6,0x82be0180
	if (cr6.lt) goto loc_82BE0180;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bf7510
	sub_82BF7510(ctx, base);
loc_82BE0180:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// rlwimi r11,r31,30,2,31
	r11.u64 = (__builtin_rotateleft32(r31.u32, 30) & 0x3FFFFFFF) | (r11.u64 & 0xFFFFFFFFC0000000);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// rlwinm r11,r11,0,2,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, r11.u64);
	// stw r9,13524(r30)
	PPC_STORE_U32(r30.u32 + 13524, ctx.r9.u32);
loc_82BE01A8:
	// lbz r11,10942(r30)
	r11.u64 = PPC_LOAD_U8(r30.u32 + 10942);
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// stw r29,12696(r30)
	PPC_STORE_U32(r30.u32 + 12696, r29.u32);
	// clrlwi r11,r11,25
	r11.u64 = r11.u32 & 0x7F;
	// stb r11,10942(r30)
	PPC_STORE_U8(r30.u32 + 10942, r11.u8);
	// beq cr6,0x82be02d4
	if (cr6.eq) goto loc_82BE02D4;
	// addic. r11,r29,872
	xer.ca = r29.u32 > 4294966423;
	r11.s64 = r29.s64 + 872;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be02d4
	if (cr0.eq) goto loc_82BE02D4;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82be02d4
	if (cr6.eq) goto loc_82BE02D4;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(r11.u32 + 0);
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// std r10,0(r30)
	PPC_STORE_U64(r30.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(r11.u32 + 8);
	// cmpldi cr6,r10,0
	cr6.compare<uint64_t>(ctx.r10.u64, 0, xer);
	// beq cr6,0x82be0208
	if (cr6.eq) goto loc_82BE0208;
	// li r12,1
	r12.s64 = 1;
	// ld r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U64(r30.u32 + 32);
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// or r10,r10,r12
	ctx.r10.u64 = ctx.r10.u64 | r12.u64;
	// std r10,32(r30)
	PPC_STORE_U64(r30.u32 + 32, ctx.r10.u64);
loc_82BE0208:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// addi r28,r30,1152
	r28.s64 = r30.s64 + 1152;
	// add r29,r10,r31
	r29.u64 = ctx.r10.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82be02d4
	if (!cr6.lt) goto loc_82BE02D4;
loc_82BE0220:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be023c
	if (cr0.eq) goto loc_82BE023C;
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82be0220
	if (cr6.lt) goto loc_82BE0220;
loc_82BE023C:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// bge cr6,0x82be02d4
	if (!cr6.lt) goto loc_82BE02D4;
loc_82BE0244:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be02cc
	if (cr0.eq) goto loc_82BE02CC;
	// rlwinm r30,r11,2,0,29
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r10,16
	r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// add r3,r11,r28
	ctx.r3.u64 = r11.u64 + r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// add r31,r30,r31
	r31.u64 = r30.u64 + r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82be0244
	if (cr6.lt) goto loc_82BE0244;
	// b 0x82be02cc
	goto loc_82BE02CC;
loc_82BE0280:
	// lhz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82be02d4
	if (cr0.eq) goto loc_82BE02D4;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// add r11,r11,r28
	r11.u64 = r11.u64 + r28.u64;
loc_82BE029C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// clrlwi. r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be029c
	if (!cr0.eq) goto loc_82BE029C;
loc_82BE02CC:
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82be0280
	if (cr6.lt) goto loc_82BE0280;
loc_82BE02D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE02E0"))) PPC_WEAK_FUNC(sub_82BE02E0);
PPC_FUNC_IMPL(__imp__sub_82BE02E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// stw r4,11820(r3)
	PPC_STORE_U32(ctx.r3.u32 + 11820, ctx.r4.u32);
	// ld r11,16(r3)
	r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE02F8"))) PPC_WEAK_FUNC(sub_82BE02F8);
PPC_FUNC_IMPL(__imp__sub_82BE02F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,11820(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 11820);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be031c
	if (cr6.eq) goto loc_82BE031C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82BE031C:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0338"))) PPC_WEAK_FUNC(sub_82BE0338);
PPC_FUNC_IMPL(__imp__sub_82BE0338) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r31,r4
	r31.u64 = ctx.r4.u64;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// std r27,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r27.u64);
	// mr r30,r27
	r30.u64 = r27.u64;
	// std r27,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, r27.u64);
	// lhz r11,0(r29)
	r11.u64 = PPC_LOAD_U16(r29.u32 + 0);
	// mr r28,r27
	r28.u64 = r27.u64;
	// b 0x82be0390
	goto loc_82BE0390;
loc_82BE036C:
	// cmplw cr6,r28,r11
	cr6.compare<uint32_t>(r28.u32, r11.u32, xer);
	// bgt cr6,0x82be0378
	if (cr6.gt) goto loc_82BE0378;
	// mr r28,r11
	r28.u64 = r11.u64;
loc_82BE0378:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// li r8,255
	ctx.r8.s64 = 255;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stbx r8,r11,r9
	PPC_STORE_U8(r11.u32 + ctx.r9.u32, ctx.r8.u8);
	// lhz r11,0(r10)
	r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
loc_82BE0390:
	// cmplwi cr6,r11,255
	cr6.compare<uint32_t>(r11.u32, 255, xer);
	// bne cr6,0x82be036c
	if (!cr6.eq) goto loc_82BE036C;
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// addi r5,r11,56
	ctx.r5.s64 = r11.s64 + 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// ld r11,80(r1)
	r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r9,16
	ctx.r9.s64 = 1048576;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// ori r9,r9,5
	ctx.r9.u64 = ctx.r9.u64 | 5;
	// stw r28,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r28.u32);
	// lis r7,-1
	ctx.r7.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(r31.u32 + 0, ctx.r9.u32);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r7,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r7.u32);
	// stw r27,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r27.u32);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// std r10,40(r31)
	PPC_STORE_U64(r31.u32 + 40, ctx.r10.u64);
	// beq cr6,0x82be041c
	if (cr6.eq) goto loc_82BE041C;
	// mr r11,r29
	r11.u64 = r29.u64;
	// addi r10,r31,52
	ctx.r10.s64 = r31.s64 + 52;
loc_82BE03F4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bne 0x82be03f4
	if (!cr0.eq) goto loc_82BE03F4;
loc_82BE041C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BE0428"))) PPC_WEAK_FUNC(sub_82BE0428);
PPC_FUNC_IMPL(__imp__sub_82BE0428) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(r30.u32 + 0);
	// b 0x82be045c
	goto loc_82BE045C;
loc_82BE0450:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// lhz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
loc_82BE045C:
	// cmplwi cr6,r9,255
	cr6.compare<uint32_t>(ctx.r9.u32, 255, xer);
	// bne cr6,0x82be0450
	if (!cr6.eq) goto loc_82BE0450;
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// addi r3,r11,56
	ctx.r3.s64 = r11.s64 + 56;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82be0484
	if (!cr0.eq) goto loc_82BE0484;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be0494
	goto loc_82BE0494;
loc_82BE0484:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0338
	sub_82BE0338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BE0494:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE04B0"))) PPC_WEAK_FUNC(sub_82BE04B0);
PPC_FUNC_IMPL(__imp__sub_82BE04B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,24(r3)
	r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r29,0(r5)
	r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r31
	r11.u64 = r31.u64;
	// cmplw cr6,r31,r29
	cr6.compare<uint32_t>(r31.u32, r29.u32, xer);
	// blt cr6,0x82be04d8
	if (cr6.lt) goto loc_82BE04D8;
	// mr r11,r29
	r11.u64 = r29.u64;
loc_82BE04D8:
	// addi r10,r31,1
	ctx.r10.s64 = r31.s64 + 1;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82be0528
	if (cr6.eq) goto loc_82BE0528;
	// addi r4,r3,52
	ctx.r4.s64 = ctx.r3.s64 + 52;
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// cmplw cr6,r29,r31
	cr6.compare<uint32_t>(r29.u32, r31.u32, xer);
	// ble cr6,0x82be0528
	if (!cr6.gt) goto loc_82BE0528;
	// lis r10,-32238
	ctx.r10.s64 = -2112749568;
	// mulli r11,r31,12
	r11.s64 = r31.s64 * 12;
	// lwz r9,-11088(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -11088);
	// addi r10,r10,-11088
	ctx.r10.s64 = ctx.r10.s64 + -11088;
	// add r8,r11,r30
	ctx.r8.u64 = r11.u64 + r30.u64;
	// stwx r9,r11,r30
	PPC_STORE_U32(r11.u32 + r30.u32, ctx.r9.u32);
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
loc_82BE0528:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE0530"))) PPC_WEAK_FUNC(sub_82BE0530);
PPC_FUNC_IMPL(__imp__sub_82BE0530) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r3,52
	r11.s64 = ctx.r3.s64 + 52;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
loc_82BE0544:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(r11.u32 + 0);
	// rlwinm r6,r3,7,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0xFFFFFF80;
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(r11.u32 + 2);
	// rlwinm r8,r3,7,25,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 7) & 0x7F;
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
	// lbz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 8);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// lbz r7,9(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 9);
	// rotlwi r5,r5,8
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r4,10(r11)
	ctx.r4.u64 = PPC_LOAD_U8(r11.u32 + 10);
	// xor r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// or r8,r5,r7
	ctx.r8.u64 = ctx.r5.u64 | ctx.r7.u64;
	// rlwinm r7,r9,7,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// or r8,r8,r4
	ctx.r8.u64 = ctx.r8.u64 | ctx.r4.u64;
	// xor r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r7,r9,7,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0x7F;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// xor r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// bne 0x82be0544
	if (!cr0.eq) goto loc_82BE0544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE05B8"))) PPC_WEAK_FUNC(sub_82BE05B8);
PPC_FUNC_IMPL(__imp__sub_82BE05B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// bne cr6,0x82be05e4
	if (!cr6.eq) goto loc_82BE05E4;
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// bne cr6,0x82be05e4
	if (!cr6.eq) goto loc_82BE05E4;
	// li r30,64
	r30.s64 = 64;
	// li r6,64
	ctx.r6.s64 = 64;
loc_82BE05E4:
	// clrlwi. r11,r4,31
	r11.u64 = ctx.r4.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be05f4
	if (cr0.eq) goto loc_82BE05F4;
	// li r11,0
	r11.s64 = 0;
	// b 0x82be0604
	goto loc_82BE0604;
loc_82BE05F4:
	// lwz r11,10920(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10920);
	// rlwimi r6,r30,8,17,23
	ctx.r6.u64 = (__builtin_rotateleft32(r30.u32, 8) & 0x7F00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF80FF);
	// rlwimi r11,r6,4,21,27
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F0) | (r11.u64 & 0xFFFFFFFFFFFFF80F);
	// rlwimi r11,r6,4,13,19
	r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 4) & 0x7F000) | (r11.u64 & 0xFFFFFFFFFFF80FFF);
loc_82BE0604:
	// stw r11,10920(r31)
	PPC_STORE_U32(r31.u32 + 10920, r11.u32);
	// lwz r10,12716(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 12716);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r11,48(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// and r29,r10,r4
	r29.u64 = ctx.r10.u64 & ctx.r4.u64;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// ble cr6,0x82be062c
	if (!cr6.gt) goto loc_82BE062C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BE062C:
	// oris r9,r29,49153
	ctx.r9.u64 = r29.u64 | 3221291008;
	// rlwinm r10,r30,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r9,r9,16128
	ctx.r9.u64 = ctx.r9.u64 | 16128;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + r31.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// addi r8,r30,1724
	ctx.r8.s64 = r30.s64 + 1724;
	// lwz r7,13788(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13788);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// lwz r7,13784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 13784);
	// clrlwi r7,r7,8
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFFFF;
	// stwu r7,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,13796(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 13796);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwzx r10,r8,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + r31.u32);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
	// lwz r10,14820(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14820);
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// lwz r10,14816(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 14816);
	// clrlwi r10,r10,8
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFFF;
	// stwu r10,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r11.u32 = ea;
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// bl 0x82bdf7e8
	sub_82BDF7E8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE06A0"))) PPC_WEAK_FUNC(sub_82BE06A0);
PPC_FUNC_IMPL(__imp__sub_82BE06A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, r11.u32);
	// lwz r11,10920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10920);
	// rlwinm r11,r11,20,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7F;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,10920(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 10920);
	// rlwinm r11,r11,28,25,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x7F;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE06C8"))) PPC_WEAK_FUNC(sub_82BE06C8);
PPC_FUNC_IMPL(__imp__sub_82BE06C8) {
	PPC_FUNC_PROLOGUE();
	// b 0x831ccd60
	sub_831CCD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE06D0"))) PPC_WEAK_FUNC(sub_82BE06D0);
PPC_FUNC_IMPL(__imp__sub_82BE06D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// b 0x831ccd60
	sub_831CCD60(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE06E0"))) PPC_WEAK_FUNC(sub_82BE06E0);
PPC_FUNC_IMPL(__imp__sub_82BE06E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// clrlwi. r29,r4,24
	r29.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82be0710
	if (!cr0.eq) goto loc_82BE0710;
	// lis r11,-32066
	r11.s64 = -2101477376;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r6,r11,-6832
	ctx.r6.s64 = r11.s64 + -6832;
	// addi r3,r31,4
	ctx.r3.s64 = r31.s64 + 4;
	// bl 0x831b5ec0
	sub_831B5EC0(ctx, base);
loc_82BE0710:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// li r11,-1
	r11.s64 = -1;
	// li r3,1
	ctx.r3.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r11.u64);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82be07b4
	if (!cr6.gt) goto loc_82BE07B4;
	// addi r7,r31,4
	ctx.r7.s64 = r31.s64 + 4;
loc_82BE0744:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r9,12,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xF;
	// lbzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r10,255
	cr6.compare<uint32_t>(ctx.r10.u32, 255, xer);
	// bne cr6,0x82be0798
	if (!cr6.eq) goto loc_82BE0798;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82be076c
	if (cr6.eq) goto loc_82BE076C;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
	// b 0x82be0774
	goto loc_82BE0774;
loc_82BE076C:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82BE0774:
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// stbx r10,r11,r8
	PPC_STORE_U8(r11.u32 + ctx.r8.u32, ctx.r10.u8);
	// bge cr6,0x82be0788
	if (!cr6.lt) goto loc_82BE0788;
	// slw r11,r3,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (r11.u8 & 0x3F));
	// or r4,r11,r4
	ctx.r4.u64 = r11.u64 | ctx.r4.u64;
loc_82BE0788:
	// cmplwi cr6,r10,16
	cr6.compare<uint32_t>(ctx.r10.u32, 16, xer);
	// bge cr6,0x82be0798
	if (!cr6.lt) goto loc_82BE0798;
	// slw r11,r3,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// or r5,r11,r5
	ctx.r5.u64 = r11.u64 | ctx.r5.u64;
loc_82BE0798:
	// rlwimi r9,r10,16,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// cmplw cr6,r6,r11
	cr6.compare<uint32_t>(ctx.r6.u32, r11.u32, xer);
	// blt cr6,0x82be0744
	if (cr6.lt) goto loc_82BE0744;
loc_82BE07B4:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// bne cr6,0x82be07c8
	if (!cr6.eq) goto loc_82BE07C8;
	// cmplw cr6,r4,r5
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, xer);
	// beq cr6,0x82be07c8
	if (cr6.eq) goto loc_82BE07C8;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE07C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE07D0"))) PPC_WEAK_FUNC(sub_82BE07D0);
PPC_FUNC_IMPL(__imp__sub_82BE07D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r11,0
	r11.s64 = 0;
	// li r5,9120
	ctx.r5.s64 = 9120;
	// stw r4,9572(r31)
	PPC_STORE_U32(r31.u32 + 9572, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,9568(r31)
	PPC_STORE_U32(r31.u32 + 9568, r11.u32);
	// std r11,9120(r31)
	PPC_STORE_U64(r31.u32 + 9120, r11.u64);
	// std r11,9128(r31)
	PPC_STORE_U64(r31.u32 + 9128, r11.u64);
	// std r11,9136(r31)
	PPC_STORE_U64(r31.u32 + 9136, r11.u64);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,288
	ctx.r5.s64 = 288;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9208
	ctx.r3.s64 = r31.s64 + 9208;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9496
	ctx.r3.s64 = r31.s64 + 9496;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9528
	ctx.r3.s64 = r31.s64 + 9528;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,9144
	ctx.r3.s64 = r31.s64 + 9144;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0860"))) PPC_WEAK_FUNC(sub_82BE0860);
PPC_FUNC_IMPL(__imp__sub_82BE0860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// stw r11,9564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9564, r11.u32);
	// beq cr6,0x82be0890
	if (cr6.eq) goto loc_82BE0890;
	// addi r11,r3,9496
	r11.s64 = ctx.r3.s64 + 9496;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
loc_82BE0890:
	// addi r11,r3,9528
	r11.s64 = ctx.r3.s64 + 9528;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r4,27
	ctx.r8.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r7,r4,27,5,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r9,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// subfic r7,r7,31
	xer.ca = ctx.r7.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r7.s64;
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r8.u32);
	// sld r11,r9,r7
	r11.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r7.u8 & 0x7F));
	// ld r10,9128(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 9128);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,9128(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9128, r11.u64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE08D0"))) PPC_WEAK_FUNC(sub_82BE08D0);
PPC_FUNC_IMPL(__imp__sub_82BE08D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// ld r10,9120(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 9120);
	// rlwinm r9,r4,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r8,9572(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 9572);
	// stw r11,9564(r3)
	PPC_STORE_U32(ctx.r3.u32 + 9564, r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// subfic r11,r9,63
	xer.ca = ctx.r9.u32 <= 63;
	r11.s64 = 63 - ctx.r9.s64;
	// addi r9,r3,9144
	ctx.r9.s64 = ctx.r3.s64 + 9144;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// sld r11,r7,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (ctx.r7.u64 << (r11.u8 & 0x7F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// std r11,9120(r3)
	PPC_STORE_U64(ctx.r3.u32 + 9120, r11.u64);
	// lwz r11,19892(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19892);
	// rlwinm r11,r11,6,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 6) & 0x100;
	// add r10,r11,r4
	ctx.r10.u64 = r11.u64 + ctx.r4.u64;
	// lwz r6,0(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r10,48
	r11.s64 = ctx.r10.s64 + 48;
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// lwz r6,4(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// slw r10,r7,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// stw r6,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r6.u32);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// stw r7,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r7.u32);
	// lwz r7,12(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r7,12(r11)
	PPC_STORE_U32(r11.u32 + 12, ctx.r7.u32);
	// lwzx r11,r8,r9
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stwx r11,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0958"))) PPC_WEAK_FUNC(sub_82BE0958);
PPC_FUNC_IMPL(__imp__sub_82BE0958) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// rlwinm r10,r4,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// addi r10,r10,2286
	ctx.r10.s64 = ctx.r10.s64 + 2286;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,1
	ctx.r8.s64 = 1;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r3,r10,1
	ctx.r3.u64 = ctx.r10.u64 ^ 1;
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r10,r4,48
	ctx.r10.s64 = ctx.r4.s64 + 48;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + r11.u64;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
	// lwz r11,4(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, r11.u32);
	// lwz r11,8(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, r11.u32);
	// lwz r11,12(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE09C0"))) PPC_WEAK_FUNC(sub_82BE09C0);
PPC_FUNC_IMPL(__imp__sub_82BE09C0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r3,108
	r11.s64 = ctx.r3.s64 + 108;
	// lwz r9,108(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r3,r9
	ctx.r3.s64 = ctx.r9.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmplw cr6,r3,r10
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0a40
	if (!cr6.lt) goto loc_82BE0A40;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r9,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
loc_82BE09F0:
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r8,r11,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82be0a34
	if (cr0.eq) goto loc_82BE0A34;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be0a34
	if (!cr0.eq) goto loc_82BE0A34;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82be0a34
	if (cr6.gt) goto loc_82BE0A34;
	// rlwinm r11,r11,20,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82BE0A34:
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// cmplw cr6,r3,r9
	cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, xer);
	// blt cr6,0x82be09f0
	if (cr6.lt) goto loc_82BE09F0;
loc_82BE0A40:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0A48"))) PPC_WEAK_FUNC(sub_82BE0A48);
PPC_FUNC_IMPL(__imp__sub_82BE0A48) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// bl 0x82be09c0
	sub_82BE09C0(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82be0b30
	if (cr0.eq) goto loc_82BE0B30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// beq cr6,0x82be0aa0
	if (cr6.eq) goto loc_82BE0AA0;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82be0ab8
	goto loc_82BE0AB8;
loc_82BE0AA0:
	// lis r9,-4096
	ctx.r9.s64 = -268435456;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// ori r9,r9,65535
	ctx.r9.u64 = ctx.r9.u64 | 65535;
	// rlwimi r9,r10,16,4,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFF0000) | (ctx.r9.u64 & 0xFFFFFFFFF000FFFF);
	// and r11,r9,r11
	r11.u64 = ctx.r9.u64 & r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, r11.u32);
loc_82BE0AB8:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be0b30
	if (cr0.eq) goto loc_82BE0B30;
	// cmpwi cr6,r29,0
	cr6.compare<int32_t>(r29.s32, 0, xer);
	// beq cr6,0x82be0b30
	if (cr6.eq) goto loc_82BE0B30;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82be0b30
	if (!cr6.eq) goto loc_82BE0B30;
	// li r11,0
	r11.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stb r11,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r11.u8);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BE0B30:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE0B38"))) PPC_WEAK_FUNC(sub_82BE0B38);
PPC_FUNC_IMPL(__imp__sub_82BE0B38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,80(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82be0b4c
	if (!cr6.lt) goto loc_82BE0B4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BE0B4C:
	// cmplwi cr6,r5,0
	cr6.compare<uint32_t>(ctx.r5.u32, 0, xer);
	// beq cr6,0x82be0c08
	if (cr6.eq) goto loc_82BE0C08;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r11,r3,108
	r11.s64 = ctx.r3.s64 + 108;
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82be0c08
	if (!cr6.lt) goto loc_82BE0C08;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r8,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r11,r9
	ctx.r7.u64 = r11.u64 + ctx.r9.u64;
loc_82BE0B88:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r9,r9,24702
	ctx.r9.u64 = ctx.r9.u64 & 24702;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82be0bc8
	if (cr0.eq) goto loc_82BE0BC8;
	// rlwinm. r11,r11,0,20,20
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be0bc8
	if (!cr0.eq) goto loc_82BE0BC8;
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// cmplw cr6,r9,r4
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, xer);
	// bgt cr6,0x82be0bc8
	if (cr6.gt) goto loc_82BE0BC8;
	// rlwinm r11,r11,20,29,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// blt cr6,0x82be0bd8
	if (cr6.lt) goto loc_82BE0BD8;
loc_82BE0BC8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r7
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, xer);
	// blt cr6,0x82be0b88
	if (cr6.lt) goto loc_82BE0B88;
	// b 0x82be0c08
	goto loc_82BE0C08;
loc_82BE0BD8:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r10,r11,20
	ctx.r10.u64 = r11.u32 & 0xFFF;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, r11.u32);
loc_82BE0C08:
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// mulli r10,r4,12
	ctx.r10.s64 = ctx.r4.s64 * 12;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0C18"))) PPC_WEAK_FUNC(sub_82BE0C18);
PPC_FUNC_IMPL(__imp__sub_82BE0C18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,112(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be0c78
	if (cr6.eq) goto loc_82BE0C78;
	// lwz r10,80(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82be0c38
	if (!cr6.lt) goto loc_82BE0C38;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82be0c48
	goto loc_82BE0C48;
loc_82BE0C38:
	// lwz r10,108(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
loc_82BE0C48:
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm. r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be0c78
	if (cr0.eq) goto loc_82BE0C78;
	// cmplwi cr6,r11,6
	cr6.compare<uint32_t>(r11.u32, 6, xer);
	// ble cr6,0x82be0c6c
	if (!cr6.gt) goto loc_82BE0C6C;
	// cmplwi cr6,r11,12
	cr6.compare<uint32_t>(r11.u32, 12, xer);
	// ble cr6,0x82be0c78
	if (!cr6.gt) goto loc_82BE0C78;
	// cmplwi cr6,r11,14
	cr6.compare<uint32_t>(r11.u32, 14, xer);
	// bgt cr6,0x82be0c78
	if (cr6.gt) goto loc_82BE0C78;
loc_82BE0C6C:
	// lwz r11,0(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_82BE0C78:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0C80"))) PPC_WEAK_FUNC(sub_82BE0C80);
PPC_FUNC_IMPL(__imp__sub_82BE0C80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, r31.u64);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be0d44
	if (cr0.eq) goto loc_82BE0D44;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r11,0(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// cmplwi cr6,r9,11
	cr6.compare<uint32_t>(ctx.r9.u32, 11, xer);
	// bgt cr6,0x82be0d3c
	if (cr6.gt) goto loc_82BE0D3C;
	// lis r12,-32243
	r12.s64 = -2113077248;
	// addi r12,r12,-10912
	r12.s64 = r12.s64 + -10912;
	// lbzx r0,r12,r9
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r9.u32);
	// lis r12,-32066
	r12.s64 = -2101477376;
	// addi r12,r12,3276
	r12.s64 = r12.s64 + 3276;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// nop 
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82BE0CCC;
	case 1:
		goto loc_82BE0CCC;
	case 2:
		goto loc_82BE0D3C;
	case 3:
		goto loc_82BE0D3C;
	case 4:
		goto loc_82BE0CF0;
	case 5:
		goto loc_82BE0CF0;
	case 6:
		goto loc_82BE0D10;
	case 7:
		goto loc_82BE0D3C;
	case 8:
		goto loc_82BE0D10;
	case 9:
		goto loc_82BE0D28;
	case 10:
		goto loc_82BE0CCC;
	case 11:
		goto loc_82BE0CCC;
	default:
		__builtin_unreachable();
	}
loc_82BE0CCC:
	// rlwinm r10,r10,24,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x3;
	// li r9,1
	ctx.r9.s64 = 1;
	// subfic r10,r10,3
	xer.ca = ctx.r10.u32 <= 3;
	ctx.r10.s64 = 3 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,11
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFF0FFFF) | (ctx.r10.u64 & 0xF0000);
loc_82BE0CE8:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82be0d3c
	goto loc_82BE0D3C;
loc_82BE0CF0:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r10,r10,15,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 15) & 0xF;
	// subfic r10,r10,15
	xer.ca = ctx.r10.u32 <= 15;
	ctx.r10.s64 = 15 - ctx.r10.s64;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// b 0x82be0ce8
	goto loc_82BE0CE8;
loc_82BE0D10:
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm. r7,r9,0,18,18
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2000;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82be0d3c
	if (!cr0.eq) goto loc_82BE0D3C;
	// rlwinm. r9,r9,0,17,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4000;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82be0d3c
	if (!cr0.eq) goto loc_82BE0D3C;
	// b 0x82be0ccc
	goto loc_82BE0CCC;
loc_82BE0D28:
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1536
	cr6.compare<uint32_t>(ctx.r10.u32, 1536, xer);
	// bne cr6,0x82be0d3c
	if (!cr6.eq) goto loc_82BE0D3C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r10.u32);
loc_82BE0D3C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, r11.u32);
	// b 0x82be0ee8
	goto loc_82BE0EE8;
loc_82BE0D44:
	// lwz r11,12(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82be0d84
	if (!cr6.eq) goto loc_82BE0D84;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r3,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r3.u32);
	// cntlzw r10,r11
	ctx.r10.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// rlwinm r11,r10,27,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, r11.u32);
	// beq 0x82be0d7c
	if (cr0.eq) goto loc_82BE0D7C;
	// clrlwi. r11,r5,24
	r11.u64 = ctx.r5.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
	// beq 0x82be0d80
	if (cr0.eq) goto loc_82BE0D80;
loc_82BE0D7C:
	// li r11,0
	r11.s64 = 0;
loc_82BE0D80:
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, r11.u32);
loc_82BE0D84:
	// lwz r11,4(r8)
	r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be0db8
	if (cr0.eq) goto loc_82BE0DB8;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// rlwinm r9,r10,20,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x3F;
	// beq cr6,0x82be0dac
	if (cr6.eq) goto loc_82BE0DAC;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bge cr6,0x82be0db0
	if (!cr6.lt) goto loc_82BE0DB0;
loc_82BE0DAC:
	// mr r11,r9
	r11.u64 = ctx.r9.u64;
loc_82BE0DB0:
	// rlwinm r10,r10,27,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x3F;
	// b 0x82be0ed0
	goto loc_82BE0ED0;
loc_82BE0DB8:
	// lwz r9,8(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// lwz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,-2872
	ctx.r10.s64 = ctx.r10.s64 + -2872;
	// rlwinm r6,r9,8,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0x1F;
	// addi r4,r10,32
	ctx.r4.s64 = ctx.r10.s64 + 32;
	// rlwinm r31,r5,6,26,31
	r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0x3F;
	// lbzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// lbzx r4,r31,r4
	ctx.r4.u64 = PPC_LOAD_U8(r31.u32 + ctx.r4.u32);
	// cmplwi cr6,r6,1
	cr6.compare<uint32_t>(ctx.r6.u32, 1, xer);
	// blt cr6,0x82be0e08
	if (cr6.lt) goto loc_82BE0E08;
	// rlwinm. r10,r9,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be0e08
	if (cr0.eq) goto loc_82BE0E08;
	// lbz r10,9(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 9);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// beq cr6,0x82be0e04
	if (cr6.eq) goto loc_82BE0E04;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0e08
	if (!cr6.lt) goto loc_82BE0E08;
loc_82BE0E04:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE0E08:
	// cmplwi cr6,r6,2
	cr6.compare<uint32_t>(ctx.r6.u32, 2, xer);
	// blt cr6,0x82be0e34
	if (cr6.lt) goto loc_82BE0E34;
	// rlwinm. r10,r9,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be0e34
	if (cr0.eq) goto loc_82BE0E34;
	// lbz r10,10(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 10);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// beq cr6,0x82be0e30
	if (cr6.eq) goto loc_82BE0E30;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0e34
	if (!cr6.lt) goto loc_82BE0E34;
loc_82BE0E30:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE0E34:
	// cmplwi cr6,r6,3
	cr6.compare<uint32_t>(ctx.r6.u32, 3, xer);
	// bge cr6,0x82be0e44
	if (!cr6.lt) goto loc_82BE0E44;
	// cmplwi cr6,r4,1
	cr6.compare<uint32_t>(ctx.r4.u32, 1, xer);
	// bne cr6,0x82be0e64
	if (!cr6.eq) goto loc_82BE0E64;
loc_82BE0E44:
	// rlwinm. r10,r9,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be0e64
	if (cr0.eq) goto loc_82BE0E64;
	// clrlwi r10,r9,26
	ctx.r10.u64 = ctx.r9.u32 & 0x3F;
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82be0e60
	if (cr6.eq) goto loc_82BE0E60;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0e64
	if (!cr6.lt) goto loc_82BE0E64;
loc_82BE0E60:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE0E64:
	// cmplwi cr6,r4,2
	cr6.compare<uint32_t>(ctx.r4.u32, 2, xer);
	// bne cr6,0x82be0e94
	if (!cr6.eq) goto loc_82BE0E94;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// rlwimi r10,r9,30,4,4
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 30) & 0x8000000) | (ctx.r10.u64 & 0xFFFFFFFFF7FFFFFF);
	// rlwimi r7,r10,6,30,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r10.u32, 6) & 0x3) | (ctx.r7.u64 & 0xFFFFFFFFFFFFFFFC);
	// clrlwi r10,r7,26
	ctx.r10.u64 = ctx.r7.u32 & 0x3F;
	// beq cr6,0x82be0e90
	if (cr6.eq) goto loc_82BE0E90;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0e94
	if (!cr6.lt) goto loc_82BE0E94;
loc_82BE0E90:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE0E94:
	// rlwinm. r10,r5,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// clrlwi r10,r5,26
	ctx.r10.u64 = ctx.r5.u32 & 0x3F;
	// beq 0x82be0eb8
	if (cr0.eq) goto loc_82BE0EB8;
	// cmplwi cr6,r10,32
	cr6.compare<uint32_t>(ctx.r10.u32, 32, xer);
	// blt cr6,0x82be0ee4
	if (cr6.lt) goto loc_82BE0EE4;
	// cmplwi cr6,r10,37
	cr6.compare<uint32_t>(ctx.r10.u32, 37, xer);
	// bgt cr6,0x82be0ee4
	if (cr6.gt) goto loc_82BE0EE4;
	// stw r3,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r3.u32);
	// b 0x82be0ee4
	goto loc_82BE0EE4;
loc_82BE0EB8:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82be0ec8
	if (cr6.eq) goto loc_82BE0EC8;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0ecc
	if (!cr6.lt) goto loc_82BE0ECC;
loc_82BE0EC8:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE0ECC:
	// rlwinm r10,r5,24,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 24) & 0x3F;
loc_82BE0ED0:
	// cmpwi cr6,r11,-1
	cr6.compare<int32_t>(r11.s32, -1, xer);
	// beq cr6,0x82be0ee0
	if (cr6.eq) goto loc_82BE0EE0;
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// bge cr6,0x82be0ee4
	if (!cr6.lt) goto loc_82BE0EE4;
loc_82BE0EE0:
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE0EE4:
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
loc_82BE0EE8:
	// ld r31,-8(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE0EF0"))) PPC_WEAK_FUNC(sub_82BE0EF0);
PPC_FUNC_IMPL(__imp__sub_82BE0EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	r24.u64 = ctx.r3.u64;
	// mr r25,r5
	r25.u64 = ctx.r5.u64;
	// mr r23,r6
	r23.u64 = ctx.r6.u64;
	// mr r22,r7
	r22.u64 = ctx.r7.u64;
	// clrlwi. r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lwz r27,256(r24)
	r27.u64 = PPC_LOAD_U32(r24.u32 + 256);
	// li r26,12
	r26.s64 = 12;
	// lwz r28,260(r24)
	r28.u64 = PPC_LOAD_U32(r24.u32 + 260);
	// beq 0x82be0fe0
	if (cr0.eq) goto loc_82BE0FE0;
	// subf r11,r27,r28
	r11.s64 = r28.s64 - r27.s64;
	// divw. r29,r11,r26
	r29.s32 = r11.s32 / r26.s32;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// beq 0x82be0fe0
	if (cr0.eq) goto loc_82BE0FE0;
	// addi r31,r27,8
	r31.s64 = r27.s64 + 8;
	// li r30,0
	r30.s64 = 0;
loc_82BE0F34:
	// lwz r11,-8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + -8);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r30
	ctx.r6.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lhz r11,-2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// lhz r11,-4(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + -4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// lhz r11,0(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// mr r8,r22
	ctx.r8.u64 = r22.u64;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r30,1
	ctx.r6.s64 = r30.s64 + 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// mtctr r23
	ctr.u64 = r23.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,2
	r30.s64 = r30.s64 + 2;
	// stw r11,-8(r31)
	PPC_STORE_U32(r31.u32 + -8, r11.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,100(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwimi r11,r10,16,0,15
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r31,r31,12
	r31.s64 = r31.s64 + 12;
	// bne 0x82be0f34
	if (!cr0.eq) goto loc_82BE0F34;
loc_82BE0FE0:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be10c8
	if (cr0.eq) goto loc_82BE10C8;
	// subf r10,r27,r28
	ctx.r10.s64 = r28.s64 - r27.s64;
	// mr r11,r28
	r11.u64 = r28.u64;
	// divw r26,r10,r26
	r26.s32 = ctx.r10.s32 / r26.s32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BE0FF8:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r25,r11
	r25.u64 = r11.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82be10c8
	if (cr6.eq) goto loc_82BE10C8;
	// addi r30,r27,8
	r30.s64 = r27.s64 + 8;
	// mr r28,r26
	r28.u64 = r26.u64;
loc_82BE1014:
	// lwz r11,-4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + -4);
	// addi r31,r1,112
	r31.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r29,2
	r29.s64 = 2;
	// lwz r9,-8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + -8);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r10,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	r11.u64 = r11.u32 & 0xFFFF;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_82BE104C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,20,28,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be1088
	if (cr0.eq) goto loc_82BE1088;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r27
	ctx.r7.u64 = r27.u64;
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
	// mr r5,r23
	ctx.r5.u64 = r23.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r24
	ctx.r3.u64 = r24.u64;
	// bl 0x82bdecf8
	sub_82BDECF8(ctx, base);
loc_82BE1088:
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r31,r31,8
	r31.s64 = r31.s64 + 8;
	// bne 0x82be104c
	if (!cr0.eq) goto loc_82BE104C;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// bne 0x82be1014
	if (!cr0.eq) goto loc_82BE1014;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r25,r11
	cr6.compare<uint32_t>(r25.u32, r11.u32, xer);
	// bne cr6,0x82be10c0
	if (!cr6.eq) goto loc_82BE10C0;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82be10c8
	if (cr6.eq) goto loc_82BE10C8;
	// addi r11,r11,12
	r11.s64 = r11.s64 + 12;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BE10C0:
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne cr6,0x82be0ff8
	if (!cr6.eq) goto loc_82BE0FF8;
loc_82BE10C8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BE10D0"))) PPC_WEAK_FUNC(sub_82BE10D0);
PPC_FUNC_IMPL(__imp__sub_82BE10D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r5)
	r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// cmplwi cr6,r9,7
	cr6.compare<uint32_t>(ctx.r9.u32, 7, xer);
	// beq cr6,0x82be1110
	if (cr6.eq) goto loc_82BE1110;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r8.u32);
loc_82BE1110:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r9,0,26,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x38;
	// cmplwi cr6,r9,56
	cr6.compare<uint32_t>(ctx.r9.u32, 56, xer);
	// beq cr6,0x82be113c
	if (cr6.eq) goto loc_82BE113C;
	// addi r9,r11,1
	ctx.r9.s64 = r11.s64 + 1;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82BE113C:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r9,0,23,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x1C0;
	// cmplwi cr6,r9,448
	cr6.compare<uint32_t>(ctx.r9.u32, 448, xer);
	// beq cr6,0x82be1168
	if (cr6.eq) goto loc_82BE1168;
	// addi r9,r11,2
	ctx.r9.s64 = r11.s64 + 2;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r10,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82BE1168:
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm r9,r9,0,20,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xE00;
	// cmplwi cr6,r9,3584
	cr6.compare<uint32_t>(ctx.r9.u32, 3584, xer);
	// beqlr cr6
	if (cr6.eq) return;
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE1198"))) PPC_WEAK_FUNC(sub_82BE1198);
PPC_FUNC_IMPL(__imp__sub_82BE1198) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// clrlwi r11,r9,27
	r11.u64 = ctx.r9.u32 & 0x1F;
	// cmplwi cr6,r11,18
	cr6.compare<uint32_t>(r11.u32, 18, xer);
	// bgt cr6,0x82be12d8
	if (cr6.gt) goto loc_82BE12D8;
	// beq cr6,0x82be12a0
	if (cr6.eq) goto loc_82BE12A0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be1260
	if (cr6.eq) goto loc_82BE1260;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// beq cr6,0x82be11cc
	if (cr6.eq) goto loc_82BE11CC;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r11,17
	cr6.compare<uint32_t>(r11.u32, 17, xer);
	// bgtlr cr6
	if (cr6.gt) return;
loc_82BE11CC:
	// rlwinm r9,r9,6,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	r11.s64 = 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,16384
	cr6.compare<uint32_t>(ctx.r9.u32, 16384, xer);
	// blt cr6,0x82be1228
	if (cr6.lt) goto loc_82BE1228;
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
loc_82BE1228:
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// rlwinm r9,r9,0,16,17
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC000;
	// cmplwi cr6,r9,32768
	cr6.compare<uint32_t>(ctx.r9.u32, 32768, xer);
	// bltlr cr6
	if (cr6.lt) return;
loc_82BE1238:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,2,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82BE1244:
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r11,r11,r10
	r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
loc_82BE1260:
	// cmpwi cr6,r5,0
	cr6.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq cr6,0x82be1274
	if (cr6.eq) goto loc_82BE1274;
	// lwz r11,4(r6)
	r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bnelr 
	if (!cr0.eq) return;
loc_82BE1274:
	// rlwinm r10,r9,2,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0x3;
	// rlwinm r11,r4,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
loc_82BE1280:
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1FFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwx r11,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, r11.u32);
	// blr 
	return;
loc_82BE12A0:
	// rlwinm r10,r9,6,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	r11.s64 = 1;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r7,r9,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stwx r10,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r10,r10,4,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82be1244
	goto loc_82BE1244;
loc_82BE12D8:
	// cmplwi cr6,r11,19
	cr6.compare<uint32_t>(r11.u32, 19, xer);
	// beq cr6,0x82be11cc
	if (cr6.eq) goto loc_82BE11CC;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// beq cr6,0x82be1344
	if (cr6.eq) goto loc_82BE1344;
	// blelr cr6
	if (!cr6.gt) return;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// bgtlr cr6
	if (cr6.gt) return;
	// rlwinm r9,r9,6,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	r11.s64 = 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r9,r9,4,30,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x3;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// slw r9,r11,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r9.u32);
	// b 0x82be1238
	goto loc_82BE1238;
loc_82BE1344:
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r9,6,30,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0x3;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// b 0x82be1280
	goto loc_82BE1280;
}

__attribute__((alias("__imp__sub_82BE1358"))) PPC_WEAK_FUNC(sub_82BE1358);
PPC_FUNC_IMPL(__imp__sub_82BE1358) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,96(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// clrlwi r9,r10,20
	ctx.r9.u64 = ctx.r10.u32 & 0xFFF;
	// mulli r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 * 12;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// lwz r11,0(r9)
	r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r11,25,7,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ r11.u64;
	// rlwinm. r7,r7,0,21,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x7E0;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82be13c0
	if (!cr0.eq) goto loc_82BE13C0;
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r11,r11,4,28,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xC;
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// clrlwi r6,r9,29
	ctx.r6.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r5,r9,29,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x7;
	// rlwinm r3,r9,26,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x7;
	// stw r6,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r6.u32);
	// rlwinm r9,r9,23,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 23) & 0x7;
	// stw r5,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r5.u32);
	// stw r3,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r3.u32);
	// stw r9,-4(r1)
	PPC_STORE_U32(ctx.r1.u32 + -4, ctx.r9.u32);
	// lwzx r11,r11,r7
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,7
	cr6.compare<int32_t>(r11.s32, 7, xer);
	// beq cr6,0x82be13c0
	if (cr6.eq) goto loc_82BE13C0;
	// li r8,3
	ctx.r8.s64 = 3;
loc_82BE13C0:
	// rlwimi r10,r8,20,10,11
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 20) & 0x300000) | (ctx.r10.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE13D0"))) PPC_WEAK_FUNC(sub_82BE13D0);
PPC_FUNC_IMPL(__imp__sub_82BE13D0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// li r31,0
	r31.s64 = 0;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r30,r6
	r30.u64 = ctx.r6.u64;
	// stw r31,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r31.u32);
loc_82BE13F4:
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// add r4,r31,r27
	ctx.r4.u64 = r31.u64 + r27.u64;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x82be0958
	sub_82BE0958(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82be1420
	if (cr0.eq) goto loc_82BE1420;
	// li r11,1
	r11.s64 = 1;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// slw r11,r11,r31
	r11.u64 = r31.u8 & 0x20 ? 0 : (r11.u32 << (r31.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(r29.u32 + 0, r11.u32);
loc_82BE1420:
	// addi r31,r31,1
	r31.s64 = r31.s64 + 1;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// cmplwi cr6,r31,4
	cr6.compare<uint32_t>(r31.u32, 4, xer);
	// blt cr6,0x82be13f4
	if (cr6.lt) goto loc_82BE13F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BE1438"))) PPC_WEAK_FUNC(sub_82BE1438);
PPC_FUNC_IMPL(__imp__sub_82BE1438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// stw r10,356(r11)
	PPC_STORE_U32(r11.u32 + 356, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,360(r11)
	PPC_STORE_U32(r11.u32 + 360, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,364(r11)
	PPC_STORE_U32(r11.u32 + 364, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE1460"))) PPC_WEAK_FUNC(sub_82BE1460);
PPC_FUNC_IMPL(__imp__sub_82BE1460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,368
	ctx.r3.s64 = r11.s64 + 368;
	// b 0x82be0860
	sub_82BE0860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE1478"))) PPC_WEAK_FUNC(sub_82BE1478);
PPC_FUNC_IMPL(__imp__sub_82BE1478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,368
	ctx.r3.s64 = r11.s64 + 368;
	// b 0x82be08d0
	sub_82BE08D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE1490"))) PPC_WEAK_FUNC(sub_82BE1490);
PPC_FUNC_IMPL(__imp__sub_82BE1490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be0a48
	sub_82BE0A48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE14A8"))) PPC_WEAK_FUNC(sub_82BE14A8);
PPC_FUNC_IMPL(__imp__sub_82BE14A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r3,116(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 116);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE14C0"))) PPC_WEAK_FUNC(sub_82BE14C0);
PPC_FUNC_IMPL(__imp__sub_82BE14C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r11,128(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 128);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE14D8"))) PPC_WEAK_FUNC(sub_82BE14D8);
PPC_FUNC_IMPL(__imp__sub_82BE14D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 96);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bge cr6,0x82be14f8
	if (!cr6.lt) goto loc_82BE14F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82BE14F8:
	// lwz r11,124(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 124);
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE1508"))) PPC_WEAK_FUNC(sub_82BE1508);
PPC_FUNC_IMPL(__imp__sub_82BE1508) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be0b38
	sub_82BE0B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE1520"))) PPC_WEAK_FUNC(sub_82BE1520);
PPC_FUNC_IMPL(__imp__sub_82BE1520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be0c18
	sub_82BE0C18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE1538"))) PPC_WEAK_FUNC(sub_82BE1538);
PPC_FUNC_IMPL(__imp__sub_82BE1538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r14{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af0
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	r23.u64 = ctx.r3.u64;
	// li r20,0
	r20.s64 = 0;
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// mr r21,r5
	r21.u64 = ctx.r5.u64;
	// clrlwi r14,r6,31
	r14.u64 = ctx.r6.u32 & 0x1;
	// lwz r11,0(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// lwz r17,4(r23)
	r17.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r24,r20
	r24.u64 = r20.u64;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// addi r16,r23,20
	r16.s64 = r23.s64 + 20;
	// clrlwi r15,r11,31
	r15.u64 = r11.u32 & 0x1;
loc_82BE1574:
	// lwz r11,0(r16)
	r11.u64 = PPC_LOAD_U32(r16.u32 + 0);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be17b0
	if (cr6.eq) goto loc_82BE17B0;
	// add r11,r11,r23
	r11.u64 = r11.u64 + r23.u64;
	// mr r18,r20
	r18.u64 = r20.u64;
	// addi r31,r11,20
	r31.s64 = r11.s64 + 20;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// add r19,r11,r31
	r19.u64 = r11.u64 + r31.u64;
	// b 0x82be17a8
	goto loc_82BE17A8;
loc_82BE159C:
	// lhz r11,2(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 2);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82be15c0
	if (!cr0.eq) goto loc_82BE15C0;
	// addi r18,r18,1
	r18.s64 = r18.s64 + 1;
	// cmplwi cr6,r18,3
	cr6.compare<uint32_t>(r18.u32, 3, xer);
	// bge cr6,0x82be17b0
	if (!cr6.lt) goto loc_82BE17B0;
	// b 0x82be17a8
	goto loc_82BE17A8;
loc_82BE15C0:
	// cmplwi cr6,r18,0
	cr6.compare<uint32_t>(r18.u32, 0, xer);
	// bne cr6,0x82be167c
	if (!cr6.eq) goto loc_82BE167C;
	// clrlwi. r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82be17c4
	if (!cr0.eq) goto loc_82BE17C4;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + r17.u64;
	// add r30,r9,r23
	r30.u64 = ctx.r9.u64 + r23.u64;
loc_82BE15E0:
	// clrlwi r28,r10,16
	r28.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r28,512
	cr6.compare<uint32_t>(r28.u32, 512, xer);
	// bge cr6,0x82be17c4
	if (!cr6.lt) goto loc_82BE17C4;
	// mr r6,r28
	ctx.r6.u64 = r28.u64;
	// cmpwi cr6,r15,0
	cr6.compare<int32_t>(r15.s32, 0, xer);
	// beq cr6,0x82be15fc
	if (cr6.eq) goto loc_82BE15FC;
	// addi r6,r6,-256
	ctx.r6.s64 = ctx.r6.s64 + -256;
loc_82BE15FC:
	// cmpwi cr6,r14,0
	cr6.compare<int32_t>(r14.s32, 0, xer);
	// beq cr6,0x82be1614
	if (cr6.eq) goto loc_82BE1614;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// std r20,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r20.u64);
	// std r20,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, r20.u64);
	// b 0x82be1638
	goto loc_82BE1638;
loc_82BE1614:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 12);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// stw r5,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r5.u32);
loc_82BE1638:
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r30,r30,16
	r30.s64 = r30.s64 + 16;
	// addi r11,r11,-4
	r11.s64 = r11.s64 + -4;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r21
	ctr.u64 = r21.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82be17cc
	if (cr0.lt) goto loc_82BE17CC;
	// addi r10,r28,1
	ctx.r10.s64 = r28.s64 + 1;
	// clrlwi. r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x82be15e0
	if (!cr0.eq) goto loc_82BE15E0;
	// b 0x82be17a8
	goto loc_82BE17A8;
loc_82BE167C:
	// cmplwi cr6,r18,1
	cr6.compare<uint32_t>(r18.u32, 1, xer);
	// bne cr6,0x82be1708
	if (!cr6.eq) goto loc_82BE1708;
loc_82BE1684:
	// clrlwi r30,r10,16
	r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r30,8992
	cr6.compare<uint32_t>(r30.u32, 8992, xer);
	// blt cr6,0x82be17c4
	if (cr6.lt) goto loc_82BE17C4;
	// cmplwi cr6,r30,9120
	cr6.compare<uint32_t>(r30.u32, 9120, xer);
	// bge cr6,0x82be17c4
	if (!cr6.lt) goto loc_82BE17C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// addi r9,r30,-8992
	ctx.r9.s64 = r30.s64 + -8992;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r20.u32);
	// rlwinm r8,r10,16,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFF;
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// rlwinm r10,r10,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// extsb r8,r8
	ctx.r8.s64 = ctx.r8.s8;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// clrlwi r29,r11,16
	r29.u64 = r11.u32 & 0xFFFF;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rlwinm r6,r9,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r21
	ctr.u64 = r21.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82be17cc
	if (cr0.lt) goto loc_82BE17CC;
	// addi r10,r30,4
	ctx.r10.s64 = r30.s64 + 4;
	// clrlwi. r11,r29,16
	r11.u64 = r29.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x82be1684
	if (!cr0.eq) goto loc_82BE1684;
	// b 0x82be17a8
	goto loc_82BE17A8;
loc_82BE1708:
	// clrlwi r27,r10,16
	r27.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r27,8960
	cr6.compare<uint32_t>(r27.u32, 8960, xer);
	// blt cr6,0x82be17c4
	if (cr6.lt) goto loc_82BE17C4;
	// cmplwi cr6,r27,8992
	cr6.compare<uint32_t>(r27.u32, 8992, xer);
	// bge cr6,0x82be17c4
	if (!cr6.lt) goto loc_82BE17C4;
	// addis r11,r11,1
	r11.s64 = r11.s64 + 65536;
	// lwz r26,0(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// addi r10,r31,4
	ctx.r10.s64 = r31.s64 + 4;
	// lwz r28,4(r31)
	r28.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r27,-8960
	ctx.r9.s64 = r27.s64 + -8960;
	// addi r11,r11,-2
	r11.s64 = r11.s64 + -2;
	// rlwinm r29,r9,3,0,26
	r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFE0;
	// clrlwi r25,r11,16
	r25.u64 = r11.u32 & 0xFFFF;
	// addi r31,r10,4
	r31.s64 = ctx.r10.s64 + 4;
	// mr r30,r20
	r30.u64 = r20.u64;
loc_82BE1744:
	// li r11,1
	r11.s64 = 1;
	// slw r11,r11,r30
	r11.u64 = r30.u8 & 0x20 ? 0 : (r11.u32 << (r30.u8 & 0x3F));
	// and. r10,r11,r26
	ctx.r10.u64 = r11.u64 & r26.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82be178c
	if (!cr0.eq) goto loc_82BE178C;
	// and r11,r11,r28
	r11.u64 = r11.u64 & r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// add r6,r30,r29
	ctx.r6.u64 = r30.u64 + r29.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// mtctr r21
	ctr.u64 = r21.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82be17cc
	if (cr0.lt) goto loc_82BE17CC;
loc_82BE178C:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,32
	cr6.compare<uint32_t>(r30.u32, 32, xer);
	// blt cr6,0x82be1744
	if (cr6.lt) goto loc_82BE1744;
	// addi r10,r27,4
	ctx.r10.s64 = r27.s64 + 4;
	// clrlwi. r11,r25,16
	r11.u64 = r25.u32 & 0xFFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// bne 0x82be1708
	if (!cr0.eq) goto loc_82BE1708;
loc_82BE17A8:
	// cmplw cr6,r31,r19
	cr6.compare<uint32_t>(r31.u32, r19.u32, xer);
	// blt cr6,0x82be159c
	if (cr6.lt) goto loc_82BE159C;
loc_82BE17B0:
	// addi r24,r24,1
	r24.s64 = r24.s64 + 1;
	// addi r16,r16,8
	r16.s64 = r16.s64 + 8;
	// cmplwi cr6,r24,2
	cr6.compare<uint32_t>(r24.u32, 2, xer);
	// blt cr6,0x82be1574
	if (cr6.lt) goto loc_82BE1574;
	// b 0x82be17cc
	goto loc_82BE17CC;
loc_82BE17C4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82BE17CC:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x831b0b40
	return;
}

__attribute__((alias("__imp__sub_82BE17D8"))) PPC_WEAK_FUNC(sub_82BE17D8);
PPC_FUNC_IMPL(__imp__sub_82BE17D8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82be1538
	sub_82BE1538(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE17E0"))) PPC_WEAK_FUNC(sub_82BE17E0);
PPC_FUNC_IMPL(__imp__sub_82BE17E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82be1864
	if (!cr6.gt) goto loc_82BE1864;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x82be1810
	if (!cr6.lt) goto loc_82BE1810;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_82BE1810:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// mulli r3,r30,12
	ctx.r3.s64 = r30.s64 * 12;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82be1834
	if (!cr0.eq) goto loc_82BE1834;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82be1864
	goto loc_82BE1864;
loc_82BE1834:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be1860
	if (cr6.eq) goto loc_82BE1860;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE1860:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82BE1864:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE1870"))) PPC_WEAK_FUNC(sub_82BE1870);
PPC_FUNC_IMPL(__imp__sub_82BE1870) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82be18f4
	if (!cr6.gt) goto loc_82BE18F4;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x82be18a0
	if (!cr6.lt) goto loc_82BE18A0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_82BE18A0:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82be18c4
	if (!cr0.eq) goto loc_82BE18C4;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82be18f4
	goto loc_82BE18F4;
loc_82BE18C4:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be18f0
	if (cr6.eq) goto loc_82BE18F0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE18F0:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82BE18F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE1900"))) PPC_WEAK_FUNC(sub_82BE1900);
PPC_FUNC_IMPL(__imp__sub_82BE1900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lwz r11,8(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r4,r11
	cr6.compare<uint32_t>(ctx.r4.u32, r11.u32, xer);
	// ble cr6,0x82be1984
	if (!cr6.gt) goto loc_82BE1984;
	// rlwinm r30,r11,1,0,30
	r30.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r4
	cr6.compare<uint32_t>(r30.u32, ctx.r4.u32, xer);
	// bge cr6,0x82be1930
	if (!cr6.lt) goto loc_82BE1930;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
loc_82BE1930:
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// rlwinm r3,r30,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r29,r3
	r29.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// bne 0x82be1954
	if (!cr0.eq) goto loc_82BE1954;
	// lis r11,-32761
	r11.s64 = -2147024896;
	// ori r11,r11,14
	r11.u64 = r11.u64 | 14;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// b 0x82be1984
	goto loc_82BE1984;
loc_82BE1954:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r30,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r30.u32);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be1980
	if (cr6.eq) goto loc_82BE1980;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE1980:
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
loc_82BE1984:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE1990"))) PPC_WEAK_FUNC(sub_82BE1990);
PPC_FUNC_IMPL(__imp__sub_82BE1990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// lwz r10,-2128(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -2128);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82be19cc
	if (cr6.eq) goto loc_82BE19CC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82be19cc
	if (!cr0.eq) goto loc_82BE19CC;
loc_82BE19C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be1a78
	goto loc_82BE1A78;
loc_82BE19CC:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r30)
	r29.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// add r28,r11,r30
	r28.u64 = r11.u64 + r30.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// beq 0x82be19c4
	if (cr0.eq) goto loc_82BE19C4;
	// li r11,0
	r11.s64 = 0;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// std r11,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r11.u64);
	// addi r3,r31,40
	ctx.r3.s64 = r31.s64 + 40;
	// std r11,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r11.u64);
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// std r11,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r11.u64);
	// bl 0x831ccd60
	sub_831CCD60(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bne 0x82be1a50
	if (!cr0.eq) goto loc_82BE1A50;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// b 0x82be19c4
	goto loc_82BE19C4;
loc_82BE1A50:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bdfe20
	sub_82BDFE20(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
loc_82BE1A78:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE1A80"))) PPC_WEAK_FUNC(sub_82BE1A80);
PPC_FUNC_IMPL(__imp__sub_82BE1A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31943
	r11.s64 = -2093416448;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r10,-2124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + -2124);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82be1abc
	if (cr6.eq) goto loc_82BE1ABC;
	// rotlwi r11,r10,0
	r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82be1abc
	if (!cr0.eq) goto loc_82BE1ABC;
loc_82BE1AB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be1b68
	goto loc_82BE1B68;
loc_82BE1ABC:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// lwz r29,8(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// add r28,r11,r31
	r28.u64 = r11.u64 + r31.u64;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// andi. r10,r10,832
	ctx.r10.u64 = ctx.r10.u64 & 832;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r30,r3
	r30.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// beq 0x82be1ab4
	if (cr0.eq) goto loc_82BE1AB4;
	// li r5,872
	ctx.r5.s64 = 872;
	// lwz r27,4(r31)
	r27.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,872
	ctx.r3.s64 = r30.s64 + 872;
	// bl 0x831ccd60
	sub_831CCD60(ctx, base);
	// lis r4,-19072
	ctx.r4.s64 = -1249902592;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82be1b3c
	if (!cr0.eq) goto loc_82BE1B3C;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// b 0x82be1ab4
	goto loc_82BE1AB4;
loc_82BE1B3C:
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0018
	sub_82BE0018(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// oris r11,r11,16
	r11.u64 = r11.u64 | 1048576;
	// stw r11,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r11.u32);
loc_82BE1B68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BE1B70"))) PPC_WEAK_FUNC(sub_82BE1B70);
PPC_FUNC_IMPL(__imp__sub_82BE1B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r11,r4
	r11.u64 = ctx.r4.u64;
	// addi r4,r31,12192
	ctx.r4.s64 = r31.s64 + 12192;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r11,12432(r31)
	PPC_STORE_U32(r31.u32 + 12432, r11.u32);
	// bl 0x82bde018
	sub_82BDE018(ctx, base);
	// stw r4,11820(r31)
	PPC_STORE_U32(r31.u32 + 11820, ctx.r4.u32);
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE1BC0"))) PPC_WEAK_FUNC(sub_82BE1BC0);
PPC_FUNC_IMPL(__imp__sub_82BE1BC0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af8
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// mr r20,r4
	r20.u64 = ctx.r4.u64;
	// lwz r3,9568(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 9568);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82be2018
	if (cr6.lt) goto loc_82BE2018;
	// lwz r11,9564(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 9564);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82be2008
	if (!cr6.eq) goto loc_82BE2008;
	// addi r31,r20,20
	r31.s64 = r20.s64 + 20;
	// lwz r17,24(r20)
	r17.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// addi r30,r26,9120
	r30.s64 = r26.s64 + 9120;
	// li r5,20
	ctx.r5.s64 = 20;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// lwz r11,9572(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 9572);
	// li r19,1
	r19.s64 = 1;
	// lwz r10,19892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r16,24(r20)
	r16.u64 = PPC_LOAD_U32(r20.u32 + 24);
	// beq 0x82be1d78
	if (cr0.eq) goto loc_82BE1D78;
	// lwz r10,9560(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 9560);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82be1d78
	if (cr6.eq) goto loc_82BE1D78;
	// lwz r10,19932(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19932);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82be1d78
	if (cr6.eq) goto loc_82BE1D78;
	// li r18,0
	r18.s64 = 0;
	// mr r21,r19
	r21.u64 = r19.u64;
	// stw r18,19932(r11)
	PPC_STORE_U32(r11.u32 + 19932, r18.u32);
loc_82BE1C44:
	// lwz r11,9572(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 9572);
	// mr r25,r18
	r25.u64 = r18.u64;
	// ld r22,0(r30)
	r22.u64 = PPC_LOAD_U64(r30.u32 + 0);
	// lwz r10,19892(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// lwz r23,19936(r11)
	r23.u64 = PPC_LOAD_U32(r11.u32 + 19936);
	// rlwinm r24,r10,6,23,23
	r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0x100;
loc_82BE1C5C:
	// clrlwi r11,r25,2
	r11.u64 = r25.u32 & 0x3FFFFFFF;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r11,r11,63
	xer.ca = r11.u32 <= 63;
	r11.s64 = 63 - r11.s64;
	// clrldi r11,r11,32
	r11.u64 = r11.u64 & 0xFFFFFFFF;
	// sld r11,r19,r11
	r11.u64 = r11.u8 & 0x40 ? 0 : (r19.u64 << (r11.u8 & 0x7F));
	// and r11,r11,r22
	r11.u64 = r11.u64 & r22.u64;
	// cmpdi cr6,r11,0
	cr6.compare<int64_t>(r11.s64, 0, xer);
	// beq cr6,0x82be1df4
	if (cr6.eq) goto loc_82BE1DF4;
	// addi r11,r25,1
	r11.s64 = r25.s64 + 1;
	// mr r28,r25
	r28.u64 = r25.u64;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// bge cr6,0x82be1cd4
	if (!cr6.lt) goto loc_82BE1CD4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82BE1C90:
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// subfic r9,r9,63
	xer.ca = ctx.r9.u32 <= 63;
	ctx.r9.s64 = 63 - ctx.r9.s64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// sld r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x40 ? 0 : (r19.u64 << (ctx.r9.u8 & 0x7F));
	// and r9,r9,r22
	ctx.r9.u64 = ctx.r9.u64 & r22.u64;
	// cmpdi cr6,r9,0
	cr6.compare<int64_t>(ctx.r9.s64, 0, xer);
	// beq cr6,0x82be1cd4
	if (cr6.eq) goto loc_82BE1CD4;
	// lwz r9,9560(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 9560);
	// cmpwi cr6,r9,0
	cr6.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne cr6,0x82be1cc0
	if (!cr6.eq) goto loc_82BE1CC0;
	// cmplw cr6,r11,r23
	cr6.compare<uint32_t>(r11.u32, r23.u32, xer);
	// beq cr6,0x82be1cd4
	if (cr6.eq) goto loc_82BE1CD4;
loc_82BE1CC0:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x82be1c90
	if (cr6.lt) goto loc_82BE1C90;
loc_82BE1CD4:
	// rlwinm r11,r28,2,0,29
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r27,4(r20)
	r27.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// subf r10,r28,r25
	ctx.r10.s64 = r25.s64 - r28.s64;
	// add r30,r11,r24
	r30.u64 = r11.u64 + r24.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r30.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r10,1
	r29.s64 = ctx.r10.s64 + 1;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// rlwinm r11,r29,4,16,27
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 4) & 0xFFF0;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// addi r11,r30,48
	r11.s64 = r30.s64 + 48;
	// rlwinm r5,r29,6,0,25
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r11,4,0,27
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r26
	ctx.r4.u64 = r11.u64 + r26.u64;
	// lwz r11,9560(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 9560);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82be1db0
	if (cr6.eq) goto loc_82BE1DB0;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// cmpwi cr6,r21,0
	cr6.compare<int32_t>(r21.s32, 0, xer);
	// beq cr6,0x82be1df4
	if (cr6.eq) goto loc_82BE1DF4;
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// mr r11,r28
	r11.u64 = r28.u64;
	// bgt cr6,0x82be1d64
	if (cr6.gt) goto loc_82BE1D64;
	// mr r11,r23
	r11.u64 = r23.u64;
loc_82BE1D64:
	// subf r10,r28,r11
	ctx.r10.s64 = r11.s64 - r28.s64;
	// add r9,r29,r28
	ctx.r9.u64 = r29.u64 + r28.u64;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// b 0x82be1da4
	goto loc_82BE1DA4;
loc_82BE1D78:
	// li r18,0
	r18.s64 = 0;
	// mr r21,r18
	r21.u64 = r18.u64;
	// b 0x82be1c44
	goto loc_82BE1C44;
loc_82BE1D84:
	// lwz r8,9572(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 9572);
	// lwz r7,19936(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19936);
	// lwz r8,19940(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 19940);
	// subf r7,r7,r11
	ctx.r7.s64 = r11.s64 - ctx.r7.s64;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
loc_82BE1DA4:
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// blt cr6,0x82be1d84
	if (cr6.lt) goto loc_82BE1D84;
	// b 0x82be1df4
	goto loc_82BE1DF4;
loc_82BE1DB0:
	// cmplw cr6,r28,r23
	cr6.compare<uint32_t>(r28.u32, r23.u32, xer);
	// bge cr6,0x82be1dc8
	if (!cr6.lt) goto loc_82BE1DC8;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r27.u32);
	// b 0x82be1de4
	goto loc_82BE1DE4;
loc_82BE1DC8:
	// lwz r11,9572(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 9572);
	// lwz r10,19936(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 19936);
	// lwz r11,19940(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19940);
	// subf r10,r10,r28
	ctx.r10.s64 = r28.s64 - ctx.r10.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
loc_82BE1DE4:
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
loc_82BE1DF4:
	// addi r25,r25,1
	r25.s64 = r25.s64 + 1;
	// cmplwi cr6,r25,64
	cr6.compare<uint32_t>(r25.u32, 64, xer);
	// blt cr6,0x82be1c5c
	if (cr6.lt) goto loc_82BE1C5C;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// mr r30,r18
	r30.u64 = r18.u64;
loc_82BE1E18:
	// rlwinm r11,r30,27,5,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r30,27
	ctx.r10.u64 = r30.u32 & 0x1F;
	// addi r11,r11,2302
	r11.s64 = r11.s64 + 2302;
	// slw r10,r19,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// and. r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be1ebc
	if (cr0.eq) goto loc_82BE1EBC;
	// addi r11,r30,1
	r11.s64 = r30.s64 + 1;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// b 0x82be1e6c
	goto loc_82BE1E6C;
loc_82BE1E44:
	// rlwinm r9,r11,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r8,r11,27
	ctx.r8.u64 = r11.u32 & 0x1F;
	// addi r9,r9,2302
	ctx.r9.s64 = ctx.r9.s64 + 2302;
	// slw r8,r19,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r8.u8 & 0x3F));
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + r26.u32);
	// and. r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be1e74
	if (cr0.eq) goto loc_82BE1E74;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
loc_82BE1E6C:
	// cmplwi cr6,r11,2280
	cr6.compare<uint32_t>(r11.u32, 2280, xer);
	// blt cr6,0x82be1e44
	if (cr6.lt) goto loc_82BE1E44;
loc_82BE1E74:
	// rlwinm r9,r10,2,16,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// subf r11,r10,r30
	r11.s64 = r30.s64 - ctx.r10.s64;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r29,r11,1
	r29.s64 = r11.s64 + 1;
	// rlwinm r28,r10,2,0,29
	r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r29.u16);
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r28,r26
	ctx.r4.u64 = r28.u64 + r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
loc_82BE1EBC:
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,2280
	cr6.compare<uint32_t>(r30.u32, 2280, xer);
	// blt cr6,0x82be1e18
	if (cr6.lt) goto loc_82BE1E18;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// mr r28,r18
	r28.u64 = r18.u64;
loc_82BE1EE0:
	// addi r11,r28,2382
	r11.s64 = r28.s64 + 2382;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r26
	r11.u64 = PPC_LOAD_U32(r11.u32 + r26.u32);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be1fc0
	if (cr6.eq) goto loc_82BE1FC0;
	// addi r11,r28,1
	r11.s64 = r28.s64 + 1;
	// mr r29,r28
	r29.u64 = r28.u64;
	// b 0x82be1f28
	goto loc_82BE1F28;
loc_82BE1F00:
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r9,r11,27
	ctx.r9.u64 = r11.u32 & 0x1F;
	// addi r10,r10,2382
	ctx.r10.s64 = ctx.r10.s64 + 2382;
	// slw r9,r19,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r19.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r26
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + r26.u32);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be1f30
	if (cr0.eq) goto loc_82BE1F30;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
loc_82BE1F28:
	// cmplwi cr6,r11,8
	cr6.compare<uint32_t>(r11.u32, 8, xer);
	// blt cr6,0x82be1f00
	if (cr6.lt) goto loc_82BE1F00;
loc_82BE1F30:
	// addi r10,r29,2240
	ctx.r10.s64 = r29.s64 + 2240;
	// subf r11,r29,r28
	r11.s64 = r28.s64 - r29.s64;
	// rlwinm r10,r10,2,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFC;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r30,r11,1
	r30.s64 = r11.s64 + 1;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// rlwinm r11,r30,1,16,30
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 1) & 0xFFFE;
	// li r5,2
	ctx.r5.s64 = 2;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, r11.u16);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82be1fc0
	if (cr6.eq) goto loc_82BE1FC0;
	// addi r11,r29,2374
	r11.s64 = r29.s64 + 2374;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r26
	r29.u64 = r11.u64 + r26.u64;
loc_82BE1F80:
	// lwz r11,32(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// not r11,r11
	r11.u64 = ~r11.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// addi r29,r29,4
	r29.s64 = r29.s64 + 4;
	// bne 0x82be1f80
	if (!cr0.eq) goto loc_82BE1F80;
loc_82BE1FC0:
	// addi r28,r28,1
	r28.s64 = r28.s64 + 1;
	// cmplwi cr6,r28,8
	cr6.compare<uint32_t>(r28.u32, 8, xer);
	// blt cr6,0x82be1ee0
	if (cr6.lt) goto loc_82BE1EE0;
	// stw r18,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r18.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// addi r11,r17,16
	r11.s64 = r17.s64 + 16;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r30,4(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// subf r11,r16,r30
	r11.s64 = r30.s64 - r16.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
loc_82BE2008:
	// lwz r3,16(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82be2018
	if (cr6.lt) goto loc_82BE2018;
	// lwz r3,36(r20)
	ctx.r3.u64 = PPC_LOAD_U32(r20.u32 + 36);
loc_82BE2018:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b48
	return;
}

__attribute__((alias("__imp__sub_82BE2020"))) PPC_WEAK_FUNC(sub_82BE2020);
PPC_FUNC_IMPL(__imp__sub_82BE2020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// stw r30,80(r31)
	PPC_STORE_U32(r31.u32 + 80, r30.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(r31.u32 + 88, r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(r31.u32 + 92, r30.u32);
	// stb r30,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r30.u8);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r30,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r30.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// stw r30,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r30.u32);
	// stw r30,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// stw r30,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r30.u32);
	// stw r30,336(r31)
	PPC_STORE_U32(r31.u32 + 336, r30.u32);
	// stw r30,320(r31)
	PPC_STORE_U32(r31.u32 + 320, r30.u32);
	// stw r30,324(r31)
	PPC_STORE_U32(r31.u32 + 324, r30.u32);
	// stw r30,328(r31)
	PPC_STORE_U32(r31.u32 + 328, r30.u32);
	// stw r30,332(r31)
	PPC_STORE_U32(r31.u32 + 332, r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(r31.u32 + 84, r30.u32);
	// stw r30,340(r31)
	PPC_STORE_U32(r31.u32 + 340, r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(r31.u32 + 344, r30.u32);
	// stw r30,348(r31)
	PPC_STORE_U32(r31.u32 + 348, r30.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE20E0"))) PPC_WEAK_FUNC(sub_82BE20E0);
PPC_FUNC_IMPL(__imp__sub_82BE20E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b00
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// li r18,1
	r18.s64 = 1;
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// stw r18,84(r27)
	PPC_STORE_U32(r27.u32 + 84, r18.u32);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be264c
	if (!cr0.eq) goto loc_82BE264C;
	// lwz r11,304(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 304);
	// addi r20,r27,304
	r20.s64 = r27.s64 + 304;
	// lwz r10,308(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 308);
	// extsw r31,r11
	r31.s64 = r11.s32;
	// b 0x82be2174
	goto loc_82BE2174;
loc_82BE211C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r11,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF;
	// rlwinm r9,r11,20,12,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xFFFFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + r27.u64;
	// rlwinm r8,r11,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// lbz r10,320(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 320);
	// and r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// beq cr6,0x82be2168
	if (cr6.eq) goto loc_82BE2168;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82be2158
	if (cr6.eq) goto loc_82BE2158;
	// rlwimi r11,r10,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// b 0x82be2168
	goto loc_82BE2168;
loc_82BE2158:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r20
	ctx.r3.u64 = r20.u64;
	// bl 0x82bdf528
	sub_82BDF528(ctx, base);
	// addi r31,r31,-4
	r31.s64 = r31.s64 + -4;
loc_82BE2168:
	// lwz r10,4(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
	// lwz r11,0(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 0);
loc_82BE2174:
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82be211c
	if (cr6.lt) goto loc_82BE211C;
	// lwz r10,296(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 296);
	// addi r23,r27,292
	r23.s64 = r27.s64 + 292;
	// lwz r11,292(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 292);
	// li r19,0
	r19.s64 = 0;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r26,r11
	r26.s64 = r11.s32;
	// li r22,0
	r22.s64 = 0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// li r29,0
	r29.s64 = 0;
	// li r28,0
	r28.s64 = 0;
	// b 0x82be2500
	goto loc_82BE2500;
loc_82BE21B0:
	// lwz r31,0(r26)
	r31.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r24,96(r27)
	r24.u64 = PPC_LOAD_U32(r27.u32 + 96);
	// clrlwi r30,r31,20
	r30.u64 = r31.u32 & 0xFFF;
	// mulli r11,r30,12
	r11.s64 = r30.s64 * 12;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// add r21,r11,r24
	r21.u64 = r11.u64 + r24.u64;
	// bl 0x82be09c0
	sub_82BE09C0(ctx, base);
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82be249c
	if (cr6.eq) goto loc_82BE249C;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// bne cr6,0x82be220c
	if (!cr6.eq) goto loc_82BE220C;
	// lwz r11,0(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be220c
	if (!cr0.eq) goto loc_82BE220C;
	// rlwinm. r11,r31,0,9,9
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 0) & 0x400000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x82be2210
	if (cr0.eq) goto loc_82BE2210;
loc_82BE220C:
	// li r11,0
	r11.s64 = 0;
loc_82BE2210:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be2248
	if (cr0.eq) goto loc_82BE2248;
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 0);
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r9,r9,0,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7E0;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82be2248
	if (!cr0.eq) goto loc_82BE2248;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r9,r9,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// bne 0x82be2248
	if (!cr0.eq) goto loc_82BE2248;
	// xor r11,r10,r11
	r11.u64 = ctx.r10.u64 ^ r11.u64;
	// rlwinm. r11,r11,0,0,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xC0000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x82be224c
	if (cr0.eq) goto loc_82BE224C;
loc_82BE2248:
	// li r11,0
	r11.s64 = 0;
loc_82BE224C:
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be2280
	if (cr0.eq) goto loc_82BE2280;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// clrlwi r9,r11,20
	ctx.r9.u64 = r11.u32 & 0xFFF;
	// rlwinm r11,r11,16,16,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// subf r9,r9,r30
	ctx.r9.s64 = r30.s64 - ctx.r9.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// and r11,r10,r11
	r11.u64 = ctx.r10.u64 & r11.u64;
	// clrlwi. r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x82be2284
	if (cr0.eq) goto loc_82BE2284;
loc_82BE2280:
	// li r11,0
	r11.s64 = 0;
loc_82BE2284:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 4);
	// clrlwi r7,r11,24
	ctx.r7.u64 = r11.u32 & 0xFF;
	// rlwinm. r11,r10,1,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be22a0
	if (!cr0.eq) goto loc_82BE22A0;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be22dc
	if (cr0.eq) goto loc_82BE22DC;
loc_82BE22A0:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be22d4
	if (cr0.eq) goto loc_82BE22D4;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be22d4
	if (cr6.eq) goto loc_82BE22D4;
	// lwz r11,4(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be22d4
	if (cr0.eq) goto loc_82BE22D4;
	// lwz r11,8(r21)
	r11.u64 = PPC_LOAD_U32(r21.u32 + 8);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// xor r11,r11,r10
	r11.u64 = r11.u64 ^ ctx.r10.u64;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x82be22d8
	if (cr0.eq) goto loc_82BE22D8;
loc_82BE22D4:
	// li r11,0
	r11.s64 = 0;
loc_82BE22D8:
	// clrlwi r7,r11,24
	ctx.r7.u64 = r11.u32 & 0xFF;
loc_82BE22DC:
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be249c
	if (cr0.eq) goto loc_82BE249C;
	// cmplw cr6,r22,r25
	cr6.compare<uint32_t>(r22.u32, r25.u32, xer);
	// beq cr6,0x82be249c
	if (cr6.eq) goto loc_82BE249C;
	// addi r11,r22,8
	r11.s64 = r22.s64 + 8;
	// cmplw cr6,r11,r25
	cr6.compare<uint32_t>(r11.u32, r25.u32, xer);
	// bne cr6,0x82be231c
	if (!cr6.eq) goto loc_82BE231C;
	// lwz r11,4(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// rlwinm r11,r11,0,16,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF000;
	// cmplwi cr6,r11,4096
	cr6.compare<uint32_t>(r11.u32, 4096, xer);
	// bne cr6,0x82be2314
	if (!cr6.eq) goto loc_82BE2314;
	// lwz r11,0(r25)
	r11.u64 = PPC_LOAD_U32(r25.u32 + 0);
	// rlwinm. r11,r11,0,16,16
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be231c
	if (!cr0.eq) goto loc_82BE231C;
loc_82BE2314:
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// b 0x82be2320
	goto loc_82BE2320;
loc_82BE231C:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82BE2320:
	// lwz r6,4(r22)
	ctx.r6.u64 = PPC_LOAD_U32(r22.u32 + 4);
	// clrlwi r7,r10,24
	ctx.r7.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(r25.u32 + 4);
	// rlwinm r11,r6,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0xF;
	// rlwinm r10,r5,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 20) & 0xF;
	// slw r9,r18,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (r18.u32 << (r11.u8 & 0x3F));
	// slw r8,r18,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r11,r9,24600
	r11.u64 = ctx.r9.u64 & 24600;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// andi. r10,r8,24600
	ctx.r10.u64 = ctx.r8.u64 & 24600;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// bne 0x82be236c
	if (!cr0.eq) goto loc_82BE236C;
	// clrlwi. r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r4.s32, 0, xer);
	// beq 0x82be23a8
	if (cr0.eq) goto loc_82BE23A8;
loc_82BE236C:
	// clrlwi. r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// beq 0x82be23a0
	if (cr0.eq) goto loc_82BE23A0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be23a0
	if (cr6.eq) goto loc_82BE23A0;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be23a0
	if (cr0.eq) goto loc_82BE23A0;
	// xor r11,r6,r5
	r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be23a0
	if (!cr0.eq) goto loc_82BE23A0;
	// xor r11,r6,r5
	r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,22,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3FC;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// beq 0x82be23a4
	if (cr0.eq) goto loc_82BE23A4;
loc_82BE23A0:
	// li r11,0
	r11.s64 = 0;
loc_82BE23A4:
	// clrlwi r7,r11,24
	ctx.r7.u64 = r11.u32 & 0xFF;
loc_82BE23A8:
	// rlwinm r11,r9,0,25,26
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x60;
	// rlwinm r10,r8,0,25,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x60;
	// cntlzw r11,r11
	r11.u64 = r11.u32 == 0 ? 32 : __builtin_clz(r11.u32);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	r11.u64 = r11.u64 ^ 1;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// clrlwi. r11,r11,24
	r11.u64 = r11.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be23d8
	if (!cr0.eq) goto loc_82BE23D8;
	// clrlwi. r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be241c
	if (cr0.eq) goto loc_82BE241C;
loc_82BE23D8:
	// clrlwi. r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be2414
	if (cr0.eq) goto loc_82BE2414;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be2414
	if (cr6.eq) goto loc_82BE2414;
	// clrlwi. r11,r10,24
	r11.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be2414
	if (cr0.eq) goto loc_82BE2414;
	// xor r11,r6,r5
	r11.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// rlwinm. r11,r11,0,21,21
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be2414
	if (!cr0.eq) goto loc_82BE2414;
	// mr r4,r24
	ctx.r4.u64 = r24.u64;
	// mr r3,r22
	ctx.r3.u64 = r22.u64;
	// bl 0x82bde950
	sub_82BDE950(ctx, base);
	// clrlwi. r11,r3,24
	r11.u64 = ctx.r3.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// mr r11,r18
	r11.u64 = r18.u64;
	// bne 0x82be2418
	if (!cr0.eq) goto loc_82BE2418;
loc_82BE2414:
	// li r11,0
	r11.s64 = 0;
loc_82BE2418:
	// clrlwi r7,r11,24
	ctx.r7.u64 = r11.u32 & 0xFF;
loc_82BE241C:
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be249c
	if (cr0.eq) goto loc_82BE249C;
	// lwz r10,108(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 108);
	// addi r11,r27,108
	r11.s64 = r27.s64 + 108;
	// lwz r9,112(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 112);
	// rotlwi r8,r10,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r6,r10,r25
	ctx.r6.s64 = r25.s64 - ctx.r10.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r6,3
	xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r6.s32 >> 3;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82be249c
	if (!cr6.lt) goto loc_82BE249C;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r6,3,0,28
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_82BE245C:
	// clrlwi. r9,r7,24
	ctx.r9.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be249c
	if (cr0.eq) goto loc_82BE249C;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r9,r9,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// slw r9,r18,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r9,r9,2944
	ctx.r9.u64 = ctx.r9.u64 & 2944;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// cmplwi r9,0
	cr0.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// beq 0x82be2490
	if (cr0.eq) goto loc_82BE2490;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// clrlwi r9,r9,19
	ctx.r9.u64 = ctx.r9.u32 & 0x1FFF;
	// cmplw cr6,r9,r8
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, xer);
	// bne cr6,0x82be2490
	if (!cr6.eq) goto loc_82BE2490;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82BE2490:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// blt cr6,0x82be245c
	if (cr6.lt) goto loc_82BE245C;
loc_82BE249C:
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be24c8
	if (!cr0.eq) goto loc_82BE24C8;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82be24e0
	if (cr6.eq) goto loc_82BE24E0;
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be24e0
	if (cr0.eq) goto loc_82BE24E0;
	// lwz r11,-4(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + -4);
	// mr r19,r18
	r19.u64 = r18.u64;
	// rlwimi r11,r18,20,10,11
	r11.u64 = (__builtin_rotateleft32(r18.u32, 20) & 0x300000) | (r11.u64 & 0xFFFFFFFFFFCFFFFF);
	// stw r11,-4(r26)
	PPC_STORE_U32(r26.u32 + -4, r11.u32);
	// b 0x82be24e0
	goto loc_82BE24E0;
loc_82BE24C8:
	// clrlwi. r11,r7,24
	r11.u64 = ctx.r7.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be24e0
	if (!cr0.eq) goto loc_82BE24E0;
	// addi r4,r26,-4
	ctx.r4.s64 = r26.s64 + -4;
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// bl 0x82be1358
	sub_82BE1358(ctx, base);
	// li r19,0
	r19.s64 = 0;
loc_82BE24E0:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r28,r26
	r28.u64 = r26.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// addi r26,r26,4
	r26.s64 = r26.s64 + 4;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r22,r25
	r22.u64 = r25.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// mr r29,r21
	r29.u64 = r21.u64;
loc_82BE2500:
	// cmplw cr6,r26,r11
	cr6.compare<uint32_t>(r26.u32, r11.u32, xer);
	// blt cr6,0x82be21b0
	if (cr6.lt) goto loc_82BE21B0;
	// clrlwi. r11,r19,24
	r11.u64 = r19.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be252c
	if (cr0.eq) goto loc_82BE252C;
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = r11.s64 + -4;
	// bl 0x82be1358
	sub_82BE1358(ctx, base);
loc_82BE252C:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r11,19896(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82be264c
	if (cr6.eq) goto loc_82BE264C;
	// lwz r31,0(r20)
	r31.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// b 0x82be2570
	goto loc_82BE2570;
loc_82BE2544:
	// lwz r11,0(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r6,r10,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// clrlwi r5,r10,24
	ctx.r5.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,19896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// rlwinm r4,r10,24,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82BE2570:
	// lwz r11,4(r20)
	r11.u64 = PPC_LOAD_U32(r20.u32 + 4);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(r20.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82be2544
	if (cr6.lt) goto loc_82BE2544;
	// lwz r31,0(r23)
	r31.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// b 0x82be2634
	goto loc_82BE2634;
loc_82BE2590:
	// lwz r11,260(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 260);
	// li r10,12
	ctx.r10.s64 = 12;
	// lwz r9,256(r27)
	ctx.r9.u64 = PPC_LOAD_U32(r27.u32 + 256);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = r27.u64;
	// subf r9,r9,r11
	ctx.r9.s64 = r11.s64 - ctx.r9.s64;
	// clrlwi r11,r8,20
	r11.u64 = ctx.r8.u32 & 0xFFF;
	// divw r30,r9,r10
	r30.s32 = ctx.r9.s32 / ctx.r10.s32;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// bl 0x82be0b38
	sub_82BE0B38(ctx, base);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r6,0,23,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1C0;
	// rlwinm r9,r6,0,20,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE00;
	// rlwinm r7,r6,0,26,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x38;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r10,r11,12,30,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0x3;
	// clrlwi r8,r6,29
	ctx.r8.u64 = ctx.r6.u32 & 0x7;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// beq cr6,0x82be25f8
	if (cr6.eq) goto loc_82BE25F8;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// bne cr6,0x82be25fc
	if (!cr6.eq) goto loc_82BE25FC;
loc_82BE25F8:
	// mr r8,r18
	ctx.r8.u64 = r18.u64;
loc_82BE25FC:
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(r27.u32 + 0);
	// rlwinm r10,r11,24,24,27
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0xF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r11,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xF;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,19896(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 19896);
	// rlwinm r5,r4,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 20) & 0x3F;
	// add r4,r11,r30
	ctx.r4.u64 = r11.u64 + r30.u64;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 20);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82BE2634:
	// lwz r11,4(r23)
	r11.u64 = PPC_LOAD_U32(r23.u32 + 4);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82be2590
	if (cr6.lt) goto loc_82BE2590;
loc_82BE264C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b50
	return;
}

__attribute__((alias("__imp__sub_82BE2658"))) PPC_WEAK_FUNC(sub_82BE2658);
PPC_FUNC_IMPL(__imp__sub_82BE2658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be26ac
	if (cr0.eq) goto loc_82BE26AC;
	// lwz r10,112(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq cr6,0x82be26ac
	if (cr6.eq) goto loc_82BE26AC;
	// lwz r11,108(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addic. r11,r11,-8
	xer.ca = r11.u32 > 7;
	r11.s64 = r11.s64 + -8;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be26ac
	if (cr0.eq) goto loc_82BE26AC;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// li r11,1
	r11.s64 = 1;
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r11.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// beq 0x82be26ac
	if (cr0.eq) goto loc_82BE26AC;
	// stw r11,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, r11.u32);
loc_82BE26AC:
	// lwz r3,112(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE26B8"))) PPC_WEAK_FUNC(sub_82BE26B8);
PPC_FUNC_IMPL(__imp__sub_82BE26B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r31,308(r29)
	r31.u64 = PPC_LOAD_U32(r29.u32 + 308);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r31.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be2754
	if (cr6.eq) goto loc_82BE2754;
	// mr r8,r30
	ctx.r8.u64 = r30.u64;
loc_82BE2708:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r7,r9,24,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF;
	// rlwinm r6,r9,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
loc_82BE2718:
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r9,r9,r11
	ctx.r9.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// and. r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be2738
	if (cr0.eq) goto loc_82BE2738;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + r11.u64;
	// stbx r10,r9,r5
	PPC_STORE_U8(ctx.r9.u32 + ctx.r5.u32, ctx.r10.u8);
loc_82BE2738:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82be2718
	if (cr6.lt) goto loc_82BE2718;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplw cr6,r10,r31
	cr6.compare<uint32_t>(ctx.r10.u32, r31.u32, xer);
	// blt cr6,0x82be2708
	if (cr6.lt) goto loc_82BE2708;
loc_82BE2754:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-5224
	ctx.r6.s64 = r11.s64 + -5224;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be27ac
	if (cr6.eq) goto loc_82BE27AC;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82BE2788:
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// rlwimi r6,r8,16,4,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFF0000) | (ctx.r6.u64 & 0xFFFFFFFFF000FFFF);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stw r6,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r6.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be2788
	if (!cr0.eq) goto loc_82BE2788;
loc_82BE27AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE27B8"))) PPC_WEAK_FUNC(sub_82BE27B8);
PPC_FUNC_IMPL(__imp__sub_82BE27B8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r4
	r24.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r9,r4,1
	ctx.r9.s64 = ctx.r4.s64 + 1;
	// lwz r11,4(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r26,r9,31,1,31
	r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r11,r11,31
	r11.s64 = r11.s64 + 31;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + r26.u64;
	// rlwinm r11,r11,0,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// mulli r27,r10,12
	r27.s64 = ctx.r10.s64 * 12;
	// bne cr6,0x82be2818
	if (!cr6.eq) goto loc_82BE2818;
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// b 0x82be2b90
	goto loc_82BE2B90;
loc_82BE2818:
	// stw r11,0(r24)
	PPC_STORE_U32(r24.u32 + 0, r11.u32);
	// stw r27,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r27.u32);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,12(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r27
	r11.u64 = ctx.r10.u64 + r27.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be2844
	if (!cr6.gt) goto loc_82BE2844;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, r11.u32);
loc_82BE2844:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// mr r28,r29
	r28.u64 = r29.u64;
	// bgt cr6,0x82be285c
	if (cr6.gt) goto loc_82BE285C;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82BE285C:
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// mr r30,r28
	r30.u64 = r28.u64;
	// li r25,1
	r25.s64 = 1;
	// mr r10,r29
	ctx.r10.u64 = r29.u64;
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be2928
	if (cr6.eq) goto loc_82BE2928;
loc_82BE2874:
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r8,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 20) & 0xF;
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be28a8
	if (cr0.eq) goto loc_82BE28A8;
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r5,r11,r26
	ctx.r5.u64 = r11.u64 + r26.u64;
	// rlwimi r5,r11,0,0,19
	ctx.r5.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r5.u64 & 0xFFFFFFFF00000FFF);
	// b 0x82be28ac
	goto loc_82BE28AC;
loc_82BE28A8:
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BE28AC:
	// addi r11,r10,1
	r11.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r11,r4
	cr6.compare<uint32_t>(r11.u32, ctx.r4.u32, xer);
	// bge cr6,0x82be28ec
	if (!cr6.lt) goto loc_82BE28EC;
	// ld r11,0(r6)
	r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r9,20,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 20) & 0xF;
	// slw r11,r25,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r25.u32 << (r11.u8 & 0x3F));
	// andi. r11,r11,24702
	r11.u64 = r11.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be28f8
	if (cr0.eq) goto loc_82BE28F8;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r7,r26
	r11.u64 = ctx.r7.u64 + r26.u64;
	// rlwimi r11,r7,0,0,19
	r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 0) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// b 0x82be28fc
	goto loc_82BE28FC;
loc_82BE28EC:
	// mr r11,r29
	r11.u64 = r29.u64;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// b 0x82be28fc
	goto loc_82BE28FC;
loc_82BE28F8:
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BE28FC:
	// rlwinm r7,r11,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// stw r5,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r5.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r7,r9
	r11.u64 = ctx.r7.u64 | ctx.r9.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r8,4(r30)
	PPC_STORE_U32(r30.u32 + 4, ctx.r8.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(r30.u32 + 8, r11.u32);
	// addi r30,r30,12
	r30.s64 = r30.s64 + 12;
	// cmplw cr6,r10,r4
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, xer);
	// blt cr6,0x82be2874
	if (cr6.lt) goto loc_82BE2874;
loc_82BE2928:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// mulli r5,r11,12
	ctx.r5.s64 = r11.s64 * 12;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 340);
	// stw r28,256(r31)
	PPC_STORE_U32(r31.u32 + 256, r28.u32);
	// stw r30,260(r31)
	PPC_STORE_U32(r31.u32 + 260, r30.u32);
	// lis r11,-32066
	r11.s64 = -2101477376;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r6,r11,3200
	ctx.r6.s64 = r11.s64 + 3200;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// add r11,r11,r30
	r11.u64 = r11.u64 + r30.u64;
	// stw r11,264(r31)
	PPC_STORE_U32(r31.u32 + 264, r11.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r9.u32);
	// lwz r9,344(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 344);
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r9,348(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 348);
	// stw r9,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r9.u32);
	// stw r27,4(r24)
	PPC_STORE_U32(r24.u32 + 4, r27.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r29.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r29.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r29.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r29.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, r29.u32);
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// lwz r11,120(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82be29cc
	if (cr6.eq) goto loc_82BE29CC;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r25,19952(r11)
	PPC_STORE_U32(r11.u32 + 19952, r25.u32);
loc_82BE29CC:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r11,r29
	r11.u64 = r29.u64;
	// stw r10,16(r24)
	PPC_STORE_U32(r24.u32 + 16, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r10,19892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19892);
	// rlwinm. r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be29f8
	if (cr0.eq) goto loc_82BE29F8;
	// rlwinm. r11,r10,30,31,31
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r11,2
	r11.s64 = 131072;
	// bne 0x82be29f8
	if (!cr0.eq) goto loc_82BE29F8;
	// lis r11,4
	r11.s64 = 262144;
loc_82BE29F8:
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// beq 0x82be2a80
	if (cr0.eq) goto loc_82BE2A80;
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 272);
	// lwz r9,268(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// rlwimi r11,r10,5,22,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x3E0) | (r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm. r10,r11,0,22,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3E0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be2af8
	if (cr0.eq) goto loc_82BE2AF8;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r6,r10,-2788
	ctx.r6.s64 = ctx.r10.s64 + -2788;
loc_82BE2A20:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r8,r10,16,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r10,r10,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// rlwimi r8,r11,0,22,14
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFE03FF) | (ctx.r8.u64 & 0x1FC00);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// beq cr6,0x82be2a68
	if (cr6.eq) goto loc_82BE2A68;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r11,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82BE2A68:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82be2a20
	if (cr6.lt) goto loc_82BE2A20;
	// b 0x82be2af8
	goto loc_82BE2AF8;
loc_82BE2A80:
	// lwz r10,308(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 308);
	// lwz r9,304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// rlwimi r11,r10,5,22,26
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0x3E0) | (r11.u64 & 0xFFFFFFFFFFFFFC1F);
	// rlwinm. r10,r11,0,22,26
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x3E0;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be2af8
	if (cr0.eq) goto loc_82BE2AF8;
	// lis r10,-31951
	ctx.r10.s64 = -2093940736;
	// addi r6,r10,-2788
	ctx.r6.s64 = ctx.r10.s64 + -2788;
loc_82BE2A9C:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r7,16
	ctx.r5.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r8,r10,20,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// rlwinm r10,r10,24,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// slw r10,r25,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r10.u8 & 0x3F));
	// lbzx r8,r8,r6
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r6.u32);
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
	// rotlwi r8,r8,10
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 10);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + r11.u64;
	// cmplw cr6,r10,r5
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, xer);
	// rlwimi r8,r11,0,22,14
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFFFFE03FF) | (ctx.r8.u64 & 0x1FC00);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
	// beq cr6,0x82be2ae4
	if (cr6.eq) goto loc_82BE2AE4;
	// addi r8,r11,1
	ctx.r8.s64 = r11.s64 + 1;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// rlwimi r8,r11,0,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// mr r11,r8
	r11.u64 = ctx.r8.u64;
loc_82BE2AE4:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// rlwinm r10,r11,27,27,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1F;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// blt cr6,0x82be2a9c
	if (cr6.lt) goto loc_82BE2A9C;
loc_82BE2AF8:
	// stw r11,20(r24)
	PPC_STORE_U32(r24.u32 + 20, r11.u32);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// beq 0x82be2b48
	if (cr0.eq) goto loc_82BE2B48;
	// rlwinm. r11,r11,25,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be2b20
	if (cr0.eq) goto loc_82BE2B20;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82be2b28
	goto loc_82BE2B28;
loc_82BE2B20:
	// lwz r11,88(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// rlwinm r11,r11,15,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 15) & 0x1;
loc_82BE2B28:
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// lwz r9,336(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 336);
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwimi r10,r11,17,14,14
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 17) & 0x20000) | (ctx.r10.u64 & 0xFFFFFFFFFFFDFFFF);
	// rlwimi r8,r9,2,28,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xC) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF3);
	// andis. r10,r10,30734
	ctx.r10.u64 = ctx.r10.u64 & 2014183424;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// andi. r11,r8,65294
	r11.u64 = ctx.r8.u64 & 65294;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// b 0x82be2b88
	goto loc_82BE2B88;
loc_82BE2B48:
	// rlwinm. r10,r11,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be2b58
	if (cr0.eq) goto loc_82BE2B58;
	// lwz r11,112(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// b 0x82be2b60
	goto loc_82BE2B60;
loc_82BE2B58:
	// lhz r11,88(r31)
	r11.u64 = PPC_LOAD_U16(r31.u32 + 88);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
loc_82BE2B60:
	// lwz r9,88(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 88);
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// rlwimi r9,r11,16,15,15
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 16) & 0x10000) | (ctx.r9.u64 & 0xFFFFFFFFFFFEFFFF);
	// andis. r10,r9,34801
	ctx.r10.u64 = ctx.r9.u64 & 2280718336;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq cr6,0x82be2b7c
	if (cr6.eq) goto loc_82BE2B7C;
	// lwz r11,116(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// b 0x82be2b84
	goto loc_82BE2B84;
loc_82BE2B7C:
	// lwz r11,92(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 92);
	// rlwinm r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
loc_82BE2B84:
	// rlwinm r11,r11,18,13,13
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 18) & 0x40000;
loc_82BE2B88:
	// stw r10,8(r24)
	PPC_STORE_U32(r24.u32 + 8, ctx.r10.u32);
	// stw r11,12(r24)
	PPC_STORE_U32(r24.u32 + 12, r11.u32);
loc_82BE2B90:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BE2B98"))) PPC_WEAK_FUNC(sub_82BE2B98);
PPC_FUNC_IMPL(__imp__sub_82BE2B98) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,304(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 304);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2bc0
	if (cr6.eq) goto loc_82BE2BC0;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE2BC0:
	// lwz r3,292(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 292);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2bd4
	if (cr6.eq) goto loc_82BE2BD4;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE2BD4:
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 280);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2be8
	if (cr6.eq) goto loc_82BE2BE8;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE2BE8:
	// lwz r3,268(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 268);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2bfc
	if (cr6.eq) goto loc_82BE2BFC;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE2BFC:
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2c10
	if (cr6.eq) goto loc_82BE2C10;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE2C10:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 96);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2c24
	if (cr6.eq) goto loc_82BE2C24;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE2C24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE2C38"))) PPC_WEAK_FUNC(sub_82BE2C38);
PPC_FUNC_IMPL(__imp__sub_82BE2C38) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subfic r10,r4,63
	xer.ca = ctx.r4.u32 <= 63;
	ctx.r10.s64 = 63 - ctx.r4.s64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// li r9,0
	ctx.r9.s64 = 0;
	// sld r7,r8,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r10.u8 & 0x7F));
	// ld r6,9496(r11)
	ctx.r6.u64 = PPC_LOAD_U64(r11.u32 + 9496);
	// addi r4,r4,2248
	ctx.r4.s64 = ctx.r4.s64 + 2248;
	// stw r9,9932(r11)
	PPC_STORE_U32(r11.u32 + 9932, ctx.r9.u32);
	// addi r10,r11,368
	ctx.r10.s64 = r11.s64 + 368;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// std r9,9496(r11)
	PPC_STORE_U64(r11.u32 + 9496, ctx.r9.u64);
	// addi r11,r10,9208
	r11.s64 = ctx.r10.s64 + 9208;
	// rlwinm r9,r7,27,5,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x7FFFFFC;
	// rlwinm r6,r7,30,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1F;
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r6,r9,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 | ctx.r6.u64;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + r11.u32, ctx.r8.u32);
	// lbz r11,7(r5)
	r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 7);
	// lbz r9,3(r5)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + 3);
	// lbz r8,11(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 11);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// or r11,r8,r11
	r11.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r11,r11,8,0,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r9
	r11.u64 = r11.u64 | ctx.r9.u64;
	// stwx r11,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE2CB8"))) PPC_WEAK_FUNC(sub_82BE2CB8);
PPC_FUNC_IMPL(__imp__sub_82BE2CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be2658
	sub_82BE2658(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE2CD0"))) PPC_WEAK_FUNC(sub_82BE2CD0);
PPC_FUNC_IMPL(__imp__sub_82BE2CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r30,0
	r30.s64 = 0;
	// addi r29,r31,16
	r29.s64 = r31.s64 + 16;
	// li r28,2
	r28.s64 = 2;
	// stw r30,19900(r31)
	PPC_STORE_U32(r31.u32 + 19900, r30.u32);
	// stw r30,19892(r31)
	PPC_STORE_U32(r31.u32 + 19892, r30.u32);
loc_82BE2CF4:
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82be2020
	sub_82BE2020(ctx, base);
	// li r11,1
	r11.s64 = 1;
	// addic. r28,r28,-1
	xer.ca = r28.u32 > 0;
	r28.s64 = r28.s64 + -1;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// stw r11,9916(r29)
	PPC_STORE_U32(r29.u32 + 9916, r11.u32);
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// bne 0x82be2cf4
	if (!cr0.eq) goto loc_82BE2CF4;
	// lwz r3,19896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19896);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be2d30
	if (cr6.eq) goto loc_82BE2D30;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// stw r30,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r30.u32);
loc_82BE2D30:
	// li r11,-1
	r11.s64 = -1;
	// stw r30,19904(r31)
	PPC_STORE_U32(r31.u32 + 19904, r30.u32);
	// stw r30,19932(r31)
	PPC_STORE_U32(r31.u32 + 19932, r30.u32);
	// stw r11,19936(r31)
	PPC_STORE_U32(r31.u32 + 19936, r11.u32);
	// stw r30,19944(r31)
	PPC_STORE_U32(r31.u32 + 19944, r30.u32);
	// stw r30,19952(r31)
	PPC_STORE_U32(r31.u32 + 19952, r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE2D50"))) PPC_WEAK_FUNC(sub_82BE2D50);
PPC_FUNC_IMPL(__imp__sub_82BE2D50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-944(r1)
	ea = -944 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// addi r31,r26,20
	r31.s64 = r26.s64 + 20;
	// lwz r8,28(r26)
	ctx.r8.u64 = PPC_LOAD_U32(r26.u32 + 28);
	// cmplwi cr6,r8,0
	cr6.compare<uint32_t>(ctx.r8.u32, 0, xer);
	// bne cr6,0x82be2dd0
	if (!cr6.eq) goto loc_82BE2DD0;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82be27b8
	sub_82BE27B8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be2da4
	if (cr0.eq) goto loc_82BE2DA4;
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// addi r11,r11,8
	r11.s64 = r11.s64 + 8;
	// b 0x82be2dc4
	goto loc_82BE2DC4;
loc_82BE2DA4:
	// lwz r10,316(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r9,296(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r10,284(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addi r11,r11,9
	r11.s64 = r11.s64 + 9;
loc_82BE2DC4:
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// b 0x82be3634
	goto loc_82BE3634;
loc_82BE2DD0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be31cc
	if (cr0.eq) goto loc_82BE31CC;
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,268(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 268);
	// addi r28,r30,268
	r28.s64 = r30.s64 + 268;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// extsw r11,r8
	r11.s64 = ctx.r8.s32;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bge cr6,0x82be2e74
	if (!cr6.lt) goto loc_82BE2E74;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
loc_82BE2E1C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r4,r1,180
	ctx.r4.s64 = ctx.r1.s64 + 180;
	// rlwinm r9,r7,17,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 17) & 0x1;
	// rotlwi r5,r5,13
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 13);
	// rlwinm r3,r7,18,24,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 18) & 0xFF;
	// or r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 | ctx.r9.u64;
	// rlwinm r29,r7,28,16,19
	r29.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 28) & 0xF000;
	// rlwimi r3,r5,1,0,30
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0xFFFFFFFE) | (ctx.r3.u64 & 0xFFFFFFFF00000001);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r5,r3,10,0,21
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 10) & 0xFFFFFC00;
	// rlwinm r7,r7,0,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xF00000;
	// or r9,r5,r29
	ctx.r9.u64 = ctx.r5.u64 | r29.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// stwx r9,r6,r4
	PPC_STORE_U32(ctx.r6.u32 + ctx.r4.u32, ctx.r9.u32);
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r9.u32);
	// blt cr6,0x82be2e1c
	if (cr6.lt) goto loc_82BE2E1C;
loc_82BE2E74:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// bne cr6,0x82be2e88
	if (!cr6.eq) goto loc_82BE2E88;
	// li r11,0
	r11.s64 = 0;
	// b 0x82be2e98
	goto loc_82BE2E98;
loc_82BE2E88:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// li r11,1
	r11.s64 = 1;
	// beq cr6,0x82be2e98
	if (cr6.eq) goto loc_82BE2E98;
	// li r11,2
	r11.s64 = 2;
loc_82BE2E98:
	// stw r11,336(r30)
	PPC_STORE_U32(r30.u32 + 336, r11.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r10,32
	r11.s64 = ctx.r10.s64 + 32;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be2ec0
	if (!cr6.gt) goto loc_82BE2EC0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE2EC0:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// li r29,0
	r29.s64 = 0;
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82be2ed4
	if (cr6.gt) goto loc_82BE2ED4;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82BE2ED4:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be27b8
	sub_82BE27B8(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm r4,r11,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x82be06e0
	sub_82BE06E0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82be2f10
	if (!cr0.eq) goto loc_82BE2F10;
	// lis r11,-30602
	r11.s64 = -2005532672;
	// ori r11,r11,2945
	r11.u64 = r11.u64 | 2945;
	// stw r11,80(r30)
	PPC_STORE_U32(r30.u32 + 80, r11.u32);
	// b 0x82be3634
	goto loc_82BE3634;
loc_82BE2F10:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be2f3c
	if (!cr6.gt) goto loc_82BE2F3C;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE2F3C:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be2f50
	if (!cr6.gt) goto loc_82BE2F50;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BE2F50:
	// lwz r11,272(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// ble cr6,0x82be2ff0
	if (!cr6.gt) goto loc_82BE2FF0;
	// addi r7,r1,180
	ctx.r7.s64 = ctx.r1.s64 + 180;
loc_82BE2F78:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// rlwimi r11,r10,16,16,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (r11.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r11,24,20,31
	ctx.r3.u64 = (__builtin_rotateleft32(r11.u32, 24) & 0xFFF) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF000);
	// clrlwi r3,r3,16
	ctx.r3.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r11,r3,24,28,31
	r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xF;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// cmplw cr6,r11,r6
	cr6.compare<uint32_t>(r11.u32, ctx.r6.u32, xer);
	// ble cr6,0x82be2fa4
	if (!cr6.gt) goto loc_82BE2FA4;
	// mr r6,r11
	ctx.r6.u64 = r11.u64;
loc_82BE2FA4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x82be2fb8
	if (!cr6.gt) goto loc_82BE2FB8;
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
loc_82BE2FB8:
	// not r31,r10
	r31.u64 = ~ctx.r10.u64;
	// lwz r27,272(r30)
	r27.u64 = PPC_LOAD_U32(r30.u32 + 272);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// rlwinm r31,r31,21,31,31
	r31.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 21) & 0x1;
	// rlwinm r10,r10,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// slw r31,r31,r11
	r31.u64 = r11.u8 & 0x20 ? 0 : (r31.u32 << (r11.u8 & 0x3F));
	// slw r11,r10,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// or r5,r31,r5
	ctx.r5.u64 = r31.u64 | ctx.r5.u64;
	// or r4,r11,r4
	ctx.r4.u64 = r11.u64 | ctx.r4.u64;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r8,r27
	cr6.compare<uint32_t>(ctx.r8.u32, r27.u32, xer);
	// blt cr6,0x82be2f78
	if (cr6.lt) goto loc_82BE2F78;
loc_82BE2FF0:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// rlwinm r10,r11,13,31,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 13) & 0x1;
	// rlwinm r11,r11,14,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 14) & 0x1;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// add r11,r11,r6
	r11.u64 = r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r11,15
	cr6.compare<uint32_t>(r11.u32, 15, xer);
	// ble cr6,0x82be3010
	if (!cr6.gt) goto loc_82BE3010;
	// li r11,15
	r11.s64 = 15;
loc_82BE3010:
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// ble cr6,0x82be301c
	if (!cr6.gt) goto loc_82BE301C;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82BE301C:
	// sth r5,24(r29)
	PPC_STORE_U16(r29.u32 + 24, ctx.r5.u16);
	// li r11,0
	r11.s64 = 0;
	// sth r4,26(r29)
	PPC_STORE_U16(r29.u32 + 26, ctx.r4.u16);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
loc_82BE302C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x82be302c
	if (cr6.lt) goto loc_82BE302C;
	// lwz r11,176(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be3070
	if (cr6.eq) goto loc_82BE3070;
loc_82BE3050:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r7,r9,14,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3C;
	// rlwinm r9,r9,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x82be3050
	if (!cr0.eq) goto loc_82BE3050;
loc_82BE3070:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// addi r7,r1,368
	ctx.r7.s64 = ctx.r1.s64 + 368;
	// addi r6,r11,-6472
	ctx.r6.s64 = r11.s64 + -6472;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r3,19896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq cr6,0x82be30b0
	if (cr6.eq) goto loc_82BE30B0;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// lwz r11,16(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 16);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
loc_82BE30B0:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// rlwinm. r11,r11,24,26,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 24) & 0x3F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be30c4
	if (cr0.eq) goto loc_82BE30C4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// b 0x82be30e0
	goto loc_82BE30E0;
loc_82BE30C4:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r11,-6080
	ctx.r6.s64 = r11.s64 + -6080;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
loc_82BE30E0:
	// lwz r11,8(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,-32066
	ctx.r8.s64 = -2101477376;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwimi r11,r9,8,18,23
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0x3F00) | (r11.u64 & 0xFFFFFFFFFFFFC0FF);
	// addi r6,r8,-5024
	ctx.r6.s64 = ctx.r8.s64 + -5024;
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,1
	r11.s64 = 1;
	// stw r10,28(r29)
	PPC_STORE_U32(r29.u32 + 28, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm. r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be3134
	if (cr0.eq) goto loc_82BE3134;
	// li r11,4
	r11.s64 = 4;
	// b 0x82be3150
	goto loc_82BE3150;
loc_82BE3134:
	// rlwinm. r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r9.s32, 0, xer);
	// beq 0x82be3144
	if (cr0.eq) goto loc_82BE3144;
	// li r11,3
	r11.s64 = 3;
	// b 0x82be3150
	goto loc_82BE3150;
loc_82BE3144:
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be3150
	if (cr0.eq) goto loc_82BE3150;
	// li r11,2
	r11.s64 = 2;
loc_82BE3150:
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 8);
	// rlwimi r10,r11,28,1,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r10.u64 & 0xFFFFFFFF8FFFFFFF);
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// stw r10,8(r29)
	PPC_STORE_U32(r29.u32 + 8, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r11,r10,23,4,4
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 23) & 0x8000000) | (r11.u64 & 0xFFFFFFFFF7FFFFFF);
	// stw r11,8(r29)
	PPC_STORE_U32(r29.u32 + 8, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r11,19896(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82be3618
	if (cr6.eq) goto loc_82BE3618;
	// lwz r31,0(r28)
	r31.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// b 0x82be31b0
	goto loc_82BE31B0;
loc_82BE3184:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lbz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U8(r31.u32 + 0);
	// rlwinm r6,r10,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xF;
	// rlwinm r4,r10,12,28,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xF;
	// lwz r3,19896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 19896);
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 24);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// addi r31,r31,4
	r31.s64 = r31.s64 + 4;
loc_82BE31B0:
	// lwz r11,4(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 4);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(r28.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// cmplw cr6,r31,r11
	cr6.compare<uint32_t>(r31.u32, r11.u32, xer);
	// blt cr6,0x82be3184
	if (cr6.lt) goto loc_82BE3184;
	// b 0x82be3618
	goto loc_82BE3618;
loc_82BE31CC:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// addi r11,r10,36
	r11.s64 = ctx.r10.s64 + 36;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r7
	cr6.compare<uint32_t>(r11.u32, ctx.r7.u32, xer);
	// ble cr6,0x82be31f0
	if (!cr6.gt) goto loc_82BE31F0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE31F0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r27,0
	r27.s64 = 0;
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// bgt cr6,0x82be3204
	if (cr6.gt) goto loc_82BE3204;
	// mr r27,r10
	r27.u64 = ctx.r10.u64;
loc_82BE3204:
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be27b8
	sub_82BE27B8(ctx, base);
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// stw r11,24(r27)
	PPC_STORE_U32(r27.u32 + 24, r11.u32);
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// stw r11,28(r27)
	PPC_STORE_U32(r27.u32 + 28, r11.u32);
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// stw r11,32(r27)
	PPC_STORE_U32(r27.u32 + 32, r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,284(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 284);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r5
	r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be3258
	if (!cr6.gt) goto loc_82BE3258;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE3258:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be326c
	if (!cr6.gt) goto loc_82BE326C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE326C:
	// lwz r4,280(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 280);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,296(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be32a0
	if (!cr6.gt) goto loc_82BE32A0;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE32A0:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r10
	cr6.compare<uint32_t>(r11.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be32b4
	if (!cr6.gt) goto loc_82BE32B4;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BE32B4:
	// lwz r5,260(r30)
	ctx.r5.u64 = PPC_LOAD_U32(r30.u32 + 260);
	// li r6,12
	ctx.r6.s64 = 12;
	// lwz r4,256(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// addi r11,r30,292
	r11.s64 = r30.s64 + 292;
	// lwz r10,296(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 296);
	// lwz r7,292(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 292);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// divw r6,r5,r6
	ctx.r6.s32 = ctx.r5.s32 / ctx.r6.s32;
	// b 0x82be3304
	goto loc_82BE3304;
loc_82BE32E0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// add r7,r8,r6
	ctx.r7.u64 = ctx.r8.u64 + ctx.r6.u64;
	// rlwimi r7,r8,0,0,19
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFF000) | (ctx.r7.u64 & 0xFFFFFFFF00000FFF);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
loc_82BE3304:
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmplw cr6,r10,r8
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, xer);
	// blt cr6,0x82be32e0
	if (cr6.lt) goto loc_82BE32E0;
	// lwz r10,308(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,304(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 304);
	// addi r11,r30,304
	r11.s64 = r30.s64 + 304;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// cmplw cr6,r10,r9
	cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, xer);
	// bge cr6,0x82be3384
	if (!cr6.lt) goto loc_82BE3384;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r8,2,0,29
	r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	r11.u64 = r11.u64 + ctx.r9.u64;
loc_82BE3348:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// rlwinm r5,r9,0,16,19
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF000;
	// rlwimi r6,r9,12,0,19
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xFFFFF000) | (ctx.r6.u64 & 0xFFFFFFFF00000FFF);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r9,r6,12,0,11
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFF00000;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// or r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 | ctx.r5.u64;
	// stwx r9,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r9.u32);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// blt cr6,0x82be3348
	if (cr6.lt) goto loc_82BE3348;
loc_82BE3384:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm r4,r11,29,31,31
	ctx.r4.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 29) & 0x1;
	// bl 0x82be06e0
	sub_82BE06E0(ctx, base);
	// lwz r11,308(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be33c4
	if (!cr6.gt) goto loc_82BE33C4;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE33C4:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r28,0
	r28.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82be33dc
	if (cr6.gt) goto loc_82BE33DC;
	// mr r28,r10
	r28.u64 = ctx.r10.u64;
loc_82BE33DC:
	// lwz r9,308(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// mr r10,r28
	ctx.r10.u64 = r28.u64;
	// li r11,0
	r11.s64 = 0;
	// cmplwi cr6,r9,0
	cr6.compare<uint32_t>(ctx.r9.u32, 0, xer);
	// ble cr6,0x82be3428
	if (!cr6.gt) goto loc_82BE3428;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
loc_82BE33F4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// rlwimi r7,r8,16,16,31
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 16) & 0xFFFF) | (ctx.r7.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r7,24,20,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r7.u32, 24) & 0xFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFFF000);
	// clrlwi r8,r6,16
	ctx.r8.u64 = ctx.r6.u32 & 0xFFFF;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r8,308(r30)
	ctx.r8.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// blt cr6,0x82be33f4
	if (cr6.lt) goto loc_82BE33F4;
loc_82BE3428:
	// li r11,0
	r11.s64 = 0;
	// addi r10,r1,624
	ctx.r10.s64 = ctx.r1.s64 + 624;
loc_82BE3430:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, r11.u32);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,64
	cr6.compare<uint32_t>(r11.u32, 64, xer);
	// blt cr6,0x82be3430
	if (cr6.lt) goto loc_82BE3430;
	// lwz r11,96(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be3474
	if (cr6.eq) goto loc_82BE3474;
loc_82BE3454:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r1,624
	ctx.r8.s64 = ctx.r1.s64 + 624;
	// addic. r11,r11,-1
	xer.ca = r11.u32 > 0;
	r11.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwinm r7,r9,14,26,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 14) & 0x3C;
	// rlwinm r9,r9,16,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r9,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r9.u32);
	// bne 0x82be3454
	if (!cr0.eq) goto loc_82BE3454;
loc_82BE3474:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// addi r7,r1,624
	ctx.r7.s64 = ctx.r1.s64 + 624;
	// addi r6,r11,-6128
	ctx.r6.s64 = r11.s64 + -6128;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be26b8
	sub_82BE26B8(ctx, base);
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
	// cmplw cr6,r11,r8
	cr6.compare<uint32_t>(r11.u32, ctx.r8.u32, xer);
	// ble cr6,0x82be34c8
	if (!cr6.gt) goto loc_82BE34C8;
	// stw r11,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r11.u32);
loc_82BE34C8:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r29,0
	r29.s64 = 0;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplw cr6,r11,r9
	cr6.compare<uint32_t>(r11.u32, ctx.r9.u32, xer);
	// bgt cr6,0x82be34e0
	if (cr6.gt) goto loc_82BE34E0;
	// mr r29,r10
	r29.u64 = ctx.r10.u64;
loc_82BE34E0:
	// li r5,112
	ctx.r5.s64 = 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,255
	ctx.r4.s64 = 255;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// lwz r31,308(r30)
	r31.u64 = PPC_LOAD_U32(r30.u32 + 308);
	// lwz r11,316(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 316);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r28,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, r28.u32);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// stw r29,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, r29.u32);
	// stw r31,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, r31.u32);
	// stw r11,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, r11.u32);
	// beq cr6,0x82be3574
	if (cr6.eq) goto loc_82BE3574;
	// mr r7,r28
	ctx.r7.u64 = r28.u64;
loc_82BE3528:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// rlwinm r8,r10,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xF;
	// rlwinm r6,r10,20,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
loc_82BE3538:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r11.u8 & 0x3F));
	// and. r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be3558
	if (cr0.eq) goto loc_82BE3558;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// stbx r9,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r9.u8);
loc_82BE3558:
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// blt cr6,0x82be3538
	if (cr6.lt) goto loc_82BE3538;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r9,r31
	cr6.compare<uint32_t>(ctx.r9.u32, r31.u32, xer);
	// blt cr6,0x82be3528
	if (cr6.lt) goto loc_82BE3528;
loc_82BE3574:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// addi r6,r11,-5432
	ctx.r6.s64 = r11.s64 + -5432;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be35dc
	if (cr6.eq) goto loc_82BE35DC;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// mr r9,r28
	ctx.r9.u64 = r28.u64;
	// mr r10,r31
	ctx.r10.u64 = r31.u64;
loc_82BE35A4:
	// lhz r11,0(r9)
	r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lhz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// add r11,r11,r7
	r11.u64 = r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	r11.u64 = r11.u64 + r29.u64;
	// addi r7,r11,-4
	ctx.r7.s64 = r11.s64 + -4;
	// lwz r7,-4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + -4);
	// ori r7,r7,4096
	ctx.r7.u64 = ctx.r7.u64 | 4096;
	// stw r7,-4(r11)
	PPC_STORE_U32(r11.u32 + -4, ctx.r7.u32);
	// bne 0x82be35a4
	if (!cr0.eq) goto loc_82BE35A4;
loc_82BE35DC:
	// lwz r11,88(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 88);
	// clrlwi. r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bne 0x82be360c
	if (!cr0.eq) goto loc_82BE360C;
	// lis r11,-32066
	r11.s64 = -2101477376;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r11,-6080
	ctx.r6.s64 = r11.s64 + -6080;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
	// lwz r11,80(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82BE360C:
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 8);
	// rlwimi r11,r10,0,0,25
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFC0) | (r11.u64 & 0xFFFFFFFF0000003F);
	// stw r11,8(r27)
	PPC_STORE_U32(r27.u32 + 8, r11.u32);
loc_82BE3618:
	// lis r11,-32066
	r11.s64 = -2101477376;
	// lwz r7,256(r30)
	ctx.r7.u64 = PPC_LOAD_U32(r30.u32 + 256);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,-5640
	ctx.r6.s64 = r11.s64 + -5640;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be0ef0
	sub_82BE0EF0(ctx, base);
loc_82BE3634:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 80);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82be3650
	if (cr6.lt) goto loc_82BE3650;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82be3650
	if (cr6.lt) goto loc_82BE3650;
	// lwz r3,36(r26)
	ctx.r3.u64 = PPC_LOAD_U32(r26.u32 + 36);
loc_82BE3650:
	// addi r1,r1,944
	ctx.r1.s64 = ctx.r1.s64 + 944;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BE3658"))) PPC_WEAK_FUNC(sub_82BE3658);
PPC_FUNC_IMPL(__imp__sub_82BE3658) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	r29.u64 = ctx.r3.u64;
	// li r28,1
	r28.s64 = 1;
	// li r30,0
	r30.s64 = 0;
	// addi r31,r29,9932
	r31.s64 = r29.s64 + 9932;
	// stw r28,19888(r29)
	PPC_STORE_U32(r29.u32 + 19888, r28.u32);
loc_82BE3678:
	// addi r3,r31,-9916
	ctx.r3.s64 = r31.s64 + -9916;
	// bl 0x82be2020
	sub_82BE2020(ctx, base);
	// cntlzw r11,r30
	r11.u64 = r30.u32 == 0 ? 32 : __builtin_clz(r30.u32);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// stw r28,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r28.u32);
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r30,2
	cr6.compare<uint32_t>(r30.u32, 2, xer);
	// stw r11,-4(r31)
	PPC_STORE_U32(r31.u32 + -4, r11.u32);
	// addi r31,r31,9936
	r31.s64 = r31.s64 + 9936;
	// blt cr6,0x82be3678
	if (cr6.lt) goto loc_82BE3678;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// bl 0x82be2cd0
	sub_82BE2CD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE36B0"))) PPC_WEAK_FUNC(sub_82BE36B0);
PPC_FUNC_IMPL(__imp__sub_82BE36B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r3,19896(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19896);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be36ec
	if (cr6.eq) goto loc_82BE36EC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// mtctr r11
	ctr.u64 = r11.u64;
	// bctrl 
	PPC_CALL_INDIRECT_FUNC(ctr.u32);
	// li r11,0
	r11.s64 = 0;
	// stw r11,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r11.u32);
loc_82BE36EC:
	// lwz r3,19940(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19940);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be3700
	if (cr6.eq) goto loc_82BE3700;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE3700:
	// lwz r3,19920(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19920);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be3714
	if (cr6.eq) goto loc_82BE3714;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE3714:
	// lwz r3,19908(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19908);
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be3728
	if (cr6.eq) goto loc_82BE3728;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE3728:
	// addi r31,r31,19888
	r31.s64 = r31.s64 + 19888;
	// li r30,1
	r30.s64 = 1;
loc_82BE3730:
	// addi r31,r31,-9936
	r31.s64 = r31.s64 + -9936;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be2b98
	sub_82BE2B98(ctx, base);
	// addic. r30,r30,-1
	xer.ca = r30.u32 > 0;
	r30.s64 = r30.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// bge 0x82be3730
	if (!cr0.lt) goto loc_82BE3730;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE3760"))) PPC_WEAK_FUNC(sub_82BE3760);
PPC_FUNC_IMPL(__imp__sub_82BE3760) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b1c
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r26,r4
	r26.u64 = ctx.r4.u64;
	// lwz r3,19900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 19900);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82be393c
	if (cr6.lt) goto loc_82BE393C;
	// lwz r11,19904(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19904);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82be3798
	if (!cr6.eq) goto loc_82BE3798;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82be393c
	goto loc_82BE393C;
loc_82BE3798:
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,19892(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 19892);
	// li r29,0
	r29.s64 = 0;
	// lwz r25,24(r26)
	r25.u64 = PPC_LOAD_U32(r26.u32 + 24);
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// lis r8,4138
	ctx.r8.s64 = 271187968;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// std r29,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r29.u64);
	// ori r8,r8,4352
	ctx.r8.u64 = ctx.r8.u64 | 4352;
	// std r29,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r29.u64);
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// std r29,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r29.u64);
	// rlwimi r8,r10,31,26,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 31) & 0x20) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFDF);
	// std r29,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r29.u64);
	// stw r29,32(r11)
	PPC_STORE_U32(r11.u32 + 32, r29.u32);
	// or r11,r8,r9
	r11.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addi r31,r26,20
	r31.s64 = r26.s64 + 20;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// andi. r10,r10,222
	ctx.r10.u64 = ctx.r10.u64 & 222;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// lwz r11,19924(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19924);
	// rlwinm. r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82be3820
	if (cr0.eq) goto loc_82BE3820;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,19920(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 19920);
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
loc_82BE3820:
	// lwz r11,19912(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19912);
	// rlwinm. r28,r11,2,0,29
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// beq 0x82be385c
	if (cr0.eq) goto loc_82BE385C;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r28.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// subf r11,r25,r11
	r11.s64 = r11.s64 - r25.s64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r4,19908(r30)
	ctx.r4.u64 = PPC_LOAD_U32(r30.u32 + 19908);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
loc_82BE385C:
	// mr r27,r29
	r27.u64 = r29.u64;
	// addi r28,r1,116
	r28.s64 = ctx.r1.s64 + 116;
	// addi r29,r30,368
	r29.s64 = r30.s64 + 368;
loc_82BE3868:
	// lwz r11,9564(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 9564);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82be3894
	if (!cr6.eq) goto loc_82BE3894;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r11.u32);
	// bl 0x82be1bc0
	sub_82BE1BC0(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82be3894
	if (!cr0.lt) goto loc_82BE3894;
	// stw r3,19900(r30)
	PPC_STORE_U32(r30.u32 + 19900, ctx.r3.u32);
loc_82BE3894:
	// lwz r11,-240(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + -240);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be38cc
	if (cr6.eq) goto loc_82BE38CC;
	// cntlzw r11,r27
	r11.u64 = r27.u32 == 0 ? 32 : __builtin_clz(r27.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// rlwinm r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// addi r3,r29,-352
	ctx.r3.s64 = r29.s64 + -352;
	// xori r5,r11,1
	ctx.r5.u64 = r11.u64 ^ 1;
	// stw r10,4(r28)
	PPC_STORE_U32(r28.u32 + 4, ctx.r10.u32);
	// bl 0x82be2d50
	sub_82BE2D50(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bge 0x82be38cc
	if (!cr0.lt) goto loc_82BE38CC;
	// stw r3,19900(r30)
	PPC_STORE_U32(r30.u32 + 19900, ctx.r3.u32);
loc_82BE38CC:
	// addi r27,r27,1
	r27.s64 = r27.s64 + 1;
	// addi r28,r28,8
	r28.s64 = r28.s64 + 8;
	// addi r29,r29,9936
	r29.s64 = r29.s64 + 9936;
	// cmplwi cr6,r27,2
	cr6.compare<uint32_t>(r27.u32, 2, xer);
	// blt cr6,0x82be3868
	if (cr6.lt) goto loc_82BE3868;
	// lwz r11,19952(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19952);
	// li r5,36
	ctx.r5.s64 = 36;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r9,12(r26)
	ctx.r9.u64 = PPC_LOAD_U32(r26.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// lwz r29,4(r31)
	r29.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// stw r25,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r25.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// bl 0x82bde5b8
	sub_82BDE5B8(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,16(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 16);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be3934
	if (cr6.lt) goto loc_82BE3934;
	// lwz r11,36(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 36);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82be3938
	if (!cr6.lt) goto loc_82BE3938;
loc_82BE3934:
	// stw r11,19900(r30)
	PPC_STORE_U32(r30.u32 + 19900, r11.u32);
loc_82BE3938:
	// lwz r3,19900(r30)
	ctx.r3.u64 = PPC_LOAD_U32(r30.u32 + 19900);
loc_82BE393C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b6c
	return;
}

__attribute__((alias("__imp__sub_82BE3948"))) PPC_WEAK_FUNC(sub_82BE3948);
PPC_FUNC_IMPL(__imp__sub_82BE3948) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,19968
	ctx.r3.s64 = 19968;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82be3974
	if (!cr0.eq) goto loc_82BE3974;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be3980
	goto loc_82BE3980;
loc_82BE3974:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be3658
	sub_82BE3658(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
loc_82BE3980:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE3998"))) PPC_WEAK_FUNC(sub_82BE3998);
PPC_FUNC_IMPL(__imp__sub_82BE3998) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be39c8
	if (!cr6.gt) goto loc_82BE39C8;
	// bl 0x82be17e0
	sub_82BE17E0(ctx, base);
loc_82BE39C8:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be3a08
	if (cr6.lt) goto loc_82BE3A08;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// mulli r11,r11,12
	r11.s64 = r11.s64 * 12;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(r11.u32 + 4, ctx.r9.u32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(r11.u32 + 8, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82BE3A08:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE3A10"))) PPC_WEAK_FUNC(sub_82BE3A10);
PPC_FUNC_IMPL(__imp__sub_82BE3A10) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be3a40
	if (!cr6.gt) goto loc_82BE3A40;
	// bl 0x82be1870
	sub_82BE1870(ctx, base);
loc_82BE3A40:
	// lwz r11,0(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be3a78
	if (cr6.lt) goto loc_82BE3A78;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,3,0,28
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r8,r11,r10
	ctx.r8.u64 = r11.u64 + ctx.r10.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, r11.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82BE3A78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE3A80"))) PPC_WEAK_FUNC(sub_82BE3A80);
PPC_FUNC_IMPL(__imp__sub_82BE3A80) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r11,1
	ctx.r4.s64 = r11.s64 + 1;
	// cmplw cr6,r4,r10
	cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be3ab0
	if (!cr6.gt) goto loc_82BE3AB0;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE3AB0:
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be3adc
	if (cr6.lt) goto loc_82BE3ADC;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(r29.u32 + 0);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r9
	PPC_STORE_U32(r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r11.u32);
loc_82BE3ADC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE3AE8"))) PPC_WEAK_FUNC(sub_82BE3AE8);
PPC_FUNC_IMPL(__imp__sub_82BE3AE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// bl 0x82be2020
	sub_82BE2020(ctx, base);
	// li r30,0
	r30.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r29.u32);
	// lwz r11,104(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 104);
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// stw r30,100(r31)
	PPC_STORE_U32(r31.u32 + 100, r30.u32);
	// cmplwi cr6,r11,100
	cr6.compare<uint32_t>(r11.u32, 100, xer);
	// bge cr6,0x82be3b28
	if (!cr6.lt) goto loc_82BE3B28;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,100
	ctx.r4.s64 = 100;
	// bl 0x82be17e0
	sub_82BE17E0(ctx, base);
loc_82BE3B28:
	// lwz r11,116(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 116);
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// stw r30,112(r31)
	PPC_STORE_U32(r31.u32 + 112, r30.u32);
	// cmplwi cr6,r11,50
	cr6.compare<uint32_t>(r11.u32, 50, xer);
	// bge cr6,0x82be3b48
	if (!cr6.lt) goto loc_82BE3B48;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,50
	ctx.r4.s64 = 50;
	// bl 0x82be1870
	sub_82BE1870(ctx, base);
loc_82BE3B48:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be3b7c
	if (cr0.eq) goto loc_82BE3B7C;
	// lwz r11,276(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 276);
	// addi r3,r31,268
	ctx.r3.s64 = r31.s64 + 268;
	// stw r30,272(r31)
	PPC_STORE_U32(r31.u32 + 272, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82be3bdc
	if (!cr6.lt) goto loc_82BE3BDC;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
	// b 0x82be3bdc
	goto loc_82BE3BDC;
loc_82BE3B7C:
	// lwz r11,288(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 288);
	// addi r3,r31,280
	ctx.r3.s64 = r31.s64 + 280;
	// stw r30,284(r31)
	PPC_STORE_U32(r31.u32 + 284, r30.u32);
	// cmplwi cr6,r11,2
	cr6.compare<uint32_t>(r11.u32, 2, xer);
	// bge cr6,0x82be3b9c
	if (!cr6.lt) goto loc_82BE3B9C;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE3B9C:
	// lwz r11,300(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 300);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// stw r30,296(r31)
	PPC_STORE_U32(r31.u32 + 296, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82be3bbc
	if (!cr6.lt) goto loc_82BE3BBC;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE3BBC:
	// lwz r11,312(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 312);
	// addi r3,r31,304
	ctx.r3.s64 = r31.s64 + 304;
	// stw r30,308(r31)
	PPC_STORE_U32(r31.u32 + 308, r30.u32);
	// cmplwi cr6,r11,16
	cr6.compare<uint32_t>(r11.u32, 16, xer);
	// bge cr6,0x82be3bdc
	if (!cr6.lt) goto loc_82BE3BDC;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE3BDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE3BE8"))) PPC_WEAK_FUNC(sub_82BE3BE8);
PPC_FUNC_IMPL(__imp__sub_82BE3BE8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be3c40
	if (cr0.eq) goto loc_82BE3C40;
	// rlwinm r10,r6,17,0,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 17) & 0xFFFE0000;
	// rlwinm r11,r6,0,23,23
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x100;
	// rlwimi r5,r4,4,24,27
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xF0) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFF0F);
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwinm r10,r6,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x200;
	// rlwimi r11,r5,9,15,22
	r11.u64 = (__builtin_rotateleft32(ctx.r5.u32, 9) & 0x1FE00) | (r11.u64 & 0xFFFFFFFFFFFE01FF);
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// rlwinm r11,r11,2,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// addi r3,r3,268
	ctx.r3.s64 = ctx.r3.s64 + 268;
	// rlwinm r11,r11,5,0,26
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// bl 0x82be3a80
	sub_82BE3A80(ctx, base);
	// b 0x82be3c60
	goto loc_82BE3C60;
loc_82BE3C40:
	// rlwimi r4,r5,4,24,27
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 4) & 0xF0) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFF0F);
	// addi r5,r3,80
	ctx.r5.s64 = ctx.r3.s64 + 80;
	// clrlwi r11,r4,24
	r11.u64 = ctx.r4.u32 & 0xFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r11,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r3,304
	ctx.r3.s64 = ctx.r3.s64 + 304;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82be3a80
	sub_82BE3A80(ctx, base);
loc_82BE3C60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE3C70"))) PPC_WEAK_FUNC(sub_82BE3C70);
PPC_FUNC_IMPL(__imp__sub_82BE3C70) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be43d8
	if (cr0.eq) goto loc_82BE43D8;
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// li r21,0
	r21.s64 = 0;
	// li r18,1
	r18.s64 = 1;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be3ce8
	if (cr0.eq) goto loc_82BE3CE8;
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addic. r10,r10,-8
	xer.ca = ctx.r10.u32 > 7;
	ctx.r10.s64 = ctx.r10.s64 + -8;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be3ce8
	if (cr0.eq) goto loc_82BE3CE8;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r10,r10,20,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// cmplwi r10,0
	cr0.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// mr r10,r18
	ctx.r10.u64 = r18.u64;
	// bne 0x82be3cec
	if (!cr0.eq) goto loc_82BE3CEC;
loc_82BE3CE8:
	// mr r10,r21
	ctx.r10.u64 = r21.u64;
loc_82BE3CEC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// addi r26,r31,108
	r26.s64 = r31.s64 + 108;
	// bne 0x82be3d14
	if (!cr0.eq) goto loc_82BE3D14;
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// clrlwi r11,r11,20
	r11.u64 = r11.u32 & 0xFFF;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// b 0x82be3dcc
	goto loc_82BE3DCC;
loc_82BE3D14:
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,108(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 108);
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// addi r10,r11,-8
	ctx.r10.s64 = r11.s64 + -8;
	// lwz r11,-8(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + -8);
	// rlwinm r11,r11,0,17,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x7000;
	// cmplwi cr6,r11,24576
	cr6.compare<uint32_t>(r11.u32, 24576, xer);
	// bge cr6,0x82be3d40
	if (!cr6.lt) goto loc_82BE3D40;
	// lwz r11,120(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82be3dd8
	if (cr6.eq) goto loc_82BE3DD8;
loc_82BE3D40:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be43d8
	if (cr6.lt) goto loc_82BE43D8;
	// lwz r11,4(r10)
	r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,120(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 120);
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// cmpwi cr6,r8,0
	cr6.compare<int32_t>(ctx.r8.s32, 0, xer);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// bne cr6,0x82be3d7c
	if (!cr6.eq) goto loc_82BE3D7C;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// addi r7,r7,-10900
	ctx.r7.s64 = ctx.r7.s64 + -10900;
	// lbzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// b 0x82be3d8c
	goto loc_82BE3D8C;
loc_82BE3D7C:
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// clrlwi r7,r9,24
	ctx.r7.u64 = ctx.r9.u32 & 0xFF;
	// addi r8,r8,-10900
	ctx.r8.s64 = ctx.r8.s64 + -10900;
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
loc_82BE3D8C:
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// rlwimi r11,r9,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, r11.u32);
	// ld r11,0(r10)
	r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwimi r11,r8,12,16,19
	r11.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xF000) | (r11.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r10,r9,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// andi. r10,r10,36863
	ctx.r10.u64 = ctx.r10.u64 & 36863;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// rlwinm r11,r11,0,21,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
loc_82BE3DCC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// bl 0x82be3a10
	sub_82BE3A10(ctx, base);
loc_82BE3DD8:
	// lwz r11,80(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 80);
	// stw r21,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r21.u32);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be43d8
	if (cr6.lt) goto loc_82BE43D8;
	// lwz r10,4(r26)
	ctx.r10.u64 = PPC_LOAD_U32(r26.u32 + 4);
	// clrlwi. r22,r30,24
	r22.u64 = r30.u32 & 0xFF;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// add r23,r10,r11
	r23.u64 = ctx.r10.u64 + r11.u64;
	// addi r27,r9,-1
	r27.s64 = ctx.r9.s64 + -1;
	// lwz r10,-8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -8);
	// rlwinm r11,r10,0,0,19
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r11,r11,4096
	r11.s64 = r11.s64 + 4096;
	// rlwinm r20,r10,20,29,31
	r20.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	// rlwimi r11,r9,0,20,16
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0xFFFFFFFFFFFF8FFF) | (r11.u64 & 0x7000);
	// stw r11,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, r11.u32);
	// beq 0x82be3e3c
	if (cr0.eq) goto loc_82BE3E3C;
	// rlwinm r10,r20,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r18,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (r18.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r10,r10,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | r11.u64;
	// rlwimi r10,r11,0,16,3
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r10.u64 & 0xFFF0000);
	// stw r10,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, ctx.r10.u32);
loc_82BE3E3C:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4394
	if (cr0.eq) goto loc_82BE4394;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r25,r21
	r25.u64 = r21.u64;
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// std r21,0(r11)
	PPC_STORE_U64(r11.u32 + 0, r21.u64);
	// std r21,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r21.u64);
	// std r21,8(r11)
	PPC_STORE_U64(r11.u32 + 8, r21.u64);
	// std r21,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, r21.u64);
	// std r21,16(r11)
	PPC_STORE_U64(r11.u32 + 16, r21.u64);
	// std r21,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, r21.u64);
	// std r21,24(r11)
	PPC_STORE_U64(r11.u32 + 24, r21.u64);
	// std r21,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, r21.u64);
	// beq cr6,0x82be3f04
	if (cr6.eq) goto loc_82BE3F04;
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82be3ea8
	if (cr6.eq) goto loc_82BE3EA8;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// clrlwi. r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be3ea8
	if (!cr0.eq) goto loc_82BE3EA8;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be3f04
	if (!cr0.eq) goto loc_82BE3F04;
loc_82BE3EA8:
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// addi r9,r31,16
	ctx.r9.s64 = r31.s64 + 16;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE3EB4:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be3eb4
	if (!cr0.eq) goto loc_82BE3EB4;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// addi r9,r31,48
	ctx.r9.s64 = r31.s64 + 48;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE3EE0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be3ee0
	if (!cr0.eq) goto loc_82BE3EE0;
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
loc_82BE3F04:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82be41dc
	if (cr6.eq) goto loc_82BE41DC;
	// lwz r29,0(r19)
	r29.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// rlwinm. r11,r29,0,13,13
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x40000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// clrlwi r28,r29,27
	r28.u64 = r29.u32 & 0x1F;
	// beq 0x82be3f40
	if (cr0.eq) goto loc_82BE3F40;
	// mr r30,r21
	r30.u64 = r21.u64;
loc_82BE3F20:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82be10d0
	sub_82BE10D0(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// blt cr6,0x82be3f20
	if (cr6.lt) goto loc_82BE3F20;
	// b 0x82be3f50
	goto loc_82BE3F50;
loc_82BE3F40:
	// mr r5,r19
	ctx.r5.u64 = r19.u64;
	// rlwinm r4,r29,20,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 20) & 0x3F;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82be10d0
	sub_82BE10D0(ctx, base);
loc_82BE3F50:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82be3f64
	if (!cr6.eq) goto loc_82BE3F64;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be3fac
	if (!cr0.eq) goto loc_82BE3FAC;
loc_82BE3F64:
	// rlwinm. r11,r29,0,20,20
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x800;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be3f98
	if (cr0.eq) goto loc_82BE3F98;
	// mr r30,r21
	r30.u64 = r21.u64;
	// clrlwi r29,r17,24
	r29.u64 = r17.u32 & 0xFF;
loc_82BE3F74:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82be1198
	sub_82BE1198(ctx, base);
	// addi r30,r30,1
	r30.s64 = r30.s64 + 1;
	// cmplwi cr6,r30,64
	cr6.compare<uint32_t>(r30.u32, 64, xer);
	// blt cr6,0x82be3f74
	if (cr6.lt) goto loc_82BE3F74;
	// b 0x82be3fac
	goto loc_82BE3FAC;
loc_82BE3F98:
	// mr r6,r19
	ctx.r6.u64 = r19.u64;
	// clrlwi r5,r17,24
	ctx.r5.u64 = r17.u32 & 0xFF;
	// rlwinm r4,r29,27,26,31
	ctx.r4.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 27) & 0x3F;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82be1198
	sub_82BE1198(ctx, base);
loc_82BE3FAC:
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be40a0
	if (cr0.eq) goto loc_82BE40A0;
	// cmplwi cr6,r28,24
	cr6.compare<uint32_t>(r28.u32, 24, xer);
	// blt cr6,0x82be3fd0
	if (cr6.lt) goto loc_82BE3FD0;
	// cmplwi cr6,r28,26
	cr6.compare<uint32_t>(r28.u32, 26, xer);
	// bgt cr6,0x82be3fd0
	if (cr6.gt) goto loc_82BE3FD0;
	// mr r25,r18
	r25.u64 = r18.u64;
	// b 0x82be40a0
	goto loc_82BE40A0;
loc_82BE3FD0:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// bne cr6,0x82be40a0
	if (!cr6.eq) goto loc_82BE40A0;
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be40a0
	if (cr0.eq) goto loc_82BE40A0;
	// clrlwi. r11,r24,24
	r11.u64 = r24.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be40a0
	if (!cr0.eq) goto loc_82BE40A0;
	// lwz r11,4(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 4);
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be4018
	if (!cr0.eq) goto loc_82BE4018;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// stw r27,8(r31)
	PPC_STORE_U32(r31.u32 + 8, r27.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r20,12(r31)
	PPC_STORE_U32(r31.u32 + 12, r20.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r18,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r18.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r3,r31,48
	ctx.r3.s64 = r31.s64 + 48;
	// b 0x82be4094
	goto loc_82BE4094;
loc_82BE4018:
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// beq cr6,0x82be40a0
	if (cr6.eq) goto loc_82BE40A0;
	// addi r3,r31,16
	ctx.r3.s64 = r31.s64 + 16;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE4034:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be4034
	if (!cr0.eq) goto loc_82BE4034;
	// addi r30,r31,48
	r30.s64 = r31.s64 + 48;
	// addi r11,r1,128
	r11.s64 = ctx.r1.s64 + 128;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE4064:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be4064
	if (!cr0.eq) goto loc_82BE4064;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
loc_82BE4094:
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_82BE40A0:
	// addi r30,r31,192
	r30.s64 = r31.s64 + 192;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r29,r31,224
	r29.s64 = r31.s64 + 224;
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE40C4:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be40c4
	if (!cr0.eq) goto loc_82BE40C4;
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82BE40E8:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blt cr6,0x82be40e8
	if (cr6.lt) goto loc_82BE40E8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bdf5b0
	sub_82BDF5B0(ctx, base);
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// blt cr6,0x82be41e8
	if (cr6.lt) goto loc_82BE41E8;
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,32
	ctx.r5.s64 = 32;
	// beq 0x82be4168
	if (cr0.eq) goto loc_82BE4168;
	// addi r4,r31,160
	ctx.r4.s64 = r31.s64 + 160;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r9,r29
	ctx.r9.u64 = r29.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE4144:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be4144
	if (!cr0.eq) goto loc_82BE4144;
	// b 0x82be419c
	goto loc_82BE419C;
loc_82BE4168:
	// addi r4,r31,128
	ctx.r4.s64 = r31.s64 + 128;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r11,r1,160
	r11.s64 = ctx.r1.s64 + 160;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// li r10,8
	ctx.r10.s64 = 8;
loc_82BE417C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be417c
	if (!cr0.eq) goto loc_82BE417C;
loc_82BE419C:
	// mr r11,r21
	r11.u64 = r21.u64;
loc_82BE41A0:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,32
	cr6.compare<uint32_t>(r11.u32, 32, xer);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// blt cr6,0x82be41a0
	if (cr6.lt) goto loc_82BE41A0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82bdf5b0
	sub_82BDF5B0(ctx, base);
	// cmplwi cr6,r3,256
	cr6.compare<uint32_t>(ctx.r3.u32, 256, xer);
	// bge cr6,0x82be41ec
	if (!cr6.lt) goto loc_82BE41EC;
	// b 0x82be41e8
	goto loc_82BE41E8;
loc_82BE41DC:
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be41ec
	if (cr0.eq) goto loc_82BE41EC;
loc_82BE41E8:
	// mr r25,r18
	r25.u64 = r18.u64;
loc_82BE41EC:
	// clrlwi. r11,r25,24
	r11.u64 = r25.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be42b0
	if (cr0.eq) goto loc_82BE42B0;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// li r5,32
	ctx.r5.s64 = 32;
	// beq cr6,0x82be4258
	if (cr6.eq) goto loc_82BE4258;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// addi r4,r31,16
	ctx.r4.s64 = r31.s64 + 16;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(r31.u32 + 12);
	// lwz r11,0(r26)
	r11.u64 = PPC_LOAD_U32(r26.u32 + 0);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + r11.u32);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// rlwimi r9,r8,0,16,3
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r9.u64 & 0xFFF0000);
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + r11.u32, ctx.r9.u32);
	// stw r21,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r21.u32);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = r31.s64 + 48;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// b 0x82be428c
	goto loc_82BE428C;
loc_82BE4258:
	// rlwinm r11,r20,1,0,30
	r11.u64 = __builtin_rotateleft64(r20.u32 | (r20.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,-8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -8);
	// li r4,0
	ctx.r4.s64 = 0;
	// slw r11,r9,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (r11.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFF000FFFF) | (r11.u64 & 0xFFF0000);
	// stw r11,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, r11.u32);
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BE428C:
	// li r5,32
	ctx.r5.s64 = 32;
	// stb r21,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r21.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BE42B0:
	// cmplwi cr6,r22,0
	cr6.compare<uint32_t>(r22.u32, 0, xer);
	// beq cr6,0x82be4394
	if (cr6.eq) goto loc_82BE4394;
	// lwz r11,4(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 4);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bne cr6,0x82be4394
	if (!cr6.eq) goto loc_82BE4394;
	// lwz r11,0(r19)
	r11.u64 = PPC_LOAD_U32(r19.u32 + 0);
	// clrlwi r11,r11,27
	r11.u64 = r11.u32 & 0x1F;
	// cmplwi cr6,r11,24
	cr6.compare<uint32_t>(r11.u32, 24, xer);
	// blt cr6,0x82be42dc
	if (cr6.lt) goto loc_82BE42DC;
	// cmplwi cr6,r11,26
	cr6.compare<uint32_t>(r11.u32, 26, xer);
	// ble cr6,0x82be42e0
	if (!cr6.gt) goto loc_82BE42E0;
loc_82BE42DC:
	// stb r18,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r18.u8);
loc_82BE42E0:
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r10,8
	ctx.r10.s64 = 8;
	// beq 0x82be4344
	if (cr0.eq) goto loc_82BE4344;
	// addi r11,r31,128
	r11.s64 = r31.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82BE42F8:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be42f8
	if (!cr0.eq) goto loc_82BE42F8;
	// addi r11,r31,192
	r11.s64 = r31.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82BE4324:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be4324
	if (!cr0.eq) goto loc_82BE4324;
	// b 0x82be4394
	goto loc_82BE4394;
loc_82BE4344:
	// addi r11,r31,160
	r11.s64 = r31.s64 + 160;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82BE434C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be434c
	if (!cr0.eq) goto loc_82BE434C;
	// addi r11,r31,224
	r11.s64 = r31.s64 + 224;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// li r10,8
	ctx.r10.s64 = 8;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - r11.s64;
loc_82BE4378:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// addic. r10,r10,-1
	xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// lwzx r7,r9,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + r11.u32);
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// bne 0x82be4378
	if (!cr0.eq) goto loc_82BE4378;
loc_82BE4394:
	// clrlwi. r11,r17,24
	r11.u64 = r17.u32 & 0xFF;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be43d8
	if (cr0.eq) goto loc_82BE43D8;
	// cmplwi cr6,r20,4
	cr6.compare<uint32_t>(r20.u32, 4, xer);
	// bge cr6,0x82be43c0
	if (!cr6.lt) goto loc_82BE43C0;
	// slw r11,r18,r20
	r11.u64 = r20.u8 & 0x20 ? 0 : (r18.u32 << (r20.u8 & 0x3F));
	// lwz r10,-8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -8);
	// rlwinm r11,r11,28,0,3
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0xF0000000;
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,4,31
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFF) | (r11.u64 & 0xFFFFFFFFF0000000);
	// stw r11,-8(r23)
	PPC_STORE_U32(r23.u32 + -8, r11.u32);
	// b 0x82be43d8
	goto loc_82BE43D8;
loc_82BE43C0:
	// addi r11,r20,-4
	r11.s64 = r20.s64 + -4;
	// lwz r10,-4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(r23.u32 + -4);
	// slw r11,r18,r11
	r11.u64 = r11.u8 & 0x20 ? 0 : (r18.u32 << (r11.u8 & 0x3F));
	// or r11,r11,r10
	r11.u64 = r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,0,29
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFC) | (r11.u64 & 0xFFFFFFFF00000003);
	// stw r11,-4(r23)
	PPC_STORE_U32(r23.u32 + -4, r11.u32);
loc_82BE43D8:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82BE43E0"))) PPC_WEAK_FUNC(sub_82BE43E0);
PPC_FUNC_IMPL(__imp__sub_82BE43E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r11,r11,16
	r11.s64 = r11.s64 + 16;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,19892(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 19892);
	// rlwinm. r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82be442c
	if (!cr0.eq) goto loc_82BE442C;
	// rlwimi r4,r5,1,27,30
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r5.u32, 1) & 0x1E) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFFE1);
	// addi r5,r11,80
	ctx.r5.s64 = r11.s64 + 80;
	// clrlwi r10,r4,27
	ctx.r10.u64 = ctx.r4.u32 & 0x1F;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// rlwimi r6,r10,8,0,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r6.u64 & 0xFFFFFFFF000000FF);
	// addi r3,r11,280
	ctx.r3.s64 = r11.s64 + 280;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x82be3a80
	sub_82BE3A80(ctx, base);
loc_82BE442C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4440"))) PPC_WEAK_FUNC(sub_82BE4440);
PPC_FUNC_IMPL(__imp__sub_82BE4440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r28,64
	r28.s64 = 64;
	// addi r27,r31,368
	r27.s64 = r31.s64 + 368;
	// addi r26,r31,10304
	r26.s64 = r31.s64 + 10304;
	// li r29,0
	r29.s64 = 0;
	// li r25,1
	r25.s64 = 1;
loc_82BE4464:
	// subfic r30,r29,63
	xer.ca = r29.u32 <= 63;
	r30.s64 = 63 - r29.s64;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rlwinm r24,r30,2,0,29
	r24.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be13d0
	sub_82BE13D0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r24
	ctx.r5.u64 = r24.u64;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be13d0
	sub_82BE13D0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or. r11,r4,r3
	r11.u64 = ctx.r4.u64 | ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4520
	if (cr0.eq) goto loc_82BE4520;
	// and. r5,r4,r3
	ctx.r5.u64 = ctx.r4.u64 & ctx.r3.u64;
	cr0.compare<int32_t>(ctx.r5.s32, 0, xer);
	// beq 0x82be4514
	if (cr0.eq) goto loc_82BE4514;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82BE44BC:
	// slw r11,r25,r6
	r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (r25.u32 << (ctx.r6.u8 & 0x3F));
	// and. r11,r11,r5
	r11.u64 = r11.u64 & ctx.r5.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4504
	if (cr0.eq) goto loc_82BE4504;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// add r11,r9,r11
	r11.u64 = ctx.r9.u64 + r11.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
loc_82BE44DC:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// lbz r24,0(r10)
	r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r24,r7
	ctx.r7.s64 = ctx.r7.s64 - r24.s64;
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82be44fc
	if (!cr0.eq) goto loc_82BE44FC;
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	cr6.compare<int32_t>(r11.s32, ctx.r8.s32, xer);
	// bne cr6,0x82be44dc
	if (!cr6.eq) goto loc_82BE44DC;
loc_82BE44FC:
	// cmpwi r7,0
	cr0.compare<int32_t>(ctx.r7.s32, 0, xer);
	// bne 0x82be4514
	if (!cr0.eq) goto loc_82BE4514;
loc_82BE4504:
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// cmplwi cr6,r9,64
	cr6.compare<uint32_t>(ctx.r9.u32, 64, xer);
	// blt cr6,0x82be44bc
	if (cr6.lt) goto loc_82BE44BC;
loc_82BE4514:
	// andc. r11,r4,r3
	r11.u64 = ctx.r4.u64 & ~ctx.r3.u64;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be452c
	if (!cr0.eq) goto loc_82BE452C;
	// mr r28,r30
	r28.u64 = r30.u64;
loc_82BE4520:
	// addi r29,r29,1
	r29.s64 = r29.s64 + 1;
	// cmplwi cr6,r29,64
	cr6.compare<uint32_t>(r29.u32, 64, xer);
	// blt cr6,0x82be4464
	if (cr6.lt) goto loc_82BE4464;
loc_82BE452C:
	// subfic r29,r28,64
	xer.ca = r28.u32 <= 64;
	r29.s64 = 64 - r28.s64;
	// stw r28,19936(r31)
	PPC_STORE_U32(r31.u32 + 19936, r28.u32);
	// stw r25,19932(r31)
	PPC_STORE_U32(r31.u32 + 19932, r25.u32);
	// addi r30,r31,19940
	r30.s64 = r31.s64 + 19940;
	// lwz r11,19948(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 19948);
	// cmplw cr6,r29,r11
	cr6.compare<uint32_t>(r29.u32, r11.u32, xer);
	// ble cr6,0x82be4558
	if (!cr6.gt) goto loc_82BE4558;
	// addi r5,r31,19900
	ctx.r5.s64 = r31.s64 + 19900;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE4558:
	// stw r29,4(r30)
	PPC_STORE_U32(r30.u32 + 4, r29.u32);
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BE4568"))) PPC_WEAK_FUNC(sub_82BE4568);
PPC_FUNC_IMPL(__imp__sub_82BE4568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be20e0
	sub_82BE20E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4580"))) PPC_WEAK_FUNC(sub_82BE4580);
PPC_FUNC_IMPL(__imp__sub_82BE4580) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be3be8
	sub_82BE3BE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4598"))) PPC_WEAK_FUNC(sub_82BE4598);
PPC_FUNC_IMPL(__imp__sub_82BE4598) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be43e0
	sub_82BE43E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE45A0"))) PPC_WEAK_FUNC(sub_82BE45A0);
PPC_FUNC_IMPL(__imp__sub_82BE45A0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,19888(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 19888);
	// addic. r30,r11,-1
	xer.ca = r11.u32 > 0;
	r30.s64 = r11.s64 + -1;
	cr0.compare<int32_t>(r30.s32, 0, xer);
	// stw r30,19888(r31)
	PPC_STORE_U32(r31.u32 + 19888, r30.u32);
	// bne 0x82be45d8
	if (!cr0.eq) goto loc_82BE45D8;
	// bl 0x82be36b0
	sub_82BE36B0(ctx, base);
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
loc_82BE45D8:
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE45F8"))) PPC_WEAK_FUNC(sub_82BE45F8);
PPC_FUNC_IMPL(__imp__sub_82BE45F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r4
	r28.u64 = ctx.r4.u64;
	// bl 0x82be2cd0
	sub_82BE2CD0(ctx, base);
	// addi r30,r31,16
	r30.s64 = r31.s64 + 16;
	// stw r28,19892(r31)
	PPC_STORE_U32(r31.u32 + 19892, r28.u32);
	// li r29,2
	r29.s64 = 2;
loc_82BE461C:
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82be3ae8
	sub_82BE3AE8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// addi r3,r30,352
	ctx.r3.s64 = r30.s64 + 352;
	// bl 0x82be07d0
	sub_82BE07D0(ctx, base);
	// addic. r29,r29,-1
	xer.ca = r29.u32 > 0;
	r29.s64 = r29.s64 + -1;
	cr0.compare<int32_t>(r29.s32, 0, xer);
	// addi r30,r30,9936
	r30.s64 = r30.s64 + 9936;
	// bne 0x82be461c
	if (!cr0.eq) goto loc_82BE461C;
	// li r11,0
	r11.s64 = 0;
	// stw r11,19912(r31)
	PPC_STORE_U32(r31.u32 + 19912, r11.u32);
	// lwz r10,19892(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 19892);
	// rlwinm r10,r10,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// subfic r10,r10,0
	xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// stw r11,19924(r31)
	PPC_STORE_U32(r31.u32 + 19924, r11.u32);
	// stw r11,19896(r31)
	PPC_STORE_U32(r31.u32 + 19896, r11.u32);
	// subfe r11,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + xer.ca < xer.ca);
	r11.u64 = ~ctx.r10.u64 + ctx.r10.u64 + xer.ca;
	xer.ca = temp.u8;
	// stw r11,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE4670"))) PPC_WEAK_FUNC(sub_82BE4670);
PPC_FUNC_IMPL(__imp__sub_82BE4670) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b24
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r27,r4
	r27.u64 = ctx.r4.u64;
	// addi r11,r28,3
	r11.s64 = r28.s64 + 3;
	// addi r31,r30,19908
	r31.s64 = r30.s64 + 19908;
	// lwz r10,19916(r30)
	ctx.r10.u64 = PPC_LOAD_U32(r30.u32 + 19916);
	// rlwinm r29,r11,30,2,31
	r29.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r29,r10
	cr6.compare<uint32_t>(r29.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be46b0
	if (!cr6.gt) goto loc_82BE46B0;
	// addi r5,r30,19900
	ctx.r5.s64 = r30.s64 + 19900;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE46B0:
	// stw r29,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r29.u32);
	// lwz r11,19900(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 19900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be46d0
	if (cr6.lt) goto loc_82BE46D0;
	// mr r5,r28
	ctx.r5.u64 = r28.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = r27.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_82BE46D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b74
	return;
}

__attribute__((alias("__imp__sub_82BE46D8"))) PPC_WEAK_FUNC(sub_82BE46D8);
PPC_FUNC_IMPL(__imp__sub_82BE46D8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// lis r11,-32243
	r11.s64 = -2113077248;
	// mr r27,r3
	r27.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r4,r11,-10884
	ctx.r4.s64 = r11.s64 + -10884;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// bl 0x831b5880
	sub_831B5880(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82be4710
	if (!cr0.eq) goto loc_82BE4710;
	// addi r28,r28,10
	r28.s64 = r28.s64 + 10;
loc_82BE4710:
	// mr r11,r28
	r11.u64 = r28.u64;
loc_82BE4714:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 0);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82be4714
	if (!cr6.eq) goto loc_82BE4714;
	// subf r11,r28,r11
	r11.s64 = r11.s64 - r28.s64;
	// lwz r10,19928(r27)
	ctx.r10.u64 = PPC_LOAD_U32(r27.u32 + 19928);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	r11.s64 = r11.s64 + -1;
	// li r26,0
	r26.s64 = 0;
	// rotlwi r29,r11,0
	r29.u64 = __builtin_rotateleft32(r11.u32, 0);
	// addi r31,r27,19920
	r31.s64 = r27.s64 + 19920;
	// addi r11,r29,3
	r11.s64 = r29.s64 + 3;
	// std r26,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, r26.u64);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r30.u32);
	// rlwinm r11,r11,30,2,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r29.u32);
	// addi r30,r11,2
	r30.s64 = r11.s64 + 2;
	// cmplw cr6,r30,r10
	cr6.compare<uint32_t>(r30.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be4770
	if (!cr6.gt) goto loc_82BE4770;
	// addi r5,r27,19900
	ctx.r5.s64 = r27.s64 + 19900;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be1900
	sub_82BE1900(ctx, base);
loc_82BE4770:
	// stw r30,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r30.u32);
	// lwz r11,19900(r27)
	r11.u64 = PPC_LOAD_U32(r27.u32 + 19900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// blt cr6,0x82be47a8
	if (cr6.lt) goto loc_82BE47A8;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + r11.u64;
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// addi r3,r11,8
	ctx.r3.s64 = r11.s64 + 8;
	// stw r26,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, r26.u32);
	// std r9,0(r11)
	PPC_STORE_U64(r11.u32 + 0, ctx.r9.u64);
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
loc_82BE47A8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BE47B0"))) PPC_WEAK_FUNC(sub_82BE47B0);
PPC_FUNC_IMPL(__imp__sub_82BE47B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	r11.s64 = 0;
	// lwz r10,19900(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19900);
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r31,r11
	r31.u64 = r11.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r29,r11
	r29.u64 = r11.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// cmpwi cr6,r10,0
	cr6.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// blt cr6,0x82be481c
	if (cr6.lt) goto loc_82BE481C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82be3760
	sub_82BE3760(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82be481c
	if (cr0.lt) goto loc_82BE481C;
	// lwz r31,112(r1)
	r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r29,92(r1)
	r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82BE481C:
	// cmplwi cr6,r30,0
	cr6.compare<uint32_t>(r30.u32, 0, xer);
	// beq cr6,0x82be4828
	if (cr6.eq) goto loc_82BE4828;
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
loc_82BE4828:
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82be4834
	if (cr6.eq) goto loc_82BE4834;
	// stw r29,0(r28)
	PPC_STORE_U32(r28.u32 + 0, r29.u32);
loc_82BE4834:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE4840"))) PPC_WEAK_FUNC(sub_82BE4840);
PPC_FUNC_IMPL(__imp__sub_82BE4840) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// mr r28,r5
	r28.u64 = ctx.r5.u64;
	// mr r26,r6
	r26.u64 = ctx.r6.u64;
	// lwz r3,19900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19900);
	// cmpwi cr6,r3,0
	cr6.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt cr6,0x82be4910
	if (cr6.lt) goto loc_82BE4910;
	// li r11,0
	r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, r11.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, r11.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, r11.u32);
	// bl 0x82be3760
	sub_82BE3760(ctx, base);
	// stw r3,19900(r31)
	PPC_STORE_U32(r31.u32 + 19900, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82be4910
	if (cr0.lt) goto loc_82BE4910;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r30,112(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// add r27,r5,r30
	r27.u64 = ctx.r5.u64 + r30.u64;
	// cmplw cr6,r27,r28
	cr6.compare<uint32_t>(r27.u32, r28.u32, xer);
	// ble cr6,0x82be48cc
	if (!cr6.gt) goto loc_82BE48CC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82be4910
	goto loc_82BE4910;
loc_82BE48CC:
	// add r4,r30,r29
	ctx.r4.u64 = r30.u64 + r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82bde560
	sub_82BDE560(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82bde560
	sub_82BDE560(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be3760
	sub_82BE3760(ctx, base);
	// stw r3,19900(r31)
	PPC_STORE_U32(r31.u32 + 19900, ctx.r3.u32);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// blt 0x82be490c
	if (cr0.lt) goto loc_82BE490C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82be490c
	if (cr6.eq) goto loc_82BE490C;
	// stw r27,0(r26)
	PPC_STORE_U32(r26.u32 + 0, r27.u32);
loc_82BE490C:
	// lwz r3,19900(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 19900);
loc_82BE4910:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BE4918"))) PPC_WEAK_FUNC(sub_82BE4918);
PPC_FUNC_IMPL(__imp__sub_82BE4918) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82be3c70
	sub_82BE3C70(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82be3998
	sub_82BE3998(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4978"))) PPC_WEAK_FUNC(sub_82BE4978);
PPC_FUNC_IMPL(__imp__sub_82BE4978) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// cntlzw r11,r5
	r11.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82be3c70
	sub_82BE3C70(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82be3998
	sub_82BE3998(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE49E0"))) PPC_WEAK_FUNC(sub_82BE49E0);
PPC_FUNC_IMPL(__imp__sub_82BE49E0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// cntlzw r11,r28
	r11.u64 = r28.u32 == 0 ? 32 : __builtin_clz(r28.u32);
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// mr r7,r29
	ctx.r7.u64 = r29.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82be3c70
	sub_82BE3C70(ctx, base);
	// mr r11,r30
	r11.u64 = r30.u64;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// rlwimi r11,r28,6,25,25
	r11.u64 = (__builtin_rotateleft32(r28.u32, 6) & 0x40) | (r11.u64 & 0xFFFFFFFFFFFFFFBF);
	// addi r30,r31,80
	r30.s64 = r31.s64 + 80;
	// andi. r11,r11,79
	r11.u64 = r11.u64 & 79;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// rlwimi r10,r11,8,0,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0xFFFFFF00) | (ctx.r10.u64 & 0xFFFFFFFF000000FF);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// rlwimi r11,r10,8,0,19
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFF000) | (r11.u64 & 0xFFFFFFFF00000FFF);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, r11.u32);
	// addi r3,r31,292
	ctx.r3.s64 = r31.s64 + 292;
	// bl 0x82be3a80
	sub_82BE3A80(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = r30.u64;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82be3998
	sub_82BE3998(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE4A68"))) PPC_WEAK_FUNC(sub_82BE4A68);
PPC_FUNC_IMPL(__imp__sub_82BE4A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x82be3c70
	sub_82BE3C70(ctx, base);
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,96
	ctx.r3.s64 = r31.s64 + 96;
	// bl 0x82be3998
	sub_82BE3998(ctx, base);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// rlwinm. r11,r11,30,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be4af8
	if (!cr0.eq) goto loc_82BE4AF8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = r30.u64;
	// bl 0x82bde640
	sub_82BDE640(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// beq 0x82be4af8
	if (cr0.eq) goto loc_82BE4AF8;
	// lwz r11,316(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 316);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	r11.s64 = r11.s64 + 1;
	// stw r11,316(r31)
	PPC_STORE_U32(r31.u32 + 316, r11.u32);
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// clrlwi r11,r11,26
	r11.u64 = r11.u32 & 0x3F;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r10,r11,320
	ctx.r10.s64 = r11.s64 + 320;
	// lbz r10,320(r11)
	ctx.r10.u64 = PPC_LOAD_U8(r11.u32 + 320);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stb r10,320(r11)
	PPC_STORE_U8(r11.u32 + 320, ctx.r10.u8);
loc_82BE4AF8:
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4B18"))) PPC_WEAK_FUNC(sub_82BE4B18);
PPC_FUNC_IMPL(__imp__sub_82BE4B18) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4b94
	if (cr0.eq) goto loc_82BE4B94;
	// lbz r11,124(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 124);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be4b94
	if (cr0.eq) goto loc_82BE4B94;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, r11.u64);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, r11.u32);
	// lwz r11,88(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r10,6
	ctx.r10.u64 = ctx.r10.u32 & 0x3FFFFFF;
	// rlwimi r11,r9,25,3,7
	r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 25) & 0x1F000000) | (r11.u64 & 0xFFFFFFFFE0FFFFFF);
	// oris r10,r10,51200
	ctx.r10.u64 = ctx.r10.u64 | 3355443200;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82be4a68
	sub_82BE4A68(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be0a48
	sub_82BE0A48(ctx, base);
loc_82BE4B94:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4BA8"))) PPC_WEAK_FUNC(sub_82BE4BA8);
PPC_FUNC_IMPL(__imp__sub_82BE4BA8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// lwz r11,19892(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 19892);
	// rlwinm. r11,r11,26,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 26) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4bd0
	if (cr0.eq) goto loc_82BE4BD0;
	// bl 0x82be4440
	sub_82BE4440(ctx, base);
	// b 0x82be4be4
	goto loc_82BE4BE4;
loc_82BE4BD0:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r31
	r11.u64 = r11.u64 + r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// bl 0x82be20e0
	sub_82BE20E0(ctx, base);
loc_82BE4BE4:
	// li r11,1
	r11.s64 = 1;
	// stw r11,19904(r31)
	PPC_STORE_U32(r31.u32 + 19904, r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4C00"))) PPC_WEAK_FUNC(sub_82BE4C00);
PPC_FUNC_IMPL(__imp__sub_82BE4C00) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be45a0
	sub_82BE45A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C08"))) PPC_WEAK_FUNC(sub_82BE4C08);
PPC_FUNC_IMPL(__imp__sub_82BE4C08) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be45f8
	sub_82BE45F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C10"))) PPC_WEAK_FUNC(sub_82BE4C10);
PPC_FUNC_IMPL(__imp__sub_82BE4C10) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be4670
	sub_82BE4670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C18"))) PPC_WEAK_FUNC(sub_82BE4C18);
PPC_FUNC_IMPL(__imp__sub_82BE4C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be4918
	sub_82BE4918(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C30"))) PPC_WEAK_FUNC(sub_82BE4C30);
PPC_FUNC_IMPL(__imp__sub_82BE4C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be4978
	sub_82BE4978(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C48"))) PPC_WEAK_FUNC(sub_82BE4C48);
PPC_FUNC_IMPL(__imp__sub_82BE4C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be49e0
	sub_82BE49E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C60"))) PPC_WEAK_FUNC(sub_82BE4C60);
PPC_FUNC_IMPL(__imp__sub_82BE4C60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be4a68
	sub_82BE4A68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C78"))) PPC_WEAK_FUNC(sub_82BE4C78);
PPC_FUNC_IMPL(__imp__sub_82BE4C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be46d8
	sub_82BE46D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C80"))) PPC_WEAK_FUNC(sub_82BE4C80);
PPC_FUNC_IMPL(__imp__sub_82BE4C80) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be4ba8
	sub_82BE4BA8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C88"))) PPC_WEAK_FUNC(sub_82BE4C88);
PPC_FUNC_IMPL(__imp__sub_82BE4C88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be4840
	sub_82BE4840(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4C90"))) PPC_WEAK_FUNC(sub_82BE4C90);
PPC_FUNC_IMPL(__imp__sub_82BE4C90) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,19900(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19900);
	// cmpwi cr6,r11,0
	cr6.compare<int32_t>(r11.s32, 0, xer);
	// bge cr6,0x82be4cb0
	if (!cr6.lt) goto loc_82BE4CB0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be4cc8
	goto loc_82BE4CC8;
loc_82BE4CB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82be47b0
	sub_82BE47B0(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,84(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
loc_82BE4CC8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4CD8"))) PPC_WEAK_FUNC(sub_82BE4CD8);
PPC_FUNC_IMPL(__imp__sub_82BE4CD8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b20
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// li r27,0
	r27.s64 = 0;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// stw r27,120(r31)
	PPC_STORE_U32(r31.u32 + 120, r27.u32);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,28,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 28) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4dc4
	if (cr0.eq) goto loc_82BE4DC4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r28,r11,20,28,31
	r28.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 20) & 0xF;
	// slw r29,r10,r28
	r29.u64 = r28.u8 & 0x20 ? 0 : (ctx.r10.u32 << (r28.u8 & 0x3F));
	// andi. r11,r29,28664
	r11.u64 = r29.u64 & 28664;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be4d54
	if (cr0.eq) goto loc_82BE4D54;
	// lwz r26,100(r31)
	r26.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// bl 0x82be4b18
	sub_82BE4B18(ctx, base);
	// lwz r11,100(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 100);
	// subf. r10,r26,r11
	ctx.r10.s64 = r11.s64 - r26.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be4d54
	if (cr0.eq) goto loc_82BE4D54;
	// andi. r11,r29,24702
	r11.u64 = r29.u64 & 24702;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// beq 0x82be4d54
	if (cr0.eq) goto loc_82BE4D54;
	// lwz r11,0(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 0);
	// add r10,r11,r10
	ctx.r10.u64 = r11.u64 + ctx.r10.u64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,0(r30)
	PPC_STORE_U32(r30.u32 + 0, ctx.r10.u32);
loc_82BE4D54:
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// lwz r11,19892(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 19892);
	// not r11,r11
	r11.u64 = ~r11.u64;
	// rlwinm. r11,r11,27,31,31
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 27) & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be4dc4
	if (cr0.eq) goto loc_82BE4DC4;
	// cmplwi cr6,r28,12
	cr6.compare<uint32_t>(r28.u32, 12, xer);
	// bne cr6,0x82be4dc4
	if (!cr6.eq) goto loc_82BE4DC4;
	// lwz r11,4(r30)
	r11.u64 = PPC_LOAD_U32(r30.u32 + 4);
	// rlwinm. r11,r11,0,23,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x100;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be4dc4
	if (!cr0.eq) goto loc_82BE4DC4;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r27,4(r31)
	PPC_STORE_U32(r31.u32 + 4, r27.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r27,124(r31)
	PPC_STORE_U8(r31.u32 + 124, r27.u8);
	// addi r3,r31,128
	ctx.r3.s64 = r31.s64 + 128;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,160
	ctx.r3.s64 = r31.s64 + 160;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,192
	ctx.r3.s64 = r31.s64 + 192;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,224
	ctx.r3.s64 = r31.s64 + 224;
	// bl 0x831b0ba0
	sub_831B0BA0(ctx, base);
loc_82BE4DC4:
	// addi r5,r31,80
	ctx.r5.s64 = r31.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,108
	ctx.r3.s64 = r31.s64 + 108;
	// bl 0x82be3a10
	sub_82BE3A10(ctx, base);
	// lwz r11,112(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 112);
	// addi r3,r11,-1
	ctx.r3.s64 = r11.s64 + -1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x831b0b70
	return;
}

__attribute__((alias("__imp__sub_82BE4DE8"))) PPC_WEAK_FUNC(sub_82BE4DE8);
PPC_FUNC_IMPL(__imp__sub_82BE4DE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r3,r11,16
	ctx.r3.s64 = r11.s64 + 16;
	// b 0x82be4cd8
	sub_82BE4CD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4E00"))) PPC_WEAK_FUNC(sub_82BE4E00);
PPC_FUNC_IMPL(__imp__sub_82BE4E00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mulli r11,r11,9936
	r11.s64 = r11.s64 * 9936;
	// add r11,r11,r3
	r11.u64 = r11.u64 + ctx.r3.u64;
	// addi r31,r11,16
	r31.s64 = r11.s64 + 16;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be4b18
	sub_82BE4B18(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be2658
	sub_82BE2658(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE4E48"))) PPC_WEAK_FUNC(sub_82BE4E48);
PPC_FUNC_IMPL(__imp__sub_82BE4E48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82be4c90
	sub_82BE4C90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82BE4E50"))) PPC_WEAK_FUNC(sub_82BE4E50);
PPC_FUNC_IMPL(__imp__sub_82BE4E50) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b10
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r24,r5
	r24.u64 = ctx.r5.u64;
	// rlwinm r10,r6,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0xFF;
	// mullw r9,r24,r6
	ctx.r9.s64 = int64_t(r24.s32) * int64_t(ctx.r6.s32);
	// lbz r11,11832(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11832);
	// lbz r25,12528(r31)
	r25.u64 = PPC_LOAD_U8(r31.u32 + 12528);
	// stb r10,12528(r31)
	PPC_STORE_U8(r31.u32 + 12528, ctx.r10.u8);
	// mr r22,r4
	r22.u64 = ctx.r4.u64;
	// rlwinm r23,r9,30,2,31
	r23.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// beq cr6,0x82be4ea0
	if (cr6.eq) goto loc_82BE4EA0;
	// lwz r11,12696(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12696);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be4ea0
	if (cr6.eq) goto loc_82BE4EA0;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_82BE4EA0:
	// ld r11,24(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// li r26,0
	r26.s64 = 0;
	// rldicr r11,r11,0,62
	r11.u64 = __builtin_rotateleft64(r11.u64, 0) & 0xFFFFFFFFFFFFFFFE;
	// std r11,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r11.u64);
	// mr r28,r11
	r28.u64 = r11.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r27,32(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r30,16(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x82be4ee0
	if (cr6.eq) goto loc_82BE4EE0;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_82BE4EE0:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x82be4f00
	if (cr6.eq) goto loc_82BE4F00;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_82BE4F00:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x82be4fe0
	if (cr6.eq) goto loc_82BE4FE0;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be4f24
	if (cr6.eq) goto loc_82BE4F24;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfadf8
	sub_82BFADF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE4F24:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be4f48
	if (cr6.eq) goto loc_82BE4F48;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf98a0
	sub_82BF98A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE4F48:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be4f68
	if (cr6.eq) goto loc_82BE4F68;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE4F68:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be4f88
	if (cr6.eq) goto loc_82BE4F88;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE4F88:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be4fb4
	if (cr6.eq) goto loc_82BE4FB4;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE4FB4:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be4fdc
	if (cr6.eq) goto loc_82BE4FDC;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE4FDC:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_82BE4FE0:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x82be5030
	if (cr6.eq) goto loc_82BE5030;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5000
	if (cr6.eq) goto loc_82BE5000;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9e78
	sub_82BF9E78(ctx, base);
loc_82BE5000:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be502c
	if (cr6.eq) goto loc_82BE502C;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE502C:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_82BE5030:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x82be50cc
	if (cr6.eq) goto loc_82BE50CC;
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5058
	if (cr6.eq) goto loc_82BE5058;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5058:
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5080
	if (cr6.eq) goto loc_82BE5080;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5080:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be50a0
	if (cr6.eq) goto loc_82BE50A0;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9cf8
	sub_82BF9CF8(ctx, base);
loc_82BE50A0:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be50c8
	if (cr6.eq) goto loc_82BE50C8;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE50C8:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_82BE50CC:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r25,12528(r31)
	PPC_STORE_U8(r31.u32 + 12528, r25.u8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82be50ec
	if (!cr6.gt) goto loc_82BE50EC;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE50EC:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r23
	ctx.r4.u64 = r23.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beb0f0
	sub_82BEB0F0(ctx, base);
	// mr. r28,r3
	r28.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r28.s32, 0, xer);
	// bne 0x82be5110
	if (!cr0.eq) goto loc_82BE5110;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be52e0
	goto loc_82BE52E0;
loc_82BE5110:
	// li r11,8450
	r11.s64 = 8450;
	// mr r10,r26
	ctx.r10.u64 = r26.u64;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// lis r11,5
	r11.s64 = 327680;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,18618
	ctx.r8.u64 = r11.u64 | 18618;
	// mr r7,r26
	ctx.r7.u64 = r26.u64;
	// rlwinm r11,r28,12,20,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r10,r11,512
	ctx.r10.s64 = r11.s64 + 512;
	// mr r5,r26
	ctx.r5.u64 = r26.u64;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r28,3
	r11.u64 = r28.u32 & 0x1FFFFFFF;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r10,r4,2
	ctx.r10.u64 = ctx.r4.u64 | 2;
	// ori r11,r11,3
	r11.u64 = r11.u64 | 3;
	// rlwimi r10,r23,2,6,29
	ctx.r10.u64 = (__builtin_rotateleft32(r23.u32, 2) & 0x3FFFFFC) | (ctx.r10.u64 & 0xFFFFFFFFFC000003);
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mr r4,r26
	ctx.r4.u64 = r26.u64;
	// ori r8,r8,20480
	ctx.r8.u64 = ctx.r8.u64 | 20480;
	// mr r9,r26
	ctx.r9.u64 = r26.u64;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// stwu r5,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// stwu r10,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	r30.u32 = ea;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// stwu r26,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r26.u32);
	r30.u32 = ea;
	// lbz r11,12187(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12187);
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r10,12122(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12122);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// rlwimi r10,r11,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r29,r10,23
	r29.u64 = ctx.r10.u32 & 0x1FF;
	// rlwinm r29,r29,0,26,23
	r29.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x82be51f8
	if (!cr0.eq) goto loc_82BE51F8;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// clrlwi r10,r22,26
	ctx.r10.u64 = r22.u32 & 0x3F;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82be52c4
	goto loc_82BE52C4;
loc_82BE51F8:
	// lwz r11,13256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be5218
	if (!cr6.gt) goto loc_82BE5218;
	// bl 0x82beba08
	sub_82BEBA08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BE5218:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// rlwinm r6,r24,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r7,r22,26
	ctx.r7.u64 = r22.u32 & 0x3F;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r29,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
loc_82BE52C4:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// stw r11,13444(r31)
	PPC_STORE_U32(r31.u32 + 13444, r11.u32);
	// stw r28,13448(r31)
	PPC_STORE_U32(r31.u32 + 13448, r28.u32);
	// stw r23,13456(r31)
	PPC_STORE_U32(r31.u32 + 13456, r23.u32);
loc_82BE52E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b60
	return;
}

__attribute__((alias("__imp__sub_82BE52E8"))) PPC_WEAK_FUNC(sub_82BE52E8);
PPC_FUNC_IMPL(__imp__sub_82BE52E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r11,13444(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 13444);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE52F8"))) PPC_WEAK_FUNC(sub_82BE52F8);
PPC_FUNC_IMPL(__imp__sub_82BE52F8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	r29.u64 = ctx.r7.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r6,r29
	ctx.r6.u64 = r29.u64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r5
	r30.u64 = ctx.r5.u64;
	// bl 0x82be4e50
	sub_82BE4E50(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq 0x82be5338
	if (cr0.eq) goto loc_82BE5338;
	// mullw r5,r30,r29
	ctx.r5.s64 = int64_t(r30.s32) * int64_t(r29.s32);
	// mr r4,r28
	ctx.r4.u64 = r28.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,13444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13444);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82BE5338:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE5340"))) PPC_WEAK_FUNC(sub_82BE5340);
PPC_FUNC_IMPL(__imp__sub_82BE5340) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r15{};
	PPCRegister r16{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0af4
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r8
	r24.u64 = ctx.r8.u64;
	// mullw r11,r6,r9
	r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r21,r4
	r21.u64 = ctx.r4.u64;
	// mr r20,r5
	r20.u64 = ctx.r5.u64;
	// mr r23,r7
	r23.u64 = ctx.r7.u64;
	// mr r17,r10
	r17.u64 = ctx.r10.u64;
	// rlwinm. r22,r24,0,29,29
	r22.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(r22.s32, 0, xer);
	// rlwinm r19,r11,30,2,31
	r19.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x82be537c
	if (cr0.eq) goto loc_82BE537C;
	// mr r18,r23
	r18.u64 = r23.u64;
	// b 0x82be5384
	goto loc_82BE5384;
loc_82BE537C:
	// addi r11,r23,1
	r11.s64 = r23.s64 + 1;
	// rlwinm r18,r11,31,1,31
	r18.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 31) & 0x7FFFFFFF;
loc_82BE5384:
	// lbz r11,11832(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 11832);
	// rlwinm r10,r9,30,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0xFF;
	// lbz r26,12528(r31)
	r26.u64 = PPC_LOAD_U8(r31.u32 + 12528);
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// stb r10,12528(r31)
	PPC_STORE_U8(r31.u32 + 12528, ctx.r10.u8);
	// beq cr6,0x82be53b4
	if (cr6.eq) goto loc_82BE53B4;
	// lwz r11,12696(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 12696);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be53b4
	if (cr6.eq) goto loc_82BE53B4;
	// ld r11,16(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// oris r11,r11,8
	r11.u64 = r11.u64 | 524288;
	// std r11,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r11.u64);
loc_82BE53B4:
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r25,0
	r25.s64 = 0;
	// ld r27,32(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r28,24(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r30,16(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x82be53e8
	if (cr6.eq) goto loc_82BE53E8;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r25,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r25.u64);
loc_82BE53E8:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x82be5408
	if (cr6.eq) goto loc_82BE5408;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r25,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r25.u64);
loc_82BE5408:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x82be54e8
	if (cr6.eq) goto loc_82BE54E8;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be542c
	if (cr6.eq) goto loc_82BE542C;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfadf8
	sub_82BFADF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE542C:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5450
	if (cr6.eq) goto loc_82BE5450;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf98a0
	sub_82BF98A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE5450:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5470
	if (cr6.eq) goto loc_82BE5470;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5470:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5490
	if (cr6.eq) goto loc_82BE5490;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5490:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be54bc
	if (cr6.eq) goto loc_82BE54BC;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE54BC:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be54e4
	if (cr6.eq) goto loc_82BE54E4;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE54E4:
	// std r25,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r25.u64);
loc_82BE54E8:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x82be5538
	if (cr6.eq) goto loc_82BE5538;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5508
	if (cr6.eq) goto loc_82BE5508;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9e78
	sub_82BF9E78(ctx, base);
loc_82BE5508:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5534
	if (cr6.eq) goto loc_82BE5534;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5534:
	// std r25,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r25.u64);
loc_82BE5538:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x82be55d4
	if (cr6.eq) goto loc_82BE55D4;
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5560
	if (cr6.eq) goto loc_82BE5560;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5560:
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5588
	if (cr6.eq) goto loc_82BE5588;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5588:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be55a8
	if (cr6.eq) goto loc_82BE55A8;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9cf8
	sub_82BF9CF8(ctx, base);
loc_82BE55A8:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be55d0
	if (cr6.eq) goto loc_82BE55D0;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE55D0:
	// std r25,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r25.u64);
loc_82BE55D4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r30,48(r31)
	r30.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// stb r26,12528(r31)
	PPC_STORE_U8(r31.u32 + 12528, r26.u8);
	// cmplw cr6,r30,r11
	cr6.compare<uint32_t>(r30.u32, r11.u32, xer);
	// ble cr6,0x82be55f4
	if (!cr6.gt) goto loc_82BE55F4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE55F4:
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r19
	ctx.r4.u64 = r19.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beb0f0
	sub_82BEB0F0(ctx, base);
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r18
	ctx.r4.u64 = r18.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82beb0f0
	sub_82BEB0F0(ctx, base);
	// mr r26,r3
	r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	cr6.compare<uint32_t>(r28.u32, 0, xer);
	// beq cr6,0x82be583c
	if (cr6.eq) goto loc_82BE583C;
	// cmplwi cr6,r26,0
	cr6.compare<uint32_t>(r26.u32, 0, xer);
	// beq cr6,0x82be583c
	if (cr6.eq) goto loc_82BE583C;
	// li r11,8450
	r11.s64 = 8450;
	// lis r10,5
	ctx.r10.s64 = 327680;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// mr r9,r25
	ctx.r9.u64 = r25.u64;
	// ori r8,r10,18618
	ctx.r8.u64 = ctx.r10.u64 | 18618;
	// mr r7,r25
	ctx.r7.u64 = r25.u64;
	// mr r6,r25
	ctx.r6.u64 = r25.u64;
	// rlwinm r11,r28,12,20,31
	r11.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 12) & 0xFFF;
	// stwu r20,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r20.u32);
	r30.u32 = ea;
	// mr r5,r25
	ctx.r5.u64 = r25.u64;
	// addi r10,r11,512
	ctx.r10.s64 = r11.s64 + 512;
	// clrlwi r11,r28,3
	r11.u64 = r28.u32 & 0x1FFFFFFF;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r4,4096
	ctx.r4.s64 = 268435456;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r4,r4,2
	ctx.r4.u64 = ctx.r4.u64 | 2;
	// ori r8,r11,3
	ctx.r8.u64 = r11.u64 | 3;
	// rlwimi r4,r19,2,6,29
	ctx.r4.u64 = (__builtin_rotateleft32(r19.u32, 2) & 0x3FFFFFC) | (ctx.r4.u64 & 0xFFFFFFFFFC000003);
	// lis r11,2
	r11.s64 = 131072;
	// stwu r9,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r30.u32 = ea;
	// mr r3,r25
	ctx.r3.u64 = r25.u64;
	// ori r20,r11,20480
	r20.u64 = r11.u64 | 20480;
	// rlwinm r11,r26,12,20,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xFFF;
	// mr r16,r25
	r16.u64 = r25.u64;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// stwu r7,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	r30.u32 = ea;
	// clrlwi r9,r26,3
	ctx.r9.u64 = r26.u32 & 0x1FFFFFFF;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// mr r15,r25
	r15.u64 = r25.u64;
	// add r25,r11,r9
	r25.u64 = r11.u64 + ctx.r9.u64;
	// clrlwi r11,r21,26
	r11.u64 = r21.u32 & 0x3F;
	// stwu r6,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	r30.u32 = ea;
	// rlwinm r9,r23,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r10,r24,30,0,1
	ctx.r10.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 30) & 0xC0000000;
	// or r29,r11,r9
	r29.u64 = r11.u64 | ctx.r9.u64;
	// clrlwi r7,r23,8
	ctx.r7.u64 = r23.u32 & 0xFFFFFF;
	// cmpwi cr6,r22,0
	cr6.compare<int32_t>(r22.s32, 0, xer);
	// stwu r5,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	r30.u32 = ea;
	// or r27,r7,r10
	r27.u64 = ctx.r7.u64 | ctx.r10.u64;
	// stwu r8,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	r30.u32 = ea;
	// stwu r4,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	r30.u32 = ea;
	// stwu r20,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r20.u32);
	r30.u32 = ea;
	// stwu r3,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r30.u32 = ea;
	// stwu r16,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r16.u32);
	r30.u32 = ea;
	// stwu r15,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r15.u32);
	r30.u32 = ea;
	// lbz r11,12187(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12187);
	// add r9,r11,r31
	ctx.r9.u64 = r11.u64 + r31.u64;
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbz r9,12122(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 12122);
	// clrlwi r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	// rlwimi r9,r11,8,23,23
	ctx.r9.u64 = (__builtin_rotateleft32(r11.u32, 8) & 0x100) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFEFF);
	// andi. r24,r9,319
	r24.u64 = ctx.r9.u64 & 319;
	cr0.compare<int32_t>(r24.s32, 0, xer);
	// beq cr6,0x82be5714
	if (cr6.eq) goto loc_82BE5714;
	// rlwinm r11,r23,1,8,30
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 1) & 0xFFFFFE;
	// ori r29,r29,2048
	r29.u64 = r29.u64 | 2048;
	// or r27,r11,r10
	r27.u64 = r11.u64 | ctx.r10.u64;
loc_82BE5714:
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be5744
	if (!cr0.eq) goto loc_82BE5744;
	// lis r11,-16381
	r11.s64 = -1073545216;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// stwu r24,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r24.u32);
	r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r29.u32);
	r30.u32 = ea;
	// stwu r25,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r25.u32);
	r30.u32 = ea;
	// mr r11,r30
	r11.u64 = r30.u64;
	// stwu r27,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r27.u32);
	r11.u32 = ea;
	// b 0x82be5808
	goto loc_82BE5808;
loc_82BE5744:
	// lwz r11,13256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be5764
	if (!cr6.gt) goto loc_82BE5764;
	// bl 0x82beba08
	sub_82BEBA08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BE5764:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r24,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r24.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r5.u32 = ea;
	// stwu r25,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r25.u32);
	ctx.r5.u32 = ea;
	// stwu r27,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r27.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_82BE5808:
	// ld r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,308(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// std r10,24(r31)
	PPC_STORE_U64(r31.u32 + 24, ctx.r10.u64);
	// stw r11,13444(r31)
	PPC_STORE_U32(r31.u32 + 13444, r11.u32);
	// stw r28,13448(r31)
	PPC_STORE_U32(r31.u32 + 13448, r28.u32);
	// stw r26,13452(r31)
	PPC_STORE_U32(r31.u32 + 13452, r26.u32);
	// stw r19,13456(r31)
	PPC_STORE_U32(r31.u32 + 13456, r19.u32);
	// stw r18,13460(r31)
	PPC_STORE_U32(r31.u32 + 13460, r18.u32);
	// stw r28,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r28.u32);
	// stw r26,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r26.u32);
	// b 0x82be5854
	goto loc_82BE5854;
loc_82BE583C:
	// lwz r11,308(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// stw r30,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r30.u32);
	// stw r25,0(r17)
	PPC_STORE_U32(r17.u32 + 0, r25.u32);
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
loc_82BE5854:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x831b0b44
	return;
}

__attribute__((alias("__imp__sub_82BE5860"))) PPC_WEAK_FUNC(sub_82BE5860);
PPC_FUNC_IMPL(__imp__sub_82BE5860) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b18
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,260(r1)
	r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// mr r25,r8
	r25.u64 = ctx.r8.u64;
	// mr r24,r10
	r24.u64 = ctx.r10.u64;
	// addi r11,r1,96
	r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r9,r30
	ctx.r9.u64 = r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, r11.u32);
	// mr r8,r26
	ctx.r8.u64 = r26.u64;
	// neg r5,r29
	ctx.r5.s64 = -r29.s64;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r28,r6
	r28.u64 = ctx.r6.u64;
	// mr r27,r7
	r27.u64 = ctx.r7.u64;
	// bl 0x82be5340
	sub_82BE5340(ctx, base);
	// cmpwi r3,0
	cr0.compare<int32_t>(ctx.r3.s32, 0, xer);
	// bne 0x82be58f8
	if (!cr0.eq) goto loc_82BE58F8;
	// mullw r11,r29,r30
	r11.s64 = int64_t(r29.s32) * int64_t(r30.s32);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mullw r5,r28,r30
	ctx.r5.s64 = int64_t(r28.s32) * int64_t(r30.s32);
	// add r4,r11,r24
	ctx.r4.u64 = r11.u64 + r24.u64;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// rlwinm r11,r26,0,29,29
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 0) & 0x4;
	// mr r4,r25
	ctx.r4.u64 = r25.u64;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subfic r11,r11,0
	xer.ca = r11.u32 <= 0;
	r11.s64 = 0 - r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~r11.u32 + r11.u32 < ~r11.u32) | (~r11.u32 + r11.u32 + xer.ca < xer.ca);
	r11.u64 = ~r11.u64 + r11.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x2;
	// addi r11,r11,2
	r11.s64 = r11.s64 + 2;
	// mullw r11,r11,r27
	r11.s64 = int64_t(r11.s32) * int64_t(r27.s32);
	// addi r11,r11,3
	r11.s64 = r11.s64 + 3;
	// rlwinm r5,r11,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// bl 0x831b0ed0
	sub_831B0ED0(ctx, base);
	// lwz r11,13444(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13444);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
loc_82BE58F8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x831b0b68
	return;
}

__attribute__((alias("__imp__sub_82BE5900"))) PPC_WEAK_FUNC(sub_82BE5900);
PPC_FUNC_IMPL(__imp__sub_82BE5900) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b14
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r25,r4
	r25.u64 = ctx.r4.u64;
	// mr r23,r5
	r23.u64 = ctx.r5.u64;
	// mr r24,r6
	r24.u64 = ctx.r6.u64;
	// li r26,0
	r26.s64 = 0;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// ld r27,32(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r28,24(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r30,16(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x82be594c
	if (cr6.eq) goto loc_82BE594C;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_82BE594C:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x82be596c
	if (cr6.eq) goto loc_82BE596C;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_82BE596C:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x82be5a4c
	if (cr6.eq) goto loc_82BE5A4C;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5990
	if (cr6.eq) goto loc_82BE5990;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfadf8
	sub_82BFADF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE5990:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be59b4
	if (cr6.eq) goto loc_82BE59B4;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf98a0
	sub_82BF98A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE59B4:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be59d4
	if (cr6.eq) goto loc_82BE59D4;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE59D4:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be59f4
	if (cr6.eq) goto loc_82BE59F4;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE59F4:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5a20
	if (cr6.eq) goto loc_82BE5A20;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5A20:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5a48
	if (cr6.eq) goto loc_82BE5A48;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5A48:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_82BE5A4C:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x82be5a9c
	if (cr6.eq) goto loc_82BE5A9C;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5a6c
	if (cr6.eq) goto loc_82BE5A6C;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9e78
	sub_82BF9E78(ctx, base);
loc_82BE5A6C:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5a98
	if (cr6.eq) goto loc_82BE5A98;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5A98:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_82BE5A9C:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x82be5b38
	if (cr6.eq) goto loc_82BE5B38;
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5ac4
	if (cr6.eq) goto loc_82BE5AC4;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5AC4:
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5aec
	if (cr6.eq) goto loc_82BE5AEC;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5AEC:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5b0c
	if (cr6.eq) goto loc_82BE5B0C;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9cf8
	sub_82BF9CF8(ctx, base);
loc_82BE5B0C:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5b34
	if (cr6.eq) goto loc_82BE5B34;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5B34:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_82BE5B38:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// addi r26,r31,12122
	r26.s64 = r31.s64 + 12122;
	// addi r27,r11,16400
	r27.s64 = r11.s64 + 16400;
loc_82BE5B44:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82be5b5c
	if (!cr6.gt) goto loc_82BE5B5C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BE5B5C:
	// li r11,8450
	r11.s64 = 8450;
	// mr r29,r24
	r29.u64 = r24.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r24,65535
	cr6.compare<uint32_t>(r24.u32, 65535, xer);
	// stwu r23,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r23.u32);
	ctx.r3.u32 = ea;
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
	// ble cr6,0x82be5b98
	if (!cr6.gt) goto loc_82BE5B98;
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r27
	r11.u64 = PPC_LOAD_U32(r11.u32 + r27.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / r11.u32;
	// twllei r11,0
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r29,r10,r11
	r29.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
loc_82BE5B98:
	// lbz r11,12187(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 12187);
	// lbz r10,10940(r31)
	ctx.r10.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// subfic r9,r11,0
	xer.ca = r11.u32 <= 0;
	ctx.r9.s64 = 0 - r11.s64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// lbzx r11,r26,r11
	r11.u64 = PPC_LOAD_U8(r26.u32 + r11.u32);
	// clrlwi r10,r9,31
	ctx.r10.u64 = ctx.r9.u32 & 0x1;
	// rlwimi r11,r10,8,23,23
	r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0x100) | (r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r28,r11,23
	r28.u64 = r11.u32 & 0x1FF;
	// rlwinm r28,r28,0,26,23
	r28.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// bne 0x82be5bf4
	if (!cr0.eq) goto loc_82BE5BF4;
	// lis r11,-16383
	r11.s64 = -1073676288;
	// rlwinm r10,r29,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// clrlwi r9,r25,26
	ctx.r9.u64 = r25.u32 & 0x3F;
	// stwu r11,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r11.u32);
	r30.u32 = ea;
	// or r11,r10,r9
	r11.u64 = ctx.r10.u64 | ctx.r9.u64;
	// ori r11,r11,128
	r11.u64 = r11.u64 | 128;
	// stwu r28,4(r30)
	ea = 4 + r30.u32;
	PPC_STORE_U32(ea, r28.u32);
	r30.u32 = ea;
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r10.u32 = ea;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// b 0x82be5cc0
	goto loc_82BE5CC0;
loc_82BE5BF4:
	// lwz r11,13256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be5c14
	if (!cr6.gt) goto loc_82BE5C14;
	// bl 0x82beba08
	sub_82BEBA08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BE5C14:
	// mr r10,r30
	ctx.r10.u64 = r30.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r30.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// clrlwi r6,r25,26
	ctx.r6.u64 = r25.u32 & 0x3F;
	// rlwinm r7,r29,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 16) & 0xFFFF0000;
	// lis r9,-16383
	ctx.r9.s64 = -1073676288;
	// or r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 | ctx.r6.u64;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r7,r7,128
	ctx.r7.u64 = ctx.r7.u64 | 128;
	// lis r5,-16384
	ctx.r5.s64 = -1073741824;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// ori r8,r5,24576
	ctx.r8.u64 = ctx.r5.u64 | 24576;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// lis r10,-16383
	ctx.r10.s64 = -1073676288;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// ori r4,r10,23041
	ctx.r4.u64 = ctx.r10.u64 | 23041;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// li r9,26
	ctx.r9.s64 = 26;
	// stwu r28,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r6.u32 = ea;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r10,r3,17921
	ctx.r10.u64 = ctx.r3.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// stwu r7,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r6.u32 = ea;
	// li r3,25
	ctx.r3.s64 = 25;
	// stwu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// stwu r5,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r6.u32 = ea;
	// stwu r4,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r6.u32 = ea;
	// stwu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r6.u32 = ea;
	// stwu r11,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r6.u32 = ea;
	// stwu r10,4(r6)
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r6.u32 = ea;
	// mr r11,r6
	r11.u64 = ctx.r6.u64;
	// stwu r3,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	r11.u32 = ea;
loc_82BE5CC0:
	// subf. r10,r29,r24
	ctx.r10.s64 = r24.s64 - r29.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x82be5ce8
	if (cr0.eq) goto loc_82BE5CE8;
	// addi r9,r27,4
	ctx.r9.s64 = r27.s64 + 4;
	// rlwinm r11,r25,3,0,28
	r11.u64 = __builtin_rotateleft64(r25.u32 | (r25.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// subf r9,r11,r29
	ctx.r9.s64 = r29.s64 - r11.s64;
	// add r24,r11,r10
	r24.u64 = r11.u64 + ctx.r10.u64;
	// add r23,r9,r23
	r23.u64 = ctx.r9.u64 + r23.u64;
	// b 0x82be5b44
	goto loc_82BE5B44;
loc_82BE5CE8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x831b0b64
	return;
}

__attribute__((alias("__imp__sub_82BE5CF0"))) PPC_WEAK_FUNC(sub_82BE5CF0);
PPC_FUNC_IMPL(__imp__sub_82BE5CF0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r17{};
	PPCRegister r18{};
	PPCRegister r19{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0afc
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r18,r4
	r18.u64 = ctx.r4.u64;
	// mr r17,r5
	r17.u64 = ctx.r5.u64;
	// mr r21,r6
	r21.u64 = ctx.r6.u64;
	// mr r19,r7
	r19.u64 = ctx.r7.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(r31.u32 + 0);
	// li r26,0
	r26.s64 = 0;
	// ld r27,32(r31)
	r27.u64 = PPC_LOAD_U64(r31.u32 + 32);
	// ld r28,24(r31)
	r28.u64 = PPC_LOAD_U64(r31.u32 + 24);
	// cmpldi cr6,r4,0
	cr6.compare<uint64_t>(ctx.r4.u64, 0, xer);
	// ld r30,16(r31)
	r30.u64 = PPC_LOAD_U64(r31.u32 + 16);
	// ld r29,8(r31)
	r29.u64 = PPC_LOAD_U64(r31.u32 + 8);
	// beq cr6,0x82be5d40
	if (cr6.eq) goto loc_82BE5D40;
	// addi r6,r31,1920
	ctx.r6.s64 = r31.s64 + 1920;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r26,0(r31)
	PPC_STORE_U64(r31.u32 + 0, r26.u64);
loc_82BE5D40:
	// cmpldi cr6,r29,0
	cr6.compare<uint64_t>(r29.u64, 0, xer);
	// beq cr6,0x82be5d60
	if (cr6.eq) goto loc_82BE5D60;
	// addi r6,r31,6016
	ctx.r6.s64 = r31.s64 + 6016;
	// li r5,17408
	ctx.r5.s64 = 17408;
	// mr r4,r29
	ctx.r4.u64 = r29.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9fd0
	sub_82BF9FD0(ctx, base);
	// std r26,8(r31)
	PPC_STORE_U64(r31.u32 + 8, r26.u64);
loc_82BE5D60:
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x82be5e40
	if (cr6.eq) goto loc_82BE5E40;
	// rlwinm r11,r30,0,11,14
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1E0000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5d84
	if (cr6.eq) goto loc_82BE5D84;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bfadf8
	sub_82BFADF8(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE5D84:
	// ld r11,40(r31)
	r11.u64 = PPC_LOAD_U64(r31.u32 + 40);
	// and r11,r11,r30
	r11.u64 = r11.u64 & r30.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5da8
	if (cr6.eq) goto loc_82BE5DA8;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// lwz r5,10560(r31)
	ctx.r5.u64 = PPC_LOAD_U32(r31.u32 + 10560);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf98a0
	sub_82BF98A0(ctx, base);
	// mr r30,r3
	r30.u64 = ctx.r3.u64;
loc_82BE5DA8:
	// clrldi r11,r30,52
	r11.u64 = r30.u64 & 0xFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5dc8
	if (cr6.eq) goto loc_82BE5DC8;
	// addi r6,r31,10548
	ctx.r6.s64 = r31.s64 + 10548;
	// li r5,8704
	ctx.r5.s64 = 8704;
	// rldicr r4,r30,52,11
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 52) & 0xFFF0000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5DC8:
	// rlwinm r11,r30,0,15,19
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0x1F000;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5de8
	if (cr6.eq) goto loc_82BE5DE8;
	// addi r6,r31,10528
	ctx.r6.s64 = r31.s64 + 10528;
	// li r5,8576
	ctx.r5.s64 = 8576;
	// rldicr r4,r30,47,4
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 47) & 0xF800000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5DE8:
	// lis r12,0
	r12.s64 = 0;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,42,21
	r12.u64 = __builtin_rotateleft64(r12.u64, 42) & 0xFFFFFC0000000000;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5e14
	if (cr6.eq) goto loc_82BE5E14;
	// addi r6,r31,10368
	ctx.r6.s64 = r31.s64 + 10368;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// rldicr r4,r30,6,15
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 6) & 0xFFFF000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5E14:
	// lis r12,-32
	r12.s64 = -2097152;
	// clrldi r12,r12,22
	r12.u64 = r12.u64 & 0x3FFFFFFFFFF;
	// and r11,r30,r12
	r11.u64 = r30.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5e3c
	if (cr6.eq) goto loc_82BE5E3C;
	// addi r6,r31,10444
	ctx.r6.s64 = r31.s64 + 10444;
	// li r5,8448
	ctx.r5.s64 = 8448;
	// rldicr r4,r30,22,20
	ctx.r4.u64 = __builtin_rotateleft64(r30.u64, 22) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5E3C:
	// std r26,16(r31)
	PPC_STORE_U64(r31.u32 + 16, r26.u64);
loc_82BE5E40:
	// cmpldi cr6,r28,0
	cr6.compare<uint64_t>(r28.u64, 0, xer);
	// beq cr6,0x82be5e90
	if (cr6.eq) goto loc_82BE5E90;
	// clrldi r11,r28,32
	r11.u64 = r28.u64 & 0xFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5e60
	if (cr6.eq) goto loc_82BE5E60;
	// rldicr r4,r28,32,31
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 32) & 0xFFFFFFFF00000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9e78
	sub_82BF9E78(ctx, base);
loc_82BE5E60:
	// lis r12,31
	r12.s64 = 2031616;
	// ori r12,r12,65535
	r12.u64 = r12.u64 | 65535;
	// rldicr r12,r12,34,29
	r12.u64 = __builtin_rotateleft64(r12.u64, 34) & 0xFFFFFFFC00000000;
	// and r11,r28,r12
	r11.u64 = r28.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5e8c
	if (cr6.eq) goto loc_82BE5E8C;
	// addi r6,r31,10596
	ctx.r6.s64 = r31.s64 + 10596;
	// li r5,8832
	ctx.r5.s64 = 8832;
	// rldicr r4,r28,9,20
	ctx.r4.u64 = __builtin_rotateleft64(r28.u64, 9) & 0xFFFFF80000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5E8C:
	// std r26,24(r31)
	PPC_STORE_U64(r31.u32 + 24, r26.u64);
loc_82BE5E90:
	// cmpldi cr6,r27,0
	cr6.compare<uint64_t>(r27.u64, 0, xer);
	// beq cr6,0x82be5f2c
	if (cr6.eq) goto loc_82BE5F2C;
	// clrldi r11,r27,26
	r11.u64 = r27.u64 & 0x3FFFFFFFFF;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5eb8
	if (cr6.eq) goto loc_82BE5EB8;
	// addi r6,r31,10680
	ctx.r6.s64 = r31.s64 + 10680;
	// li r5,8960
	ctx.r5.s64 = 8960;
	// rldicr r4,r27,26,37
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 26) & 0xFFFFFFFFFC000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5EB8:
	// li r12,255
	r12.s64 = 255;
	// rldicr r12,r12,38,25
	r12.u64 = __builtin_rotateleft64(r12.u64, 38) & 0xFFFFFFC000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5ee0
	if (cr6.eq) goto loc_82BE5EE0;
	// addi r6,r31,10832
	ctx.r6.s64 = r31.s64 + 10832;
	// li r5,9088
	ctx.r5.s64 = 9088;
	// rldicr r4,r27,18,7
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 18) & 0xFF00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5EE0:
	// li r12,63
	r12.s64 = 63;
	// rldicr r12,r12,49,14
	r12.u64 = __builtin_rotateleft64(r12.u64, 49) & 0xFFFE000000000000;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5f00
	if (cr6.eq) goto loc_82BE5F00;
	// rldicr r4,r27,9,5
	ctx.r4.u64 = __builtin_rotateleft64(r27.u64, 9) & 0xFC00000000000000;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9cf8
	sub_82BF9CF8(ctx, base);
loc_82BE5F00:
	// li r12,1
	r12.s64 = 1;
	// rldicr r12,r12,56,63
	r12.u64 = __builtin_rotateleft64(r12.u64, 56) & 0xFFFFFFFFFFFFFFFF;
	// and r11,r27,r12
	r11.u64 = r27.u64 & r12.u64;
	// cmpldi cr6,r11,0
	cr6.compare<uint64_t>(r11.u64, 0, xer);
	// beq cr6,0x82be5f28
	if (cr6.eq) goto loc_82BE5F28;
	// addi r6,r31,10112
	ctx.r6.s64 = r31.s64 + 10112;
	// li r5,18688
	ctx.r5.s64 = 18688;
	// lis r4,-256
	ctx.r4.s64 = -16777216;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf9c38
	sub_82BF9C38(ctx, base);
loc_82BE5F28:
	// std r26,32(r31)
	PPC_STORE_U64(r31.u32 + 32, r26.u64);
loc_82BE5F2C:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r24,12436(r31)
	r24.u64 = PPC_LOAD_U32(r31.u32 + 12436);
	// addi r23,r31,12122
	r23.s64 = r31.s64 + 12122;
	// clrlwi r22,r18,26
	r22.u64 = r18.u32 & 0x3F;
	// addi r20,r11,16400
	r20.s64 = r11.s64 + 16400;
loc_82BE5F40:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82be5f58
	if (!cr6.gt) goto loc_82BE5F58;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BE5F58:
	// li r11,8450
	r11.s64 = 8450;
	// mr r27,r19
	r27.u64 = r19.u64;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r19,65535
	cr6.compare<uint32_t>(r19.u32, 65535, xer);
	// stwu r17,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r17.u32);
	ctx.r3.u32 = ea;
	// mr r25,r3
	r25.u64 = ctx.r3.u64;
	// ble cr6,0x82be5f94
	if (!cr6.gt) goto loc_82BE5F94;
	// rlwinm r11,r18,3,0,28
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// lwzx r11,r11,r20
	r11.u64 = PPC_LOAD_U32(r11.u32 + r20.u32);
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / r11.u32;
	// twllei r11,0
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// mullw r27,r10,r11
	r27.s64 = int64_t(ctx.r10.s32) * int64_t(r11.s32);
loc_82BE5F94:
	// lbz r8,12187(r31)
	ctx.r8.u64 = PPC_LOAD_U8(r31.u32 + 12187);
	// rlwinm r11,r21,1,0,30
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,24(r24)
	ctx.r10.u64 = PPC_LOAD_U32(r24.u32 + 24);
	// rlwinm r7,r27,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 16) & 0xFFFF0000;
	// subfic r9,r8,0
	xer.ca = ctx.r8.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r8.s64;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(r24.u32 + 0);
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subfe r5,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + xer.ca < xer.ca);
	ctx.r5.u64 = ~ctx.r9.u64 + ctx.r9.u64 + xer.ca;
	xer.ca = temp.u8;
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// lbzx r4,r23,r8
	ctx.r4.u64 = PPC_LOAD_U8(r23.u32 + ctx.r8.u32);
	// clrlwi r8,r5,31
	ctx.r8.u64 = ctx.r5.u32 & 0x1;
	// addi r5,r9,512
	ctx.r5.s64 = ctx.r9.s64 + 512;
	// clrlwi r9,r11,3
	ctx.r9.u64 = r11.u32 & 0x1FFFFFFF;
	// rlwimi r4,r8,8,23,23
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x100) | (ctx.r4.u64 & 0xFFFFFFFFFFFFFEFF);
	// rlwinm r8,r5,0,19,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x1000;
	// rlwinm r11,r6,1,0,1
	r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xC0000000;
	// clrlwi r5,r27,8
	ctx.r5.u64 = r27.u32 & 0xFFFFFF;
	// rlwinm r6,r6,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	// andi. r26,r4,319
	r26.u64 = ctx.r4.u64 & 319;
	cr0.compare<int32_t>(r26.s32, 0, xer);
	// or r30,r7,r22
	r30.u64 = ctx.r7.u64 | r22.u64;
	// add r28,r8,r9
	r28.u64 = ctx.r8.u64 + ctx.r9.u64;
	// or r29,r5,r11
	r29.u64 = ctx.r5.u64 | r11.u64;
	// cmplwi r6,0
	cr0.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq 0x82be601c
	if (cr0.eq) goto loc_82BE601C;
	// rlwinm r9,r21,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r27,1,8,30
	ctx.r8.u64 = __builtin_rotateleft64(r27.u32 | (r27.u64 << 32), 1) & 0xFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r29,r8,r11
	r29.u64 = ctx.r8.u64 | r11.u64;
	// rlwinm r9,r10,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r10,3
	ctx.r10.u64 = ctx.r10.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// ori r30,r30,2048
	r30.u64 = r30.u64 | 2048;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r28,r11,r10
	r28.u64 = r11.u64 + ctx.r10.u64;
loc_82BE601C:
	// lbz r11,10940(r31)
	r11.u64 = PPC_LOAD_U8(r31.u32 + 10940);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be604c
	if (!cr0.eq) goto loc_82BE604C;
	// lis r11,-16381
	r11.s64 = -1073545216;
	// ori r11,r11,8705
	r11.u64 = r11.u64 | 8705;
	// stwu r11,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r11.u32);
	r25.u32 = ea;
	// stwu r26,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r26.u32);
	r25.u32 = ea;
	// stwu r30,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r30.u32);
	r25.u32 = ea;
	// stwu r28,4(r25)
	ea = 4 + r25.u32;
	PPC_STORE_U32(ea, r28.u32);
	r25.u32 = ea;
	// mr r11,r25
	r11.u64 = r25.u64;
	// stwu r29,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, r29.u32);
	r11.u32 = ea;
	// b 0x82be6110
	goto loc_82BE6110;
loc_82BE604C:
	// lwz r11,13256(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 13256);
	// addi r3,r31,13248
	ctx.r3.s64 = r31.s64 + 13248;
	// lwz r10,13260(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 13260);
	// addi r9,r11,16
	ctx.r9.s64 = r11.s64 + 16;
	// cmplw cr6,r9,r10
	cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, xer);
	// ble cr6,0x82be606c
	if (!cr6.gt) goto loc_82BE606C;
	// bl 0x82beba08
	sub_82BEBA08(ctx, base);
	// mr r11,r3
	r11.u64 = ctx.r3.u64;
loc_82BE606C:
	// mr r10,r25
	ctx.r10.u64 = r25.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(r11.u32 + 0, r25.u32);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// addi r8,r11,16
	ctx.r8.s64 = r11.s64 + 16;
	// ori r9,r9,24576
	ctx.r9.u64 = ctx.r9.u64 | 24576;
	// stw r8,13256(r31)
	PPC_STORE_U32(r31.u32 + 13256, ctx.r8.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lis r5,-16383
	ctx.r5.s64 = -1073676288;
	// lis r9,-16381
	ctx.r9.s64 = -1073545216;
	// lis r7,-16384
	ctx.r7.s64 = -1073741824;
	// ori r9,r9,8705
	ctx.r9.u64 = ctx.r9.u64 | 8705;
	// ori r7,r7,24576
	ctx.r7.u64 = ctx.r7.u64 | 24576;
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// ori r8,r5,23041
	ctx.r8.u64 = ctx.r5.u64 | 23041;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r11,r11,4
	r11.s64 = r11.s64 + 4;
	// li r4,26
	ctx.r4.s64 = 26;
	// rlwinm r10,r11,12,20,31
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// rlwinm r11,r11,0,3,30
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1FFFFFFE;
	// stwu r9,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r5.u32 = ea;
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// rlwinm r10,r10,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1000;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// stwu r26,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r26.u32);
	ctx.r5.u32 = ea;
	// ori r10,r9,17921
	ctx.r10.u64 = ctx.r9.u64 | 17921;
	// ori r11,r11,1
	r11.u64 = r11.u64 | 1;
	// li r9,25
	ctx.r9.s64 = 25;
	// stwu r30,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r5.u32 = ea;
	// stwu r28,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r28.u32);
	ctx.r5.u32 = ea;
	// stwu r29,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r29.u32);
	ctx.r5.u32 = ea;
	// stwu r7,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r5.u32 = ea;
	// stwu r6,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r5.u32 = ea;
	// stwu r8,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r5.u32 = ea;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// stwu r11,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r5.u32 = ea;
	// stwu r10,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r5.u32 = ea;
	// mr r11,r5
	r11.u64 = ctx.r5.u64;
	// stwu r9,4(r11)
	ea = 4 + r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	r11.u32 = ea;
loc_82BE6110:
	// subf. r10,r27,r19
	ctx.r10.s64 = r19.s64 - r27.s64;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// stw r11,48(r31)
	PPC_STORE_U32(r31.u32 + 48, r11.u32);
	// beq 0x82be6138
	if (cr0.eq) goto loc_82BE6138;
	// addi r9,r20,4
	ctx.r9.s64 = r20.s64 + 4;
	// rlwinm r11,r18,3,0,28
	r11.u64 = __builtin_rotateleft64(r18.u32 | (r18.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r9
	r11.u64 = PPC_LOAD_U32(r11.u32 + ctx.r9.u32);
	// subf r9,r11,r27
	ctx.r9.s64 = r27.s64 - r11.s64;
	// add r19,r11,r10
	r19.u64 = r11.u64 + ctx.r10.u64;
	// add r21,r9,r21
	r21.u64 = ctx.r9.u64 + r21.u64;
	// b 0x82be5f40
	goto loc_82BE5F40;
loc_82BE6138:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x831b0b4c
	return;
}

__attribute__((alias("__imp__sub_82BE6140"))) PPC_WEAK_FUNC(sub_82BE6140);
PPC_FUNC_IMPL(__imp__sub_82BE6140) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r10,28
	r11.u64 = ctx.r10.u32 & 0xF;
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82be619c
	if (!cr6.eq) goto loc_82BE619C;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r10,r10,23,30,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x3;
	// cmplwi cr6,r10,3
	cr6.compare<uint32_t>(ctx.r10.u32, 3, xer);
	// bne cr6,0x82be6168
	if (!cr6.eq) goto loc_82BE6168;
	// li r11,18
	r11.s64 = 18;
	// b 0x82be61c4
	goto loc_82BE61C4;
loc_82BE6168:
	// cmplwi cr6,r10,2
	cr6.compare<uint32_t>(ctx.r10.u32, 2, xer);
	// bne cr6,0x82be6178
	if (!cr6.eq) goto loc_82BE6178;
	// li r11,17
	r11.s64 = 17;
	// b 0x82be61c4
	goto loc_82BE61C4;
loc_82BE6178:
	// cmplwi cr6,r10,0
	cr6.compare<uint32_t>(ctx.r10.u32, 0, xer);
	// bne cr6,0x82be6188
	if (!cr6.eq) goto loc_82BE6188;
	// li r11,20
	r11.s64 = 20;
	// b 0x82be61c4
	goto loc_82BE61C4;
loc_82BE6188:
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r10,r10,0,21,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x400;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be61c4
	if (cr0.eq) goto loc_82BE61C4;
	// li r11,19
	r11.s64 = 19;
	// b 0x82be61c4
	goto loc_82BE61C4;
loc_82BE619C:
	// cmplwi cr6,r11,4
	cr6.compare<uint32_t>(r11.u32, 4, xer);
	// bne cr6,0x82be61c4
	if (!cr6.eq) goto loc_82BE61C4;
	// rlwinm. r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be61c4
	if (cr0.eq) goto loc_82BE61C4;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// rlwinm r10,r10,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x600;
	// cmplwi cr6,r10,1024
	cr6.compare<uint32_t>(ctx.r10.u32, 1024, xer);
	// bne cr6,0x82be61c4
	if (!cr6.eq) goto loc_82BE61C4;
	// li r11,16
	r11.s64 = 16;
loc_82BE61C4:
	// mr r3,r11
	ctx.r3.u64 = r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE61D0"))) PPC_WEAK_FUNC(sub_82BE61D0);
PPC_FUNC_IMPL(__imp__sub_82BE61D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// li r11,0
	r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r10,r10,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x3FFFFFC;
	// stw r10,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r10.u32);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6200"))) PPC_WEAK_FUNC(sub_82BE6200);
PPC_FUNC_IMPL(__imp__sub_82BE6200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister r11{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	r11.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r10,r10,3,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x7;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, r11.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, r11.u32);
	// lwz r11,28(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6230"))) PPC_WEAK_FUNC(sub_82BE6230);
PPC_FUNC_IMPL(__imp__sub_82BE6230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister ctr{};
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r0{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82be6258
	if (!cr6.eq) goto loc_82BE6258;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1424);
	// b 0x82be6260
	goto loc_82BE6260;
loc_82BE6258:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1428);
loc_82BE6260:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r10,8
	cr6.compare<uint32_t>(ctx.r10.u32, 8, xer);
	// bgt cr6,0x82be642c
	if (cr6.gt) goto loc_82BE642C;
	// lis r12,-32243
	r12.s64 = -2113077248;
	// addi r12,r12,-10672
	r12.s64 = r12.s64 + -10672;
	// lbzx r0,r12,r10
	r0.u64 = PPC_LOAD_U8(r12.u32 + ctx.r10.u32);
	// rlwinm r0,r0,2,0,29
	r0.u64 = __builtin_rotateleft64(r0.u32 | (r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32066
	r12.s64 = -2101477376;
	// addi r12,r12,25248
	r12.s64 = r12.s64 + 25248;
	// add r12,r12,r0
	r12.u64 = r12.u64 + r0.u64;
	// mtctr r12
	ctr.u64 = r12.u64;
	// nop 
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		goto loc_82BE6334;
	case 1:
		goto loc_82BE6368;
	case 2:
		goto loc_82BE62E4;
	case 3:
		goto loc_82BE62A0;
	case 4:
		goto loc_82BE642C;
	case 5:
		goto loc_82BE6398;
	case 6:
		goto loc_82BE63C8;
	case 7:
		goto loc_82BE63E4;
	case 8:
		goto loc_82BE6400;
	default:
		__builtin_unreachable();
	}
loc_82BE62A0:
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// bne 0x82be642c
	if (!cr0.eq) goto loc_82BE642C;
	// rlwinm. r11,r11,0,0,0
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x80000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be62c8
	if (cr0.eq) goto loc_82BE62C8;
	// lwz r11,44(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 44);
	// li r10,5120
	ctx.r10.s64 = 5120;
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// divwu r4,r11,r10
	ctx.r4.u32 = r11.u32 / ctx.r10.u32;
	// clrlwi r3,r9,20
	ctx.r3.u64 = ctx.r9.u32 & 0xFFF;
	// bl 0x82bfb958
	sub_82BFB958(ctx, base);
loc_82BE62C8:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// clrlwi. r11,r11,31
	r11.u64 = r11.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be642c
	if (cr0.eq) goto loc_82BE642C;
	// lis r10,-31943
	ctx.r10.s64 = -2093416448;
	// li r11,0
	r11.s64 = 0;
	// stw r11,-2100(r10)
	PPC_STORE_U32(ctx.r10.u32 + -2100, r11.u32);
	// b 0x82be642c
	goto loc_82BE642C;
loc_82BE62E4:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be6308
	if (cr6.eq) goto loc_82BE6308;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be6308
	if (cr6.eq) goto loc_82BE6308;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
loc_82BE6308:
	// lwz r11,32(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r30,-20096
	r30.s64 = -1317011456;
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// rlwinm r3,r11,0,0,19
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r29,r10,0,0,19
	r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// mr r3,r29
	ctx.r3.u64 = r29.u64;
loc_82BE632C:
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// b 0x82be642c
	goto loc_82BE642C;
loc_82BE6334:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be6358
	if (cr6.eq) goto loc_82BE6358;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be6358
	if (cr6.eq) goto loc_82BE6358;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
loc_82BE6358:
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// rlwinm r3,r11,0,0,29
	ctx.r3.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82be632c
	goto loc_82BE632C;
loc_82BE6368:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be638c
	if (cr6.eq) goto loc_82BE638C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be638c
	if (cr6.eq) goto loc_82BE638C;
	// li r5,11
	ctx.r5.s64 = 11;
loc_82BE6380:
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
loc_82BE638C:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// b 0x82be632c
	goto loc_82BE632C;
loc_82BE6398:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be63bc
	if (cr6.eq) goto loc_82BE63BC;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be63bc
	if (cr6.eq) goto loc_82BE63BC;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,7
	ctx.r5.s64 = 7;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
loc_82BE63BC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 32);
	// lis r4,-20096
	ctx.r4.s64 = -1317011456;
	// b 0x82be632c
	goto loc_82BE632C;
loc_82BE63C8:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be638c
	if (cr6.eq) goto loc_82BE638C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be638c
	if (cr6.eq) goto loc_82BE638C;
	// li r5,8
	ctx.r5.s64 = 8;
	// b 0x82be6380
	goto loc_82BE6380;
loc_82BE63E4:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be638c
	if (cr6.eq) goto loc_82BE638C;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be638c
	if (cr6.eq) goto loc_82BE638C;
	// li r5,17
	ctx.r5.s64 = 17;
	// b 0x82be6380
	goto loc_82BE6380;
loc_82BE6400:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(r31.u32 + 8);
	// cmplwi cr6,r4,0
	cr6.compare<uint32_t>(ctx.r4.u32, 0, xer);
	// beq cr6,0x82be6424
	if (cr6.eq) goto loc_82BE6424;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// beq cr6,0x82be6424
	if (cr6.eq) goto loc_82BE6424;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = r31.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
loc_82BE6424:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bf7670
	sub_82BF7670(ctx, base);
loc_82BE642C:
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE6440"))) PPC_WEAK_FUNC(sub_82BE6440);
PPC_FUNC_IMPL(__imp__sub_82BE6440) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r20{};
	PPCRegister r21{};
	PPCRegister r22{};
	PPCRegister r23{};
	PPCRegister r24{};
	PPCRegister r25{};
	PPCRegister r26{};
	PPCRegister r27{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b08
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r22,r3
	r22.u64 = ctx.r3.u64;
	// mr r27,r5
	r27.u64 = ctx.r5.u64;
	// mr r20,r6
	r20.u64 = ctx.r6.u64;
	// mr r21,r7
	r21.u64 = ctx.r7.u64;
	// mr r23,r8
	r23.u64 = ctx.r8.u64;
	// mr r26,r9
	r26.u64 = ctx.r9.u64;
	// mr r25,r10
	r25.u64 = ctx.r10.u64;
	// rldicl r31,r30,32,32
	r31.u64 = __builtin_rotateleft64(r30.u64, 32) & 0xFFFFFFFF;
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq cr6,0x82be6484
	if (cr6.eq) goto loc_82BE6484;
	// lwz r11,276(r1)
	r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// ori r24,r11,2
	r24.u64 = r11.u64 | 2;
	// b 0x82be6488
	goto loc_82BE6488;
loc_82BE6484:
	// lwz r24,276(r1)
	r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
loc_82BE6488:
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// mr r10,r22
	ctx.r10.u64 = r22.u64;
	// clrlwi r9,r11,28
	ctx.r9.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r9,4
	cr6.compare<uint32_t>(ctx.r9.u32, 4, xer);
	// bne cr6,0x82be64b4
	if (!cr6.eq) goto loc_82BE64B4;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be64b4
	if (cr0.eq) goto loc_82BE64B4;
	// lwz r11,24(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 24);
	// cmplwi cr6,r11,0
	cr6.compare<uint32_t>(r11.u32, 0, xer);
	// beq cr6,0x82be64b4
	if (cr6.eq) goto loc_82BE64B4;
	// mr r10,r11
	ctx.r10.u64 = r11.u64;
loc_82BE64B4:
	// andi. r11,r24,4112
	r11.u64 = r24.u64 & 4112;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// lis r29,-32256
	r29.s64 = -2113929216;
	// lis r28,-32256
	r28.s64 = -2113929216;
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// beq 0x82be6508
	if (cr0.eq) goto loc_82BE6508;
	// beq cr6,0x82be6500
	if (cr6.eq) goto loc_82BE6500;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82be64e4
	if (!cr6.eq) goto loc_82BE64E4;
	// lwz r11,1424(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1424);
	// b 0x82be64e8
	goto loc_82BE64E8;
loc_82BE64E4:
	// lwz r11,1428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1428);
loc_82BE64E8:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,23992(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 23992);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,8(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 8);
	// b 0x82be6540
	goto loc_82BE6540;
loc_82BE6500:
	// lwz r31,12(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82be6540
	goto loc_82BE6540;
loc_82BE6508:
	// beq cr6,0x82be653c
	if (cr6.eq) goto loc_82BE653C;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82be6520
	if (!cr6.eq) goto loc_82BE6520;
	// lwz r11,1424(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1424);
	// b 0x82be6524
	goto loc_82BE6524;
loc_82BE6520:
	// lwz r11,1428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1428);
loc_82BE6524:
	// lwz r11,0(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// lwz r10,23992(r11)
	ctx.r10.u64 = PPC_LOAD_U32(r11.u32 + 23992);
	// rlwinm r11,r31,4,0,27
	r11.u64 = __builtin_rotateleft64(r31.u32 | (r31.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// lwz r31,4(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 4);
	// b 0x82be6540
	goto loc_82BE6540;
loc_82BE653C:
	// lwz r31,8(r10)
	r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
loc_82BE6540:
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be6590
	if (cr6.eq) goto loc_82BE6590;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82be655c
	if (!cr6.eq) goto loc_82BE655C;
	// lwz r11,1424(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1424);
	// b 0x82be6560
	goto loc_82BE6560;
loc_82BE655C:
	// lwz r11,1428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1428);
loc_82BE6560:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmpldi cr6,r30,0
	cr6.compare<uint64_t>(r30.u64, 0, xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne cr6,0x82be6578
	if (!cr6.eq) goto loc_82BE6578;
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x82be6580
	if (cr6.eq) goto loc_82BE6580;
loc_82BE6578:
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82be6584
	goto loc_82BE6584;
loc_82BE6580:
	// mr r6,r22
	ctx.r6.u64 = r22.u64;
loc_82BE6584:
	// mr r5,r27
	ctx.r5.u64 = r27.u64;
	// mr r4,r31
	ctx.r4.u64 = r31.u64;
	// bl 0x82beb670
	sub_82BEB670(ctx, base);
loc_82BE6590:
	// andi. r11,r24,18
	r11.u64 = r24.u64 & 18;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// cmplwi r11,0
	cr0.compare<uint32_t>(r11.u32, 0, xer);
	// bne 0x82be6678
	if (!cr0.eq) goto loc_82BE6678;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82be65b0
	if (!cr6.eq) goto loc_82BE65B0;
	// lwz r11,1424(r28)
	r11.u64 = PPC_LOAD_U32(r28.u32 + 1424);
	// b 0x82be65b4
	goto loc_82BE65B4;
loc_82BE65B0:
	// lwz r11,1428(r29)
	r11.u64 = PPC_LOAD_U32(r29.u32 + 1428);
loc_82BE65B4:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// rlwinm r11,r26,12,20,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r26,3
	ctx.r10.u64 = r26.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r30,r11,r10
	r30.u64 = r11.u64 + ctx.r10.u64;
	// add r29,r30,r25
	r29.u64 = r30.u64 + r25.u64;
	// bl 0x831cca90
	sub_831CCA90(ctx, base);
	// lwz r11,10888(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 10888);
	// cmplw cr6,r11,r3
	cr6.compare<uint32_t>(r11.u32, ctx.r3.u32, xer);
	// beq cr6,0x82be65f4
	if (cr6.eq) goto loc_82BE65F4;
	// mr r5,r29
	ctx.r5.u64 = r29.u64;
	// mr r4,r30
	ctx.r4.u64 = r30.u64;
	// addi r3,r31,11824
	ctx.r3.s64 = r31.s64 + 11824;
	// bl 0x82beacf0
	sub_82BEACF0(ctx, base);
	// b 0x82be6678
	goto loc_82BE6678;
loc_82BE65F4:
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82be660c
	if (!cr6.gt) goto loc_82BE660C;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BE660C:
	// li r11,2609
	r11.s64 = 2609;
	// lwz r10,284(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// addi r11,r29,4095
	r11.s64 = r29.s64 + 4095;
	// ori r9,r9,2607
	ctx.r9.u64 = ctx.r9.u64 | 2607;
	// rlwinm r8,r30,0,0,19
	ctx.r8.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 0) & 0xFFFFF000;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// lis r7,-16380
	ctx.r7.s64 = -1073479680;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// subf r11,r8,r11
	r11.s64 = r11.s64 - ctx.r8.s64;
	// ori r10,r7,15360
	ctx.r10.u64 = ctx.r7.u64 | 15360;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,2609
	ctx.r6.s64 = 2609;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r30,8
	r30.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stwu r4,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r3.u32 = ea;
	// stwu r30,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r30.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
loc_82BE6678:
	// rlwinm. r6,r24,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(r24.u32 | (r24.u64 << 32), 0) & 0x10;
	cr0.compare<int32_t>(ctx.r6.s32, 0, xer);
	// bne 0x82be668c
	if (!cr0.eq) goto loc_82BE668C;
	// lwz r11,0(r22)
	r11.u64 = PPC_LOAD_U32(r22.u32 + 0);
	// rlwinm. r11,r11,0,10,10
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be671c
	if (cr0.eq) goto loc_82BE671C;
loc_82BE668C:
	// clrlwi. r11,r24,31
	r11.u64 = r24.u32 & 0x1;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be66fc
	if (!cr0.eq) goto loc_82BE66FC;
	// cmplwi cr6,r20,0
	cr6.compare<uint32_t>(r20.u32, 0, xer);
	// beq cr6,0x82be66b0
	if (cr6.eq) goto loc_82BE66B0;
	// cmplwi cr6,r23,0
	cr6.compare<uint32_t>(r23.u32, 0, xer);
	// beq cr6,0x82be66b0
	if (cr6.eq) goto loc_82BE66B0;
	// rlwinm r11,r23,0,0,24
	r11.u64 = __builtin_rotateleft64(r23.u32 | (r23.u64 << 32), 0) & 0xFFFFFF80;
	// addi r9,r22,24
	ctx.r9.s64 = r22.s64 + 24;
	// b 0x82be66b8
	goto loc_82BE66B8;
loc_82BE66B0:
	// rlwinm r11,r21,0,0,24
	r11.u64 = __builtin_rotateleft64(r21.u32 | (r21.u64 << 32), 0) & 0xFFFFFF80;
	// addi r9,r22,20
	ctx.r9.s64 = r22.s64 + 20;
loc_82BE66B8:
	// subf r11,r11,r26
	r11.s64 = r26.s64 - r11.s64;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r10,r11,r25
	ctx.r10.u64 = r11.u64 + r25.u64;
	// rlwinm r8,r11,25,7,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 25) & 0x1FFFFFF;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// clrlwi r11,r7,16
	r11.u64 = ctx.r7.u32 & 0xFFFF;
	// rlwinm r10,r10,25,7,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1FFFFFF;
	// rlwinm r7,r7,16,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF;
	// cmplw cr6,r10,r11
	cr6.compare<uint32_t>(ctx.r10.u32, r11.u32, xer);
	// ble cr6,0x82be66e4
	if (!cr6.gt) goto loc_82BE66E4;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
loc_82BE66E4:
	// cmplw cr6,r8,r7
	cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, xer);
	// blt cr6,0x82be66f0
	if (cr6.lt) goto loc_82BE66F0;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82BE66F0:
	// rlwinm r10,r8,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, r11.u32);
loc_82BE66FC:
	// cmplwi cr6,r6,0
	cr6.compare<uint32_t>(ctx.r6.u32, 0, xer);
	// beq cr6,0x82be671c
	if (cr6.eq) goto loc_82BE671C;
	// rlwinm r11,r26,12,20,31
	r11.u64 = __builtin_rotateleft64(r26.u32 | (r26.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r26,3
	ctx.r10.u64 = r26.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// addis r26,r11,-16384
	r26.s64 = r11.s64 + -1073741824;
loc_82BE671C:
	// li r11,256
	r11.s64 = 256;
loc_82BE6720:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r22
	reserved.u32 = *(uint32_t*)(base + r22.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r22
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r22.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82be6720
	if (!cr0.eq) goto loc_82BE6720;
	// mr r3,r26
	ctx.r3.u64 = r26.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x831b0b58
	return;
}

__attribute__((alias("__imp__sub_82BE6748"))) PPC_WEAK_FUNC(sub_82BE6748);
PPC_FUNC_IMPL(__imp__sub_82BE6748) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// li r11,-256
	r11.s64 = -256;
loc_82BE6760:
	// mfmsr r8
	// mtmsrd r13,1
	// lwarx r10,0,r31
	reserved.u32 = *(uint32_t*)(base + r31.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r31
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r31.u32), reserved.s32, __builtin_bswap32(ctx.r9.s32));
	cr0.so = xer.so;
	// mtmsrd r8,1
	// bne 0x82be6760
	if (!cr0.eq) goto loc_82BE6760;
	// mr r11,r10
	r11.u64 = ctx.r10.u64;
	// rlwinm r11,r11,0,20,23
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xF00;
	// cmplwi cr6,r11,256
	cr6.compare<uint32_t>(r11.u32, 256, xer);
	// bne cr6,0x82be684c
	if (!cr6.eq) goto loc_82BE684C;
	// lwz r11,20(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 20);
	// lis r30,-1
	r30.s64 = -65536;
	// lis r28,16384
	r28.s64 = 1073741824;
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82be67ec
	if (cr6.eq) goto loc_82BE67EC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// stw r30,20(r31)
	PPC_STORE_U32(r31.u32 + 20, r30.u32);
	// rlwinm. r11,r10,0,10,10
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be67d0
	if (!cr0.eq) goto loc_82BE67D0;
	// rlwinm r11,r4,12,20,31
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r4,3
	ctx.r10.u64 = ctx.r4.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r4,r28,r11
	ctx.r4.s64 = r11.s64 - r28.s64;
loc_82BE67D0:
	// rlwinm r11,r4,0,0,24
	r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82bfb688
	sub_82BFB688(ctx, base);
loc_82BE67EC:
	// cmplwi cr6,r29,0
	cr6.compare<uint32_t>(r29.u32, 0, xer);
	// beq cr6,0x82be684c
	if (cr6.eq) goto loc_82BE684C;
	// lwz r11,24(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// cmplw cr6,r11,r30
	cr6.compare<uint32_t>(r11.u32, r30.u32, xer);
	// beq cr6,0x82be684c
	if (cr6.eq) goto loc_82BE684C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 16) & 0xFFFF;
	// clrlwi r9,r11,16
	ctx.r9.u64 = r11.u32 & 0xFFFF;
	// stw r30,24(r31)
	PPC_STORE_U32(r31.u32 + 24, r30.u32);
	// rlwinm. r11,r10,0,10,10
	r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x200000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be6830
	if (!cr0.eq) goto loc_82BE6830;
	// rlwinm r11,r29,12,20,31
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r29,3
	ctx.r10.u64 = r29.u32 & 0x1FFFFFFF;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r11,r11,r10
	r11.u64 = r11.u64 + ctx.r10.u64;
	// subf r29,r28,r11
	r29.s64 = r11.s64 - r28.s64;
loc_82BE6830:
	// rlwinm r11,r29,0,0,24
	r11.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r9,r9,7,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r10,r8,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 7) & 0xFFFFFF80;
	// li r5,0
	ctx.r5.s64 = 0;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + r11.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + r11.u64;
	// bl 0x82bfb688
	sub_82BFB688(ctx, base);
loc_82BE684C:
	// sync 
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

__attribute__((alias("__imp__sub_82BE6858"))) PPC_WEAK_FUNC(sub_82BE6858);
PPC_FUNC_IMPL(__imp__sub_82BE6858) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,28
	r11.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r11,1
	cr6.compare<uint32_t>(r11.u32, 1, xer);
	// bne cr6,0x82be6874
	if (!cr6.eq) goto loc_82BE6874;
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// rlwinm r11,r11,0,0,29
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFFFFC;
	// b 0x82be6898
	goto loc_82BE6898;
loc_82BE6874:
	// cmplwi cr6,r11,3
	cr6.compare<uint32_t>(r11.u32, 3, xer);
	// bne cr6,0x82be6894
	if (!cr6.eq) goto loc_82BE6894;
	// lwz r11,32(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm. r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// bne 0x82be6898
	if (!cr0.eq) goto loc_82BE6898;
	// lwz r11,48(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82be6898
	goto loc_82BE6898;
loc_82BE6894:
	// lwz r11,24(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
loc_82BE6898:
	// rlwinm r9,r11,12,20,31
	ctx.r9.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 12) & 0xFFF;
	// clrlwi r10,r11,3
	ctx.r10.u64 = r11.u32 & 0x1FFFFFFF;
	// addi r11,r9,512
	r11.s64 = ctx.r9.s64 + 512;
	// rlwinm r11,r11,0,19,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// add r3,r11,r10
	ctx.r3.u64 = r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE68B0"))) PPC_WEAK_FUNC(sub_82BE68B0);
PPC_FUNC_IMPL(__imp__sub_82BE68B0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b2c
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// mr r29,r5
	r29.u64 = ctx.r5.u64;
	// lwz r11,56(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 56);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 48);
	// cmplw cr6,r3,r11
	cr6.compare<uint32_t>(ctx.r3.u32, r11.u32, xer);
	// ble cr6,0x82be68e0
	if (!cr6.gt) goto loc_82BE68E0;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bebf60
	sub_82BEBF60(ctx, base);
loc_82BE68E0:
	// li r10,2609
	ctx.r10.s64 = 2609;
	// rlwinm r11,r30,12,20,31
	r11.u64 = __builtin_rotateleft64(r30.u32 | (r30.u64 << 32), 12) & 0xFFF;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// addi r11,r11,512
	r11.s64 = r11.s64 + 512;
	// ori r9,r10,512
	ctx.r9.u64 = ctx.r10.u64 | 512;
	// rlwinm r10,r11,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x1000;
	// clrlwi r11,r30,3
	r11.u64 = r30.u32 & 0x1FFFFFFF;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// add r11,r10,r11
	r11.u64 = ctx.r10.u64 + r11.u64;
	// ori r9,r8,2607
	ctx.r9.u64 = ctx.r8.u64 | 2607;
	// add r10,r11,r29
	ctx.r10.u64 = r11.u64 + r29.u64;
	// rlwinm r11,r11,0,0,19
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0xFFFFF000;
	// addi r10,r10,4095
	ctx.r10.s64 = ctx.r10.s64 + 4095;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// lis r8,-16380
	ctx.r8.s64 = -1073479680;
	// rlwinm r10,r10,0,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFF000;
	// ori r9,r8,15360
	ctx.r9.u64 = ctx.r8.u64 | 15360;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - r11.s64;
	// li r8,3
	ctx.r8.s64 = 3;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// li r7,2609
	ctx.r7.s64 = 2609;
	// li r6,0
	ctx.r6.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r5,8
	ctx.r5.s64 = 8;
	// stwu r11,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, r11.u32);
	ctx.r3.u32 = ea;
	// stwu r9,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r3.u32 = ea;
	// stwu r8,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r3.u32 = ea;
	// stwu r7,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r3.u32 = ea;
	// stwu r6,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r3.u32 = ea;
	// stwu r10,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r3.u32 = ea;
	// stwu r5,4(r3)
	ea = 4 + ctx.r3.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r3.u32 = ea;
	// stw r3,48(r31)
	PPC_STORE_U32(r31.u32 + 48, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x831b0b7c
	return;
}

__attribute__((alias("__imp__sub_82BE6970"))) PPC_WEAK_FUNC(sub_82BE6970);
PPC_FUNC_IMPL(__imp__sub_82BE6970) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,4
	r11.s64 = ctx.r3.s64 + 4;
loc_82BE6984:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82be6984
	if (!cr0.eq) goto loc_82BE6984;
	// mr r31,r10
	r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,1
	cr6.compare<uint32_t>(r31.u32, 1, xer);
	// bne cr6,0x82be69cc
	if (!cr6.eq) goto loc_82BE69CC;
	// lwz r11,0(r3)
	r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82be69cc
	if (!cr6.eq) goto loc_82BE69CC;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be69cc
	if (cr0.eq) goto loc_82BE69CC;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82be6970
	sub_82BE6970(ctx, base);
loc_82BE69CC:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE69E8"))) PPC_WEAK_FUNC(sub_82BE69E8);
PPC_FUNC_IMPL(__imp__sub_82BE69E8) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCRegister reserved{};
	PPCCRRegister cr0{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	r31.u64 = ctx.r3.u64;
	// addi r11,r31,4
	r11.s64 = r31.s64 + 4;
loc_82BE6A00:
	// mfmsr r9
	// mtmsrd r13,1
	// lwarx r10,0,r11
	reserved.u32 = *(uint32_t*)(base + r11.u32);
	ctx.r10.u64 = __builtin_bswap32(reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	cr0.lt = 0;
	cr0.gt = 0;
	cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + r11.u32), reserved.s32, __builtin_bswap32(ctx.r10.s32));
	cr0.so = xer.so;
	// mtmsrd r9,1
	// bne 0x82be6a00
	if (!cr0.eq) goto loc_82BE6A00;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	cr6.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne cr6,0x82be6a54
	if (!cr6.eq) goto loc_82BE6A54;
	// lwz r11,0(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 0);
	// clrlwi r10,r11,28
	ctx.r10.u64 = r11.u32 & 0xF;
	// cmplwi cr6,r10,4
	cr6.compare<uint32_t>(ctx.r10.u32, 4, xer);
	// bne cr6,0x82be6a48
	if (!cr6.eq) goto loc_82BE6A48;
	// rlwinm. r11,r11,0,1,1
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x40000000;
	cr0.compare<int32_t>(r11.s32, 0, xer);
	// beq 0x82be6a48
	if (cr0.eq) goto loc_82BE6A48;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(r31.u32 + 24);
	// bl 0x82be69e8
	sub_82BE69E8(ctx, base);
loc_82BE6A48:
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82be6230
	sub_82BE6230(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82BE6A54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6A68"))) PPC_WEAK_FUNC(sub_82BE6A68);
PPC_FUNC_IMPL(__imp__sub_82BE6A68) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr6{};
	PPCRegister r11{};
	PPCRegister r12{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	r30.u64 = ctx.r4.u64;
	// bl 0x8324b56c
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,2
	cr6.compare<int32_t>(ctx.r3.s32, 2, xer);
	// bne cr6,0x82be6a98
	if (!cr6.eq) goto loc_82BE6A98;
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1424(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1424);
	// b 0x82be6aa0
	goto loc_82BE6AA0;
loc_82BE6A98:
	// lis r11,-32256
	r11.s64 = -2113929216;
	// lwz r11,1428(r11)
	r11.u64 = PPC_LOAD_U32(r11.u32 + 1428);
loc_82BE6AA0:
	// lwz r31,0(r11)
	r31.u64 = PPC_LOAD_U32(r11.u32 + 0);
	// cmplwi cr6,r31,0
	cr6.compare<uint32_t>(r31.u32, 0, xer);
	// beq cr6,0x82be6ab4
	if (cr6.eq) goto loc_82BE6AB4;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x82bd93f0
	sub_82BD93F0(ctx, base);
loc_82BE6AB4:
	// stw r31,0(r30)
	PPC_STORE_U32(r30.u32 + 0, r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	// ld r30,-24(r1)
	r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82BE6AD0"))) PPC_WEAK_FUNC(sub_82BE6AD0);
PPC_FUNC_IMPL(__imp__sub_82BE6AD0) {
	PPC_FUNC_PROLOGUE();
	PPCXERRegister xer{};
	PPCCRRegister cr0{};
	PPCRegister r11{};
	PPCRegister r28{};
	PPCRegister r29{};
	PPCRegister r30{};
	PPCRegister r31{};
	uint32_t ea{};
	// mflr r12
	// bl 0x831b0b28
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	r28.u64 = ctx.r3.u64;
	// mr r29,r4
	r29.u64 = ctx.r4.u64;
	// lis r4,25728
	ctx.r4.s64 = 1686110208;
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// mr. r31,r3
	r31.u64 = ctx.r3.u64;
	cr0.compare<int32_t>(r31.s32, 0, xer);
	// bne 0x82be6b00
	if (!cr0.eq) goto loc_82BE6B00;
loc_82BE6AF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82be6b90
	goto loc_82BE6B90;
loc_82BE6B00:
	// lis r30,16
	r30.s64 = 1048576;
	// rlwinm. r10,r29,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x4;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// li r11,3
	r11.s64 = 3;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
	// beq 0x82be6b20
	if (cr0.eq) goto loc_82BE6B20;
	// lis r30,48
	r30.s64 = 3145728;
	// li r11,2
	r11.s64 = 2;
	// ori r30,r30,1
	r30.u64 = r30.u64 | 1;
loc_82BE6B20:
	// rlwinm. r10,r29,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(r29.u32 | (r29.u64 << 32), 0) & 0x200;
	cr0.compare<int32_t>(ctx.r10.s32, 0, xer);
	// beq 0x82be6b2c
	if (cr0.eq) goto loc_82BE6B2C;
	// oris r30,r30,64
	r30.u64 = r30.u64 | 4194304;
loc_82BE6B2C:
	// lis r4,-32128
	ctx.r4.s64 = -2105540608;
	// mr r3,r28
	ctx.r3.u64 = r28.u64;
	// rlwimi r4,r11,28,1,3
	ctx.r4.u64 = (__builtin_rotateleft32(r11.u32, 28) & 0x70000000) | (ctx.r4.u64 & 0xFFFFFFFF8FFFFFFF);
	// bl 0x831cc9c8
	sub_831CC9C8(ctx, base);
	// cmplwi r3,0
	cr0.compare<uint32_t>(ctx.r3.u32, 0, xer);
	// bne 0x82be6b54
	if (!cr0.eq) goto loc_82BE6B54;
	// lis r4,9344
	ctx.r4.s64 = 612368384;
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// bl 0x831cca60
	sub_831CCA60(ctx, base);
	// b 0x82be6af8
	goto loc_82BE6AF8;
loc_82BE6B54:
	// lwz r11,28(r31)
	r11.u64 = PPC_LOAD_U32(r31.u32 + 28);
	// rlwinm r10,r28,0,6,29
	ctx.r10.u64 = __builtin_rotateleft64(r28.u32 | (r28.u64 << 32), 0) & 0x3FFFFFC;
	// ori r9,r3,3
	ctx.r9.u64 = ctx.r3.u64 | 3;
	// stw r30,0(r31)
	PPC_STORE_U32(r31.u32 + 0, r30.u32);
	// rlwinm r11,r11,0,4,4
	r11.u64 = __builtin_rotateleft64(r11.u32 | (r11.u64 << 32), 0) & 0x8000000;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,24(r31)
	PPC_STORE_U32(r31.u32 + 24, ctx.r9.u32);
	// or r11,r10,r11
	r11.u64 = ctx.r10.u64 | r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// stw r8,4(r31)
	PPC_STORE_U32(r31.u32 + 4, ctx.r8.u32);
	// oris r11,r11,4096
	r11.u64 = r11.u64 | 268435456;
	// stw r10,20(r31)
	PPC_STORE_U32(r31.u32 + 20, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = r31.u64;
	// ori r11,r11,2
	r11.u64 = r11.u64 | 2;
	// stw r11,28(r31)
	PPC_STORE_U32(r31.u32 + 28, r11.u32);
loc_82BE6B90:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x831b0b78
	return;
}

